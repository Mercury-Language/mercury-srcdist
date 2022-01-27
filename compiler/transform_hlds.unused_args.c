/*
** Automatically generated from `unused_args.m'
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
#include "libs.file_util.mih"
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
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_pragma.mih"
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



#line 911 "unused_args.m"
struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s {
#line 911 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__VarUsage_1;
#line 911 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5;
#line 914 "unused_args.m"
  MR_bool transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded;
#line 917 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__VarDep0_20;
#line 917 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgDep0_21;
#line 923 "unused_args.m"
  jmp_buf transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_0;
#line 923 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__PredProcId_23;
#line 923 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgVar_24;
#line 923 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__Argument_34;
#line 923 "unused_args.m"
  MR_Box transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv1_Argument_34;
#line 931 "unused_args.m"
  jmp_buf transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_1;
#line 931 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__X_35;
#line 931 "unused_args.m"
  MR_Box transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv3_X_35;
#line 911 "unused_args.m"
};


#line 190 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0;

#line 193 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1builtin__type_ctor_info_int_0;

#line 196 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__unused_args__type_ctor_info_new_proc_info_0;

#line 199 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 202 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 205 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 208 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 211 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unused_args__type_ctor_info_usage_info_0;

#line 214 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__analysis__pti_analysis_result_2__plain_transform_hlds__unused_args__type_ctor_info_unused_args_call_0__plain_transform_hlds__unused_args__type_ctor_info_unused_args_answer_0;

#line 217 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

#line 220 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0;

#line 223 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0;

#line 226 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 229 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_arg_var_in_proc_0_0[2];

#line 232 "transform_hlds.unused_args.c"
static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_arg_var_in_proc_0_0;

#line 235 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_arg_var_in_proc_0_0[1];

#line 238 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_arg_var_in_proc_0[1];

#line 241 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_arg_var_in_proc_0[1];

#line 244 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_arg_var_in_proc_0[1];

#line 247 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__unused_args__type_ctor_info_new_proc_info_0;

#line 250 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 253 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 256 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 259 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_fixup_info_0_0[5];

#line 262 "transform_hlds.unused_args.c"
static const MR_ConstString transform_hlds__unused_args__transform_hlds__unused_args__field_names_fixup_info_0_0[5];

#line 265 "transform_hlds.unused_args.c"
static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_fixup_info_0_0;

#line 268 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_fixup_info_0_0[1];

#line 271 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_fixup_info_0[1];

#line 274 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_fixup_info_0[1];

#line 277 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_fixup_info_0[1];

#line 280 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_new_proc_info_0_0[4];

#line 283 "transform_hlds.unused_args.c"
static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_new_proc_info_0_0;

#line 286 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_new_proc_info_0_0[1];

#line 289 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_new_proc_info_0[1];

#line 292 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_new_proc_info_0[1];

#line 295 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_new_proc_info_0[1];

#line 298 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_answer_0[1];

#line 301 "transform_hlds.unused_args.c"
static const MR_NotagFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__notag_functor_desc_unused_args_answer_0;

#line 304 "transform_hlds.unused_args.c"
static const MR_EnumFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_unused_args_call_0_0;

#line 307 "transform_hlds.unused_args.c"
static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_value_ordered_unused_args_call_0[1];

#line 310 "transform_hlds.unused_args.c"
static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_name_ordered_unused_args_call_0[1];

#line 313 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_call_0[1];

#line 316 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_func_info_0[1];

#line 319 "transform_hlds.unused_args.c"
static const MR_NotagFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__notag_functor_desc_unused_args_func_info_0;

#line 322 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_unused_args_info_0_0[2];

#line 325 "transform_hlds.unused_args.c"
static const MR_ConstString transform_hlds__unused_args__transform_hlds__unused_args__field_names_unused_args_info_0_0[2];

#line 328 "transform_hlds.unused_args.c"
static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_unused_args_info_0_0;

#line 331 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_unused_args_info_0_0[1];

#line 334 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_unused_args_info_0[1];

#line 337 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_unused_args_info_0[1];

#line 340 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_info_0[1];

#line 343 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 346 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__set_ordlist__ti_set_ordlist_1transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0;

#line 349 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_usage_info_0_0[2];

#line 352 "transform_hlds.unused_args.c"
static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_usage_info_0_0;

#line 355 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_usage_info_0_0[1];

#line 358 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_usage_info_0[1];

#line 361 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_usage_info_0[1];

#line 364 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_usage_info_0[1];

#line 367 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0;

#line 370 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_warning_info_0_0[4];

#line 373 "transform_hlds.unused_args.c"
static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_warning_info_0_0;

#line 376 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_warning_info_0_0[1];

#line 379 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_warning_info_0[1];

#line 382 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_warning_info_0[1];

#line 385 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_warning_info_0[1];

#line 388 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____arg_var_in_proc_0_0_10001(
#line 391 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 393 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 396 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____arg_var_in_proc_0_0_10001(
#line 399 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 401 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 403 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 406 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____fixup_info_0_0_10001(
#line 409 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 411 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 414 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____fixup_info_0_0_10001(
#line 417 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 419 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 421 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 424 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____new_proc_info_0_0_10001(
#line 427 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 429 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 432 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____new_proc_info_0_0_10001(
#line 435 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 437 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 439 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 442 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____proc_call_info_0_0_10001(
#line 445 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 447 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 450 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____proc_call_info_0_0_10001(
#line 453 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 455 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 457 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 460 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_answer_0_0_10001(
#line 463 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 465 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 468 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_answer_0_0_10001(
#line 471 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 473 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 475 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 478 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_call_0_0_10001(
#line 481 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 483 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 486 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_call_0_0_10001(
#line 489 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 491 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 493 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 496 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_func_info_0_0_10001(
#line 499 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 501 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 504 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_func_info_0_0_10001(
#line 507 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 509 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 511 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 514 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_info_0_0_10001(
#line 517 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 519 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 522 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_info_0_0_10001(
#line 525 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 527 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 529 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 532 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____usage_info_0_0_10001(
#line 535 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 537 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 540 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____usage_info_0_0_10001(
#line 543 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 545 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 547 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 550 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_dep_0_0_10001(
#line 553 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 555 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 558 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____var_dep_0_0_10001(
#line 561 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 563 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 565 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 568 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_usage_0_0_10001(
#line 571 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 573 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 576 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____var_usage_0_0_10001(
#line 579 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 581 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 583 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 586 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____warning_info_0_0_10001(
#line 589 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 591 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 594 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____warning_info_0_0_10001(
#line 597 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 599 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 601 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 604 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__to_term_1_1_f_0_10001(
#line 607 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 609 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1);

#line 612 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__from_term_2_2_p_0_10001(
#line 615 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 617 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 619 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2);

#line 622 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__to_term_1_1_f_0_10001(
#line 625 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 627 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1);

#line 630 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__from_term_2_2_p_0_10001(
#line 633 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 635 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 637 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2);

#line 640 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 643 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 645 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 647 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 649 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 652 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__equivalent_3_3_p_0_10001(
#line 655 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 657 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 659 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 661 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 664 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 667 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 669 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 671 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 673 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 676 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__equivalent_3_3_p_0_10001(
#line 679 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 681 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 683 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 685 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 688 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_name_2_2_f_0_10001(
#line 691 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg);

#line 694 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001(
#line 697 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg);

#line 700 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001(
#line 703 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg);

#line 706 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__bottom_2_2_f_0_10001(
#line 709 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 711 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1);

#line 714 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__top_2_2_f_0_10001(
#line 717 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 719 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1);

#line 722 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__get_func_info_6_6_p_0_10001(
#line 725 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 727 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 729 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 731 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3,
#line 733 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_6);

#line 206 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_f_0(void);

#line 202 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(void);

#line 199 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0(void);

#line 221 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(
#line 221 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_10,
#line 221 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_3);

#line 216 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_93_95_48_3_p_0(
#line 216 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer1_5,
#line 216 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer2_6);

#line 185 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_103_101_116_95_102_117_110_99_95_105_110_102_111_95_54_95_95_91_52_44_32_53_93_95_48_6_p_0(
#line 185 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_17,
#line 185 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleName_18,
#line 185 "unused_args.m"
  MR_Word transform_hlds__unused_args__FuncId_19,
#line 185 "unused_args.m"
  MR_Word * transform_hlds__unused_args__FuncInfo_22);

#line 184 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 183 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_50_95_95_91_50_93_95_48_2_f_0(
#line 183 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1);

#line 182 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 181 "unused_args.m"
static MR_Integer MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 180 "unused_args.m"
static MR_String MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 1841 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_117_110_117_115_101_100_95_97_114_103_115_95_95_91_49_93_95_48_3_f_0(
#line 1841 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredInfo_6,
#line 1841 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_7);

#line 1789 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_103_97_116_104_101_114_95_119_97_114_110_105_110_103_95_95_91_49_93_95_48_9_p_0(
#line 1789 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredInfo_11,
#line 1789 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_12,
#line 1789 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_13,
#line 1789 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs0_14,
#line 1789 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_26,
#line 1789 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_27,
#line 1789 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Specs_0_28,
#line 1789 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Specs_29);

#line 1261 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0(
#line 1261 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ArgNo_5,
#line 1261 "unused_args.m"
  MR_Word transform_hlds__unused_args__ElemsToRemove_6,
#line 1261 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_List_0_14,
#line 1261 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_List_15);

#line 1119 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(
#line 1119 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_8,
#line 1119 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredStatus_9,
#line 1119 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__4_4,
#line 1119 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44,
#line 1119 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_PredInfo_45);

#line 864 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_117_115_101_100_95_97_114_103_115_95_112_97_115_115_95_95_91_50_93_95_48_5_p_0(
#line 864 "unused_args.m"
  MR_Integer transform_hlds__unused_args__PassNum_6,
#line 864 "unused_args.m"
  MR_Word transform_hlds__unused_args__LocalPredProcIds_8,
#line 864 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_12,
#line 864 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_13);

#line 1016 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_create_new_pred__1016__1_3_p_0(
#line 1016 "unused_args.m"
  MR_Word transform_hlds__unused_args__FuncInfo_25,
#line 1016 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer_26,
#line 1016 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_56);

#line 1009 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__IntroducedFrom__func__unused_args_create_new_pred__1009__1_1_f_0(
#line 1009 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_54);

#line 685 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__685__1_2_p_0(
#line 685 "unused_args.m"
  MR_Word transform_hlds__unused_args__LHS_49,
#line 685 "unused_args.m"
  MR_Word transform_hlds__unused_args__CellVar_58);

#line 703 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__703__1_2_p_0(
#line 703 "unused_args.m"
  MR_Word transform_hlds__unused_args__LHS_49,
#line 703 "unused_args.m"
  MR_Word transform_hlds__unused_args__CellVar_144);

#line 662 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__662__1_2_p_0(
#line 662 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_116,
#line 662 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_117);

#line 429 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__setup_proc_args__429__1_3_p_0(
#line 429 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVars_35,
#line 429 "unused_args.m"
  MR_Integer transform_hlds__unused_args__HeadVar__2_84,
#line 429 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__3_85);

#line 209 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__from_term_2_2_p_0(
#line 209 "unused_args.m"
  MR_Word transform_hlds__unused_args__Term_3);

#line 206 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__to_term_1_1_f_0(void);

#line 228 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__from_term_2_2_p_0(
#line 228 "unused_args.m"
  MR_Word transform_hlds__unused_args__Term_4,
#line 228 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2);

#line 225 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__to_term_1_1_f_0(
#line 225 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1);

#line 202 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__equivalent_3_3_p_0(
#line 202 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_7);

#line 199 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__more_precise_than_3_3_p_0(
#line 199 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_4);

#line 221 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__equivalent_3_3_p_0(
#line 221 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_9,
#line 221 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_10,
#line 221 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_3);

#line 216 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__more_precise_than_3_3_p_0(
#line 216 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_4,
#line 216 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer1_5,
#line 216 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer2_6);

#line 185 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__get_func_info_6_6_p_0(
#line 185 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_17,
#line 185 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleName_18,
#line 185 "unused_args.m"
  MR_Word transform_hlds__unused_args__FuncId_19,
#line 185 "unused_args.m"
  MR_Word * transform_hlds__unused_args__FuncInfo_22);

#line 184 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__top_2_2_f_0(
#line 184 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_12);

#line 183 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__bottom_2_2_f_0(
#line 183 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1);

#line 182 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0(void);

#line 181 "unused_args.m"
static MR_Integer MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_version_number_2_2_f_0(void);

#line 180 "unused_args.m"
static MR_String MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_name_2_2_f_0(void);

#line 152 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____warning_info_0_0(
#line 152 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 152 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 152 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 152 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____warning_info_0_0(
#line 152 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 152 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 150 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____var_usage_0_0(
#line 150 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 150 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 150 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 150 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_usage_0_0(
#line 150 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 150 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 147 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____var_dep_0_0(
#line 147 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 147 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 147 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 147 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_dep_0_0(
#line 147 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 147 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 142 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____usage_info_0_0(
#line 142 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 142 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 142 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 142 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____usage_info_0_0(
#line 142 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 142 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 602 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_info_0_0(
#line 602 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 602 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 602 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 602 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_info_0_0(
#line 602 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 602 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 973 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____proc_call_info_0_0(
#line 973 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 973 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 973 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 973 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____proc_call_info_0_0(
#line 973 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 973 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 977 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____new_proc_info_0_0(
#line 977 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 977 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 977 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 977 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____new_proc_info_0_0(
#line 977 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 977 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 1393 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____fixup_info_0_0(
#line 1393 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 1393 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 1393 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 1393 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____fixup_info_0_0(
#line 1393 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1393 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 133 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____arg_var_in_proc_0_0(
#line 133 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 133 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 133 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 133 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____arg_var_in_proc_0_0(
#line 133 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 133 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 1980 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_2_4_p_0(
#line 1980 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 1980 "unused_args.m"
  MR_Word transform_hlds__unused_args__CalleePredProcId_6,
#line 1980 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_17,
#line 1980 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_18);

#line 1977 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_4_p_0_1(
#line 1977 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1977 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1977 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1977 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3);

#line 1969 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_4_p_0(
#line 1969 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 1969 "unused_args.m"
  MR_Word transform_hlds__unused_args__CallerPredProcId_6,
#line 1969 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_12,
#line 1969 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_13);

#line 1932 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__maybe_record_intermod_unused_args_2_7_p_0(
#line 1932 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_8,
#line 1932 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_9,
#line 1932 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_10,
#line 1932 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredInfo_11,
#line 1932 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_12,
#line 1932 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_19,
#line 1932 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_20);

#line 1928 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0_1(
#line 1928 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1928 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1928 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1928 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3);

#line 1920 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0(
#line 1920 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_6,
#line 1920 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_7,
#line 1920 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_8,
#line 1920 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_12,
#line 1920 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_13);

#line 1876 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__format_arg_list_2_2_f_0(
#line 1876 "unused_args.m"
  MR_Integer transform_hlds__unused_args__First_4,
#line 1876 "unused_args.m"
  MR_Word transform_hlds__unused_args__List_5);

#line 1824 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__drop_poly_inserted_args_3_p_0(
#line 1824 "unused_args.m"
  MR_Integer transform_hlds__unused_args__NumInserted_1,
#line 1824 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 1824 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__3_3);

#line 1708 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__gather_warnings_and_pragmas_10_p_0(
#line 1708 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_1,
#line 1708 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_2,
#line 1708 "unused_args.m"
  MR_Word transform_hlds__unused_args__DoWarn_3,
#line 1708 "unused_args.m"
  MR_Word transform_hlds__unused_args__DoPragma_4,
#line 1708 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__5_5,
#line 1708 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_6,
#line 1708 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Specs_0_7,
#line 1708 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Specs_8,
#line 1708 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0_9,
#line 1708 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_10);

#line 1655 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__check_deconstruct_args_6_p_0(
#line 1655 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_7,
#line 1655 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedVars_8,
#line 1655 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_9,
#line 1655 "unused_args.m"
  MR_Word transform_hlds__unused_args__Modes_10,
#line 1655 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_SomeUsed_0_25,
#line 1655 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_12);

#line 1612 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__need_unify_4_p_0(
#line 1612 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 1612 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedVars_6,
#line 1612 "unused_args.m"
  MR_Word transform_hlds__unused_args__Unify_7,
#line 1612 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_8);

#line 1594 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_cases_6_p_0(
#line 1594 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1594 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2,
#line 1594 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_3,
#line 1594 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_4,
#line 1594 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5,
#line 1594 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_6);

#line 1579 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_disjuncts_6_p_0(
#line 1579 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1579 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2,
#line 1579 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_3,
#line 1579 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_4,
#line 1579 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5,
#line 1579 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_6);

#line 1556 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_conjuncts_6_p_0(
#line 1556 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1556 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2,
#line 1556 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_3,
#line 1556 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_4,
#line 1556 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5,
#line 1556 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_6);

#line 1524 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__rename_apart_unused_foreign_arg_8_p_0(
#line 1524 "unused_args.m"
  MR_Word transform_hlds__unused_args__Arg0_9,
#line 1524 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Arg_10,
#line 1524 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Subst_0_26,
#line 1524 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Subst_27,
#line 1524 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_28,
#line 1524 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_29,
#line 1524 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_30,
#line 1524 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_31);

#line 1512 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0_2(
#line 1512 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1512 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1512 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2,
#line 1512 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_3,
#line 1512 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_4,
#line 1512 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_5,
#line 1512 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_6,
#line 1512 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_7,
#line 1512 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_8);

#line 1510 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0_1(
#line 1510 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1510 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1510 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2,
#line 1510 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_3,
#line 1510 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_4,
#line 1510 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_5,
#line 1510 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_6,
#line 1510 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_7,
#line 1510 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_8);

#line 1420 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(
#line 1420 "unused_args.m"
  MR_Word transform_hlds__unused_args__Goal0_6,
#line 1420 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Goal_7,
#line 1420 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_76,
#line 1420 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_77,
#line 1420 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_9);

#line 1404 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(
#line 1404 "unused_args.m"
  MR_Word transform_hlds__unused_args__Goal0_6,
#line 1404 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Goal_7,
#line 1404 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_15,
#line 1404 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_16,
#line 1404 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_9);

#line 1330 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__do_unused_args_fixup_proc_5_p_0(
#line 1330 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_6,
#line 1330 "unused_args.m"
  MR_Word transform_hlds__unused_args__OldPredProcId_7,
#line 1330 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcCallInfo_8,
#line 1330 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo0_9,
#line 1330 "unused_args.m"
  MR_Word * transform_hlds__unused_args__ModuleInfo_10);

#line 1305 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_proc_6_p_0(
#line 1305 "unused_args.m"
  MR_Word transform_hlds__unused_args__VeryVerbose_7,
#line 1305 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_8,
#line 1305 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcCallInfo_9,
#line 1305 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcId_10,
#line 1305 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_18,
#line 1305 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_19);

#line 1302 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_module_6_p_0_1(
#line 1302 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1302 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1302 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1302 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3);

#line 1296 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_module_6_p_0(
#line 1296 "unused_args.m"
  MR_Word transform_hlds__unused_args__VeryVerbose_7,
#line 1296 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_8,
#line 1296 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcIds_9,
#line 1296 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcCallInfo_10,
#line 1296 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_12,
#line 1296 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_13);

#line 1283 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__get_unused_arg_nos_4_p_0(
#line 1283 "unused_args.m"
  MR_Word transform_hlds__unused_args__LocalVars_1,
#line 1283 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 1283 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ArgNo_3,
#line 1283 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__4_4);

#line 1226 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__make_imported_unused_args_pred_info_6_p_0(
#line 1226 "unused_args.m"
  MR_Word transform_hlds__unused_args__OptProc_7,
#line 1226 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_8,
#line 1226 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_0_31,
#line 1226 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_32,
#line 1226 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_33,
#line 1226 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_34);

#line 1187 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__create_call_goal_7_p_0(
#line 1187 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_8,
#line 1187 "unused_args.m"
  MR_Word transform_hlds__unused_args__NewPredId_9,
#line 1187 "unused_args.m"
  MR_Integer transform_hlds__unused_args__NewProcId_10,
#line 1187 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredModule_11,
#line 1187 "unused_args.m"
  MR_String transform_hlds__unused_args__PredName_12,
#line 1187 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34,
#line 1187 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OldProc_35);

#line 1093 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__make_intermod_proc_10_p_0(
#line 1093 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_11,
#line 1093 "unused_args.m"
  MR_Word transform_hlds__unused_args__NewPredId_12,
#line 1093 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_13,
#line 1093 "unused_args.m"
  MR_String transform_hlds__unused_args__NewPredName_14,
#line 1093 "unused_args.m"
  MR_Word transform_hlds__unused_args__OrigPredInfo_15,
#line 1093 "unused_args.m"
  MR_Word transform_hlds__unused_args__OrigProcInfo_16,
#line 1093 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_17,
#line 1093 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs2_18,
#line 1093 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_35,
#line 1093 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_36);

#line 1088 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_4(
#line 1088 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1088 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1088 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1088 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3);

#line 1021 "unused_args.m"
static MR_Box MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_3(
#line 1021 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1021 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1);

#line 1016 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_2(
#line 1016 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1016 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1);

#line 1009 "unused_args.m"
static MR_Box MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_1(
#line 1009 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1009 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1);

#line 987 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0(
#line 987 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_7,
#line 987 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 987 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_0_46,
#line 987 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_47,
#line 987 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48,
#line 987 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_49);

#line 951 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__get_unused_arg_info_5_p_0(
#line 951 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_1,
#line 951 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 951 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_3,
#line 951 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_0_4,
#line 951 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_5);

#line 923 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_1(
#line 923 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 923 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_3(
#line 923 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 923 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_2(
#line 923 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 923 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_4(
#line 923 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 931 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_5(
#line 931 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 931 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_7(
#line 931 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 931 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_6(
#line 931 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 931 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_8(
#line 931 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 911 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0(
#line 911 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_1,
#line 911 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 911 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_3,
#line 911 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_4,
#line 911 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_LocalVars_0_5,
#line 911 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_LocalVars_6);

#line 883 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_single_pass_5_p_0(
#line 883 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 883 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_2,
#line 883 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_3,
#line 883 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4,
#line 883 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_5);

#line 849 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(
#line 849 "unused_args.m"
  MR_Word transform_hlds__unused_args__Info_1,
#line 849 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 849 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3,
#line 849 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_4);

#line 843 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__list_case_to_list_goal_2_p_0(
#line 843 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 843 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2);

#line 828 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_construction_aliases_4_p_0(
#line 828 "unused_args.m"
  MR_Word transform_hlds__unused_args__Alias_1,
#line 828 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 828 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3,
#line 828 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_4);

#line 778 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__partition_deconstruct_args_5_p_0(
#line 778 "unused_args.m"
  MR_Word transform_hlds__unused_args__Info_6,
#line 778 "unused_args.m"
  MR_Word transform_hlds__unused_args__ArgVars_7,
#line 778 "unused_args.m"
  MR_Word transform_hlds__unused_args__ArgModes_8,
#line 778 "unused_args.m"
  MR_Word * transform_hlds__unused_args__InputVars_9,
#line 778 "unused_args.m"
  MR_Word * transform_hlds__unused_args__OutputVars_10);

#line 769 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_rev_arg_dep_5_p_0(
#line 769 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_6,
#line 769 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcId_7,
#line 769 "unused_args.m"
  MR_Word transform_hlds__unused_args__Arg_8,
#line 769 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_10,
#line 769 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_11);

#line 734 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_pred_call_arg_dep_5_p_0(
#line 734 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcId_6,
#line 734 "unused_args.m"
  MR_Word transform_hlds__unused_args__LocalArguments_7,
#line 734 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVarIds_8,
#line 734 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_18,
#line 734 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_19);

#line 685 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_3(
#line 685 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg);

#line 703 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_2(
#line 703 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg);

#line 662 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_1(
#line 662 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 662 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 662 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2);

#line 608 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(
#line 608 "unused_args.m"
  MR_Word transform_hlds__unused_args__Info_5,
#line 608 "unused_args.m"
  MR_Word transform_hlds__unused_args__Goal_6,
#line 608 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87,
#line 608 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);

#line 586 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__set_var_used_3_p_0(
#line 586 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_4,
#line 586 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_6,
#line 586 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_7);

#line 580 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__set_list_vars_used_3_p_0(
#line 580 "unused_args.m"
  MR_Word transform_hlds__unused_args__Vars_4,
#line 580 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_6,
#line 580 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_7);

#line 567 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_aliases_4_p_0(
#line 567 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_5,
#line 567 "unused_args.m"
  MR_Word transform_hlds__unused_args__Aliases_6,
#line 567 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_12,
#line 567 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_13);

#line 560 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__local_var_is_used_2_p_0(
#line 560 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarDep_3,
#line 560 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_4);

#line 547 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_output_args_4_p_0_1(
#line 547 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 547 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 547 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 547 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3);

#line 541 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_output_args_4_p_0(
#line 541 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 541 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcInfo_6,
#line 541 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_9,
#line 541 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_10);

#line 531 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__tvar_to_type_info_var_3_p_0(
#line 531 "unused_args.m"
  MR_Word transform_hlds__unused_args__RttiVarMaps_4,
#line 531 "unused_args.m"
  MR_Word transform_hlds__unused_args__TVar_5,
#line 531 "unused_args.m"
  MR_Word * transform_hlds__unused_args__TypeInfoVar_6);

#line 529 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_2(
#line 529 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 529 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 529 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 529 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3);

#line 528 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_1(
#line 528 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 528 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 528 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2);

#line 513 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0(
#line 513 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 513 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarTypeMap_2,
#line 513 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcId_3,
#line 513 "unused_args.m"
  MR_Word transform_hlds__unused_args__RttiVarMaps_4,
#line 513 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_5,
#line 513 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_6);

#line 493 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__initialise_vardep_3_p_0(
#line 493 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 493 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_2,
#line 493 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_3);

#line 429 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_proc_args_10_p_0_1(
#line 429 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 429 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 429 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2);

#line 393 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_proc_args_10_p_0(
#line 393 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_11,
#line 393 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_12,
#line 393 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_47,
#line 393 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_48,
#line 393 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0_49,
#line 393 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_50,
#line 393 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_51,
#line 393 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OptProcs_52,
#line 393 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53,
#line 393 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_54);

#line 377 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_pred_args_10_p_0(
#line 377 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_1,
#line 377 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 377 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_3,
#line 377 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_4,
#line 377 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0_5,
#line 377 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_6,
#line 377 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_7,
#line 377 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OptProcs_8,
#line 377 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_9,
#line 377 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_10);

#line 333 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_local_var_usage_9_p_0(
#line 333 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 333 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_2,
#line 333 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_3,
#line 333 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__4_4,
#line 333 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__5_5,
#line 333 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_6,
#line 333 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OptProcs_7,
#line 333 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_8,
#line 333 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_9);

#line 173 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__get_unused_args_1_f_0(
#line 173 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_3);

#line 294 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_4_p_0_3(
#line 294 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 294 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 294 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 294 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3,
#line 294 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_4,
#line 294 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_5);

#line 285 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_4_p_0_2(
#line 285 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 285 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 285 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 285 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3);

#line 283 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_4_p_0_1(
#line 283 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 283 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 283 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 283 "unused_args.m"
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



#line 2562 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2570 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0
  }
};

#line 2579 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__unused_args__type_ctor_info_new_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0
  }
};

#line 2588 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2596 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2604 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2612 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2620 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unused_args__type_ctor_info_usage_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0
  }
};

#line 2629 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__analysis__pti_analysis_result_2__plain_transform_hlds__unused_args__type_ctor_info_unused_args_call_0__plain_transform_hlds__unused_args__type_ctor_info_unused_args_answer_0 = {
  &analysis__analysis__type_ctor_info_analysis_result_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0,
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0
  }
};

#line 2638 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2646 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0
  }
};

#line 2655 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0
  }
};

#line 2664 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2673 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_arg_var_in_proc_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2679 "transform_hlds.unused_args.c"
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

#line 2694 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_arg_var_in_proc_0_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_arg_var_in_proc_0_0
};

#line 2699 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_arg_var_in_proc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_arg_var_in_proc_0_0
  }
};

#line 2708 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_arg_var_in_proc_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_arg_var_in_proc_0_0
};

#line 2713 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_arg_var_in_proc_0[1] = {
  (MR_Integer) 0
};

#line 2718 "transform_hlds.unused_args.c"
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

#line 2735 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__unused_args__type_ctor_info_new_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0
  }
};

#line 2744 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2752 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2760 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2769 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_fixup_info_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__unused_args__type_ctor_info_new_proc_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 2778 "transform_hlds.unused_args.c"
static const MR_ConstString transform_hlds__unused_args__transform_hlds__unused_args__field_names_fixup_info_0_0[5] = {
  (MR_String) "fixup_module_info",
  (MR_String) "fixup_proc_call_info",
  (MR_String) "fixup_unused_vars",
  (MR_String) "fixup_varset",
  (MR_String) "fixup_vartypes"
};

#line 2787 "transform_hlds.unused_args.c"
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

#line 2802 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_fixup_info_0_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_fixup_info_0_0
};

#line 2807 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_fixup_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_fixup_info_0_0
  }
};

#line 2816 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_fixup_info_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_fixup_info_0_0
};

#line 2821 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_fixup_info_0[1] = {
  (MR_Integer) 0
};

#line 2826 "transform_hlds.unused_args.c"
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

#line 2843 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_new_proc_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 2851 "transform_hlds.unused_args.c"
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

#line 2866 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_new_proc_info_0_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_new_proc_info_0_0
};

#line 2871 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_new_proc_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_new_proc_info_0_0
  }
};

#line 2880 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_new_proc_info_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_new_proc_info_0_0
};

#line 2885 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_new_proc_info_0[1] = {
  (MR_Integer) 0
};

#line 2890 "transform_hlds.unused_args.c"
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

#line 2907 "transform_hlds.unused_args.c"
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

#line 2924 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_answer_0[1] = {
  (MR_Integer) 0
};

#line 2929 "transform_hlds.unused_args.c"
static const MR_NotagFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__notag_functor_desc_unused_args_answer_0 = {
  (MR_String) "unused_args",
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_String) "args"
};

#line 2936 "transform_hlds.unused_args.c"
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

#line 2953 "transform_hlds.unused_args.c"
static const MR_EnumFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_unused_args_call_0_0 = {
  (MR_String) "unused_args_call",
  (MR_Integer) 0
};

#line 2959 "transform_hlds.unused_args.c"
static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_value_ordered_unused_args_call_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_unused_args_call_0_0
};

#line 2964 "transform_hlds.unused_args.c"
static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_name_ordered_unused_args_call_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_unused_args_call_0_0
};

#line 2969 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_call_0[1] = {
  (MR_Integer) 0
};

#line 2974 "transform_hlds.unused_args.c"
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

#line 2991 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_func_info_0[1] = {
  (MR_Integer) 0
};

#line 2996 "transform_hlds.unused_args.c"
static const MR_NotagFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__notag_functor_desc_unused_args_func_info_0 = {
  (MR_String) "unused_args_func_info",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 3003 "transform_hlds.unused_args.c"
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

#line 3020 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_unused_args_info_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 3026 "transform_hlds.unused_args.c"
static const MR_ConstString transform_hlds__unused_args__transform_hlds__unused_args__field_names_unused_args_info_0_0[2] = {
  (MR_String) "unarg_module_info",
  (MR_String) "unarg_vartypes"
};

#line 3032 "transform_hlds.unused_args.c"
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

#line 3047 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_unused_args_info_0_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_unused_args_info_0_0
};

#line 3052 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_unused_args_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_unused_args_info_0_0
  }
};

#line 3061 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_unused_args_info_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_unused_args_info_0_0
};

#line 3066 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_info_0[1] = {
  (MR_Integer) 0
};

#line 3071 "transform_hlds.unused_args.c"
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

#line 3088 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3096 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__set_ordlist__ti_set_ordlist_1transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0
  }
};

#line 3104 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_usage_info_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__set_ordlist__ti_set_ordlist_1transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0
};

#line 3110 "transform_hlds.unused_args.c"
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

#line 3125 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_usage_info_0_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_usage_info_0_0
};

#line 3130 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_usage_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_usage_info_0_0
  }
};

#line 3139 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_usage_info_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_usage_info_0_0
};

#line 3144 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_usage_info_0[1] = {
  (MR_Integer) 0
};

#line 3149 "transform_hlds.unused_args.c"
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

#line 3166 "transform_hlds.unused_args.c"
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

#line 3183 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0
  }
};

#line 3192 "transform_hlds.unused_args.c"
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

#line 3209 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_warning_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 3217 "transform_hlds.unused_args.c"
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

#line 3232 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_warning_info_0_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_warning_info_0_0
};

#line 3237 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_warning_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_warning_info_0_0
  }
};

#line 3246 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_warning_info_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_warning_info_0_0
};

#line 3251 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_warning_info_0[1] = {
  (MR_Integer) 0
};

#line 3256 "transform_hlds.unused_args.c"
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

#line 3273 "transform_hlds.unused_args.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__to_term__arity1__transform_hlds__unused_args__unused_args_answer__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__to_term_1_1_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__from_term_2_2_p_0_10001))
};

#line 3284 "transform_hlds.unused_args.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__to_term__arity1__transform_hlds__unused_args__unused_args_call__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__to_term_1_1_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__from_term_2_2_p_0_10001))
};

#line 3295 "transform_hlds.unused_args.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__partial_order__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__equivalent_3_3_p_0_10001))
};

#line 3306 "transform_hlds.unused_args.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__partial_order__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__equivalent_3_3_p_0_10001))
};

#line 3317 "transform_hlds.unused_args.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__call_pattern__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__[5] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0))
};

#line 3326 "transform_hlds.unused_args.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__answer_pattern__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0__[5] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0))
};

#line 3335 "transform_hlds.unused_args.c"
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

#line 3350 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____arg_var_in_proc_0_0_10001(
#line 3353 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3355 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3357 "transform_hlds.unused_args.c"
{
#line 3359 "transform_hlds.unused_args.c"
  {
#line 3361 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3364 "transform_hlds.unused_args.c"
    {
#line 3366 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____arg_var_in_proc_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3369 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3371 "transform_hlds.unused_args.c"
  }
#line 3373 "transform_hlds.unused_args.c"
}

#line 3376 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____arg_var_in_proc_0_0_10001(
#line 3379 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3381 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3383 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3385 "transform_hlds.unused_args.c"
{
#line 3387 "transform_hlds.unused_args.c"
  {
#line 3389 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3392 "transform_hlds.unused_args.c"
    {
#line 3394 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____arg_var_in_proc_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3397 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3399 "transform_hlds.unused_args.c"
  }
#line 3401 "transform_hlds.unused_args.c"
}

#line 3404 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____fixup_info_0_0_10001(
#line 3407 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3409 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3411 "transform_hlds.unused_args.c"
{
#line 3413 "transform_hlds.unused_args.c"
  {
#line 3415 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3418 "transform_hlds.unused_args.c"
    {
#line 3420 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____fixup_info_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3423 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3425 "transform_hlds.unused_args.c"
  }
#line 3427 "transform_hlds.unused_args.c"
}

#line 3430 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____fixup_info_0_0_10001(
#line 3433 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3435 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3437 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3439 "transform_hlds.unused_args.c"
{
#line 3441 "transform_hlds.unused_args.c"
  {
#line 3443 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3446 "transform_hlds.unused_args.c"
    {
#line 3448 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____fixup_info_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3451 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3453 "transform_hlds.unused_args.c"
  }
#line 3455 "transform_hlds.unused_args.c"
}

#line 3458 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____new_proc_info_0_0_10001(
#line 3461 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3463 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3465 "transform_hlds.unused_args.c"
{
#line 3467 "transform_hlds.unused_args.c"
  {
#line 3469 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3472 "transform_hlds.unused_args.c"
    {
#line 3474 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____new_proc_info_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3477 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3479 "transform_hlds.unused_args.c"
  }
#line 3481 "transform_hlds.unused_args.c"
}

#line 3484 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____new_proc_info_0_0_10001(
#line 3487 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3489 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3491 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3493 "transform_hlds.unused_args.c"
{
#line 3495 "transform_hlds.unused_args.c"
  {
#line 3497 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3500 "transform_hlds.unused_args.c"
    {
#line 3502 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____new_proc_info_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3505 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3507 "transform_hlds.unused_args.c"
  }
#line 3509 "transform_hlds.unused_args.c"
}

#line 3512 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____proc_call_info_0_0_10001(
#line 3515 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3517 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3519 "transform_hlds.unused_args.c"
{
#line 3521 "transform_hlds.unused_args.c"
  {
#line 3523 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3526 "transform_hlds.unused_args.c"
    {
#line 3528 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____proc_call_info_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3531 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3533 "transform_hlds.unused_args.c"
  }
#line 3535 "transform_hlds.unused_args.c"
}

#line 3538 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____proc_call_info_0_0_10001(
#line 3541 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3543 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3545 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3547 "transform_hlds.unused_args.c"
{
#line 3549 "transform_hlds.unused_args.c"
  {
#line 3551 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3554 "transform_hlds.unused_args.c"
    {
#line 3556 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____proc_call_info_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3559 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3561 "transform_hlds.unused_args.c"
  }
#line 3563 "transform_hlds.unused_args.c"
}

#line 3566 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_answer_0_0_10001(
#line 3569 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3571 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3573 "transform_hlds.unused_args.c"
{
#line 3575 "transform_hlds.unused_args.c"
  {
#line 3577 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3580 "transform_hlds.unused_args.c"
    {
#line 3582 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____unused_args_answer_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3585 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3587 "transform_hlds.unused_args.c"
  }
#line 3589 "transform_hlds.unused_args.c"
}

#line 3592 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_answer_0_0_10001(
#line 3595 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3597 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3599 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3601 "transform_hlds.unused_args.c"
{
#line 3603 "transform_hlds.unused_args.c"
  {
#line 3605 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3608 "transform_hlds.unused_args.c"
    {
#line 3610 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____unused_args_answer_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3613 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3615 "transform_hlds.unused_args.c"
  }
#line 3617 "transform_hlds.unused_args.c"
}

#line 3620 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_call_0_0_10001(
#line 3623 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3625 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3627 "transform_hlds.unused_args.c"
{
#line 3629 "transform_hlds.unused_args.c"
  {
#line 3631 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3634 "transform_hlds.unused_args.c"
    {
#line 3636 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____unused_args_call_0_0();
    }
#line 3639 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3641 "transform_hlds.unused_args.c"
  }
#line 3643 "transform_hlds.unused_args.c"
}

#line 3646 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_call_0_0_10001(
#line 3649 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3651 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3653 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3655 "transform_hlds.unused_args.c"
{
#line 3657 "transform_hlds.unused_args.c"
  {
#line 3659 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3662 "transform_hlds.unused_args.c"
    {
#line 3664 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____unused_args_call_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1);
    }
#line 3667 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3669 "transform_hlds.unused_args.c"
  }
#line 3671 "transform_hlds.unused_args.c"
}

#line 3674 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_func_info_0_0_10001(
#line 3677 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3679 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3681 "transform_hlds.unused_args.c"
{
#line 3683 "transform_hlds.unused_args.c"
  {
#line 3685 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3688 "transform_hlds.unused_args.c"
    {
#line 3690 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____unused_args_func_info_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3693 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3695 "transform_hlds.unused_args.c"
  }
#line 3697 "transform_hlds.unused_args.c"
}

#line 3700 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_func_info_0_0_10001(
#line 3703 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3705 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3707 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3709 "transform_hlds.unused_args.c"
{
#line 3711 "transform_hlds.unused_args.c"
  {
#line 3713 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3716 "transform_hlds.unused_args.c"
    {
#line 3718 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____unused_args_func_info_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3721 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3723 "transform_hlds.unused_args.c"
  }
#line 3725 "transform_hlds.unused_args.c"
}

#line 3728 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_info_0_0_10001(
#line 3731 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3733 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3735 "transform_hlds.unused_args.c"
{
#line 3737 "transform_hlds.unused_args.c"
  {
#line 3739 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3742 "transform_hlds.unused_args.c"
    {
#line 3744 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____unused_args_info_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3747 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3749 "transform_hlds.unused_args.c"
  }
#line 3751 "transform_hlds.unused_args.c"
}

#line 3754 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_info_0_0_10001(
#line 3757 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3759 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3761 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3763 "transform_hlds.unused_args.c"
{
#line 3765 "transform_hlds.unused_args.c"
  {
#line 3767 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3770 "transform_hlds.unused_args.c"
    {
#line 3772 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____unused_args_info_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3775 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3777 "transform_hlds.unused_args.c"
  }
#line 3779 "transform_hlds.unused_args.c"
}

#line 3782 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____usage_info_0_0_10001(
#line 3785 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3787 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3789 "transform_hlds.unused_args.c"
{
#line 3791 "transform_hlds.unused_args.c"
  {
#line 3793 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3796 "transform_hlds.unused_args.c"
    {
#line 3798 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____usage_info_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3801 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3803 "transform_hlds.unused_args.c"
  }
#line 3805 "transform_hlds.unused_args.c"
}

#line 3808 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____usage_info_0_0_10001(
#line 3811 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3813 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3815 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3817 "transform_hlds.unused_args.c"
{
#line 3819 "transform_hlds.unused_args.c"
  {
#line 3821 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3824 "transform_hlds.unused_args.c"
    {
#line 3826 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____usage_info_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3829 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3831 "transform_hlds.unused_args.c"
  }
#line 3833 "transform_hlds.unused_args.c"
}

#line 3836 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_dep_0_0_10001(
#line 3839 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3841 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3843 "transform_hlds.unused_args.c"
{
#line 3845 "transform_hlds.unused_args.c"
  {
#line 3847 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3850 "transform_hlds.unused_args.c"
    {
#line 3852 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____var_dep_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3855 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3857 "transform_hlds.unused_args.c"
  }
#line 3859 "transform_hlds.unused_args.c"
}

#line 3862 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____var_dep_0_0_10001(
#line 3865 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3867 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3869 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3871 "transform_hlds.unused_args.c"
{
#line 3873 "transform_hlds.unused_args.c"
  {
#line 3875 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3878 "transform_hlds.unused_args.c"
    {
#line 3880 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____var_dep_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3883 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3885 "transform_hlds.unused_args.c"
  }
#line 3887 "transform_hlds.unused_args.c"
}

#line 3890 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_usage_0_0_10001(
#line 3893 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3895 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3897 "transform_hlds.unused_args.c"
{
#line 3899 "transform_hlds.unused_args.c"
  {
#line 3901 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3904 "transform_hlds.unused_args.c"
    {
#line 3906 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____var_usage_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3909 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3911 "transform_hlds.unused_args.c"
  }
#line 3913 "transform_hlds.unused_args.c"
}

#line 3916 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____var_usage_0_0_10001(
#line 3919 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3921 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3923 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3925 "transform_hlds.unused_args.c"
{
#line 3927 "transform_hlds.unused_args.c"
  {
#line 3929 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3932 "transform_hlds.unused_args.c"
    {
#line 3934 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____var_usage_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3937 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3939 "transform_hlds.unused_args.c"
  }
#line 3941 "transform_hlds.unused_args.c"
}

#line 3944 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____warning_info_0_0_10001(
#line 3947 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3949 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3951 "transform_hlds.unused_args.c"
{
#line 3953 "transform_hlds.unused_args.c"
  {
#line 3955 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3958 "transform_hlds.unused_args.c"
    {
#line 3960 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____warning_info_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3963 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3965 "transform_hlds.unused_args.c"
  }
#line 3967 "transform_hlds.unused_args.c"
}

#line 3970 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____warning_info_0_0_10001(
#line 3973 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3975 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3977 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3979 "transform_hlds.unused_args.c"
{
#line 3981 "transform_hlds.unused_args.c"
  {
#line 3983 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3986 "transform_hlds.unused_args.c"
    {
#line 3988 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____warning_info_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3991 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3993 "transform_hlds.unused_args.c"
  }
#line 3995 "transform_hlds.unused_args.c"
}

#line 3998 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__to_term_1_1_f_0_10001(
#line 4001 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4003 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1)
#line 4005 "transform_hlds.unused_args.c"
{
#line 4007 "transform_hlds.unused_args.c"
  {
#line 4009 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__wrapper_arg_2;
#line 4011 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4013 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_Term_4;

#line 4016 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4018 "transform_hlds.unused_args.c"
    {
#line 4020 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__conv0_Term_4 = transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__to_term_1_1_f_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 4023 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv0_Term_4));
#line 4025 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__wrapper_arg_2;
#line 4027 "transform_hlds.unused_args.c"
  }
#line 4029 "transform_hlds.unused_args.c"
}

#line 4032 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__from_term_2_2_p_0_10001(
#line 4035 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4037 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 4039 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2)
#line 4041 "transform_hlds.unused_args.c"
{
#line 4043 "transform_hlds.unused_args.c"
  {
#line 4045 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;
#line 4047 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4049 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__2_2;

#line 4052 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4054 "transform_hlds.unused_args.c"
    {
#line 4056 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__from_term_2_2_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), &transform_hlds__unused_args__conv0_HeadVar__2_2);
    }
#line 4059 "transform_hlds.unused_args.c"
    if (transform_hlds__unused_args__succeeded)
#line 4061 "transform_hlds.unused_args.c"
      {
#line 4063 "transform_hlds.unused_args.c"
        *transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__2_2));
#line 4065 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 4067 "transform_hlds.unused_args.c"
      }
#line 4069 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 4071 "transform_hlds.unused_args.c"
  }
#line 4073 "transform_hlds.unused_args.c"
}

#line 4076 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__to_term_1_1_f_0_10001(
#line 4079 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4081 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1)
#line 4083 "transform_hlds.unused_args.c"
{
#line 4085 "transform_hlds.unused_args.c"
  {
#line 4087 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__wrapper_arg_2;
#line 4089 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4091 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_Term_3;

#line 4094 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4096 "transform_hlds.unused_args.c"
    {
#line 4098 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__conv0_Term_3 = transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__to_term_1_1_f_0();
    }
#line 4101 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv0_Term_3));
#line 4103 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__wrapper_arg_2;
#line 4105 "transform_hlds.unused_args.c"
  }
#line 4107 "transform_hlds.unused_args.c"
}

#line 4110 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__from_term_2_2_p_0_10001(
#line 4113 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4115 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 4117 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2)
#line 4119 "transform_hlds.unused_args.c"
{
#line 4121 "transform_hlds.unused_args.c"
  {
#line 4123 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;
#line 4125 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;

#line 4128 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4130 "transform_hlds.unused_args.c"
    {
#line 4132 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__from_term_2_2_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 4135 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 4137 "transform_hlds.unused_args.c"
  }
#line 4139 "transform_hlds.unused_args.c"
}

#line 4142 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 4145 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4147 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 4149 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 4151 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 4153 "transform_hlds.unused_args.c"
{
#line 4155 "transform_hlds.unused_args.c"
  {
#line 4157 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;
#line 4159 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;

#line 4162 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4164 "transform_hlds.unused_args.c"
    {
#line 4166 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__more_precise_than_3_3_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 4169 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 4171 "transform_hlds.unused_args.c"
  }
#line 4173 "transform_hlds.unused_args.c"
}

#line 4176 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__equivalent_3_3_p_0_10001(
#line 4179 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4181 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 4183 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 4185 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 4187 "transform_hlds.unused_args.c"
{
#line 4189 "transform_hlds.unused_args.c"
  {
#line 4191 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;
#line 4193 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;

#line 4196 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4198 "transform_hlds.unused_args.c"
    {
#line 4200 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__equivalent_3_3_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 4203 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 4205 "transform_hlds.unused_args.c"
  }
#line 4207 "transform_hlds.unused_args.c"
}

#line 4210 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 4213 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4215 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 4217 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 4219 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 4221 "transform_hlds.unused_args.c"
{
#line 4223 "transform_hlds.unused_args.c"
  {
#line 4225 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;
#line 4227 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;

#line 4230 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4232 "transform_hlds.unused_args.c"
    {
#line 4234 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__more_precise_than_3_3_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 4237 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 4239 "transform_hlds.unused_args.c"
  }
#line 4241 "transform_hlds.unused_args.c"
}

#line 4244 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__equivalent_3_3_p_0_10001(
#line 4247 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4249 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 4251 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 4253 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 4255 "transform_hlds.unused_args.c"
{
#line 4257 "transform_hlds.unused_args.c"
  {
#line 4259 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;
#line 4261 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;

#line 4264 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4266 "transform_hlds.unused_args.c"
    {
#line 4268 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__equivalent_3_3_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 4271 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 4273 "transform_hlds.unused_args.c"
  }
#line 4275 "transform_hlds.unused_args.c"
}

#line 4278 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_name_2_2_f_0_10001(
#line 4281 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg)
#line 4283 "transform_hlds.unused_args.c"
{
#line 4285 "transform_hlds.unused_args.c"
  {
#line 4287 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__wrapper_arg_3;
#line 4289 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4291 "transform_hlds.unused_args.c"
    MR_String transform_hlds__unused_args__conv0_HeadVar__3_3;

#line 4294 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4296 "transform_hlds.unused_args.c"
    {
#line 4298 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__conv0_HeadVar__3_3 = transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_name_2_2_f_0();
    }
#line 4301 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__3_3));
#line 4303 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__wrapper_arg_3;
#line 4305 "transform_hlds.unused_args.c"
  }
#line 4307 "transform_hlds.unused_args.c"
}

#line 4310 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001(
#line 4313 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg)
#line 4315 "transform_hlds.unused_args.c"
{
#line 4317 "transform_hlds.unused_args.c"
  {
#line 4319 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__wrapper_arg_3;
#line 4321 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4323 "transform_hlds.unused_args.c"
    MR_Integer transform_hlds__unused_args__conv0_HeadVar__3_3;

#line 4326 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4328 "transform_hlds.unused_args.c"
    {
#line 4330 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__conv0_HeadVar__3_3 = transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_version_number_2_2_f_0();
    }
#line 4333 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__3_3));
#line 4335 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__wrapper_arg_3;
#line 4337 "transform_hlds.unused_args.c"
  }
#line 4339 "transform_hlds.unused_args.c"
}

#line 4342 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001(
#line 4345 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg)
#line 4347 "transform_hlds.unused_args.c"
{
#line 4349 "transform_hlds.unused_args.c"
  {
#line 4351 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__wrapper_arg_3;
#line 4353 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4355 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__3_3;

#line 4358 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4360 "transform_hlds.unused_args.c"
    {
#line 4362 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__conv0_HeadVar__3_3 = transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0();
    }
#line 4365 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__3_3));
#line 4367 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__wrapper_arg_3;
#line 4369 "transform_hlds.unused_args.c"
  }
#line 4371 "transform_hlds.unused_args.c"
}

#line 4374 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__bottom_2_2_f_0_10001(
#line 4377 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4379 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1)
#line 4381 "transform_hlds.unused_args.c"
{
#line 4383 "transform_hlds.unused_args.c"
  {
#line 4385 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__wrapper_arg_3;
#line 4387 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4389 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__3_3;

#line 4392 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4394 "transform_hlds.unused_args.c"
    {
#line 4396 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__conv0_HeadVar__3_3 = transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__bottom_2_2_f_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 4399 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__3_3));
#line 4401 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__wrapper_arg_3;
#line 4403 "transform_hlds.unused_args.c"
  }
#line 4405 "transform_hlds.unused_args.c"
}

#line 4408 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__top_2_2_f_0_10001(
#line 4411 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4413 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1)
#line 4415 "transform_hlds.unused_args.c"
{
#line 4417 "transform_hlds.unused_args.c"
  {
#line 4419 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__wrapper_arg_3;
#line 4421 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4423 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__3_3;

#line 4426 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4428 "transform_hlds.unused_args.c"
    {
#line 4430 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__conv0_HeadVar__3_3 = transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__top_2_2_f_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 4433 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__3_3));
#line 4435 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__wrapper_arg_3;
#line 4437 "transform_hlds.unused_args.c"
  }
#line 4439 "transform_hlds.unused_args.c"
}

#line 4442 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__get_func_info_6_6_p_0_10001(
#line 4445 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4447 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 4449 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 4451 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3,
#line 4453 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_6)
#line 4455 "transform_hlds.unused_args.c"
{
#line 4457 "transform_hlds.unused_args.c"
  {
#line 4459 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4461 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_FuncInfo_22;

#line 4464 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4466 "transform_hlds.unused_args.c"
    {
#line 4468 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__get_func_info_6_6_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3), &transform_hlds__unused_args__conv0_FuncInfo_22);
    }
#line 4471 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_6 = ((MR_Box) (transform_hlds__unused_args__conv0_FuncInfo_22));
#line 4473 "transform_hlds.unused_args.c"
  }
#line 4475 "transform_hlds.unused_args.c"
}

#line 206 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_f_0(void)
#line 206 "unused_args.m"
{
#line 206 "unused_args.m"
  {
#line 206 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 206 "unused_args.m"
    MR_Word transform_hlds__unused_args__Term_3;
#line 206 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_8_8;

#line 207 "unused_args.m"
    {
#line 207 "unused_args.m"
      transform_hlds__unused_args__V_8_8 = mercury__term__context_init_0_f_0();
    }
#line 207 "unused_args.m"
    {
#line 207 "unused_args.m"
      transform_hlds__unused_args__Term_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 207 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Term_3, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_9[2]));
#line 207 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Term_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 207 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Term_3, 2) = ((MR_Box) (transform_hlds__unused_args__V_8_8));
#line 207 "unused_args.m"
    }
#line 206 "unused_args.m"
    return transform_hlds__unused_args__Term_3;
#line 206 "unused_args.m"
  }
#line 206 "unused_args.m"
}

#line 202 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(void)
#line 202 "unused_args.m"
{
#line 202 "unused_args.m"
  {
#line 202 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);

#line 202 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 202 "unused_args.m"
  }
#line 202 "unused_args.m"
}

#line 199 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0(void)
#line 199 "unused_args.m"
{
#line 200 "unused_args.m"
  {
#line 200 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 200 "unused_args.m"
    {
#line 200 "unused_args.m"
      return transform_hlds__unused_args__succeeded = mercury__builtin__semidet_fail_0_p_0();
    }
#line 200 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 200 "unused_args.m"
  }
#line 199 "unused_args.m"
}

#line 221 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(
#line 221 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_10,
#line 221 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_3)
#line 221 "unused_args.m"
{
#line 221 "unused_args.m"
  {
#line 221 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 221 "unused_args.m"
    {
#line 221 "unused_args.m"
      return transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____unused_args_answer_0_0(transform_hlds__unused_args__Args_3, transform_hlds__unused_args__Args_10);
    }
#line 221 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 221 "unused_args.m"
  }
#line 221 "unused_args.m"
}

#line 216 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_93_95_48_3_p_0(
#line 216 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer1_5,
#line 216 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer2_6)
#line 216 "unused_args.m"
{
#line 216 "unused_args.m"
  {
#line 216 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 216 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 216 "unused_args.m"
    MR_Word transform_hlds__unused_args__Args1_7 = (MR_Word) transform_hlds__unused_args__Answer1_5;
#line 216 "unused_args.m"
    MR_Word transform_hlds__unused_args__Args2_8 = (MR_Word) transform_hlds__unused_args__Answer2_6;
#line 216 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_11_11;
#line 216 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_12_12;

#line 219 "unused_args.m"
    {
#line 219 "unused_args.m"
      transform_hlds__unused_args__V_11_11 = mercury__set__sorted_list_to_set_1_f_0(transform_hlds__unused_args__TypeCtorInfo_13_13, transform_hlds__unused_args__Args2_8);
    }
#line 219 "unused_args.m"
    {
#line 219 "unused_args.m"
      transform_hlds__unused_args__V_12_12 = mercury__set__sorted_list_to_set_1_f_0(transform_hlds__unused_args__TypeCtorInfo_13_13, transform_hlds__unused_args__Args1_7);
    }
#line 219 "unused_args.m"
    {
#line 219 "unused_args.m"
      return transform_hlds__unused_args__succeeded = mercury__set__subset_2_p_0(transform_hlds__unused_args__TypeCtorInfo_13_13, transform_hlds__unused_args__V_11_11, transform_hlds__unused_args__V_12_12);
    }
#line 216 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 216 "unused_args.m"
  }
#line 216 "unused_args.m"
}

#line 185 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_103_101_116_95_102_117_110_99_95_105_110_102_111_95_54_95_95_91_52_44_32_53_93_95_48_6_p_0(
#line 185 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_17,
#line 185 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleName_18,
#line 185 "unused_args.m"
  MR_Word transform_hlds__unused_args__FuncId_19,
#line 185 "unused_args.m"
  MR_Word * transform_hlds__unused_args__FuncInfo_22)
#line 185 "unused_args.m"
{
#line 185 "unused_args.m"
  {
#line 185 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 185 "unused_args.m"
    MR_Integer transform_hlds__unused_args__Arity_13;
#line 185 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredId_23;
#line 185 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredInfo_25;
#line 185 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_26_26;
#line 186 "unused_args.m"
    MR_Integer transform_hlds__unused_args__V_24_24;

#line 186 "unused_args.m"
    {
#line 186 "unused_args.m"
      transform_hlds__mmc_analysis__func_id_to_ppid_4_p_0(transform_hlds__unused_args__ModuleInfo_17, transform_hlds__unused_args__ModuleName_18, transform_hlds__unused_args__FuncId_19, &transform_hlds__unused_args__V_26_26);
    }
#line 186 "unused_args.m"
    transform_hlds__unused_args__PredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_26_26, (MR_Integer) 0)));
#line 186 "unused_args.m"
    transform_hlds__unused_args__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_26_26, (MR_Integer) 1)));
#line 187 "unused_args.m"
    {
#line 187 "unused_args.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__unused_args__ModuleInfo_17, transform_hlds__unused_args__PredId_23, &transform_hlds__unused_args__PredInfo_25);
    }
#line 188 "unused_args.m"
    {
#line 188 "unused_args.m"
      transform_hlds__unused_args__Arity_13 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__unused_args__PredInfo_25);
    }
#line 189 "unused_args.m"
    *transform_hlds__unused_args__FuncInfo_22 = (MR_Word) transform_hlds__unused_args__Arity_13;
#line 185 "unused_args.m"
  }
#line 185 "unused_args.m"
}

#line 184 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 184 "unused_args.m"
{
#line 184 "unused_args.m"
  {
#line 184 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 184 "unused_args.m"
    return (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 184 "unused_args.m"
  }
#line 184 "unused_args.m"
}

#line 183 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_50_95_95_91_50_93_95_48_2_f_0(
#line 183 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1)
#line 183 "unused_args.m"
{
#line 183 "unused_args.m"
  {
#line 183 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 183 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVar__3_3;
#line 183 "unused_args.m"
    MR_Integer transform_hlds__unused_args__Arity_10 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 183 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_23_23;

#line 183 "unused_args.m"
    {
#line 183 "unused_args.m"
      transform_hlds__unused_args__V_23_23 = mercury__list__f_46_46_2_f_0((MR_Integer) 1, transform_hlds__unused_args__Arity_10);
    }
#line 183 "unused_args.m"
    transform_hlds__unused_args__HeadVar__3_3 = (MR_Word) transform_hlds__unused_args__V_23_23;
#line 183 "unused_args.m"
    return transform_hlds__unused_args__HeadVar__3_3;
#line 183 "unused_args.m"
  }
#line 183 "unused_args.m"
}

#line 182 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 182 "unused_args.m"
{
#line 182 "unused_args.m"
  {
#line 182 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 182 "unused_args.m"
    return (MR_Integer) 0;
#line 182 "unused_args.m"
  }
#line 182 "unused_args.m"
}

#line 181 "unused_args.m"
static MR_Integer MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 181 "unused_args.m"
{
#line 181 "unused_args.m"
  {
#line 181 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 181 "unused_args.m"
    return (MR_Integer) 3;
#line 181 "unused_args.m"
  }
#line 181 "unused_args.m"
}

#line 180 "unused_args.m"
static MR_String MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 180 "unused_args.m"
{
#line 195 "unused_args.m"
  {
#line 195 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 195 "unused_args.m"
    return (MR_String) "unused_args";
#line 195 "unused_args.m"
  }
#line 180 "unused_args.m"
}

#line 164 "unused_args.m"
void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 164 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1)
#line 164 "unused_args.m"
{
#line 164 "unused_args.m"
  {
#line 164 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 164 "unused_args.m"
    *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 164 "unused_args.m"
  }
#line 164 "unused_args.m"
}

#line 164 "unused_args.m"
MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 164 "unused_args.m"
{
#line 164 "unused_args.m"
  {
#line 164 "unused_args.m"
    return MR_TRUE;
#line 164 "unused_args.m"
  }
#line 164 "unused_args.m"
}

#line 1841 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_117_110_117_115_101_100_95_97_114_103_115_95_95_91_49_93_95_48_3_f_0(
#line 1841 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredInfo_6,
#line 1841 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_7)
#line 1841 "unused_args.m"
{
#line 1843 "unused_args.m"
  {
#line 1843 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1843 "unused_args.m"
    MR_Word transform_hlds__unused_args__Spec_8;
#line 1843 "unused_args.m"
    MR_Integer transform_hlds__unused_args__NumArgs_9;
#line 1843 "unused_args.m"
    MR_Word transform_hlds__unused_args__Context_10;
#line 1843 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredOrFunc_11;
#line 1843 "unused_args.m"
    MR_Word transform_hlds__unused_args__ModuleName_12;
#line 1843 "unused_args.m"
    MR_String transform_hlds__unused_args__PredName_13;
#line 1843 "unused_args.m"
    MR_Integer transform_hlds__unused_args__Arity_14;
#line 1843 "unused_args.m"
    MR_Word transform_hlds__unused_args__Pieces1_15;
#line 1843 "unused_args.m"
    MR_Word transform_hlds__unused_args__Pieces2_16;
#line 1843 "unused_args.m"
    MR_Word transform_hlds__unused_args__Msg_17;
#line 1843 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_20_20;
#line 1843 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_21_21;
#line 1843 "unused_args.m"
    MR_String transform_hlds__unused_args__V_22_22;
#line 1843 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_23_23;
#line 1843 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_24_24;
#line 1843 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_25_25;
#line 1843 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_26_26;
#line 1843 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_56_56;
#line 1843 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_57_57;
#line 1843 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_58_58;
#line 1843 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_62_62;

#line 1844 "unused_args.m"
    {
#line 1844 "unused_args.m"
      mercury__list__length_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__unused_args__UnusedArgs_7, &transform_hlds__unused_args__NumArgs_9);
    }
#line 1845 "unused_args.m"
    {
#line 1845 "unused_args.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__unused_args__PredInfo_6, &transform_hlds__unused_args__Context_10);
    }
#line 1846 "unused_args.m"
    {
#line 1846 "unused_args.m"
      transform_hlds__unused_args__PredOrFunc_11 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__unused_args__PredInfo_6);
    }
#line 1847 "unused_args.m"
    {
#line 1847 "unused_args.m"
      transform_hlds__unused_args__ModuleName_12 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__unused_args__PredInfo_6);
    }
#line 1848 "unused_args.m"
    {
#line 1848 "unused_args.m"
      transform_hlds__unused_args__PredName_13 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__unused_args__PredInfo_6);
    }
#line 1849 "unused_args.m"
    {
#line 1849 "unused_args.m"
      transform_hlds__unused_args__Arity_14 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__unused_args__PredInfo_6);
    }
#line 1850 "unused_args.m"
    {
#line 1850 "unused_args.m"
      transform_hlds__unused_args__V_22_22 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(transform_hlds__unused_args__PredOrFunc_11);
    }
#line 1850 "unused_args.m"
    {
#line 1850 "unused_args.m"
      transform_hlds__unused_args__V_21_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1850 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__V_21_21, 0) = ((MR_Box) (transform_hlds__unused_args__V_22_22));
#line 1850 "unused_args.m"
    }
#line 1851 "unused_args.m"
    {
#line 1851 "unused_args.m"
      transform_hlds__unused_args__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1851 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_26_26, 0) = ((MR_Box) (transform_hlds__unused_args__ModuleName_12));
#line 1851 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_26_26, 1) = ((MR_Box) (transform_hlds__unused_args__PredName_13));
#line 1851 "unused_args.m"
    }
#line 1851 "unused_args.m"
    {
#line 1851 "unused_args.m"
      transform_hlds__unused_args__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1851 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_25_25, 0) = ((MR_Box) (transform_hlds__unused_args__V_26_26));
#line 1851 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_25_25, 1) = ((MR_Box) (transform_hlds__unused_args__Arity_14));
#line 1851 "unused_args.m"
    }
#line 1851 "unused_args.m"
    {
#line 1851 "unused_args.m"
      transform_hlds__unused_args__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1851 "unused_args.m"
      MR_hl_field(MR_mktag(3), transform_hlds__unused_args__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1851 "unused_args.m"
      MR_hl_field(MR_mktag(3), transform_hlds__unused_args__V_24_24, 1) = ((MR_Box) (transform_hlds__unused_args__V_25_25));
#line 1851 "unused_args.m"
    }
#line 1851 "unused_args.m"
    {
#line 1851 "unused_args.m"
      transform_hlds__unused_args__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1851 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_23_23, 0) = ((MR_Box) (transform_hlds__unused_args__V_24_24));
#line 1851 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__unused_args_scalar_common_1[14])));
#line 1851 "unused_args.m"
    }
#line 1850 "unused_args.m"
    {
#line 1850 "unused_args.m"
      transform_hlds__unused_args__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1850 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_20_20, 0) = ((MR_Box) (transform_hlds__unused_args__V_21_21));
#line 1850 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_20_20, 1) = ((MR_Box) (transform_hlds__unused_args__V_23_23));
#line 1850 "unused_args.m"
    }
#line 1850 "unused_args.m"
    {
#line 1850 "unused_args.m"
      transform_hlds__unused_args__Pieces1_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1850 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Pieces1_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__unused_args_scalar_common_1[21])));
#line 1850 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Pieces1_15, 1) = ((MR_Box) (transform_hlds__unused_args__V_20_20));
#line 1850 "unused_args.m"
    }
#line 1853 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__NumArgs_9 == (MR_Integer) 1);
#line 1856 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1854 "unused_args.m"
      {
#line 1854 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_36_36;
#line 1854 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_39_39;

#line 1865 "unused_args.m"
        if ((transform_hlds__unused_args__UnusedArgs_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1865 "unused_args.m"
          {
#line 1865 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv0_V_39_39;

#line 1865 "unused_args.m"
            {
#line 1865 "unused_args.m"
              transform_hlds__unused_args__conv0_V_39_39 = mercury__require__unexpected_3_f_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[5], (MR_String) "transform_hlds.unused_args", (MR_String) "function \140transform_hlds.unused_args.format_arg_list\'/1", (MR_String) "empty list");
            }
#line 1865 "unused_args.m"
            transform_hlds__unused_args__V_39_39 = ((MR_Word) transform_hlds__unused_args__conv0_V_39_39);
#line 1865 "unused_args.m"
          }
#line 1865 "unused_args.m"
        else
#line 1866 "unused_args.m"
          {
#line 1866 "unused_args.m"
            MR_Integer transform_hlds__unused_args__Arg_71 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__UnusedArgs_7, (MR_Integer) 0)));
#line 1866 "unused_args.m"
            MR_Word transform_hlds__unused_args__Rest_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__UnusedArgs_7, (MR_Integer) 1)));
#line 1866 "unused_args.m"
            MR_String transform_hlds__unused_args__ArgStr_74;

#line 1867 "unused_args.m"
            {
#line 1867 "unused_args.m"
              transform_hlds__unused_args__ArgStr_74 = mercury__string__int_to_string_1_f_0(transform_hlds__unused_args__Arg_71);
            }
#line 1871 "unused_args.m"
            if ((transform_hlds__unused_args__Rest_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1869 "unused_args.m"
              {
#line 1869 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_79_79;

#line 1870 "unused_args.m"
                {
#line 1870 "unused_args.m"
                  transform_hlds__unused_args__V_79_79 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1870 "unused_args.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__unused_args__V_79_79, 0) = ((MR_Box) (transform_hlds__unused_args__ArgStr_74));
#line 1870 "unused_args.m"
                }
#line 1870 "unused_args.m"
                {
#line 1870 "unused_args.m"
                  transform_hlds__unused_args__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1870 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_39_39, 0) = ((MR_Box) (transform_hlds__unused_args__V_79_79));
#line 1870 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1870 "unused_args.m"
                }
#line 1869 "unused_args.m"
              }
#line 1871 "unused_args.m"
            else
#line 1872 "unused_args.m"
              {
#line 1872 "unused_args.m"
                MR_Integer transform_hlds__unused_args__Head_75 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Rest_72, (MR_Integer) 0)));
#line 1872 "unused_args.m"
                MR_Word transform_hlds__unused_args__Tail_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Rest_72, (MR_Integer) 1)));
#line 1872 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_77_77;
#line 1872 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_78_78;

#line 1873 "unused_args.m"
                {
#line 1873 "unused_args.m"
                  transform_hlds__unused_args__V_77_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1873 "unused_args.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__unused_args__V_77_77, 0) = ((MR_Box) (transform_hlds__unused_args__ArgStr_74));
#line 1873 "unused_args.m"
                }
#line 1873 "unused_args.m"
                {
#line 1873 "unused_args.m"
                  transform_hlds__unused_args__V_78_78 = transform_hlds__unused_args__format_arg_list_2_2_f_0(transform_hlds__unused_args__Head_75, transform_hlds__unused_args__Tail_76);
                }
#line 1873 "unused_args.m"
                {
#line 1873 "unused_args.m"
                  transform_hlds__unused_args__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1873 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_39_39, 0) = ((MR_Box) (transform_hlds__unused_args__V_77_77));
#line 1873 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_39_39, 1) = ((MR_Box) (transform_hlds__unused_args__V_78_78));
#line 1873 "unused_args.m"
                }
#line 1872 "unused_args.m"
              }
#line 1866 "unused_args.m"
          }
#line 1854 "unused_args.m"
        {
#line 1854 "unused_args.m"
          transform_hlds__unused_args__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1854 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__unused_args_scalar_common_1[22])));
#line 1854 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_36_36, 1) = ((MR_Box) (transform_hlds__unused_args__V_39_39));
#line 1854 "unused_args.m"
        }
#line 1854 "unused_args.m"
        {
#line 1854 "unused_args.m"
          transform_hlds__unused_args__Pieces2_16 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__unused_args__V_36_36, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__unused_args_scalar_common_1[17]));
        }
#line 1854 "unused_args.m"
      }
#line 1856 "unused_args.m"
    else
#line 1857 "unused_args.m"
      {
#line 1857 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_46_46;
#line 1857 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_49_49;

#line 1865 "unused_args.m"
        if ((transform_hlds__unused_args__UnusedArgs_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1865 "unused_args.m"
          {
#line 1865 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv1_V_49_49;

#line 1865 "unused_args.m"
            {
#line 1865 "unused_args.m"
              transform_hlds__unused_args__conv1_V_49_49 = mercury__require__unexpected_3_f_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[5], (MR_String) "transform_hlds.unused_args", (MR_String) "function \140transform_hlds.unused_args.format_arg_list\'/1", (MR_String) "empty list");
            }
#line 1865 "unused_args.m"
            transform_hlds__unused_args__V_49_49 = ((MR_Word) transform_hlds__unused_args__conv1_V_49_49);
#line 1865 "unused_args.m"
          }
#line 1865 "unused_args.m"
        else
#line 1866 "unused_args.m"
          {
#line 1866 "unused_args.m"
            MR_Integer transform_hlds__unused_args__Arg_85 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__UnusedArgs_7, (MR_Integer) 0)));
#line 1866 "unused_args.m"
            MR_Word transform_hlds__unused_args__Rest_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__UnusedArgs_7, (MR_Integer) 1)));
#line 1866 "unused_args.m"
            MR_String transform_hlds__unused_args__ArgStr_88;

#line 1867 "unused_args.m"
            {
#line 1867 "unused_args.m"
              transform_hlds__unused_args__ArgStr_88 = mercury__string__int_to_string_1_f_0(transform_hlds__unused_args__Arg_85);
            }
#line 1871 "unused_args.m"
            if ((transform_hlds__unused_args__Rest_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1869 "unused_args.m"
              {
#line 1869 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_93_93;

#line 1870 "unused_args.m"
                {
#line 1870 "unused_args.m"
                  transform_hlds__unused_args__V_93_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1870 "unused_args.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__unused_args__V_93_93, 0) = ((MR_Box) (transform_hlds__unused_args__ArgStr_88));
#line 1870 "unused_args.m"
                }
#line 1870 "unused_args.m"
                {
#line 1870 "unused_args.m"
                  transform_hlds__unused_args__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1870 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_49_49, 0) = ((MR_Box) (transform_hlds__unused_args__V_93_93));
#line 1870 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1870 "unused_args.m"
                }
#line 1869 "unused_args.m"
              }
#line 1871 "unused_args.m"
            else
#line 1872 "unused_args.m"
              {
#line 1872 "unused_args.m"
                MR_Integer transform_hlds__unused_args__Head_89 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Rest_86, (MR_Integer) 0)));
#line 1872 "unused_args.m"
                MR_Word transform_hlds__unused_args__Tail_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Rest_86, (MR_Integer) 1)));
#line 1872 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_91_91;
#line 1872 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_92_92;

#line 1873 "unused_args.m"
                {
#line 1873 "unused_args.m"
                  transform_hlds__unused_args__V_91_91 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1873 "unused_args.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__unused_args__V_91_91, 0) = ((MR_Box) (transform_hlds__unused_args__ArgStr_88));
#line 1873 "unused_args.m"
                }
#line 1873 "unused_args.m"
                {
#line 1873 "unused_args.m"
                  transform_hlds__unused_args__V_92_92 = transform_hlds__unused_args__format_arg_list_2_2_f_0(transform_hlds__unused_args__Head_89, transform_hlds__unused_args__Tail_90);
                }
#line 1873 "unused_args.m"
                {
#line 1873 "unused_args.m"
                  transform_hlds__unused_args__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1873 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_49_49, 0) = ((MR_Box) (transform_hlds__unused_args__V_91_91));
#line 1873 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_49_49, 1) = ((MR_Box) (transform_hlds__unused_args__V_92_92));
#line 1873 "unused_args.m"
                }
#line 1872 "unused_args.m"
              }
#line 1866 "unused_args.m"
          }
#line 1857 "unused_args.m"
        {
#line 1857 "unused_args.m"
          transform_hlds__unused_args__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1857 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_46_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__unused_args_scalar_common_1[23])));
#line 1857 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_46_46, 1) = ((MR_Box) (transform_hlds__unused_args__V_49_49));
#line 1857 "unused_args.m"
        }
#line 1857 "unused_args.m"
        {
#line 1857 "unused_args.m"
          transform_hlds__unused_args__Pieces2_16 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__unused_args__V_46_46, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__unused_args_scalar_common_1[19]));
        }
#line 1857 "unused_args.m"
      }
#line 1860 "unused_args.m"
    {
#line 1860 "unused_args.m"
      transform_hlds__unused_args__V_58_58 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__unused_args__Pieces1_15, transform_hlds__unused_args__Pieces2_16);
    }
#line 1860 "unused_args.m"
    {
#line 1860 "unused_args.m"
      transform_hlds__unused_args__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1860 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_57_57, 0) = ((MR_Box) (transform_hlds__unused_args__V_58_58));
#line 1860 "unused_args.m"
    }
#line 1860 "unused_args.m"
    {
#line 1860 "unused_args.m"
      transform_hlds__unused_args__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1860 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_56_56, 0) = ((MR_Box) (transform_hlds__unused_args__V_57_57));
#line 1860 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1860 "unused_args.m"
    }
#line 1860 "unused_args.m"
    {
#line 1860 "unused_args.m"
      transform_hlds__unused_args__Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1860 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Msg_17, 0) = ((MR_Box) (transform_hlds__unused_args__Context_10));
#line 1860 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Msg_17, 1) = ((MR_Box) (transform_hlds__unused_args__V_56_56));
#line 1860 "unused_args.m"
    }
#line 1861 "unused_args.m"
    {
#line 1861 "unused_args.m"
      transform_hlds__unused_args__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1861 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_62_62, 0) = ((MR_Box) (transform_hlds__unused_args__Msg_17));
#line 1861 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1861 "unused_args.m"
    }
#line 1861 "unused_args.m"
    {
#line 1861 "unused_args.m"
      transform_hlds__unused_args__Spec_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1861 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Spec_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1861 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Spec_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15))));
#line 1861 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Spec_8, 2) = ((MR_Box) (transform_hlds__unused_args__V_62_62));
#line 1861 "unused_args.m"
    }
#line 1843 "unused_args.m"
    return transform_hlds__unused_args__Spec_8;
#line 1843 "unused_args.m"
  }
#line 1841 "unused_args.m"
}

#line 1789 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_103_97_116_104_101_114_95_119_97_114_110_105_110_103_95_95_91_49_93_95_48_9_p_0(
#line 1789 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredInfo_11,
#line 1789 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_12,
#line 1789 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_13,
#line 1789 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs0_14,
#line 1789 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_26,
#line 1789 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_27,
#line 1789 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Specs_0_28,
#line 1789 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Specs_29)
#line 1789 "unused_args.m"
{
#line 1798 "unused_args.m"
  {
#line 1798 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1796 "unused_args.m"
    {
#line 1796 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (transform_hlds__unused_args__PredId_12)), transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_26);
    }
#line 1798 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1797 "unused_args.m"
      {
#line 1797 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Specs_29 = transform_hlds__unused_args__STATE_VARIABLE_Specs_0_28;
#line 1797 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_27 = transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_26;
#line 1797 "unused_args.m"
      }
#line 1798 "unused_args.m"
    else
#line 1799 "unused_args.m"
      {
#line 1799 "unused_args.m"
        MR_Word transform_hlds__unused_args__Procs_17;
#line 1799 "unused_args.m"
        MR_Word transform_hlds__unused_args__Proc_18;
#line 1799 "unused_args.m"
        MR_Word transform_hlds__unused_args__HeadVars_19;
#line 1799 "unused_args.m"
        MR_Integer transform_hlds__unused_args__NumHeadVars_20;
#line 1799 "unused_args.m"
        MR_Integer transform_hlds__unused_args__NumToDrop_21;
#line 1799 "unused_args.m"
        MR_Word transform_hlds__unused_args__UnusedArgs_22;
#line 1799 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_31_31;
#line 1801 "unused_args.m"
        MR_Box transform_hlds__unused_args__conv0_Proc_18;

#line 1799 "unused_args.m"
        {
#line 1799 "unused_args.m"
          mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (transform_hlds__unused_args__PredId_12)), transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_26, transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_27);
        }
#line 1800 "unused_args.m"
        {
#line 1800 "unused_args.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__unused_args__PredInfo_11, &transform_hlds__unused_args__Procs_17);
        }
#line 1801 "unused_args.m"
        {
#line 1801 "unused_args.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__unused_args__Procs_17, transform_hlds__unused_args__ProcId_13, &transform_hlds__unused_args__conv0_Proc_18);
        }
#line 1801 "unused_args.m"
        transform_hlds__unused_args__Proc_18 = ((MR_Word) transform_hlds__unused_args__conv0_Proc_18);
#line 1802 "unused_args.m"
        {
#line 1802 "unused_args.m"
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__Proc_18, &transform_hlds__unused_args__HeadVars_19);
        }
#line 1803 "unused_args.m"
        {
#line 1803 "unused_args.m"
          mercury__list__length_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], transform_hlds__unused_args__HeadVars_19, &transform_hlds__unused_args__NumHeadVars_20);
        }
#line 1807 "unused_args.m"
        {
#line 1807 "unused_args.m"
          transform_hlds__unused_args__V_31_31 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__unused_args__PredInfo_11);
        }
#line 1807 "unused_args.m"
        transform_hlds__unused_args__NumToDrop_21 = (transform_hlds__unused_args__NumHeadVars_20 - transform_hlds__unused_args__V_31_31);
#line 1808 "unused_args.m"
        {
#line 1808 "unused_args.m"
          transform_hlds__unused_args__drop_poly_inserted_args_3_p_0(transform_hlds__unused_args__NumToDrop_21, transform_hlds__unused_args__UnusedArgs0_14, &transform_hlds__unused_args__UnusedArgs_22);
        }
#line 1813 "unused_args.m"
        if ((transform_hlds__unused_args__UnusedArgs_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1814 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_Specs_29 = transform_hlds__unused_args__STATE_VARIABLE_Specs_0_28;
#line 1813 "unused_args.m"
        else
#line 1810 "unused_args.m"
          {
#line 1810 "unused_args.m"
            MR_Word transform_hlds__unused_args__Spec_25;

#line 1811 "unused_args.m"
            {
#line 1811 "unused_args.m"
              transform_hlds__unused_args__Spec_25 = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_117_110_117_115_101_100_95_97_114_103_115_95_95_91_49_93_95_48_3_f_0(transform_hlds__unused_args__PredInfo_11, transform_hlds__unused_args__UnusedArgs_22);
            }
#line 1812 "unused_args.m"
            {
#line 1812 "unused_args.m"
              MR_Word base;
#line 1812 "unused_args.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1812 "unused_args.m"
              *transform_hlds__unused_args__STATE_VARIABLE_Specs_29 = base;
#line 1812 "unused_args.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__Spec_25));
#line 1812 "unused_args.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_Specs_0_28));
#line 1812 "unused_args.m"
            }
#line 1810 "unused_args.m"
          }
#line 1799 "unused_args.m"
      }
#line 1798 "unused_args.m"
  }
#line 1789 "unused_args.m"
}

#line 1261 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0(
#line 1261 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ArgNo_5,
#line 1261 "unused_args.m"
  MR_Word transform_hlds__unused_args__ElemsToRemove_6,
#line 1261 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_List_0_14,
#line 1261 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_List_15)
#line 1261 "unused_args.m"
{
#line 1267 "unused_args.m"
  {
#line 1267 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1267 "unused_args.m"
    if ((transform_hlds__unused_args__ElemsToRemove_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1266 "unused_args.m"
      *transform_hlds__unused_args__STATE_VARIABLE_List_15 = transform_hlds__unused_args__STATE_VARIABLE_List_0_14;
#line 1267 "unused_args.m"
    else
#line 1278 "unused_args.m"
    if ((transform_hlds__unused_args__STATE_VARIABLE_List_0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1279 "unused_args.m"
      *transform_hlds__unused_args__STATE_VARIABLE_List_15 = transform_hlds__unused_args__STATE_VARIABLE_List_0_14;
#line 1278 "unused_args.m"
    else
#line 1270 "unused_args.m"
      {
#line 1270 "unused_args.m"
        MR_Box transform_hlds__unused_args__Head_10 = (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__STATE_VARIABLE_List_0_14, (MR_Integer) 0));
#line 1270 "unused_args.m"
        MR_Word transform_hlds__unused_args__Tail_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__STATE_VARIABLE_List_0_14, (MR_Integer) 1)));
#line 1270 "unused_args.m"
        MR_Integer transform_hlds__unused_args__NextArg_12 = (transform_hlds__unused_args__ArgNo_5 + (MR_Integer) 1);
#line 1270 "unused_args.m"
        MR_Word transform_hlds__unused_args__NewTail_13;

#line 1278 "unused_args.m"
        if ((transform_hlds__unused_args__Tail_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1279 "unused_args.m"
          transform_hlds__unused_args__NewTail_13 = transform_hlds__unused_args__Tail_11;
#line 1278 "unused_args.m"
        else
#line 1270 "unused_args.m"
          {
#line 1270 "unused_args.m"
            MR_Box transform_hlds__unused_args__Head_28 = (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Tail_11, (MR_Integer) 0));
#line 1270 "unused_args.m"
            MR_Word transform_hlds__unused_args__Tail_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Tail_11, (MR_Integer) 1)));
#line 1270 "unused_args.m"
            MR_Integer transform_hlds__unused_args__NextArg_30 = (transform_hlds__unused_args__NextArg_12 + (MR_Integer) 1);
#line 1270 "unused_args.m"
            MR_Word transform_hlds__unused_args__NewTail_31;

#line 1272 "unused_args.m"
            {
#line 1272 "unused_args.m"
              transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0(transform_hlds__unused_args__NextArg_30, transform_hlds__unused_args__ElemsToRemove_6, transform_hlds__unused_args__Tail_29, &transform_hlds__unused_args__NewTail_31);
            }
#line 1273 "unused_args.m"
            {
#line 1273 "unused_args.m"
              transform_hlds__unused_args__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__unused_args__NextArg_12)), transform_hlds__unused_args__ElemsToRemove_6);
            }
#line 1275 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1274 "unused_args.m"
              transform_hlds__unused_args__NewTail_13 = transform_hlds__unused_args__NewTail_31;
#line 1275 "unused_args.m"
            else
#line 1276 "unused_args.m"
              {
#line 1276 "unused_args.m"
                transform_hlds__unused_args__NewTail_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1276 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__NewTail_13, 0) = transform_hlds__unused_args__Head_28;
#line 1276 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__NewTail_13, 1) = ((MR_Box) (transform_hlds__unused_args__NewTail_31));
#line 1276 "unused_args.m"
              }
#line 1270 "unused_args.m"
          }
#line 1273 "unused_args.m"
        {
#line 1273 "unused_args.m"
          transform_hlds__unused_args__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__unused_args__ArgNo_5)), transform_hlds__unused_args__ElemsToRemove_6);
        }
#line 1275 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1274 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_List_15 = transform_hlds__unused_args__NewTail_13;
#line 1275 "unused_args.m"
        else
#line 1276 "unused_args.m"
          {
#line 1276 "unused_args.m"
            MR_Word base;
#line 1276 "unused_args.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1276 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_List_15 = base;
#line 1276 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 0) = transform_hlds__unused_args__Head_10;
#line 1276 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__NewTail_13));
#line 1276 "unused_args.m"
          }
#line 1270 "unused_args.m"
      }
#line 1267 "unused_args.m"
  }
#line 1261 "unused_args.m"
}

#line 1119 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(
#line 1119 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_8,
#line 1119 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredStatus_9,
#line 1119 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__4_4,
#line 1119 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44,
#line 1119 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_PredInfo_45)
#line 1119 "unused_args.m"
{
#line 1123 "unused_args.m"
  {
#line 1123 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1123 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeCtorInfo_70_70;
#line 1123 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__4_4, (MR_Integer) 0)));
#line 1123 "unused_args.m"
    MR_Integer transform_hlds__unused_args__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__4_4, (MR_Integer) 1)));
#line 1123 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredModule_13;
#line 1123 "unused_args.m"
    MR_String transform_hlds__unused_args__Name0_14;
#line 1123 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredOrFunc_15;
#line 1123 "unused_args.m"
    MR_Word transform_hlds__unused_args__Tvars_16;
#line 1123 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExistQVars_17;
#line 1123 "unused_args.m"
    MR_Word transform_hlds__unused_args__ArgTypes0_18;
#line 1123 "unused_args.m"
    MR_Word transform_hlds__unused_args__OrigOrigin_19;
#line 1123 "unused_args.m"
    MR_String transform_hlds__unused_args__Name1_27;
#line 1123 "unused_args.m"
    MR_Word transform_hlds__unused_args__Name2_28;
#line 1123 "unused_args.m"
    MR_Integer transform_hlds__unused_args__ProcInt_29;
#line 1123 "unused_args.m"
    MR_Word transform_hlds__unused_args__Name_30;
#line 1123 "unused_args.m"
    MR_Integer transform_hlds__unused_args__Arity_31;
#line 1123 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeVars_32;
#line 1123 "unused_args.m"
    MR_Word transform_hlds__unused_args__ArgTypes_33;
#line 1123 "unused_args.m"
    MR_Word transform_hlds__unused_args__Context_34;
#line 1123 "unused_args.m"
    MR_Word transform_hlds__unused_args__ClausesInfo_35;
#line 1123 "unused_args.m"
    MR_Word transform_hlds__unused_args__Markers_36;
#line 1123 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalType_37;
#line 1123 "unused_args.m"
    MR_Word transform_hlds__unused_args__ClassContext_38;
#line 1123 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarNameRemap_39;
#line 1123 "unused_args.m"
    MR_Word transform_hlds__unused_args__EmptyProofs_40;
#line 1123 "unused_args.m"
    MR_Word transform_hlds__unused_args__EmptyConstraintMap_41;
#line 1123 "unused_args.m"
    MR_Word transform_hlds__unused_args__Transform_42;
#line 1123 "unused_args.m"
    MR_Word transform_hlds__unused_args__Origin_43;
#line 1123 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_61_61;
#line 1123 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_62_62;
#line 1123 "unused_args.m"
    MR_String transform_hlds__unused_args__V_63_63;
#line 1123 "unused_args.m"
    MR_String transform_hlds__unused_args__V_65_65;
#line 1123 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredInfo_67_67;
#line 1132 "unused_args.m"
    MR_String transform_hlds__unused_args__V_47_47;

#line 1124 "unused_args.m"
    {
#line 1124 "unused_args.m"
      transform_hlds__unused_args__PredModule_13 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44);
    }
#line 1125 "unused_args.m"
    {
#line 1125 "unused_args.m"
      transform_hlds__unused_args__Name0_14 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44);
    }
#line 1126 "unused_args.m"
    {
#line 1126 "unused_args.m"
      transform_hlds__unused_args__PredOrFunc_15 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44);
    }
#line 1127 "unused_args.m"
    {
#line 1127 "unused_args.m"
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__Tvars_16, &transform_hlds__unused_args__ExistQVars_17, &transform_hlds__unused_args__ArgTypes0_18);
    }
#line 1128 "unused_args.m"
    {
#line 1128 "unused_args.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__OrigOrigin_19);
    }
#line 1131 "unused_args.m"
    {
#line 1131 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__string__prefix_2_p_0(transform_hlds__unused_args__Name0_14, (MR_String) "__");
    }
#line 1131 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1131 "unused_args.m"
      {
#line 1132 "unused_args.m"
        transform_hlds__unused_args__V_47_47 = (MR_String) "__LambdaGoal__";
#line 1132 "unused_args.m"
        {
#line 1132 "unused_args.m"
          transform_hlds__unused_args__succeeded = mercury__string__prefix_2_p_0(transform_hlds__unused_args__Name0_14, transform_hlds__unused_args__V_47_47);
        }
#line 1132 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1131 "unused_args.m"
      }
#line 1148 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1144 "unused_args.m"
      {
#line 1144 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeCtor_21;
#line 1136 "unused_args.m"
        MR_Word transform_hlds__unused_args___SpecialId_20;

#line 1136 "unused_args.m"
        transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__OrigOrigin_19)) == (MR_mktag((MR_Integer) 0)));
#line 1136 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1136 "unused_args.m"
          {
#line 1136 "unused_args.m"
            transform_hlds__unused_args___SpecialId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OrigOrigin_19, (MR_Integer) 0)));
#line 1136 "unused_args.m"
            transform_hlds__unused_args__TypeCtor_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OrigOrigin_19, (MR_Integer) 1)));
#line 1139 "unused_args.m"
            {
#line 1139 "unused_args.m"
              MR_Word transform_hlds__unused_args__TypeModule_22;
#line 1139 "unused_args.m"
              MR_String transform_hlds__unused_args__TypeName_23;
#line 1139 "unused_args.m"
              MR_Integer transform_hlds__unused_args__TypeArity_24;
#line 1139 "unused_args.m"
              MR_String transform_hlds__unused_args__TypeArityStr_25;
#line 1139 "unused_args.m"
              MR_String transform_hlds__unused_args__TypeModuleString_26;
#line 1139 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_49_49;
#line 1139 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_50_50;
#line 1139 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_52_52;
#line 1139 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_53_53;
#line 1139 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_55_55;
#line 1139 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_56_56;
#line 1139 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_58_58;

#line 1138 "unused_args.m"
              {
#line 1138 "unused_args.m"
                check_hlds__type_util__type_ctor_module_name_arity_4_p_0(transform_hlds__unused_args__TypeCtor_21, &transform_hlds__unused_args__TypeModule_22, &transform_hlds__unused_args__TypeName_23, &transform_hlds__unused_args__TypeArity_24);
              }
#line 1140 "unused_args.m"
              {
#line 1140 "unused_args.m"
                mercury__string__int_to_string_2_p_0(transform_hlds__unused_args__TypeArity_24, &transform_hlds__unused_args__TypeArityStr_25);
              }
#line 1141 "unused_args.m"
              {
#line 1141 "unused_args.m"
                transform_hlds__unused_args__TypeModuleString_26 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(transform_hlds__unused_args__TypeModule_22, (MR_String) "__");
              }
#line 1143 "unused_args.m"
              {
#line 1143 "unused_args.m"
                transform_hlds__unused_args__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1143 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_58_58, 0) = ((MR_Box) (transform_hlds__unused_args__TypeArityStr_25));
#line 1143 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1143 "unused_args.m"
              }
#line 1143 "unused_args.m"
              {
#line 1143 "unused_args.m"
                transform_hlds__unused_args__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1143 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_56_56, 0) = ((MR_Box) ((MR_String) "_"));
#line 1143 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_56_56, 1) = ((MR_Box) (transform_hlds__unused_args__V_58_58));
#line 1143 "unused_args.m"
              }
#line 1142 "unused_args.m"
              {
#line 1142 "unused_args.m"
                transform_hlds__unused_args__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1142 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_55_55, 0) = ((MR_Box) (transform_hlds__unused_args__TypeName_23));
#line 1142 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_55_55, 1) = ((MR_Box) (transform_hlds__unused_args__V_56_56));
#line 1142 "unused_args.m"
              }
#line 1142 "unused_args.m"
              {
#line 1142 "unused_args.m"
                transform_hlds__unused_args__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1142 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_53_53, 0) = ((MR_Box) ((MR_String) "__"));
#line 1142 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_53_53, 1) = ((MR_Box) (transform_hlds__unused_args__V_55_55));
#line 1142 "unused_args.m"
              }
#line 1142 "unused_args.m"
              {
#line 1142 "unused_args.m"
                transform_hlds__unused_args__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1142 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_52_52, 0) = ((MR_Box) (transform_hlds__unused_args__TypeModuleString_26));
#line 1142 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_52_52, 1) = ((MR_Box) (transform_hlds__unused_args__V_53_53));
#line 1142 "unused_args.m"
              }
#line 1142 "unused_args.m"
              {
#line 1142 "unused_args.m"
                transform_hlds__unused_args__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1142 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_50_50, 0) = ((MR_Box) ((MR_String) "_"));
#line 1142 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_50_50, 1) = ((MR_Box) (transform_hlds__unused_args__V_52_52));
#line 1142 "unused_args.m"
              }
#line 1142 "unused_args.m"
              {
#line 1142 "unused_args.m"
                transform_hlds__unused_args__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1142 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_49_49, 0) = ((MR_Box) (transform_hlds__unused_args__Name0_14));
#line 1142 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_49_49, 1) = ((MR_Box) (transform_hlds__unused_args__V_50_50));
#line 1142 "unused_args.m"
              }
#line 1142 "unused_args.m"
              {
#line 1142 "unused_args.m"
                mercury__string__append_list_2_p_0(transform_hlds__unused_args__V_49_49, &transform_hlds__unused_args__Name1_27);
              }
#line 1139 "unused_args.m"
            }
#line 1136 "unused_args.m"
          }
#line 1136 "unused_args.m"
        else
#line 1146 "unused_args.m"
          transform_hlds__unused_args__Name1_27 = transform_hlds__unused_args__Name0_14;
#line 1144 "unused_args.m"
      }
#line 1148 "unused_args.m"
    else
#line 1149 "unused_args.m"
      transform_hlds__unused_args__Name1_27 = transform_hlds__unused_args__Name0_14;
#line 1151 "unused_args.m"
    {
#line 1151 "unused_args.m"
      transform_hlds__unused_args__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_61_61, 0) = ((MR_Box) (transform_hlds__unused_args__PredOrFunc_15));
#line 1151 "unused_args.m"
    }
#line 1152 "unused_args.m"
    {
#line 1152 "unused_args.m"
      transform_hlds__unused_args__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1152 "unused_args.m"
      MR_hl_field(MR_mktag(3), transform_hlds__unused_args__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1152 "unused_args.m"
      MR_hl_field(MR_mktag(3), transform_hlds__unused_args__V_62_62, 1) = ((MR_Box) (transform_hlds__unused_args__UnusedArgs_8));
#line 1152 "unused_args.m"
    }
#line 1151 "unused_args.m"
    {
#line 1151 "unused_args.m"
      parse_tree__prog_util__make_pred_name_6_p_0(transform_hlds__unused_args__PredModule_13, (MR_String) "UnusedArgs", transform_hlds__unused_args__V_61_61, transform_hlds__unused_args__Name1_27, transform_hlds__unused_args__V_62_62, &transform_hlds__unused_args__Name2_28);
    }
#line 1159 "unused_args.m"
    {
#line 1159 "unused_args.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__unused_args__ProcId_11, &transform_hlds__unused_args__ProcInt_29);
    }
#line 1160 "unused_args.m"
    {
#line 1160 "unused_args.m"
      transform_hlds__unused_args__V_65_65 = mercury__string__int_to_string_1_f_0(transform_hlds__unused_args__ProcInt_29);
    }
#line 1160 "unused_args.m"
    {
#line 1160 "unused_args.m"
      transform_hlds__unused_args__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__unused_args__V_65_65);
    }
#line 1160 "unused_args.m"
    {
#line 1160 "unused_args.m"
      mdbcomp__sym_name__add_sym_name_suffix_3_p_0(transform_hlds__unused_args__Name2_28, transform_hlds__unused_args__V_63_63, &transform_hlds__unused_args__Name_30);
    }
#line 1161 "unused_args.m"
    {
#line 1161 "unused_args.m"
      transform_hlds__unused_args__Arity_31 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44);
    }
#line 1162 "unused_args.m"
    {
#line 1162 "unused_args.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__TypeVars_32);
    }
#line 1163 "unused_args.m"
    {
#line 1163 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_8, transform_hlds__unused_args__ArgTypes0_18, &transform_hlds__unused_args__ArgTypes_33);
    }
#line 1164 "unused_args.m"
    {
#line 1164 "unused_args.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__Context_34);
    }
#line 1165 "unused_args.m"
    {
#line 1165 "unused_args.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__ClausesInfo_35);
    }
#line 1166 "unused_args.m"
    {
#line 1166 "unused_args.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__Markers_36);
    }
#line 1167 "unused_args.m"
    {
#line 1167 "unused_args.m"
      hlds__hlds_pred__pred_info_get_goal_type_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__GoalType_37);
    }
#line 1168 "unused_args.m"
    {
#line 1168 "unused_args.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__ClassContext_38);
    }
#line 1169 "unused_args.m"
    {
#line 1169 "unused_args.m"
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__VarNameRemap_39);
    }
#line 5914 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__TypeCtorInfo_70_70 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 1174 "unused_args.m"
    {
#line 1174 "unused_args.m"
      mercury__map__init_1_p_0(transform_hlds__unused_args__TypeCtorInfo_70_70, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &transform_hlds__unused_args__EmptyProofs_40);
    }
#line 1175 "unused_args.m"
    {
#line 1175 "unused_args.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, transform_hlds__unused_args__TypeCtorInfo_70_70, &transform_hlds__unused_args__EmptyConstraintMap_41);
    }
#line 1176 "unused_args.m"
    {
#line 1176 "unused_args.m"
      transform_hlds__unused_args__Transform_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1176 "unused_args.m"
      MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Transform_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1176 "unused_args.m"
      MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Transform_42, 1) = ((MR_Box) (transform_hlds__unused_args__UnusedArgs_8));
#line 1176 "unused_args.m"
    }
#line 1177 "unused_args.m"
    {
#line 1177 "unused_args.m"
      transform_hlds__unused_args__Origin_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1177 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Origin_43, 0) = ((MR_Box) (transform_hlds__unused_args__Transform_42));
#line 1177 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Origin_43, 1) = ((MR_Box) (transform_hlds__unused_args__OrigOrigin_19));
#line 1177 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Origin_43, 2) = ((MR_Box) (transform_hlds__unused_args__PredId_10));
#line 1177 "unused_args.m"
    }
#line 1178 "unused_args.m"
    {
#line 1178 "unused_args.m"
      hlds__hlds_pred__pred_info_init_18_p_0(transform_hlds__unused_args__PredModule_13, transform_hlds__unused_args__Name_30, transform_hlds__unused_args__Arity_31, transform_hlds__unused_args__PredOrFunc_15, transform_hlds__unused_args__Context_34, transform_hlds__unused_args__Origin_43, transform_hlds__unused_args__PredStatus_9, transform_hlds__unused_args__GoalType_37, transform_hlds__unused_args__Markers_36, transform_hlds__unused_args__ArgTypes_33, transform_hlds__unused_args__Tvars_16, transform_hlds__unused_args__ExistQVars_17, transform_hlds__unused_args__ClassContext_38, transform_hlds__unused_args__EmptyProofs_40, transform_hlds__unused_args__EmptyConstraintMap_41, transform_hlds__unused_args__ClausesInfo_35, transform_hlds__unused_args__VarNameRemap_39, &transform_hlds__unused_args__STATE_VARIABLE_PredInfo_67_67);
    }
#line 1182 "unused_args.m"
    {
#line 1182 "unused_args.m"
      hlds__hlds_pred__pred_info_set_typevarset_3_p_0(transform_hlds__unused_args__TypeVars_32, transform_hlds__unused_args__STATE_VARIABLE_PredInfo_67_67, transform_hlds__unused_args__STATE_VARIABLE_PredInfo_45);
#line 1182 "unused_args.m"
      return;
    }
#line 1123 "unused_args.m"
  }
#line 1119 "unused_args.m"
}

#line 864 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_117_115_101_100_95_97_114_103_115_95_112_97_115_115_95_95_91_50_93_95_48_5_p_0(
#line 864 "unused_args.m"
  MR_Integer transform_hlds__unused_args__PassNum_6,
#line 864 "unused_args.m"
  MR_Word transform_hlds__unused_args__LocalPredProcIds_8,
#line 864 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_12,
#line 864 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_13)
#line 864 "unused_args.m"
{
#line 867 "unused_args.m"
  while (MR_TRUE)
#line 867 "unused_args.m"
    {
#line 867 "unused_args.m"
      /* tailcall optimized into a loop */
#line 867 "unused_args.m"
      {
#line 867 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;
#line 867 "unused_args.m"
        MR_Word transform_hlds__unused_args__Changed_10;
#line 867 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_15_15;

#line 868 "unused_args.m"
        {
#line 868 "unused_args.m"
          transform_hlds__unused_args__unused_args_single_pass_5_p_0(transform_hlds__unused_args__LocalPredProcIds_8, (MR_Integer) 0, &transform_hlds__unused_args__Changed_10, transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_12, &transform_hlds__unused_args__STATE_VARIABLE_VarUsage_15_15);
        }
#line 877 "unused_args.m"
#line 877 "unused_args.m"
        switch (transform_hlds__unused_args__Changed_10) {
#line 877 "unused_args.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 877 "unused_args.m"
          case (MR_Integer) 0:
#line 878 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_VarUsage_13 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_15_15;
#line 877 "unused_args.m"
            break;
#line 877 "unused_args.m"
          case (MR_Integer) 1:
#line 870 "unused_args.m"
            {
#line 870 "unused_args.m"
              MR_Integer transform_hlds__unused_args__V_23_23 = (transform_hlds__unused_args__PassNum_6 + (MR_Integer) 1);

#line 876 "unused_args.m"
              /* direct tailcall eliminated */
#line 876 "unused_args.m"
              {
#line 876 "unused_args.m"
                MR_Integer transform_hlds__unused_args__PassNum__tmp_copy_6 = transform_hlds__unused_args__V_23_23;
#line 876 "unused_args.m"
                MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_12 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_15_15;

#line 876 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_12 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_12;
#line 876 "unused_args.m"
                transform_hlds__unused_args__PassNum_6 = transform_hlds__unused_args__PassNum__tmp_copy_6;
#line 876 "unused_args.m"
              }
#line 876 "unused_args.m"
              continue;
#line 870 "unused_args.m"
            }
#line 877 "unused_args.m"
            break;
#line 877 "unused_args.m"
        }
#line 867 "unused_args.m"
      }
#line 867 "unused_args.m"
      break;
#line 867 "unused_args.m"
    }
#line 864 "unused_args.m"
}

#line 1016 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_create_new_pred__1016__1_3_p_0(
#line 1016 "unused_args.m"
  MR_Word transform_hlds__unused_args__FuncInfo_25,
#line 1016 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer_26,
#line 1016 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_56)
#line 1016 "unused_args.m"
{
#line 1016 "unused_args.m"
  {
#line 1016 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1016 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeClassInfo_for_partial_order_81;
#line 1018 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_57_57;
#line 6067 "transform_hlds.unused_args.c"
    MR_bool MR_CALL (* transform_hlds__unused_args__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 1017 "unused_args.m"
    {
#line 1017 "unused_args.m"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____unused_args_answer_0_0(transform_hlds__unused_args__HeadVar__3_56, transform_hlds__unused_args__Answer_26);
    }
#line 1017 "unused_args.m"
    transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1016 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1016 "unused_args.m"
      {
#line 1018 "unused_args.m"
        transform_hlds__unused_args__V_57_57 = (MR_Word) transform_hlds__unused_args__HeadVar__3_56;
#line 1018 "unused_args.m"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1018 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1016 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1016 "unused_args.m"
          {
#line 6091 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__TypeClassInfo_for_partial_order_81 = (MR_Word) &transform_hlds__unused_args_scalar_common_2[3];
#line 6093 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__TypeClassInfo_for_partial_order_81, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6095 "transform_hlds.unused_args.c"
            {
#line 6097 "transform_hlds.unused_args.c"
              return transform_hlds__unused_args__succeeded = transform_hlds__unused_args__func_0(((MR_Box) transform_hlds__unused_args__TypeClassInfo_for_partial_order_81), ((MR_Box) (transform_hlds__unused_args__FuncInfo_25)), ((MR_Box) (transform_hlds__unused_args__Answer_26)), ((MR_Box) (transform_hlds__unused_args__HeadVar__3_56)));
            }
#line 1016 "unused_args.m"
          }
#line 1016 "unused_args.m"
      }
#line 1016 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 1016 "unused_args.m"
  }
#line 1016 "unused_args.m"
}

#line 1009 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__IntroducedFrom__func__unused_args_create_new_pred__1009__1_1_f_0(
#line 1009 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_54)
#line 1009 "unused_args.m"
{
#line 1009 "unused_args.m"
  {
#line 1009 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1009 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVar__2_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_54, (MR_Integer) 1)));
#line 1009 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_54, (MR_Integer) 2)));

#line 1009 "unused_args.m"
    return transform_hlds__unused_args__HeadVar__2_55;
#line 1009 "unused_args.m"
  }
#line 1009 "unused_args.m"
}

#line 685 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__685__1_2_p_0(
#line 685 "unused_args.m"
  MR_Word transform_hlds__unused_args__LHS_49,
#line 685 "unused_args.m"
  MR_Word transform_hlds__unused_args__CellVar_58)
#line 685 "unused_args.m"
{
#line 685 "unused_args.m"
  {
#line 685 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 685 "unused_args.m"
    {
#line 685 "unused_args.m"
      return transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], ((MR_Box) (transform_hlds__unused_args__CellVar_58)), ((MR_Box) (transform_hlds__unused_args__LHS_49)));
    }
#line 685 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 685 "unused_args.m"
  }
#line 685 "unused_args.m"
}

#line 703 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__703__1_2_p_0(
#line 703 "unused_args.m"
  MR_Word transform_hlds__unused_args__LHS_49,
#line 703 "unused_args.m"
  MR_Word transform_hlds__unused_args__CellVar_144)
#line 703 "unused_args.m"
{
#line 703 "unused_args.m"
  {
#line 703 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 703 "unused_args.m"
    {
#line 703 "unused_args.m"
      return transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], ((MR_Box) (transform_hlds__unused_args__CellVar_144)), ((MR_Box) (transform_hlds__unused_args__LHS_49)));
    }
#line 703 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 703 "unused_args.m"
  }
#line 703 "unused_args.m"
}

#line 662 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__662__1_2_p_0(
#line 662 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_116,
#line 662 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_117)
#line 662 "unused_args.m"
{
#line 662 "unused_args.m"
  {
#line 662 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 662 "unused_args.m"
    MR_Word transform_hlds__unused_args__MaybeNameAndMode_44;
#line 663 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_45_45;
#line 663 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_46_46;
#line 664 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_47_47;

#line 663 "unused_args.m"
    *transform_hlds__unused_args__HeadVar__2_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_116, (MR_Integer) 0)));
#line 663 "unused_args.m"
    transform_hlds__unused_args__MaybeNameAndMode_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_116, (MR_Integer) 1)));
#line 663 "unused_args.m"
    transform_hlds__unused_args__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_116, (MR_Integer) 2)));
#line 663 "unused_args.m"
    transform_hlds__unused_args__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_116, (MR_Integer) 3)));
#line 664 "unused_args.m"
    transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__MaybeNameAndMode_44)) == (MR_mktag((MR_Integer) 1)));
#line 664 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 664 "unused_args.m"
      transform_hlds__unused_args__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__MaybeNameAndMode_44, (MR_Integer) 0)));
#line 662 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 662 "unused_args.m"
  }
#line 662 "unused_args.m"
}

#line 429 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__setup_proc_args__429__1_3_p_0(
#line 429 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVars_35,
#line 429 "unused_args.m"
  MR_Integer transform_hlds__unused_args__HeadVar__2_84,
#line 429 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__3_85)
#line 429 "unused_args.m"
{
#line 429 "unused_args.m"
  {
#line 429 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 429 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv0_HeadVar__3_85;

#line 429 "unused_args.m"
    {
#line 429 "unused_args.m"
      mercury__list__det_index1_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], transform_hlds__unused_args__HeadVars_35, transform_hlds__unused_args__HeadVar__2_84, &transform_hlds__unused_args__conv0_HeadVar__3_85);
    }
#line 429 "unused_args.m"
    *transform_hlds__unused_args__HeadVar__3_85 = ((MR_Word) transform_hlds__unused_args__conv0_HeadVar__3_85);
#line 429 "unused_args.m"
  }
#line 429 "unused_args.m"
}

#line 209 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__from_term_2_2_p_0(
#line 209 "unused_args.m"
  MR_Word transform_hlds__unused_args__Term_3)
#line 209 "unused_args.m"
{
#line 209 "unused_args.m"
  {
#line 209 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 209 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_5_5;
#line 209 "unused_args.m"
    MR_String transform_hlds__unused_args__V_6_6;
#line 209 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_7_7;
#line 210 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_4_4;

#line 209 "unused_args.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 210 "unused_args.m"
    transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 210 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 210 "unused_args.m"
      {
#line 210 "unused_args.m"
        transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Term_3, (MR_Integer) 0)));
#line 210 "unused_args.m"
        transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Term_3, (MR_Integer) 1)));
#line 210 "unused_args.m"
        transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Term_3, (MR_Integer) 2)));
#line 210 "unused_args.m"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 209 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 209 "unused_args.m"
          {
#line 210 "unused_args.m"
            transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__V_5_5)) == (MR_mktag((MR_Integer) 0)));
#line 210 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 210 "unused_args.m"
              {
#line 210 "unused_args.m"
                transform_hlds__unused_args__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_5_5, (MR_Integer) 0)));
#line 210 "unused_args.m"
                transform_hlds__unused_args__succeeded = (strcmp(transform_hlds__unused_args__V_6_6, (MR_String) "any") == 0);
#line 210 "unused_args.m"
              }
#line 209 "unused_args.m"
          }
#line 210 "unused_args.m"
      }
#line 209 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 209 "unused_args.m"
  }
#line 209 "unused_args.m"
}

#line 206 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__to_term_1_1_f_0(void)
#line 206 "unused_args.m"
{
#line 206 "unused_args.m"
  {
#line 206 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 206 "unused_args.m"
    MR_Word transform_hlds__unused_args__Term_3;

#line 206 "unused_args.m"
    {
#line 206 "unused_args.m"
      return transform_hlds__unused_args__Term_3 = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_f_0();
    }
#line 206 "unused_args.m"
    return transform_hlds__unused_args__Term_3;
#line 206 "unused_args.m"
  }
#line 206 "unused_args.m"
}

#line 228 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__from_term_2_2_p_0(
#line 228 "unused_args.m"
  MR_Word transform_hlds__unused_args__Term_4,
#line 228 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2)
#line 228 "unused_args.m"
{
#line 228 "unused_args.m"
  {
#line 228 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 228 "unused_args.m"
    MR_Word transform_hlds__unused_args__Args_3;
#line 229 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv0_Args_3;

#line 229 "unused_args.m"
    {
#line 229 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__term_conversion__term_to_type_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &transform_hlds__unused_args_scalar_common_1[0], transform_hlds__unused_args__Term_4, &transform_hlds__unused_args__conv0_Args_3);
    }
#line 229 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 229 "unused_args.m"
      {
#line 229 "unused_args.m"
        transform_hlds__unused_args__Args_3 = ((MR_Word) transform_hlds__unused_args__conv0_Args_3);
#line 229 "unused_args.m"
        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 229 "unused_args.m"
      }
#line 228 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 228 "unused_args.m"
      {
#line 228 "unused_args.m"
        *transform_hlds__unused_args__HeadVar__2_2 = (MR_Word) transform_hlds__unused_args__Args_3;
#line 228 "unused_args.m"
        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 228 "unused_args.m"
      }
#line 228 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 228 "unused_args.m"
  }
#line 228 "unused_args.m"
}

#line 225 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__to_term_1_1_f_0(
#line 225 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1)
#line 225 "unused_args.m"
{
#line 225 "unused_args.m"
  {
#line 225 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 225 "unused_args.m"
    MR_Word transform_hlds__unused_args__Term_4;
#line 225 "unused_args.m"
    MR_Word transform_hlds__unused_args__Args_3 = (MR_Word) transform_hlds__unused_args__HeadVar__1_1;

#line 226 "unused_args.m"
    {
#line 226 "unused_args.m"
      mercury__term_conversion__type_to_term_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[0], (MR_Word) &mercury__term__term__type_ctor_info_generic_0, ((MR_Box) (transform_hlds__unused_args__Args_3)), &transform_hlds__unused_args__Term_4);
    }
#line 225 "unused_args.m"
    return transform_hlds__unused_args__Term_4;
#line 225 "unused_args.m"
  }
#line 225 "unused_args.m"
}

#line 202 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__equivalent_3_3_p_0(
#line 202 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_7)
#line 202 "unused_args.m"
{
#line 202 "unused_args.m"
  {
#line 202 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 202 "unused_args.m"
    {
#line 202 "unused_args.m"
      return transform_hlds__unused_args__succeeded = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0();
    }
#line 202 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 202 "unused_args.m"
  }
#line 202 "unused_args.m"
}

#line 199 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__more_precise_than_3_3_p_0(
#line 199 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_4)
#line 199 "unused_args.m"
{
#line 200 "unused_args.m"
  {
#line 200 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 200 "unused_args.m"
    {
#line 200 "unused_args.m"
      return transform_hlds__unused_args__succeeded = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0();
    }
#line 200 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 200 "unused_args.m"
  }
#line 199 "unused_args.m"
}

#line 221 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__equivalent_3_3_p_0(
#line 221 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_9,
#line 221 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_10,
#line 221 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_3)
#line 221 "unused_args.m"
{
#line 221 "unused_args.m"
  {
#line 221 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 221 "unused_args.m"
    {
#line 221 "unused_args.m"
      return transform_hlds__unused_args__succeeded = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(transform_hlds__unused_args__Args_10, transform_hlds__unused_args__Args_3);
    }
#line 221 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 221 "unused_args.m"
  }
#line 221 "unused_args.m"
}

#line 216 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__more_precise_than_3_3_p_0(
#line 216 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_4,
#line 216 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer1_5,
#line 216 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer2_6)
#line 216 "unused_args.m"
{
#line 216 "unused_args.m"
  {
#line 216 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 216 "unused_args.m"
    {
#line 216 "unused_args.m"
      return transform_hlds__unused_args__succeeded = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_93_95_48_3_p_0(transform_hlds__unused_args__Answer1_5, transform_hlds__unused_args__Answer2_6);
    }
#line 216 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 216 "unused_args.m"
  }
#line 216 "unused_args.m"
}

#line 185 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__get_func_info_6_6_p_0(
#line 185 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_17,
#line 185 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleName_18,
#line 185 "unused_args.m"
  MR_Word transform_hlds__unused_args__FuncId_19,
#line 185 "unused_args.m"
  MR_Word * transform_hlds__unused_args__FuncInfo_22)
#line 185 "unused_args.m"
{
#line 185 "unused_args.m"
  {
#line 185 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 185 "unused_args.m"
    {
#line 185 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_103_101_116_95_102_117_110_99_95_105_110_102_111_95_54_95_95_91_52_44_32_53_93_95_48_6_p_0(transform_hlds__unused_args__ModuleInfo_17, transform_hlds__unused_args__ModuleName_18, transform_hlds__unused_args__FuncId_19, transform_hlds__unused_args__FuncInfo_22);
#line 185 "unused_args.m"
      return;
    }
#line 185 "unused_args.m"
  }
#line 185 "unused_args.m"
}

#line 184 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__top_2_2_f_0(
#line 184 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_12)
#line 184 "unused_args.m"
{
#line 184 "unused_args.m"
  {
#line 184 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 184 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVar__3_3;

#line 184 "unused_args.m"
    {
#line 184 "unused_args.m"
      return transform_hlds__unused_args__HeadVar__3_3 = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 184 "unused_args.m"
    return transform_hlds__unused_args__HeadVar__3_3;
#line 184 "unused_args.m"
  }
#line 184 "unused_args.m"
}

#line 183 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__bottom_2_2_f_0(
#line 183 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1)
#line 183 "unused_args.m"
{
#line 183 "unused_args.m"
  {
#line 183 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 183 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVar__3_3;

#line 183 "unused_args.m"
    {
#line 183 "unused_args.m"
      return transform_hlds__unused_args__HeadVar__3_3 = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_50_95_95_91_50_93_95_48_2_f_0(transform_hlds__unused_args__HeadVar__1_1);
    }
#line 183 "unused_args.m"
    return transform_hlds__unused_args__HeadVar__3_3;
#line 183 "unused_args.m"
  }
#line 183 "unused_args.m"
}

#line 182 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0(void)
#line 182 "unused_args.m"
{
#line 182 "unused_args.m"
  {
#line 182 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 182 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVar__3_3;

#line 182 "unused_args.m"
    {
#line 182 "unused_args.m"
      return transform_hlds__unused_args__HeadVar__3_3 = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 182 "unused_args.m"
    return transform_hlds__unused_args__HeadVar__3_3;
#line 182 "unused_args.m"
  }
#line 182 "unused_args.m"
}

#line 181 "unused_args.m"
static MR_Integer MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_version_number_2_2_f_0(void)
#line 181 "unused_args.m"
{
#line 181 "unused_args.m"
  {
#line 181 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 181 "unused_args.m"
    MR_Integer transform_hlds__unused_args__HeadVar__3_3;

#line 181 "unused_args.m"
    {
#line 181 "unused_args.m"
      return transform_hlds__unused_args__HeadVar__3_3 = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 181 "unused_args.m"
    return transform_hlds__unused_args__HeadVar__3_3;
#line 181 "unused_args.m"
  }
#line 181 "unused_args.m"
}

#line 180 "unused_args.m"
static MR_String MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_name_2_2_f_0(void)
#line 180 "unused_args.m"
{
#line 195 "unused_args.m"
  {
#line 195 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 195 "unused_args.m"
    MR_String transform_hlds__unused_args__HeadVar__3_3;

#line 195 "unused_args.m"
    {
#line 195 "unused_args.m"
      return transform_hlds__unused_args__HeadVar__3_3 = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 195 "unused_args.m"
    return transform_hlds__unused_args__HeadVar__3_3;
#line 195 "unused_args.m"
  }
#line 180 "unused_args.m"
}

#line 152 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____warning_info_0_0(
#line 152 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 152 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 152 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 152 "unused_args.m"
{
#line 152 "unused_args.m"
  {
#line 152 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 152 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_15 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 152 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_16 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 152 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_15 == transform_hlds__unused_args__CastY_16);
#line 152 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 6706 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 152 "unused_args.m"
    else
#line 152 "unused_args.m"
      {
#line 152 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 152 "unused_args.m"
        MR_String transform_hlds__unused_args__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 152 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 2)));
#line 152 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 3)));
#line 152 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 0)));
#line 152 "unused_args.m"
        MR_String transform_hlds__unused_args__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 1)));
#line 152 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 2)));
#line 152 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 3)));
#line 152 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_12_12;

#line 152 "unused_args.m"
        {
#line 152 "unused_args.m"
          mercury__term____Compare____context_0_0(&transform_hlds__unused_args__V_12_12, transform_hlds__unused_args__V_4_4, transform_hlds__unused_args__V_8_8);
        }
#line 6736 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_12_12 == (MR_Integer) 0);
#line 152 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 152 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 152 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_12_12;
#line 152 "unused_args.m"
        else
#line 152 "unused_args.m"
          {
#line 152 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_13_13;

#line 152 "unused_args.m"
            {
#line 152 "unused_args.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&transform_hlds__unused_args__V_13_13, transform_hlds__unused_args__V_5_5, transform_hlds__unused_args__V_9_9);
            }
#line 6756 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_13_13 == (MR_Integer) 0);
#line 152 "unused_args.m"
            transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 152 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 152 "unused_args.m"
              *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_13_13;
#line 152 "unused_args.m"
            else
#line 152 "unused_args.m"
              {
#line 152 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_14_14;

#line 152 "unused_args.m"
                {
#line 152 "unused_args.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__unused_args__V_14_14, transform_hlds__unused_args__V_6_6, transform_hlds__unused_args__V_10_10);
                }
#line 6776 "transform_hlds.unused_args.c"
                transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_14_14 == (MR_Integer) 0);
#line 152 "unused_args.m"
                transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 152 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 152 "unused_args.m"
                  *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_14_14;
#line 152 "unused_args.m"
                else
#line 152 "unused_args.m"
                  {
#line 152 "unused_args.m"
                    {
#line 152 "unused_args.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[0], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__V_7_7)), ((MR_Box) (transform_hlds__unused_args__V_11_11)));
#line 152 "unused_args.m"
                      return;
                    }
#line 152 "unused_args.m"
                  }
#line 152 "unused_args.m"
              }
#line 152 "unused_args.m"
          }
#line 152 "unused_args.m"
      }
#line 152 "unused_args.m"
  }
#line 152 "unused_args.m"
}

#line 152 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____warning_info_0_0(
#line 152 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 152 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 152 "unused_args.m"
{
#line 152 "unused_args.m"
  {
#line 152 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 152 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_11 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 152 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_12 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 152 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_11 == transform_hlds__unused_args__CastY_12);
#line 152 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 152 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 152 "unused_args.m"
    else
#line 152 "unused_args.m"
      {
#line 152 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_14_14;
#line 152 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 152 "unused_args.m"
        MR_String transform_hlds__unused_args__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 152 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 2)));
#line 152 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 3)));
#line 152 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 152 "unused_args.m"
        MR_String transform_hlds__unused_args__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 152 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 2)));
#line 152 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 3)));

#line 6855 "transform_hlds.unused_args.c"
        {
#line 6857 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__succeeded = mercury__term____Unify____context_0_0(transform_hlds__unused_args__V_3_3, transform_hlds__unused_args__V_7_7);
        }
#line 152 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 152 "unused_args.m"
          {
#line 6864 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__succeeded = (strcmp(transform_hlds__unused_args__V_4_4, transform_hlds__unused_args__V_8_8) == 0);
#line 152 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 152 "unused_args.m"
              {
#line 6870 "transform_hlds.unused_args.c"
                transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_5_5 == transform_hlds__unused_args__V_9_9);
#line 152 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 152 "unused_args.m"
                  {
#line 6876 "transform_hlds.unused_args.c"
                    transform_hlds__unused_args__TypeInfo_14_14 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[0];
#line 6878 "transform_hlds.unused_args.c"
                    {
#line 6880 "transform_hlds.unused_args.c"
                      return transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_14_14, ((MR_Box) (transform_hlds__unused_args__V_6_6)), ((MR_Box) (transform_hlds__unused_args__V_10_10)));
                    }
#line 152 "unused_args.m"
                  }
#line 152 "unused_args.m"
              }
#line 152 "unused_args.m"
          }
#line 152 "unused_args.m"
      }
#line 152 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 152 "unused_args.m"
  }
#line 152 "unused_args.m"
}

#line 150 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____var_usage_0_0(
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
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[7], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar2_5)));
#line 150 "unused_args.m"
      return;
    }
#line 150 "unused_args.m"
  }
#line 150 "unused_args.m"
}

#line 150 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_usage_0_0(
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
      return transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[7], ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar2_4)));
    }
#line 150 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 150 "unused_args.m"
  }
#line 150 "unused_args.m"
}

#line 147 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____var_dep_0_0(
#line 147 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 147 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 147 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 147 "unused_args.m"
{
#line 147 "unused_args.m"
  {
#line 147 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 147 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar1_4 = transform_hlds__unused_args__HeadVar__2_2;
#line 147 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar2_5 = transform_hlds__unused_args__HeadVar__3_3;

#line 147 "unused_args.m"
    {
#line 147 "unused_args.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[1], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar2_5)));
#line 147 "unused_args.m"
      return;
    }
#line 147 "unused_args.m"
  }
#line 147 "unused_args.m"
}

#line 147 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_dep_0_0(
#line 147 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 147 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 147 "unused_args.m"
{
#line 147 "unused_args.m"
  {
#line 147 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 147 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar1_3 = transform_hlds__unused_args__HeadVar__1_1;
#line 147 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar2_4 = transform_hlds__unused_args__HeadVar__2_2;

#line 147 "unused_args.m"
    {
#line 147 "unused_args.m"
      return transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[1], ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar2_4)));
    }
#line 147 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 147 "unused_args.m"
  }
#line 147 "unused_args.m"
}

#line 142 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____usage_info_0_0(
#line 142 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 142 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 142 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 142 "unused_args.m"
{
#line 142 "unused_args.m"
  {
#line 142 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 142 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_9 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 142 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_10 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 142 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_9 == transform_hlds__unused_args__CastY_10);
#line 142 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 7046 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 142 "unused_args.m"
    else
#line 142 "unused_args.m"
      {
#line 142 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 142 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 142 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 0)));
#line 142 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 1)));
#line 142 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8;

#line 142 "unused_args.m"
        {
#line 142 "unused_args.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[8], &transform_hlds__unused_args__V_8_8, ((MR_Box) (transform_hlds__unused_args__V_4_4)), ((MR_Box) (transform_hlds__unused_args__V_6_6)));
        }
#line 7068 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_8_8 == (MR_Integer) 0);
#line 142 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 142 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 142 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_8_8;
#line 142 "unused_args.m"
        else
#line 142 "unused_args.m"
          {
#line 142 "unused_args.m"
            {
#line 142 "unused_args.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[9], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__V_5_5)), ((MR_Box) (transform_hlds__unused_args__V_7_7)));
#line 142 "unused_args.m"
              return;
            }
#line 142 "unused_args.m"
          }
#line 142 "unused_args.m"
      }
#line 142 "unused_args.m"
  }
#line 142 "unused_args.m"
}

#line 142 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____usage_info_0_0(
#line 142 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 142 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 142 "unused_args.m"
{
#line 142 "unused_args.m"
  {
#line 142 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 142 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_7 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 142 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_8 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 142 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_7 == transform_hlds__unused_args__CastY_8);
#line 142 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 142 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 142 "unused_args.m"
    else
#line 142 "unused_args.m"
      {
#line 142 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_10_10;
#line 142 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 142 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 142 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 142 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));

#line 7135 "transform_hlds.unused_args.c"
        {
#line 7137 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[8], ((MR_Box) (transform_hlds__unused_args__V_3_3)), ((MR_Box) (transform_hlds__unused_args__V_5_5)));
        }
#line 142 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 142 "unused_args.m"
          {
#line 7144 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__TypeInfo_10_10 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[9];
#line 7146 "transform_hlds.unused_args.c"
            {
#line 7148 "transform_hlds.unused_args.c"
              return transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_10_10, ((MR_Box) (transform_hlds__unused_args__V_4_4)), ((MR_Box) (transform_hlds__unused_args__V_6_6)));
            }
#line 142 "unused_args.m"
          }
#line 142 "unused_args.m"
      }
#line 142 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 142 "unused_args.m"
  }
#line 142 "unused_args.m"
}

#line 602 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_info_0_0(
#line 602 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 602 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 602 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 602 "unused_args.m"
{
#line 602 "unused_args.m"
  {
#line 602 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 602 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_9 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 602 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_10 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 602 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_9 == transform_hlds__unused_args__CastY_10);
#line 602 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 7186 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 602 "unused_args.m"
    else
#line 602 "unused_args.m"
      {
#line 602 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 602 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 602 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 0)));
#line 602 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 1)));
#line 602 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8;

#line 602 "unused_args.m"
        {
#line 602 "unused_args.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__unused_args__V_8_8, transform_hlds__unused_args__V_4_4, transform_hlds__unused_args__V_6_6);
        }
#line 7208 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_8_8 == (MR_Integer) 0);
#line 602 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 602 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 602 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_8_8;
#line 602 "unused_args.m"
        else
#line 602 "unused_args.m"
          {
#line 602 "unused_args.m"
            {
#line 602 "unused_args.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[6], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__V_5_5)), ((MR_Box) (transform_hlds__unused_args__V_7_7)));
#line 602 "unused_args.m"
              return;
            }
#line 602 "unused_args.m"
          }
#line 602 "unused_args.m"
      }
#line 602 "unused_args.m"
  }
#line 602 "unused_args.m"
}

#line 602 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_info_0_0(
#line 602 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 602 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 602 "unused_args.m"
{
#line 602 "unused_args.m"
  {
#line 602 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 602 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_7 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 602 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_8 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 602 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_7 == transform_hlds__unused_args__CastY_8);
#line 602 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 602 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 602 "unused_args.m"
    else
#line 602 "unused_args.m"
      {
#line 602 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_10_10;
#line 602 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 602 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 602 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 602 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));

#line 7275 "transform_hlds.unused_args.c"
        {
#line 7277 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__unused_args__V_3_3, transform_hlds__unused_args__V_5_5);
        }
#line 602 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 602 "unused_args.m"
          {
#line 7284 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__TypeInfo_10_10 = (MR_Word) &transform_hlds__unused_args_scalar_common_2[6];
#line 7286 "transform_hlds.unused_args.c"
            {
#line 7288 "transform_hlds.unused_args.c"
              return transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_10_10, ((MR_Box) (transform_hlds__unused_args__V_4_4)), ((MR_Box) (transform_hlds__unused_args__V_6_6)));
            }
#line 602 "unused_args.m"
          }
#line 602 "unused_args.m"
      }
#line 602 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 602 "unused_args.m"
  }
#line 602 "unused_args.m"
}

#line 161 "unused_args.m"
void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_func_info_0_0(
#line 161 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 161 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 161 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 161 "unused_args.m"
{
#line 161 "unused_args.m"
  {
#line 161 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 161 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_6 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 161 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_7 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 161 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_6 == transform_hlds__unused_args__CastY_7);
#line 161 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 7326 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 161 "unused_args.m"
    else
#line 161 "unused_args.m"
      {
#line 161 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_4_4 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 161 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_5_5 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 161 "unused_args.m"
        {
#line 161 "unused_args.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__unused_args__HeadVar__1_1, transform_hlds__unused_args__V_4_4, transform_hlds__unused_args__V_5_5);
#line 161 "unused_args.m"
          return;
        }
#line 161 "unused_args.m"
      }
#line 161 "unused_args.m"
  }
#line 161 "unused_args.m"
}

#line 161 "unused_args.m"
MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_func_info_0_0(
#line 161 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 161 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 161 "unused_args.m"
{
#line 161 "unused_args.m"
  {
#line 161 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 161 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_5 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 161 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_6 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 161 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_5 == transform_hlds__unused_args__CastY_6);
#line 161 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 161 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 161 "unused_args.m"
    else
#line 161 "unused_args.m"
      {
#line 161 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_3_3 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 161 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_4_4 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 7384 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_3_3 == transform_hlds__unused_args__V_4_4);
#line 161 "unused_args.m"
      }
#line 161 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 161 "unused_args.m"
  }
#line 161 "unused_args.m"
}

#line 164 "unused_args.m"
void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_call_0_0(
#line 164 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1)
#line 164 "unused_args.m"
{
#line 164 "unused_args.m"
  {
#line 164 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 164 "unused_args.m"
    {
#line 164 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(transform_hlds__unused_args__HeadVar__1_1);
#line 164 "unused_args.m"
      return;
    }
#line 164 "unused_args.m"
  }
#line 164 "unused_args.m"
}

#line 164 "unused_args.m"
MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_call_0_0(void)
#line 164 "unused_args.m"
{
#line 164 "unused_args.m"
  {
#line 164 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 164 "unused_args.m"
    {
#line 164 "unused_args.m"
      return transform_hlds__unused_args__succeeded = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 164 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 164 "unused_args.m"
  }
#line 164 "unused_args.m"
}

#line 167 "unused_args.m"
void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_answer_0_0(
#line 167 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 167 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 167 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 167 "unused_args.m"
{
#line 167 "unused_args.m"
  {
#line 167 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 167 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_6 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 167 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_7 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 167 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_6 == transform_hlds__unused_args__CastY_7);
#line 167 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 7465 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 167 "unused_args.m"
    else
#line 167 "unused_args.m"
      {
#line 167 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = (MR_Word) transform_hlds__unused_args__HeadVar__2_2;
#line 167 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = (MR_Word) transform_hlds__unused_args__HeadVar__3_3;

#line 167 "unused_args.m"
        {
#line 167 "unused_args.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[0], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__V_4_4)), ((MR_Box) (transform_hlds__unused_args__V_5_5)));
#line 167 "unused_args.m"
          return;
        }
#line 167 "unused_args.m"
      }
#line 167 "unused_args.m"
  }
#line 167 "unused_args.m"
}

#line 167 "unused_args.m"
MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_answer_0_0(
#line 167 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 167 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 167 "unused_args.m"
{
#line 167 "unused_args.m"
  {
#line 167 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 167 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_5 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 167 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_6 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 167 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_5 == transform_hlds__unused_args__CastY_6);
#line 167 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 167 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 167 "unused_args.m"
    else
#line 167 "unused_args.m"
      {
#line 167 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = (MR_Word) transform_hlds__unused_args__HeadVar__1_1;
#line 167 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = (MR_Word) transform_hlds__unused_args__HeadVar__2_2;

#line 7523 "transform_hlds.unused_args.c"
        {
#line 7525 "transform_hlds.unused_args.c"
          return transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[0], ((MR_Box) (transform_hlds__unused_args__V_3_3)), ((MR_Box) (transform_hlds__unused_args__V_4_4)));
        }
#line 167 "unused_args.m"
      }
#line 167 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 167 "unused_args.m"
  }
#line 167 "unused_args.m"
}

#line 973 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____proc_call_info_0_0(
#line 973 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 973 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 973 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 973 "unused_args.m"
{
#line 973 "unused_args.m"
  {
#line 973 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 973 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar1_4 = transform_hlds__unused_args__HeadVar__2_2;
#line 973 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar2_5 = transform_hlds__unused_args__HeadVar__3_3;

#line 973 "unused_args.m"
    {
#line 973 "unused_args.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[0], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar2_5)));
#line 973 "unused_args.m"
      return;
    }
#line 973 "unused_args.m"
  }
#line 973 "unused_args.m"
}

#line 973 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____proc_call_info_0_0(
#line 973 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 973 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 973 "unused_args.m"
{
#line 973 "unused_args.m"
  {
#line 973 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 973 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar1_3 = transform_hlds__unused_args__HeadVar__1_1;
#line 973 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar2_4 = transform_hlds__unused_args__HeadVar__2_2;

#line 973 "unused_args.m"
    {
#line 973 "unused_args.m"
      return transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[0], ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar2_4)));
    }
#line 973 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 973 "unused_args.m"
  }
#line 973 "unused_args.m"
}

#line 977 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____new_proc_info_0_0(
#line 977 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 977 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 977 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 977 "unused_args.m"
{
#line 977 "unused_args.m"
  {
#line 977 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 977 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_15 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 977 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_16 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 977 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_15 == transform_hlds__unused_args__CastY_16);
#line 977 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 7623 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 977 "unused_args.m"
    else
#line 977 "unused_args.m"
      {
#line 977 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 977 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 977 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 2)));
#line 977 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 3)));
#line 977 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 0)));
#line 977 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 1)));
#line 977 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 2)));
#line 977 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 3)));
#line 977 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_12_12;

#line 977 "unused_args.m"
        {
#line 977 "unused_args.m"
          hlds__hlds_pred____Compare____pred_id_0_0(&transform_hlds__unused_args__V_12_12, transform_hlds__unused_args__V_4_4, transform_hlds__unused_args__V_8_8);
        }
#line 7653 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_12_12 == (MR_Integer) 0);
#line 977 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 977 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 977 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_12_12;
#line 977 "unused_args.m"
        else
#line 977 "unused_args.m"
          {
#line 977 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_13_13;

#line 977 "unused_args.m"
            {
#line 977 "unused_args.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__unused_args__V_13_13, transform_hlds__unused_args__V_5_5, transform_hlds__unused_args__V_9_9);
            }
#line 7673 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_13_13 == (MR_Integer) 0);
#line 977 "unused_args.m"
            transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 977 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 977 "unused_args.m"
              *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_13_13;
#line 977 "unused_args.m"
            else
#line 977 "unused_args.m"
              {
#line 977 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_14_14;

#line 977 "unused_args.m"
                {
#line 977 "unused_args.m"
                  mdbcomp__sym_name____Compare____sym_name_0_0(&transform_hlds__unused_args__V_14_14, transform_hlds__unused_args__V_6_6, transform_hlds__unused_args__V_10_10);
                }
#line 7693 "transform_hlds.unused_args.c"
                transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_14_14 == (MR_Integer) 0);
#line 977 "unused_args.m"
                transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 977 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 977 "unused_args.m"
                  *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_14_14;
#line 977 "unused_args.m"
                else
#line 977 "unused_args.m"
                  {
#line 977 "unused_args.m"
                    {
#line 977 "unused_args.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[0], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__V_7_7)), ((MR_Box) (transform_hlds__unused_args__V_11_11)));
#line 977 "unused_args.m"
                      return;
                    }
#line 977 "unused_args.m"
                  }
#line 977 "unused_args.m"
              }
#line 977 "unused_args.m"
          }
#line 977 "unused_args.m"
      }
#line 977 "unused_args.m"
  }
#line 977 "unused_args.m"
}

#line 977 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____new_proc_info_0_0(
#line 977 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 977 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 977 "unused_args.m"
{
#line 977 "unused_args.m"
  {
#line 977 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 977 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_11 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 977 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_12 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 977 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_11 == transform_hlds__unused_args__CastY_12);
#line 977 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 977 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 977 "unused_args.m"
    else
#line 977 "unused_args.m"
      {
#line 977 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_15_15;
#line 977 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 977 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 977 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 2)));
#line 977 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 3)));
#line 977 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 977 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 977 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 2)));
#line 977 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 3)));

#line 7772 "transform_hlds.unused_args.c"
        {
#line 7774 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__unused_args__V_3_3, transform_hlds__unused_args__V_7_7);
        }
#line 977 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 977 "unused_args.m"
          {
#line 7781 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_4_4 == transform_hlds__unused_args__V_8_8);
#line 977 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 977 "unused_args.m"
              {
#line 7787 "transform_hlds.unused_args.c"
                {
#line 7789 "transform_hlds.unused_args.c"
                  transform_hlds__unused_args__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__unused_args__V_5_5, transform_hlds__unused_args__V_9_9);
                }
#line 977 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 977 "unused_args.m"
                  {
#line 7796 "transform_hlds.unused_args.c"
                    transform_hlds__unused_args__TypeInfo_15_15 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[0];
#line 7798 "transform_hlds.unused_args.c"
                    {
#line 7800 "transform_hlds.unused_args.c"
                      return transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_15_15, ((MR_Box) (transform_hlds__unused_args__V_6_6)), ((MR_Box) (transform_hlds__unused_args__V_10_10)));
                    }
#line 977 "unused_args.m"
                  }
#line 977 "unused_args.m"
              }
#line 977 "unused_args.m"
          }
#line 977 "unused_args.m"
      }
#line 977 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 977 "unused_args.m"
  }
#line 977 "unused_args.m"
}

#line 1393 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____fixup_info_0_0(
#line 1393 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 1393 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 1393 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 1393 "unused_args.m"
{
#line 1393 "unused_args.m"
  {
#line 1393 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1393 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_18 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 1393 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_19 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 1393 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_18 == transform_hlds__unused_args__CastY_19);
#line 1393 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 7842 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 1393 "unused_args.m"
    else
#line 1393 "unused_args.m"
      {
#line 1393 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 1393 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 1393 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 2)));
#line 1393 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 3)));
#line 1393 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 4)));
#line 1393 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 0)));
#line 1393 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 1)));
#line 1393 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 2)));
#line 1393 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 3)));
#line 1393 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 4)));
#line 1393 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_14_14;

#line 1393 "unused_args.m"
        {
#line 1393 "unused_args.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__unused_args__V_14_14, transform_hlds__unused_args__V_4_4, transform_hlds__unused_args__V_9_9);
        }
#line 7876 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_14_14 == (MR_Integer) 0);
#line 1393 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1393 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1393 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_14_14;
#line 1393 "unused_args.m"
        else
#line 1393 "unused_args.m"
          {
#line 1393 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_15_15;

#line 1393 "unused_args.m"
            {
#line 1393 "unused_args.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[0], &transform_hlds__unused_args__V_15_15, ((MR_Box) (transform_hlds__unused_args__V_5_5)), ((MR_Box) (transform_hlds__unused_args__V_10_10)));
            }
#line 7896 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_15_15 == (MR_Integer) 0);
#line 1393 "unused_args.m"
            transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1393 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1393 "unused_args.m"
              *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_15_15;
#line 1393 "unused_args.m"
            else
#line 1393 "unused_args.m"
              {
#line 1393 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_16_16;

#line 1393 "unused_args.m"
                {
#line 1393 "unused_args.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[6], &transform_hlds__unused_args__V_16_16, ((MR_Box) (transform_hlds__unused_args__V_6_6)), ((MR_Box) (transform_hlds__unused_args__V_11_11)));
                }
#line 7916 "transform_hlds.unused_args.c"
                transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_16_16 == (MR_Integer) 0);
#line 1393 "unused_args.m"
                transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1393 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 1393 "unused_args.m"
                  *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_16_16;
#line 1393 "unused_args.m"
                else
#line 1393 "unused_args.m"
                  {
#line 1393 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_17_17;

#line 1393 "unused_args.m"
                    {
#line 1393 "unused_args.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[7], &transform_hlds__unused_args__V_17_17, ((MR_Box) (transform_hlds__unused_args__V_7_7)), ((MR_Box) (transform_hlds__unused_args__V_12_12)));
                    }
#line 7936 "transform_hlds.unused_args.c"
                    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_17_17 == (MR_Integer) 0);
#line 1393 "unused_args.m"
                    transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1393 "unused_args.m"
                    if (transform_hlds__unused_args__succeeded)
#line 1393 "unused_args.m"
                      *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_17_17;
#line 1393 "unused_args.m"
                    else
#line 1393 "unused_args.m"
                      {
#line 1393 "unused_args.m"
                        {
#line 1393 "unused_args.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[6], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__V_8_8)), ((MR_Box) (transform_hlds__unused_args__V_13_13)));
#line 1393 "unused_args.m"
                          return;
                        }
#line 1393 "unused_args.m"
                      }
#line 1393 "unused_args.m"
                  }
#line 1393 "unused_args.m"
              }
#line 1393 "unused_args.m"
          }
#line 1393 "unused_args.m"
      }
#line 1393 "unused_args.m"
  }
#line 1393 "unused_args.m"
}

#line 1393 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____fixup_info_0_0(
#line 1393 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1393 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 1393 "unused_args.m"
{
#line 1393 "unused_args.m"
  {
#line 1393 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1393 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_13 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 1393 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_14 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 1393 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_13 == transform_hlds__unused_args__CastY_14);
#line 1393 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1393 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1393 "unused_args.m"
    else
#line 1393 "unused_args.m"
      {
#line 1393 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_16_16;
#line 1393 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_17_17;
#line 1393 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_18_18;
#line 1393 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_19_19;
#line 1393 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 1393 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 1393 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 2)));
#line 1393 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 3)));
#line 1393 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 4)));
#line 1393 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 1393 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 1393 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 2)));
#line 1393 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 3)));
#line 1393 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 4)));

#line 8027 "transform_hlds.unused_args.c"
        {
#line 8029 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__unused_args__V_3_3, transform_hlds__unused_args__V_8_8);
        }
#line 1393 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1393 "unused_args.m"
          {
#line 8036 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__TypeInfo_16_16 = (MR_Word) &transform_hlds__unused_args_scalar_common_2[0];
#line 8038 "transform_hlds.unused_args.c"
            {
#line 8040 "transform_hlds.unused_args.c"
              transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_16_16, ((MR_Box) (transform_hlds__unused_args__V_4_4)), ((MR_Box) (transform_hlds__unused_args__V_9_9)));
            }
#line 1393 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1393 "unused_args.m"
              {
#line 8047 "transform_hlds.unused_args.c"
                transform_hlds__unused_args__TypeInfo_17_17 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[6];
#line 8049 "transform_hlds.unused_args.c"
                {
#line 8051 "transform_hlds.unused_args.c"
                  transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_17_17, ((MR_Box) (transform_hlds__unused_args__V_5_5)), ((MR_Box) (transform_hlds__unused_args__V_10_10)));
                }
#line 1393 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 1393 "unused_args.m"
                  {
#line 8058 "transform_hlds.unused_args.c"
                    transform_hlds__unused_args__TypeInfo_18_18 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[7];
#line 8060 "transform_hlds.unused_args.c"
                    {
#line 8062 "transform_hlds.unused_args.c"
                      transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_18_18, ((MR_Box) (transform_hlds__unused_args__V_6_6)), ((MR_Box) (transform_hlds__unused_args__V_11_11)));
                    }
#line 1393 "unused_args.m"
                    if (transform_hlds__unused_args__succeeded)
#line 1393 "unused_args.m"
                      {
#line 8069 "transform_hlds.unused_args.c"
                        transform_hlds__unused_args__TypeInfo_19_19 = (MR_Word) &transform_hlds__unused_args_scalar_common_2[6];
#line 8071 "transform_hlds.unused_args.c"
                        {
#line 8073 "transform_hlds.unused_args.c"
                          return transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_19_19, ((MR_Box) (transform_hlds__unused_args__V_7_7)), ((MR_Box) (transform_hlds__unused_args__V_12_12)));
                        }
#line 1393 "unused_args.m"
                      }
#line 1393 "unused_args.m"
                  }
#line 1393 "unused_args.m"
              }
#line 1393 "unused_args.m"
          }
#line 1393 "unused_args.m"
      }
#line 1393 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 1393 "unused_args.m"
  }
#line 1393 "unused_args.m"
}

#line 133 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____arg_var_in_proc_0_0(
#line 133 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 133 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 133 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 133 "unused_args.m"
{
#line 133 "unused_args.m"
  {
#line 133 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 133 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_9 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 133 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_10 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 133 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_9 == transform_hlds__unused_args__CastY_10);
#line 133 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 8117 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 133 "unused_args.m"
    else
#line 133 "unused_args.m"
      {
#line 133 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 133 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 133 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 0)));
#line 133 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 1)));
#line 133 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8;

#line 133 "unused_args.m"
        {
#line 133 "unused_args.m"
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__unused_args__V_8_8, transform_hlds__unused_args__V_4_4, transform_hlds__unused_args__V_6_6);
        }
#line 8139 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_8_8 == (MR_Integer) 0);
#line 133 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 133 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 133 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_8_8;
#line 133 "unused_args.m"
        else
#line 133 "unused_args.m"
          {
#line 133 "unused_args.m"
            {
#line 133 "unused_args.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__V_5_5)), ((MR_Box) (transform_hlds__unused_args__V_7_7)));
#line 133 "unused_args.m"
              return;
            }
#line 133 "unused_args.m"
          }
#line 133 "unused_args.m"
      }
#line 133 "unused_args.m"
  }
#line 133 "unused_args.m"
}

#line 133 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____arg_var_in_proc_0_0(
#line 133 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 133 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 133 "unused_args.m"
{
#line 133 "unused_args.m"
  {
#line 133 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 133 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_7 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 133 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_8 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 133 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_7 == transform_hlds__unused_args__CastY_8);
#line 133 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 133 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 133 "unused_args.m"
    else
#line 133 "unused_args.m"
      {
#line 133 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_10_10;
#line 133 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 133 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 133 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 133 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));

#line 8206 "transform_hlds.unused_args.c"
        {
#line 8208 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__unused_args__V_3_3, transform_hlds__unused_args__V_5_5);
        }
#line 133 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 133 "unused_args.m"
          {
#line 8215 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__TypeInfo_10_10 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 8217 "transform_hlds.unused_args.c"
            {
#line 8219 "transform_hlds.unused_args.c"
              return transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_10_10, ((MR_Box) (transform_hlds__unused_args__V_4_4)), ((MR_Box) (transform_hlds__unused_args__V_6_6)));
            }
#line 133 "unused_args.m"
          }
#line 133 "unused_args.m"
      }
#line 133 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 133 "unused_args.m"
  }
#line 133 "unused_args.m"
}

#line 1980 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_2_4_p_0(
#line 1980 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 1980 "unused_args.m"
  MR_Word transform_hlds__unused_args__CalleePredProcId_6,
#line 1980 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_17,
#line 1980 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_18)
#line 1980 "unused_args.m"
{
#line 1983 "unused_args.m"
  {
#line 1983 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1983 "unused_args.m"
    MR_Word transform_hlds__unused_args__CalleePredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__CalleePredProcId_6, (MR_Integer) 0)));
#line 1983 "unused_args.m"
    MR_Word transform_hlds__unused_args__CalleePredInfo_10;
#line 1984 "unused_args.m"
    MR_Integer transform_hlds__unused_args__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__CalleePredProcId_6, (MR_Integer) 1)));

#line 1985 "unused_args.m"
    {
#line 1985 "unused_args.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__unused_args__ModuleInfo_5, transform_hlds__unused_args__CalleePredId_8, &transform_hlds__unused_args__CalleePredInfo_10);
    }
#line 1987 "unused_args.m"
    {
#line 1987 "unused_args.m"
      transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_imported_not_external_1_p_0(transform_hlds__unused_args__CalleePredInfo_10);
    }
#line 1987 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1987 "unused_args.m"
      {
#line 1988 "unused_args.m"
        {
#line 1988 "unused_args.m"
          transform_hlds__unused_args__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__unused_args__CalleePredInfo_10);
        }
#line 1988 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1987 "unused_args.m"
      }
#line 1998 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1991 "unused_args.m"
      {
#line 1991 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeClassInfo_for_analysis_20;
#line 1991 "unused_args.m"
        MR_Word transform_hlds__unused_args__CalleeModule_11;
#line 1991 "unused_args.m"
        MR_Word transform_hlds__unused_args__CalleeFuncId_12;
#line 1991 "unused_args.m"
        MR_Word transform_hlds__unused_args__Answer_14;
#line 1991 "unused_args.m"
        MR_Word transform_hlds__unused_args__FuncInfo_16;
#line 8294 "transform_hlds.unused_args.c"
        void MR_CALL (* transform_hlds__unused_args__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8296 "transform_hlds.unused_args.c"
        MR_Box transform_hlds__unused_args__conv1_FuncInfo_16;

#line 1990 "unused_args.m"
        {
#line 1990 "unused_args.m"
          transform_hlds__mmc_analysis__module_name_func_id_4_p_0(transform_hlds__unused_args__ModuleInfo_5, transform_hlds__unused_args__CalleePredProcId_6, &transform_hlds__unused_args__CalleeModule_11, &transform_hlds__unused_args__CalleeFuncId_12);
        }
#line 1992 "unused_args.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 8306 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__TypeClassInfo_for_analysis_20 = (MR_Word) &transform_hlds__unused_args_scalar_common_4[0];
#line 8308 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__TypeClassInfo_for_analysis_20, (MR_Integer) 0)), (MR_Integer) 10)));
#line 8310 "transform_hlds.unused_args.c"
        {
#line 8312 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__func_0(((MR_Box) transform_hlds__unused_args__TypeClassInfo_for_analysis_20), ((MR_Box) (transform_hlds__unused_args__ModuleInfo_5)), ((MR_Box) (transform_hlds__unused_args__CalleeModule_11)), ((MR_Box) (transform_hlds__unused_args__CalleeFuncId_12)), &transform_hlds__unused_args__conv1_FuncInfo_16);
        }
#line 8315 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__FuncInfo_16 = ((MR_Word) transform_hlds__unused_args__conv1_FuncInfo_16);
#line 1996 "unused_args.m"
        {
#line 1996 "unused_args.m"
          analysis__record_dependency_7_p_0(transform_hlds__unused_args__TypeClassInfo_for_analysis_20, transform_hlds__unused_args__CalleeModule_11, transform_hlds__unused_args__CalleeFuncId_12, ((MR_Box) (transform_hlds__unused_args__FuncInfo_16)), ((MR_Box) ((MR_Integer) 0)), transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_17, transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_18);
#line 1996 "unused_args.m"
          return;
        }
#line 1991 "unused_args.m"
      }
#line 1998 "unused_args.m"
    else
#line 1998 "unused_args.m"
      *transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_18 = transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_17;
#line 1983 "unused_args.m"
  }
#line 1980 "unused_args.m"
}

#line 1977 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_4_p_0_1(
#line 1977 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1977 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1977 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1977 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3)
#line 1977 "unused_args.m"
{
#line 1977 "unused_args.m"
  {
#line 1977 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1977 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_18;

#line 1977 "unused_args.m"
    {
#line 1977 "unused_args.m"
      transform_hlds__unused_args__record_intermod_dependencies_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_18);
    }
#line 1977 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_18));
#line 1977 "unused_args.m"
  }
#line 1977 "unused_args.m"
}

#line 1969 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_4_p_0(
#line 1969 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 1969 "unused_args.m"
  MR_Word transform_hlds__unused_args__CallerPredProcId_6,
#line 1969 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_12,
#line 1969 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_13)
#line 1969 "unused_args.m"
{
#line 1972 "unused_args.m"
  {
#line 1972 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1972 "unused_args.m"
    MR_Word transform_hlds__unused_args__CallerProcInfo_9;
#line 1972 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal_10;
#line 1972 "unused_args.m"
    MR_Word transform_hlds__unused_args__CalleePredProcIds_11;
#line 1972 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_14_14;
#line 1973 "unused_args.m"
    MR_Word transform_hlds__unused_args___CallerPredInfo_8;
#line 1977 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv1_STATE_VARIABLE_AnalysisInfo_13;

#line 1973 "unused_args.m"
    {
#line 1973 "unused_args.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__unused_args__ModuleInfo_5, transform_hlds__unused_args__CallerPredProcId_6, &transform_hlds__unused_args___CallerPredInfo_8, &transform_hlds__unused_args__CallerProcInfo_9);
    }
#line 1975 "unused_args.m"
    {
#line 1975 "unused_args.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__unused_args__CallerProcInfo_9, &transform_hlds__unused_args__Goal_10);
    }
#line 1976 "unused_args.m"
    {
#line 1976 "unused_args.m"
      hlds__goal_util__pred_proc_ids_from_goal_2_p_0(transform_hlds__unused_args__Goal_10, &transform_hlds__unused_args__CalleePredProcIds_11);
    }
#line 1977 "unused_args.m"
    {
#line 1977 "unused_args.m"
      transform_hlds__unused_args__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1977 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_6[0]));
#line 1977 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 1) = ((MR_Box) (transform_hlds__unused_args__record_intermod_dependencies_4_p_0_1));
#line 1977 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1977 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 3) = ((MR_Box) (transform_hlds__unused_args__ModuleInfo_5));
#line 1977 "unused_args.m"
    }
#line 1977 "unused_args.m"
    {
#line 1977 "unused_args.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, transform_hlds__unused_args__V_14_14, transform_hlds__unused_args__CalleePredProcIds_11, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_12)), &transform_hlds__unused_args__conv1_STATE_VARIABLE_AnalysisInfo_13);
    }
#line 1977 "unused_args.m"
    *transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_13 = ((MR_Word) transform_hlds__unused_args__conv1_STATE_VARIABLE_AnalysisInfo_13);
#line 1972 "unused_args.m"
  }
#line 1969 "unused_args.m"
}

#line 1932 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__maybe_record_intermod_unused_args_2_7_p_0(
#line 1932 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_8,
#line 1932 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_9,
#line 1932 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_10,
#line 1932 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredInfo_11,
#line 1932 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_12,
#line 1932 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_19,
#line 1932 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_20)
#line 1932 "unused_args.m"
{
#line 1951 "unused_args.m"
  {
#line 1951 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1939 "unused_args.m"
    {
#line 1939 "unused_args.m"
      transform_hlds__unused_args__succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(transform_hlds__unused_args__ModuleInfo_8, transform_hlds__unused_args__PredInfo_11, transform_hlds__unused_args__ProcId_12);
    }
#line 1939 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1939 "unused_args.m"
      {
#line 1940 "unused_args.m"
        {
#line 1940 "unused_args.m"
          transform_hlds__unused_args__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__unused_args__PredInfo_11);
        }
#line 1940 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1939 "unused_args.m"
      }
#line 1951 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1942 "unused_args.m"
      {
#line 1942 "unused_args.m"
        MR_Word transform_hlds__unused_args__PPId_14;
#line 1942 "unused_args.m"
        MR_Word transform_hlds__unused_args__Answer_16;
#line 1942 "unused_args.m"
        MR_Word transform_hlds__unused_args__ModuleName_17;
#line 1942 "unused_args.m"
        MR_Word transform_hlds__unused_args__FuncId_18;
#line 1945 "unused_args.m"
        MR_Word transform_hlds__unused_args__UnusedArgs_15;
#line 1943 "unused_args.m"
        MR_Box transform_hlds__unused_args__conv0_UnusedArgs_15;

#line 1942 "unused_args.m"
        {
#line 1942 "unused_args.m"
          transform_hlds__unused_args__PPId_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1942 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PPId_14, 0) = ((MR_Box) (transform_hlds__unused_args__PredId_10));
#line 1942 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PPId_14, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_12));
#line 1942 "unused_args.m"
        }
#line 1943 "unused_args.m"
        {
#line 1943 "unused_args.m"
          transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args_scalar_common_1[0], transform_hlds__unused_args__UnusedArgInfo_9, ((MR_Box) (transform_hlds__unused_args__PPId_14)), &transform_hlds__unused_args__conv0_UnusedArgs_15);
        }
#line 1943 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1943 "unused_args.m"
          {
#line 1943 "unused_args.m"
            transform_hlds__unused_args__UnusedArgs_15 = ((MR_Word) transform_hlds__unused_args__conv0_UnusedArgs_15);
#line 1943 "unused_args.m"
            transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1943 "unused_args.m"
          }
#line 1945 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1944 "unused_args.m"
          transform_hlds__unused_args__Answer_16 = (MR_Word) transform_hlds__unused_args__UnusedArgs_15;
#line 1945 "unused_args.m"
        else
#line 1946 "unused_args.m"
          {
#line 1946 "unused_args.m"
            transform_hlds__unused_args__Answer_16 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1946 "unused_args.m"
          }
#line 1948 "unused_args.m"
        {
#line 1948 "unused_args.m"
          transform_hlds__mmc_analysis__module_name_func_id_4_p_0(transform_hlds__unused_args__ModuleInfo_8, transform_hlds__unused_args__PPId_14, &transform_hlds__unused_args__ModuleName_17, &transform_hlds__unused_args__FuncId_18);
        }
#line 1949 "unused_args.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1949 "unused_args.m"
        {
#line 1949 "unused_args.m"
          analysis__record_result_7_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_4[0], transform_hlds__unused_args__ModuleName_17, transform_hlds__unused_args__FuncId_18, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (transform_hlds__unused_args__Answer_16)), (MR_Integer) 2, transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_19, transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_20);
#line 1949 "unused_args.m"
          return;
        }
#line 1942 "unused_args.m"
      }
#line 1951 "unused_args.m"
    else
#line 1951 "unused_args.m"
      *transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_20 = transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_19;
#line 1951 "unused_args.m"
  }
#line 1932 "unused_args.m"
}

#line 1928 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0_1(
#line 1928 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1928 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1928 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1928 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3)
#line 1928 "unused_args.m"
{
#line 1928 "unused_args.m"
  {
#line 1928 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1928 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_20;

#line 1928 "unused_args.m"
    {
#line 1928 "unused_args.m"
      transform_hlds__unused_args__maybe_record_intermod_unused_args_2_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 6))), ((MR_Integer) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_20);
    }
#line 1928 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_20));
#line 1928 "unused_args.m"
  }
#line 1928 "unused_args.m"
}

#line 1920 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0(
#line 1920 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_6,
#line 1920 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_7,
#line 1920 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_8,
#line 1920 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_12,
#line 1920 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_13)
#line 1920 "unused_args.m"
{
#line 1924 "unused_args.m"
  {
#line 1924 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1924 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredInfo_10;
#line 1924 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcIds_11;
#line 1924 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_14_14;
#line 1927 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv1_STATE_VARIABLE_AnalysisInfo_13;

#line 1925 "unused_args.m"
    {
#line 1925 "unused_args.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__unused_args__ModuleInfo_6, transform_hlds__unused_args__PredId_8, &transform_hlds__unused_args__PredInfo_10);
    }
#line 1926 "unused_args.m"
    {
#line 1926 "unused_args.m"
      transform_hlds__unused_args__ProcIds_11 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__unused_args__PredInfo_10);
    }
#line 1928 "unused_args.m"
    {
#line 1928 "unused_args.m"
      transform_hlds__unused_args__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1928 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_11[0]));
#line 1928 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 1) = ((MR_Box) (transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0_1));
#line 1928 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1928 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 3) = ((MR_Box) (transform_hlds__unused_args__ModuleInfo_6));
#line 1928 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 4) = ((MR_Box) (transform_hlds__unused_args__UnusedArgInfo_7));
#line 1928 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 5) = ((MR_Box) (transform_hlds__unused_args__PredId_8));
#line 1928 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 6) = ((MR_Box) (transform_hlds__unused_args__PredInfo_10));
#line 1928 "unused_args.m"
    }
#line 1927 "unused_args.m"
    {
#line 1927 "unused_args.m"
      mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, transform_hlds__unused_args__V_14_14, transform_hlds__unused_args__ProcIds_11, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_12)), &transform_hlds__unused_args__conv1_STATE_VARIABLE_AnalysisInfo_13);
    }
#line 1927 "unused_args.m"
    *transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_13 = ((MR_Word) transform_hlds__unused_args__conv1_STATE_VARIABLE_AnalysisInfo_13);
#line 1924 "unused_args.m"
  }
#line 1920 "unused_args.m"
}

#line 1876 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__format_arg_list_2_2_f_0(
#line 1876 "unused_args.m"
  MR_Integer transform_hlds__unused_args__First_4,
#line 1876 "unused_args.m"
  MR_Word transform_hlds__unused_args__List_5)
#line 1876 "unused_args.m"
{
#line 1878 "unused_args.m"
  {
#line 1878 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1878 "unused_args.m"
    MR_Word transform_hlds__unused_args__Pieces_6;
#line 1878 "unused_args.m"
    MR_String transform_hlds__unused_args__FirstStr_7;

#line 1879 "unused_args.m"
    {
#line 1879 "unused_args.m"
      transform_hlds__unused_args__FirstStr_7 = mercury__string__int_to_string_1_f_0(transform_hlds__unused_args__First_4);
    }
#line 1884 "unused_args.m"
    if ((transform_hlds__unused_args__List_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1885 "unused_args.m"
      {
#line 1885 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_12_12;
#line 1885 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_13_13;

#line 1886 "unused_args.m"
        {
#line 1886 "unused_args.m"
          transform_hlds__unused_args__V_13_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1886 "unused_args.m"
          MR_hl_field(MR_mktag(2), transform_hlds__unused_args__V_13_13, 0) = ((MR_Box) (transform_hlds__unused_args__FirstStr_7));
#line 1886 "unused_args.m"
        }
#line 1886 "unused_args.m"
        {
#line 1886 "unused_args.m"
          transform_hlds__unused_args__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1886 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_12_12, 0) = ((MR_Box) (transform_hlds__unused_args__V_13_13));
#line 1886 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_12_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1886 "unused_args.m"
        }
#line 1886 "unused_args.m"
        {
#line 1886 "unused_args.m"
          transform_hlds__unused_args__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1886 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &transform_hlds__unused_args_scalar_common_9[1])));
#line 1886 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Pieces_6, 1) = ((MR_Box) (transform_hlds__unused_args__V_12_12));
#line 1886 "unused_args.m"
        }
#line 1885 "unused_args.m"
      }
#line 1884 "unused_args.m"
    else
#line 1881 "unused_args.m"
      {
#line 1881 "unused_args.m"
        MR_Integer transform_hlds__unused_args__Second_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__List_5, (MR_Integer) 0)));
#line 1881 "unused_args.m"
        MR_Word transform_hlds__unused_args__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__List_5, (MR_Integer) 1)));
#line 1881 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_17_17;
#line 1881 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_18_18;
#line 1881 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_19_19;

#line 1882 "unused_args.m"
        {
#line 1882 "unused_args.m"
          transform_hlds__unused_args__V_18_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1882 "unused_args.m"
          MR_hl_field(MR_mktag(2), transform_hlds__unused_args__V_18_18, 0) = ((MR_Box) (transform_hlds__unused_args__FirstStr_7));
#line 1882 "unused_args.m"
        }
#line 1883 "unused_args.m"
        {
#line 1883 "unused_args.m"
          transform_hlds__unused_args__V_19_19 = transform_hlds__unused_args__format_arg_list_2_2_f_0(transform_hlds__unused_args__Second_8, transform_hlds__unused_args__Rest_9);
        }
#line 1882 "unused_args.m"
        {
#line 1882 "unused_args.m"
          transform_hlds__unused_args__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1882 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_17_17, 0) = ((MR_Box) (transform_hlds__unused_args__V_18_18));
#line 1882 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_17_17, 1) = ((MR_Box) (transform_hlds__unused_args__V_19_19));
#line 1882 "unused_args.m"
        }
#line 1882 "unused_args.m"
        {
#line 1882 "unused_args.m"
          transform_hlds__unused_args__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1882 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__unused_args_scalar_common_1[20])));
#line 1882 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Pieces_6, 1) = ((MR_Box) (transform_hlds__unused_args__V_17_17));
#line 1882 "unused_args.m"
        }
#line 1881 "unused_args.m"
      }
#line 1878 "unused_args.m"
    return transform_hlds__unused_args__Pieces_6;
#line 1878 "unused_args.m"
  }
#line 1876 "unused_args.m"
}

#line 1824 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__drop_poly_inserted_args_3_p_0(
#line 1824 "unused_args.m"
  MR_Integer transform_hlds__unused_args__NumInserted_1,
#line 1824 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 1824 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__3_3)
#line 1824 "unused_args.m"
{
#line 1826 "unused_args.m"
  {
#line 1826 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1826 "unused_args.m"
    if ((transform_hlds__unused_args__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1826 "unused_args.m"
      *transform_hlds__unused_args__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1826 "unused_args.m"
    else
#line 1828 "unused_args.m"
      {
#line 1828 "unused_args.m"
        MR_Integer transform_hlds__unused_args__HeadArgWith_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 1828 "unused_args.m"
        MR_Word transform_hlds__unused_args__TailArgsWith_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 1828 "unused_args.m"
        MR_Word transform_hlds__unused_args__TailArgsWithout_9;
#line 1828 "unused_args.m"
        MR_Integer transform_hlds__unused_args__HeadArgWithout_10;

#line 1829 "unused_args.m"
        {
#line 1829 "unused_args.m"
          transform_hlds__unused_args__drop_poly_inserted_args_3_p_0(transform_hlds__unused_args__NumInserted_1, transform_hlds__unused_args__TailArgsWith_7, &transform_hlds__unused_args__TailArgsWithout_9);
        }
#line 1830 "unused_args.m"
        transform_hlds__unused_args__HeadArgWithout_10 = (transform_hlds__unused_args__HeadArgWith_6 - transform_hlds__unused_args__NumInserted_1);
#line 1831 "unused_args.m"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__HeadArgWithout_10 < (MR_Integer) 1);
#line 1833 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1832 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__3_3 = transform_hlds__unused_args__TailArgsWithout_9;
#line 1833 "unused_args.m"
        else
#line 1834 "unused_args.m"
          {
#line 1834 "unused_args.m"
            MR_Word base;
#line 1834 "unused_args.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1834 "unused_args.m"
            *transform_hlds__unused_args__HeadVar__3_3 = base;
#line 1834 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__HeadArgWithout_10));
#line 1834 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__TailArgsWithout_9));
#line 1834 "unused_args.m"
          }
#line 1828 "unused_args.m"
      }
#line 1826 "unused_args.m"
  }
#line 1824 "unused_args.m"
}

#line 1708 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__gather_warnings_and_pragmas_10_p_0(
#line 1708 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_1,
#line 1708 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_2,
#line 1708 "unused_args.m"
  MR_Word transform_hlds__unused_args__DoWarn_3,
#line 1708 "unused_args.m"
  MR_Word transform_hlds__unused_args__DoPragma_4,
#line 1708 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__5_5,
#line 1708 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_6,
#line 1708 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Specs_0_7,
#line 1708 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Specs_8,
#line 1708 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0_9,
#line 1708 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_10)
#line 1708 "unused_args.m"
{
#line 1714 "unused_args.m"
  while (MR_TRUE)
#line 1714 "unused_args.m"
    {
#line 1714 "unused_args.m"
      /* tailcall optimized into a loop */
#line 1714 "unused_args.m"
      {
#line 1714 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 1714 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1714 "unused_args.m"
          {
#line 1715 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_10 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0_9;
#line 1715 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_Specs_8 = transform_hlds__unused_args__STATE_VARIABLE_Specs_0_7;
#line 1714 "unused_args.m"
          }
#line 1714 "unused_args.m"
        else
#line 1718 "unused_args.m"
          {
#line 1718 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredProcId_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__5_5, (MR_Integer) 0)));
#line 1718 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredProcIds_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__5_5, (MR_Integer) 1)));
#line 1718 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_67_67;
#line 1718 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_68_68;
#line 1718 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_Specs_69_69;
#line 1783 "unused_args.m"
            MR_Word transform_hlds__unused_args__UnusedArgs_31;
#line 1719 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv0_UnusedArgs_31;

#line 1719 "unused_args.m"
            {
#line 1719 "unused_args.m"
              transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args_scalar_common_1[0], transform_hlds__unused_args__UnusedArgInfo_2, ((MR_Box) (transform_hlds__unused_args__PredProcId_26)), &transform_hlds__unused_args__conv0_UnusedArgs_31);
            }
#line 1719 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1719 "unused_args.m"
              {
#line 1719 "unused_args.m"
                transform_hlds__unused_args__UnusedArgs_31 = ((MR_Word) transform_hlds__unused_args__conv0_UnusedArgs_31);
#line 1719 "unused_args.m"
                transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1719 "unused_args.m"
              }
#line 1783 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1720 "unused_args.m"
              {
#line 1720 "unused_args.m"
                MR_Word transform_hlds__unused_args__PredId_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredProcId_26, (MR_Integer) 0)));
#line 1720 "unused_args.m"
                MR_Integer transform_hlds__unused_args__ProcId_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredProcId_26, (MR_Integer) 1)));
#line 1720 "unused_args.m"
                MR_Word transform_hlds__unused_args__PredInfo_34;
#line 1723 "unused_args.m"
                MR_String transform_hlds__unused_args__Name_35;
#line 1723 "unused_args.m"
                MR_Word transform_hlds__unused_args__PredStatus_36;
#line 1723 "unused_args.m"
                MR_Word transform_hlds__unused_args__Markers_37;
#line 1723 "unused_args.m"
                MR_Word transform_hlds__unused_args__TypeSpecInfo_44;
#line 1723 "unused_args.m"
                MR_Word transform_hlds__unused_args__TypeSpecForcePreds_46;
#line 1723 "unused_args.m"
                MR_Word transform_hlds__unused_args__Origin_49;
#line 1726 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_58_58;
#line 1735 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_59_59;
#line 1740 "unused_args.m"
                MR_String transform_hlds__unused_args__V_60_60;
#line 1740 "unused_args.m"
                MR_Integer transform_hlds__unused_args__V_38_38;
#line 1744 "unused_args.m"
                MR_Integer transform_hlds__unused_args__Position_39;
#line 1744 "unused_args.m"
                MR_Integer transform_hlds__unused_args__Length_40;
#line 1744 "unused_args.m"
                MR_Integer transform_hlds__unused_args__IdLen_41;
#line 1744 "unused_args.m"
                MR_String transform_hlds__unused_args__Id_42;
#line 1744 "unused_args.m"
                MR_String transform_hlds__unused_args__V_61_61;
#line 1744 "unused_args.m"
                MR_Integer transform_hlds__unused_args__V_62_62;
#line 1744 "unused_args.m"
                MR_Integer transform_hlds__unused_args__V_63_63;
#line 1748 "unused_args.m"
                MR_Integer transform_hlds__unused_args__V_43_43;
#line 1751 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_45_45;
#line 1751 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_47_47;
#line 1751 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_48_48;
#line 1752 "unused_args.m"
                MR_Word transform_hlds__unused_args__TypeCtorInfo_74_74;
#line 1757 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_64_64;
#line 1757 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_51_51;
#line 1757 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_52_52;
#line 1757 "unused_args.m"
                MR_Integer transform_hlds__unused_args__V_50_50;
#line 1763 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_65_65;
#line 1764 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_66_66;

#line 1721 "unused_args.m"
                {
#line 1721 "unused_args.m"
                  hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__unused_args__ModuleInfo_1, transform_hlds__unused_args__PredId_32, &transform_hlds__unused_args__PredInfo_34);
                }
#line 1723 "unused_args.m"
                {
#line 1723 "unused_args.m"
                  transform_hlds__unused_args__Name_35 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__unused_args__PredInfo_34);
                }
#line 1724 "unused_args.m"
                {
#line 1724 "unused_args.m"
                  transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__unused_args__PredInfo_34);
                }
#line 1724 "unused_args.m"
                transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1723 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 1723 "unused_args.m"
                  {
#line 1725 "unused_args.m"
                    {
#line 1725 "unused_args.m"
                      hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__unused_args__PredInfo_34, &transform_hlds__unused_args__PredStatus_36);
                    }
#line 1726 "unused_args.m"
                    transform_hlds__unused_args__V_58_58 = (MR_Word) transform_hlds__unused_args__PredStatus_36;
#line 1726 "unused_args.m"
                    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1726 "unused_args.m"
                    transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1723 "unused_args.m"
                    if (transform_hlds__unused_args__succeeded)
#line 1723 "unused_args.m"
                      {
#line 1729 "unused_args.m"
                        {
#line 1729 "unused_args.m"
                          transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(transform_hlds__unused_args__PredInfo_34);
                        }
#line 1729 "unused_args.m"
                        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1723 "unused_args.m"
                        if (transform_hlds__unused_args__succeeded)
#line 1723 "unused_args.m"
                          {
#line 1730 "unused_args.m"
                            {
#line 1730 "unused_args.m"
                              transform_hlds__unused_args__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__unused_args__PredInfo_34);
                            }
#line 1730 "unused_args.m"
                            transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1723 "unused_args.m"
                            if (transform_hlds__unused_args__succeeded)
#line 1723 "unused_args.m"
                              {
#line 1734 "unused_args.m"
                                {
#line 1734 "unused_args.m"
                                  hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__unused_args__PredInfo_34, &transform_hlds__unused_args__Markers_37);
                                }
#line 1735 "unused_args.m"
                                transform_hlds__unused_args__V_59_59 = (MR_Integer) 0;
#line 1735 "unused_args.m"
                                {
#line 1735 "unused_args.m"
                                  transform_hlds__unused_args__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__unused_args__Markers_37, transform_hlds__unused_args__V_59_59);
                                }
#line 1735 "unused_args.m"
                                transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1723 "unused_args.m"
                                if (transform_hlds__unused_args__succeeded)
#line 1723 "unused_args.m"
                                  {
#line 1740 "unused_args.m"
                                    transform_hlds__unused_args__V_60_60 = (MR_String) "__LambdaGoal__";
#line 1740 "unused_args.m"
                                    {
#line 1740 "unused_args.m"
                                      transform_hlds__unused_args__succeeded = mercury__string__sub_string_search_3_p_0(transform_hlds__unused_args__Name_35, transform_hlds__unused_args__V_60_60, &transform_hlds__unused_args__V_38_38);
                                    }
#line 1740 "unused_args.m"
                                    transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1723 "unused_args.m"
                                    if (transform_hlds__unused_args__succeeded)
#line 1723 "unused_args.m"
                                      {
#line 1744 "unused_args.m"
                                        transform_hlds__unused_args__V_61_61 = (MR_String) "__ho";
#line 1744 "unused_args.m"
                                        {
#line 1744 "unused_args.m"
                                          transform_hlds__unused_args__succeeded = mercury__string__sub_string_search_3_p_0(transform_hlds__unused_args__Name_35, transform_hlds__unused_args__V_61_61, &transform_hlds__unused_args__Position_39);
                                        }
#line 1744 "unused_args.m"
                                        if (transform_hlds__unused_args__succeeded)
#line 1744 "unused_args.m"
                                          {
#line 1745 "unused_args.m"
                                            {
#line 1745 "unused_args.m"
                                              mercury__string__length_2_p_0(transform_hlds__unused_args__Name_35, &transform_hlds__unused_args__Length_40);
                                            }
#line 1746 "unused_args.m"
                                            transform_hlds__unused_args__V_62_62 = (transform_hlds__unused_args__Length_40 - transform_hlds__unused_args__Position_39);
#line 1746 "unused_args.m"
                                            transform_hlds__unused_args__V_63_63 = (MR_Integer) 4;
#line 1746 "unused_args.m"
                                            transform_hlds__unused_args__IdLen_41 = (transform_hlds__unused_args__V_62_62 - transform_hlds__unused_args__V_63_63);
#line 1747 "unused_args.m"
                                            {
#line 1747 "unused_args.m"
                                              mercury__string__right_3_p_0(transform_hlds__unused_args__Name_35, transform_hlds__unused_args__IdLen_41, &transform_hlds__unused_args__Id_42);
                                            }
#line 1748 "unused_args.m"
                                            {
#line 1748 "unused_args.m"
                                              transform_hlds__unused_args__succeeded = mercury__string__to_int_2_p_0(transform_hlds__unused_args__Id_42, &transform_hlds__unused_args__V_43_43);
                                            }
#line 1744 "unused_args.m"
                                          }
#line 1743 "unused_args.m"
                                        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1723 "unused_args.m"
                                        if (transform_hlds__unused_args__succeeded)
#line 1723 "unused_args.m"
                                          {
#line 1750 "unused_args.m"
                                            {
#line 1750 "unused_args.m"
                                              hlds__hlds_module__module_info_get_type_spec_info_2_p_0(transform_hlds__unused_args__ModuleInfo_1, &transform_hlds__unused_args__TypeSpecInfo_44);
                                            }
#line 1751 "unused_args.m"
                                            transform_hlds__unused_args__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__TypeSpecInfo_44, (MR_Integer) 0)));
#line 1751 "unused_args.m"
                                            transform_hlds__unused_args__TypeSpecForcePreds_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__TypeSpecInfo_44, (MR_Integer) 1)));
#line 1751 "unused_args.m"
                                            transform_hlds__unused_args__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__TypeSpecInfo_44, (MR_Integer) 2)));
#line 1751 "unused_args.m"
                                            transform_hlds__unused_args__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__TypeSpecInfo_44, (MR_Integer) 3)));
#line 9138 "transform_hlds.unused_args.c"
                                            transform_hlds__unused_args__TypeCtorInfo_74_74 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1752 "unused_args.m"
                                            {
#line 1752 "unused_args.m"
                                              transform_hlds__unused_args__succeeded = mercury__set__member_2_p_0(transform_hlds__unused_args__TypeCtorInfo_74_74, ((MR_Box) (transform_hlds__unused_args__PredId_32)), transform_hlds__unused_args__TypeSpecForcePreds_46);
                                            }
#line 1752 "unused_args.m"
                                            transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1723 "unused_args.m"
                                            if (transform_hlds__unused_args__succeeded)
#line 1723 "unused_args.m"
                                              {
#line 1755 "unused_args.m"
                                                {
#line 1755 "unused_args.m"
                                                  hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__unused_args__PredInfo_34, &transform_hlds__unused_args__Origin_49);
                                                }
#line 1757 "unused_args.m"
                                                transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__Origin_49)) == (MR_mktag((MR_Integer) 2)));
#line 1757 "unused_args.m"
                                                if (transform_hlds__unused_args__succeeded)
#line 1757 "unused_args.m"
                                                  {
#line 1757 "unused_args.m"
                                                    transform_hlds__unused_args__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Origin_49, (MR_Integer) 0)));
#line 1757 "unused_args.m"
                                                    transform_hlds__unused_args__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Origin_49, (MR_Integer) 1)));
#line 1757 "unused_args.m"
                                                    transform_hlds__unused_args__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Origin_49, (MR_Integer) 2)));
#line 1757 "unused_args.m"
                                                    transform_hlds__unused_args__succeeded = ((((MR_tag((MR_Word) transform_hlds__unused_args__V_64_64)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__V_64_64, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1757 "unused_args.m"
                                                    if (transform_hlds__unused_args__succeeded)
#line 1757 "unused_args.m"
                                                      transform_hlds__unused_args__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__V_64_64, (MR_Integer) 1)));
#line 1757 "unused_args.m"
                                                  }
#line 1756 "unused_args.m"
                                                transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1723 "unused_args.m"
                                                if (transform_hlds__unused_args__succeeded)
#line 1723 "unused_args.m"
                                                  {
#line 1763 "unused_args.m"
                                                    transform_hlds__unused_args__V_65_65 = (MR_Integer) 10;
#line 1763 "unused_args.m"
                                                    {
#line 1763 "unused_args.m"
                                                      transform_hlds__unused_args__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__unused_args__Markers_37, transform_hlds__unused_args__V_65_65);
                                                    }
#line 1763 "unused_args.m"
                                                    transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1723 "unused_args.m"
                                                    if (transform_hlds__unused_args__succeeded)
#line 1723 "unused_args.m"
                                                      {
#line 1764 "unused_args.m"
                                                        transform_hlds__unused_args__V_66_66 = (MR_Integer) 11;
#line 1764 "unused_args.m"
                                                        {
#line 1764 "unused_args.m"
                                                          transform_hlds__unused_args__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__unused_args__Markers_37, transform_hlds__unused_args__V_66_66);
                                                        }
#line 1764 "unused_args.m"
                                                        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1723 "unused_args.m"
                                                      }
#line 1723 "unused_args.m"
                                                  }
#line 1723 "unused_args.m"
                                              }
#line 1723 "unused_args.m"
                                          }
#line 1723 "unused_args.m"
                                      }
#line 1723 "unused_args.m"
                                  }
#line 1723 "unused_args.m"
                              }
#line 1723 "unused_args.m"
                          }
#line 1723 "unused_args.m"
                      }
#line 1723 "unused_args.m"
                  }
#line 1780 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 1772 "unused_args.m"
                  {
#line 1768 "unused_args.m"
#line 1768 "unused_args.m"
                    switch (transform_hlds__unused_args__DoPragma_4) {
#line 1768 "unused_args.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1768 "unused_args.m"
                      case (MR_Integer) 0:
#line 1767 "unused_args.m"
                        transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_67_67 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0_9;
#line 1768 "unused_args.m"
                        break;
#line 1768 "unused_args.m"
                      case (MR_Integer) 1:
#line 1914 "unused_args.m"
                        {
#line 1901 "unused_args.m"
                          MR_Integer transform_hlds__unused_args__V_81_81;
#line 1901 "unused_args.m"
                          MR_Word transform_hlds__unused_args__V_82_82;

#line 1897 "unused_args.m"
                          {
#line 1897 "unused_args.m"
                            transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(transform_hlds__unused_args__PredInfo_34);
                          }
#line 1898 "unused_args.m"
                          if (!(transform_hlds__unused_args__succeeded))
#line 1898 "unused_args.m"
                            {
#line 1898 "unused_args.m"
                              {
#line 1898 "unused_args.m"
                                transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_opt_exported_1_p_0(transform_hlds__unused_args__PredInfo_34);
                              }
#line 1898 "unused_args.m"
                              if (!(transform_hlds__unused_args__succeeded))
#line 1899 "unused_args.m"
                                {
#line 1899 "unused_args.m"
                                  transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_exported_to_submodules_1_p_0(transform_hlds__unused_args__PredInfo_34);
                                }
#line 1898 "unused_args.m"
                            }
#line 1900 "unused_args.m"
                          if (transform_hlds__unused_args__succeeded)
#line 1900 "unused_args.m"
                            {
#line 1901 "unused_args.m"
                              transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__UnusedArgs_31)) == (MR_mktag((MR_Integer) 1)));
#line 1901 "unused_args.m"
                              if (transform_hlds__unused_args__succeeded)
#line 1901 "unused_args.m"
                                {
#line 1901 "unused_args.m"
                                  transform_hlds__unused_args__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__UnusedArgs_31, (MR_Integer) 0)));
#line 1901 "unused_args.m"
                                  transform_hlds__unused_args__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__UnusedArgs_31, (MR_Integer) 1)));
#line 1901 "unused_args.m"
                                }
#line 1900 "unused_args.m"
                            }
#line 1914 "unused_args.m"
                          if (transform_hlds__unused_args__succeeded)
#line 1903 "unused_args.m"
                            {
#line 1903 "unused_args.m"
                              MR_Word transform_hlds__unused_args__ModuleName_83;
#line 1903 "unused_args.m"
                              MR_String transform_hlds__unused_args__PredName_84;
#line 1903 "unused_args.m"
                              MR_Integer transform_hlds__unused_args__PredArity_85;
#line 1903 "unused_args.m"
                              MR_Word transform_hlds__unused_args__PredOrFunc_86;
#line 1903 "unused_args.m"
                              MR_Integer transform_hlds__unused_args__ModeNum_87;
#line 1903 "unused_args.m"
                              MR_Word transform_hlds__unused_args__PredSymName_88;
#line 1903 "unused_args.m"
                              MR_Word transform_hlds__unused_args__PredNameArityPFMn_89;
#line 1903 "unused_args.m"
                              MR_Word transform_hlds__unused_args__UnusedArgInfo_90;

#line 1903 "unused_args.m"
                              {
#line 1903 "unused_args.m"
                                transform_hlds__unused_args__ModuleName_83 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__unused_args__PredInfo_34);
                              }
#line 1904 "unused_args.m"
                              {
#line 1904 "unused_args.m"
                                transform_hlds__unused_args__PredName_84 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__unused_args__PredInfo_34);
                              }
#line 1905 "unused_args.m"
                              {
#line 1905 "unused_args.m"
                                transform_hlds__unused_args__PredArity_85 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__unused_args__PredInfo_34);
                              }
#line 1906 "unused_args.m"
                              {
#line 1906 "unused_args.m"
                                transform_hlds__unused_args__PredOrFunc_86 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__unused_args__PredInfo_34);
                              }
#line 1907 "unused_args.m"
                              {
#line 1907 "unused_args.m"
                                hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__unused_args__ProcId_33, &transform_hlds__unused_args__ModeNum_87);
                              }
#line 1908 "unused_args.m"
                              {
#line 1908 "unused_args.m"
                                transform_hlds__unused_args__PredSymName_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1908 "unused_args.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__PredSymName_88, 0) = ((MR_Box) (transform_hlds__unused_args__ModuleName_83));
#line 1908 "unused_args.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__PredSymName_88, 1) = ((MR_Box) (transform_hlds__unused_args__PredName_84));
#line 1908 "unused_args.m"
                              }
#line 1909 "unused_args.m"
                              {
#line 1909 "unused_args.m"
                                transform_hlds__unused_args__PredNameArityPFMn_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1909 "unused_args.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredNameArityPFMn_89, 0) = ((MR_Box) (transform_hlds__unused_args__PredSymName_88));
#line 1909 "unused_args.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredNameArityPFMn_89, 1) = ((MR_Box) (transform_hlds__unused_args__PredArity_85));
#line 1909 "unused_args.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredNameArityPFMn_89, 2) = ((MR_Box) (transform_hlds__unused_args__PredOrFunc_86));
#line 1909 "unused_args.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredNameArityPFMn_89, 3) = ((MR_Box) (transform_hlds__unused_args__ModeNum_87));
#line 1909 "unused_args.m"
                              }
#line 1911 "unused_args.m"
                              {
#line 1911 "unused_args.m"
                                transform_hlds__unused_args__UnusedArgInfo_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1911 "unused_args.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__unused_args__UnusedArgInfo_90, 0) = ((MR_Box) (transform_hlds__unused_args__PredNameArityPFMn_89));
#line 1911 "unused_args.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__unused_args__UnusedArgInfo_90, 1) = ((MR_Box) (transform_hlds__unused_args__UnusedArgs_31));
#line 1911 "unused_args.m"
                              }
#line 1913 "unused_args.m"
                              {
#line 1913 "unused_args.m"
                                mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0, ((MR_Box) (transform_hlds__unused_args__UnusedArgInfo_90)), transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0_9, &transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_67_67);
                              }
#line 1903 "unused_args.m"
                            }
#line 1914 "unused_args.m"
                          else
#line 1914 "unused_args.m"
                            transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_67_67 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0_9;
#line 1914 "unused_args.m"
                        }
#line 1768 "unused_args.m"
                        break;
#line 1768 "unused_args.m"
                    }
#line 1775 "unused_args.m"
#line 1775 "unused_args.m"
                    switch (transform_hlds__unused_args__DoWarn_3) {
#line 1775 "unused_args.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1775 "unused_args.m"
                      case (MR_Integer) 0:
#line 1774 "unused_args.m"
                        {
#line 1774 "unused_args.m"
                          transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_68_68 = transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_6;
#line 1774 "unused_args.m"
                          transform_hlds__unused_args__STATE_VARIABLE_Specs_69_69 = transform_hlds__unused_args__STATE_VARIABLE_Specs_0_7;
#line 1774 "unused_args.m"
                        }
#line 1775 "unused_args.m"
                        break;
#line 1775 "unused_args.m"
                      case (MR_Integer) 1:
#line 1777 "unused_args.m"
                        {
#line 1777 "unused_args.m"
                          transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_103_97_116_104_101_114_95_119_97_114_110_105_110_103_95_95_91_49_93_95_48_9_p_0(transform_hlds__unused_args__PredInfo_34, transform_hlds__unused_args__PredId_32, transform_hlds__unused_args__ProcId_33, transform_hlds__unused_args__UnusedArgs_31, transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_6, &transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_68_68, transform_hlds__unused_args__STATE_VARIABLE_Specs_0_7, &transform_hlds__unused_args__STATE_VARIABLE_Specs_69_69);
                        }
#line 1775 "unused_args.m"
                        break;
#line 1775 "unused_args.m"
                    }
#line 1772 "unused_args.m"
                  }
#line 1780 "unused_args.m"
                else
#line 1781 "unused_args.m"
                  {
#line 1781 "unused_args.m"
                    transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_67_67 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0_9;
#line 1781 "unused_args.m"
                    transform_hlds__unused_args__STATE_VARIABLE_Specs_69_69 = transform_hlds__unused_args__STATE_VARIABLE_Specs_0_7;
#line 1781 "unused_args.m"
                    transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_68_68 = transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_6;
#line 1781 "unused_args.m"
                  }
#line 1720 "unused_args.m"
              }
#line 1783 "unused_args.m"
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
#line 1786 "unused_args.m"
            /* direct tailcall eliminated */
#line 1786 "unused_args.m"
            {
#line 1786 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__5__tmp_copy_5 = transform_hlds__unused_args__PredProcIds_27;
#line 1786 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0__tmp_copy_6 = transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_68_68;
#line 1786 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_Specs_0__tmp_copy_7 = transform_hlds__unused_args__STATE_VARIABLE_Specs_69_69;
#line 1786 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0__tmp_copy_9 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_67_67;

#line 1786 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0_9 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0__tmp_copy_9;
#line 1786 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Specs_0_7 = transform_hlds__unused_args__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 1786 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_6 = transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0__tmp_copy_6;
#line 1786 "unused_args.m"
              transform_hlds__unused_args__HeadVar__5_5 = transform_hlds__unused_args__HeadVar__5__tmp_copy_5;
#line 1786 "unused_args.m"
            }
#line 1786 "unused_args.m"
            continue;
#line 1718 "unused_args.m"
          }
#line 1714 "unused_args.m"
      }
#line 1714 "unused_args.m"
      break;
#line 1714 "unused_args.m"
    }
#line 1708 "unused_args.m"
}

#line 1655 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__check_deconstruct_args_6_p_0(
#line 1655 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_7,
#line 1655 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedVars_8,
#line 1655 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_9,
#line 1655 "unused_args.m"
  MR_Word transform_hlds__unused_args__Modes_10,
#line 1655 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_SomeUsed_0_25,
#line 1655 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_12)
#line 1655 "unused_args.m"
{
#line 1661 "unused_args.m"
  while (MR_TRUE)
#line 1661 "unused_args.m"
    {
#line 1661 "unused_args.m"
      /* tailcall optimized into a loop */
#line 1661 "unused_args.m"
      {
#line 1661 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 1661 "unused_args.m"
        if ((transform_hlds__unused_args__Args_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1661 "unused_args.m"
          if ((transform_hlds__unused_args__Modes_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1661 "unused_args.m"
            {
#line 1663 "unused_args.m"
              transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__STATE_VARIABLE_SomeUsed_0_25 == (MR_Integer) 1);
#line 1661 "unused_args.m"
              if (transform_hlds__unused_args__succeeded)
#line 1661 "unused_args.m"
                {
#line 1664 "unused_args.m"
                  *transform_hlds__unused_args__Changed_12 = (MR_Integer) 0;
#line 1664 "unused_args.m"
                  transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1661 "unused_args.m"
                }
#line 1661 "unused_args.m"
            }
#line 1661 "unused_args.m"
          else
#line 1666 "unused_args.m"
            {
#line 1668 "unused_args.m"
              {
#line 1668 "unused_args.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.check_deconstruct_args\'/6", (MR_String) "mismatched lists");
              }
#line 1666 "unused_args.m"
              transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1666 "unused_args.m"
            }
#line 1661 "unused_args.m"
        else
#line 1661 "unused_args.m"
          {
#line 1661 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Args_9, (MR_Integer) 1)));
#line 1661 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Args_9, (MR_Integer) 0)));

#line 1661 "unused_args.m"
            if ((transform_hlds__unused_args__Modes_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1670 "unused_args.m"
              {
#line 1672 "unused_args.m"
                {
#line 1672 "unused_args.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.check_deconstruct_args\'/6", (MR_String) "mismatched lists");
                }
#line 1670 "unused_args.m"
                transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1670 "unused_args.m"
              }
#line 1661 "unused_args.m"
            else
#line 1674 "unused_args.m"
              {
#line 1674 "unused_args.m"
                MR_Word transform_hlds__unused_args__ArgMode_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Modes_10, (MR_Integer) 0)));
#line 1674 "unused_args.m"
                MR_Word transform_hlds__unused_args__ArgModes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Modes_10, (MR_Integer) 1)));
#line 1677 "unused_args.m"
                MR_Word transform_hlds__unused_args__TypeInfo_44_44;
#line 1677 "unused_args.m"
                MR_Word transform_hlds__unused_args__Inst1_21;
#line 1677 "unused_args.m"
                MR_Word transform_hlds__unused_args__Inst2_22;
#line 1677 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__ArgMode_19, (MR_Integer) 0)));
#line 1677 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_27_27;
#line 1677 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__ArgMode_19, (MR_Integer) 1)));

#line 1677 "unused_args.m"
                transform_hlds__unused_args__Inst1_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_26_26, (MR_Integer) 0)));
#line 1677 "unused_args.m"
                transform_hlds__unused_args__Inst2_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_26_26, (MR_Integer) 1)));
#line 1678 "unused_args.m"
                {
#line 1678 "unused_args.m"
                  transform_hlds__unused_args__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1678 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_27_27, 0) = ((MR_Box) (transform_hlds__unused_args__Inst1_21));
#line 1678 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_27_27, 1) = ((MR_Box) (transform_hlds__unused_args__Inst2_22));
#line 1678 "unused_args.m"
                }
#line 1678 "unused_args.m"
                {
#line 1678 "unused_args.m"
                  transform_hlds__unused_args__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(transform_hlds__unused_args__ModuleInfo_7, transform_hlds__unused_args__V_27_27);
                }
#line 1677 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 1677 "unused_args.m"
                  {
#line 9605 "transform_hlds.unused_args.c"
                    transform_hlds__unused_args__TypeInfo_44_44 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 1679 "unused_args.m"
                    {
#line 1679 "unused_args.m"
                      transform_hlds__unused_args__succeeded = mercury__list__member_2_p_0(transform_hlds__unused_args__TypeInfo_44_44, ((MR_Box) (transform_hlds__unused_args__V_46_46)), transform_hlds__unused_args__UnusedVars_8);
                    }
#line 1677 "unused_args.m"
                  }
#line 1684 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 1682 "unused_args.m"
                  {
#line 1681 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_24_24;

#line 1681 "unused_args.m"
                    {
#line 1681 "unused_args.m"
                      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__check_deconstruct_args_6_p_0(transform_hlds__unused_args__ModuleInfo_7, transform_hlds__unused_args__UnusedVars_8, transform_hlds__unused_args__V_45_45, transform_hlds__unused_args__ArgModes_20, transform_hlds__unused_args__STATE_VARIABLE_SomeUsed_0_25, &transform_hlds__unused_args__V_24_24);
                    }
#line 1682 "unused_args.m"
                    if (transform_hlds__unused_args__succeeded)
#line 1682 "unused_args.m"
                      {
#line 1683 "unused_args.m"
                        *transform_hlds__unused_args__Changed_12 = (MR_Integer) 1;
#line 1683 "unused_args.m"
                        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1682 "unused_args.m"
                      }
#line 1682 "unused_args.m"
                  }
#line 1684 "unused_args.m"
                else
#line 1685 "unused_args.m"
                  {
#line 1686 "unused_args.m"
                    /* direct tailcall eliminated */
#line 1686 "unused_args.m"
                    {
#line 1686 "unused_args.m"
                      MR_Word transform_hlds__unused_args__Args__tmp_copy_9 = transform_hlds__unused_args__V_45_45;
#line 1686 "unused_args.m"
                      MR_Word transform_hlds__unused_args__Modes__tmp_copy_10 = transform_hlds__unused_args__ArgModes_20;

#line 1686 "unused_args.m"
                      transform_hlds__unused_args__STATE_VARIABLE_SomeUsed_0_25 = (MR_Integer) 1;
#line 1686 "unused_args.m"
                      transform_hlds__unused_args__Modes_10 = transform_hlds__unused_args__Modes__tmp_copy_10;
#line 1686 "unused_args.m"
                      transform_hlds__unused_args__Args_9 = transform_hlds__unused_args__Args__tmp_copy_9;
#line 1686 "unused_args.m"
                    }
#line 1686 "unused_args.m"
                    continue;
#line 1685 "unused_args.m"
                  }
#line 1674 "unused_args.m"
              }
#line 1661 "unused_args.m"
          }
#line 1661 "unused_args.m"
        return transform_hlds__unused_args__succeeded;
#line 1661 "unused_args.m"
      }
#line 1661 "unused_args.m"
      break;
#line 1661 "unused_args.m"
    }
#line 1655 "unused_args.m"
}

#line 1612 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__need_unify_4_p_0(
#line 1612 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 1612 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedVars_6,
#line 1612 "unused_args.m"
  MR_Word transform_hlds__unused_args__Unify_7,
#line 1612 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_8)
#line 1612 "unused_args.m"
{
#line 1617 "unused_args.m"
  {
#line 1617 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1617 "unused_args.m"
#line 1617 "unused_args.m"
    switch (MR_tag((MR_Word) transform_hlds__unused_args__Unify_7)) {
#line 1617 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1617 "unused_args.m"
      case (MR_Integer) 0:
#line 1628 "unused_args.m"
        {
#line 1628 "unused_args.m"
          MR_Word transform_hlds__unused_args__LVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_7, (MR_Integer) 0)));
#line 1628 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_7, (MR_Integer) 1)));
#line 1628 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_7, (MR_Integer) 2)));
#line 1628 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_7, (MR_Integer) 3)));
#line 1628 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_7, (MR_Integer) 4)));
#line 1628 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_7, (MR_Integer) 5)));
#line 1628 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_7, (MR_Integer) 6)));

#line 1629 "unused_args.m"
          {
#line 1629 "unused_args.m"
            transform_hlds__unused_args__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], ((MR_Box) (transform_hlds__unused_args__LVar_13)), transform_hlds__unused_args__UnusedVars_6);
          }
#line 1629 "unused_args.m"
          transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1628 "unused_args.m"
          if (transform_hlds__unused_args__succeeded)
#line 1628 "unused_args.m"
            {
#line 1630 "unused_args.m"
              *transform_hlds__unused_args__Changed_8 = (MR_Integer) 0;
#line 1630 "unused_args.m"
              transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1628 "unused_args.m"
            }
#line 1628 "unused_args.m"
        }
#line 1617 "unused_args.m"
        break;
#line 1617 "unused_args.m"
      case (MR_Integer) 1:
#line 1632 "unused_args.m"
        {
#line 1632 "unused_args.m"
          MR_Word transform_hlds__unused_args__ArgVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_7, (MR_Integer) 2)));
#line 1632 "unused_args.m"
          MR_Word transform_hlds__unused_args__ArgModes_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_7, (MR_Integer) 3)));
#line 1632 "unused_args.m"
          MR_Word transform_hlds__unused_args__CanFail_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_7, (MR_Integer) 4)));
#line 1632 "unused_args.m"
          MR_Word transform_hlds__unused_args__LVar_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_7, (MR_Integer) 0)));
#line 1632 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_7, (MR_Integer) 1)));
#line 1632 "unused_args.m"
          MR_Word transform_hlds__unused_args___CanCGC_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_7, (MR_Integer) 5)));

#line 1633 "unused_args.m"
          {
#line 1633 "unused_args.m"
            transform_hlds__unused_args__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], ((MR_Box) (transform_hlds__unused_args__LVar_32)), transform_hlds__unused_args__UnusedVars_6);
          }
#line 1633 "unused_args.m"
          transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1632 "unused_args.m"
          if (transform_hlds__unused_args__succeeded)
#line 1640 "unused_args.m"
#line 1640 "unused_args.m"
            switch (transform_hlds__unused_args__CanFail_23) {
#line 1640 "unused_args.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1640 "unused_args.m"
              case (MR_Integer) 0:
#line 1642 "unused_args.m"
                {
#line 1642 "unused_args.m"
                  *transform_hlds__unused_args__Changed_8 = (MR_Integer) 0;
#line 1642 "unused_args.m"
                  transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1642 "unused_args.m"
                }
#line 1640 "unused_args.m"
                break;
#line 1640 "unused_args.m"
              case (MR_Integer) 1:
#line 1637 "unused_args.m"
                {
#line 1638 "unused_args.m"
                  {
#line 1638 "unused_args.m"
                    return transform_hlds__unused_args__succeeded = transform_hlds__unused_args__check_deconstruct_args_6_p_0(transform_hlds__unused_args__ModuleInfo_5, transform_hlds__unused_args__UnusedVars_6, transform_hlds__unused_args__ArgVars_21, transform_hlds__unused_args__ArgModes_22, (MR_Integer) 0, transform_hlds__unused_args__Changed_8);
                  }
#line 1637 "unused_args.m"
                }
#line 1640 "unused_args.m"
                break;
#line 1640 "unused_args.m"
            }
#line 1632 "unused_args.m"
        }
#line 1617 "unused_args.m"
        break;
#line 1617 "unused_args.m"
      case (MR_Integer) 2:
#line 1623 "unused_args.m"
        {
#line 1623 "unused_args.m"
          MR_Word transform_hlds__unused_args__Target_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Unify_7, (MR_Integer) 0)));
#line 1623 "unused_args.m"
          MR_Word transform_hlds__unused_args___Source_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Unify_7, (MR_Integer) 1)));

#line 1624 "unused_args.m"
          {
#line 1624 "unused_args.m"
            transform_hlds__unused_args__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], ((MR_Box) (transform_hlds__unused_args__Target_11)), transform_hlds__unused_args__UnusedVars_6);
          }
#line 1624 "unused_args.m"
          transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1623 "unused_args.m"
          if (transform_hlds__unused_args__succeeded)
#line 1623 "unused_args.m"
            {
#line 1625 "unused_args.m"
              *transform_hlds__unused_args__Changed_8 = (MR_Integer) 0;
#line 1625 "unused_args.m"
              transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1623 "unused_args.m"
            }
#line 1623 "unused_args.m"
        }
#line 1617 "unused_args.m"
        break;
#line 1617 "unused_args.m"
      case (MR_Integer) 3:
#line 1617 "unused_args.m"
#line 1617 "unused_args.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Unify_7, (MR_Integer) 0)))) {
#line 1617 "unused_args.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1617 "unused_args.m"
          case (MR_Integer) 0:
#line 1619 "unused_args.m"
            {
#line 1619 "unused_args.m"
              *transform_hlds__unused_args__Changed_8 = (MR_Integer) 0;
#line 1619 "unused_args.m"
              transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1619 "unused_args.m"
            }
#line 1617 "unused_args.m"
            break;
#line 1617 "unused_args.m"
          case (MR_Integer) 1:
#line 1646 "unused_args.m"
            {
#line 1647 "unused_args.m"
              {
#line 1647 "unused_args.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.need_unify\'/4", (MR_String) "complicated unify");
              }
#line 1646 "unused_args.m"
              transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1646 "unused_args.m"
            }
#line 1617 "unused_args.m"
            break;
#line 1617 "unused_args.m"
        }
#line 1617 "unused_args.m"
        break;
#line 1617 "unused_args.m"
    }
#line 1617 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 1617 "unused_args.m"
  }
#line 1612 "unused_args.m"
}

#line 1594 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_cases_6_p_0(
#line 1594 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1594 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2,
#line 1594 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_3,
#line 1594 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_4,
#line 1594 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5,
#line 1594 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_6)
#line 1594 "unused_args.m"
{
#line 1597 "unused_args.m"
  {
#line 1597 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1597 "unused_args.m"
    if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1597 "unused_args.m"
      {
#line 1597 "unused_args.m"
        *transform_hlds__unused_args__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1597 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Changed_6 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5;
#line 1597 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Info_4 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_3;
#line 1597 "unused_args.m"
      }
#line 1597 "unused_args.m"
    else
#line 1598 "unused_args.m"
      {
#line 1598 "unused_args.m"
        MR_Word transform_hlds__unused_args__Case0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 1598 "unused_args.m"
        MR_Word transform_hlds__unused_args__Cases0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 1598 "unused_args.m"
        MR_Word transform_hlds__unused_args__Case_15;
#line 1598 "unused_args.m"
        MR_Word transform_hlds__unused_args__Cases_16;
#line 1598 "unused_args.m"
        MR_Word transform_hlds__unused_args__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Case0_13, (MR_Integer) 0)));
#line 1598 "unused_args.m"
        MR_Word transform_hlds__unused_args__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Case0_13, (MR_Integer) 1)));
#line 1598 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Case0_13, (MR_Integer) 2)));
#line 1598 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal_22;
#line 1598 "unused_args.m"
        MR_Word transform_hlds__unused_args__LocalChanged_23;
#line 1598 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_28_28;
#line 1598 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_29_29;
#line 1598 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal1_38;
#line 1598 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalExpr1_39;
#line 1598 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalInfo1_40;
#line 1598 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalInfo_42;

#line 1408 "unused_args.m"
        {
#line 1408 "unused_args.m"
          transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(transform_hlds__unused_args__Goal0_21, &transform_hlds__unused_args__Goal1_38, transform_hlds__unused_args__STATE_VARIABLE_Info_0_3, &transform_hlds__unused_args__STATE_VARIABLE_Info_28_28, &transform_hlds__unused_args__LocalChanged_23);
        }
#line 1409 "unused_args.m"
        transform_hlds__unused_args__GoalExpr1_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_38, (MR_Integer) 0)));
#line 1409 "unused_args.m"
        transform_hlds__unused_args__GoalInfo1_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_38, (MR_Integer) 1)));
#line 9958 "transform_hlds.unused_args.c"
#line 9959 "transform_hlds.unused_args.c"
        switch (transform_hlds__unused_args__LocalChanged_23) {
#line 9961 "transform_hlds.unused_args.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 9963 "transform_hlds.unused_args.c"
          case (MR_Integer) 0:
#line 9965 "transform_hlds.unused_args.c"
            {
#line 1416 "unused_args.m"
              transform_hlds__unused_args__GoalInfo_42 = transform_hlds__unused_args__GoalInfo1_40;
#line 1606 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_29_29 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5;
#line 9971 "transform_hlds.unused_args.c"
            }
#line 9973 "transform_hlds.unused_args.c"
            break;
#line 9975 "transform_hlds.unused_args.c"
          case (MR_Integer) 1:
#line 9977 "transform_hlds.unused_args.c"
            {
#line 9979 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__UnusedVars_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_28_28, (MR_Integer) 2)));
#line 9981 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__InstMap0_52;
#line 9983 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__InstMap_53;
#line 1412 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_28_28, (MR_Integer) 0)));
#line 1412 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_28_28, (MR_Integer) 1)));
#line 1412 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_28_28, (MR_Integer) 3)));
#line 1412 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_28_28, (MR_Integer) 4)));

#line 1698 "unused_args.m"
              {
#line 1698 "unused_args.m"
                transform_hlds__unused_args__InstMap0_52 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__unused_args__GoalInfo1_40);
              }
#line 1699 "unused_args.m"
              {
#line 1699 "unused_args.m"
                hlds__instmap__instmap_delta_delete_vars_3_p_0(transform_hlds__unused_args__UnusedVars_41, transform_hlds__unused_args__InstMap0_52, &transform_hlds__unused_args__InstMap_53);
              }
#line 1700 "unused_args.m"
              {
#line 1700 "unused_args.m"
                hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__unused_args__InstMap_53, transform_hlds__unused_args__GoalInfo1_40, &transform_hlds__unused_args__GoalInfo_42);
              }
#line 1604 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_29_29 = (MR_Integer) 1;
#line 10011 "transform_hlds.unused_args.c"
            }
#line 10013 "transform_hlds.unused_args.c"
            break;
#line 10015 "transform_hlds.unused_args.c"
        }
#line 1418 "unused_args.m"
        {
#line 1418 "unused_args.m"
          transform_hlds__unused_args__Goal_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1418 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_22, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr1_39));
#line 1418 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_22, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo_42));
#line 1418 "unused_args.m"
        }
#line 1601 "unused_args.m"
        {
#line 1601 "unused_args.m"
          transform_hlds__unused_args__Case_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1601 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Case_15, 0) = ((MR_Box) (transform_hlds__unused_args__MainConsId_19));
#line 1601 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Case_15, 1) = ((MR_Box) (transform_hlds__unused_args__OtherConsIds_20));
#line 1601 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Case_15, 2) = ((MR_Box) (transform_hlds__unused_args__Goal_22));
#line 1601 "unused_args.m"
        }
#line 1608 "unused_args.m"
        {
#line 1608 "unused_args.m"
          transform_hlds__unused_args__unused_args_fixup_cases_6_p_0(transform_hlds__unused_args__Cases0_14, &transform_hlds__unused_args__Cases_16, transform_hlds__unused_args__STATE_VARIABLE_Info_28_28, transform_hlds__unused_args__STATE_VARIABLE_Info_4, transform_hlds__unused_args__STATE_VARIABLE_Changed_29_29, transform_hlds__unused_args__STATE_VARIABLE_Changed_6);
        }
#line 1598 "unused_args.m"
        {
#line 1598 "unused_args.m"
          MR_Word base;
#line 1598 "unused_args.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1598 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__2_2 = base;
#line 1598 "unused_args.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__Case_15));
#line 1598 "unused_args.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__Cases_16));
#line 1598 "unused_args.m"
        }
#line 1598 "unused_args.m"
      }
#line 1597 "unused_args.m"
  }
#line 1594 "unused_args.m"
}

#line 1579 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_disjuncts_6_p_0(
#line 1579 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1579 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2,
#line 1579 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_3,
#line 1579 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_4,
#line 1579 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5,
#line 1579 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_6)
#line 1579 "unused_args.m"
{
#line 1582 "unused_args.m"
  {
#line 1582 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1582 "unused_args.m"
    if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1582 "unused_args.m"
      {
#line 1582 "unused_args.m"
        *transform_hlds__unused_args__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1582 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Changed_6 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5;
#line 1582 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Info_4 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_3;
#line 1582 "unused_args.m"
      }
#line 1582 "unused_args.m"
    else
#line 1584 "unused_args.m"
      {
#line 1584 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 1584 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 1584 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal_15;
#line 1584 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goals_16;
#line 1584 "unused_args.m"
        MR_Word transform_hlds__unused_args__LocalChanged_19;
#line 1584 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_24_24;
#line 1584 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_25_25;
#line 1584 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal1_34;
#line 1584 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalExpr1_35;
#line 1584 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalInfo1_36;
#line 1584 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalInfo_38;

#line 1408 "unused_args.m"
        {
#line 1408 "unused_args.m"
          transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(transform_hlds__unused_args__Goal0_13, &transform_hlds__unused_args__Goal1_34, transform_hlds__unused_args__STATE_VARIABLE_Info_0_3, &transform_hlds__unused_args__STATE_VARIABLE_Info_24_24, &transform_hlds__unused_args__LocalChanged_19);
        }
#line 1409 "unused_args.m"
        transform_hlds__unused_args__GoalExpr1_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_34, (MR_Integer) 0)));
#line 1409 "unused_args.m"
        transform_hlds__unused_args__GoalInfo1_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_34, (MR_Integer) 1)));
#line 10135 "transform_hlds.unused_args.c"
#line 10136 "transform_hlds.unused_args.c"
        switch (transform_hlds__unused_args__LocalChanged_19) {
#line 10138 "transform_hlds.unused_args.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 10140 "transform_hlds.unused_args.c"
          case (MR_Integer) 0:
#line 10142 "transform_hlds.unused_args.c"
            {
#line 1416 "unused_args.m"
              transform_hlds__unused_args__GoalInfo_38 = transform_hlds__unused_args__GoalInfo1_36;
#line 1590 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_25_25 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5;
#line 10148 "transform_hlds.unused_args.c"
            }
#line 10150 "transform_hlds.unused_args.c"
            break;
#line 10152 "transform_hlds.unused_args.c"
          case (MR_Integer) 1:
#line 10154 "transform_hlds.unused_args.c"
            {
#line 10156 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__UnusedVars_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_24_24, (MR_Integer) 2)));
#line 10158 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__InstMap0_48;
#line 10160 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__InstMap_49;
#line 1412 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_24_24, (MR_Integer) 0)));
#line 1412 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_24_24, (MR_Integer) 1)));
#line 1412 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_24_24, (MR_Integer) 3)));
#line 1412 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_24_24, (MR_Integer) 4)));

#line 1698 "unused_args.m"
              {
#line 1698 "unused_args.m"
                transform_hlds__unused_args__InstMap0_48 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__unused_args__GoalInfo1_36);
              }
#line 1699 "unused_args.m"
              {
#line 1699 "unused_args.m"
                hlds__instmap__instmap_delta_delete_vars_3_p_0(transform_hlds__unused_args__UnusedVars_37, transform_hlds__unused_args__InstMap0_48, &transform_hlds__unused_args__InstMap_49);
              }
#line 1700 "unused_args.m"
              {
#line 1700 "unused_args.m"
                hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__unused_args__InstMap_49, transform_hlds__unused_args__GoalInfo1_36, &transform_hlds__unused_args__GoalInfo_38);
              }
#line 1588 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_25_25 = (MR_Integer) 1;
#line 10188 "transform_hlds.unused_args.c"
            }
#line 10190 "transform_hlds.unused_args.c"
            break;
#line 10192 "transform_hlds.unused_args.c"
        }
#line 1418 "unused_args.m"
        {
#line 1418 "unused_args.m"
          transform_hlds__unused_args__Goal_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1418 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_15, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr1_35));
#line 1418 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_15, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo_38));
#line 1418 "unused_args.m"
        }
#line 1592 "unused_args.m"
        {
#line 1592 "unused_args.m"
          transform_hlds__unused_args__unused_args_fixup_disjuncts_6_p_0(transform_hlds__unused_args__Goals0_14, &transform_hlds__unused_args__Goals_16, transform_hlds__unused_args__STATE_VARIABLE_Info_24_24, transform_hlds__unused_args__STATE_VARIABLE_Info_4, transform_hlds__unused_args__STATE_VARIABLE_Changed_25_25, transform_hlds__unused_args__STATE_VARIABLE_Changed_6);
        }
#line 1583 "unused_args.m"
        {
#line 1583 "unused_args.m"
          MR_Word base;
#line 1583 "unused_args.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1583 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__2_2 = base;
#line 1583 "unused_args.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__Goal_15));
#line 1583 "unused_args.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__Goals_16));
#line 1583 "unused_args.m"
        }
#line 1584 "unused_args.m"
      }
#line 1582 "unused_args.m"
  }
#line 1579 "unused_args.m"
}

#line 1556 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_conjuncts_6_p_0(
#line 1556 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1556 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2,
#line 1556 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_3,
#line 1556 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_4,
#line 1556 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5,
#line 1556 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_6)
#line 1556 "unused_args.m"
{
#line 1559 "unused_args.m"
  {
#line 1559 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1559 "unused_args.m"
    if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1559 "unused_args.m"
      {
#line 1559 "unused_args.m"
        *transform_hlds__unused_args__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1559 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Changed_6 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5;
#line 1559 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Info_4 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_3;
#line 1559 "unused_args.m"
      }
#line 1559 "unused_args.m"
    else
#line 1560 "unused_args.m"
      {
#line 1560 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 1560 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 1560 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal_18;
#line 1560 "unused_args.m"
        MR_Word transform_hlds__unused_args__LocalChanged_19;
#line 1560 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goals1_21;
#line 1560 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_26_26;
#line 1560 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_27_27;
#line 1560 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal1_40;
#line 1560 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalExpr1_41;
#line 1560 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalInfo1_42;
#line 1560 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalInfo_44;
#line 1569 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_28_28;
#line 1569 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_32_32;
#line 1569 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_20_20;

#line 1408 "unused_args.m"
        {
#line 1408 "unused_args.m"
          transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(transform_hlds__unused_args__Goal0_13, &transform_hlds__unused_args__Goal1_40, transform_hlds__unused_args__STATE_VARIABLE_Info_0_3, &transform_hlds__unused_args__STATE_VARIABLE_Info_26_26, &transform_hlds__unused_args__LocalChanged_19);
        }
#line 1409 "unused_args.m"
        transform_hlds__unused_args__GoalExpr1_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_40, (MR_Integer) 0)));
#line 1409 "unused_args.m"
        transform_hlds__unused_args__GoalInfo1_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_40, (MR_Integer) 1)));
#line 10306 "transform_hlds.unused_args.c"
#line 10307 "transform_hlds.unused_args.c"
        switch (transform_hlds__unused_args__LocalChanged_19) {
#line 10309 "transform_hlds.unused_args.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 10311 "transform_hlds.unused_args.c"
          case (MR_Integer) 0:
#line 10313 "transform_hlds.unused_args.c"
            {
#line 1416 "unused_args.m"
              transform_hlds__unused_args__GoalInfo_44 = transform_hlds__unused_args__GoalInfo1_42;
#line 1566 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_27_27 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5;
#line 10319 "transform_hlds.unused_args.c"
            }
#line 10321 "transform_hlds.unused_args.c"
            break;
#line 10323 "transform_hlds.unused_args.c"
          case (MR_Integer) 1:
#line 10325 "transform_hlds.unused_args.c"
            {
#line 10327 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__UnusedVars_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_26_26, (MR_Integer) 2)));
#line 10329 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__InstMap0_54;
#line 10331 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__InstMap_55;
#line 1412 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_26_26, (MR_Integer) 0)));
#line 1412 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_26_26, (MR_Integer) 1)));
#line 1412 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_26_26, (MR_Integer) 3)));
#line 1412 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_26_26, (MR_Integer) 4)));

#line 1698 "unused_args.m"
              {
#line 1698 "unused_args.m"
                transform_hlds__unused_args__InstMap0_54 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__unused_args__GoalInfo1_42);
              }
#line 1699 "unused_args.m"
              {
#line 1699 "unused_args.m"
                hlds__instmap__instmap_delta_delete_vars_3_p_0(transform_hlds__unused_args__UnusedVars_43, transform_hlds__unused_args__InstMap0_54, &transform_hlds__unused_args__InstMap_55);
              }
#line 1700 "unused_args.m"
              {
#line 1700 "unused_args.m"
                hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__unused_args__InstMap_55, transform_hlds__unused_args__GoalInfo1_42, &transform_hlds__unused_args__GoalInfo_44);
              }
#line 1564 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_27_27 = (MR_Integer) 1;
#line 10359 "transform_hlds.unused_args.c"
            }
#line 10361 "transform_hlds.unused_args.c"
            break;
#line 10363 "transform_hlds.unused_args.c"
        }
#line 1418 "unused_args.m"
        {
#line 1418 "unused_args.m"
          transform_hlds__unused_args__Goal_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1418 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_18, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr1_41));
#line 1418 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_18, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo_44));
#line 1418 "unused_args.m"
        }
#line 1574 "unused_args.m"
        {
#line 1574 "unused_args.m"
          transform_hlds__unused_args__unused_args_fixup_conjuncts_6_p_0(transform_hlds__unused_args__Goals0_14, &transform_hlds__unused_args__Goals1_21, transform_hlds__unused_args__STATE_VARIABLE_Info_26_26, transform_hlds__unused_args__STATE_VARIABLE_Info_4, transform_hlds__unused_args__STATE_VARIABLE_Changed_27_27, transform_hlds__unused_args__STATE_VARIABLE_Changed_6);
        }
#line 1569 "unused_args.m"
        transform_hlds__unused_args__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_18, (MR_Integer) 0)));
#line 1569 "unused_args.m"
        transform_hlds__unused_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_18, (MR_Integer) 1)));
#line 1569 "unused_args.m"
        {
#line 1569 "unused_args.m"
          transform_hlds__unused_args__V_32_32 = hlds__make_goal__true_goal_expr_0_f_0();
        }
#line 1569 "unused_args.m"
        {
#line 1569 "unused_args.m"
          transform_hlds__unused_args__succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0(transform_hlds__unused_args__V_28_28, transform_hlds__unused_args__V_32_32);
        }
#line 1571 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1570 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__2_2 = transform_hlds__unused_args__Goals1_21;
#line 1571 "unused_args.m"
        else
#line 1572 "unused_args.m"
          {
#line 1572 "unused_args.m"
            MR_Word base;
#line 1572 "unused_args.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1572 "unused_args.m"
            *transform_hlds__unused_args__HeadVar__2_2 = base;
#line 1572 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__Goal_18));
#line 1572 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__Goals1_21));
#line 1572 "unused_args.m"
          }
#line 1560 "unused_args.m"
      }
#line 1559 "unused_args.m"
  }
#line 1556 "unused_args.m"
}

#line 1524 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__rename_apart_unused_foreign_arg_8_p_0(
#line 1524 "unused_args.m"
  MR_Word transform_hlds__unused_args__Arg0_9,
#line 1524 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Arg_10,
#line 1524 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Subst_0_26,
#line 1524 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Subst_27,
#line 1524 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_28,
#line 1524 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_29,
#line 1524 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_30,
#line 1524 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_31)
#line 1524 "unused_args.m"
{
#line 1528 "unused_args.m"
  {
#line 1528 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1528 "unused_args.m"
    MR_Word transform_hlds__unused_args__OldVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Arg0_9, (MR_Integer) 0)));
#line 1528 "unused_args.m"
    MR_Word transform_hlds__unused_args__MaybeName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Arg0_9, (MR_Integer) 1)));
#line 1528 "unused_args.m"
    MR_Word transform_hlds__unused_args__OrigType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Arg0_9, (MR_Integer) 2)));
#line 1528 "unused_args.m"
    MR_Word transform_hlds__unused_args__BoxPolicy_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Arg0_9, (MR_Integer) 3)));

#line 1533 "unused_args.m"
    if ((transform_hlds__unused_args__MaybeName_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1534 "unused_args.m"
      {
#line 1534 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_57_57;
#line 1534 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarSet0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
#line 1534 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarTypes0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
#line 1534 "unused_args.m"
        MR_Word transform_hlds__unused_args__NewVar_22;
#line 1534 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarSet_23;
#line 1534 "unused_args.m"
        MR_Word transform_hlds__unused_args__Type_24;
#line 1534 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarTypes_25;
#line 1534 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_44_44;
#line 1534 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_45_45;
#line 1534 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_46_46;
#line 1535 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
#line 1535 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
#line 1535 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
#line 1539 "unused_args.m"
        MR_String transform_hlds__unused_args__Name_21;
#line 1544 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_47_47;
#line 1544 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_48_48;

#line 1537 "unused_args.m"
        {
#line 1537 "unused_args.m"
          transform_hlds__unused_args__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__unused_args__VarSet0_19, transform_hlds__unused_args__OldVar_14, &transform_hlds__unused_args__Name_21);
        }
#line 1539 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1538 "unused_args.m"
          {
#line 1538 "unused_args.m"
            {
#line 1538 "unused_args.m"
              mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__unused_args__Name_21, &transform_hlds__unused_args__NewVar_22, transform_hlds__unused_args__VarSet0_19, &transform_hlds__unused_args__VarSet_23);
            }
#line 1538 "unused_args.m"
          }
#line 1539 "unused_args.m"
        else
#line 1540 "unused_args.m"
          {
#line 1540 "unused_args.m"
            {
#line 1540 "unused_args.m"
              mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &transform_hlds__unused_args__NewVar_22, transform_hlds__unused_args__VarSet0_19, &transform_hlds__unused_args__VarSet_23);
            }
#line 1540 "unused_args.m"
          }
#line 1542 "unused_args.m"
        {
#line 1542 "unused_args.m"
          hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__unused_args__VarTypes0_20, transform_hlds__unused_args__OldVar_14, &transform_hlds__unused_args__Type_24);
        }
#line 1543 "unused_args.m"
        {
#line 1543 "unused_args.m"
          hlds__vartypes__add_var_type_4_p_0(transform_hlds__unused_args__NewVar_22, transform_hlds__unused_args__Type_24, transform_hlds__unused_args__VarTypes0_20, &transform_hlds__unused_args__VarTypes_25);
        }
#line 1544 "unused_args.m"
        transform_hlds__unused_args__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
#line 1544 "unused_args.m"
        transform_hlds__unused_args__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
#line 1544 "unused_args.m"
        transform_hlds__unused_args__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
#line 1544 "unused_args.m"
        transform_hlds__unused_args__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
#line 1544 "unused_args.m"
        transform_hlds__unused_args__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
#line 1545 "unused_args.m"
        {
#line 1545 "unused_args.m"
          MR_Word base;
#line 1545 "unused_args.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1545 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_Info_29 = base;
#line 1545 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__V_44_44));
#line 1545 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__V_45_45));
#line 1545 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__unused_args__V_46_46));
#line 1545 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__unused_args__VarSet_23));
#line 1545 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__unused_args__VarTypes_25));
#line 1545 "unused_args.m"
        }
#line 10559 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__TypeInfo_57_57 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 1549 "unused_args.m"
        {
#line 1549 "unused_args.m"
          mercury__map__set_4_p_0(transform_hlds__unused_args__TypeInfo_57_57, transform_hlds__unused_args__TypeInfo_57_57, ((MR_Box) (transform_hlds__unused_args__OldVar_14)), ((MR_Box) (transform_hlds__unused_args__NewVar_22)), transform_hlds__unused_args__STATE_VARIABLE_Subst_0_26, transform_hlds__unused_args__STATE_VARIABLE_Subst_27);
        }
#line 1550 "unused_args.m"
        {
#line 1550 "unused_args.m"
          MR_Word base;
#line 1550 "unused_args.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1550 "unused_args.m"
          *transform_hlds__unused_args__Arg_10 = base;
#line 1550 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__NewVar_22));
#line 1550 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__MaybeName_15));
#line 1550 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__unused_args__OrigType_16));
#line 1550 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__unused_args__BoxPolicy_17));
#line 1550 "unused_args.m"
        }
#line 1551 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Changed_31 = (MR_Integer) 1;
#line 1534 "unused_args.m"
      }
#line 1533 "unused_args.m"
    else
#line 1531 "unused_args.m"
      {
#line 1532 "unused_args.m"
        *transform_hlds__unused_args__Arg_10 = transform_hlds__unused_args__Arg0_9;
#line 1531 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Subst_27 = transform_hlds__unused_args__STATE_VARIABLE_Subst_0_26;
#line 1531 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Info_29 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_28;
#line 1531 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Changed_31 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_30;
#line 1531 "unused_args.m"
      }
#line 1528 "unused_args.m"
  }
#line 1524 "unused_args.m"
}

#line 1512 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0_2(
#line 1512 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1512 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1512 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2,
#line 1512 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_3,
#line 1512 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_4,
#line 1512 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_5,
#line 1512 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_6,
#line 1512 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_7,
#line 1512 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_8)
#line 1512 "unused_args.m"
{
#line 1512 "unused_args.m"
  {
#line 1512 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1512 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv10_Arg_10;
#line 1512 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv9_STATE_VARIABLE_Subst_27;
#line 1512 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv8_STATE_VARIABLE_Info_29;
#line 1512 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv7_STATE_VARIABLE_Changed_31;

#line 1512 "unused_args.m"
    {
#line 1512 "unused_args.m"
      transform_hlds__unused_args__rename_apart_unused_foreign_arg_8_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), &transform_hlds__unused_args__conv10_Arg_10, ((MR_Word) transform_hlds__unused_args__wrapper_arg_3), &transform_hlds__unused_args__conv9_STATE_VARIABLE_Subst_27, ((MR_Word) transform_hlds__unused_args__wrapper_arg_5), &transform_hlds__unused_args__conv8_STATE_VARIABLE_Info_29, ((MR_Word) transform_hlds__unused_args__wrapper_arg_7), &transform_hlds__unused_args__conv7_STATE_VARIABLE_Changed_31);
    }
#line 1512 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv10_Arg_10));
#line 1512 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_4 = ((MR_Box) (transform_hlds__unused_args__conv9_STATE_VARIABLE_Subst_27));
#line 1512 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_6 = ((MR_Box) (transform_hlds__unused_args__conv8_STATE_VARIABLE_Info_29));
#line 1512 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_8 = ((MR_Box) (transform_hlds__unused_args__conv7_STATE_VARIABLE_Changed_31));
#line 1512 "unused_args.m"
  }
#line 1512 "unused_args.m"
}

#line 1510 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0_1(
#line 1510 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1510 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1510 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2,
#line 1510 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_3,
#line 1510 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_4,
#line 1510 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_5,
#line 1510 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_6,
#line 1510 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_7,
#line 1510 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_8)
#line 1510 "unused_args.m"
{
#line 1510 "unused_args.m"
  {
#line 1510 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1510 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv3_Arg_10;
#line 1510 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv2_STATE_VARIABLE_Subst_27;
#line 1510 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv1_STATE_VARIABLE_Info_29;
#line 1510 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_STATE_VARIABLE_Changed_31;

#line 1510 "unused_args.m"
    {
#line 1510 "unused_args.m"
      transform_hlds__unused_args__rename_apart_unused_foreign_arg_8_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), &transform_hlds__unused_args__conv3_Arg_10, ((MR_Word) transform_hlds__unused_args__wrapper_arg_3), &transform_hlds__unused_args__conv2_STATE_VARIABLE_Subst_27, ((MR_Word) transform_hlds__unused_args__wrapper_arg_5), &transform_hlds__unused_args__conv1_STATE_VARIABLE_Info_29, ((MR_Word) transform_hlds__unused_args__wrapper_arg_7), &transform_hlds__unused_args__conv0_STATE_VARIABLE_Changed_31);
    }
#line 1510 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv3_Arg_10));
#line 1510 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_4 = ((MR_Box) (transform_hlds__unused_args__conv2_STATE_VARIABLE_Subst_27));
#line 1510 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_6 = ((MR_Box) (transform_hlds__unused_args__conv1_STATE_VARIABLE_Info_29));
#line 1510 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_8 = ((MR_Box) (transform_hlds__unused_args__conv0_STATE_VARIABLE_Changed_31));
#line 1510 "unused_args.m"
  }
#line 1510 "unused_args.m"
}

#line 1420 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(
#line 1420 "unused_args.m"
  MR_Word transform_hlds__unused_args__Goal0_6,
#line 1420 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Goal_7,
#line 1420 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_76,
#line 1420 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_77,
#line 1420 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_9)
#line 1420 "unused_args.m"
{
#line 1423 "unused_args.m"
  {
#line 1423 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1423 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal0_6, (MR_Integer) 0)));
#line 1423 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal0_6, (MR_Integer) 1)));

#line 1430 "unused_args.m"
#line 1430 "unused_args.m"
    switch (MR_tag((MR_Word) transform_hlds__unused_args__GoalExpr0_10)) {
#line 1430 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1430 "unused_args.m"
      case (MR_Integer) 0:
#line 1436 "unused_args.m"
        {
#line 1436 "unused_args.m"
          MR_Word transform_hlds__unused_args__NegGoal0_16 = (MR_Word) MR_body(((MR_Word) transform_hlds__unused_args__GoalExpr0_10), (MR_Integer) 0);
#line 1436 "unused_args.m"
          MR_Word transform_hlds__unused_args__NegGoal_17;
#line 1436 "unused_args.m"
          MR_Word transform_hlds__unused_args__GoalExpr_107;

#line 1437 "unused_args.m"
          {
#line 1437 "unused_args.m"
            transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(transform_hlds__unused_args__NegGoal0_16, &transform_hlds__unused_args__NegGoal_17, transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, transform_hlds__unused_args__STATE_VARIABLE_Info_77, transform_hlds__unused_args__Changed_9);
          }
#line 1438 "unused_args.m"
          transform_hlds__unused_args__GoalExpr_107 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__unused_args__NegGoal_17);
#line 1439 "unused_args.m"
          {
#line 1439 "unused_args.m"
            MR_Word base;
#line 1439 "unused_args.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1439 "unused_args.m"
            *transform_hlds__unused_args__Goal_7 = base;
#line 1439 "unused_args.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_107));
#line 1439 "unused_args.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1439 "unused_args.m"
          }
#line 1436 "unused_args.m"
        }
#line 1430 "unused_args.m"
        break;
#line 1430 "unused_args.m"
      case (MR_Integer) 1:
#line 1488 "unused_args.m"
        {
#line 1488 "unused_args.m"
          MR_Word transform_hlds__unused_args__Unify_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 3)));
#line 1488 "unused_args.m"
          MR_Word transform_hlds__unused_args__ModuleInfo_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 0)));
#line 1488 "unused_args.m"
          MR_Word transform_hlds__unused_args__GoalExpr_116;
#line 1488 "unused_args.m"
          MR_Word transform_hlds__unused_args__UnusedVars_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 2)));
#line 1488 "unused_args.m"
          MR_Word transform_hlds__unused_args___Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 0)));
#line 1488 "unused_args.m"
          MR_Word transform_hlds__unused_args___RHS_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1488 "unused_args.m"
          MR_Word transform_hlds__unused_args___Mode_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 2)));
#line 1488 "unused_args.m"
          MR_Word transform_hlds__unused_args___Context_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 4)));
#line 1489 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 1)));
#line 1489 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 3)));
#line 1489 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 4)));
#line 1494 "unused_args.m"
          MR_Word transform_hlds__unused_args__ChangedPrime_56;

#line 1491 "unused_args.m"
          {
#line 1491 "unused_args.m"
            transform_hlds__unused_args__succeeded = transform_hlds__unused_args__need_unify_4_p_0(transform_hlds__unused_args__ModuleInfo_55, transform_hlds__unused_args__UnusedVars_117, transform_hlds__unused_args__Unify_53, &transform_hlds__unused_args__ChangedPrime_56);
          }
#line 1494 "unused_args.m"
          if (transform_hlds__unused_args__succeeded)
#line 1492 "unused_args.m"
            {
#line 1492 "unused_args.m"
              transform_hlds__unused_args__GoalExpr_116 = transform_hlds__unused_args__GoalExpr0_10;
#line 1493 "unused_args.m"
              *transform_hlds__unused_args__Changed_9 = transform_hlds__unused_args__ChangedPrime_56;
#line 1492 "unused_args.m"
            }
#line 1494 "unused_args.m"
          else
#line 1495 "unused_args.m"
            {
#line 1495 "unused_args.m"
              {
#line 1495 "unused_args.m"
                transform_hlds__unused_args__GoalExpr_116 = hlds__make_goal__true_goal_expr_0_f_0();
              }
#line 1496 "unused_args.m"
              *transform_hlds__unused_args__Changed_9 = (MR_Integer) 1;
#line 1495 "unused_args.m"
            }
#line 1498 "unused_args.m"
          {
#line 1498 "unused_args.m"
            MR_Word base;
#line 1498 "unused_args.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1498 "unused_args.m"
            *transform_hlds__unused_args__Goal_7 = base;
#line 1498 "unused_args.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_116));
#line 1498 "unused_args.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1498 "unused_args.m"
          }
#line 1488 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_Info_77 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_76;
#line 1488 "unused_args.m"
        }
#line 1430 "unused_args.m"
        break;
#line 1430 "unused_args.m"
      case (MR_Integer) 2:
#line 1474 "unused_args.m"
        {
#line 1474 "unused_args.m"
          MR_Word transform_hlds__unused_args__PredId_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 0)));
#line 1474 "unused_args.m"
          MR_Integer transform_hlds__unused_args__ProcId_38 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1474 "unused_args.m"
          MR_Word transform_hlds__unused_args__ArgVars0_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 2)));
#line 1474 "unused_args.m"
          MR_Word transform_hlds__unused_args__Builtin_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 3)));
#line 1474 "unused_args.m"
          MR_Word transform_hlds__unused_args__UnifyC_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 4)));
#line 1474 "unused_args.m"
          MR_Word transform_hlds__unused_args__ProcCallInfo_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 1)));
#line 1473 "unused_args.m"
          MR_Word transform_hlds__unused_args___Name_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 5)));
#line 1475 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 0)));
#line 1475 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 2)));
#line 1475 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 3)));
#line 1475 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 4)));
#line 1483 "unused_args.m"
          MR_Word transform_hlds__unused_args__CallInfo_44;
#line 1476 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_86_86;
#line 1476 "unused_args.m"
          MR_Box transform_hlds__unused_args__conv14_CallInfo_44;

#line 1476 "unused_args.m"
          {
#line 1476 "unused_args.m"
            transform_hlds__unused_args__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1476 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_86_86, 0) = ((MR_Box) (transform_hlds__unused_args__PredId_37));
#line 1476 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_86_86, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_38));
#line 1476 "unused_args.m"
          }
#line 1476 "unused_args.m"
          {
#line 1476 "unused_args.m"
            transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0, transform_hlds__unused_args__ProcCallInfo_43, ((MR_Box) (transform_hlds__unused_args__V_86_86)), &transform_hlds__unused_args__conv14_CallInfo_44);
          }
#line 1476 "unused_args.m"
          if (transform_hlds__unused_args__succeeded)
#line 1476 "unused_args.m"
            {
#line 1476 "unused_args.m"
              transform_hlds__unused_args__CallInfo_44 = ((MR_Word) transform_hlds__unused_args__conv14_CallInfo_44);
#line 1476 "unused_args.m"
              transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1476 "unused_args.m"
            }
#line 1483 "unused_args.m"
          if (transform_hlds__unused_args__succeeded)
#line 1477 "unused_args.m"
            {
#line 1477 "unused_args.m"
              MR_Word transform_hlds__unused_args__NewPredId_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__CallInfo_44, (MR_Integer) 0)));
#line 1477 "unused_args.m"
              MR_Integer transform_hlds__unused_args__NewProcId_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__CallInfo_44, (MR_Integer) 1)));
#line 1477 "unused_args.m"
              MR_Word transform_hlds__unused_args__NewName_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__CallInfo_44, (MR_Integer) 2)));
#line 1477 "unused_args.m"
              MR_Word transform_hlds__unused_args__UnusedArgs_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__CallInfo_44, (MR_Integer) 3)));
#line 1477 "unused_args.m"
              MR_Word transform_hlds__unused_args__ArgVars_49;
#line 1477 "unused_args.m"
              MR_Word transform_hlds__unused_args__GoalExpr_113;

#line 1478 "unused_args.m"
              *transform_hlds__unused_args__Changed_9 = (MR_Integer) 1;
#line 1479 "unused_args.m"
              {
#line 1479 "unused_args.m"
                transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_48, transform_hlds__unused_args__ArgVars0_39, &transform_hlds__unused_args__ArgVars_49);
              }
#line 1480 "unused_args.m"
              {
#line 1480 "unused_args.m"
                transform_hlds__unused_args__GoalExpr_113 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1480 "unused_args.m"
                MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_113, 0) = ((MR_Box) (transform_hlds__unused_args__NewPredId_45));
#line 1480 "unused_args.m"
                MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_113, 1) = ((MR_Box) (transform_hlds__unused_args__NewProcId_46));
#line 1480 "unused_args.m"
                MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_113, 2) = ((MR_Box) (transform_hlds__unused_args__ArgVars_49));
#line 1480 "unused_args.m"
                MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_113, 3) = ((MR_Box) (transform_hlds__unused_args__Builtin_40));
#line 1480 "unused_args.m"
                MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_113, 4) = ((MR_Box) (transform_hlds__unused_args__UnifyC_41));
#line 1480 "unused_args.m"
                MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_113, 5) = ((MR_Box) (transform_hlds__unused_args__NewName_47));
#line 1480 "unused_args.m"
              }
#line 1482 "unused_args.m"
              {
#line 1482 "unused_args.m"
                MR_Word base;
#line 1482 "unused_args.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1482 "unused_args.m"
                *transform_hlds__unused_args__Goal_7 = base;
#line 1482 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_113));
#line 1482 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1482 "unused_args.m"
              }
#line 1477 "unused_args.m"
            }
#line 1483 "unused_args.m"
          else
#line 1484 "unused_args.m"
            {
#line 1484 "unused_args.m"
              *transform_hlds__unused_args__Changed_9 = (MR_Integer) 0;
#line 1485 "unused_args.m"
              *transform_hlds__unused_args__Goal_7 = transform_hlds__unused_args__Goal0_6;
#line 1484 "unused_args.m"
            }
#line 1474 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_Info_77 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_76;
#line 1474 "unused_args.m"
        }
#line 1430 "unused_args.m"
        break;
#line 1430 "unused_args.m"
      case (MR_Integer) 3:
#line 1430 "unused_args.m"
#line 1430 "unused_args.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 0)))) {
#line 1430 "unused_args.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1430 "unused_args.m"
          case (MR_Integer) 0:
#line 1500 "unused_args.m"
            {
#line 1501 "unused_args.m"
              *transform_hlds__unused_args__Goal_7 = transform_hlds__unused_args__Goal0_6;
#line 1502 "unused_args.m"
              *transform_hlds__unused_args__Changed_9 = (MR_Integer) 0;
#line 1500 "unused_args.m"
              *transform_hlds__unused_args__STATE_VARIABLE_Info_77 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_76;
#line 1500 "unused_args.m"
            }
#line 1430 "unused_args.m"
            break;
#line 1430 "unused_args.m"
          case (MR_Integer) 1:
#line 1505 "unused_args.m"
            {
#line 1505 "unused_args.m"
              MR_Word transform_hlds__unused_args__TypeInfo_141_141 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 1505 "unused_args.m"
              MR_Word transform_hlds__unused_args__TypeCtorInfo_150_150;
#line 1505 "unused_args.m"
              MR_Word transform_hlds__unused_args__TypeInfo_151_151;
#line 1505 "unused_args.m"
              MR_Word transform_hlds__unused_args__TypeCtorInfo_152_152;
#line 1505 "unused_args.m"
              MR_Word transform_hlds__unused_args__TypeCtorInfo_153_153;
#line 1505 "unused_args.m"
              MR_Word transform_hlds__unused_args__Attributes_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1505 "unused_args.m"
              MR_Word transform_hlds__unused_args__Args0_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 4)));
#line 1505 "unused_args.m"
              MR_Word transform_hlds__unused_args__ExtraArgs0_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 5)));
#line 1505 "unused_args.m"
              MR_Word transform_hlds__unused_args__MaybeTraceRuntimeCond_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 6)));
#line 1505 "unused_args.m"
              MR_Word transform_hlds__unused_args__Impl_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 7)));
#line 1505 "unused_args.m"
              MR_Word transform_hlds__unused_args__Subst0_68;
#line 1505 "unused_args.m"
              MR_Word transform_hlds__unused_args__Args_69;
#line 1505 "unused_args.m"
              MR_Word transform_hlds__unused_args__Subst1_70;
#line 1505 "unused_args.m"
              MR_Word transform_hlds__unused_args__ArgsChanged_71;
#line 1505 "unused_args.m"
              MR_Word transform_hlds__unused_args__ExtraArgs_72;
#line 1505 "unused_args.m"
              MR_Word transform_hlds__unused_args__Subst_73;
#line 1505 "unused_args.m"
              MR_Word transform_hlds__unused_args__GoalInfo_74;
#line 1505 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_82_82;
#line 1505 "unused_args.m"
              MR_Word transform_hlds__unused_args__GoalExpr_118;
#line 1505 "unused_args.m"
              MR_Word transform_hlds__unused_args__PredId_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 2)));
#line 1505 "unused_args.m"
              MR_Integer transform_hlds__unused_args__ProcId_120 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 3)));
#line 1510 "unused_args.m"
              MR_Box transform_hlds__unused_args__conv6_Subst1_70;
#line 1510 "unused_args.m"
              MR_Box transform_hlds__unused_args__conv5_STATE_VARIABLE_Info_82_82;
#line 1510 "unused_args.m"
              MR_Box transform_hlds__unused_args__conv4_ArgsChanged_71;
#line 1512 "unused_args.m"
              MR_Box transform_hlds__unused_args__conv13_Subst_73;
#line 1512 "unused_args.m"
              MR_Box transform_hlds__unused_args__conv12_STATE_VARIABLE_Info_77;
#line 1512 "unused_args.m"
              MR_Box transform_hlds__unused_args__conv11_Changed_9;

#line 1509 "unused_args.m"
              {
#line 1509 "unused_args.m"
                mercury__map__init_1_p_0(transform_hlds__unused_args__TypeInfo_141_141, transform_hlds__unused_args__TypeInfo_141_141, &transform_hlds__unused_args__Subst0_68);
              }
#line 11074 "transform_hlds.unused_args.c"
              transform_hlds__unused_args__TypeCtorInfo_150_150 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 11076 "transform_hlds.unused_args.c"
              transform_hlds__unused_args__TypeInfo_151_151 = (MR_Word) &transform_hlds__unused_args_scalar_common_2[5];
#line 11078 "transform_hlds.unused_args.c"
              transform_hlds__unused_args__TypeCtorInfo_152_152 = (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_fixup_info_0;
#line 11080 "transform_hlds.unused_args.c"
              transform_hlds__unused_args__TypeCtorInfo_153_153 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
#line 1510 "unused_args.m"
              {
#line 1510 "unused_args.m"
                mercury__list__map_foldl3_9_p_1(transform_hlds__unused_args__TypeCtorInfo_150_150, transform_hlds__unused_args__TypeCtorInfo_150_150, transform_hlds__unused_args__TypeInfo_151_151, transform_hlds__unused_args__TypeCtorInfo_152_152, transform_hlds__unused_args__TypeCtorInfo_153_153, (MR_Word) &transform_hlds__unused_args_scalar_common_2[12], transform_hlds__unused_args__Args0_63, &transform_hlds__unused_args__Args_69, ((MR_Box) (transform_hlds__unused_args__Subst0_68)), &transform_hlds__unused_args__conv6_Subst1_70, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_Info_0_76)), &transform_hlds__unused_args__conv5_STATE_VARIABLE_Info_82_82, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__unused_args__conv4_ArgsChanged_71);
              }
#line 1510 "unused_args.m"
              transform_hlds__unused_args__Subst1_70 = ((MR_Word) transform_hlds__unused_args__conv6_Subst1_70);
#line 1510 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Info_82_82 = ((MR_Word) transform_hlds__unused_args__conv5_STATE_VARIABLE_Info_82_82);
#line 1510 "unused_args.m"
              transform_hlds__unused_args__ArgsChanged_71 = ((MR_Word) transform_hlds__unused_args__conv4_ArgsChanged_71);
#line 1512 "unused_args.m"
              {
#line 1512 "unused_args.m"
                mercury__list__map_foldl3_9_p_1(transform_hlds__unused_args__TypeCtorInfo_150_150, transform_hlds__unused_args__TypeCtorInfo_150_150, transform_hlds__unused_args__TypeInfo_151_151, transform_hlds__unused_args__TypeCtorInfo_152_152, transform_hlds__unused_args__TypeCtorInfo_153_153, (MR_Word) &transform_hlds__unused_args_scalar_common_2[13], transform_hlds__unused_args__ExtraArgs0_64, &transform_hlds__unused_args__ExtraArgs_72, ((MR_Box) (transform_hlds__unused_args__Subst1_70)), &transform_hlds__unused_args__conv13_Subst_73, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_Info_82_82)), &transform_hlds__unused_args__conv12_STATE_VARIABLE_Info_77, ((MR_Box) (transform_hlds__unused_args__ArgsChanged_71)), &transform_hlds__unused_args__conv11_Changed_9);
              }
#line 1512 "unused_args.m"
              transform_hlds__unused_args__Subst_73 = ((MR_Word) transform_hlds__unused_args__conv13_Subst_73);
#line 1512 "unused_args.m"
              *transform_hlds__unused_args__STATE_VARIABLE_Info_77 = ((MR_Word) transform_hlds__unused_args__conv12_STATE_VARIABLE_Info_77);
#line 1512 "unused_args.m"
              *transform_hlds__unused_args__Changed_9 = ((MR_Word) transform_hlds__unused_args__conv11_Changed_9);
#line 1514 "unused_args.m"
              {
#line 1514 "unused_args.m"
                transform_hlds__unused_args__GoalExpr_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 1514 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1514 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 1) = ((MR_Box) (transform_hlds__unused_args__Attributes_62));
#line 1514 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 2) = ((MR_Box) (transform_hlds__unused_args__PredId_119));
#line 1514 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 3) = ((MR_Box) (transform_hlds__unused_args__ProcId_120));
#line 1514 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 4) = ((MR_Box) (transform_hlds__unused_args__Args_69));
#line 1514 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 5) = ((MR_Box) (transform_hlds__unused_args__ExtraArgs_72));
#line 1514 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 6) = ((MR_Box) (transform_hlds__unused_args__MaybeTraceRuntimeCond_65));
#line 1514 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 7) = ((MR_Box) (transform_hlds__unused_args__Impl_66));
#line 1514 "unused_args.m"
              }
#line 1516 "unused_args.m"
              {
#line 1516 "unused_args.m"
                hlds__hlds_goal__rename_vars_in_goal_info_4_p_0((MR_Integer) 1, transform_hlds__unused_args__Subst_73, transform_hlds__unused_args__GoalInfo0_11, &transform_hlds__unused_args__GoalInfo_74);
              }
#line 1517 "unused_args.m"
              {
#line 1517 "unused_args.m"
                MR_Word base;
#line 1517 "unused_args.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1517 "unused_args.m"
                *transform_hlds__unused_args__Goal_7 = base;
#line 1517 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_118));
#line 1517 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo_74));
#line 1517 "unused_args.m"
              }
#line 1505 "unused_args.m"
            }
#line 1430 "unused_args.m"
            break;
#line 1430 "unused_args.m"
          case (MR_Integer) 2:
#line 1426 "unused_args.m"
            {
#line 1426 "unused_args.m"
              MR_Word transform_hlds__unused_args__ConjType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1426 "unused_args.m"
              MR_Word transform_hlds__unused_args__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 2)));
#line 1426 "unused_args.m"
              MR_Word transform_hlds__unused_args__Goals_14;
#line 1426 "unused_args.m"
              MR_Word transform_hlds__unused_args__GoalExpr_15;

#line 1427 "unused_args.m"
              {
#line 1427 "unused_args.m"
                transform_hlds__unused_args__unused_args_fixup_conjuncts_6_p_0(transform_hlds__unused_args__Goals0_13, &transform_hlds__unused_args__Goals_14, transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, transform_hlds__unused_args__STATE_VARIABLE_Info_77, (MR_Integer) 0, transform_hlds__unused_args__Changed_9);
              }
#line 1428 "unused_args.m"
              {
#line 1428 "unused_args.m"
                transform_hlds__unused_args__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1428 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1428 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__unused_args__ConjType_12));
#line 1428 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__unused_args__Goals_14));
#line 1428 "unused_args.m"
              }
#line 1429 "unused_args.m"
              {
#line 1429 "unused_args.m"
                MR_Word base;
#line 1429 "unused_args.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1429 "unused_args.m"
                *transform_hlds__unused_args__Goal_7 = base;
#line 1429 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_15));
#line 1429 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1429 "unused_args.m"
              }
#line 1426 "unused_args.m"
            }
#line 1430 "unused_args.m"
            break;
#line 1430 "unused_args.m"
          case (MR_Integer) 3:
#line 1431 "unused_args.m"
            {
#line 1431 "unused_args.m"
              MR_Word transform_hlds__unused_args__Goals0_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1431 "unused_args.m"
              MR_Word transform_hlds__unused_args__Goals_105;
#line 1431 "unused_args.m"
              MR_Word transform_hlds__unused_args__GoalExpr_106;

#line 1432 "unused_args.m"
              {
#line 1432 "unused_args.m"
                transform_hlds__unused_args__unused_args_fixup_disjuncts_6_p_0(transform_hlds__unused_args__Goals0_104, &transform_hlds__unused_args__Goals_105, transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, transform_hlds__unused_args__STATE_VARIABLE_Info_77, (MR_Integer) 0, transform_hlds__unused_args__Changed_9);
              }
#line 1433 "unused_args.m"
              {
#line 1433 "unused_args.m"
                transform_hlds__unused_args__GoalExpr_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1433 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1433 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_106, 1) = ((MR_Box) (transform_hlds__unused_args__Goals_105));
#line 1433 "unused_args.m"
              }
#line 1434 "unused_args.m"
              {
#line 1434 "unused_args.m"
                MR_Word base;
#line 1434 "unused_args.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1434 "unused_args.m"
                *transform_hlds__unused_args__Goal_7 = base;
#line 1434 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_106));
#line 1434 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1434 "unused_args.m"
              }
#line 1431 "unused_args.m"
            }
#line 1430 "unused_args.m"
            break;
#line 1430 "unused_args.m"
          case (MR_Integer) 4:
#line 1441 "unused_args.m"
            {
#line 1441 "unused_args.m"
              MR_Word transform_hlds__unused_args__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1441 "unused_args.m"
              MR_Word transform_hlds__unused_args__CanFail_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 2)));
#line 1441 "unused_args.m"
              MR_Word transform_hlds__unused_args__Cases0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 3)));
#line 1441 "unused_args.m"
              MR_Word transform_hlds__unused_args__Cases_21;
#line 1441 "unused_args.m"
              MR_Word transform_hlds__unused_args__GoalExpr_108;

#line 1442 "unused_args.m"
              {
#line 1442 "unused_args.m"
                transform_hlds__unused_args__unused_args_fixup_cases_6_p_0(transform_hlds__unused_args__Cases0_20, &transform_hlds__unused_args__Cases_21, transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, transform_hlds__unused_args__STATE_VARIABLE_Info_77, (MR_Integer) 0, transform_hlds__unused_args__Changed_9);
              }
#line 1443 "unused_args.m"
              {
#line 1443 "unused_args.m"
                transform_hlds__unused_args__GoalExpr_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1443 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1443 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_108, 1) = ((MR_Box) (transform_hlds__unused_args__Var_18));
#line 1443 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_108, 2) = ((MR_Box) (transform_hlds__unused_args__CanFail_19));
#line 1443 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_108, 3) = ((MR_Box) (transform_hlds__unused_args__Cases_21));
#line 1443 "unused_args.m"
              }
#line 1444 "unused_args.m"
              {
#line 1444 "unused_args.m"
                MR_Word base;
#line 1444 "unused_args.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1444 "unused_args.m"
                *transform_hlds__unused_args__Goal_7 = base;
#line 1444 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_108));
#line 1444 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1444 "unused_args.m"
              }
#line 1441 "unused_args.m"
            }
#line 1430 "unused_args.m"
            break;
#line 1430 "unused_args.m"
          case (MR_Integer) 5:
#line 1454 "unused_args.m"
            {
#line 1454 "unused_args.m"
              MR_Word transform_hlds__unused_args__Reason_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1454 "unused_args.m"
              MR_Word transform_hlds__unused_args__SubGoal0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 2)));
#line 1467 "unused_args.m"
              MR_Word transform_hlds__unused_args__TermVar_34;
#line 1456 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_88_88;

#line 1456 "unused_args.m"
              transform_hlds__unused_args__succeeded = ((((MR_tag((MR_Word) transform_hlds__unused_args__Reason_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Reason_32, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1456 "unused_args.m"
              if (transform_hlds__unused_args__succeeded)
#line 1456 "unused_args.m"
                {
#line 1456 "unused_args.m"
                  transform_hlds__unused_args__TermVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Reason_32, (MR_Integer) 1)));
#line 1456 "unused_args.m"
                  transform_hlds__unused_args__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Reason_32, (MR_Integer) 2)));
#line 1456 "unused_args.m"
                  transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_88_88 == (MR_Integer) 1);
#line 1456 "unused_args.m"
                }
#line 1467 "unused_args.m"
              if (transform_hlds__unused_args__succeeded)
#line 1458 "unused_args.m"
                {
#line 1458 "unused_args.m"
                  MR_Word transform_hlds__unused_args__UnusedVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 2)));
#line 1458 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 0)));
#line 1458 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 1)));
#line 1458 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 3)));
#line 1458 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 4)));

#line 1459 "unused_args.m"
                  {
#line 1459 "unused_args.m"
                    transform_hlds__unused_args__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], ((MR_Box) (transform_hlds__unused_args__TermVar_34)), transform_hlds__unused_args__UnusedVars_35);
                  }
#line 1463 "unused_args.m"
                  if (transform_hlds__unused_args__succeeded)
#line 1460 "unused_args.m"
                    {
#line 1460 "unused_args.m"
                      {
#line 1460 "unused_args.m"
                        *transform_hlds__unused_args__Goal_7 = hlds__make_goal__true_goal_0_f_0();
                      }
#line 1462 "unused_args.m"
                      *transform_hlds__unused_args__Changed_9 = (MR_Integer) 0;
#line 1460 "unused_args.m"
                    }
#line 1463 "unused_args.m"
                  else
#line 1464 "unused_args.m"
                    {
#line 1464 "unused_args.m"
                      *transform_hlds__unused_args__Goal_7 = transform_hlds__unused_args__Goal0_6;
#line 1465 "unused_args.m"
                      *transform_hlds__unused_args__Changed_9 = (MR_Integer) 0;
#line 1464 "unused_args.m"
                    }
#line 1458 "unused_args.m"
                  *transform_hlds__unused_args__STATE_VARIABLE_Info_77 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_76;
#line 1458 "unused_args.m"
                }
#line 1467 "unused_args.m"
              else
#line 1468 "unused_args.m"
                {
#line 1468 "unused_args.m"
                  MR_Word transform_hlds__unused_args__SubGoal_36;
#line 1468 "unused_args.m"
                  MR_Word transform_hlds__unused_args__GoalExpr_110;

#line 1468 "unused_args.m"
                  {
#line 1468 "unused_args.m"
                    transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(transform_hlds__unused_args__SubGoal0_33, &transform_hlds__unused_args__SubGoal_36, transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, transform_hlds__unused_args__STATE_VARIABLE_Info_77, transform_hlds__unused_args__Changed_9);
                  }
#line 1469 "unused_args.m"
                  {
#line 1469 "unused_args.m"
                    transform_hlds__unused_args__GoalExpr_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1469 "unused_args.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1469 "unused_args.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_110, 1) = ((MR_Box) (transform_hlds__unused_args__Reason_32));
#line 1469 "unused_args.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_110, 2) = ((MR_Box) (transform_hlds__unused_args__SubGoal_36));
#line 1469 "unused_args.m"
                  }
#line 1470 "unused_args.m"
                  {
#line 1470 "unused_args.m"
                    MR_Word base;
#line 1470 "unused_args.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1470 "unused_args.m"
                    *transform_hlds__unused_args__Goal_7 = base;
#line 1470 "unused_args.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_110));
#line 1470 "unused_args.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1470 "unused_args.m"
                  }
#line 1468 "unused_args.m"
                }
#line 1454 "unused_args.m"
            }
#line 1430 "unused_args.m"
            break;
#line 1430 "unused_args.m"
          case (MR_Integer) 6:
#line 1446 "unused_args.m"
            {
#line 1446 "unused_args.m"
              MR_Word transform_hlds__unused_args__Vars_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1446 "unused_args.m"
              MR_Word transform_hlds__unused_args__Cond0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 2)));
#line 1446 "unused_args.m"
              MR_Word transform_hlds__unused_args__Then0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 3)));
#line 1446 "unused_args.m"
              MR_Word transform_hlds__unused_args__Else0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 4)));
#line 1446 "unused_args.m"
              MR_Word transform_hlds__unused_args__Cond_26;
#line 1446 "unused_args.m"
              MR_Word transform_hlds__unused_args__Changed1_27;
#line 1446 "unused_args.m"
              MR_Word transform_hlds__unused_args__Then_28;
#line 1446 "unused_args.m"
              MR_Word transform_hlds__unused_args__Changed2_29;
#line 1446 "unused_args.m"
              MR_Word transform_hlds__unused_args__Else_30;
#line 1446 "unused_args.m"
              MR_Word transform_hlds__unused_args__Changed3_31;
#line 1446 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_90_90;
#line 1446 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_91_91;
#line 1446 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_93_93;
#line 1446 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_94_94;
#line 1446 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_95_95;
#line 1446 "unused_args.m"
              MR_Word transform_hlds__unused_args__GoalExpr_109;

#line 1447 "unused_args.m"
              {
#line 1447 "unused_args.m"
                transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(transform_hlds__unused_args__Cond0_23, &transform_hlds__unused_args__Cond_26, transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, &transform_hlds__unused_args__STATE_VARIABLE_Info_90_90, &transform_hlds__unused_args__Changed1_27);
              }
#line 1448 "unused_args.m"
              {
#line 1448 "unused_args.m"
                transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(transform_hlds__unused_args__Then0_24, &transform_hlds__unused_args__Then_28, transform_hlds__unused_args__STATE_VARIABLE_Info_90_90, &transform_hlds__unused_args__STATE_VARIABLE_Info_91_91, &transform_hlds__unused_args__Changed2_29);
              }
#line 1449 "unused_args.m"
              {
#line 1449 "unused_args.m"
                transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(transform_hlds__unused_args__Else0_25, &transform_hlds__unused_args__Else_30, transform_hlds__unused_args__STATE_VARIABLE_Info_91_91, transform_hlds__unused_args__STATE_VARIABLE_Info_77, &transform_hlds__unused_args__Changed3_31);
              }
#line 1450 "unused_args.m"
              {
#line 1450 "unused_args.m"
                transform_hlds__unused_args__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1450 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_95_95, 0) = ((MR_Box) (transform_hlds__unused_args__Changed3_31));
#line 1450 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1450 "unused_args.m"
              }
#line 1450 "unused_args.m"
              {
#line 1450 "unused_args.m"
                transform_hlds__unused_args__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1450 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_94_94, 0) = ((MR_Box) (transform_hlds__unused_args__Changed2_29));
#line 1450 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_94_94, 1) = ((MR_Box) (transform_hlds__unused_args__V_95_95));
#line 1450 "unused_args.m"
              }
#line 1450 "unused_args.m"
              {
#line 1450 "unused_args.m"
                transform_hlds__unused_args__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1450 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_93_93, 0) = ((MR_Box) (transform_hlds__unused_args__Changed1_27));
#line 1450 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_93_93, 1) = ((MR_Box) (transform_hlds__unused_args__V_94_94));
#line 1450 "unused_args.m"
              }
#line 1450 "unused_args.m"
              {
#line 1450 "unused_args.m"
                mercury__bool__or_list_2_p_0(transform_hlds__unused_args__V_93_93, transform_hlds__unused_args__Changed_9);
              }
#line 1451 "unused_args.m"
              {
#line 1451 "unused_args.m"
                transform_hlds__unused_args__GoalExpr_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1451 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1451 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_109, 1) = ((MR_Box) (transform_hlds__unused_args__Vars_22));
#line 1451 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_109, 2) = ((MR_Box) (transform_hlds__unused_args__Cond_26));
#line 1451 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_109, 3) = ((MR_Box) (transform_hlds__unused_args__Then_28));
#line 1451 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_109, 4) = ((MR_Box) (transform_hlds__unused_args__Else_30));
#line 1451 "unused_args.m"
              }
#line 1452 "unused_args.m"
              {
#line 1452 "unused_args.m"
                MR_Word base;
#line 1452 "unused_args.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1452 "unused_args.m"
                *transform_hlds__unused_args__Goal_7 = base;
#line 1452 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_109));
#line 1452 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1452 "unused_args.m"
              }
#line 1446 "unused_args.m"
            }
#line 1430 "unused_args.m"
            break;
#line 1430 "unused_args.m"
          case (MR_Integer) 7:
#line 1519 "unused_args.m"
            {
#line 1521 "unused_args.m"
              {
#line 1521 "unused_args.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.unused_args_fixup_goal_expr\'/5", (MR_String) "shorthand");
#line 1521 "unused_args.m"
                return;
              }
#line 1519 "unused_args.m"
            }
#line 1430 "unused_args.m"
            break;
#line 1430 "unused_args.m"
        }
#line 1430 "unused_args.m"
        break;
#line 1430 "unused_args.m"
    }
#line 1423 "unused_args.m"
  }
#line 1420 "unused_args.m"
}

#line 1404 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(
#line 1404 "unused_args.m"
  MR_Word transform_hlds__unused_args__Goal0_6,
#line 1404 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Goal_7,
#line 1404 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_15,
#line 1404 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_16,
#line 1404 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_9)
#line 1404 "unused_args.m"
{
#line 1407 "unused_args.m"
  {
#line 1407 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1407 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal1_10;
#line 1407 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalExpr1_11;
#line 1407 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalInfo1_12;
#line 1407 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalInfo_14;

#line 1408 "unused_args.m"
    {
#line 1408 "unused_args.m"
      transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(transform_hlds__unused_args__Goal0_6, &transform_hlds__unused_args__Goal1_10, transform_hlds__unused_args__STATE_VARIABLE_Info_0_15, transform_hlds__unused_args__STATE_VARIABLE_Info_16, transform_hlds__unused_args__Changed_9);
    }
#line 1409 "unused_args.m"
    transform_hlds__unused_args__GoalExpr1_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_10, (MR_Integer) 0)));
#line 1409 "unused_args.m"
    transform_hlds__unused_args__GoalInfo1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_10, (MR_Integer) 1)));
#line 1414 "unused_args.m"
#line 1414 "unused_args.m"
    switch (*transform_hlds__unused_args__Changed_9) {
#line 1414 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1414 "unused_args.m"
      case (MR_Integer) 0:
#line 1416 "unused_args.m"
        transform_hlds__unused_args__GoalInfo_14 = transform_hlds__unused_args__GoalInfo1_12;
#line 1414 "unused_args.m"
        break;
#line 1414 "unused_args.m"
      case (MR_Integer) 1:
#line 1411 "unused_args.m"
        {
#line 1411 "unused_args.m"
          MR_Word transform_hlds__unused_args__UnusedVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__unused_args__STATE_VARIABLE_Info_16, (MR_Integer) 2)));
#line 1411 "unused_args.m"
          MR_Word transform_hlds__unused_args__InstMap0_26;
#line 1411 "unused_args.m"
          MR_Word transform_hlds__unused_args__InstMap_27;
#line 1412 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__unused_args__STATE_VARIABLE_Info_16, (MR_Integer) 0)));
#line 1412 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__unused_args__STATE_VARIABLE_Info_16, (MR_Integer) 1)));
#line 1412 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__unused_args__STATE_VARIABLE_Info_16, (MR_Integer) 3)));
#line 1412 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__unused_args__STATE_VARIABLE_Info_16, (MR_Integer) 4)));

#line 1698 "unused_args.m"
          {
#line 1698 "unused_args.m"
            transform_hlds__unused_args__InstMap0_26 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__unused_args__GoalInfo1_12);
          }
#line 1699 "unused_args.m"
          {
#line 1699 "unused_args.m"
            hlds__instmap__instmap_delta_delete_vars_3_p_0(transform_hlds__unused_args__UnusedVars_13, transform_hlds__unused_args__InstMap0_26, &transform_hlds__unused_args__InstMap_27);
          }
#line 1700 "unused_args.m"
          {
#line 1700 "unused_args.m"
            hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__unused_args__InstMap_27, transform_hlds__unused_args__GoalInfo1_12, &transform_hlds__unused_args__GoalInfo_14);
          }
#line 1411 "unused_args.m"
        }
#line 1414 "unused_args.m"
        break;
#line 1414 "unused_args.m"
    }
#line 1418 "unused_args.m"
    {
#line 1418 "unused_args.m"
      MR_Word base;
#line 1418 "unused_args.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1418 "unused_args.m"
      *transform_hlds__unused_args__Goal_7 = base;
#line 1418 "unused_args.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr1_11));
#line 1418 "unused_args.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo_14));
#line 1418 "unused_args.m"
    }
#line 1407 "unused_args.m"
  }
#line 1404 "unused_args.m"
}

#line 1330 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__do_unused_args_fixup_proc_5_p_0(
#line 1330 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_6,
#line 1330 "unused_args.m"
  MR_Word transform_hlds__unused_args__OldPredProcId_7,
#line 1330 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcCallInfo_8,
#line 1330 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo0_9,
#line 1330 "unused_args.m"
  MR_Word * transform_hlds__unused_args__ModuleInfo_10)
#line 1330 "unused_args.m"
{
#line 1334 "unused_args.m"
  {
#line 1334 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1334 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredId_12;
#line 1334 "unused_args.m"
    MR_Integer transform_hlds__unused_args__ProcId_13;
#line 1334 "unused_args.m"
    MR_Word transform_hlds__unused_args__UnusedArgs_15;
#line 1334 "unused_args.m"
    MR_Word transform_hlds__unused_args__UsageInfos_16;
#line 1334 "unused_args.m"
    MR_Word transform_hlds__unused_args__UnusedVars_17;
#line 1334 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredInfo0_18;
#line 1334 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes0_20;
#line 1334 "unused_args.m"
    MR_Word transform_hlds__unused_args__Preds0_21;
#line 1334 "unused_args.m"
    MR_Word transform_hlds__unused_args__Procs0_22;
#line 1334 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVars0_23;
#line 1334 "unused_args.m"
    MR_Word transform_hlds__unused_args__ArgModes0_24;
#line 1334 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarSet0_25;
#line 1334 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVars_27;
#line 1334 "unused_args.m"
    MR_Word transform_hlds__unused_args__ArgModes_28;
#line 1334 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcInfo_29;
#line 1334 "unused_args.m"
    MR_Word transform_hlds__unused_args__FixupInfo0_31;
#line 1334 "unused_args.m"
    MR_Word transform_hlds__unused_args__FixupInfo_32;
#line 1334 "unused_args.m"
    MR_Word transform_hlds__unused_args__Changed_33;
#line 1334 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarSet1_37;
#line 1334 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes1_38;
#line 1334 "unused_args.m"
    MR_Word transform_hlds__unused_args__Procs_45;
#line 1334 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredInfo_46;
#line 1334 "unused_args.m"
    MR_Word transform_hlds__unused_args__Preds_47;
#line 1334 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_50_50;
#line 1334 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_Goal_51_51;
#line 1334 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_52_52;
#line 1334 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_53_53;
#line 1334 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_Goal_54_54;
#line 1338 "unused_args.m"
    MR_Word transform_hlds__unused_args__OldProcCallInfo_11;
#line 1336 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv0_OldProcCallInfo_11;
#line 1342 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv1_UsageInfos_16;
#line 1369 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_34_34;
#line 1369 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_35_35;
#line 1369 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_36_36;

#line 1336 "unused_args.m"
    {
#line 1336 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0, transform_hlds__unused_args__ProcCallInfo_8, ((MR_Box) (transform_hlds__unused_args__OldPredProcId_7)), &transform_hlds__unused_args__conv0_OldProcCallInfo_11);
    }
#line 1336 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1336 "unused_args.m"
      {
#line 1336 "unused_args.m"
        transform_hlds__unused_args__OldProcCallInfo_11 = ((MR_Word) transform_hlds__unused_args__conv0_OldProcCallInfo_11);
#line 1336 "unused_args.m"
        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1336 "unused_args.m"
      }
#line 1338 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1337 "unused_args.m"
      {
#line 1337 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_14_14;

#line 1337 "unused_args.m"
        transform_hlds__unused_args__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OldProcCallInfo_11, (MR_Integer) 0)));
#line 1337 "unused_args.m"
        transform_hlds__unused_args__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OldProcCallInfo_11, (MR_Integer) 1)));
#line 1337 "unused_args.m"
        transform_hlds__unused_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OldProcCallInfo_11, (MR_Integer) 2)));
#line 1337 "unused_args.m"
        transform_hlds__unused_args__UnusedArgs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OldProcCallInfo_11, (MR_Integer) 3)));
#line 1337 "unused_args.m"
      }
#line 1338 "unused_args.m"
    else
#line 1339 "unused_args.m"
      {
#line 1339 "unused_args.m"
        transform_hlds__unused_args__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OldPredProcId_7, (MR_Integer) 0)));
#line 1339 "unused_args.m"
        transform_hlds__unused_args__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OldPredProcId_7, (MR_Integer) 1)));
#line 1340 "unused_args.m"
        transform_hlds__unused_args__UnusedArgs_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1339 "unused_args.m"
      }
#line 1342 "unused_args.m"
    {
#line 1342 "unused_args.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], transform_hlds__unused_args__VarUsage_6, ((MR_Box) (transform_hlds__unused_args__OldPredProcId_7)), &transform_hlds__unused_args__conv1_UsageInfos_16);
    }
#line 1342 "unused_args.m"
    transform_hlds__unused_args__UsageInfos_16 = ((MR_Word) transform_hlds__unused_args__conv1_UsageInfos_16);
#line 1343 "unused_args.m"
    {
#line 1343 "unused_args.m"
      mercury__map__keys_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__UsageInfos_16, &transform_hlds__unused_args__UnusedVars_17);
    }
#line 1344 "unused_args.m"
    {
#line 1344 "unused_args.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__unused_args__ModuleInfo0_9, transform_hlds__unused_args__PredId_12, transform_hlds__unused_args__ProcId_13, &transform_hlds__unused_args__PredInfo0_18, &transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_50_50);
    }
#line 1346 "unused_args.m"
    {
#line 1346 "unused_args.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_50_50, &transform_hlds__unused_args__VarTypes0_20);
    }
#line 1347 "unused_args.m"
    {
#line 1347 "unused_args.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__unused_args__ModuleInfo0_9, &transform_hlds__unused_args__Preds0_21);
    }
#line 1348 "unused_args.m"
    {
#line 1348 "unused_args.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__unused_args__PredInfo0_18, &transform_hlds__unused_args__Procs0_22);
    }
#line 1350 "unused_args.m"
    {
#line 1350 "unused_args.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_50_50, &transform_hlds__unused_args__HeadVars0_23);
    }
#line 1351 "unused_args.m"
    {
#line 1351 "unused_args.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_50_50, &transform_hlds__unused_args__ArgModes0_24);
    }
#line 1352 "unused_args.m"
    {
#line 1352 "unused_args.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_50_50, &transform_hlds__unused_args__VarSet0_25);
    }
#line 1353 "unused_args.m"
    {
#line 1353 "unused_args.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_50_50, &transform_hlds__unused_args__STATE_VARIABLE_Goal_51_51);
    }
#line 1354 "unused_args.m"
    {
#line 1354 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_15, transform_hlds__unused_args__HeadVars0_23, &transform_hlds__unused_args__HeadVars_27);
    }
#line 1355 "unused_args.m"
    {
#line 1355 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_15, transform_hlds__unused_args__ArgModes0_24, &transform_hlds__unused_args__ArgModes_28);
    }
#line 1361 "unused_args.m"
    {
#line 1361 "unused_args.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__unused_args__HeadVars_27, transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_50_50, &transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_52_52);
    }
#line 1362 "unused_args.m"
    {
#line 1362 "unused_args.m"
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__unused_args__ArgModes_28, transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_52_52, &transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_53_53);
    }
#line 1366 "unused_args.m"
    {
#line 1366 "unused_args.m"
      transform_hlds__unused_args__FixupInfo0_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1366 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo0_31, 0) = ((MR_Box) (transform_hlds__unused_args__ModuleInfo0_9));
#line 1366 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo0_31, 1) = ((MR_Box) (transform_hlds__unused_args__ProcCallInfo_8));
#line 1366 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo0_31, 2) = ((MR_Box) (transform_hlds__unused_args__UnusedVars_17));
#line 1366 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo0_31, 3) = ((MR_Box) (transform_hlds__unused_args__VarSet0_25));
#line 1366 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo0_31, 4) = ((MR_Box) (transform_hlds__unused_args__VarTypes0_20));
#line 1366 "unused_args.m"
    }
#line 1368 "unused_args.m"
    {
#line 1368 "unused_args.m"
      transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(transform_hlds__unused_args__STATE_VARIABLE_Goal_51_51, &transform_hlds__unused_args__STATE_VARIABLE_Goal_54_54, transform_hlds__unused_args__FixupInfo0_31, &transform_hlds__unused_args__FixupInfo_32, &transform_hlds__unused_args__Changed_33);
    }
#line 1369 "unused_args.m"
    transform_hlds__unused_args__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo_32, (MR_Integer) 0)));
#line 1369 "unused_args.m"
    transform_hlds__unused_args__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo_32, (MR_Integer) 1)));
#line 1369 "unused_args.m"
    transform_hlds__unused_args__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo_32, (MR_Integer) 2)));
#line 1369 "unused_args.m"
    transform_hlds__unused_args__VarSet1_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo_32, (MR_Integer) 3)));
#line 1369 "unused_args.m"
    transform_hlds__unused_args__VarTypes1_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo_32, (MR_Integer) 4)));
#line 1382 "unused_args.m"
#line 1382 "unused_args.m"
    switch (transform_hlds__unused_args__Changed_33) {
#line 1382 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1382 "unused_args.m"
      case (MR_Integer) 0:
#line 1383 "unused_args.m"
        transform_hlds__unused_args__ProcInfo_29 = transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_53_53;
#line 1382 "unused_args.m"
        break;
#line 1382 "unused_args.m"
      case (MR_Integer) 1:
#line 1371 "unused_args.m"
        {
#line 1371 "unused_args.m"
          MR_Word transform_hlds__unused_args__NonLocals_39;
#line 1371 "unused_args.m"
          MR_Word transform_hlds__unused_args__RttiVarMaps0_40;
#line 1371 "unused_args.m"
          MR_Word transform_hlds__unused_args__VarSet_42;
#line 1371 "unused_args.m"
          MR_Word transform_hlds__unused_args__VarTypes_43;
#line 1371 "unused_args.m"
          MR_Word transform_hlds__unused_args__RttiVarMaps_44;
#line 1371 "unused_args.m"
          MR_Word transform_hlds__unused_args__STATE_VARIABLE_Goal_56_56;
#line 1371 "unused_args.m"
          MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_57_57;
#line 1371 "unused_args.m"
          MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_58_58;
#line 1371 "unused_args.m"
          MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_59_59;
#line 1375 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_41_41;

#line 1373 "unused_args.m"
          {
#line 1373 "unused_args.m"
            transform_hlds__unused_args__NonLocals_39 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__unused_args__HeadVars_27);
          }
#line 1374 "unused_args.m"
          {
#line 1374 "unused_args.m"
            hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_53_53, &transform_hlds__unused_args__RttiVarMaps0_40);
          }
#line 1375 "unused_args.m"
          {
#line 1375 "unused_args.m"
            hlds__quantification__implicitly_quantify_goal_general_11_p_0((MR_Integer) 1, transform_hlds__unused_args__NonLocals_39, &transform_hlds__unused_args__V_41_41, transform_hlds__unused_args__STATE_VARIABLE_Goal_54_54, &transform_hlds__unused_args__STATE_VARIABLE_Goal_56_56, transform_hlds__unused_args__VarSet1_37, &transform_hlds__unused_args__VarSet_42, transform_hlds__unused_args__VarTypes1_38, &transform_hlds__unused_args__VarTypes_43, transform_hlds__unused_args__RttiVarMaps0_40, &transform_hlds__unused_args__RttiVarMaps_44);
          }
#line 1378 "unused_args.m"
          {
#line 1378 "unused_args.m"
            hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__unused_args__STATE_VARIABLE_Goal_56_56, transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_53_53, &transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_57_57);
          }
#line 1379 "unused_args.m"
          {
#line 1379 "unused_args.m"
            hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__unused_args__VarSet_42, transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_57_57, &transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_58_58);
          }
#line 1380 "unused_args.m"
          {
#line 1380 "unused_args.m"
            hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__unused_args__VarTypes_43, transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_58_58, &transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_59_59);
          }
#line 1381 "unused_args.m"
          {
#line 1381 "unused_args.m"
            hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__unused_args__RttiVarMaps_44, transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_59_59, &transform_hlds__unused_args__ProcInfo_29);
          }
#line 1371 "unused_args.m"
        }
#line 1382 "unused_args.m"
        break;
#line 1382 "unused_args.m"
    }
#line 1388 "unused_args.m"
    {
#line 1388 "unused_args.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__unused_args__ProcId_13, ((MR_Box) (transform_hlds__unused_args__ProcInfo_29)), transform_hlds__unused_args__Procs0_22, &transform_hlds__unused_args__Procs_45);
    }
#line 1389 "unused_args.m"
    {
#line 1389 "unused_args.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__unused_args__Procs_45, transform_hlds__unused_args__PredInfo0_18, &transform_hlds__unused_args__PredInfo_46);
    }
#line 1390 "unused_args.m"
    {
#line 1390 "unused_args.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ((MR_Box) (transform_hlds__unused_args__PredId_12)), ((MR_Box) (transform_hlds__unused_args__PredInfo_46)), transform_hlds__unused_args__Preds0_21, &transform_hlds__unused_args__Preds_47);
    }
#line 1391 "unused_args.m"
    {
#line 1391 "unused_args.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__unused_args__Preds_47, transform_hlds__unused_args__ModuleInfo0_9, transform_hlds__unused_args__ModuleInfo_10);
#line 1391 "unused_args.m"
      return;
    }
#line 1334 "unused_args.m"
  }
#line 1330 "unused_args.m"
}

#line 1305 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_proc_6_p_0(
#line 1305 "unused_args.m"
  MR_Word transform_hlds__unused_args__VeryVerbose_7,
#line 1305 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_8,
#line 1305 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcCallInfo_9,
#line 1305 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcId_10,
#line 1305 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_18,
#line 1305 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_19)
#line 1305 "unused_args.m"
{
#line 1309 "unused_args.m"
  {
#line 1309 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1325 "unused_args.m"
#line 1325 "unused_args.m"
    switch (transform_hlds__unused_args__VeryVerbose_7) {
#line 1325 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1325 "unused_args.m"
      case (MR_Integer) 0:
#line 1326 "unused_args.m"
        {
#line 1326 "unused_args.m"
        }
#line 1325 "unused_args.m"
        break;
#line 1325 "unused_args.m"
      case (MR_Integer) 1:
#line 1312 "unused_args.m"
        {
#line 1312 "unused_args.m"
          MR_Word transform_hlds__unused_args__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredProcId_10, (MR_Integer) 0)));
#line 1312 "unused_args.m"
          MR_Integer transform_hlds__unused_args__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredProcId_10, (MR_Integer) 1)));
#line 1312 "unused_args.m"
          MR_String transform_hlds__unused_args__Name_15;
#line 1312 "unused_args.m"
          MR_Integer transform_hlds__unused_args__Arity_16;
#line 1312 "unused_args.m"
          MR_Integer transform_hlds__unused_args__ProcInt_17;

#line 1314 "unused_args.m"
          {
#line 1314 "unused_args.m"
            mercury__io__write_string_3_p_0((MR_String) "% Fixing up \140");
          }
#line 1315 "unused_args.m"
          {
#line 1315 "unused_args.m"
            transform_hlds__unused_args__Name_15 = hlds__hlds_module__predicate_name_2_f_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_18, transform_hlds__unused_args__PredId_13);
          }
#line 1316 "unused_args.m"
          {
#line 1316 "unused_args.m"
            transform_hlds__unused_args__Arity_16 = hlds__hlds_module__predicate_arity_2_f_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_18, transform_hlds__unused_args__PredId_13);
          }
#line 1317 "unused_args.m"
          {
#line 1317 "unused_args.m"
            hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__unused_args__ProcId_14, &transform_hlds__unused_args__ProcInt_17);
          }
#line 1318 "unused_args.m"
          {
#line 1318 "unused_args.m"
            mercury__io__write_string_3_p_0(transform_hlds__unused_args__Name_15);
          }
#line 1319 "unused_args.m"
          {
#line 1319 "unused_args.m"
            mercury__io__write_string_3_p_0((MR_String) "/");
          }
#line 1320 "unused_args.m"
          {
#line 1320 "unused_args.m"
            mercury__io__write_int_3_p_0(transform_hlds__unused_args__Arity_16);
          }
#line 1321 "unused_args.m"
          {
#line 1321 "unused_args.m"
            mercury__io__write_string_3_p_0((MR_String) "\' in mode ");
          }
#line 1322 "unused_args.m"
          {
#line 1322 "unused_args.m"
            mercury__io__write_int_3_p_0(transform_hlds__unused_args__ProcInt_17);
          }
#line 1323 "unused_args.m"
          {
#line 1323 "unused_args.m"
            mercury__io__write_char_3_p_0((MR_Char) 10);
          }
#line 1312 "unused_args.m"
        }
#line 1325 "unused_args.m"
        break;
#line 1325 "unused_args.m"
    }
#line 1328 "unused_args.m"
    {
#line 1328 "unused_args.m"
      transform_hlds__unused_args__do_unused_args_fixup_proc_5_p_0(transform_hlds__unused_args__VarUsage_8, transform_hlds__unused_args__PredProcId_10, transform_hlds__unused_args__ProcCallInfo_9, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_18, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_19);
#line 1328 "unused_args.m"
      return;
    }
#line 1309 "unused_args.m"
  }
#line 1305 "unused_args.m"
}

#line 1302 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_module_6_p_0_1(
#line 1302 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1302 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1302 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1302 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3)
#line 1302 "unused_args.m"
{
#line 1302 "unused_args.m"
  {
#line 1302 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1302 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_STATE_VARIABLE_ModuleInfo_19;

#line 1302 "unused_args.m"
    {
#line 1302 "unused_args.m"
      transform_hlds__unused_args__unused_args_fixup_proc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv0_STATE_VARIABLE_ModuleInfo_19);
    }
#line 1302 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_STATE_VARIABLE_ModuleInfo_19));
#line 1302 "unused_args.m"
  }
#line 1302 "unused_args.m"
}

#line 1296 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_module_6_p_0(
#line 1296 "unused_args.m"
  MR_Word transform_hlds__unused_args__VeryVerbose_7,
#line 1296 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_8,
#line 1296 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcIds_9,
#line 1296 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcCallInfo_10,
#line 1296 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_12,
#line 1296 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_13)
#line 1296 "unused_args.m"
{
#line 1301 "unused_args.m"
  {
#line 1301 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1301 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_14_14;
#line 1302 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv1_STATE_VARIABLE_ModuleInfo_13;

#line 1302 "unused_args.m"
    {
#line 1302 "unused_args.m"
      transform_hlds__unused_args__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1302 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_7[1]));
#line 1302 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_fixup_module_6_p_0_1));
#line 1302 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1302 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 3) = ((MR_Box) (transform_hlds__unused_args__VeryVerbose_7));
#line 1302 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 4) = ((MR_Box) (transform_hlds__unused_args__VarUsage_8));
#line 1302 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 5) = ((MR_Box) (transform_hlds__unused_args__ProcCallInfo_10));
#line 1302 "unused_args.m"
    }
#line 1302 "unused_args.m"
    {
#line 1302 "unused_args.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__unused_args__V_14_14, transform_hlds__unused_args__PredProcIds_9, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_12)), &transform_hlds__unused_args__conv1_STATE_VARIABLE_ModuleInfo_13);
    }
#line 1302 "unused_args.m"
    *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_13 = ((MR_Word) transform_hlds__unused_args__conv1_STATE_VARIABLE_ModuleInfo_13);
#line 1301 "unused_args.m"
  }
#line 1296 "unused_args.m"
}

#line 1283 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__get_unused_arg_nos_4_p_0(
#line 1283 "unused_args.m"
  MR_Word transform_hlds__unused_args__LocalVars_1,
#line 1283 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 1283 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ArgNo_3,
#line 1283 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__4_4)
#line 1283 "unused_args.m"
{
#line 1286 "unused_args.m"
  {
#line 1286 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1286 "unused_args.m"
    if ((transform_hlds__unused_args__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1286 "unused_args.m"
      *transform_hlds__unused_args__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1286 "unused_args.m"
    else
#line 1287 "unused_args.m"
      {
#line 1287 "unused_args.m"
        MR_Word transform_hlds__unused_args__HeadVar_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 1287 "unused_args.m"
        MR_Word transform_hlds__unused_args__HeadVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 1287 "unused_args.m"
        MR_Integer transform_hlds__unused_args__NextArg_12 = (transform_hlds__unused_args__ArgNo_3 + (MR_Integer) 1);
#line 1287 "unused_args.m"
        MR_Word transform_hlds__unused_args__UnusedArgsTail_13;

#line 1288 "unused_args.m"
        {
#line 1288 "unused_args.m"
          transform_hlds__unused_args__get_unused_arg_nos_4_p_0(transform_hlds__unused_args__LocalVars_1, transform_hlds__unused_args__HeadVars_9, transform_hlds__unused_args__NextArg_12, &transform_hlds__unused_args__UnusedArgsTail_13);
        }
#line 1290 "unused_args.m"
        {
#line 1290 "unused_args.m"
          transform_hlds__unused_args__succeeded = mercury__map__contains_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__LocalVars_1, ((MR_Box) (transform_hlds__unused_args__HeadVar_8)));
        }
#line 1292 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1291 "unused_args.m"
          {
#line 1291 "unused_args.m"
            MR_Word base;
#line 1291 "unused_args.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1291 "unused_args.m"
            *transform_hlds__unused_args__HeadVar__4_4 = base;
#line 1291 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__ArgNo_3));
#line 1291 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__UnusedArgsTail_13));
#line 1291 "unused_args.m"
          }
#line 1292 "unused_args.m"
        else
#line 1293 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__4_4 = transform_hlds__unused_args__UnusedArgsTail_13;
#line 1287 "unused_args.m"
      }
#line 1286 "unused_args.m"
  }
#line 1283 "unused_args.m"
}

#line 1226 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__make_imported_unused_args_pred_info_6_p_0(
#line 1226 "unused_args.m"
  MR_Word transform_hlds__unused_args__OptProc_7,
#line 1226 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_8,
#line 1226 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_0_31,
#line 1226 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_32,
#line 1226 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_33,
#line 1226 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_34)
#line 1226 "unused_args.m"
{
#line 1231 "unused_args.m"
  {
#line 1231 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1231 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OptProc_7, (MR_Integer) 0)));
#line 1231 "unused_args.m"
    MR_Integer transform_hlds__unused_args__ProcId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OptProc_7, (MR_Integer) 1)));
#line 1231 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredInfo0_13;
#line 1231 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcInfo0_14;
#line 1231 "unused_args.m"
    MR_Word transform_hlds__unused_args__NewPredInfo0_15;
#line 1231 "unused_args.m"
    MR_Word transform_hlds__unused_args__NewProcs0_16;
#line 1231 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVars0_17;
#line 1231 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVars_18;
#line 1231 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcInfo1_19;
#line 1231 "unused_args.m"
    MR_Word transform_hlds__unused_args__ArgModes0_20;
#line 1231 "unused_args.m"
    MR_Word transform_hlds__unused_args__ArgModes_21;
#line 1231 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcInfo_22;
#line 1231 "unused_args.m"
    MR_Word transform_hlds__unused_args__NewProcs_23;
#line 1231 "unused_args.m"
    MR_Word transform_hlds__unused_args__NewPredInfo_24;
#line 1231 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredTable0_25;
#line 1231 "unused_args.m"
    MR_Word transform_hlds__unused_args__NewPredId_26;
#line 1231 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredTable1_27;
#line 1231 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredModule_28;
#line 1231 "unused_args.m"
    MR_String transform_hlds__unused_args__PredName_29;
#line 1231 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredSymName_30;
#line 1231 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_42_42;

#line 1233 "unused_args.m"
    {
#line 1233 "unused_args.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_33, transform_hlds__unused_args__PredId_11, transform_hlds__unused_args__ProcId_12, &transform_hlds__unused_args__PredInfo0_13, &transform_hlds__unused_args__ProcInfo0_14);
    }
#line 1235 "unused_args.m"
    {
#line 1235 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(transform_hlds__unused_args__UnusedArgs_8, (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(2), &transform_hlds__unused_args_scalar_common_9[0]))), transform_hlds__unused_args__OptProc_7, transform_hlds__unused_args__PredInfo0_13, &transform_hlds__unused_args__NewPredInfo0_15);
    }
#line 1238 "unused_args.m"
    {
#line 1238 "unused_args.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__unused_args__NewPredInfo0_15, &transform_hlds__unused_args__NewProcs0_16);
    }
#line 1241 "unused_args.m"
    {
#line 1241 "unused_args.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__ProcInfo0_14, &transform_hlds__unused_args__HeadVars0_17);
    }
#line 1242 "unused_args.m"
    {
#line 1242 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_8, transform_hlds__unused_args__HeadVars0_17, &transform_hlds__unused_args__HeadVars_18);
    }
#line 1243 "unused_args.m"
    {
#line 1243 "unused_args.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__unused_args__HeadVars_18, transform_hlds__unused_args__ProcInfo0_14, &transform_hlds__unused_args__ProcInfo1_19);
    }
#line 1244 "unused_args.m"
    {
#line 1244 "unused_args.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__unused_args__ProcInfo1_19, &transform_hlds__unused_args__ArgModes0_20);
    }
#line 1245 "unused_args.m"
    {
#line 1245 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_8, transform_hlds__unused_args__ArgModes0_20, &transform_hlds__unused_args__ArgModes_21);
    }
#line 1246 "unused_args.m"
    {
#line 1246 "unused_args.m"
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__unused_args__ArgModes_21, transform_hlds__unused_args__ProcInfo1_19, &transform_hlds__unused_args__ProcInfo_22);
    }
#line 1247 "unused_args.m"
    {
#line 1247 "unused_args.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__unused_args__ProcId_12, ((MR_Box) (transform_hlds__unused_args__ProcInfo_22)), transform_hlds__unused_args__NewProcs0_16, &transform_hlds__unused_args__NewProcs_23);
    }
#line 1248 "unused_args.m"
    {
#line 1248 "unused_args.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__unused_args__NewProcs_23, transform_hlds__unused_args__NewPredInfo0_15, &transform_hlds__unused_args__NewPredInfo_24);
    }
#line 1251 "unused_args.m"
    {
#line 1251 "unused_args.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_33, &transform_hlds__unused_args__PredTable0_25);
    }
#line 1252 "unused_args.m"
    {
#line 1252 "unused_args.m"
      hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__unused_args__NewPredInfo_24, &transform_hlds__unused_args__NewPredId_26, transform_hlds__unused_args__PredTable0_25, &transform_hlds__unused_args__PredTable1_27);
    }
#line 1253 "unused_args.m"
    {
#line 1253 "unused_args.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__unused_args__PredTable1_27, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_33, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_34);
    }
#line 1254 "unused_args.m"
    {
#line 1254 "unused_args.m"
      transform_hlds__unused_args__PredModule_28 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__unused_args__NewPredInfo_24);
    }
#line 1255 "unused_args.m"
    {
#line 1255 "unused_args.m"
      transform_hlds__unused_args__PredName_29 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__unused_args__NewPredInfo_24);
    }
#line 1256 "unused_args.m"
    {
#line 1256 "unused_args.m"
      transform_hlds__unused_args__PredSymName_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1256 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__PredSymName_30, 0) = ((MR_Box) (transform_hlds__unused_args__PredModule_28));
#line 1256 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__PredSymName_30, 1) = ((MR_Box) (transform_hlds__unused_args__PredName_29));
#line 1256 "unused_args.m"
    }
#line 1259 "unused_args.m"
    {
#line 1259 "unused_args.m"
      transform_hlds__unused_args__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1259 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_42_42, 0) = ((MR_Box) (transform_hlds__unused_args__NewPredId_26));
#line 1259 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_42_42, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_12));
#line 1259 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_42_42, 2) = ((MR_Box) (transform_hlds__unused_args__PredSymName_30));
#line 1259 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_42_42, 3) = ((MR_Box) (transform_hlds__unused_args__UnusedArgs_8));
#line 1259 "unused_args.m"
    }
#line 1258 "unused_args.m"
    {
#line 1258 "unused_args.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0, ((MR_Box) (transform_hlds__unused_args__OptProc_7)), ((MR_Box) (transform_hlds__unused_args__V_42_42)), transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_0_31, transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_32);
#line 1258 "unused_args.m"
      return;
    }
#line 1231 "unused_args.m"
  }
#line 1226 "unused_args.m"
}

#line 1187 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__create_call_goal_7_p_0(
#line 1187 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_8,
#line 1187 "unused_args.m"
  MR_Word transform_hlds__unused_args__NewPredId_9,
#line 1187 "unused_args.m"
  MR_Integer transform_hlds__unused_args__NewProcId_10,
#line 1187 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredModule_11,
#line 1187 "unused_args.m"
  MR_String transform_hlds__unused_args__PredName_12,
#line 1187 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34,
#line 1187 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OldProc_35)
#line 1187 "unused_args.m"
{
#line 1191 "unused_args.m"
  {
#line 1191 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1191 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVars_14;
#line 1191 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal0_15;
#line 1191 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalInfo0_17;
#line 1191 "unused_args.m"
    MR_Word transform_hlds__unused_args__Determinism_18;
#line 1191 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalInfo1_19;
#line 1191 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes0_20;
#line 1191 "unused_args.m"
    MR_Word transform_hlds__unused_args__NonLocals_21;
#line 1191 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypeList_22;
#line 1191 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes1_23;
#line 1191 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarSet0_24;
#line 1191 "unused_args.m"
    MR_Word transform_hlds__unused_args__RttiVarMaps0_25;
#line 1191 "unused_args.m"
    MR_Word transform_hlds__unused_args__NewHeadVars_26;
#line 1191 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalExpr_27;
#line 1191 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal1_28;
#line 1191 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal_30;
#line 1191 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarSet_31;
#line 1191 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes_32;
#line 1191 "unused_args.m"
    MR_Word transform_hlds__unused_args__RttiVarMaps_33;
#line 1191 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_39_39;
#line 1191 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_41_41;
#line 1191 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_42_42;
#line 1191 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_43_43;
#line 1191 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_44_44;
#line 1194 "unused_args.m"
    MR_Word transform_hlds__unused_args___GoalExpr_16;
#line 1215 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_29_29;

#line 1192 "unused_args.m"
    {
#line 1192 "unused_args.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34, &transform_hlds__unused_args__HeadVars_14);
    }
#line 1193 "unused_args.m"
    {
#line 1193 "unused_args.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34, &transform_hlds__unused_args__Goal0_15);
    }
#line 1194 "unused_args.m"
    transform_hlds__unused_args___GoalExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal0_15, (MR_Integer) 0)));
#line 1194 "unused_args.m"
    transform_hlds__unused_args__GoalInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal0_15, (MR_Integer) 1)));
#line 1200 "unused_args.m"
    {
#line 1200 "unused_args.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34, &transform_hlds__unused_args__Determinism_18);
    }
#line 1201 "unused_args.m"
    {
#line 1201 "unused_args.m"
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__unused_args__Determinism_18, transform_hlds__unused_args__GoalInfo0_17, &transform_hlds__unused_args__GoalInfo1_19);
    }
#line 1203 "unused_args.m"
    {
#line 1203 "unused_args.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34, &transform_hlds__unused_args__VarTypes0_20);
    }
#line 1204 "unused_args.m"
    {
#line 1204 "unused_args.m"
      mercury__set__list_to_set_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], transform_hlds__unused_args__HeadVars_14, &transform_hlds__unused_args__NonLocals_21);
    }
#line 1205 "unused_args.m"
    {
#line 1205 "unused_args.m"
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__unused_args__VarTypes0_20, transform_hlds__unused_args__HeadVars_14, &transform_hlds__unused_args__VarTypeList_22);
    }
#line 1206 "unused_args.m"
    {
#line 1206 "unused_args.m"
      hlds__vartypes__vartypes_from_corresponding_lists_3_p_0(transform_hlds__unused_args__HeadVars_14, transform_hlds__unused_args__VarTypeList_22, &transform_hlds__unused_args__VarTypes1_23);
    }
#line 1209 "unused_args.m"
    {
#line 1209 "unused_args.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34, &transform_hlds__unused_args__VarSet0_24);
    }
#line 1210 "unused_args.m"
    {
#line 1210 "unused_args.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34, &transform_hlds__unused_args__RttiVarMaps0_25);
    }
#line 1211 "unused_args.m"
    {
#line 1211 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_8, transform_hlds__unused_args__HeadVars_14, &transform_hlds__unused_args__NewHeadVars_26);
    }
#line 1213 "unused_args.m"
    {
#line 1213 "unused_args.m"
      transform_hlds__unused_args__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1213 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_39_39, 0) = ((MR_Box) (transform_hlds__unused_args__PredModule_11));
#line 1213 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_39_39, 1) = ((MR_Box) (transform_hlds__unused_args__PredName_12));
#line 1213 "unused_args.m"
    }
#line 1212 "unused_args.m"
    {
#line 1212 "unused_args.m"
      transform_hlds__unused_args__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_27, 0) = ((MR_Box) (transform_hlds__unused_args__NewPredId_9));
#line 1212 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_27, 1) = ((MR_Box) (transform_hlds__unused_args__NewProcId_10));
#line 1212 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_27, 2) = ((MR_Box) (transform_hlds__unused_args__NewHeadVars_26));
#line 1212 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_27, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1212 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_27, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1212 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_27, 5) = ((MR_Box) (transform_hlds__unused_args__V_39_39));
#line 1212 "unused_args.m"
    }
#line 1214 "unused_args.m"
    {
#line 1214 "unused_args.m"
      transform_hlds__unused_args__Goal1_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1214 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_28, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_27));
#line 1214 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_28, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo1_19));
#line 1214 "unused_args.m"
    }
#line 1216 "unused_args.m"
    {
#line 1216 "unused_args.m"
      transform_hlds__unused_args__V_41_41 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__unused_args__NonLocals_21);
    }
#line 1215 "unused_args.m"
    {
#line 1215 "unused_args.m"
      hlds__quantification__implicitly_quantify_goal_general_11_p_0((MR_Integer) 1, transform_hlds__unused_args__V_41_41, &transform_hlds__unused_args__V_29_29, transform_hlds__unused_args__Goal1_28, &transform_hlds__unused_args__Goal_30, transform_hlds__unused_args__VarSet0_24, &transform_hlds__unused_args__VarSet_31, transform_hlds__unused_args__VarTypes1_23, &transform_hlds__unused_args__VarTypes_32, transform_hlds__unused_args__RttiVarMaps0_25, &transform_hlds__unused_args__RttiVarMaps_33);
    }
#line 1218 "unused_args.m"
    {
#line 1218 "unused_args.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__unused_args__Goal_30, transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34, &transform_hlds__unused_args__STATE_VARIABLE_OldProc_42_42);
    }
#line 1219 "unused_args.m"
    {
#line 1219 "unused_args.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__unused_args__VarSet_31, transform_hlds__unused_args__STATE_VARIABLE_OldProc_42_42, &transform_hlds__unused_args__STATE_VARIABLE_OldProc_43_43);
    }
#line 1220 "unused_args.m"
    {
#line 1220 "unused_args.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__unused_args__VarTypes_32, transform_hlds__unused_args__STATE_VARIABLE_OldProc_43_43, &transform_hlds__unused_args__STATE_VARIABLE_OldProc_44_44);
    }
#line 1221 "unused_args.m"
    {
#line 1221 "unused_args.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__unused_args__RttiVarMaps_33, transform_hlds__unused_args__STATE_VARIABLE_OldProc_44_44, transform_hlds__unused_args__STATE_VARIABLE_OldProc_35);
#line 1221 "unused_args.m"
      return;
    }
#line 1191 "unused_args.m"
  }
#line 1187 "unused_args.m"
}

#line 1093 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__make_intermod_proc_10_p_0(
#line 1093 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_11,
#line 1093 "unused_args.m"
  MR_Word transform_hlds__unused_args__NewPredId_12,
#line 1093 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_13,
#line 1093 "unused_args.m"
  MR_String transform_hlds__unused_args__NewPredName_14,
#line 1093 "unused_args.m"
  MR_Word transform_hlds__unused_args__OrigPredInfo_15,
#line 1093 "unused_args.m"
  MR_Word transform_hlds__unused_args__OrigProcInfo_16,
#line 1093 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_17,
#line 1093 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs2_18,
#line 1093 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_35,
#line 1093 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_36)
#line 1093 "unused_args.m"
{
#line 1098 "unused_args.m"
  {
#line 1098 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExtraPredInfo0_20;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredModule_21;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExtraProc0_22;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVars0_23;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__IntermodHeadVars_24;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExtraProc1_25;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__ArgModes0_26;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__IntermodArgModes_27;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExtraProc_28;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExtraProcs0_29;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExtraProcs_30;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExtraPredInfo_31;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredTable0_32;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredTable_34;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_38_38;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVars_55;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal0_56;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalInfo0_58;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__Determinism_59;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalInfo1_60;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes0_61;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__NonLocals_62;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypeList_63;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes1_64;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarSet0_65;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__RttiVarMaps0_66;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__NewHeadVars_67;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalExpr_68;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal1_69;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal_71;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarSet_72;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes_73;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__RttiVarMaps_74;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_78_78;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_80_80;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_42_81;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_43_82;
#line 1098 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_44_83;
#line 1194 "unused_args.m"
    MR_Word transform_hlds__unused_args___GoalExpr_57;
#line 1215 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_70_70;
#line 1116 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_33_33;

#line 1102 "unused_args.m"
    {
#line 1102 "unused_args.m"
      transform_hlds__unused_args__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1102 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_38_38, 0) = ((MR_Box) (transform_hlds__unused_args__PredId_11));
#line 1102 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_38_38, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_13));
#line 1102 "unused_args.m"
    }
#line 1101 "unused_args.m"
    {
#line 1101 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(transform_hlds__unused_args__UnusedArgs2_18, (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))), transform_hlds__unused_args__V_38_38, transform_hlds__unused_args__OrigPredInfo_15, &transform_hlds__unused_args__ExtraPredInfo0_20);
    }
#line 1103 "unused_args.m"
    {
#line 1103 "unused_args.m"
      transform_hlds__unused_args__PredModule_21 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__unused_args__OrigPredInfo_15);
    }
#line 1192 "unused_args.m"
    {
#line 1192 "unused_args.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__HeadVars_55);
    }
#line 1193 "unused_args.m"
    {
#line 1193 "unused_args.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__Goal0_56);
    }
#line 1194 "unused_args.m"
    transform_hlds__unused_args___GoalExpr_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal0_56, (MR_Integer) 0)));
#line 1194 "unused_args.m"
    transform_hlds__unused_args__GoalInfo0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal0_56, (MR_Integer) 1)));
#line 1200 "unused_args.m"
    {
#line 1200 "unused_args.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__Determinism_59);
    }
#line 1201 "unused_args.m"
    {
#line 1201 "unused_args.m"
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__unused_args__Determinism_59, transform_hlds__unused_args__GoalInfo0_58, &transform_hlds__unused_args__GoalInfo1_60);
    }
#line 1203 "unused_args.m"
    {
#line 1203 "unused_args.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__VarTypes0_61);
    }
#line 1204 "unused_args.m"
    {
#line 1204 "unused_args.m"
      mercury__set__list_to_set_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], transform_hlds__unused_args__HeadVars_55, &transform_hlds__unused_args__NonLocals_62);
    }
#line 1205 "unused_args.m"
    {
#line 1205 "unused_args.m"
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__unused_args__VarTypes0_61, transform_hlds__unused_args__HeadVars_55, &transform_hlds__unused_args__VarTypeList_63);
    }
#line 1206 "unused_args.m"
    {
#line 1206 "unused_args.m"
      hlds__vartypes__vartypes_from_corresponding_lists_3_p_0(transform_hlds__unused_args__HeadVars_55, transform_hlds__unused_args__VarTypeList_63, &transform_hlds__unused_args__VarTypes1_64);
    }
#line 1209 "unused_args.m"
    {
#line 1209 "unused_args.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__VarSet0_65);
    }
#line 1210 "unused_args.m"
    {
#line 1210 "unused_args.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__RttiVarMaps0_66);
    }
#line 1211 "unused_args.m"
    {
#line 1211 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_17, transform_hlds__unused_args__HeadVars_55, &transform_hlds__unused_args__NewHeadVars_67);
    }
#line 1213 "unused_args.m"
    {
#line 1213 "unused_args.m"
      transform_hlds__unused_args__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1213 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_78_78, 0) = ((MR_Box) (transform_hlds__unused_args__PredModule_21));
#line 1213 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_78_78, 1) = ((MR_Box) (transform_hlds__unused_args__NewPredName_14));
#line 1213 "unused_args.m"
    }
#line 1212 "unused_args.m"
    {
#line 1212 "unused_args.m"
      transform_hlds__unused_args__GoalExpr_68 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_68, 0) = ((MR_Box) (transform_hlds__unused_args__NewPredId_12));
#line 1212 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_68, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_13));
#line 1212 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_68, 2) = ((MR_Box) (transform_hlds__unused_args__NewHeadVars_67));
#line 1212 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_68, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1212 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_68, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1212 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_68, 5) = ((MR_Box) (transform_hlds__unused_args__V_78_78));
#line 1212 "unused_args.m"
    }
#line 1214 "unused_args.m"
    {
#line 1214 "unused_args.m"
      transform_hlds__unused_args__Goal1_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1214 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_69, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_68));
#line 1214 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_69, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo1_60));
#line 1214 "unused_args.m"
    }
#line 1216 "unused_args.m"
    {
#line 1216 "unused_args.m"
      transform_hlds__unused_args__V_80_80 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__unused_args__NonLocals_62);
    }
#line 1215 "unused_args.m"
    {
#line 1215 "unused_args.m"
      hlds__quantification__implicitly_quantify_goal_general_11_p_0((MR_Integer) 1, transform_hlds__unused_args__V_80_80, &transform_hlds__unused_args__V_70_70, transform_hlds__unused_args__Goal1_69, &transform_hlds__unused_args__Goal_71, transform_hlds__unused_args__VarSet0_65, &transform_hlds__unused_args__VarSet_72, transform_hlds__unused_args__VarTypes1_64, &transform_hlds__unused_args__VarTypes_73, transform_hlds__unused_args__RttiVarMaps0_66, &transform_hlds__unused_args__RttiVarMaps_74);
    }
#line 1218 "unused_args.m"
    {
#line 1218 "unused_args.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__unused_args__Goal_71, transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__STATE_VARIABLE_OldProc_42_81);
    }
#line 1219 "unused_args.m"
    {
#line 1219 "unused_args.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__unused_args__VarSet_72, transform_hlds__unused_args__STATE_VARIABLE_OldProc_42_81, &transform_hlds__unused_args__STATE_VARIABLE_OldProc_43_82);
    }
#line 1220 "unused_args.m"
    {
#line 1220 "unused_args.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__unused_args__VarTypes_73, transform_hlds__unused_args__STATE_VARIABLE_OldProc_43_82, &transform_hlds__unused_args__STATE_VARIABLE_OldProc_44_83);
    }
#line 1221 "unused_args.m"
    {
#line 1221 "unused_args.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__unused_args__RttiVarMaps_74, transform_hlds__unused_args__STATE_VARIABLE_OldProc_44_83, &transform_hlds__unused_args__ExtraProc0_22);
    }
#line 1106 "unused_args.m"
    {
#line 1106 "unused_args.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__HeadVars0_23);
    }
#line 1107 "unused_args.m"
    {
#line 1107 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs2_18, transform_hlds__unused_args__HeadVars0_23, &transform_hlds__unused_args__IntermodHeadVars_24);
    }
#line 1108 "unused_args.m"
    {
#line 1108 "unused_args.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__unused_args__IntermodHeadVars_24, transform_hlds__unused_args__ExtraProc0_22, &transform_hlds__unused_args__ExtraProc1_25);
    }
#line 1109 "unused_args.m"
    {
#line 1109 "unused_args.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__ArgModes0_26);
    }
#line 1110 "unused_args.m"
    {
#line 1110 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs2_18, transform_hlds__unused_args__ArgModes0_26, &transform_hlds__unused_args__IntermodArgModes_27);
    }
#line 1111 "unused_args.m"
    {
#line 1111 "unused_args.m"
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__unused_args__IntermodArgModes_27, transform_hlds__unused_args__ExtraProc1_25, &transform_hlds__unused_args__ExtraProc_28);
    }
#line 1112 "unused_args.m"
    {
#line 1112 "unused_args.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__unused_args__ExtraPredInfo0_20, &transform_hlds__unused_args__ExtraProcs0_29);
    }
#line 1113 "unused_args.m"
    {
#line 1113 "unused_args.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__unused_args__ProcId_13, ((MR_Box) (transform_hlds__unused_args__ExtraProc_28)), transform_hlds__unused_args__ExtraProcs0_29, &transform_hlds__unused_args__ExtraProcs_30);
    }
#line 1114 "unused_args.m"
    {
#line 1114 "unused_args.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__unused_args__ExtraProcs_30, transform_hlds__unused_args__ExtraPredInfo0_20, &transform_hlds__unused_args__ExtraPredInfo_31);
    }
#line 1115 "unused_args.m"
    {
#line 1115 "unused_args.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_35, &transform_hlds__unused_args__PredTable0_32);
    }
#line 1116 "unused_args.m"
    {
#line 1116 "unused_args.m"
      hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__unused_args__ExtraPredInfo_31, &transform_hlds__unused_args__V_33_33, transform_hlds__unused_args__PredTable0_32, &transform_hlds__unused_args__PredTable_34);
    }
#line 1117 "unused_args.m"
    {
#line 1117 "unused_args.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__unused_args__PredTable_34, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_35, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_36);
#line 1117 "unused_args.m"
      return;
    }
#line 1098 "unused_args.m"
  }
#line 1093 "unused_args.m"
}

#line 1088 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_4(
#line 1088 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1088 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1088 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1088 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3)
#line 1088 "unused_args.m"
{
#line 1088 "unused_args.m"
  {
#line 1088 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1088 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv3_STATE_VARIABLE_ModuleInfo_36;

#line 1088 "unused_args.m"
    {
#line 1088 "unused_args.m"
      transform_hlds__unused_args__make_intermod_proc_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 9))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv3_STATE_VARIABLE_ModuleInfo_36);
    }
#line 1088 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv3_STATE_VARIABLE_ModuleInfo_36));
#line 1088 "unused_args.m"
  }
#line 1088 "unused_args.m"
}

#line 1021 "unused_args.m"
static MR_Box MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_3(
#line 1021 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1021 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1)
#line 1021 "unused_args.m"
{
#line 1021 "unused_args.m"
  {
#line 1021 "unused_args.m"
    MR_Box transform_hlds__unused_args__wrapper_arg_2;
#line 1021 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1021 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv2_HeadVar__2_2;

#line 1021 "unused_args.m"
    {
#line 1021 "unused_args.m"
      transform_hlds__unused_args__conv2_HeadVar__2_2 = transform_hlds__unused_args__get_unused_args_1_f_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 1021 "unused_args.m"
    transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv2_HeadVar__2_2));
#line 1021 "unused_args.m"
    return transform_hlds__unused_args__wrapper_arg_2;
#line 1021 "unused_args.m"
  }
#line 1021 "unused_args.m"
}

#line 1016 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_2(
#line 1016 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1016 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1)
#line 1016 "unused_args.m"
{
#line 1016 "unused_args.m"
  {
#line 1016 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1016 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;

#line 1016 "unused_args.m"
    {
#line 1016 "unused_args.m"
      return transform_hlds__unused_args__succeeded = transform_hlds__unused_args__IntroducedFrom__pred__unused_args_create_new_pred__1016__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 1016 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 1016 "unused_args.m"
  }
#line 1016 "unused_args.m"
}

#line 1009 "unused_args.m"
static MR_Box MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_1(
#line 1009 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1009 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1)
#line 1009 "unused_args.m"
{
#line 1009 "unused_args.m"
  {
#line 1009 "unused_args.m"
    MR_Box transform_hlds__unused_args__wrapper_arg_2;
#line 1009 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1009 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv1_HeadVar__2_55;

#line 1009 "unused_args.m"
    {
#line 1009 "unused_args.m"
      transform_hlds__unused_args__conv1_HeadVar__2_55 = transform_hlds__unused_args__IntroducedFrom__func__unused_args_create_new_pred__1009__1_1_f_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 1009 "unused_args.m"
    transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv1_HeadVar__2_55));
#line 1009 "unused_args.m"
    return transform_hlds__unused_args__wrapper_arg_2;
#line 1009 "unused_args.m"
  }
#line 1009 "unused_args.m"
}

#line 987 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0(
#line 987 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_7,
#line 987 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 987 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_0_46,
#line 987 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_47,
#line 987 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48,
#line 987 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_49)
#line 987 "unused_args.m"
{
#line 992 "unused_args.m"
  {
#line 992 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 992 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeCtorInfo_76_76 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 992 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeInfo_77_77 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[0];
#line 992 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 992 "unused_args.m"
    MR_Integer transform_hlds__unused_args__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 992 "unused_args.m"
    MR_Word transform_hlds__unused_args__UnusedArgs_12;
#line 992 "unused_args.m"
    MR_Word transform_hlds__unused_args__OrigPredInfo_13;
#line 992 "unused_args.m"
    MR_Word transform_hlds__unused_args__OrigProcInfo_14;
#line 992 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredModule_15;
#line 992 "unused_args.m"
    MR_Word transform_hlds__unused_args__Globals_16;
#line 992 "unused_args.m"
    MR_Word transform_hlds__unused_args__Intermod_17;
#line 992 "unused_args.m"
    MR_Word transform_hlds__unused_args__IntermodResultsTriples_21;
#line 992 "unused_args.m"
    MR_Word transform_hlds__unused_args__IntermodOldArgLists_29;
#line 993 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv0_UnusedArgs_12;

#line 993 "unused_args.m"
    {
#line 993 "unused_args.m"
      mercury__map__lookup_3_p_0(transform_hlds__unused_args__TypeCtorInfo_76_76, transform_hlds__unused_args__TypeInfo_77_77, transform_hlds__unused_args__UnusedArgInfo_7, ((MR_Box) (transform_hlds__unused_args__HeadVar__2_2)), &transform_hlds__unused_args__conv0_UnusedArgs_12);
    }
#line 993 "unused_args.m"
    transform_hlds__unused_args__UnusedArgs_12 = ((MR_Word) transform_hlds__unused_args__conv0_UnusedArgs_12);
#line 994 "unused_args.m"
    {
#line 994 "unused_args.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48, transform_hlds__unused_args__PredId_8, transform_hlds__unused_args__ProcId_9, &transform_hlds__unused_args__OrigPredInfo_13, &transform_hlds__unused_args__OrigProcInfo_14);
    }
#line 996 "unused_args.m"
    {
#line 996 "unused_args.m"
      transform_hlds__unused_args__PredModule_15 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__unused_args__OrigPredInfo_13);
    }
#line 998 "unused_args.m"
    {
#line 998 "unused_args.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48, &transform_hlds__unused_args__Globals_16);
    }
#line 999 "unused_args.m"
    {
#line 999 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_16, (MR_Integer) 335, &transform_hlds__unused_args__Intermod_17);
    }
#line 1023 "unused_args.m"
#line 1023 "unused_args.m"
    switch (transform_hlds__unused_args__Intermod_17) {
#line 1023 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1023 "unused_args.m"
      case (MR_Integer) 0:
#line 1024 "unused_args.m"
        {
#line 1025 "unused_args.m"
          transform_hlds__unused_args__IntermodResultsTriples_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1026 "unused_args.m"
          transform_hlds__unused_args__IntermodOldArgLists_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1024 "unused_args.m"
        }
#line 1023 "unused_args.m"
        break;
#line 1023 "unused_args.m"
      case (MR_Integer) 1:
#line 1001 "unused_args.m"
        {
#line 1001 "unused_args.m"
          MR_Word transform_hlds__unused_args__TypeCtorInfo_80_80;
#line 1001 "unused_args.m"
          MR_Word transform_hlds__unused_args__AnalysisInfo0_18;
#line 1001 "unused_args.m"
          MR_Word transform_hlds__unused_args__ModuleId_19;
#line 1001 "unused_args.m"
          MR_Word transform_hlds__unused_args__FuncId_20;
#line 1001 "unused_args.m"
          MR_Word transform_hlds__unused_args__IntermodOldAnswers_22;
#line 1001 "unused_args.m"
          MR_Integer transform_hlds__unused_args__PredArity_24;
#line 1001 "unused_args.m"
          MR_Word transform_hlds__unused_args__FuncInfo_25;
#line 1001 "unused_args.m"
          MR_Word transform_hlds__unused_args__Answer_26;
#line 1001 "unused_args.m"
          MR_Word transform_hlds__unused_args__FilterUnused_27;
#line 1001 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_59_59;

#line 1002 "unused_args.m"
          {
#line 1002 "unused_args.m"
            hlds__hlds_module__module_info_get_analysis_info_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48, &transform_hlds__unused_args__AnalysisInfo0_18);
          }
#line 1004 "unused_args.m"
          {
#line 1004 "unused_args.m"
            transform_hlds__mmc_analysis__module_name_func_id_from_pred_info_4_p_0(transform_hlds__unused_args__OrigPredInfo_13, transform_hlds__unused_args__ProcId_9, &transform_hlds__unused_args__ModuleId_19, &transform_hlds__unused_args__FuncId_20);
          }
#line 1006 "unused_args.m"
          {
#line 1006 "unused_args.m"
            analysis__lookup_results_4_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_4[0], transform_hlds__unused_args__AnalysisInfo0_18, transform_hlds__unused_args__ModuleId_19, transform_hlds__unused_args__FuncId_20, &transform_hlds__unused_args__IntermodResultsTriples_21);
          }
#line 13254 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__TypeCtorInfo_80_80 = (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0;
#line 1009 "unused_args.m"
          {
#line 1009 "unused_args.m"
            transform_hlds__unused_args__IntermodOldAnswers_22 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[4], transform_hlds__unused_args__TypeCtorInfo_80_80, (MR_Word) &transform_hlds__unused_args_scalar_common_2[10], transform_hlds__unused_args__IntermodResultsTriples_21);
          }
#line 1012 "unused_args.m"
          {
#line 1012 "unused_args.m"
            transform_hlds__unused_args__PredArity_24 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__unused_args__OrigPredInfo_13);
          }
#line 1013 "unused_args.m"
          transform_hlds__unused_args__FuncInfo_25 = (MR_Word) transform_hlds__unused_args__PredArity_24;
#line 1014 "unused_args.m"
          transform_hlds__unused_args__Answer_26 = (MR_Word) transform_hlds__unused_args__UnusedArgs_12;
#line 1016 "unused_args.m"
          {
#line 1016 "unused_args.m"
            transform_hlds__unused_args__FilterUnused_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1016 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FilterUnused_27, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_4[4]));
#line 1016 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FilterUnused_27, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_2));
#line 1016 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FilterUnused_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1016 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FilterUnused_27, 3) = ((MR_Box) (transform_hlds__unused_args__FuncInfo_25));
#line 1016 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FilterUnused_27, 4) = ((MR_Box) (transform_hlds__unused_args__Answer_26));
#line 1016 "unused_args.m"
          }
#line 1022 "unused_args.m"
          {
#line 1022 "unused_args.m"
            transform_hlds__unused_args__V_59_59 = mercury__list__filter_2_f_0(transform_hlds__unused_args__TypeCtorInfo_80_80, transform_hlds__unused_args__FilterUnused_27, transform_hlds__unused_args__IntermodOldAnswers_22);
          }
#line 1021 "unused_args.m"
          {
#line 1021 "unused_args.m"
            transform_hlds__unused_args__IntermodOldArgLists_29 = mercury__list__map_2_f_0(transform_hlds__unused_args__TypeCtorInfo_80_80, transform_hlds__unused_args__TypeInfo_77_77, (MR_Word) &transform_hlds__unused_args_scalar_common_2[11], transform_hlds__unused_args__V_59_59);
          }
#line 1001 "unused_args.m"
        }
#line 1023 "unused_args.m"
        break;
#line 1023 "unused_args.m"
    }
#line 1031 "unused_args.m"
    if ((transform_hlds__unused_args__UnusedArgs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1030 "unused_args.m"
      {
#line 1030 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_47 = transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_0_46;
#line 1030 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_49 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48;
#line 1030 "unused_args.m"
      }
#line 1031 "unused_args.m"
    else
#line 1032 "unused_args.m"
      {
#line 1032 "unused_args.m"
        MR_Word transform_hlds__unused_args__PredStatus0_32;
#line 1032 "unused_args.m"
        MR_Word transform_hlds__unused_args__PredStatus_35;
#line 1032 "unused_args.m"
        MR_Word transform_hlds__unused_args__NewPredInfo0_36;
#line 1032 "unused_args.m"
        MR_String transform_hlds__unused_args__NewPredName_37;
#line 1032 "unused_args.m"
        MR_Word transform_hlds__unused_args__NewProcs0_38;
#line 1032 "unused_args.m"
        MR_Word transform_hlds__unused_args__NewProcs_39;
#line 1032 "unused_args.m"
        MR_Word transform_hlds__unused_args__NewPredInfo_40;
#line 1032 "unused_args.m"
        MR_Word transform_hlds__unused_args__PredTable0_41;
#line 1032 "unused_args.m"
        MR_Word transform_hlds__unused_args__NewPredId_42;
#line 1032 "unused_args.m"
        MR_Word transform_hlds__unused_args__PredTable_43;
#line 1032 "unused_args.m"
        MR_Word transform_hlds__unused_args__PredSymName_44;
#line 1032 "unused_args.m"
        MR_Word transform_hlds__unused_args__ForwardingProcInfo_45;
#line 1032 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65;
#line 1032 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_67_67;
#line 1032 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_69_69;
#line 1032 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_70_70;
#line 1035 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_60_60;
#line 1036 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_33_33;
#line 1036 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_34_34;
#line 1087 "unused_args.m"
        MR_Box transform_hlds__unused_args__conv4_STATE_VARIABLE_ModuleInfo_49;

#line 1033 "unused_args.m"
        {
#line 1033 "unused_args.m"
          hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__unused_args__OrigPredInfo_13, &transform_hlds__unused_args__PredStatus0_32);
        }
#line 1036 "unused_args.m"
        transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__IntermodResultsTriples_21)) == (MR_mktag((MR_Integer) 1)));
#line 1036 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1036 "unused_args.m"
          {
#line 1036 "unused_args.m"
            transform_hlds__unused_args__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__IntermodResultsTriples_21, (MR_Integer) 0)));
#line 1036 "unused_args.m"
            transform_hlds__unused_args__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__IntermodResultsTriples_21, (MR_Integer) 1)));
#line 1037 "unused_args.m"
            transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__IntermodOldArgLists_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1035 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1035 "unused_args.m"
              {
#line 1035 "unused_args.m"
                transform_hlds__unused_args__V_60_60 = (MR_Word) transform_hlds__unused_args__PredStatus0_32;
#line 1035 "unused_args.m"
                transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_60_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1035 "unused_args.m"
              }
#line 1036 "unused_args.m"
          }
#line 1044 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1043 "unused_args.m"
          transform_hlds__unused_args__PredStatus_35 = transform_hlds__unused_args__PredStatus0_32;
#line 1044 "unused_args.m"
        else
#line 1050 "unused_args.m"
          {
#line 1045 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_62_62;

#line 1045 "unused_args.m"
            {
#line 1045 "unused_args.m"
              transform_hlds__unused_args__V_62_62 = hlds__status__pred_status_is_exported_1_f_0(transform_hlds__unused_args__PredStatus0_32);
            }
#line 1045 "unused_args.m"
            transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_62_62 == (MR_Integer) 1);
#line 1050 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1049 "unused_args.m"
              transform_hlds__unused_args__PredStatus_35 = transform_hlds__unused_args__PredStatus0_32;
#line 1050 "unused_args.m"
            else
#line 1051 "unused_args.m"
              {
#line 1051 "unused_args.m"
                transform_hlds__unused_args__PredStatus_35 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 1051 "unused_args.m"
              }
#line 1050 "unused_args.m"
          }
#line 1053 "unused_args.m"
        {
#line 1053 "unused_args.m"
          transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(transform_hlds__unused_args__UnusedArgs_12, transform_hlds__unused_args__PredStatus_35, transform_hlds__unused_args__HeadVar__2_2, transform_hlds__unused_args__OrigPredInfo_13, &transform_hlds__unused_args__NewPredInfo0_36);
        }
#line 1055 "unused_args.m"
        {
#line 1055 "unused_args.m"
          transform_hlds__unused_args__NewPredName_37 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__unused_args__NewPredInfo0_36);
        }
#line 1056 "unused_args.m"
        {
#line 1056 "unused_args.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__unused_args__NewPredInfo0_36, &transform_hlds__unused_args__NewProcs0_38);
        }
#line 1060 "unused_args.m"
        {
#line 1060 "unused_args.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__unused_args__ProcId_9, ((MR_Box) (transform_hlds__unused_args__OrigProcInfo_14)), transform_hlds__unused_args__NewProcs0_38, &transform_hlds__unused_args__NewProcs_39);
        }
#line 1061 "unused_args.m"
        {
#line 1061 "unused_args.m"
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__unused_args__NewProcs_39, transform_hlds__unused_args__NewPredInfo0_36, &transform_hlds__unused_args__NewPredInfo_40);
        }
#line 1064 "unused_args.m"
        {
#line 1064 "unused_args.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48, &transform_hlds__unused_args__PredTable0_41);
        }
#line 1065 "unused_args.m"
        {
#line 1065 "unused_args.m"
          hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__unused_args__NewPredInfo_40, &transform_hlds__unused_args__NewPredId_42, transform_hlds__unused_args__PredTable0_41, &transform_hlds__unused_args__PredTable_43);
        }
#line 1066 "unused_args.m"
        {
#line 1066 "unused_args.m"
          hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__unused_args__PredTable_43, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65);
        }
#line 1069 "unused_args.m"
        {
#line 1069 "unused_args.m"
          transform_hlds__unused_args__PredSymName_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1069 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__PredSymName_44, 0) = ((MR_Box) (transform_hlds__unused_args__PredModule_15));
#line 1069 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__PredSymName_44, 1) = ((MR_Box) (transform_hlds__unused_args__NewPredName_37));
#line 1069 "unused_args.m"
        }
#line 1071 "unused_args.m"
        {
#line 1071 "unused_args.m"
          transform_hlds__unused_args__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1071 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_67_67, 0) = ((MR_Box) (transform_hlds__unused_args__NewPredId_42));
#line 1071 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_67_67, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_9));
#line 1071 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_67_67, 2) = ((MR_Box) (transform_hlds__unused_args__PredSymName_44));
#line 1071 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_67_67, 3) = ((MR_Box) (transform_hlds__unused_args__UnusedArgs_12));
#line 1071 "unused_args.m"
        }
#line 1070 "unused_args.m"
        {
#line 1070 "unused_args.m"
          mercury__map__det_insert_4_p_0(transform_hlds__unused_args__TypeCtorInfo_76_76, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0, ((MR_Box) (transform_hlds__unused_args__HeadVar__2_2)), ((MR_Box) (transform_hlds__unused_args__V_67_67)), transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_0_46, transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_47);
        }
#line 1075 "unused_args.m"
        {
#line 1075 "unused_args.m"
          transform_hlds__unused_args__create_call_goal_7_p_0(transform_hlds__unused_args__UnusedArgs_12, transform_hlds__unused_args__NewPredId_42, transform_hlds__unused_args__ProcId_9, transform_hlds__unused_args__PredModule_15, transform_hlds__unused_args__NewPredName_37, transform_hlds__unused_args__OrigProcInfo_14, &transform_hlds__unused_args__ForwardingProcInfo_45);
        }
#line 1077 "unused_args.m"
        {
#line 1077 "unused_args.m"
          hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__unused_args__PredId_8, transform_hlds__unused_args__ProcId_9, transform_hlds__unused_args__OrigPredInfo_13, transform_hlds__unused_args__ForwardingProcInfo_45, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_69_69);
        }
#line 1088 "unused_args.m"
        {
#line 1088 "unused_args.m"
          transform_hlds__unused_args__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 1088 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_70_70, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_8[0]));
#line 1088 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_70_70, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_4));
#line 1088 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1088 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_70_70, 3) = ((MR_Box) (transform_hlds__unused_args__PredId_8));
#line 1088 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_70_70, 4) = ((MR_Box) (transform_hlds__unused_args__NewPredId_42));
#line 1088 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_70_70, 5) = ((MR_Box) (transform_hlds__unused_args__ProcId_9));
#line 1088 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_70_70, 6) = ((MR_Box) (transform_hlds__unused_args__NewPredName_37));
#line 1088 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_70_70, 7) = ((MR_Box) (transform_hlds__unused_args__OrigPredInfo_13));
#line 1088 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_70_70, 8) = ((MR_Box) (transform_hlds__unused_args__OrigProcInfo_14));
#line 1088 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_70_70, 9) = ((MR_Box) (transform_hlds__unused_args__UnusedArgs_12));
#line 1088 "unused_args.m"
        }
#line 1087 "unused_args.m"
        {
#line 1087 "unused_args.m"
          mercury__list__foldl_4_p_0(transform_hlds__unused_args__TypeInfo_77_77, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__unused_args__V_70_70, transform_hlds__unused_args__IntermodOldArgLists_29, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_69_69)), &transform_hlds__unused_args__conv4_STATE_VARIABLE_ModuleInfo_49);
        }
#line 1087 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_49 = ((MR_Word) transform_hlds__unused_args__conv4_STATE_VARIABLE_ModuleInfo_49);
#line 1032 "unused_args.m"
      }
#line 992 "unused_args.m"
  }
#line 987 "unused_args.m"
}

#line 951 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__get_unused_arg_info_5_p_0(
#line 951 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_1,
#line 951 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 951 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_3,
#line 951 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_0_4,
#line 951 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_5)
#line 951 "unused_args.m"
{
#line 954 "unused_args.m"
  while (MR_TRUE)
#line 954 "unused_args.m"
    {
#line 954 "unused_args.m"
      /* tailcall optimized into a loop */
#line 954 "unused_args.m"
      {
#line 954 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 954 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 954 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_5 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_0_4;
#line 954 "unused_args.m"
        else
#line 956 "unused_args.m"
          {
#line 956 "unused_args.m"
            MR_Word transform_hlds__unused_args__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 956 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredProcId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 956 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredProcIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 956 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredProcId_12, (MR_Integer) 0)));
#line 956 "unused_args.m"
            MR_Integer transform_hlds__unused_args__ProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredProcId_12, (MR_Integer) 1)));
#line 956 "unused_args.m"
            MR_Word transform_hlds__unused_args__LocalVarUsage_18;
#line 956 "unused_args.m"
            MR_Word transform_hlds__unused_args__ProcInfo_20;
#line 956 "unused_args.m"
            MR_Word transform_hlds__unused_args__HeadVars_21;
#line 956 "unused_args.m"
            MR_Word transform_hlds__unused_args__UnusedArgs_22;
#line 956 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_26_26;
#line 958 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv0_LocalVarUsage_18;
#line 959 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_19_19;

#line 958 "unused_args.m"
            {
#line 958 "unused_args.m"
              mercury__map__lookup_3_p_0(transform_hlds__unused_args__TypeCtorInfo_28_28, (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], transform_hlds__unused_args__VarUsage_3, ((MR_Box) (transform_hlds__unused_args__PredProcId_12)), &transform_hlds__unused_args__conv0_LocalVarUsage_18);
            }
#line 958 "unused_args.m"
            transform_hlds__unused_args__LocalVarUsage_18 = ((MR_Word) transform_hlds__unused_args__conv0_LocalVarUsage_18);
#line 959 "unused_args.m"
            {
#line 959 "unused_args.m"
              hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__unused_args__ModuleInfo_1, transform_hlds__unused_args__PredId_16, transform_hlds__unused_args__ProcId_17, &transform_hlds__unused_args__V_19_19, &transform_hlds__unused_args__ProcInfo_20);
            }
#line 960 "unused_args.m"
            {
#line 960 "unused_args.m"
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__ProcInfo_20, &transform_hlds__unused_args__HeadVars_21);
            }
#line 961 "unused_args.m"
            {
#line 961 "unused_args.m"
              transform_hlds__unused_args__get_unused_arg_nos_4_p_0(transform_hlds__unused_args__LocalVarUsage_18, transform_hlds__unused_args__HeadVars_21, (MR_Integer) 1, &transform_hlds__unused_args__UnusedArgs_22);
            }
#line 962 "unused_args.m"
            {
#line 962 "unused_args.m"
              mercury__map__det_insert_4_p_0(transform_hlds__unused_args__TypeCtorInfo_28_28, (MR_Word) &transform_hlds__unused_args_scalar_common_1[0], ((MR_Box) (transform_hlds__unused_args__PredProcId_12)), ((MR_Box) (transform_hlds__unused_args__UnusedArgs_22)), transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_0_4, &transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_26_26);
            }
#line 963 "unused_args.m"
            /* direct tailcall eliminated */
#line 963 "unused_args.m"
            {
#line 963 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__2__tmp_copy_2 = transform_hlds__unused_args__PredProcIds_13;
#line 963 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_0__tmp_copy_4 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_26_26;

#line 963 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_0_4 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_0__tmp_copy_4;
#line 963 "unused_args.m"
              transform_hlds__unused_args__HeadVar__2_2 = transform_hlds__unused_args__HeadVar__2__tmp_copy_2;
#line 963 "unused_args.m"
            }
#line 963 "unused_args.m"
            continue;
#line 956 "unused_args.m"
          }
#line 954 "unused_args.m"
      }
#line 954 "unused_args.m"
      break;
#line 954 "unused_args.m"
    }
#line 951 "unused_args.m"
}

#line 923 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_1(
#line 923 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 923 "unused_args.m"
{
#line 923 "unused_args.m"
  {
#line 923 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 923 "unused_args.m"
    MR_builtin_longjmp((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_0, 1);
#line 923 "unused_args.m"
  }
#line 923 "unused_args.m"
}

#line 923 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_3(
#line 923 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 923 "unused_args.m"
{
#line 923 "unused_args.m"
  {
#line 923 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 923 "unused_args.m"
    (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__Argument_34 = ((MR_Word) (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv1_Argument_34);
#line 923 "unused_args.m"
    {
#line 923 "unused_args.m"
      transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_2(transform_hlds__unused_args__env_ptr);
#line 923 "unused_args.m"
      return;
    }
#line 923 "unused_args.m"
  }
#line 923 "unused_args.m"
}

#line 923 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_2(
#line 923 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 923 "unused_args.m"
{
#line 923 "unused_args.m"
  {
#line 923 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 923 "unused_args.m"
    {
#line 556 "unused_args.m"
      MR_Word transform_hlds__unused_args__TypeInfo_10_49;
#line 556 "unused_args.m"
      MR_Word transform_hlds__unused_args__TypeCtorInfo_11_50;
#line 556 "unused_args.m"
      MR_Word transform_hlds__unused_args__UsageInfos_46;
#line 556 "unused_args.m"
      MR_Box transform_hlds__unused_args__conv2_UsageInfos_46;

#line 924 "unused_args.m"
      (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__PredProcId_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__Argument_34, (MR_Integer) 0)));
#line 924 "unused_args.m"
      (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgVar_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__Argument_34, (MR_Integer) 1)));
#line 556 "unused_args.m"
      {
#line 556 "unused_args.m"
        (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__VarUsage_1, ((MR_Box) ((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__PredProcId_23)), &transform_hlds__unused_args__conv2_UsageInfos_46);
      }
#line 556 "unused_args.m"
      if ((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
#line 556 "unused_args.m"
        {
#line 556 "unused_args.m"
          transform_hlds__unused_args__UsageInfos_46 = ((MR_Word) transform_hlds__unused_args__conv2_UsageInfos_46);
#line 556 "unused_args.m"
          (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_TRUE;
#line 556 "unused_args.m"
        }
#line 556 "unused_args.m"
      if ((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
#line 556 "unused_args.m"
        {
#line 13742 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__TypeInfo_10_49 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 13744 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__TypeCtorInfo_11_50 = (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0;
#line 557 "unused_args.m"
          {
#line 557 "unused_args.m"
            (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = mercury__map__contains_2_p_0(transform_hlds__unused_args__TypeInfo_10_49, transform_hlds__unused_args__TypeCtorInfo_11_50, transform_hlds__unused_args__UsageInfos_46, ((MR_Box) ((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgVar_24)));
          }
#line 556 "unused_args.m"
        }
#line 555 "unused_args.m"
      (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = !((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded);
#line 555 "unused_args.m"
      if ((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
#line 555 "unused_args.m"
        {
#line 555 "unused_args.m"
          transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_1(transform_hlds__unused_args__env_ptr);
#line 555 "unused_args.m"
          return;
        }
#line 923 "unused_args.m"
    }
#line 923 "unused_args.m"
  }
#line 923 "unused_args.m"
}

#line 923 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_4(
#line 923 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 923 "unused_args.m"
{
#line 923 "unused_args.m"
  {
#line 923 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 923 "unused_args.m"
    if (MR_builtin_setjmp((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_0) == 0)
#line 923 "unused_args.m"
      {
#line 923 "unused_args.m"
        {
#line 923 "unused_args.m"
          {
#line 923 "unused_args.m"
            mercury__set__member_2_p_1((MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0, &(transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv1_Argument_34, (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgDep0_21, transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_3, transform_hlds__unused_args__env_ptr);
          }
#line 923 "unused_args.m"
        }
#line 923 "unused_args.m"
        (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_FALSE;
#line 923 "unused_args.m"
      }
#line 923 "unused_args.m"
    else
#line 923 "unused_args.m"
      (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_TRUE;
#line 923 "unused_args.m"
  }
#line 923 "unused_args.m"
}

#line 931 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_5(
#line 931 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 931 "unused_args.m"
{
#line 931 "unused_args.m"
  {
#line 931 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 931 "unused_args.m"
    MR_builtin_longjmp((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_1, 1);
#line 931 "unused_args.m"
  }
#line 931 "unused_args.m"
}

#line 931 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_7(
#line 931 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 931 "unused_args.m"
{
#line 931 "unused_args.m"
  {
#line 931 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 931 "unused_args.m"
    (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__X_35 = ((MR_Word) (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv3_X_35);
#line 931 "unused_args.m"
    {
#line 931 "unused_args.m"
      transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_6(transform_hlds__unused_args__env_ptr);
#line 931 "unused_args.m"
      return;
    }
#line 931 "unused_args.m"
  }
#line 931 "unused_args.m"
}

#line 931 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_6(
#line 931 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 931 "unused_args.m"
{
#line 931 "unused_args.m"
  {
#line 931 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 931 "unused_args.m"
    {
#line 563 "unused_args.m"
      {
#line 563 "unused_args.m"
        (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = mercury__map__contains_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5, ((MR_Box) ((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__X_35)));
      }
#line 563 "unused_args.m"
      (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = !((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded);
#line 563 "unused_args.m"
      if ((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
#line 563 "unused_args.m"
        {
#line 563 "unused_args.m"
          transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_5(transform_hlds__unused_args__env_ptr);
#line 563 "unused_args.m"
          return;
        }
#line 931 "unused_args.m"
    }
#line 931 "unused_args.m"
  }
#line 931 "unused_args.m"
}

#line 931 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_8(
#line 931 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 931 "unused_args.m"
{
#line 931 "unused_args.m"
  {
#line 931 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 931 "unused_args.m"
    if (MR_builtin_setjmp((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_1) == 0)
#line 931 "unused_args.m"
      {
#line 931 "unused_args.m"
        {
#line 931 "unused_args.m"
          {
#line 931 "unused_args.m"
            mercury__set__member_2_p_1((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], &(transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv3_X_35, (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__VarDep0_20, transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_7, transform_hlds__unused_args__env_ptr);
          }
#line 931 "unused_args.m"
        }
#line 931 "unused_args.m"
        (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_FALSE;
#line 931 "unused_args.m"
      }
#line 931 "unused_args.m"
    else
#line 931 "unused_args.m"
      (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_TRUE;
#line 931 "unused_args.m"
  }
#line 931 "unused_args.m"
}

#line 911 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0(
#line 911 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_1,
#line 911 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 911 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_3,
#line 911 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_4,
#line 911 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_LocalVars_0_5,
#line 911 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_LocalVars_6)
#line 911 "unused_args.m"
{
#line 911 "unused_args.m"
  {
#line 911 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s transform_hlds__unused_args__env;

#line 911 "unused_args.m"
    (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__VarUsage_1 = transform_hlds__unused_args__VarUsage_1;
#line 911 "unused_args.m"
    (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5 = transform_hlds__unused_args__STATE_VARIABLE_LocalVars_0_5;
#line 914 "unused_args.m"
    while (MR_TRUE)
#line 914 "unused_args.m"
      {
#line 914 "unused_args.m"
        /* tailcall optimized into a loop */
#line 914 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 914 "unused_args.m"
          {
#line 914 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_LocalVars_6 = (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5;
#line 914 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_Changed_4 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_3;
#line 914 "unused_args.m"
          }
#line 914 "unused_args.m"
        else
#line 915 "unused_args.m"
          {
#line 915 "unused_args.m"
            MR_Word transform_hlds__unused_args__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 915 "unused_args.m"
            MR_Word transform_hlds__unused_args__Vars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 915 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_LocalVars_30_30;
#line 915 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_31_31;
#line 946 "unused_args.m"
            MR_Word transform_hlds__unused_args__Usage_19;
#line 595 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv0_Usage_19;

#line 595 "unused_args.m"
            {
#line 595 "unused_args.m"
              (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5, ((MR_Box) (transform_hlds__unused_args__Var_15)), &transform_hlds__unused_args__conv0_Usage_19);
            }
#line 595 "unused_args.m"
            if ((transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
#line 595 "unused_args.m"
              {
#line 595 "unused_args.m"
                transform_hlds__unused_args__Usage_19 = ((MR_Word) transform_hlds__unused_args__conv0_Usage_19);
#line 595 "unused_args.m"
                (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_TRUE;
#line 595 "unused_args.m"
              }
#line 946 "unused_args.m"
            if ((transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
#line 917 "unused_args.m"
              {
#line 917 "unused_args.m"
                (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__VarDep0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Usage_19, (MR_Integer) 0)));
#line 917 "unused_args.m"
                (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgDep0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Usage_19, (MR_Integer) 1)));
#line 923 "unused_args.m"
                {
#line 923 "unused_args.m"
                  transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_4(&transform_hlds__unused_args__env);
                }
#line 927 "unused_args.m"
                if (!((transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded))
#line 931 "unused_args.m"
                  {
#line 931 "unused_args.m"
                    {
#line 931 "unused_args.m"
                      transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_8(&transform_hlds__unused_args__env);
                    }
#line 931 "unused_args.m"
                  }
#line 943 "unused_args.m"
                if ((transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
#line 941 "unused_args.m"
                  {
#line 589 "unused_args.m"
                    {
#line 589 "unused_args.m"
                      mercury__map__delete_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, ((MR_Box) (transform_hlds__unused_args__Var_15)), (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5, &transform_hlds__unused_args__STATE_VARIABLE_LocalVars_30_30);
                    }
#line 942 "unused_args.m"
                    transform_hlds__unused_args__STATE_VARIABLE_Changed_31_31 = (MR_Integer) 1;
#line 941 "unused_args.m"
                  }
#line 943 "unused_args.m"
                else
#line 944 "unused_args.m"
                  {
#line 944 "unused_args.m"
                    transform_hlds__unused_args__STATE_VARIABLE_LocalVars_30_30 = (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5;
#line 944 "unused_args.m"
                    transform_hlds__unused_args__STATE_VARIABLE_Changed_31_31 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_3;
#line 944 "unused_args.m"
                  }
#line 917 "unused_args.m"
              }
#line 946 "unused_args.m"
            else
#line 947 "unused_args.m"
              {
#line 947 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_LocalVars_30_30 = (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5;
#line 947 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_Changed_31_31 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_3;
#line 947 "unused_args.m"
              }
#line 949 "unused_args.m"
            /* direct tailcall eliminated */
#line 949 "unused_args.m"
            {
#line 949 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__2__tmp_copy_2 = transform_hlds__unused_args__Vars_16;
#line 949 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0__tmp_copy_3 = transform_hlds__unused_args__STATE_VARIABLE_Changed_31_31;
#line 949 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_LocalVars_0__tmp_copy_5 = transform_hlds__unused_args__STATE_VARIABLE_LocalVars_30_30;

#line 949 "unused_args.m"
              (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5 = transform_hlds__unused_args__STATE_VARIABLE_LocalVars_0__tmp_copy_5;
#line 949 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_0_3 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0__tmp_copy_3;
#line 949 "unused_args.m"
              transform_hlds__unused_args__HeadVar__2_2 = transform_hlds__unused_args__HeadVar__2__tmp_copy_2;
#line 949 "unused_args.m"
            }
#line 949 "unused_args.m"
            continue;
#line 915 "unused_args.m"
          }
#line 914 "unused_args.m"
        break;
#line 914 "unused_args.m"
      }
#line 911 "unused_args.m"
  }
#line 911 "unused_args.m"
}

#line 883 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_single_pass_5_p_0(
#line 883 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 883 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_2,
#line 883 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_3,
#line 883 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4,
#line 883 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_5)
#line 883 "unused_args.m"
{
#line 886 "unused_args.m"
  while (MR_TRUE)
#line 886 "unused_args.m"
    {
#line 886 "unused_args.m"
      /* tailcall optimized into a loop */
#line 886 "unused_args.m"
      {
#line 886 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 886 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 886 "unused_args.m"
          {
#line 886 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_VarUsage_5 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4;
#line 886 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_Changed_3 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_2;
#line 886 "unused_args.m"
          }
#line 886 "unused_args.m"
        else
#line 887 "unused_args.m"
          {
#line 887 "unused_args.m"
            MR_Word transform_hlds__unused_args__TypeCtorInfo_20_38 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 887 "unused_args.m"
            MR_Word transform_hlds__unused_args__TypeInfo_21_39 = (MR_Word) &transform_hlds__unused_args_scalar_common_2[1];
#line 887 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredProcId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 887 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredProcIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 887 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_20_20;
#line 887 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_21_21;
#line 887 "unused_args.m"
            MR_Word transform_hlds__unused_args__LocalUsages0_31;
#line 887 "unused_args.m"
            MR_Word transform_hlds__unused_args__Vars_32;
#line 887 "unused_args.m"
            MR_Word transform_hlds__unused_args__LocalChanged_33;
#line 887 "unused_args.m"
            MR_Word transform_hlds__unused_args__LocalUsages_34;
#line 897 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv0_LocalUsages0_31;

#line 897 "unused_args.m"
            {
#line 897 "unused_args.m"
              mercury__map__lookup_3_p_0(transform_hlds__unused_args__TypeCtorInfo_20_38, transform_hlds__unused_args__TypeInfo_21_39, transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4, ((MR_Box) (transform_hlds__unused_args__PredProcId_12)), &transform_hlds__unused_args__conv0_LocalUsages0_31);
            }
#line 897 "unused_args.m"
            transform_hlds__unused_args__LocalUsages0_31 = ((MR_Word) transform_hlds__unused_args__conv0_LocalUsages0_31);
#line 898 "unused_args.m"
            {
#line 898 "unused_args.m"
              mercury__map__keys_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__LocalUsages0_31, &transform_hlds__unused_args__Vars_32);
            }
#line 899 "unused_args.m"
            {
#line 899 "unused_args.m"
              transform_hlds__unused_args__unused_args_check_all_vars_6_p_0(transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4, transform_hlds__unused_args__Vars_32, (MR_Integer) 0, &transform_hlds__unused_args__LocalChanged_33, transform_hlds__unused_args__LocalUsages0_31, &transform_hlds__unused_args__LocalUsages_34);
            }
#line 905 "unused_args.m"
#line 905 "unused_args.m"
            switch (transform_hlds__unused_args__LocalChanged_33) {
#line 905 "unused_args.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 905 "unused_args.m"
              case (MR_Integer) 0:
#line 906 "unused_args.m"
                {
#line 906 "unused_args.m"
                  transform_hlds__unused_args__STATE_VARIABLE_Changed_20_20 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_2;
#line 906 "unused_args.m"
                  transform_hlds__unused_args__STATE_VARIABLE_VarUsage_21_21 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4;
#line 906 "unused_args.m"
                }
#line 905 "unused_args.m"
                break;
#line 905 "unused_args.m"
              case (MR_Integer) 1:
#line 902 "unused_args.m"
                {
#line 903 "unused_args.m"
                  {
#line 903 "unused_args.m"
                    mercury__map__det_update_4_p_0(transform_hlds__unused_args__TypeCtorInfo_20_38, transform_hlds__unused_args__TypeInfo_21_39, ((MR_Box) (transform_hlds__unused_args__PredProcId_12)), ((MR_Box) (transform_hlds__unused_args__LocalUsages_34)), transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4, &transform_hlds__unused_args__STATE_VARIABLE_VarUsage_21_21);
                  }
#line 904 "unused_args.m"
                  transform_hlds__unused_args__STATE_VARIABLE_Changed_20_20 = (MR_Integer) 1;
#line 902 "unused_args.m"
                }
#line 905 "unused_args.m"
                break;
#line 905 "unused_args.m"
            }
#line 889 "unused_args.m"
            /* direct tailcall eliminated */
#line 889 "unused_args.m"
            {
#line 889 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__1__tmp_copy_1 = transform_hlds__unused_args__PredProcIds_13;
#line 889 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0__tmp_copy_2 = transform_hlds__unused_args__STATE_VARIABLE_Changed_20_20;
#line 889 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_4 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_21_21;

#line 889 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_4;
#line 889 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_0_2 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0__tmp_copy_2;
#line 889 "unused_args.m"
              transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__HeadVar__1__tmp_copy_1;
#line 889 "unused_args.m"
            }
#line 889 "unused_args.m"
            continue;
#line 887 "unused_args.m"
          }
#line 886 "unused_args.m"
      }
#line 886 "unused_args.m"
      break;
#line 886 "unused_args.m"
    }
#line 883 "unused_args.m"
}

#line 849 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(
#line 849 "unused_args.m"
  MR_Word transform_hlds__unused_args__Info_1,
#line 849 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 849 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3,
#line 849 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_4)
#line 849 "unused_args.m"
{
#line 852 "unused_args.m"
  while (MR_TRUE)
#line 852 "unused_args.m"
    {
#line 852 "unused_args.m"
      /* tailcall optimized into a loop */
#line 852 "unused_args.m"
      {
#line 852 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 852 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 852 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_VarDep_4 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3;
#line 852 "unused_args.m"
        else
#line 853 "unused_args.m"
          {
#line 853 "unused_args.m"
            MR_Word transform_hlds__unused_args__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 853 "unused_args.m"
            MR_Word transform_hlds__unused_args__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 853 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_15_15;

#line 854 "unused_args.m"
            {
#line 854 "unused_args.m"
              transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(transform_hlds__unused_args__Info_1, transform_hlds__unused_args__Goal_10, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_15_15);
            }
#line 855 "unused_args.m"
            /* direct tailcall eliminated */
#line 855 "unused_args.m"
            {
#line 855 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__2__tmp_copy_2 = transform_hlds__unused_args__Goals_11;
#line 855 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_3 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_15_15;

#line 855 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_3;
#line 855 "unused_args.m"
              transform_hlds__unused_args__HeadVar__2_2 = transform_hlds__unused_args__HeadVar__2__tmp_copy_2;
#line 855 "unused_args.m"
            }
#line 855 "unused_args.m"
            continue;
#line 853 "unused_args.m"
          }
#line 852 "unused_args.m"
      }
#line 852 "unused_args.m"
      break;
#line 852 "unused_args.m"
    }
#line 849 "unused_args.m"
}

#line 843 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__list_case_to_list_goal_2_p_0(
#line 843 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 843 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2)
#line 843 "unused_args.m"
{
#line 845 "unused_args.m"
  {
#line 845 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 845 "unused_args.m"
    if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 845 "unused_args.m"
      *transform_hlds__unused_args__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 845 "unused_args.m"
    else
#line 846 "unused_args.m"
      {
#line 846 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal_5;
#line 846 "unused_args.m"
        MR_Word transform_hlds__unused_args__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 846 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goals_7;
#line 846 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 846 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_8_8, (MR_Integer) 0)));
#line 846 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_8_8, (MR_Integer) 1)));

#line 846 "unused_args.m"
        transform_hlds__unused_args__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_8_8, (MR_Integer) 2)));
#line 847 "unused_args.m"
        {
#line 847 "unused_args.m"
          transform_hlds__unused_args__list_case_to_list_goal_2_p_0(transform_hlds__unused_args__Cases_6, &transform_hlds__unused_args__Goals_7);
        }
#line 846 "unused_args.m"
        {
#line 846 "unused_args.m"
          MR_Word base;
#line 846 "unused_args.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 846 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__2_2 = base;
#line 846 "unused_args.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__Goal_5));
#line 846 "unused_args.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__Goals_7));
#line 846 "unused_args.m"
        }
#line 846 "unused_args.m"
      }
#line 845 "unused_args.m"
  }
#line 843 "unused_args.m"
}

#line 828 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_construction_aliases_4_p_0(
#line 828 "unused_args.m"
  MR_Word transform_hlds__unused_args__Alias_1,
#line 828 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 828 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3,
#line 828 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_4)
#line 828 "unused_args.m"
{
#line 831 "unused_args.m"
  while (MR_TRUE)
#line 831 "unused_args.m"
    {
#line 831 "unused_args.m"
      /* tailcall optimized into a loop */
#line 831 "unused_args.m"
      {
#line 831 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 831 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 831 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_VarDep_4 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3;
#line 831 "unused_args.m"
        else
#line 832 "unused_args.m"
          {
#line 832 "unused_args.m"
            MR_Word transform_hlds__unused_args__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 832 "unused_args.m"
            MR_Word transform_hlds__unused_args__Vars_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 832 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_19_19;
#line 838 "unused_args.m"
            MR_Word transform_hlds__unused_args__VarInfo0_13;
#line 595 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv0_VarInfo0_13;

#line 595 "unused_args.m"
            {
#line 595 "unused_args.m"
              transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3, ((MR_Box) (transform_hlds__unused_args__Var_10)), &transform_hlds__unused_args__conv0_VarInfo0_13);
            }
#line 595 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 595 "unused_args.m"
              {
#line 595 "unused_args.m"
                transform_hlds__unused_args__VarInfo0_13 = ((MR_Word) transform_hlds__unused_args__conv0_VarInfo0_13);
#line 595 "unused_args.m"
                transform_hlds__unused_args__succeeded = MR_TRUE;
#line 595 "unused_args.m"
              }
#line 838 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 834 "unused_args.m"
              {
#line 834 "unused_args.m"
                MR_Word transform_hlds__unused_args__TypeInfo_21_21 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 834 "unused_args.m"
                MR_Word transform_hlds__unused_args__VarDep_12;
#line 834 "unused_args.m"
                MR_Word transform_hlds__unused_args__VarDep0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInfo0_13, (MR_Integer) 0)));
#line 834 "unused_args.m"
                MR_Word transform_hlds__unused_args__ArgDep_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInfo0_13, (MR_Integer) 1)));
#line 834 "unused_args.m"
                MR_Word transform_hlds__unused_args__VarInfo_16;

#line 835 "unused_args.m"
                {
#line 835 "unused_args.m"
                  mercury__set__insert_3_p_0(transform_hlds__unused_args__TypeInfo_21_21, ((MR_Box) (transform_hlds__unused_args__Alias_1)), transform_hlds__unused_args__VarDep0_14, &transform_hlds__unused_args__VarDep_12);
                }
#line 836 "unused_args.m"
                {
#line 836 "unused_args.m"
                  transform_hlds__unused_args__VarInfo_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 836 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInfo_16, 0) = ((MR_Box) (transform_hlds__unused_args__VarDep_12));
#line 836 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInfo_16, 1) = ((MR_Box) (transform_hlds__unused_args__ArgDep_15));
#line 836 "unused_args.m"
                }
#line 837 "unused_args.m"
                {
#line 837 "unused_args.m"
                  mercury__map__set_4_p_0(transform_hlds__unused_args__TypeInfo_21_21, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, ((MR_Box) (transform_hlds__unused_args__Var_10)), ((MR_Box) (transform_hlds__unused_args__VarInfo_16)), transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_19_19);
                }
#line 834 "unused_args.m"
              }
#line 838 "unused_args.m"
            else
#line 838 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarDep_19_19 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3;
#line 841 "unused_args.m"
            /* direct tailcall eliminated */
#line 841 "unused_args.m"
            {
#line 841 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__2__tmp_copy_2 = transform_hlds__unused_args__Vars_11;
#line 841 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_3 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_19_19;

#line 841 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_3;
#line 841 "unused_args.m"
              transform_hlds__unused_args__HeadVar__2_2 = transform_hlds__unused_args__HeadVar__2__tmp_copy_2;
#line 841 "unused_args.m"
            }
#line 841 "unused_args.m"
            continue;
#line 832 "unused_args.m"
          }
#line 831 "unused_args.m"
      }
#line 831 "unused_args.m"
      break;
#line 831 "unused_args.m"
    }
#line 828 "unused_args.m"
}

#line 778 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__partition_deconstruct_args_5_p_0(
#line 778 "unused_args.m"
  MR_Word transform_hlds__unused_args__Info_6,
#line 778 "unused_args.m"
  MR_Word transform_hlds__unused_args__ArgVars_7,
#line 778 "unused_args.m"
  MR_Word transform_hlds__unused_args__ArgModes_8,
#line 778 "unused_args.m"
  MR_Word * transform_hlds__unused_args__InputVars_9,
#line 778 "unused_args.m"
  MR_Word * transform_hlds__unused_args__OutputVars_10)
#line 778 "unused_args.m"
{
#line 783 "unused_args.m"
  {
#line 783 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 783 "unused_args.m"
    if ((transform_hlds__unused_args__ArgVars_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 783 "unused_args.m"
      if ((transform_hlds__unused_args__ArgModes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 783 "unused_args.m"
        {
#line 785 "unused_args.m"
          *transform_hlds__unused_args__InputVars_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 786 "unused_args.m"
          *transform_hlds__unused_args__OutputVars_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 783 "unused_args.m"
        }
#line 783 "unused_args.m"
      else
#line 788 "unused_args.m"
        {
#line 790 "unused_args.m"
          {
#line 790 "unused_args.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.partition_deconstruct_args\'/5", (MR_String) "mismatched lists");
#line 790 "unused_args.m"
            return;
          }
#line 788 "unused_args.m"
        }
#line 783 "unused_args.m"
    else
#line 783 "unused_args.m"
      {
#line 783 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__ArgVars_7, (MR_Integer) 1)));
#line 783 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__ArgVars_7, (MR_Integer) 0)));

#line 783 "unused_args.m"
        if ((transform_hlds__unused_args__ArgModes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 792 "unused_args.m"
          {
#line 794 "unused_args.m"
            {
#line 794 "unused_args.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.partition_deconstruct_args\'/5", (MR_String) "mismatched lists");
#line 794 "unused_args.m"
              return;
            }
#line 792 "unused_args.m"
          }
#line 783 "unused_args.m"
        else
#line 796 "unused_args.m"
          {
#line 796 "unused_args.m"
            MR_Word transform_hlds__unused_args__Mode_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__ArgModes_8, (MR_Integer) 0)));
#line 796 "unused_args.m"
            MR_Word transform_hlds__unused_args__Modes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__ArgModes_8, (MR_Integer) 1)));
#line 796 "unused_args.m"
            MR_Word transform_hlds__unused_args__InputVars1_19;
#line 796 "unused_args.m"
            MR_Word transform_hlds__unused_args__OutputVars1_20;
#line 796 "unused_args.m"
            MR_Word transform_hlds__unused_args__InitialInst1_21;
#line 796 "unused_args.m"
            MR_Word transform_hlds__unused_args__InitialInst2_22;
#line 796 "unused_args.m"
            MR_Word transform_hlds__unused_args__FinalInst1_23;
#line 796 "unused_args.m"
            MR_Word transform_hlds__unused_args__FinalInst2_24;
#line 796 "unused_args.m"
            MR_Word transform_hlds__unused_args__Type_25;
#line 796 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_26_26;
#line 796 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_27_27;
#line 796 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_28_28;
#line 801 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_37_37;
#line 806 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_29_29;
#line 806 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_38_38;
#line 817 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_30_30;
#line 817 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_39_39;

#line 798 "unused_args.m"
            {
#line 798 "unused_args.m"
              transform_hlds__unused_args__partition_deconstruct_args_5_p_0(transform_hlds__unused_args__Info_6, transform_hlds__unused_args__V_40_40, transform_hlds__unused_args__Modes_18, &transform_hlds__unused_args__InputVars1_19, &transform_hlds__unused_args__OutputVars1_20);
            }
#line 799 "unused_args.m"
            transform_hlds__unused_args__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Mode_17, (MR_Integer) 0)));
#line 799 "unused_args.m"
            transform_hlds__unused_args__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Mode_17, (MR_Integer) 1)));
#line 799 "unused_args.m"
            transform_hlds__unused_args__InitialInst1_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_26_26, (MR_Integer) 0)));
#line 799 "unused_args.m"
            transform_hlds__unused_args__InitialInst2_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_26_26, (MR_Integer) 1)));
#line 799 "unused_args.m"
            transform_hlds__unused_args__FinalInst1_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_27_27, (MR_Integer) 0)));
#line 799 "unused_args.m"
            transform_hlds__unused_args__FinalInst2_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_27_27, (MR_Integer) 1)));
#line 801 "unused_args.m"
            transform_hlds__unused_args__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_6, (MR_Integer) 0)));
#line 801 "unused_args.m"
            transform_hlds__unused_args__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_6, (MR_Integer) 1)));
#line 801 "unused_args.m"
            {
#line 801 "unused_args.m"
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__unused_args__V_28_28, transform_hlds__unused_args__V_41_41, &transform_hlds__unused_args__Type_25);
            }
#line 806 "unused_args.m"
            transform_hlds__unused_args__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_6, (MR_Integer) 0)));
#line 806 "unused_args.m"
            transform_hlds__unused_args__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_6, (MR_Integer) 1)));
#line 806 "unused_args.m"
            {
#line 806 "unused_args.m"
              transform_hlds__unused_args__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(transform_hlds__unused_args__InitialInst1_21, transform_hlds__unused_args__FinalInst1_23, transform_hlds__unused_args__Type_25, transform_hlds__unused_args__V_29_29);
            }
#line 810 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 809 "unused_args.m"
              *transform_hlds__unused_args__InputVars_9 = transform_hlds__unused_args__InputVars1_19;
#line 810 "unused_args.m"
            else
#line 811 "unused_args.m"
              {
#line 811 "unused_args.m"
                MR_Word base;
#line 811 "unused_args.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 811 "unused_args.m"
                *transform_hlds__unused_args__InputVars_9 = base;
#line 811 "unused_args.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__V_41_41));
#line 811 "unused_args.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__InputVars1_19));
#line 811 "unused_args.m"
              }
#line 817 "unused_args.m"
            transform_hlds__unused_args__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_6, (MR_Integer) 0)));
#line 817 "unused_args.m"
            transform_hlds__unused_args__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_6, (MR_Integer) 1)));
#line 817 "unused_args.m"
            {
#line 817 "unused_args.m"
              transform_hlds__unused_args__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(transform_hlds__unused_args__InitialInst2_22, transform_hlds__unused_args__FinalInst2_24, transform_hlds__unused_args__Type_25, transform_hlds__unused_args__V_30_30);
            }
#line 821 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 820 "unused_args.m"
              *transform_hlds__unused_args__OutputVars_10 = transform_hlds__unused_args__OutputVars1_20;
#line 821 "unused_args.m"
            else
#line 822 "unused_args.m"
              {
#line 822 "unused_args.m"
                MR_Word base;
#line 822 "unused_args.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 822 "unused_args.m"
                *transform_hlds__unused_args__OutputVars_10 = base;
#line 822 "unused_args.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__V_41_41));
#line 822 "unused_args.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__OutputVars1_20));
#line 822 "unused_args.m"
              }
#line 796 "unused_args.m"
          }
#line 783 "unused_args.m"
      }
#line 783 "unused_args.m"
  }
#line 778 "unused_args.m"
}

#line 769 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_rev_arg_dep_5_p_0(
#line 769 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_6,
#line 769 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcId_7,
#line 769 "unused_args.m"
  MR_Word transform_hlds__unused_args__Arg_8,
#line 769 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_10,
#line 769 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_11)
#line 769 "unused_args.m"
{
#line 765 "unused_args.m"
  {
#line 765 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 765 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarUsage0_19;
#line 595 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv0_VarUsage0_19;

#line 595 "unused_args.m"
    {
#line 595 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_10, ((MR_Box) (transform_hlds__unused_args__Arg_8)), &transform_hlds__unused_args__conv0_VarUsage0_19);
    }
#line 595 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 595 "unused_args.m"
      {
#line 595 "unused_args.m"
        transform_hlds__unused_args__VarUsage0_19 = ((MR_Word) transform_hlds__unused_args__conv0_VarUsage0_19);
#line 595 "unused_args.m"
        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 595 "unused_args.m"
      }
#line 765 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 761 "unused_args.m"
      {
#line 761 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarDep_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage0_19, (MR_Integer) 0)));
#line 761 "unused_args.m"
        MR_Word transform_hlds__unused_args__ArgDep0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage0_19, (MR_Integer) 1)));
#line 761 "unused_args.m"
        MR_Word transform_hlds__unused_args__ArgDep_21;
#line 761 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarUsage_22;
#line 761 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_23_23;

#line 762 "unused_args.m"
        {
#line 762 "unused_args.m"
          transform_hlds__unused_args__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 762 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_23_23, 0) = ((MR_Box) (transform_hlds__unused_args__PredProcId_7));
#line 762 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_23_23, 1) = ((MR_Box) (transform_hlds__unused_args__Var_6));
#line 762 "unused_args.m"
        }
#line 762 "unused_args.m"
        {
#line 762 "unused_args.m"
          mercury__set__insert_3_p_0((MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0, ((MR_Box) (transform_hlds__unused_args__V_23_23)), transform_hlds__unused_args__ArgDep0_20, &transform_hlds__unused_args__ArgDep_21);
        }
#line 763 "unused_args.m"
        {
#line 763 "unused_args.m"
          transform_hlds__unused_args__VarUsage_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 763 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage_22, 0) = ((MR_Box) (transform_hlds__unused_args__VarDep_18));
#line 763 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage_22, 1) = ((MR_Box) (transform_hlds__unused_args__ArgDep_21));
#line 763 "unused_args.m"
        }
#line 764 "unused_args.m"
        {
#line 764 "unused_args.m"
          mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, ((MR_Box) (transform_hlds__unused_args__Arg_8)), ((MR_Box) (transform_hlds__unused_args__VarUsage_22)), transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_10, transform_hlds__unused_args__STATE_VARIABLE_VarDep_11);
#line 764 "unused_args.m"
          return;
        }
#line 761 "unused_args.m"
      }
#line 765 "unused_args.m"
    else
#line 765 "unused_args.m"
      *transform_hlds__unused_args__STATE_VARIABLE_VarDep_11 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_10;
#line 765 "unused_args.m"
  }
#line 769 "unused_args.m"
}

#line 734 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_pred_call_arg_dep_5_p_0(
#line 734 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcId_6,
#line 734 "unused_args.m"
  MR_Word transform_hlds__unused_args__LocalArguments_7,
#line 734 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVarIds_8,
#line 734 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_18,
#line 734 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_19)
#line 734 "unused_args.m"
{
#line 739 "unused_args.m"
  while (MR_TRUE)
#line 739 "unused_args.m"
    {
#line 739 "unused_args.m"
      /* tailcall optimized into a loop */
#line 739 "unused_args.m"
      {
#line 739 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 739 "unused_args.m"
        if ((transform_hlds__unused_args__LocalArguments_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 739 "unused_args.m"
          if ((transform_hlds__unused_args__HeadVarIds_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 739 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_VarDep_19 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_18;
#line 739 "unused_args.m"
          else
#line 742 "unused_args.m"
            {
#line 744 "unused_args.m"
              {
#line 744 "unused_args.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.add_pred_call_arg_dep\'/5", (MR_String) "invalid call");
#line 744 "unused_args.m"
                return;
              }
#line 742 "unused_args.m"
            }
#line 739 "unused_args.m"
        else
#line 739 "unused_args.m"
          {
#line 739 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__LocalArguments_7, (MR_Integer) 1)));
#line 739 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__LocalArguments_7, (MR_Integer) 0)));

#line 739 "unused_args.m"
            if ((transform_hlds__unused_args__HeadVarIds_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 746 "unused_args.m"
              {
#line 748 "unused_args.m"
                {
#line 748 "unused_args.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.add_pred_call_arg_dep\'/5", (MR_String) "invalid call");
#line 748 "unused_args.m"
                  return;
                }
#line 746 "unused_args.m"
              }
#line 739 "unused_args.m"
            else
#line 750 "unused_args.m"
              {
#line 750 "unused_args.m"
                MR_Word transform_hlds__unused_args__HeadVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVarIds_8, (MR_Integer) 0)));
#line 750 "unused_args.m"
                MR_Word transform_hlds__unused_args__HeadVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVarIds_8, (MR_Integer) 1)));
#line 750 "unused_args.m"
                MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_20_20;
#line 765 "unused_args.m"
                MR_Word transform_hlds__unused_args__VarUsage0_36;
#line 595 "unused_args.m"
                MR_Box transform_hlds__unused_args__conv0_VarUsage0_36;

#line 595 "unused_args.m"
                {
#line 595 "unused_args.m"
                  transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_18, ((MR_Box) (transform_hlds__unused_args__V_29_29)), &transform_hlds__unused_args__conv0_VarUsage0_36);
                }
#line 595 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 595 "unused_args.m"
                  {
#line 595 "unused_args.m"
                    transform_hlds__unused_args__VarUsage0_36 = ((MR_Word) transform_hlds__unused_args__conv0_VarUsage0_36);
#line 595 "unused_args.m"
                    transform_hlds__unused_args__succeeded = MR_TRUE;
#line 595 "unused_args.m"
                  }
#line 765 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 761 "unused_args.m"
                  {
#line 761 "unused_args.m"
                    MR_Word transform_hlds__unused_args__VarDep_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage0_36, (MR_Integer) 0)));
#line 761 "unused_args.m"
                    MR_Word transform_hlds__unused_args__ArgDep0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage0_36, (MR_Integer) 1)));
#line 761 "unused_args.m"
                    MR_Word transform_hlds__unused_args__ArgDep_38;
#line 761 "unused_args.m"
                    MR_Word transform_hlds__unused_args__VarUsage_39;
#line 761 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_40_40;

#line 762 "unused_args.m"
                    {
#line 762 "unused_args.m"
                      transform_hlds__unused_args__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 762 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_40_40, 0) = ((MR_Box) (transform_hlds__unused_args__PredProcId_6));
#line 762 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_40_40, 1) = ((MR_Box) (transform_hlds__unused_args__HeadVar_16));
#line 762 "unused_args.m"
                    }
#line 762 "unused_args.m"
                    {
#line 762 "unused_args.m"
                      mercury__set__insert_3_p_0((MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0, ((MR_Box) (transform_hlds__unused_args__V_40_40)), transform_hlds__unused_args__ArgDep0_37, &transform_hlds__unused_args__ArgDep_38);
                    }
#line 763 "unused_args.m"
                    {
#line 763 "unused_args.m"
                      transform_hlds__unused_args__VarUsage_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 763 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage_39, 0) = ((MR_Box) (transform_hlds__unused_args__VarDep_35));
#line 763 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage_39, 1) = ((MR_Box) (transform_hlds__unused_args__ArgDep_38));
#line 763 "unused_args.m"
                    }
#line 764 "unused_args.m"
                    {
#line 764 "unused_args.m"
                      mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, ((MR_Box) (transform_hlds__unused_args__V_29_29)), ((MR_Box) (transform_hlds__unused_args__VarUsage_39)), transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_18, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_20_20);
                    }
#line 761 "unused_args.m"
                  }
#line 765 "unused_args.m"
                else
#line 765 "unused_args.m"
                  transform_hlds__unused_args__STATE_VARIABLE_VarDep_20_20 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_18;
#line 753 "unused_args.m"
                /* direct tailcall eliminated */
#line 753 "unused_args.m"
                {
#line 753 "unused_args.m"
                  MR_Word transform_hlds__unused_args__LocalArguments__tmp_copy_7 = transform_hlds__unused_args__V_28_28;
#line 753 "unused_args.m"
                  MR_Word transform_hlds__unused_args__HeadVarIds__tmp_copy_8 = transform_hlds__unused_args__HeadVars_17;
#line 753 "unused_args.m"
                  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_18 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_20_20;

#line 753 "unused_args.m"
                  transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_18 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_18;
#line 753 "unused_args.m"
                  transform_hlds__unused_args__HeadVarIds_8 = transform_hlds__unused_args__HeadVarIds__tmp_copy_8;
#line 753 "unused_args.m"
                  transform_hlds__unused_args__LocalArguments_7 = transform_hlds__unused_args__LocalArguments__tmp_copy_7;
#line 753 "unused_args.m"
                }
#line 753 "unused_args.m"
                continue;
#line 750 "unused_args.m"
              }
#line 739 "unused_args.m"
          }
#line 739 "unused_args.m"
      }
#line 739 "unused_args.m"
      break;
#line 739 "unused_args.m"
    }
#line 734 "unused_args.m"
}

#line 685 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_3(
#line 685 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg)
#line 685 "unused_args.m"
{
#line 685 "unused_args.m"
  {
#line 685 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 685 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;

#line 685 "unused_args.m"
    {
#line 685 "unused_args.m"
      return transform_hlds__unused_args__succeeded = transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__685__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))));
    }
#line 685 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 685 "unused_args.m"
  }
#line 685 "unused_args.m"
}

#line 703 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_2(
#line 703 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg)
#line 703 "unused_args.m"
{
#line 703 "unused_args.m"
  {
#line 703 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 703 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;

#line 703 "unused_args.m"
    {
#line 703 "unused_args.m"
      return transform_hlds__unused_args__succeeded = transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__703__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))));
    }
#line 703 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 703 "unused_args.m"
  }
#line 703 "unused_args.m"
}

#line 662 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_1(
#line 662 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 662 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 662 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2)
#line 662 "unused_args.m"
{
#line 662 "unused_args.m"
  {
#line 662 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 662 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 662 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__2_117;

#line 662 "unused_args.m"
    {
#line 662 "unused_args.m"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__662__1_2_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), &transform_hlds__unused_args__conv0_HeadVar__2_117);
    }
#line 662 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 662 "unused_args.m"
      {
#line 662 "unused_args.m"
        *transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__2_117));
#line 662 "unused_args.m"
        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 662 "unused_args.m"
      }
#line 662 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 662 "unused_args.m"
  }
#line 662 "unused_args.m"
}

#line 608 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(
#line 608 "unused_args.m"
  MR_Word transform_hlds__unused_args__Info_5,
#line 608 "unused_args.m"
  MR_Word transform_hlds__unused_args__Goal_6,
#line 608 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87,
#line 608 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_88)
#line 608 "unused_args.m"
{
#line 611 "unused_args.m"
  while (MR_TRUE)
#line 611 "unused_args.m"
    {
#line 611 "unused_args.m"
      /* tailcall optimized into a loop */
#line 611 "unused_args.m"
      {
#line 611 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;
#line 611 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_6, (MR_Integer) 0)));
#line 612 "unused_args.m"
        MR_Word transform_hlds__unused_args___GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_6, (MR_Integer) 1)));

#line 616 "unused_args.m"
#line 616 "unused_args.m"
        switch (MR_tag((MR_Word) transform_hlds__unused_args__GoalExpr_8)) {
#line 616 "unused_args.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 616 "unused_args.m"
          case (MR_Integer) 0:
#line 636 "unused_args.m"
            {
#line 636 "unused_args.m"
              MR_Word transform_hlds__unused_args__SubGoal_28 = (MR_Word) MR_body(((MR_Word) transform_hlds__unused_args__GoalExpr_8), (MR_Integer) 0);

#line 637 "unused_args.m"
              /* direct tailcall eliminated */
#line 637 "unused_args.m"
              {
#line 637 "unused_args.m"
                MR_Word transform_hlds__unused_args__Goal__tmp_copy_6 = transform_hlds__unused_args__SubGoal_28;

#line 637 "unused_args.m"
                transform_hlds__unused_args__Goal_6 = transform_hlds__unused_args__Goal__tmp_copy_6;
#line 637 "unused_args.m"
              }
#line 637 "unused_args.m"
              continue;
#line 636 "unused_args.m"
            }
#line 616 "unused_args.m"
            break;
#line 616 "unused_args.m"
          case (MR_Integer) 1:
#line 669 "unused_args.m"
            {
#line 669 "unused_args.m"
              MR_Word transform_hlds__unused_args__LHS_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 0)));
#line 669 "unused_args.m"
              MR_Word transform_hlds__unused_args__RHS_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));
#line 669 "unused_args.m"
              MR_Word transform_hlds__unused_args__Unify_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 3)));
#line 669 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));
#line 669 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 4)));

#line 674 "unused_args.m"
#line 674 "unused_args.m"
              switch (MR_tag((MR_Word) transform_hlds__unused_args__Unify_52)) {
#line 674 "unused_args.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 674 "unused_args.m"
                case (MR_Integer) 0:
#line 702 "unused_args.m"
                  {
#line 702 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_97_97;
#line 702 "unused_args.m"
                    MR_Word transform_hlds__unused_args__Args_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_52, (MR_Integer) 2)));
#line 702 "unused_args.m"
                    MR_Word transform_hlds__unused_args__CellVar_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_52, (MR_Integer) 0)));
#line 702 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_52, (MR_Integer) 1)));
#line 702 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_52, (MR_Integer) 3)));
#line 702 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_52, (MR_Integer) 4)));
#line 702 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_52, (MR_Integer) 5)));
#line 702 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_52, (MR_Integer) 6)));

#line 703 "unused_args.m"
                    {
#line 703 "unused_args.m"
                      transform_hlds__unused_args__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 703 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_97_97, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[3]));
#line 703 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_97_97, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_2));
#line 703 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_97_97, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 703 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_97_97, 3) = ((MR_Box) (transform_hlds__unused_args__LHS_49));
#line 703 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_97_97, 4) = ((MR_Box) (transform_hlds__unused_args__CellVar_144));
#line 703 "unused_args.m"
                    }
#line 703 "unused_args.m"
                    {
#line 703 "unused_args.m"
                      mercury__require__expect_4_p_0(transform_hlds__unused_args__V_97_97, (MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.unused_args_traverse_goal\'/4", (MR_String) "LHS != CellVar");
                    }
#line 704 "unused_args.m"
                    {
#line 704 "unused_args.m"
                      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__local_var_is_used_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__CellVar_144);
                    }
#line 706 "unused_args.m"
                    if (transform_hlds__unused_args__succeeded)
#line 705 "unused_args.m"
                      {
#line 705 "unused_args.m"
                        transform_hlds__unused_args__set_list_vars_used_3_p_0(transform_hlds__unused_args__Args_143, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
#line 705 "unused_args.m"
                        return;
                      }
#line 706 "unused_args.m"
                    else
#line 707 "unused_args.m"
                      {
#line 707 "unused_args.m"
                        transform_hlds__unused_args__add_construction_aliases_4_p_0(transform_hlds__unused_args__CellVar_144, transform_hlds__unused_args__Args_143, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
#line 707 "unused_args.m"
                        return;
                      }
#line 702 "unused_args.m"
                  }
#line 674 "unused_args.m"
                  break;
#line 674 "unused_args.m"
                case (MR_Integer) 1:
#line 684 "unused_args.m"
                  {
#line 684 "unused_args.m"
                    MR_Word transform_hlds__unused_args__CellVar_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_52, (MR_Integer) 0)));
#line 684 "unused_args.m"
                    MR_Word transform_hlds__unused_args__Modes_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_52, (MR_Integer) 3)));
#line 684 "unused_args.m"
                    MR_Word transform_hlds__unused_args__CanFail_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_52, (MR_Integer) 4)));
#line 684 "unused_args.m"
                    MR_Word transform_hlds__unused_args__InputVars_63;
#line 684 "unused_args.m"
                    MR_Word transform_hlds__unused_args__OutputVars_64;
#line 684 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_103_103;
#line 684 "unused_args.m"
                    MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_107_107;
#line 684 "unused_args.m"
                    MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_108_108;
#line 684 "unused_args.m"
                    MR_Word transform_hlds__unused_args__Args_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_52, (MR_Integer) 2)));
#line 684 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_52, (MR_Integer) 1)));
#line 684 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_52, (MR_Integer) 5)));

#line 685 "unused_args.m"
                    {
#line 685 "unused_args.m"
                      transform_hlds__unused_args__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 685 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_103_103, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[3]));
#line 685 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_103_103, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_3));
#line 685 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_103_103, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 685 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_103_103, 3) = ((MR_Box) (transform_hlds__unused_args__LHS_49));
#line 685 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_103_103, 4) = ((MR_Box) (transform_hlds__unused_args__CellVar_58));
#line 685 "unused_args.m"
                    }
#line 685 "unused_args.m"
                    {
#line 685 "unused_args.m"
                      mercury__require__expect_4_p_0(transform_hlds__unused_args__V_103_103, (MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.unused_args_traverse_goal\'/4", (MR_String) "LHS != CellVar");
                    }
#line 686 "unused_args.m"
                    {
#line 686 "unused_args.m"
                      transform_hlds__unused_args__partition_deconstruct_args_5_p_0(transform_hlds__unused_args__Info_5, transform_hlds__unused_args__Args_142, transform_hlds__unused_args__Modes_60, &transform_hlds__unused_args__InputVars_63, &transform_hlds__unused_args__OutputVars_64);
                    }
#line 690 "unused_args.m"
                    {
#line 690 "unused_args.m"
                      transform_hlds__unused_args__add_aliases_4_p_0(transform_hlds__unused_args__CellVar_58, transform_hlds__unused_args__OutputVars_64, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_107_107);
                    }
#line 693 "unused_args.m"
                    {
#line 693 "unused_args.m"
                      transform_hlds__unused_args__add_construction_aliases_4_p_0(transform_hlds__unused_args__CellVar_58, transform_hlds__unused_args__InputVars_63, transform_hlds__unused_args__STATE_VARIABLE_VarDep_107_107, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_108_108);
                    }
#line 698 "unused_args.m"
#line 698 "unused_args.m"
                    switch (transform_hlds__unused_args__CanFail_61) {
#line 698 "unused_args.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 698 "unused_args.m"
                      case (MR_Integer) 0:
#line 697 "unused_args.m"
                        {
#line 697 "unused_args.m"
                          transform_hlds__unused_args__set_var_used_3_p_0(transform_hlds__unused_args__CellVar_58, transform_hlds__unused_args__STATE_VARIABLE_VarDep_108_108, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
#line 697 "unused_args.m"
                          return;
                        }
#line 698 "unused_args.m"
                        break;
#line 698 "unused_args.m"
                      case (MR_Integer) 1:
#line 699 "unused_args.m"
                        *transform_hlds__unused_args__STATE_VARIABLE_VarDep_88 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_108_108;
#line 698 "unused_args.m"
                        break;
#line 698 "unused_args.m"
                    }
#line 684 "unused_args.m"
                  }
#line 674 "unused_args.m"
                  break;
#line 674 "unused_args.m"
                case (MR_Integer) 2:
#line 675 "unused_args.m"
                  {
#line 675 "unused_args.m"
                    MR_Word transform_hlds__unused_args__Target_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Unify_52, (MR_Integer) 0)));
#line 675 "unused_args.m"
                    MR_Word transform_hlds__unused_args__Source_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Unify_52, (MR_Integer) 1)));

#line 676 "unused_args.m"
                    {
#line 676 "unused_args.m"
                      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__local_var_is_used_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__Target_56);
                    }
#line 680 "unused_args.m"
                    if (transform_hlds__unused_args__succeeded)
#line 679 "unused_args.m"
                      {
#line 679 "unused_args.m"
                        transform_hlds__unused_args__set_var_used_3_p_0(transform_hlds__unused_args__Source_57, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
#line 679 "unused_args.m"
                        return;
                      }
#line 680 "unused_args.m"
                    else
#line 681 "unused_args.m"
                      {
#line 681 "unused_args.m"
                        MR_Word transform_hlds__unused_args__V_111_111;

#line 681 "unused_args.m"
                        {
#line 681 "unused_args.m"
                          transform_hlds__unused_args__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 681 "unused_args.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_111_111, 0) = ((MR_Box) (transform_hlds__unused_args__Target_56));
#line 681 "unused_args.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 681 "unused_args.m"
                        }
#line 681 "unused_args.m"
                        {
#line 681 "unused_args.m"
                          transform_hlds__unused_args__add_aliases_4_p_0(transform_hlds__unused_args__Source_57, transform_hlds__unused_args__V_111_111, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
#line 681 "unused_args.m"
                          return;
                        }
#line 681 "unused_args.m"
                      }
#line 675 "unused_args.m"
                  }
#line 674 "unused_args.m"
                  break;
#line 674 "unused_args.m"
                case (MR_Integer) 3:
#line 674 "unused_args.m"
#line 674 "unused_args.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Unify_52, (MR_Integer) 0)))) {
#line 674 "unused_args.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 674 "unused_args.m"
                    case (MR_Integer) 0:
#line 671 "unused_args.m"
                      {
#line 671 "unused_args.m"
                        MR_Word transform_hlds__unused_args__Var1_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Unify_52, (MR_Integer) 1)));
#line 671 "unused_args.m"
                        MR_Word transform_hlds__unused_args__Var2_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Unify_52, (MR_Integer) 2)));
#line 671 "unused_args.m"
                        MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_114_114;

#line 672 "unused_args.m"
                        {
#line 672 "unused_args.m"
                          transform_hlds__unused_args__set_var_used_3_p_0(transform_hlds__unused_args__Var1_54, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_114_114);
                        }
#line 673 "unused_args.m"
                        {
#line 673 "unused_args.m"
                          transform_hlds__unused_args__set_var_used_3_p_0(transform_hlds__unused_args__Var2_55, transform_hlds__unused_args__STATE_VARIABLE_VarDep_114_114, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
#line 673 "unused_args.m"
                          return;
                        }
#line 671 "unused_args.m"
                      }
#line 674 "unused_args.m"
                      break;
#line 674 "unused_args.m"
                    case (MR_Integer) 1:
#line 718 "unused_args.m"
#line 718 "unused_args.m"
                      switch (MR_tag((MR_Word) transform_hlds__unused_args__RHS_50)) {
#line 718 "unused_args.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 718 "unused_args.m"
                        case (MR_Integer) 0:
#line 715 "unused_args.m"
                          {
#line 715 "unused_args.m"
                            MR_Word transform_hlds__unused_args__RHSVar_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__RHS_50, (MR_Integer) 0)));
#line 715 "unused_args.m"
                            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_95_95;

#line 716 "unused_args.m"
                            {
#line 716 "unused_args.m"
                              transform_hlds__unused_args__set_var_used_3_p_0(transform_hlds__unused_args__RHSVar_73, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_95_95);
                            }
#line 717 "unused_args.m"
                            {
#line 717 "unused_args.m"
                              transform_hlds__unused_args__set_var_used_3_p_0(transform_hlds__unused_args__LHS_49, transform_hlds__unused_args__STATE_VARIABLE_VarDep_95_95, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
#line 717 "unused_args.m"
                              return;
                            }
#line 715 "unused_args.m"
                          }
#line 718 "unused_args.m"
                          break;
#line 718 "unused_args.m"
                        case (MR_Integer) 1:
#line 718 "unused_args.m"
                        case (MR_Integer) 2:
#line 721 "unused_args.m"
                          {
#line 722 "unused_args.m"
                            {
#line 722 "unused_args.m"
                              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.unused_args_traverse_goal\'/4", (MR_String) "complicated unifications should only be var-var");
#line 722 "unused_args.m"
                              return;
                            }
#line 721 "unused_args.m"
                          }
#line 718 "unused_args.m"
                          break;
#line 718 "unused_args.m"
                      }
#line 674 "unused_args.m"
                      break;
#line 674 "unused_args.m"
                  }
#line 674 "unused_args.m"
                  break;
#line 674 "unused_args.m"
              }
#line 669 "unused_args.m"
            }
#line 616 "unused_args.m"
            break;
#line 616 "unused_args.m"
          case (MR_Integer) 2:
#line 625 "unused_args.m"
            {
#line 625 "unused_args.m"
              MR_Word transform_hlds__unused_args__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 0)));
#line 625 "unused_args.m"
              MR_Integer transform_hlds__unused_args__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));
#line 625 "unused_args.m"
              MR_Word transform_hlds__unused_args__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));
#line 625 "unused_args.m"
              MR_Word transform_hlds__unused_args__ProcInfo_22;
#line 625 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVars_23;
#line 625 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_5, (MR_Integer) 0)));
#line 625 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_129_129;
#line 625 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 3)));
#line 625 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 4)));
#line 625 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 5)));
#line 626 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_5, (MR_Integer) 1)));
#line 626 "unused_args.m"
              MR_Word transform_hlds__unused_args___PredInfo_21;

#line 626 "unused_args.m"
              {
#line 626 "unused_args.m"
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__unused_args__V_128_128, transform_hlds__unused_args__PredId_15, transform_hlds__unused_args__ProcId_16, &transform_hlds__unused_args___PredInfo_21, &transform_hlds__unused_args__ProcInfo_22);
              }
#line 628 "unused_args.m"
              {
#line 628 "unused_args.m"
                hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__ProcInfo_22, &transform_hlds__unused_args__HeadVars_23);
              }
#line 629 "unused_args.m"
              {
#line 629 "unused_args.m"
                transform_hlds__unused_args__V_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 629 "unused_args.m"
                MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_129_129, 0) = ((MR_Box) (transform_hlds__unused_args__PredId_15));
#line 629 "unused_args.m"
                MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_129_129, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_16));
#line 629 "unused_args.m"
              }
#line 629 "unused_args.m"
              {
#line 629 "unused_args.m"
                transform_hlds__unused_args__add_pred_call_arg_dep_5_p_0(transform_hlds__unused_args__V_129_129, transform_hlds__unused_args__Args_17, transform_hlds__unused_args__HeadVars_23, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
#line 629 "unused_args.m"
                return;
              }
#line 625 "unused_args.m"
            }
#line 616 "unused_args.m"
            break;
#line 616 "unused_args.m"
          case (MR_Integer) 3:
#line 616 "unused_args.m"
#line 616 "unused_args.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 0)))) {
#line 616 "unused_args.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 616 "unused_args.m"
              case (MR_Integer) 0:
#line 652 "unused_args.m"
                {
#line 652 "unused_args.m"
                  MR_Word transform_hlds__unused_args__GenericCall_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));
#line 652 "unused_args.m"
                  MR_Word transform_hlds__unused_args__CallArgs_35;
#line 652 "unused_args.m"
                  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_120_120;
#line 652 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Args_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));
#line 652 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 3)));
#line 652 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 4)));
#line 652 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 5)));

#line 653 "unused_args.m"
                  {
#line 653 "unused_args.m"
                    hlds__goal_util__generic_call_vars_2_p_0(transform_hlds__unused_args__GenericCall_31, &transform_hlds__unused_args__CallArgs_35);
                  }
#line 654 "unused_args.m"
                  {
#line 654 "unused_args.m"
                    transform_hlds__unused_args__set_list_vars_used_3_p_0(transform_hlds__unused_args__CallArgs_35, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_120_120);
                  }
#line 655 "unused_args.m"
                  {
#line 655 "unused_args.m"
                    transform_hlds__unused_args__set_list_vars_used_3_p_0(transform_hlds__unused_args__Args_138, transform_hlds__unused_args__STATE_VARIABLE_VarDep_120_120, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
#line 655 "unused_args.m"
                    return;
                  }
#line 652 "unused_args.m"
                }
#line 616 "unused_args.m"
                break;
#line 616 "unused_args.m"
              case (MR_Integer) 1:
#line 657 "unused_args.m"
                {
#line 657 "unused_args.m"
                  MR_Word transform_hlds__unused_args__TypeCtorInfo_148_148 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 657 "unused_args.m"
                  MR_Word transform_hlds__unused_args__ExtraArgs_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 5)));
#line 657 "unused_args.m"
                  MR_Word transform_hlds__unused_args__UsedVars_48;
#line 657 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_118_118;
#line 657 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Args_141 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 4)));
#line 657 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));
#line 657 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));
#line 657 "unused_args.m"
                  MR_Integer transform_hlds__unused_args__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 3)));
#line 657 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 6)));
#line 657 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 7)));

#line 666 "unused_args.m"
                  {
#line 666 "unused_args.m"
                    transform_hlds__unused_args__V_118_118 = mercury__list__f_43_43_2_f_0(transform_hlds__unused_args__TypeCtorInfo_148_148, transform_hlds__unused_args__Args_141, transform_hlds__unused_args__ExtraArgs_39);
                  }
#line 666 "unused_args.m"
                  {
#line 666 "unused_args.m"
                    mercury__list__filter_map_3_p_0(transform_hlds__unused_args__TypeCtorInfo_148_148, (MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args_scalar_common_2[9], transform_hlds__unused_args__V_118_118, &transform_hlds__unused_args__UsedVars_48);
                  }
#line 667 "unused_args.m"
                  {
#line 667 "unused_args.m"
                    transform_hlds__unused_args__set_list_vars_used_3_p_0(transform_hlds__unused_args__UsedVars_48, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
#line 667 "unused_args.m"
                    return;
                  }
#line 657 "unused_args.m"
                }
#line 616 "unused_args.m"
                break;
#line 616 "unused_args.m"
              case (MR_Integer) 2:
#line 614 "unused_args.m"
                {
#line 614 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));
#line 614 "unused_args.m"
                  MR_Word transform_hlds__unused_args___ConjType_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));

#line 615 "unused_args.m"
                  {
#line 615 "unused_args.m"
                    transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(transform_hlds__unused_args__Info_5, transform_hlds__unused_args__Goals_11, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
#line 615 "unused_args.m"
                    return;
                  }
#line 614 "unused_args.m"
                }
#line 616 "unused_args.m"
                break;
#line 616 "unused_args.m"
              case (MR_Integer) 3:
#line 617 "unused_args.m"
                {
#line 617 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Goals_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));

#line 618 "unused_args.m"
                  {
#line 618 "unused_args.m"
                    transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(transform_hlds__unused_args__Info_5, transform_hlds__unused_args__Goals_135, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
#line 618 "unused_args.m"
                    return;
                  }
#line 617 "unused_args.m"
                }
#line 616 "unused_args.m"
                break;
#line 616 "unused_args.m"
              case (MR_Integer) 4:
#line 620 "unused_args.m"
                {
#line 620 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));
#line 620 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 3)));
#line 620 "unused_args.m"
                  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_131_131;
#line 620 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Goals_136;
#line 620 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));

#line 621 "unused_args.m"
                  {
#line 621 "unused_args.m"
                    transform_hlds__unused_args__set_var_used_3_p_0(transform_hlds__unused_args__Var_12, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_131_131);
                  }
#line 622 "unused_args.m"
                  {
#line 622 "unused_args.m"
                    transform_hlds__unused_args__list_case_to_list_goal_2_p_0(transform_hlds__unused_args__Cases_14, &transform_hlds__unused_args__Goals_136);
                  }
#line 623 "unused_args.m"
                  {
#line 623 "unused_args.m"
                    transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(transform_hlds__unused_args__Info_5, transform_hlds__unused_args__Goals_136, transform_hlds__unused_args__STATE_VARIABLE_VarDep_131_131, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
#line 623 "unused_args.m"
                    return;
                  }
#line 620 "unused_args.m"
                }
#line 616 "unused_args.m"
                break;
#line 616 "unused_args.m"
              case (MR_Integer) 5:
#line 639 "unused_args.m"
                {
#line 639 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Reason_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));
#line 639 "unused_args.m"
                  MR_Word transform_hlds__unused_args__SubGoal_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));
#line 641 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_122_122;
#line 641 "unused_args.m"
                  MR_Word transform_hlds__unused_args___TermVar_30;

#line 641 "unused_args.m"
                  transform_hlds__unused_args__succeeded = ((((MR_tag((MR_Word) transform_hlds__unused_args__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 641 "unused_args.m"
                  if (transform_hlds__unused_args__succeeded)
#line 641 "unused_args.m"
                    {
#line 641 "unused_args.m"
                      transform_hlds__unused_args___TermVar_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Reason_29, (MR_Integer) 1)));
#line 641 "unused_args.m"
                      transform_hlds__unused_args__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Reason_29, (MR_Integer) 2)));
#line 641 "unused_args.m"
                      transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_122_122 == (MR_Integer) 1);
#line 641 "unused_args.m"
                    }
#line 646 "unused_args.m"
                  if (transform_hlds__unused_args__succeeded)
#line 646 "unused_args.m"
                    *transform_hlds__unused_args__STATE_VARIABLE_VarDep_88 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87;
#line 646 "unused_args.m"
                  else
#line 649 "unused_args.m"
                    {
#line 649 "unused_args.m"
                      /* direct tailcall eliminated */
#line 649 "unused_args.m"
                      {
#line 649 "unused_args.m"
                        MR_Word transform_hlds__unused_args__Goal__tmp_copy_6 = transform_hlds__unused_args__SubGoal_137;

#line 649 "unused_args.m"
                        transform_hlds__unused_args__Goal_6 = transform_hlds__unused_args__Goal__tmp_copy_6;
#line 649 "unused_args.m"
                      }
#line 649 "unused_args.m"
                      continue;
#line 649 "unused_args.m"
                    }
#line 639 "unused_args.m"
                }
#line 616 "unused_args.m"
                break;
#line 616 "unused_args.m"
              case (MR_Integer) 6:
#line 631 "unused_args.m"
                {
#line 631 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Cond_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));
#line 631 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Then_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 3)));
#line 631 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Else_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 4)));
#line 631 "unused_args.m"
                  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_125_125;
#line 631 "unused_args.m"
                  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_126_126;
#line 631 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));

#line 632 "unused_args.m"
                  {
#line 632 "unused_args.m"
                    transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(transform_hlds__unused_args__Info_5, transform_hlds__unused_args__Cond_25, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_125_125);
                  }
#line 633 "unused_args.m"
                  {
#line 633 "unused_args.m"
                    transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(transform_hlds__unused_args__Info_5, transform_hlds__unused_args__Then_26, transform_hlds__unused_args__STATE_VARIABLE_VarDep_125_125, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_126_126);
                  }
#line 634 "unused_args.m"
                  /* direct tailcall eliminated */
#line 634 "unused_args.m"
                  {
#line 634 "unused_args.m"
                    MR_Word transform_hlds__unused_args__Goal__tmp_copy_6 = transform_hlds__unused_args__Else_27;
#line 634 "unused_args.m"
                    MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_87 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_126_126;

#line 634 "unused_args.m"
                    transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_87;
#line 634 "unused_args.m"
                    transform_hlds__unused_args__Goal_6 = transform_hlds__unused_args__Goal__tmp_copy_6;
#line 634 "unused_args.m"
                  }
#line 634 "unused_args.m"
                  continue;
#line 631 "unused_args.m"
                }
#line 616 "unused_args.m"
                break;
#line 616 "unused_args.m"
              case (MR_Integer) 7:
#line 727 "unused_args.m"
                {
#line 729 "unused_args.m"
                  {
#line 729 "unused_args.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.unused_args_traverse_goal\'/4", (MR_String) "shorthand");
#line 729 "unused_args.m"
                    return;
                  }
#line 727 "unused_args.m"
                }
#line 616 "unused_args.m"
                break;
#line 616 "unused_args.m"
            }
#line 616 "unused_args.m"
            break;
#line 616 "unused_args.m"
        }
#line 611 "unused_args.m"
      }
#line 611 "unused_args.m"
      break;
#line 611 "unused_args.m"
    }
#line 608 "unused_args.m"
}

#line 586 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__set_var_used_3_p_0(
#line 586 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_4,
#line 586 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_6,
#line 586 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_7)
#line 586 "unused_args.m"
{
#line 589 "unused_args.m"
  {
#line 589 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 589 "unused_args.m"
    {
#line 589 "unused_args.m"
      mercury__map__delete_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, ((MR_Box) (transform_hlds__unused_args__Var_4)), transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_6, transform_hlds__unused_args__STATE_VARIABLE_VarDep_7);
#line 589 "unused_args.m"
      return;
    }
#line 589 "unused_args.m"
  }
#line 586 "unused_args.m"
}

#line 580 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__set_list_vars_used_3_p_0(
#line 580 "unused_args.m"
  MR_Word transform_hlds__unused_args__Vars_4,
#line 580 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_6,
#line 580 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_7)
#line 580 "unused_args.m"
{
#line 584 "unused_args.m"
  {
#line 584 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 584 "unused_args.m"
    {
#line 584 "unused_args.m"
      mercury__map__delete_list_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__Vars_4, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_6, transform_hlds__unused_args__STATE_VARIABLE_VarDep_7);
#line 584 "unused_args.m"
      return;
    }
#line 584 "unused_args.m"
  }
#line 580 "unused_args.m"
}

#line 567 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_aliases_4_p_0(
#line 567 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_5,
#line 567 "unused_args.m"
  MR_Word transform_hlds__unused_args__Aliases_6,
#line 567 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_12,
#line 567 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_13)
#line 567 "unused_args.m"
{
#line 576 "unused_args.m"
  {
#line 576 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 576 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarInf0_8;
#line 571 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv0_VarInf0_8;

#line 571 "unused_args.m"
    {
#line 571 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_12, ((MR_Box) (transform_hlds__unused_args__Var_5)), &transform_hlds__unused_args__conv0_VarInf0_8);
    }
#line 571 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 571 "unused_args.m"
      {
#line 571 "unused_args.m"
        transform_hlds__unused_args__VarInf0_8 = ((MR_Word) transform_hlds__unused_args__conv0_VarInf0_8);
#line 571 "unused_args.m"
        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 571 "unused_args.m"
      }
#line 576 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 572 "unused_args.m"
      {
#line 572 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_17_17 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 572 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarDep_7;
#line 572 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarDep0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInf0_8, (MR_Integer) 0)));
#line 572 "unused_args.m"
        MR_Word transform_hlds__unused_args__ArgDep_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInf0_8, (MR_Integer) 1)));
#line 572 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarInf_11;

#line 573 "unused_args.m"
        {
#line 573 "unused_args.m"
          mercury__set__insert_list_3_p_0(transform_hlds__unused_args__TypeInfo_17_17, transform_hlds__unused_args__Aliases_6, transform_hlds__unused_args__VarDep0_9, &transform_hlds__unused_args__VarDep_7);
        }
#line 574 "unused_args.m"
        {
#line 574 "unused_args.m"
          transform_hlds__unused_args__VarInf_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 574 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInf_11, 0) = ((MR_Box) (transform_hlds__unused_args__VarDep_7));
#line 574 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInf_11, 1) = ((MR_Box) (transform_hlds__unused_args__ArgDep_10));
#line 574 "unused_args.m"
        }
#line 575 "unused_args.m"
        {
#line 575 "unused_args.m"
          mercury__map__det_update_4_p_0(transform_hlds__unused_args__TypeInfo_17_17, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, ((MR_Box) (transform_hlds__unused_args__Var_5)), ((MR_Box) (transform_hlds__unused_args__VarInf_11)), transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_12, transform_hlds__unused_args__STATE_VARIABLE_VarDep_13);
#line 575 "unused_args.m"
          return;
        }
#line 572 "unused_args.m"
      }
#line 576 "unused_args.m"
    else
#line 576 "unused_args.m"
      *transform_hlds__unused_args__STATE_VARIABLE_VarDep_13 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_12;
#line 576 "unused_args.m"
  }
#line 567 "unused_args.m"
}

#line 560 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__local_var_is_used_2_p_0(
#line 560 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarDep_3,
#line 560 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_4)
#line 560 "unused_args.m"
{
#line 563 "unused_args.m"
  {
#line 563 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 563 "unused_args.m"
    {
#line 563 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__map__contains_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__VarDep_3, ((MR_Box) (transform_hlds__unused_args__Var_4)));
    }
#line 563 "unused_args.m"
    transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 563 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 563 "unused_args.m"
  }
#line 560 "unused_args.m"
}

#line 547 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_output_args_4_p_0_1(
#line 547 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 547 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 547 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 547 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3)
#line 547 "unused_args.m"
{
#line 547 "unused_args.m"
  {
#line 547 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 547 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_STATE_VARIABLE_VarDep_7;

#line 547 "unused_args.m"
    {
#line 547 "unused_args.m"
      transform_hlds__unused_args__set_var_used_3_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv0_STATE_VARIABLE_VarDep_7);
    }
#line 547 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_STATE_VARIABLE_VarDep_7));
#line 547 "unused_args.m"
  }
#line 547 "unused_args.m"
}

#line 541 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_output_args_4_p_0(
#line 541 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 541 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcInfo_6,
#line 541 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_9,
#line 541 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_10)
#line 541 "unused_args.m"
{
#line 544 "unused_args.m"
  {
#line 544 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 544 "unused_args.m"
    MR_Word transform_hlds__unused_args__ChangedInstHeadVars_8;
#line 547 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv1_STATE_VARIABLE_VarDep_10;

#line 545 "unused_args.m"
    {
#line 545 "unused_args.m"
      hlds__hlds_pred__proc_info_instantiated_head_vars_3_p_0(transform_hlds__unused_args__ModuleInfo_5, transform_hlds__unused_args__ProcInfo_6, &transform_hlds__unused_args__ChangedInstHeadVars_8);
    }
#line 547 "unused_args.m"
    {
#line 547 "unused_args.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], (MR_Word) &transform_hlds__unused_args_scalar_common_2[8], transform_hlds__unused_args__ChangedInstHeadVars_8, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_9)), &transform_hlds__unused_args__conv1_STATE_VARIABLE_VarDep_10);
    }
#line 547 "unused_args.m"
    *transform_hlds__unused_args__STATE_VARIABLE_VarDep_10 = ((MR_Word) transform_hlds__unused_args__conv1_STATE_VARIABLE_VarDep_10);
#line 544 "unused_args.m"
  }
#line 541 "unused_args.m"
}

#line 531 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__tvar_to_type_info_var_3_p_0(
#line 531 "unused_args.m"
  MR_Word transform_hlds__unused_args__RttiVarMaps_4,
#line 531 "unused_args.m"
  MR_Word transform_hlds__unused_args__TVar_5,
#line 531 "unused_args.m"
  MR_Word * transform_hlds__unused_args__TypeInfoVar_6)
#line 531 "unused_args.m"
{
#line 534 "unused_args.m"
  {
#line 534 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 534 "unused_args.m"
    MR_Word transform_hlds__unused_args__Locn_7;

#line 535 "unused_args.m"
    {
#line 535 "unused_args.m"
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(transform_hlds__unused_args__RttiVarMaps_4, transform_hlds__unused_args__TVar_5, &transform_hlds__unused_args__Locn_7);
    }
#line 536 "unused_args.m"
    {
#line 536 "unused_args.m"
      hlds__hlds_rtti__type_info_locn_var_2_p_0(transform_hlds__unused_args__Locn_7, transform_hlds__unused_args__TypeInfoVar_6);
#line 536 "unused_args.m"
      return;
    }
#line 534 "unused_args.m"
  }
#line 531 "unused_args.m"
}

#line 529 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_2(
#line 529 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 529 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 529 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 529 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3)
#line 529 "unused_args.m"
{
#line 529 "unused_args.m"
  {
#line 529 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 529 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv1_STATE_VARIABLE_VarDep_11;

#line 529 "unused_args.m"
    {
#line 529 "unused_args.m"
      transform_hlds__unused_args__add_rev_arg_dep_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv1_STATE_VARIABLE_VarDep_11);
    }
#line 529 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv1_STATE_VARIABLE_VarDep_11));
#line 529 "unused_args.m"
  }
#line 529 "unused_args.m"
}

#line 528 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_1(
#line 528 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 528 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 528 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2)
#line 528 "unused_args.m"
{
#line 528 "unused_args.m"
  {
#line 528 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 528 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_TypeInfoVar_6;

#line 528 "unused_args.m"
    {
#line 528 "unused_args.m"
      transform_hlds__unused_args__tvar_to_type_info_var_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), &transform_hlds__unused_args__conv0_TypeInfoVar_6);
    }
#line 528 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv0_TypeInfoVar_6));
#line 528 "unused_args.m"
  }
#line 528 "unused_args.m"
}

#line 513 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0(
#line 513 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 513 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarTypeMap_2,
#line 513 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcId_3,
#line 513 "unused_args.m"
  MR_Word transform_hlds__unused_args__RttiVarMaps_4,
#line 513 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_5,
#line 513 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_6)
#line 513 "unused_args.m"
{
#line 516 "unused_args.m"
  while (MR_TRUE)
#line 516 "unused_args.m"
    {
#line 516 "unused_args.m"
      /* tailcall optimized into a loop */
#line 516 "unused_args.m"
      {
#line 516 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 516 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 516 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_VarDep_6 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_5;
#line 516 "unused_args.m"
        else
#line 518 "unused_args.m"
          {
#line 518 "unused_args.m"
            MR_Word transform_hlds__unused_args__TypeInfo_23_39;
#line 518 "unused_args.m"
            MR_Word transform_hlds__unused_args__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 518 "unused_args.m"
            MR_Word transform_hlds__unused_args__Vars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 518 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_21_21;
#line 518 "unused_args.m"
            MR_Word transform_hlds__unused_args__Type_30;
#line 518 "unused_args.m"
            MR_Word transform_hlds__unused_args__TVars_31;
#line 518 "unused_args.m"
            MR_Word transform_hlds__unused_args__TypeInfoVars_32;
#line 518 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_33_33;
#line 518 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_34_34;
#line 529 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv2_STATE_VARIABLE_VarDep_21_21;

#line 526 "unused_args.m"
            {
#line 526 "unused_args.m"
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__unused_args__VarTypeMap_2, transform_hlds__unused_args__Var_13, &transform_hlds__unused_args__Type_30);
            }
#line 527 "unused_args.m"
            {
#line 527 "unused_args.m"
              parse_tree__prog_type__type_vars_2_p_0(transform_hlds__unused_args__Type_30, &transform_hlds__unused_args__TVars_31);
            }
#line 528 "unused_args.m"
            {
#line 528 "unused_args.m"
              transform_hlds__unused_args__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 528 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_33_33, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_4[2]));
#line 528 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_33_33, 1) = ((MR_Box) (transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_1));
#line 528 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 528 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_33_33, 3) = ((MR_Box) (transform_hlds__unused_args__RttiVarMaps_4));
#line 528 "unused_args.m"
            }
#line 16238 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__TypeInfo_23_39 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 528 "unused_args.m"
            {
#line 528 "unused_args.m"
              mercury__list__map_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[4], transform_hlds__unused_args__TypeInfo_23_39, transform_hlds__unused_args__V_33_33, transform_hlds__unused_args__TVars_31, &transform_hlds__unused_args__TypeInfoVars_32);
            }
#line 529 "unused_args.m"
            {
#line 529 "unused_args.m"
              transform_hlds__unused_args__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 529 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_34_34, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_5[1]));
#line 529 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_34_34, 1) = ((MR_Box) (transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_2));
#line 529 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 529 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_34_34, 3) = ((MR_Box) (transform_hlds__unused_args__Var_13));
#line 529 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_34_34, 4) = ((MR_Box) (transform_hlds__unused_args__PredProcId_3));
#line 529 "unused_args.m"
            }
#line 529 "unused_args.m"
            {
#line 529 "unused_args.m"
              mercury__list__foldl_4_p_0(transform_hlds__unused_args__TypeInfo_23_39, (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], transform_hlds__unused_args__V_34_34, transform_hlds__unused_args__TypeInfoVars_32, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_5)), &transform_hlds__unused_args__conv2_STATE_VARIABLE_VarDep_21_21);
            }
#line 529 "unused_args.m"
            transform_hlds__unused_args__STATE_VARIABLE_VarDep_21_21 = ((MR_Word) transform_hlds__unused_args__conv2_STATE_VARIABLE_VarDep_21_21);
#line 520 "unused_args.m"
            /* direct tailcall eliminated */
#line 520 "unused_args.m"
            {
#line 520 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__1__tmp_copy_1 = transform_hlds__unused_args__Vars_14;
#line 520 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_5 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_21_21;

#line 520 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_5 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_5;
#line 520 "unused_args.m"
              transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__HeadVar__1__tmp_copy_1;
#line 520 "unused_args.m"
            }
#line 520 "unused_args.m"
            continue;
#line 518 "unused_args.m"
          }
#line 516 "unused_args.m"
      }
#line 516 "unused_args.m"
      break;
#line 516 "unused_args.m"
    }
#line 513 "unused_args.m"
}

#line 493 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__initialise_vardep_3_p_0(
#line 493 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 493 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_2,
#line 493 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_3)
#line 493 "unused_args.m"
{
#line 496 "unused_args.m"
  while (MR_TRUE)
#line 496 "unused_args.m"
    {
#line 496 "unused_args.m"
      /* tailcall optimized into a loop */
#line 496 "unused_args.m"
      {
#line 496 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 496 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 496 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_VarDep_3 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_2;
#line 496 "unused_args.m"
        else
#line 497 "unused_args.m"
          {
#line 497 "unused_args.m"
            MR_Word transform_hlds__unused_args__TypeInfo_17_17 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 497 "unused_args.m"
            MR_Word transform_hlds__unused_args__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 497 "unused_args.m"
            MR_Word transform_hlds__unused_args__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 497 "unused_args.m"
            MR_Word transform_hlds__unused_args__VDep_10;
#line 497 "unused_args.m"
            MR_Word transform_hlds__unused_args__Args_11;
#line 497 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_14_14;
#line 497 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_15_15;

#line 498 "unused_args.m"
            {
#line 498 "unused_args.m"
              mercury__set__init_1_p_0(transform_hlds__unused_args__TypeInfo_17_17, &transform_hlds__unused_args__VDep_10);
            }
#line 499 "unused_args.m"
            {
#line 499 "unused_args.m"
              mercury__set__init_1_p_0((MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0, &transform_hlds__unused_args__Args_11);
            }
#line 500 "unused_args.m"
            {
#line 500 "unused_args.m"
              transform_hlds__unused_args__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 500 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 0) = ((MR_Box) (transform_hlds__unused_args__VDep_10));
#line 500 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 1) = ((MR_Box) (transform_hlds__unused_args__Args_11));
#line 500 "unused_args.m"
            }
#line 500 "unused_args.m"
            {
#line 500 "unused_args.m"
              mercury__map__set_4_p_0(transform_hlds__unused_args__TypeInfo_17_17, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, ((MR_Box) (transform_hlds__unused_args__Var_7)), ((MR_Box) (transform_hlds__unused_args__V_14_14)), transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_2, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_15_15);
            }
#line 501 "unused_args.m"
            /* direct tailcall eliminated */
#line 501 "unused_args.m"
            {
#line 501 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__1__tmp_copy_1 = transform_hlds__unused_args__Vars_8;
#line 501 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_2 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_15_15;

#line 501 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_2 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_2;
#line 501 "unused_args.m"
              transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__HeadVar__1__tmp_copy_1;
#line 501 "unused_args.m"
            }
#line 501 "unused_args.m"
            continue;
#line 497 "unused_args.m"
          }
#line 496 "unused_args.m"
      }
#line 496 "unused_args.m"
      break;
#line 496 "unused_args.m"
    }
#line 493 "unused_args.m"
}

#line 429 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_proc_args_10_p_0_1(
#line 429 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 429 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 429 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2)
#line 429 "unused_args.m"
{
#line 429 "unused_args.m"
  {
#line 429 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 429 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__3_85;

#line 429 "unused_args.m"
    {
#line 429 "unused_args.m"
      transform_hlds__unused_args__IntroducedFrom__pred__setup_proc_args__429__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__unused_args__wrapper_arg_1), &transform_hlds__unused_args__conv0_HeadVar__3_85);
    }
#line 429 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__3_85));
#line 429 "unused_args.m"
  }
#line 429 "unused_args.m"
}

#line 393 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_proc_args_10_p_0(
#line 393 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_11,
#line 393 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_12,
#line 393 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_47,
#line 393 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_48,
#line 393 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0_49,
#line 393 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_50,
#line 393 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_51,
#line 393 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OptProcs_52,
#line 393 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53,
#line 393 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_54)
#line 393 "unused_args.m"
{
#line 400 "unused_args.m"
  {
#line 400 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 400 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeInfo_81_81;
#line 400 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredInfo_17;
#line 400 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcInfo_18;
#line 400 "unused_args.m"
    MR_Word transform_hlds__unused_args__Globals_19;
#line 400 "unused_args.m"
    MR_Word transform_hlds__unused_args__Intermod_21;
#line 400 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_55_55;

#line 401 "unused_args.m"
    {
#line 401 "unused_args.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53, transform_hlds__unused_args__PredId_11, transform_hlds__unused_args__ProcId_12, &transform_hlds__unused_args__PredInfo_17, &transform_hlds__unused_args__ProcInfo_18);
    }
#line 403 "unused_args.m"
    {
#line 403 "unused_args.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53, &transform_hlds__unused_args__Globals_19);
    }
#line 16476 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__TypeInfo_81_81 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 405 "unused_args.m"
    {
#line 405 "unused_args.m"
      mercury__map__init_1_p_0(transform_hlds__unused_args__TypeInfo_81_81, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_55_55);
    }
#line 406 "unused_args.m"
    {
#line 406 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_19, (MR_Integer) 335, &transform_hlds__unused_args__Intermod_21);
    }
#line 411 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__Intermod_21 == (MR_Integer) 1);
#line 411 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 411 "unused_args.m"
      {
#line 412 "unused_args.m"
        {
#line 412 "unused_args.m"
          transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_imported_not_external_1_p_0(transform_hlds__unused_args__PredInfo_17);
        }
#line 411 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 411 "unused_args.m"
          {
#line 413 "unused_args.m"
            {
#line 413 "unused_args.m"
              transform_hlds__unused_args__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__unused_args__PredInfo_17);
            }
#line 413 "unused_args.m"
            transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 411 "unused_args.m"
          }
#line 411 "unused_args.m"
      }
#line 453 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 415 "unused_args.m"
      {
#line 415 "unused_args.m"
        MR_Word transform_hlds__unused_args__PredModule_22;
#line 415 "unused_args.m"
        MR_Integer transform_hlds__unused_args__PredArity_23;
#line 415 "unused_args.m"
        MR_Word transform_hlds__unused_args__FuncInfo_24;
#line 415 "unused_args.m"
        MR_Word transform_hlds__unused_args__AnalysisInfo0_25;
#line 415 "unused_args.m"
        MR_Word transform_hlds__unused_args__ModuleId_26;
#line 415 "unused_args.m"
        MR_Word transform_hlds__unused_args__FuncId_27;
#line 415 "unused_args.m"
        MR_Word transform_hlds__unused_args__MaybeBestResult_28;
#line 415 "unused_args.m"
        MR_Word transform_hlds__unused_args__AnalysisInfo_39;
#line 415 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65;

#line 415 "unused_args.m"
        {
#line 415 "unused_args.m"
          transform_hlds__unused_args__PredModule_22 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__unused_args__PredInfo_17);
        }
#line 416 "unused_args.m"
        {
#line 416 "unused_args.m"
          transform_hlds__unused_args__PredArity_23 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__unused_args__PredInfo_17);
        }
#line 417 "unused_args.m"
        transform_hlds__unused_args__FuncInfo_24 = (MR_Word) transform_hlds__unused_args__PredArity_23;
#line 418 "unused_args.m"
        {
#line 418 "unused_args.m"
          hlds__hlds_module__module_info_get_analysis_info_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53, &transform_hlds__unused_args__AnalysisInfo0_25);
        }
#line 419 "unused_args.m"
        {
#line 419 "unused_args.m"
          transform_hlds__mmc_analysis__module_name_func_id_from_pred_info_4_p_0(transform_hlds__unused_args__PredInfo_17, transform_hlds__unused_args__ProcId_12, &transform_hlds__unused_args__ModuleId_26, &transform_hlds__unused_args__FuncId_27);
        }
#line 422 "unused_args.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 421 "unused_args.m"
        {
#line 421 "unused_args.m"
          analysis__lookup_best_result_6_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_4[0], transform_hlds__unused_args__AnalysisInfo0_25, transform_hlds__unused_args__ModuleId_26, transform_hlds__unused_args__FuncId_27, ((MR_Box) (transform_hlds__unused_args__FuncInfo_24)), ((MR_Box) ((MR_Integer) 0)), &transform_hlds__unused_args__MaybeBestResult_28);
        }
#line 447 "unused_args.m"
        if ((transform_hlds__unused_args__MaybeBestResult_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 448 "unused_args.m"
          {
#line 450 "unused_args.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 449 "unused_args.m"
            {
#line 449 "unused_args.m"
              analysis__record_request_6_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_3[0], (MR_String) "unused_args", transform_hlds__unused_args__PredModule_22, transform_hlds__unused_args__FuncId_27, ((MR_Box) ((MR_Integer) 0)), transform_hlds__unused_args__AnalysisInfo0_25, &transform_hlds__unused_args__AnalysisInfo_39);
            }
#line 448 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_VarUsage_48 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_47;
#line 448 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_OptProcs_52 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_51;
#line 448 "unused_args.m"
            transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53;
#line 448 "unused_args.m"
          }
#line 447 "unused_args.m"
        else
#line 424 "unused_args.m"
          {
#line 424 "unused_args.m"
            MR_Word transform_hlds__unused_args__BestAnswer_30;
#line 424 "unused_args.m"
            MR_Word transform_hlds__unused_args__UnusedArgs_32;
#line 424 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__MaybeBestResult_28, (MR_Integer) 0)));
#line 424 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_31_31;

#line 424 "unused_args.m"
            transform_hlds__unused_args__BestAnswer_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_60_60, (MR_Integer) 1)));
#line 424 "unused_args.m"
            transform_hlds__unused_args__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_60_60, (MR_Integer) 2)));
#line 425 "unused_args.m"
            transform_hlds__unused_args__UnusedArgs_32 = (MR_Word) transform_hlds__unused_args__BestAnswer_30;
#line 443 "unused_args.m"
            if ((transform_hlds__unused_args__UnusedArgs_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 444 "unused_args.m"
              {
#line 444 "unused_args.m"
                *transform_hlds__unused_args__STATE_VARIABLE_VarUsage_48 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_47;
#line 444 "unused_args.m"
                *transform_hlds__unused_args__STATE_VARIABLE_OptProcs_52 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_51;
#line 444 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53;
#line 444 "unused_args.m"
              }
#line 443 "unused_args.m"
            else
#line 427 "unused_args.m"
              {
#line 427 "unused_args.m"
                MR_Word transform_hlds__unused_args__VarDep_20;
#line 427 "unused_args.m"
                MR_Word transform_hlds__unused_args__HeadVars_35;
#line 427 "unused_args.m"
                MR_Word transform_hlds__unused_args__UnusedVars_36;
#line 427 "unused_args.m"
                MR_Word transform_hlds__unused_args__PredProcId_37;
#line 427 "unused_args.m"
                MR_Word transform_hlds__unused_args__OptimizeUnusedArgs_38;
#line 427 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_61_61;

#line 428 "unused_args.m"
                {
#line 428 "unused_args.m"
                  hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__ProcInfo_18, &transform_hlds__unused_args__HeadVars_35);
                }
#line 429 "unused_args.m"
                {
#line 429 "unused_args.m"
                  transform_hlds__unused_args__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 429 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_61_61, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_4[1]));
#line 429 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_61_61, 1) = ((MR_Box) (transform_hlds__unused_args__setup_proc_args_10_p_0_1));
#line 429 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 429 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_61_61, 3) = ((MR_Box) (transform_hlds__unused_args__HeadVars_35));
#line 429 "unused_args.m"
                }
#line 429 "unused_args.m"
                {
#line 429 "unused_args.m"
                  mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__unused_args__TypeInfo_81_81, transform_hlds__unused_args__V_61_61, transform_hlds__unused_args__UnusedArgs_32, &transform_hlds__unused_args__UnusedVars_36);
                }
#line 431 "unused_args.m"
                {
#line 431 "unused_args.m"
                  transform_hlds__unused_args__initialise_vardep_3_p_0(transform_hlds__unused_args__UnusedVars_36, transform_hlds__unused_args__STATE_VARIABLE_VarDep_55_55, &transform_hlds__unused_args__VarDep_20);
                }
#line 432 "unused_args.m"
                {
#line 432 "unused_args.m"
                  transform_hlds__unused_args__PredProcId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 432 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredProcId_37, 0) = ((MR_Box) (transform_hlds__unused_args__PredId_11));
#line 432 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredProcId_37, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_12));
#line 432 "unused_args.m"
                }
#line 433 "unused_args.m"
                {
#line 433 "unused_args.m"
                  mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], ((MR_Box) (transform_hlds__unused_args__PredProcId_37)), ((MR_Box) (transform_hlds__unused_args__VarDep_20)), transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_47, transform_hlds__unused_args__STATE_VARIABLE_VarUsage_48);
                }
#line 434 "unused_args.m"
                {
#line 434 "unused_args.m"
                  libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_19, (MR_Integer) 354, &transform_hlds__unused_args__OptimizeUnusedArgs_38);
                }
#line 440 "unused_args.m"
#line 440 "unused_args.m"
                switch (transform_hlds__unused_args__OptimizeUnusedArgs_38) {
#line 440 "unused_args.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 440 "unused_args.m"
                  case (MR_Integer) 0:
#line 441 "unused_args.m"
                    {
#line 441 "unused_args.m"
                      *transform_hlds__unused_args__STATE_VARIABLE_OptProcs_52 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_51;
#line 441 "unused_args.m"
                      transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53;
#line 441 "unused_args.m"
                    }
#line 440 "unused_args.m"
                    break;
#line 440 "unused_args.m"
                  case (MR_Integer) 1:
#line 438 "unused_args.m"
                    {
#line 438 "unused_args.m"
                      transform_hlds__unused_args__make_imported_unused_args_pred_info_6_p_0(transform_hlds__unused_args__PredProcId_37, transform_hlds__unused_args__UnusedArgs_32, transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_51, transform_hlds__unused_args__STATE_VARIABLE_OptProcs_52, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65);
                    }
#line 440 "unused_args.m"
                    break;
#line 440 "unused_args.m"
                }
#line 427 "unused_args.m"
              }
#line 446 "unused_args.m"
            transform_hlds__unused_args__AnalysisInfo_39 = transform_hlds__unused_args__AnalysisInfo0_25;
#line 424 "unused_args.m"
          }
#line 452 "unused_args.m"
        {
#line 452 "unused_args.m"
          hlds__hlds_module__module_info_set_analysis_info_3_p_0(transform_hlds__unused_args__AnalysisInfo_39, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_54);
        }
#line 415 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_50 = transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0_49;
#line 415 "unused_args.m"
      }
#line 453 "unused_args.m"
    else
#line 467 "unused_args.m"
      {
#line 455 "unused_args.m"
        {
#line 455 "unused_args.m"
          transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__unused_args__PredInfo_17);
        }
#line 456 "unused_args.m"
        if (!(transform_hlds__unused_args__succeeded))
#line 456 "unused_args.m"
          {
#line 457 "unused_args.m"
            {
#line 457 "unused_args.m"
              MR_Integer transform_hlds__unused_args__V_93_93;

#line 457 "unused_args.m"
              {
#line 457 "unused_args.m"
                transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(transform_hlds__unused_args__PredInfo_17);
              }
#line 457 "unused_args.m"
              if (transform_hlds__unused_args__succeeded)
#line 457 "unused_args.m"
                {
#line 458 "unused_args.m"
                  {
#line 458 "unused_args.m"
                    hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&transform_hlds__unused_args__V_93_93);
                  }
#line 458 "unused_args.m"
                  transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__ProcId_12 == transform_hlds__unused_args__V_93_93);
#line 457 "unused_args.m"
                }
#line 457 "unused_args.m"
            }
#line 456 "unused_args.m"
            if (!(transform_hlds__unused_args__succeeded))
#line 462 "unused_args.m"
              {
#line 462 "unused_args.m"
                MR_Word transform_hlds__unused_args__EvalMethod_40;

#line 462 "unused_args.m"
                {
#line 462 "unused_args.m"
                  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(transform_hlds__unused_args__ProcInfo_18, &transform_hlds__unused_args__EvalMethod_40);
                }
#line 463 "unused_args.m"
                transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__EvalMethod_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 463 "unused_args.m"
                transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 462 "unused_args.m"
              }
#line 456 "unused_args.m"
          }
#line 467 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 466 "unused_args.m"
          {
#line 466 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_50 = transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0_49;
#line 466 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_VarUsage_48 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_47;
#line 466 "unused_args.m"
          }
#line 467 "unused_args.m"
        else
#line 468 "unused_args.m"
          {
#line 468 "unused_args.m"
            MR_Word transform_hlds__unused_args__VarTypes_41;
#line 468 "unused_args.m"
            MR_Word transform_hlds__unused_args__Vars_42;
#line 468 "unused_args.m"
            MR_Word transform_hlds__unused_args__TypeInfoLiveness_43;
#line 468 "unused_args.m"
            MR_Word transform_hlds__unused_args__Goal_45;
#line 468 "unused_args.m"
            MR_Word transform_hlds__unused_args__Info_46;
#line 468 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_67_67;
#line 468 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_68_68;
#line 468 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_70_70;
#line 468 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_72_72;
#line 468 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_71_78;

#line 468 "unused_args.m"
            {
#line 468 "unused_args.m"
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__unused_args__ProcInfo_18, &transform_hlds__unused_args__VarTypes_41);
            }
#line 469 "unused_args.m"
            {
#line 469 "unused_args.m"
              hlds__vartypes__vartypes_vars_2_p_0(transform_hlds__unused_args__VarTypes_41, &transform_hlds__unused_args__Vars_42);
            }
#line 470 "unused_args.m"
            {
#line 470 "unused_args.m"
              transform_hlds__unused_args__initialise_vardep_3_p_0(transform_hlds__unused_args__Vars_42, transform_hlds__unused_args__STATE_VARIABLE_VarDep_55_55, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_67_67);
            }
#line 471 "unused_args.m"
            {
#line 471 "unused_args.m"
              transform_hlds__unused_args__setup_output_args_4_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53, transform_hlds__unused_args__ProcInfo_18, transform_hlds__unused_args__STATE_VARIABLE_VarDep_67_67, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_68_68);
            }
#line 473 "unused_args.m"
            {
#line 473 "unused_args.m"
              hlds__hlds_pred__proc_interface_should_use_typeinfo_liveness_4_p_0(transform_hlds__unused_args__PredInfo_17, transform_hlds__unused_args__ProcId_12, transform_hlds__unused_args__Globals_19, &transform_hlds__unused_args__TypeInfoLiveness_43);
            }
#line 480 "unused_args.m"
#line 480 "unused_args.m"
            switch (transform_hlds__unused_args__TypeInfoLiveness_43) {
#line 480 "unused_args.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 480 "unused_args.m"
              case (MR_Integer) 0:
#line 481 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_VarDep_70_70 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_68_68;
#line 480 "unused_args.m"
                break;
#line 480 "unused_args.m"
              case (MR_Integer) 1:
#line 476 "unused_args.m"
                {
#line 476 "unused_args.m"
                  MR_Word transform_hlds__unused_args__RttiVarMaps_44;
#line 476 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_69_69;

#line 477 "unused_args.m"
                  {
#line 477 "unused_args.m"
                    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__unused_args__ProcInfo_18, &transform_hlds__unused_args__RttiVarMaps_44);
                  }
#line 478 "unused_args.m"
                  {
#line 478 "unused_args.m"
                    transform_hlds__unused_args__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 478 "unused_args.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_69_69, 0) = ((MR_Box) (transform_hlds__unused_args__PredId_11));
#line 478 "unused_args.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_69_69, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_12));
#line 478 "unused_args.m"
                  }
#line 478 "unused_args.m"
                  {
#line 478 "unused_args.m"
                    transform_hlds__unused_args__setup_typeinfo_deps_6_p_0(transform_hlds__unused_args__Vars_42, transform_hlds__unused_args__VarTypes_41, transform_hlds__unused_args__V_69_69, transform_hlds__unused_args__RttiVarMaps_44, transform_hlds__unused_args__STATE_VARIABLE_VarDep_68_68, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_70_70);
                  }
#line 476 "unused_args.m"
                }
#line 480 "unused_args.m"
                break;
#line 480 "unused_args.m"
            }
#line 484 "unused_args.m"
            {
#line 484 "unused_args.m"
              hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__unused_args__ProcInfo_18, &transform_hlds__unused_args__Goal_45);
            }
#line 485 "unused_args.m"
            {
#line 485 "unused_args.m"
              transform_hlds__unused_args__Info_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 485 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_46, 0) = ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53));
#line 485 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_46, 1) = ((MR_Box) (transform_hlds__unused_args__VarTypes_41));
#line 485 "unused_args.m"
            }
#line 486 "unused_args.m"
            {
#line 486 "unused_args.m"
              transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(transform_hlds__unused_args__Info_46, transform_hlds__unused_args__Goal_45, transform_hlds__unused_args__STATE_VARIABLE_VarDep_70_70, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_71_78);
            }
#line 487 "unused_args.m"
            {
#line 487 "unused_args.m"
              transform_hlds__unused_args__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 487 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_72_72, 0) = ((MR_Box) (transform_hlds__unused_args__PredId_11));
#line 487 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_72_72, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_12));
#line 487 "unused_args.m"
            }
#line 487 "unused_args.m"
            {
#line 487 "unused_args.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], ((MR_Box) (transform_hlds__unused_args__V_72_72)), ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_VarDep_71_78)), transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_47, transform_hlds__unused_args__STATE_VARIABLE_VarUsage_48);
            }
#line 489 "unused_args.m"
            {
#line 489 "unused_args.m"
              MR_Word base;
#line 489 "unused_args.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "unused_args.m"
              *transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_50 = base;
#line 489 "unused_args.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__V_72_72));
#line 489 "unused_args.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0_49));
#line 489 "unused_args.m"
            }
#line 468 "unused_args.m"
          }
#line 467 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_54 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53;
#line 467 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_OptProcs_52 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_51;
#line 467 "unused_args.m"
      }
#line 400 "unused_args.m"
  }
#line 393 "unused_args.m"
}

#line 377 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_pred_args_10_p_0(
#line 377 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_1,
#line 377 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 377 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_3,
#line 377 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_4,
#line 377 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0_5,
#line 377 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_6,
#line 377 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_7,
#line 377 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OptProcs_8,
#line 377 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_9,
#line 377 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_10)
#line 377 "unused_args.m"
{
#line 383 "unused_args.m"
  while (MR_TRUE)
#line 383 "unused_args.m"
    {
#line 383 "unused_args.m"
      /* tailcall optimized into a loop */
#line 383 "unused_args.m"
      {
#line 383 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 383 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 383 "unused_args.m"
          {
#line 383 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_10 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_9;
#line 383 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_OptProcs_8 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_7;
#line 383 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_6 = transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0_5;
#line 383 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_VarUsage_4 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_3;
#line 383 "unused_args.m"
          }
#line 383 "unused_args.m"
        else
#line 385 "unused_args.m"
          {
#line 385 "unused_args.m"
            MR_Integer transform_hlds__unused_args__ProcId_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 385 "unused_args.m"
            MR_Word transform_hlds__unused_args__ProcIds_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 385 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_39_39;
#line 385 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_40_40;
#line 385 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_41_41;
#line 385 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_42_42;

#line 386 "unused_args.m"
            {
#line 386 "unused_args.m"
              transform_hlds__unused_args__setup_proc_args_10_p_0(transform_hlds__unused_args__PredId_1, transform_hlds__unused_args__ProcId_25, transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_3, &transform_hlds__unused_args__STATE_VARIABLE_VarUsage_39_39, transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0_5, &transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_40_40, transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_7, &transform_hlds__unused_args__STATE_VARIABLE_OptProcs_41_41, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_9, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_42_42);
            }
#line 388 "unused_args.m"
            /* direct tailcall eliminated */
#line 388 "unused_args.m"
            {
#line 388 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__2__tmp_copy_2 = transform_hlds__unused_args__ProcIds_26;
#line 388 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_3 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_39_39;
#line 388 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0__tmp_copy_5 = transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_40_40;
#line 388 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0__tmp_copy_7 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_41_41;
#line 388 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0__tmp_copy_9 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_42_42;

#line 388 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_9 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0__tmp_copy_9;
#line 388 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_7 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0__tmp_copy_7;
#line 388 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0_5 = transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0__tmp_copy_5;
#line 388 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_3 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_3;
#line 388 "unused_args.m"
              transform_hlds__unused_args__HeadVar__2_2 = transform_hlds__unused_args__HeadVar__2__tmp_copy_2;
#line 388 "unused_args.m"
            }
#line 388 "unused_args.m"
            continue;
#line 385 "unused_args.m"
          }
#line 383 "unused_args.m"
      }
#line 383 "unused_args.m"
      break;
#line 383 "unused_args.m"
    }
#line 377 "unused_args.m"
}

#line 333 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_local_var_usage_9_p_0(
#line 333 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 333 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_2,
#line 333 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_3,
#line 333 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__4_4,
#line 333 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__5_5,
#line 333 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_6,
#line 333 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OptProcs_7,
#line 333 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_8,
#line 333 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_9)
#line 333 "unused_args.m"
{
#line 339 "unused_args.m"
  while (MR_TRUE)
#line 339 "unused_args.m"
    {
#line 339 "unused_args.m"
      /* tailcall optimized into a loop */
#line 339 "unused_args.m"
      {
#line 339 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 339 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 339 "unused_args.m"
          {
#line 339 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_9 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_8;
#line 339 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_OptProcs_7 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_6;
#line 339 "unused_args.m"
            *transform_hlds__unused_args__HeadVar__5_5 = transform_hlds__unused_args__HeadVar__4_4;
#line 339 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_VarUsage_3 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_2;
#line 339 "unused_args.m"
          }
#line 339 "unused_args.m"
        else
#line 341 "unused_args.m"
          {
#line 341 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredId_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 341 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 341 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_36_36;
#line 341 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredProcList_37_37;
#line 341 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_38_38;
#line 341 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_39_39;
#line 341 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredInfo_57;

#line 356 "unused_args.m"
            {
#line 356 "unused_args.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__unused_args__PredId_22, &transform_hlds__unused_args__PredInfo_57);
            }
#line 362 "unused_args.m"
            {
#line 362 "unused_args.m"
              transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(transform_hlds__unused_args__PredInfo_57);
            }
#line 363 "unused_args.m"
            if (!(transform_hlds__unused_args__succeeded))
#line 364 "unused_args.m"
              {
#line 364 "unused_args.m"
                MR_Word transform_hlds__unused_args__Markers_58;

#line 364 "unused_args.m"
                {
#line 364 "unused_args.m"
                  hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__unused_args__PredInfo_57, &transform_hlds__unused_args__Markers_58);
                }
#line 365 "unused_args.m"
                {
#line 365 "unused_args.m"
                  transform_hlds__unused_args__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__unused_args__Markers_58, (MR_Integer) 0);
                }
#line 364 "unused_args.m"
              }
#line 369 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 368 "unused_args.m"
              {
#line 368 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_39_39 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_8;
#line 368 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_OptProcs_38_38 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_6;
#line 368 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_PredProcList_37_37 = transform_hlds__unused_args__HeadVar__4_4;
#line 368 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_VarUsage_36_36 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_2;
#line 368 "unused_args.m"
              }
#line 369 "unused_args.m"
            else
#line 370 "unused_args.m"
              {
#line 370 "unused_args.m"
                MR_Word transform_hlds__unused_args__ProcIds_59;

#line 370 "unused_args.m"
                {
#line 370 "unused_args.m"
                  transform_hlds__unused_args__ProcIds_59 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__unused_args__PredInfo_57);
                }
#line 371 "unused_args.m"
                {
#line 371 "unused_args.m"
                  transform_hlds__unused_args__setup_pred_args_10_p_0(transform_hlds__unused_args__PredId_22, transform_hlds__unused_args__ProcIds_59, transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_2, &transform_hlds__unused_args__STATE_VARIABLE_VarUsage_36_36, transform_hlds__unused_args__HeadVar__4_4, &transform_hlds__unused_args__STATE_VARIABLE_PredProcList_37_37, transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_6, &transform_hlds__unused_args__STATE_VARIABLE_OptProcs_38_38, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_39_39);
                }
#line 370 "unused_args.m"
              }
#line 344 "unused_args.m"
            /* direct tailcall eliminated */
#line 344 "unused_args.m"
            {
#line 344 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__1__tmp_copy_1 = transform_hlds__unused_args__PredIds_23;
#line 344 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_2 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_36_36;
#line 344 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__4__tmp_copy_4 = transform_hlds__unused_args__STATE_VARIABLE_PredProcList_37_37;
#line 344 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0__tmp_copy_6 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_38_38;
#line 344 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_39_39;

#line 344 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_8 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8;
#line 344 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_6 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0__tmp_copy_6;
#line 344 "unused_args.m"
              transform_hlds__unused_args__HeadVar__4_4 = transform_hlds__unused_args__HeadVar__4__tmp_copy_4;
#line 344 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_2 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_2;
#line 344 "unused_args.m"
              transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__HeadVar__1__tmp_copy_1;
#line 344 "unused_args.m"
            }
#line 344 "unused_args.m"
            continue;
#line 341 "unused_args.m"
          }
#line 339 "unused_args.m"
      }
#line 339 "unused_args.m"
      break;
#line 339 "unused_args.m"
    }
#line 333 "unused_args.m"
}

#line 173 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__get_unused_args_1_f_0(
#line 173 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_3)
#line 173 "unused_args.m"
{
#line 175 "unused_args.m"
  {
#line 175 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 175 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVar__2_2 = (MR_Word) transform_hlds__unused_args__UnusedArgs_3;

#line 175 "unused_args.m"
    return transform_hlds__unused_args__HeadVar__2_2;
#line 175 "unused_args.m"
  }
#line 173 "unused_args.m"
}

#line 294 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_4_p_0_3(
#line 294 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 294 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 294 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 294 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3,
#line 294 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_4,
#line 294 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_5)
#line 294 "unused_args.m"
{
#line 294 "unused_args.m"
  {
#line 294 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 294 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv5_STATE_VARIABLE_ProcCallInfo_47;
#line 294 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv4_STATE_VARIABLE_ModuleInfo_49;

#line 294 "unused_args.m"
    {
#line 294 "unused_args.m"
      transform_hlds__unused_args__unused_args_create_new_pred_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv5_STATE_VARIABLE_ProcCallInfo_47, ((MR_Word) transform_hlds__unused_args__wrapper_arg_4), &transform_hlds__unused_args__conv4_STATE_VARIABLE_ModuleInfo_49);
    }
#line 294 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv5_STATE_VARIABLE_ProcCallInfo_47));
#line 294 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_5 = ((MR_Box) (transform_hlds__unused_args__conv4_STATE_VARIABLE_ModuleInfo_49));
#line 294 "unused_args.m"
  }
#line 294 "unused_args.m"
}

#line 285 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_4_p_0_2(
#line 285 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 285 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 285 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 285 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3)
#line 285 "unused_args.m"
{
#line 285 "unused_args.m"
  {
#line 285 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 285 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv2_STATE_VARIABLE_AnalysisInfo_13;

#line 285 "unused_args.m"
    {
#line 285 "unused_args.m"
      transform_hlds__unused_args__record_intermod_dependencies_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv2_STATE_VARIABLE_AnalysisInfo_13);
    }
#line 285 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv2_STATE_VARIABLE_AnalysisInfo_13));
#line 285 "unused_args.m"
  }
#line 285 "unused_args.m"
}

#line 283 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_4_p_0_1(
#line 283 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 283 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 283 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 283 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3)
#line 283 "unused_args.m"
{
#line 283 "unused_args.m"
  {
#line 283 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 283 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_13;

#line 283 "unused_args.m"
    {
#line 283 "unused_args.m"
      transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_13);
    }
#line 283 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_13));
#line 283 "unused_args.m"
  }
#line 283 "unused_args.m"
}

#line 61 "unused_args.m"
void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_4_p_0(
#line 61 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_29,
#line 61 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_30,
#line 61 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Specs_6,
#line 61 "unused_args.m"
  MR_Word * transform_hlds__unused_args__UnusedArgInfos_7)
#line 61 "unused_args.m"
{
#line 235 "unused_args.m"
  {
#line 235 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 235 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeCtorInfo_48_48;
#line 235 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeInfo_49_49;
#line 235 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeCtorInfo_17_80;
#line 235 "unused_args.m"
    MR_Word transform_hlds__unused_args__Globals_8;
#line 235 "unused_args.m"
    MR_Word transform_hlds__unused_args__VeryVerbose_9;
#line 235 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarUsage0_10;
#line 235 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredProcIds_11;
#line 235 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcCallInfo0_12;
#line 235 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarUsage_13;
#line 235 "unused_args.m"
    MR_Word transform_hlds__unused_args__UnusedArgInfo0_14;
#line 235 "unused_args.m"
    MR_Word transform_hlds__unused_args__UnusedArgInfo_15;
#line 235 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredProcIdsToFix_16;
#line 235 "unused_args.m"
    MR_Word transform_hlds__unused_args__MakeOpt_17;
#line 235 "unused_args.m"
    MR_Word transform_hlds__unused_args__IntermodAnalysis_18;
#line 235 "unused_args.m"
    MR_Word transform_hlds__unused_args__DoGather_19;
#line 235 "unused_args.m"
    MR_Word transform_hlds__unused_args__DoWarn_20;
#line 235 "unused_args.m"
    MR_Word transform_hlds__unused_args__MakeAnalysisRegistry_22;
#line 235 "unused_args.m"
    MR_Word transform_hlds__unused_args__DoFixup_27;
#line 235 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_32_32;
#line 235 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_42_42;
#line 235 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcCallInfo0_75;
#line 235 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarUsage0_76;
#line 235 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredIds_77;

#line 236 "unused_args.m"
    {
#line 236 "unused_args.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_29, &transform_hlds__unused_args__Globals_8);
    }
#line 237 "unused_args.m"
    {
#line 237 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_8, (MR_Integer) 46, &transform_hlds__unused_args__VeryVerbose_9);
    }
#line 17431 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__TypeCtorInfo_17_80 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 325 "unused_args.m"
    {
#line 325 "unused_args.m"
      mercury__map__init_1_p_0(transform_hlds__unused_args__TypeCtorInfo_17_80, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0, &transform_hlds__unused_args__ProcCallInfo0_75);
    }
#line 326 "unused_args.m"
    {
#line 326 "unused_args.m"
      mercury__map__init_1_p_0(transform_hlds__unused_args__TypeCtorInfo_17_80, (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], &transform_hlds__unused_args__VarUsage0_76);
    }
#line 327 "unused_args.m"
    {
#line 327 "unused_args.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_29, &transform_hlds__unused_args__PredIds_77);
    }
#line 328 "unused_args.m"
    {
#line 328 "unused_args.m"
      transform_hlds__unused_args__setup_local_var_usage_9_p_0(transform_hlds__unused_args__PredIds_77, transform_hlds__unused_args__VarUsage0_76, &transform_hlds__unused_args__VarUsage0_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__unused_args__PredProcIds_11, transform_hlds__unused_args__ProcCallInfo0_75, &transform_hlds__unused_args__ProcCallInfo0_12, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_29, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_32_32);
    }
#line 241 "unused_args.m"
    {
#line 241 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_117_115_101_100_95_97_114_103_115_95_112_97_115_115_95_95_91_50_93_95_48_5_p_0((MR_Integer) 0, transform_hlds__unused_args__PredProcIds_11, transform_hlds__unused_args__VarUsage0_10, &transform_hlds__unused_args__VarUsage_13);
    }
#line 17458 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__TypeCtorInfo_48_48 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 17460 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__TypeInfo_49_49 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[0];
#line 244 "unused_args.m"
    {
#line 244 "unused_args.m"
      mercury__map__init_1_p_0(transform_hlds__unused_args__TypeCtorInfo_48_48, transform_hlds__unused_args__TypeInfo_49_49, &transform_hlds__unused_args__UnusedArgInfo0_14);
    }
#line 245 "unused_args.m"
    {
#line 245 "unused_args.m"
      transform_hlds__unused_args__get_unused_arg_info_5_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_32_32, transform_hlds__unused_args__PredProcIds_11, transform_hlds__unused_args__VarUsage_13, transform_hlds__unused_args__UnusedArgInfo0_14, &transform_hlds__unused_args__UnusedArgInfo_15);
    }
#line 248 "unused_args.m"
    {
#line 248 "unused_args.m"
      mercury__map__keys_2_p_0(transform_hlds__unused_args__TypeCtorInfo_48_48, transform_hlds__unused_args__TypeInfo_49_49, transform_hlds__unused_args__UnusedArgInfo_15, &transform_hlds__unused_args__PredProcIdsToFix_16);
    }
#line 249 "unused_args.m"
    {
#line 249 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_8, (MR_Integer) 87, &transform_hlds__unused_args__MakeOpt_17);
    }
#line 250 "unused_args.m"
    {
#line 250 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_8, (MR_Integer) 335, &transform_hlds__unused_args__IntermodAnalysis_18);
    }
#line 255 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__MakeOpt_17 == (MR_Integer) 1);
#line 255 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 256 "unused_args.m"
      transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__IntermodAnalysis_18 == (MR_Integer) 0);
#line 259 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 258 "unused_args.m"
      transform_hlds__unused_args__DoGather_19 = (MR_Integer) 1;
#line 259 "unused_args.m"
    else
#line 260 "unused_args.m"
      transform_hlds__unused_args__DoGather_19 = (MR_Integer) 0;
#line 262 "unused_args.m"
    {
#line 262 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_8, (MR_Integer) 10, &transform_hlds__unused_args__DoWarn_20);
    }
#line 264 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__DoWarn_20 == (MR_Integer) 1);
#line 265 "unused_args.m"
    if (!(transform_hlds__unused_args__succeeded))
#line 265 "unused_args.m"
      transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__MakeOpt_17 == (MR_Integer) 1);
#line 272 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 268 "unused_args.m"
      {
#line 268 "unused_args.m"
        MR_Word transform_hlds__unused_args__WarnedPredIds0_21;
#line 268 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_38_38;

#line 268 "unused_args.m"
        {
#line 268 "unused_args.m"
          mercury__set__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, &transform_hlds__unused_args__WarnedPredIds0_21);
        }
#line 271 "unused_args.m"
        {
#line 271 "unused_args.m"
          transform_hlds__unused_args__V_38_38 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0);
        }
#line 269 "unused_args.m"
        {
#line 269 "unused_args.m"
          transform_hlds__unused_args__gather_warnings_and_pragmas_10_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_32_32, transform_hlds__unused_args__UnusedArgInfo_15, transform_hlds__unused_args__DoWarn_20, transform_hlds__unused_args__DoGather_19, transform_hlds__unused_args__PredProcIdsToFix_16, transform_hlds__unused_args__WarnedPredIds0_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__unused_args__Specs_6, transform_hlds__unused_args__V_38_38, transform_hlds__unused_args__UnusedArgInfos_7);
        }
#line 268 "unused_args.m"
      }
#line 272 "unused_args.m"
    else
#line 273 "unused_args.m"
      {
#line 273 "unused_args.m"
        *transform_hlds__unused_args__Specs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 274 "unused_args.m"
        {
#line 274 "unused_args.m"
          mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0, transform_hlds__unused_args__UnusedArgInfos_7);
        }
#line 273 "unused_args.m"
      }
#line 276 "unused_args.m"
    {
#line 276 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_8, (MR_Integer) 89, &transform_hlds__unused_args__MakeAnalysisRegistry_22);
    }
#line 288 "unused_args.m"
#line 288 "unused_args.m"
    switch (transform_hlds__unused_args__MakeAnalysisRegistry_22) {
#line 288 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 288 "unused_args.m"
      case (MR_Integer) 0:
#line 289 "unused_args.m"
        transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_42_42 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_32_32;
#line 288 "unused_args.m"
        break;
#line 288 "unused_args.m"
      case (MR_Integer) 1:
#line 279 "unused_args.m"
        {
#line 279 "unused_args.m"
          MR_Word transform_hlds__unused_args__TypeCtorInfo_57_57;
#line 279 "unused_args.m"
          MR_Word transform_hlds__unused_args__AnalysisInfo0_23;
#line 279 "unused_args.m"
          MR_Word transform_hlds__unused_args__PredIds_24;
#line 279 "unused_args.m"
          MR_Word transform_hlds__unused_args__AnalysisInfo1_25;
#line 279 "unused_args.m"
          MR_Word transform_hlds__unused_args__AnalysisInfo_26;
#line 279 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_40_40;
#line 279 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_41_41;
#line 282 "unused_args.m"
          MR_Box transform_hlds__unused_args__conv1_AnalysisInfo1_25;
#line 285 "unused_args.m"
          MR_Box transform_hlds__unused_args__conv3_AnalysisInfo_26;

#line 280 "unused_args.m"
          {
#line 280 "unused_args.m"
            hlds__hlds_module__module_info_get_analysis_info_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_32_32, &transform_hlds__unused_args__AnalysisInfo0_23);
          }
#line 281 "unused_args.m"
          {
#line 281 "unused_args.m"
            hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_32_32, &transform_hlds__unused_args__PredIds_24);
          }
#line 283 "unused_args.m"
          {
#line 283 "unused_args.m"
            transform_hlds__unused_args__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 283 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_40_40, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_5[0]));
#line 283 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_40_40, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_process_module_4_p_0_1));
#line 283 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 283 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_40_40, 3) = ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_32_32));
#line 283 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_40_40, 4) = ((MR_Box) (transform_hlds__unused_args__UnusedArgInfo_15));
#line 283 "unused_args.m"
          }
#line 17616 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__TypeCtorInfo_57_57 = (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0;
#line 282 "unused_args.m"
          {
#line 282 "unused_args.m"
            mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__unused_args__TypeCtorInfo_57_57, transform_hlds__unused_args__V_40_40, transform_hlds__unused_args__PredIds_24, ((MR_Box) (transform_hlds__unused_args__AnalysisInfo0_23)), &transform_hlds__unused_args__conv1_AnalysisInfo1_25);
          }
#line 282 "unused_args.m"
          transform_hlds__unused_args__AnalysisInfo1_25 = ((MR_Word) transform_hlds__unused_args__conv1_AnalysisInfo1_25);
#line 285 "unused_args.m"
          {
#line 285 "unused_args.m"
            transform_hlds__unused_args__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 285 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_41_41, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_6[0]));
#line 285 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_41_41, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_process_module_4_p_0_2));
#line 285 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 285 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_41_41, 3) = ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_32_32));
#line 285 "unused_args.m"
          }
#line 285 "unused_args.m"
          {
#line 285 "unused_args.m"
            mercury__list__foldl_4_p_0(transform_hlds__unused_args__TypeCtorInfo_48_48, transform_hlds__unused_args__TypeCtorInfo_57_57, transform_hlds__unused_args__V_41_41, transform_hlds__unused_args__PredProcIds_11, ((MR_Box) (transform_hlds__unused_args__AnalysisInfo1_25)), &transform_hlds__unused_args__conv3_AnalysisInfo_26);
          }
#line 285 "unused_args.m"
          transform_hlds__unused_args__AnalysisInfo_26 = ((MR_Word) transform_hlds__unused_args__conv3_AnalysisInfo_26);
#line 287 "unused_args.m"
          {
#line 287 "unused_args.m"
            hlds__hlds_module__module_info_set_analysis_info_3_p_0(transform_hlds__unused_args__AnalysisInfo_26, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_32_32, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_42_42);
          }
#line 279 "unused_args.m"
        }
#line 288 "unused_args.m"
        break;
#line 288 "unused_args.m"
    }
#line 291 "unused_args.m"
    {
#line 291 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_8, (MR_Integer) 354, &transform_hlds__unused_args__DoFixup_27);
    }
#line 308 "unused_args.m"
#line 308 "unused_args.m"
    switch (transform_hlds__unused_args__DoFixup_27) {
#line 308 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 308 "unused_args.m"
      case (MR_Integer) 0:
#line 309 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_30 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_42_42;
#line 308 "unused_args.m"
        break;
#line 308 "unused_args.m"
      case (MR_Integer) 1:
#line 293 "unused_args.m"
        {
#line 293 "unused_args.m"
          MR_Word transform_hlds__unused_args__ProcCallInfo_28;
#line 293 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_44_44;
#line 293 "unused_args.m"
          MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_45_45;
#line 293 "unused_args.m"
          MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_46_46;
#line 294 "unused_args.m"
          MR_Box transform_hlds__unused_args__conv7_ProcCallInfo_28;
#line 294 "unused_args.m"
          MR_Box transform_hlds__unused_args__conv6_STATE_VARIABLE_ModuleInfo_45_45;

#line 294 "unused_args.m"
          {
#line 294 "unused_args.m"
            transform_hlds__unused_args__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 294 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_44_44, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_7[0]));
#line 294 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_44_44, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_process_module_4_p_0_3));
#line 294 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 294 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_44_44, 3) = ((MR_Box) (transform_hlds__unused_args__UnusedArgInfo_15));
#line 294 "unused_args.m"
          }
#line 294 "unused_args.m"
          {
#line 294 "unused_args.m"
            mercury__list__foldl2_6_p_0(transform_hlds__unused_args__TypeCtorInfo_48_48, (MR_Word) &transform_hlds__unused_args_scalar_common_2[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__unused_args__V_44_44, transform_hlds__unused_args__PredProcIdsToFix_16, ((MR_Box) (transform_hlds__unused_args__ProcCallInfo0_12)), &transform_hlds__unused_args__conv7_ProcCallInfo_28, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_42_42)), &transform_hlds__unused_args__conv6_STATE_VARIABLE_ModuleInfo_45_45);
          }
#line 294 "unused_args.m"
          transform_hlds__unused_args__ProcCallInfo_28 = ((MR_Word) transform_hlds__unused_args__conv7_ProcCallInfo_28);
#line 294 "unused_args.m"
          transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_45_45 = ((MR_Word) transform_hlds__unused_args__conv6_STATE_VARIABLE_ModuleInfo_45_45);
#line 298 "unused_args.m"
          {
#line 298 "unused_args.m"
            transform_hlds__unused_args__unused_args_fixup_module_6_p_0(transform_hlds__unused_args__VeryVerbose_9, transform_hlds__unused_args__VarUsage_13, transform_hlds__unused_args__PredProcIds_11, transform_hlds__unused_args__ProcCallInfo_28, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_45_45, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_46_46);
          }
#line 301 "unused_args.m"
          {
#line 301 "unused_args.m"
            transform_hlds__unused_args__succeeded = mercury__map__is_empty_1_p_0(transform_hlds__unused_args__TypeCtorInfo_48_48, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0, transform_hlds__unused_args__ProcCallInfo_28);
          }
#line 303 "unused_args.m"
          if (transform_hlds__unused_args__succeeded)
#line 303 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_30 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_46_46;
#line 303 "unused_args.m"
          else
#line 306 "unused_args.m"
            {
#line 306 "unused_args.m"
              hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_46_46, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_30);
#line 306 "unused_args.m"
              return;
            }
#line 293 "unused_args.m"
        }
#line 308 "unused_args.m"
        break;
#line 308 "unused_args.m"
    }
#line 235 "unused_args.m"
  }
#line 61 "unused_args.m"
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
