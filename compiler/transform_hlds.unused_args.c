/*
** Automatically generated from `unused_args.m'
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



#line 909 "unused_args.m"
struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s {
#line 909 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__VarUsage_1;
#line 909 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5;
#line 912 "unused_args.m"
  MR_bool transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded;
#line 915 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__VarDep0_20;
#line 915 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgDep0_21;
#line 921 "unused_args.m"
  jmp_buf transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_0;
#line 921 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__PredProcId_23;
#line 921 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgVar_24;
#line 921 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__Argument_34;
#line 921 "unused_args.m"
  MR_Box transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv1_Argument_34;
#line 929 "unused_args.m"
  jmp_buf transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_1;
#line 929 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__X_35;
#line 929 "unused_args.m"
  MR_Box transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv3_X_35;
#line 909 "unused_args.m"
};


#line 188 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0;

#line 191 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1builtin__type_ctor_info_int_0;

#line 194 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__unused_args__type_ctor_info_new_proc_info_0;

#line 197 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 200 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 203 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 206 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 209 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unused_args__type_ctor_info_usage_info_0;

#line 212 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__analysis__pti_analysis_result_2__plain_transform_hlds__unused_args__type_ctor_info_unused_args_call_0__plain_transform_hlds__unused_args__type_ctor_info_unused_args_answer_0;

#line 215 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

#line 218 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0;

#line 221 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0;

#line 224 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 227 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_arg_var_in_proc_0_0[2];

#line 230 "transform_hlds.unused_args.c"
static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_arg_var_in_proc_0_0;

#line 233 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_arg_var_in_proc_0_0[1];

#line 236 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_arg_var_in_proc_0[1];

#line 239 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_arg_var_in_proc_0[1];

#line 242 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_arg_var_in_proc_0[1];

#line 245 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__unused_args__type_ctor_info_new_proc_info_0;

#line 248 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 251 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 254 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 257 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_fixup_info_0_0[5];

#line 260 "transform_hlds.unused_args.c"
static const MR_ConstString transform_hlds__unused_args__transform_hlds__unused_args__field_names_fixup_info_0_0[5];

#line 263 "transform_hlds.unused_args.c"
static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_fixup_info_0_0;

#line 266 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_fixup_info_0_0[1];

#line 269 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_fixup_info_0[1];

#line 272 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_fixup_info_0[1];

#line 275 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_fixup_info_0[1];

#line 278 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_new_proc_info_0_0[4];

#line 281 "transform_hlds.unused_args.c"
static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_new_proc_info_0_0;

#line 284 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_new_proc_info_0_0[1];

#line 287 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_new_proc_info_0[1];

#line 290 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_new_proc_info_0[1];

#line 293 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_new_proc_info_0[1];

#line 296 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_answer_0[1];

#line 299 "transform_hlds.unused_args.c"
static const MR_NotagFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__notag_functor_desc_unused_args_answer_0;

#line 302 "transform_hlds.unused_args.c"
static const MR_EnumFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_unused_args_call_0_0;

#line 305 "transform_hlds.unused_args.c"
static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_value_ordered_unused_args_call_0[1];

#line 308 "transform_hlds.unused_args.c"
static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_name_ordered_unused_args_call_0[1];

#line 311 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_call_0[1];

#line 314 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_func_info_0[1];

#line 317 "transform_hlds.unused_args.c"
static const MR_NotagFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__notag_functor_desc_unused_args_func_info_0;

#line 320 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_unused_args_info_0_0[2];

#line 323 "transform_hlds.unused_args.c"
static const MR_ConstString transform_hlds__unused_args__transform_hlds__unused_args__field_names_unused_args_info_0_0[2];

#line 326 "transform_hlds.unused_args.c"
static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_unused_args_info_0_0;

#line 329 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_unused_args_info_0_0[1];

#line 332 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_unused_args_info_0[1];

#line 335 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_unused_args_info_0[1];

#line 338 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_info_0[1];

#line 341 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 344 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__set_ordlist__ti_set_ordlist_1transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0;

#line 347 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_usage_info_0_0[2];

#line 350 "transform_hlds.unused_args.c"
static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_usage_info_0_0;

#line 353 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_usage_info_0_0[1];

#line 356 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_usage_info_0[1];

#line 359 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_usage_info_0[1];

#line 362 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_usage_info_0[1];

#line 365 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0;

#line 368 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_warning_info_0_0[4];

#line 371 "transform_hlds.unused_args.c"
static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_warning_info_0_0;

#line 374 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_warning_info_0_0[1];

#line 377 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_warning_info_0[1];

#line 380 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_warning_info_0[1];

#line 383 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_warning_info_0[1];

#line 386 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____arg_var_in_proc_0_0_10001(
#line 389 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 391 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 394 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____arg_var_in_proc_0_0_10001(
#line 397 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 399 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 401 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 404 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____fixup_info_0_0_10001(
#line 407 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 409 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 412 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____fixup_info_0_0_10001(
#line 415 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 417 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 419 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 422 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____new_proc_info_0_0_10001(
#line 425 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 427 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 430 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____new_proc_info_0_0_10001(
#line 433 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 435 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 437 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 440 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____proc_call_info_0_0_10001(
#line 443 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 445 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 448 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____proc_call_info_0_0_10001(
#line 451 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 453 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 455 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 458 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_answer_0_0_10001(
#line 461 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 463 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 466 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_answer_0_0_10001(
#line 469 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 471 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 473 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 476 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_call_0_0_10001(
#line 479 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 481 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 484 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_call_0_0_10001(
#line 487 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 489 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 491 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 494 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_func_info_0_0_10001(
#line 497 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 499 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 502 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_func_info_0_0_10001(
#line 505 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 507 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 509 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 512 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_info_0_0_10001(
#line 515 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 517 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 520 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_info_0_0_10001(
#line 523 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 525 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 527 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 530 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____usage_info_0_0_10001(
#line 533 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 535 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 538 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____usage_info_0_0_10001(
#line 541 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 543 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 545 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 548 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_dep_0_0_10001(
#line 551 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 553 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 556 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____var_dep_0_0_10001(
#line 559 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 561 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 563 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 566 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_usage_0_0_10001(
#line 569 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 571 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 574 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____var_usage_0_0_10001(
#line 577 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 579 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 581 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 584 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____warning_info_0_0_10001(
#line 587 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 589 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2);

#line 592 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____warning_info_0_0_10001(
#line 595 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 597 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 599 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 602 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__to_term_1_1_f_0_10001(
#line 605 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 607 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1);

#line 610 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__from_term_2_2_p_0_10001(
#line 613 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 615 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 617 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2);

#line 620 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__to_term_1_1_f_0_10001(
#line 623 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 625 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1);

#line 628 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__from_term_2_2_p_0_10001(
#line 631 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 633 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 635 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2);

#line 638 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 641 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 643 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 645 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 647 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 650 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__equivalent_3_3_p_0_10001(
#line 653 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 655 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 657 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 659 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 662 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 665 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 667 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 669 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 671 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 674 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__equivalent_3_3_p_0_10001(
#line 677 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 679 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 681 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 683 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3);

#line 686 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_name_2_2_f_0_10001(
#line 689 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg);

#line 692 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001(
#line 695 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg);

#line 698 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001(
#line 701 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg);

#line 704 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__bottom_2_2_f_0_10001(
#line 707 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 709 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1);

#line 712 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__top_2_2_f_0_10001(
#line 715 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 717 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1);

#line 720 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__get_func_info_6_6_p_0_10001(
#line 723 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 725 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 727 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 729 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3,
#line 731 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_6);

#line 204 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_f_0(void);

#line 200 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(void);

#line 197 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0(void);

#line 219 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(
#line 219 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_10,
#line 219 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_3);

#line 214 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_93_95_48_3_p_0(
#line 214 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer1_5,
#line 214 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer2_6);

#line 183 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_103_101_116_95_102_117_110_99_95_105_110_102_111_95_54_95_95_91_52_44_32_53_93_95_48_6_p_0(
#line 183 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_17,
#line 183 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleName_18,
#line 183 "unused_args.m"
  MR_Word transform_hlds__unused_args__FuncId_19,
#line 183 "unused_args.m"
  MR_Word * transform_hlds__unused_args__FuncInfo_22);

#line 182 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 181 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_50_95_95_91_50_93_95_48_2_f_0(
#line 181 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1);

#line 180 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 179 "unused_args.m"
static MR_Integer MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 178 "unused_args.m"
static MR_String MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 1839 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_117_110_117_115_101_100_95_97_114_103_115_95_95_91_49_93_95_48_3_f_0(
#line 1839 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredInfo_6,
#line 1839 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_7);

#line 1787 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_103_97_116_104_101_114_95_119_97_114_110_105_110_103_95_95_91_49_93_95_48_9_p_0(
#line 1787 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredInfo_11,
#line 1787 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_12,
#line 1787 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_13,
#line 1787 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs0_14,
#line 1787 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_26,
#line 1787 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_27,
#line 1787 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Specs_0_28,
#line 1787 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Specs_29);

#line 1259 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0(
#line 1259 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ArgNo_5,
#line 1259 "unused_args.m"
  MR_Word transform_hlds__unused_args__ElemsToRemove_6,
#line 1259 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_List_0_14,
#line 1259 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_List_15);

#line 1117 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(
#line 1117 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_8,
#line 1117 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredStatus_9,
#line 1117 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__4_4,
#line 1117 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44,
#line 1117 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_PredInfo_45);

#line 862 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_117_115_101_100_95_97_114_103_115_95_112_97_115_115_95_95_91_50_93_95_48_5_p_0(
#line 862 "unused_args.m"
  MR_Integer transform_hlds__unused_args__PassNum_6,
#line 862 "unused_args.m"
  MR_Word transform_hlds__unused_args__LocalPredProcIds_8,
#line 862 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_12,
#line 862 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_13);

#line 1014 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_create_new_pred__1014__1_3_p_0(
#line 1014 "unused_args.m"
  MR_Word transform_hlds__unused_args__FuncInfo_25,
#line 1014 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer_26,
#line 1014 "unused_args.m"
  MR_Word transform_hlds__unused_args__LambdaHeadVar__1_56);

#line 1007 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__IntroducedFrom__func__unused_args_create_new_pred__1007__1_1_f_0(
#line 1007 "unused_args.m"
  MR_Word transform_hlds__unused_args__LambdaHeadVar__1_54);

#line 683 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__683__1_2_p_0(
#line 683 "unused_args.m"
  MR_Word transform_hlds__unused_args__LHS_49,
#line 683 "unused_args.m"
  MR_Word transform_hlds__unused_args__CellVar_58);

#line 701 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__701__1_2_p_0(
#line 701 "unused_args.m"
  MR_Word transform_hlds__unused_args__LHS_49,
#line 701 "unused_args.m"
  MR_Word transform_hlds__unused_args__CellVar_144);

#line 660 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__660__1_2_p_0(
#line 660 "unused_args.m"
  MR_Word transform_hlds__unused_args__LambdaHeadVar__1_116,
#line 660 "unused_args.m"
  MR_Word * transform_hlds__unused_args__LambdaHeadVar__2_117);

#line 427 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__setup_proc_args__427__1_3_p_0(
#line 427 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVars_35,
#line 427 "unused_args.m"
  MR_Integer transform_hlds__unused_args__HeadVar__2_84,
#line 427 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__3_85);

#line 207 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__from_term_2_2_p_0(
#line 207 "unused_args.m"
  MR_Word transform_hlds__unused_args__Term_3);

#line 204 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__to_term_1_1_f_0(void);

#line 226 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__from_term_2_2_p_0(
#line 226 "unused_args.m"
  MR_Word transform_hlds__unused_args__Term_4,
#line 226 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2);

#line 223 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__to_term_1_1_f_0(
#line 223 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1);

#line 200 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__equivalent_3_3_p_0(
#line 200 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_7);

#line 197 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__more_precise_than_3_3_p_0(
#line 197 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_4);

#line 219 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__equivalent_3_3_p_0(
#line 219 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_9,
#line 219 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_10,
#line 219 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_3);

#line 214 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__more_precise_than_3_3_p_0(
#line 214 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_4,
#line 214 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer1_5,
#line 214 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer2_6);

#line 183 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__get_func_info_6_6_p_0(
#line 183 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_17,
#line 183 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleName_18,
#line 183 "unused_args.m"
  MR_Word transform_hlds__unused_args__FuncId_19,
#line 183 "unused_args.m"
  MR_Word * transform_hlds__unused_args__FuncInfo_22);

#line 182 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__top_2_2_f_0(
#line 182 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_12);

#line 181 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__bottom_2_2_f_0(
#line 181 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1);

#line 180 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0(void);

#line 179 "unused_args.m"
static MR_Integer MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_version_number_2_2_f_0(void);

#line 178 "unused_args.m"
static MR_String MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_name_2_2_f_0(void);

#line 150 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____warning_info_0_0(
#line 150 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 150 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 150 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 150 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____warning_info_0_0(
#line 150 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 150 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 148 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____var_usage_0_0(
#line 148 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 148 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 148 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 148 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_usage_0_0(
#line 148 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 148 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 145 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____var_dep_0_0(
#line 145 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 145 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 145 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 145 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_dep_0_0(
#line 145 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 145 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 140 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____usage_info_0_0(
#line 140 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 140 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 140 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 140 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____usage_info_0_0(
#line 140 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 140 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 600 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_info_0_0(
#line 600 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 600 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 600 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 600 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_info_0_0(
#line 600 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 600 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 971 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____proc_call_info_0_0(
#line 971 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 971 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 971 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 971 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____proc_call_info_0_0(
#line 971 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 971 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 975 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____new_proc_info_0_0(
#line 975 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 975 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 975 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 975 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____new_proc_info_0_0(
#line 975 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 975 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 1391 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____fixup_info_0_0(
#line 1391 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 1391 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 1391 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 1391 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____fixup_info_0_0(
#line 1391 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1391 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 131 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____arg_var_in_proc_0_0(
#line 131 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 131 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 131 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 131 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____arg_var_in_proc_0_0(
#line 131 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 131 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 1978 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_2_4_p_0(
#line 1978 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 1978 "unused_args.m"
  MR_Word transform_hlds__unused_args__CalleePredProcId_6,
#line 1978 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_17,
#line 1978 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_18);

#line 1975 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_4_p_0_1(
#line 1975 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1975 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1975 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1975 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3);

#line 1967 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_4_p_0(
#line 1967 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 1967 "unused_args.m"
  MR_Word transform_hlds__unused_args__CallerPredProcId_6,
#line 1967 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_12,
#line 1967 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_13);

#line 1930 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__maybe_record_intermod_unused_args_2_7_p_0(
#line 1930 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_8,
#line 1930 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_9,
#line 1930 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_10,
#line 1930 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredInfo_11,
#line 1930 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_12,
#line 1930 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_19,
#line 1930 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_20);

#line 1926 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0_1(
#line 1926 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1926 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1926 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1926 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3);

#line 1918 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0(
#line 1918 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_6,
#line 1918 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_7,
#line 1918 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_8,
#line 1918 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_12,
#line 1918 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_13);

#line 1874 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__format_arg_list_2_2_f_0(
#line 1874 "unused_args.m"
  MR_Integer transform_hlds__unused_args__First_4,
#line 1874 "unused_args.m"
  MR_Word transform_hlds__unused_args__List_5);

#line 1822 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__drop_poly_inserted_args_3_p_0(
#line 1822 "unused_args.m"
  MR_Integer transform_hlds__unused_args__NumInserted_1,
#line 1822 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 1822 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__3_3);

#line 1706 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__gather_warnings_and_pragmas_10_p_0(
#line 1706 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_1,
#line 1706 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_2,
#line 1706 "unused_args.m"
  MR_Word transform_hlds__unused_args__DoWarn_3,
#line 1706 "unused_args.m"
  MR_Word transform_hlds__unused_args__DoPragma_4,
#line 1706 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__5_5,
#line 1706 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_6,
#line 1706 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Specs_0_7,
#line 1706 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Specs_8,
#line 1706 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0_9,
#line 1706 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_10);

#line 1653 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__check_deconstruct_args_6_p_0(
#line 1653 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_7,
#line 1653 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedVars_8,
#line 1653 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_9,
#line 1653 "unused_args.m"
  MR_Word transform_hlds__unused_args__Modes_10,
#line 1653 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_SomeUsed_0_25,
#line 1653 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_12);

#line 1610 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__need_unify_4_p_0(
#line 1610 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 1610 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedVars_6,
#line 1610 "unused_args.m"
  MR_Word transform_hlds__unused_args__Unify_7,
#line 1610 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_8);

#line 1592 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_cases_6_p_0(
#line 1592 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1592 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2,
#line 1592 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_3,
#line 1592 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_4,
#line 1592 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5,
#line 1592 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_6);

#line 1577 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_disjuncts_6_p_0(
#line 1577 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1577 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2,
#line 1577 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_3,
#line 1577 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_4,
#line 1577 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5,
#line 1577 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_6);

#line 1554 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_conjuncts_6_p_0(
#line 1554 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1554 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2,
#line 1554 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_3,
#line 1554 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_4,
#line 1554 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5,
#line 1554 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_6);

#line 1522 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__rename_apart_unused_foreign_arg_8_p_0(
#line 1522 "unused_args.m"
  MR_Word transform_hlds__unused_args__Arg0_9,
#line 1522 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Arg_10,
#line 1522 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Subst_0_26,
#line 1522 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Subst_27,
#line 1522 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_28,
#line 1522 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_29,
#line 1522 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_30,
#line 1522 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_31);

#line 1510 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0_2(
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

#line 1508 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0_1(
#line 1508 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1508 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1508 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2,
#line 1508 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_3,
#line 1508 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_4,
#line 1508 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_5,
#line 1508 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_6,
#line 1508 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_7,
#line 1508 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_8);

#line 1418 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(
#line 1418 "unused_args.m"
  MR_Word transform_hlds__unused_args__Goal0_6,
#line 1418 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Goal_7,
#line 1418 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_76,
#line 1418 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_77,
#line 1418 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_9);

#line 1402 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(
#line 1402 "unused_args.m"
  MR_Word transform_hlds__unused_args__Goal0_6,
#line 1402 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Goal_7,
#line 1402 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_15,
#line 1402 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_16,
#line 1402 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_9);

#line 1328 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__do_unused_args_fixup_proc_5_p_0(
#line 1328 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_6,
#line 1328 "unused_args.m"
  MR_Word transform_hlds__unused_args__OldPredProcId_7,
#line 1328 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcCallInfo_8,
#line 1328 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo0_9,
#line 1328 "unused_args.m"
  MR_Word * transform_hlds__unused_args__ModuleInfo_10);

#line 1303 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_proc_6_p_0(
#line 1303 "unused_args.m"
  MR_Word transform_hlds__unused_args__VeryVerbose_7,
#line 1303 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_8,
#line 1303 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcCallInfo_9,
#line 1303 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcId_10,
#line 1303 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_18,
#line 1303 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_19);

#line 1300 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_module_6_p_0_1(
#line 1300 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1300 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1300 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1300 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3);

#line 1294 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_module_6_p_0(
#line 1294 "unused_args.m"
  MR_Word transform_hlds__unused_args__VeryVerbose_7,
#line 1294 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_8,
#line 1294 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcIds_9,
#line 1294 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcCallInfo_10,
#line 1294 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_12,
#line 1294 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_13);

#line 1281 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__get_unused_arg_nos_4_p_0(
#line 1281 "unused_args.m"
  MR_Word transform_hlds__unused_args__LocalVars_1,
#line 1281 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 1281 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ArgNo_3,
#line 1281 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__4_4);

#line 1224 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__make_imported_unused_args_pred_info_6_p_0(
#line 1224 "unused_args.m"
  MR_Word transform_hlds__unused_args__OptProc_7,
#line 1224 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_8,
#line 1224 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_0_31,
#line 1224 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_32,
#line 1224 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_33,
#line 1224 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_34);

#line 1185 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__create_call_goal_7_p_0(
#line 1185 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_8,
#line 1185 "unused_args.m"
  MR_Word transform_hlds__unused_args__NewPredId_9,
#line 1185 "unused_args.m"
  MR_Integer transform_hlds__unused_args__NewProcId_10,
#line 1185 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredModule_11,
#line 1185 "unused_args.m"
  MR_String transform_hlds__unused_args__PredName_12,
#line 1185 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34,
#line 1185 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OldProc_35);

#line 1091 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__make_intermod_proc_10_p_0(
#line 1091 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_11,
#line 1091 "unused_args.m"
  MR_Word transform_hlds__unused_args__NewPredId_12,
#line 1091 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_13,
#line 1091 "unused_args.m"
  MR_String transform_hlds__unused_args__NewPredName_14,
#line 1091 "unused_args.m"
  MR_Word transform_hlds__unused_args__OrigPredInfo_15,
#line 1091 "unused_args.m"
  MR_Word transform_hlds__unused_args__OrigProcInfo_16,
#line 1091 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_17,
#line 1091 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs2_18,
#line 1091 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_35,
#line 1091 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_36);

#line 1086 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_4(
#line 1086 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1086 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1086 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1086 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3);

#line 1019 "unused_args.m"
static MR_Box MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_3(
#line 1019 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1019 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1);

#line 1014 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_2(
#line 1014 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1014 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1);

#line 1007 "unused_args.m"
static MR_Box MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_1(
#line 1007 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1007 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1);

#line 985 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0(
#line 985 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_7,
#line 985 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 985 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_0_46,
#line 985 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_47,
#line 985 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48,
#line 985 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_49);

#line 949 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__get_unused_arg_info_5_p_0(
#line 949 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_1,
#line 949 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 949 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_3,
#line 949 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_0_4,
#line 949 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_5);

#line 921 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_1(
#line 921 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 921 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_3(
#line 921 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 921 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_2(
#line 921 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 921 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_4(
#line 921 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 929 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_5(
#line 929 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 929 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_7(
#line 929 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 929 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_6(
#line 929 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 929 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_8(
#line 929 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 909 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0(
#line 909 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_1,
#line 909 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 909 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_3,
#line 909 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_4,
#line 909 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_LocalVars_0_5,
#line 909 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_LocalVars_6);

#line 881 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_single_pass_5_p_0(
#line 881 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 881 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_2,
#line 881 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_3,
#line 881 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4,
#line 881 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_5);

#line 847 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(
#line 847 "unused_args.m"
  MR_Word transform_hlds__unused_args__Info_1,
#line 847 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 847 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3,
#line 847 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_4);

#line 841 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__list_case_to_list_goal_2_p_0(
#line 841 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 841 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2);

#line 826 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_construction_aliases_4_p_0(
#line 826 "unused_args.m"
  MR_Word transform_hlds__unused_args__Alias_1,
#line 826 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 826 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3,
#line 826 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_4);

#line 776 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__partition_deconstruct_args_5_p_0(
#line 776 "unused_args.m"
  MR_Word transform_hlds__unused_args__Info_6,
#line 776 "unused_args.m"
  MR_Word transform_hlds__unused_args__ArgVars_7,
#line 776 "unused_args.m"
  MR_Word transform_hlds__unused_args__ArgModes_8,
#line 776 "unused_args.m"
  MR_Word * transform_hlds__unused_args__InputVars_9,
#line 776 "unused_args.m"
  MR_Word * transform_hlds__unused_args__OutputVars_10);

#line 767 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_rev_arg_dep_5_p_0(
#line 767 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_6,
#line 767 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcId_7,
#line 767 "unused_args.m"
  MR_Word transform_hlds__unused_args__Arg_8,
#line 767 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_10,
#line 767 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_11);

#line 732 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_pred_call_arg_dep_5_p_0(
#line 732 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcId_6,
#line 732 "unused_args.m"
  MR_Word transform_hlds__unused_args__LocalArguments_7,
#line 732 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVarIds_8,
#line 732 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_18,
#line 732 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_19);

#line 683 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_3(
#line 683 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg);

#line 701 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_2(
#line 701 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg);

#line 660 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_1(
#line 660 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 660 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 660 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2);

#line 606 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(
#line 606 "unused_args.m"
  MR_Word transform_hlds__unused_args__Info_5,
#line 606 "unused_args.m"
  MR_Word transform_hlds__unused_args__Goal_6,
#line 606 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87,
#line 606 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);

#line 584 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__set_var_used_3_p_0(
#line 584 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_4,
#line 584 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_6,
#line 584 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_7);

#line 578 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__set_list_vars_used_3_p_0(
#line 578 "unused_args.m"
  MR_Word transform_hlds__unused_args__Vars_4,
#line 578 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_6,
#line 578 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_7);

#line 565 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_aliases_4_p_0(
#line 565 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_5,
#line 565 "unused_args.m"
  MR_Word transform_hlds__unused_args__Aliases_6,
#line 565 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_12,
#line 565 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_13);

#line 558 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__local_var_is_used_2_p_0(
#line 558 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarDep_3,
#line 558 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_4);

#line 545 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_output_args_4_p_0_1(
#line 545 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 545 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 545 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 545 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3);

#line 539 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_output_args_4_p_0(
#line 539 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 539 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcInfo_6,
#line 539 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_9,
#line 539 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_10);

#line 529 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__tvar_to_type_info_var_3_p_0(
#line 529 "unused_args.m"
  MR_Word transform_hlds__unused_args__RttiVarMaps_4,
#line 529 "unused_args.m"
  MR_Word transform_hlds__unused_args__TVar_5,
#line 529 "unused_args.m"
  MR_Word * transform_hlds__unused_args__TypeInfoVar_6);

#line 527 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_2(
#line 527 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 527 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 527 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 527 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3);

#line 526 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_1(
#line 526 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 526 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 526 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2);

#line 511 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0(
#line 511 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 511 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarTypeMap_2,
#line 511 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcId_3,
#line 511 "unused_args.m"
  MR_Word transform_hlds__unused_args__RttiVarMaps_4,
#line 511 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_5,
#line 511 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_6);

#line 491 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__initialise_vardep_3_p_0(
#line 491 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 491 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_2,
#line 491 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_3);

#line 427 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_proc_args_10_p_0_1(
#line 427 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 427 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 427 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2);

#line 391 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_proc_args_10_p_0(
#line 391 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_11,
#line 391 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_12,
#line 391 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_47,
#line 391 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_48,
#line 391 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0_49,
#line 391 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_50,
#line 391 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_51,
#line 391 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OptProcs_52,
#line 391 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53,
#line 391 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_54);

#line 375 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_pred_args_10_p_0(
#line 375 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_1,
#line 375 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 375 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_3,
#line 375 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_4,
#line 375 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0_5,
#line 375 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_6,
#line 375 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_7,
#line 375 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OptProcs_8,
#line 375 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_9,
#line 375 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_10);

#line 331 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_local_var_usage_9_p_0(
#line 331 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 331 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_2,
#line 331 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_3,
#line 331 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__4_4,
#line 331 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__5_5,
#line 331 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_6,
#line 331 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OptProcs_7,
#line 331 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_8,
#line 331 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_9);

#line 171 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__get_unused_args_1_f_0(
#line 171 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_3);

#line 292 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_4_p_0_3(
#line 292 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 292 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 292 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 292 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3,
#line 292 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_4,
#line 292 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_5);

#line 283 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_4_p_0_2(
#line 283 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 283 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 283 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 283 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3);

#line 281 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_4_p_0_1(
#line 281 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 281 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 281 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 281 "unused_args.m"
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



#line 2560 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2568 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0
  }
};

#line 2577 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__unused_args__type_ctor_info_new_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0
  }
};

#line 2586 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2594 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2602 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2610 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2618 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unused_args__type_ctor_info_usage_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0
  }
};

#line 2627 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__analysis__pti_analysis_result_2__plain_transform_hlds__unused_args__type_ctor_info_unused_args_call_0__plain_transform_hlds__unused_args__type_ctor_info_unused_args_answer_0 = {
  &analysis__analysis__type_ctor_info_analysis_result_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0,
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0
  }
};

#line 2636 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2644 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0
  }
};

#line 2653 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0
  }
};

#line 2662 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2671 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_arg_var_in_proc_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2677 "transform_hlds.unused_args.c"
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

#line 2692 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_arg_var_in_proc_0_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_arg_var_in_proc_0_0
};

#line 2697 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_arg_var_in_proc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_arg_var_in_proc_0_0
  }
};

#line 2706 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_arg_var_in_proc_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_arg_var_in_proc_0_0
};

#line 2711 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_arg_var_in_proc_0[1] = {
  (MR_Integer) 0
};

#line 2716 "transform_hlds.unused_args.c"
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

#line 2733 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__unused_args__type_ctor_info_new_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0
  }
};

#line 2742 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2750 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2758 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2767 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_fixup_info_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__unused_args__type_ctor_info_new_proc_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 2776 "transform_hlds.unused_args.c"
static const MR_ConstString transform_hlds__unused_args__transform_hlds__unused_args__field_names_fixup_info_0_0[5] = {
  (MR_String) "fixup_module_info",
  (MR_String) "fixup_proc_call_info",
  (MR_String) "fixup_unused_vars",
  (MR_String) "fixup_varset",
  (MR_String) "fixup_vartypes"
};

#line 2785 "transform_hlds.unused_args.c"
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

#line 2800 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_fixup_info_0_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_fixup_info_0_0
};

#line 2805 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_fixup_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_fixup_info_0_0
  }
};

#line 2814 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_fixup_info_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_fixup_info_0_0
};

#line 2819 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_fixup_info_0[1] = {
  (MR_Integer) 0
};

#line 2824 "transform_hlds.unused_args.c"
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

#line 2841 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_new_proc_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 2849 "transform_hlds.unused_args.c"
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

#line 2864 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_new_proc_info_0_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_new_proc_info_0_0
};

#line 2869 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_new_proc_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_new_proc_info_0_0
  }
};

#line 2878 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_new_proc_info_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_new_proc_info_0_0
};

#line 2883 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_new_proc_info_0[1] = {
  (MR_Integer) 0
};

#line 2888 "transform_hlds.unused_args.c"
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

#line 2905 "transform_hlds.unused_args.c"
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

#line 2922 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_answer_0[1] = {
  (MR_Integer) 0
};

#line 2927 "transform_hlds.unused_args.c"
static const MR_NotagFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__notag_functor_desc_unused_args_answer_0 = {
  (MR_String) "unused_args",
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_String) "args"
};

#line 2934 "transform_hlds.unused_args.c"
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

#line 2951 "transform_hlds.unused_args.c"
static const MR_EnumFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_unused_args_call_0_0 = {
  (MR_String) "unused_args_call",
  (MR_Integer) 0
};

#line 2957 "transform_hlds.unused_args.c"
static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_value_ordered_unused_args_call_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_unused_args_call_0_0
};

#line 2962 "transform_hlds.unused_args.c"
static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_name_ordered_unused_args_call_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_unused_args_call_0_0
};

#line 2967 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_call_0[1] = {
  (MR_Integer) 0
};

#line 2972 "transform_hlds.unused_args.c"
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

#line 2989 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_func_info_0[1] = {
  (MR_Integer) 0
};

#line 2994 "transform_hlds.unused_args.c"
static const MR_NotagFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__notag_functor_desc_unused_args_func_info_0 = {
  (MR_String) "unused_args_func_info",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 3001 "transform_hlds.unused_args.c"
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

#line 3018 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_unused_args_info_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 3024 "transform_hlds.unused_args.c"
static const MR_ConstString transform_hlds__unused_args__transform_hlds__unused_args__field_names_unused_args_info_0_0[2] = {
  (MR_String) "unarg_module_info",
  (MR_String) "unarg_vartypes"
};

#line 3030 "transform_hlds.unused_args.c"
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

#line 3045 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_unused_args_info_0_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_unused_args_info_0_0
};

#line 3050 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_unused_args_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_unused_args_info_0_0
  }
};

#line 3059 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_unused_args_info_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_unused_args_info_0_0
};

#line 3064 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_info_0[1] = {
  (MR_Integer) 0
};

#line 3069 "transform_hlds.unused_args.c"
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

#line 3086 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3094 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__set_ordlist__ti_set_ordlist_1transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0
  }
};

#line 3102 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_usage_info_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__set_ordlist__ti_set_ordlist_1transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0
};

#line 3108 "transform_hlds.unused_args.c"
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

#line 3123 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_usage_info_0_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_usage_info_0_0
};

#line 3128 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_usage_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_usage_info_0_0
  }
};

#line 3137 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_usage_info_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_usage_info_0_0
};

#line 3142 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_usage_info_0[1] = {
  (MR_Integer) 0
};

#line 3147 "transform_hlds.unused_args.c"
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

#line 3164 "transform_hlds.unused_args.c"
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

#line 3181 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0
  }
};

#line 3190 "transform_hlds.unused_args.c"
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

#line 3207 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_warning_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 3215 "transform_hlds.unused_args.c"
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

#line 3230 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_warning_info_0_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_warning_info_0_0
};

#line 3235 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_warning_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_warning_info_0_0
  }
};

#line 3244 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_warning_info_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_warning_info_0_0
};

#line 3249 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_warning_info_0[1] = {
  (MR_Integer) 0
};

#line 3254 "transform_hlds.unused_args.c"
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

#line 3271 "transform_hlds.unused_args.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__to_term__arity1__transform_hlds__unused_args__unused_args_answer__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__to_term_1_1_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__from_term_2_2_p_0_10001))
};

#line 3282 "transform_hlds.unused_args.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__to_term__arity1__transform_hlds__unused_args__unused_args_call__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__to_term_1_1_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__from_term_2_2_p_0_10001))
};

#line 3293 "transform_hlds.unused_args.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__partial_order__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__equivalent_3_3_p_0_10001))
};

#line 3304 "transform_hlds.unused_args.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__partial_order__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__equivalent_3_3_p_0_10001))
};

#line 3315 "transform_hlds.unused_args.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__call_pattern__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__[5] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0))
};

#line 3324 "transform_hlds.unused_args.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__answer_pattern__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0__[5] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0))
};

#line 3333 "transform_hlds.unused_args.c"
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

#line 3348 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____arg_var_in_proc_0_0_10001(
#line 3351 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3353 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3355 "transform_hlds.unused_args.c"
{
#line 3357 "transform_hlds.unused_args.c"
  {
#line 3359 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3362 "transform_hlds.unused_args.c"
    {
#line 3364 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____arg_var_in_proc_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3367 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3369 "transform_hlds.unused_args.c"
  }
#line 3371 "transform_hlds.unused_args.c"
}

#line 3374 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____arg_var_in_proc_0_0_10001(
#line 3377 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3379 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3381 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3383 "transform_hlds.unused_args.c"
{
#line 3385 "transform_hlds.unused_args.c"
  {
#line 3387 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3390 "transform_hlds.unused_args.c"
    {
#line 3392 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____arg_var_in_proc_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3395 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3397 "transform_hlds.unused_args.c"
  }
#line 3399 "transform_hlds.unused_args.c"
}

#line 3402 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____fixup_info_0_0_10001(
#line 3405 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3407 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3409 "transform_hlds.unused_args.c"
{
#line 3411 "transform_hlds.unused_args.c"
  {
#line 3413 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3416 "transform_hlds.unused_args.c"
    {
#line 3418 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____fixup_info_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3421 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3423 "transform_hlds.unused_args.c"
  }
#line 3425 "transform_hlds.unused_args.c"
}

#line 3428 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____fixup_info_0_0_10001(
#line 3431 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3433 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3435 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3437 "transform_hlds.unused_args.c"
{
#line 3439 "transform_hlds.unused_args.c"
  {
#line 3441 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3444 "transform_hlds.unused_args.c"
    {
#line 3446 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____fixup_info_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3449 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3451 "transform_hlds.unused_args.c"
  }
#line 3453 "transform_hlds.unused_args.c"
}

#line 3456 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____new_proc_info_0_0_10001(
#line 3459 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3461 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3463 "transform_hlds.unused_args.c"
{
#line 3465 "transform_hlds.unused_args.c"
  {
#line 3467 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3470 "transform_hlds.unused_args.c"
    {
#line 3472 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____new_proc_info_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3475 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3477 "transform_hlds.unused_args.c"
  }
#line 3479 "transform_hlds.unused_args.c"
}

#line 3482 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____new_proc_info_0_0_10001(
#line 3485 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3487 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3489 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3491 "transform_hlds.unused_args.c"
{
#line 3493 "transform_hlds.unused_args.c"
  {
#line 3495 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3498 "transform_hlds.unused_args.c"
    {
#line 3500 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____new_proc_info_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3503 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3505 "transform_hlds.unused_args.c"
  }
#line 3507 "transform_hlds.unused_args.c"
}

#line 3510 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____proc_call_info_0_0_10001(
#line 3513 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3515 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3517 "transform_hlds.unused_args.c"
{
#line 3519 "transform_hlds.unused_args.c"
  {
#line 3521 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3524 "transform_hlds.unused_args.c"
    {
#line 3526 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____proc_call_info_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3529 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3531 "transform_hlds.unused_args.c"
  }
#line 3533 "transform_hlds.unused_args.c"
}

#line 3536 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____proc_call_info_0_0_10001(
#line 3539 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3541 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3543 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3545 "transform_hlds.unused_args.c"
{
#line 3547 "transform_hlds.unused_args.c"
  {
#line 3549 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3552 "transform_hlds.unused_args.c"
    {
#line 3554 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____proc_call_info_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3557 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3559 "transform_hlds.unused_args.c"
  }
#line 3561 "transform_hlds.unused_args.c"
}

#line 3564 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_answer_0_0_10001(
#line 3567 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3569 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3571 "transform_hlds.unused_args.c"
{
#line 3573 "transform_hlds.unused_args.c"
  {
#line 3575 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3578 "transform_hlds.unused_args.c"
    {
#line 3580 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____unused_args_answer_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3583 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3585 "transform_hlds.unused_args.c"
  }
#line 3587 "transform_hlds.unused_args.c"
}

#line 3590 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_answer_0_0_10001(
#line 3593 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3595 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3597 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3599 "transform_hlds.unused_args.c"
{
#line 3601 "transform_hlds.unused_args.c"
  {
#line 3603 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3606 "transform_hlds.unused_args.c"
    {
#line 3608 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____unused_args_answer_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3611 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3613 "transform_hlds.unused_args.c"
  }
#line 3615 "transform_hlds.unused_args.c"
}

#line 3618 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_call_0_0_10001(
#line 3621 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3623 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3625 "transform_hlds.unused_args.c"
{
#line 3627 "transform_hlds.unused_args.c"
  {
#line 3629 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3632 "transform_hlds.unused_args.c"
    {
#line 3634 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____unused_args_call_0_0();
    }
#line 3637 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3639 "transform_hlds.unused_args.c"
  }
#line 3641 "transform_hlds.unused_args.c"
}

#line 3644 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_call_0_0_10001(
#line 3647 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3649 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3651 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3653 "transform_hlds.unused_args.c"
{
#line 3655 "transform_hlds.unused_args.c"
  {
#line 3657 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3660 "transform_hlds.unused_args.c"
    {
#line 3662 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____unused_args_call_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1);
    }
#line 3665 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3667 "transform_hlds.unused_args.c"
  }
#line 3669 "transform_hlds.unused_args.c"
}

#line 3672 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_func_info_0_0_10001(
#line 3675 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3677 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3679 "transform_hlds.unused_args.c"
{
#line 3681 "transform_hlds.unused_args.c"
  {
#line 3683 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3686 "transform_hlds.unused_args.c"
    {
#line 3688 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____unused_args_func_info_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3691 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3693 "transform_hlds.unused_args.c"
  }
#line 3695 "transform_hlds.unused_args.c"
}

#line 3698 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_func_info_0_0_10001(
#line 3701 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3703 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3705 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3707 "transform_hlds.unused_args.c"
{
#line 3709 "transform_hlds.unused_args.c"
  {
#line 3711 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3714 "transform_hlds.unused_args.c"
    {
#line 3716 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____unused_args_func_info_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3719 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3721 "transform_hlds.unused_args.c"
  }
#line 3723 "transform_hlds.unused_args.c"
}

#line 3726 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_info_0_0_10001(
#line 3729 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3731 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3733 "transform_hlds.unused_args.c"
{
#line 3735 "transform_hlds.unused_args.c"
  {
#line 3737 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3740 "transform_hlds.unused_args.c"
    {
#line 3742 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____unused_args_info_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3745 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3747 "transform_hlds.unused_args.c"
  }
#line 3749 "transform_hlds.unused_args.c"
}

#line 3752 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_info_0_0_10001(
#line 3755 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3757 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3759 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3761 "transform_hlds.unused_args.c"
{
#line 3763 "transform_hlds.unused_args.c"
  {
#line 3765 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3768 "transform_hlds.unused_args.c"
    {
#line 3770 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____unused_args_info_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3773 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3775 "transform_hlds.unused_args.c"
  }
#line 3777 "transform_hlds.unused_args.c"
}

#line 3780 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____usage_info_0_0_10001(
#line 3783 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3785 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3787 "transform_hlds.unused_args.c"
{
#line 3789 "transform_hlds.unused_args.c"
  {
#line 3791 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3794 "transform_hlds.unused_args.c"
    {
#line 3796 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____usage_info_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3799 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3801 "transform_hlds.unused_args.c"
  }
#line 3803 "transform_hlds.unused_args.c"
}

#line 3806 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____usage_info_0_0_10001(
#line 3809 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3811 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3813 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3815 "transform_hlds.unused_args.c"
{
#line 3817 "transform_hlds.unused_args.c"
  {
#line 3819 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3822 "transform_hlds.unused_args.c"
    {
#line 3824 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____usage_info_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3827 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3829 "transform_hlds.unused_args.c"
  }
#line 3831 "transform_hlds.unused_args.c"
}

#line 3834 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_dep_0_0_10001(
#line 3837 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3839 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3841 "transform_hlds.unused_args.c"
{
#line 3843 "transform_hlds.unused_args.c"
  {
#line 3845 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3848 "transform_hlds.unused_args.c"
    {
#line 3850 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____var_dep_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3853 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3855 "transform_hlds.unused_args.c"
  }
#line 3857 "transform_hlds.unused_args.c"
}

#line 3860 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____var_dep_0_0_10001(
#line 3863 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3865 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3867 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3869 "transform_hlds.unused_args.c"
{
#line 3871 "transform_hlds.unused_args.c"
  {
#line 3873 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3876 "transform_hlds.unused_args.c"
    {
#line 3878 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____var_dep_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3881 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3883 "transform_hlds.unused_args.c"
  }
#line 3885 "transform_hlds.unused_args.c"
}

#line 3888 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_usage_0_0_10001(
#line 3891 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3893 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3895 "transform_hlds.unused_args.c"
{
#line 3897 "transform_hlds.unused_args.c"
  {
#line 3899 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3902 "transform_hlds.unused_args.c"
    {
#line 3904 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____var_usage_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3907 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3909 "transform_hlds.unused_args.c"
  }
#line 3911 "transform_hlds.unused_args.c"
}

#line 3914 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____var_usage_0_0_10001(
#line 3917 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3919 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3921 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3923 "transform_hlds.unused_args.c"
{
#line 3925 "transform_hlds.unused_args.c"
  {
#line 3927 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3930 "transform_hlds.unused_args.c"
    {
#line 3932 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____var_usage_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3935 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3937 "transform_hlds.unused_args.c"
  }
#line 3939 "transform_hlds.unused_args.c"
}

#line 3942 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____warning_info_0_0_10001(
#line 3945 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3947 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3949 "transform_hlds.unused_args.c"
{
#line 3951 "transform_hlds.unused_args.c"
  {
#line 3953 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3956 "transform_hlds.unused_args.c"
    {
#line 3958 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____warning_info_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3961 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3963 "transform_hlds.unused_args.c"
  }
#line 3965 "transform_hlds.unused_args.c"
}

#line 3968 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____warning_info_0_0_10001(
#line 3971 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3973 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3975 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3977 "transform_hlds.unused_args.c"
{
#line 3979 "transform_hlds.unused_args.c"
  {
#line 3981 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3984 "transform_hlds.unused_args.c"
    {
#line 3986 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____warning_info_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3989 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3991 "transform_hlds.unused_args.c"
  }
#line 3993 "transform_hlds.unused_args.c"
}

#line 3996 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__to_term_1_1_f_0_10001(
#line 3999 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4001 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1)
#line 4003 "transform_hlds.unused_args.c"
{
#line 4005 "transform_hlds.unused_args.c"
  {
#line 4007 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__wrapper_arg_2;
#line 4009 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4011 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_Term_4;

#line 4014 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4016 "transform_hlds.unused_args.c"
    {
#line 4018 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__conv0_Term_4 = transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__to_term_1_1_f_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 4021 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv0_Term_4));
#line 4023 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__wrapper_arg_2;
#line 4025 "transform_hlds.unused_args.c"
  }
#line 4027 "transform_hlds.unused_args.c"
}

#line 4030 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__from_term_2_2_p_0_10001(
#line 4033 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4035 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 4037 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2)
#line 4039 "transform_hlds.unused_args.c"
{
#line 4041 "transform_hlds.unused_args.c"
  {
#line 4043 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;
#line 4045 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4047 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__2_2;

#line 4050 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4052 "transform_hlds.unused_args.c"
    {
#line 4054 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__from_term_2_2_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), &transform_hlds__unused_args__conv0_HeadVar__2_2);
    }
#line 4057 "transform_hlds.unused_args.c"
    if (transform_hlds__unused_args__succeeded)
#line 4059 "transform_hlds.unused_args.c"
      {
#line 4061 "transform_hlds.unused_args.c"
        *transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__2_2));
#line 4063 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 4065 "transform_hlds.unused_args.c"
      }
#line 4067 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 4069 "transform_hlds.unused_args.c"
  }
#line 4071 "transform_hlds.unused_args.c"
}

#line 4074 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__to_term_1_1_f_0_10001(
#line 4077 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4079 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1)
#line 4081 "transform_hlds.unused_args.c"
{
#line 4083 "transform_hlds.unused_args.c"
  {
#line 4085 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__wrapper_arg_2;
#line 4087 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4089 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_Term_3;

#line 4092 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4094 "transform_hlds.unused_args.c"
    {
#line 4096 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__conv0_Term_3 = transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__to_term_1_1_f_0();
    }
#line 4099 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv0_Term_3));
#line 4101 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__wrapper_arg_2;
#line 4103 "transform_hlds.unused_args.c"
  }
#line 4105 "transform_hlds.unused_args.c"
}

#line 4108 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__from_term_2_2_p_0_10001(
#line 4111 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4113 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 4115 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2)
#line 4117 "transform_hlds.unused_args.c"
{
#line 4119 "transform_hlds.unused_args.c"
  {
#line 4121 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;
#line 4123 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;

#line 4126 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4128 "transform_hlds.unused_args.c"
    {
#line 4130 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__from_term_2_2_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 4133 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 4135 "transform_hlds.unused_args.c"
  }
#line 4137 "transform_hlds.unused_args.c"
}

#line 4140 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 4143 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4145 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 4147 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 4149 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 4151 "transform_hlds.unused_args.c"
{
#line 4153 "transform_hlds.unused_args.c"
  {
#line 4155 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;
#line 4157 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;

#line 4160 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4162 "transform_hlds.unused_args.c"
    {
#line 4164 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__more_precise_than_3_3_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 4167 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 4169 "transform_hlds.unused_args.c"
  }
#line 4171 "transform_hlds.unused_args.c"
}

#line 4174 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__equivalent_3_3_p_0_10001(
#line 4177 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4179 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 4181 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 4183 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 4185 "transform_hlds.unused_args.c"
{
#line 4187 "transform_hlds.unused_args.c"
  {
#line 4189 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;
#line 4191 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;

#line 4194 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4196 "transform_hlds.unused_args.c"
    {
#line 4198 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__equivalent_3_3_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 4201 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 4203 "transform_hlds.unused_args.c"
  }
#line 4205 "transform_hlds.unused_args.c"
}

#line 4208 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 4211 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4213 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 4215 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 4217 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 4219 "transform_hlds.unused_args.c"
{
#line 4221 "transform_hlds.unused_args.c"
  {
#line 4223 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;
#line 4225 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;

#line 4228 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4230 "transform_hlds.unused_args.c"
    {
#line 4232 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__more_precise_than_3_3_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 4235 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 4237 "transform_hlds.unused_args.c"
  }
#line 4239 "transform_hlds.unused_args.c"
}

#line 4242 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__equivalent_3_3_p_0_10001(
#line 4245 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4247 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 4249 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 4251 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 4253 "transform_hlds.unused_args.c"
{
#line 4255 "transform_hlds.unused_args.c"
  {
#line 4257 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;
#line 4259 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;

#line 4262 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4264 "transform_hlds.unused_args.c"
    {
#line 4266 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__equivalent_3_3_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 4269 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 4271 "transform_hlds.unused_args.c"
  }
#line 4273 "transform_hlds.unused_args.c"
}

#line 4276 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_name_2_2_f_0_10001(
#line 4279 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg)
#line 4281 "transform_hlds.unused_args.c"
{
#line 4283 "transform_hlds.unused_args.c"
  {
#line 4285 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__wrapper_arg_3;
#line 4287 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4289 "transform_hlds.unused_args.c"
    MR_String transform_hlds__unused_args__conv0_HeadVar__3_3;

#line 4292 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4294 "transform_hlds.unused_args.c"
    {
#line 4296 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__conv0_HeadVar__3_3 = transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_name_2_2_f_0();
    }
#line 4299 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__3_3));
#line 4301 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__wrapper_arg_3;
#line 4303 "transform_hlds.unused_args.c"
  }
#line 4305 "transform_hlds.unused_args.c"
}

#line 4308 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001(
#line 4311 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg)
#line 4313 "transform_hlds.unused_args.c"
{
#line 4315 "transform_hlds.unused_args.c"
  {
#line 4317 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__wrapper_arg_3;
#line 4319 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4321 "transform_hlds.unused_args.c"
    MR_Integer transform_hlds__unused_args__conv0_HeadVar__3_3;

#line 4324 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4326 "transform_hlds.unused_args.c"
    {
#line 4328 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__conv0_HeadVar__3_3 = transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_version_number_2_2_f_0();
    }
#line 4331 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__3_3));
#line 4333 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__wrapper_arg_3;
#line 4335 "transform_hlds.unused_args.c"
  }
#line 4337 "transform_hlds.unused_args.c"
}

#line 4340 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001(
#line 4343 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg)
#line 4345 "transform_hlds.unused_args.c"
{
#line 4347 "transform_hlds.unused_args.c"
  {
#line 4349 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__wrapper_arg_3;
#line 4351 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4353 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__3_3;

#line 4356 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4358 "transform_hlds.unused_args.c"
    {
#line 4360 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__conv0_HeadVar__3_3 = transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0();
    }
#line 4363 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__3_3));
#line 4365 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__wrapper_arg_3;
#line 4367 "transform_hlds.unused_args.c"
  }
#line 4369 "transform_hlds.unused_args.c"
}

#line 4372 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__bottom_2_2_f_0_10001(
#line 4375 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4377 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1)
#line 4379 "transform_hlds.unused_args.c"
{
#line 4381 "transform_hlds.unused_args.c"
  {
#line 4383 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__wrapper_arg_3;
#line 4385 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4387 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__3_3;

#line 4390 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4392 "transform_hlds.unused_args.c"
    {
#line 4394 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__conv0_HeadVar__3_3 = transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__bottom_2_2_f_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 4397 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__3_3));
#line 4399 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__wrapper_arg_3;
#line 4401 "transform_hlds.unused_args.c"
  }
#line 4403 "transform_hlds.unused_args.c"
}

#line 4406 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__top_2_2_f_0_10001(
#line 4409 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4411 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1)
#line 4413 "transform_hlds.unused_args.c"
{
#line 4415 "transform_hlds.unused_args.c"
  {
#line 4417 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__wrapper_arg_3;
#line 4419 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4421 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__3_3;

#line 4424 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4426 "transform_hlds.unused_args.c"
    {
#line 4428 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__conv0_HeadVar__3_3 = transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__top_2_2_f_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 4431 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__3_3));
#line 4433 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__wrapper_arg_3;
#line 4435 "transform_hlds.unused_args.c"
  }
#line 4437 "transform_hlds.unused_args.c"
}

#line 4440 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__get_func_info_6_6_p_0_10001(
#line 4443 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4445 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 4447 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 4449 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3,
#line 4451 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_6)
#line 4453 "transform_hlds.unused_args.c"
{
#line 4455 "transform_hlds.unused_args.c"
  {
#line 4457 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4459 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_FuncInfo_22;

#line 4462 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4464 "transform_hlds.unused_args.c"
    {
#line 4466 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__get_func_info_6_6_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3), &transform_hlds__unused_args__conv0_FuncInfo_22);
    }
#line 4469 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_6 = ((MR_Box) (transform_hlds__unused_args__conv0_FuncInfo_22));
#line 4471 "transform_hlds.unused_args.c"
  }
#line 4473 "transform_hlds.unused_args.c"
}

#line 204 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_f_0(void)
#line 204 "unused_args.m"
{
#line 204 "unused_args.m"
  {
#line 204 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 204 "unused_args.m"
    MR_Word transform_hlds__unused_args__Term_3;
#line 204 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_8_8;

#line 205 "unused_args.m"
    {
#line 205 "unused_args.m"
      transform_hlds__unused_args__V_8_8 = mercury__term__context_init_0_f_0();
    }
#line 205 "unused_args.m"
    {
#line 205 "unused_args.m"
      transform_hlds__unused_args__Term_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 205 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Term_3, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_9[2]));
#line 205 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Term_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Term_3, 2) = ((MR_Box) (transform_hlds__unused_args__V_8_8));
#line 205 "unused_args.m"
    }
#line 204 "unused_args.m"
    return transform_hlds__unused_args__Term_3;
#line 204 "unused_args.m"
  }
#line 204 "unused_args.m"
}

#line 200 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(void)
#line 200 "unused_args.m"
{
#line 200 "unused_args.m"
  {
#line 200 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);

#line 200 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 200 "unused_args.m"
  }
#line 200 "unused_args.m"
}

#line 197 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0(void)
#line 197 "unused_args.m"
{
#line 198 "unused_args.m"
  {
#line 198 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 198 "unused_args.m"
    {
#line 198 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__builtin__semidet_fail_0_p_0();
    }
#line 198 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 198 "unused_args.m"
  }
#line 197 "unused_args.m"
}

#line 219 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(
#line 219 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_10,
#line 219 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_3)
#line 219 "unused_args.m"
{
#line 219 "unused_args.m"
  {
#line 219 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 219 "unused_args.m"
    {
#line 219 "unused_args.m"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____unused_args_answer_0_0(transform_hlds__unused_args__Args_3, transform_hlds__unused_args__Args_10);
    }
#line 219 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 219 "unused_args.m"
  }
#line 219 "unused_args.m"
}

#line 214 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_93_95_48_3_p_0(
#line 214 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer1_5,
#line 214 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer2_6)
#line 214 "unused_args.m"
{
#line 214 "unused_args.m"
  {
#line 214 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 214 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 214 "unused_args.m"
    MR_Word transform_hlds__unused_args__Args1_7 = (MR_Word) transform_hlds__unused_args__Answer1_5;
#line 214 "unused_args.m"
    MR_Word transform_hlds__unused_args__Args2_8 = (MR_Word) transform_hlds__unused_args__Answer2_6;
#line 214 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_11_11;
#line 214 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_12_12;

#line 217 "unused_args.m"
    {
#line 217 "unused_args.m"
      transform_hlds__unused_args__V_11_11 = mercury__set__sorted_list_to_set_1_f_0(transform_hlds__unused_args__TypeCtorInfo_13_13, transform_hlds__unused_args__Args2_8);
    }
#line 217 "unused_args.m"
    {
#line 217 "unused_args.m"
      transform_hlds__unused_args__V_12_12 = mercury__set__sorted_list_to_set_1_f_0(transform_hlds__unused_args__TypeCtorInfo_13_13, transform_hlds__unused_args__Args1_7);
    }
#line 217 "unused_args.m"
    {
#line 217 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__set__subset_2_p_0(transform_hlds__unused_args__TypeCtorInfo_13_13, transform_hlds__unused_args__V_11_11, transform_hlds__unused_args__V_12_12);
    }
#line 214 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 214 "unused_args.m"
  }
#line 214 "unused_args.m"
}

#line 183 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_103_101_116_95_102_117_110_99_95_105_110_102_111_95_54_95_95_91_52_44_32_53_93_95_48_6_p_0(
#line 183 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_17,
#line 183 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleName_18,
#line 183 "unused_args.m"
  MR_Word transform_hlds__unused_args__FuncId_19,
#line 183 "unused_args.m"
  MR_Word * transform_hlds__unused_args__FuncInfo_22)
#line 183 "unused_args.m"
{
#line 183 "unused_args.m"
  {
#line 183 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 183 "unused_args.m"
    MR_Integer transform_hlds__unused_args__Arity_13;
#line 183 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredId_23;
#line 183 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredInfo_25;
#line 183 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_26_26;
#line 184 "unused_args.m"
    MR_Integer transform_hlds__unused_args__V_24_24;

#line 184 "unused_args.m"
    {
#line 184 "unused_args.m"
      transform_hlds__mmc_analysis__func_id_to_ppid_4_p_0(transform_hlds__unused_args__ModuleInfo_17, transform_hlds__unused_args__ModuleName_18, transform_hlds__unused_args__FuncId_19, &transform_hlds__unused_args__V_26_26);
    }
#line 184 "unused_args.m"
    transform_hlds__unused_args__PredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_26_26, (MR_Integer) 0)));
#line 184 "unused_args.m"
    transform_hlds__unused_args__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_26_26, (MR_Integer) 1)));
#line 185 "unused_args.m"
    {
#line 185 "unused_args.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__unused_args__ModuleInfo_17, transform_hlds__unused_args__PredId_23, &transform_hlds__unused_args__PredInfo_25);
    }
#line 186 "unused_args.m"
    {
#line 186 "unused_args.m"
      transform_hlds__unused_args__Arity_13 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__unused_args__PredInfo_25);
    }
#line 187 "unused_args.m"
    *transform_hlds__unused_args__FuncInfo_22 = (MR_Word) transform_hlds__unused_args__Arity_13;
#line 183 "unused_args.m"
  }
#line 183 "unused_args.m"
}

#line 182 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 182 "unused_args.m"
{
#line 182 "unused_args.m"
  {
#line 182 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 182 "unused_args.m"
    return (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 182 "unused_args.m"
  }
#line 182 "unused_args.m"
}

#line 181 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_50_95_95_91_50_93_95_48_2_f_0(
#line 181 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1)
#line 181 "unused_args.m"
{
#line 181 "unused_args.m"
  {
#line 181 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 181 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVar__3_3;
#line 181 "unused_args.m"
    MR_Integer transform_hlds__unused_args__Arity_10 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 181 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_23_23;

#line 181 "unused_args.m"
    {
#line 181 "unused_args.m"
      transform_hlds__unused_args__V_23_23 = mercury__list__f_46_46_2_f_0((MR_Integer) 1, transform_hlds__unused_args__Arity_10);
    }
#line 181 "unused_args.m"
    transform_hlds__unused_args__HeadVar__3_3 = (MR_Word) transform_hlds__unused_args__V_23_23;
#line 181 "unused_args.m"
    return transform_hlds__unused_args__HeadVar__3_3;
#line 181 "unused_args.m"
  }
#line 181 "unused_args.m"
}

#line 180 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 180 "unused_args.m"
{
#line 180 "unused_args.m"
  {
#line 180 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 180 "unused_args.m"
    return (MR_Integer) 0;
#line 180 "unused_args.m"
  }
#line 180 "unused_args.m"
}

#line 179 "unused_args.m"
static MR_Integer MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 179 "unused_args.m"
{
#line 179 "unused_args.m"
  {
#line 179 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 179 "unused_args.m"
    return (MR_Integer) 3;
#line 179 "unused_args.m"
  }
#line 179 "unused_args.m"
}

#line 178 "unused_args.m"
static MR_String MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 178 "unused_args.m"
{
#line 193 "unused_args.m"
  {
#line 193 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 193 "unused_args.m"
    return (MR_String) "unused_args";
#line 193 "unused_args.m"
  }
#line 178 "unused_args.m"
}

#line 162 "unused_args.m"
void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 162 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1)
#line 162 "unused_args.m"
{
#line 162 "unused_args.m"
  {
#line 162 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 162 "unused_args.m"
    *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 162 "unused_args.m"
  }
#line 162 "unused_args.m"
}

#line 162 "unused_args.m"
MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 162 "unused_args.m"
{
#line 162 "unused_args.m"
  {
#line 162 "unused_args.m"
    return MR_TRUE;
#line 162 "unused_args.m"
  }
#line 162 "unused_args.m"
}

#line 1839 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_117_110_117_115_101_100_95_97_114_103_115_95_95_91_49_93_95_48_3_f_0(
#line 1839 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredInfo_6,
#line 1839 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_7)
#line 1839 "unused_args.m"
{
#line 1841 "unused_args.m"
  {
#line 1841 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1841 "unused_args.m"
    MR_Word transform_hlds__unused_args__Spec_8;
#line 1841 "unused_args.m"
    MR_Integer transform_hlds__unused_args__NumArgs_9;
#line 1841 "unused_args.m"
    MR_Word transform_hlds__unused_args__Context_10;
#line 1841 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredOrFunc_11;
#line 1841 "unused_args.m"
    MR_Word transform_hlds__unused_args__ModuleName_12;
#line 1841 "unused_args.m"
    MR_String transform_hlds__unused_args__PredName_13;
#line 1841 "unused_args.m"
    MR_Integer transform_hlds__unused_args__Arity_14;
#line 1841 "unused_args.m"
    MR_Word transform_hlds__unused_args__Pieces1_15;
#line 1841 "unused_args.m"
    MR_Word transform_hlds__unused_args__Pieces2_16;
#line 1841 "unused_args.m"
    MR_Word transform_hlds__unused_args__Msg_17;
#line 1841 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_20_20;
#line 1841 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_21_21;
#line 1841 "unused_args.m"
    MR_String transform_hlds__unused_args__V_22_22;
#line 1841 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_23_23;
#line 1841 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_24_24;
#line 1841 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_25_25;
#line 1841 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_26_26;
#line 1841 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_56_56;
#line 1841 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_57_57;
#line 1841 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_58_58;
#line 1841 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_62_62;

#line 1842 "unused_args.m"
    {
#line 1842 "unused_args.m"
      mercury__list__length_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__unused_args__UnusedArgs_7, &transform_hlds__unused_args__NumArgs_9);
    }
#line 1843 "unused_args.m"
    {
#line 1843 "unused_args.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__unused_args__PredInfo_6, &transform_hlds__unused_args__Context_10);
    }
#line 1844 "unused_args.m"
    {
#line 1844 "unused_args.m"
      transform_hlds__unused_args__PredOrFunc_11 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__unused_args__PredInfo_6);
    }
#line 1845 "unused_args.m"
    {
#line 1845 "unused_args.m"
      transform_hlds__unused_args__ModuleName_12 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__unused_args__PredInfo_6);
    }
#line 1846 "unused_args.m"
    {
#line 1846 "unused_args.m"
      transform_hlds__unused_args__PredName_13 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__unused_args__PredInfo_6);
    }
#line 1847 "unused_args.m"
    {
#line 1847 "unused_args.m"
      transform_hlds__unused_args__Arity_14 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__unused_args__PredInfo_6);
    }
#line 1848 "unused_args.m"
    {
#line 1848 "unused_args.m"
      transform_hlds__unused_args__V_22_22 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(transform_hlds__unused_args__PredOrFunc_11);
    }
#line 1848 "unused_args.m"
    {
#line 1848 "unused_args.m"
      transform_hlds__unused_args__V_21_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1848 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__V_21_21, 0) = ((MR_Box) (transform_hlds__unused_args__V_22_22));
#line 1848 "unused_args.m"
    }
#line 1849 "unused_args.m"
    {
#line 1849 "unused_args.m"
      transform_hlds__unused_args__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1849 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_26_26, 0) = ((MR_Box) (transform_hlds__unused_args__ModuleName_12));
#line 1849 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_26_26, 1) = ((MR_Box) (transform_hlds__unused_args__PredName_13));
#line 1849 "unused_args.m"
    }
#line 1849 "unused_args.m"
    {
#line 1849 "unused_args.m"
      transform_hlds__unused_args__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1849 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_25_25, 0) = ((MR_Box) (transform_hlds__unused_args__V_26_26));
#line 1849 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_25_25, 1) = ((MR_Box) (transform_hlds__unused_args__Arity_14));
#line 1849 "unused_args.m"
    }
#line 1849 "unused_args.m"
    {
#line 1849 "unused_args.m"
      transform_hlds__unused_args__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1849 "unused_args.m"
      MR_hl_field(MR_mktag(3), transform_hlds__unused_args__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1849 "unused_args.m"
      MR_hl_field(MR_mktag(3), transform_hlds__unused_args__V_24_24, 1) = ((MR_Box) (transform_hlds__unused_args__V_25_25));
#line 1849 "unused_args.m"
    }
#line 1849 "unused_args.m"
    {
#line 1849 "unused_args.m"
      transform_hlds__unused_args__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1849 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_23_23, 0) = ((MR_Box) (transform_hlds__unused_args__V_24_24));
#line 1849 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__unused_args_scalar_common_1[14])));
#line 1849 "unused_args.m"
    }
#line 1848 "unused_args.m"
    {
#line 1848 "unused_args.m"
      transform_hlds__unused_args__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1848 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_20_20, 0) = ((MR_Box) (transform_hlds__unused_args__V_21_21));
#line 1848 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_20_20, 1) = ((MR_Box) (transform_hlds__unused_args__V_23_23));
#line 1848 "unused_args.m"
    }
#line 1848 "unused_args.m"
    {
#line 1848 "unused_args.m"
      transform_hlds__unused_args__Pieces1_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1848 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Pieces1_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__unused_args_scalar_common_1[21])));
#line 1848 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Pieces1_15, 1) = ((MR_Box) (transform_hlds__unused_args__V_20_20));
#line 1848 "unused_args.m"
    }
#line 1851 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__NumArgs_9 == (MR_Integer) 1);
#line 1854 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1852 "unused_args.m"
      {
#line 1852 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_36_36;
#line 1852 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_39_39;

#line 1863 "unused_args.m"
        if ((transform_hlds__unused_args__UnusedArgs_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1863 "unused_args.m"
          {
#line 1863 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv0_V_39_39;

#line 1863 "unused_args.m"
            {
#line 1863 "unused_args.m"
              transform_hlds__unused_args__conv0_V_39_39 = mercury__require__unexpected_3_f_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[5], (MR_String) "transform_hlds.unused_args", (MR_String) "function \140transform_hlds.unused_args.format_arg_list\'/1", (MR_String) "empty list");
            }
#line 1863 "unused_args.m"
            transform_hlds__unused_args__V_39_39 = ((MR_Word) transform_hlds__unused_args__conv0_V_39_39);
#line 1863 "unused_args.m"
          }
#line 1863 "unused_args.m"
        else
#line 1864 "unused_args.m"
          {
#line 1864 "unused_args.m"
            MR_Integer transform_hlds__unused_args__Arg_71 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__UnusedArgs_7, (MR_Integer) 0)));
#line 1864 "unused_args.m"
            MR_Word transform_hlds__unused_args__Rest_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__UnusedArgs_7, (MR_Integer) 1)));
#line 1864 "unused_args.m"
            MR_String transform_hlds__unused_args__ArgStr_74;

#line 1865 "unused_args.m"
            {
#line 1865 "unused_args.m"
              transform_hlds__unused_args__ArgStr_74 = mercury__string__int_to_string_1_f_0(transform_hlds__unused_args__Arg_71);
            }
#line 1869 "unused_args.m"
            if ((transform_hlds__unused_args__Rest_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1867 "unused_args.m"
              {
#line 1867 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_79_79;

#line 1868 "unused_args.m"
                {
#line 1868 "unused_args.m"
                  transform_hlds__unused_args__V_79_79 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1868 "unused_args.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__unused_args__V_79_79, 0) = ((MR_Box) (transform_hlds__unused_args__ArgStr_74));
#line 1868 "unused_args.m"
                }
#line 1868 "unused_args.m"
                {
#line 1868 "unused_args.m"
                  transform_hlds__unused_args__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1868 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_39_39, 0) = ((MR_Box) (transform_hlds__unused_args__V_79_79));
#line 1868 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1868 "unused_args.m"
                }
#line 1867 "unused_args.m"
              }
#line 1869 "unused_args.m"
            else
#line 1870 "unused_args.m"
              {
#line 1870 "unused_args.m"
                MR_Integer transform_hlds__unused_args__Head_75 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Rest_72, (MR_Integer) 0)));
#line 1870 "unused_args.m"
                MR_Word transform_hlds__unused_args__Tail_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Rest_72, (MR_Integer) 1)));
#line 1870 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_77_77;
#line 1870 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_78_78;

#line 1871 "unused_args.m"
                {
#line 1871 "unused_args.m"
                  transform_hlds__unused_args__V_77_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1871 "unused_args.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__unused_args__V_77_77, 0) = ((MR_Box) (transform_hlds__unused_args__ArgStr_74));
#line 1871 "unused_args.m"
                }
#line 1871 "unused_args.m"
                {
#line 1871 "unused_args.m"
                  transform_hlds__unused_args__V_78_78 = transform_hlds__unused_args__format_arg_list_2_2_f_0(transform_hlds__unused_args__Head_75, transform_hlds__unused_args__Tail_76);
                }
#line 1871 "unused_args.m"
                {
#line 1871 "unused_args.m"
                  transform_hlds__unused_args__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1871 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_39_39, 0) = ((MR_Box) (transform_hlds__unused_args__V_77_77));
#line 1871 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_39_39, 1) = ((MR_Box) (transform_hlds__unused_args__V_78_78));
#line 1871 "unused_args.m"
                }
#line 1870 "unused_args.m"
              }
#line 1864 "unused_args.m"
          }
#line 1852 "unused_args.m"
        {
#line 1852 "unused_args.m"
          transform_hlds__unused_args__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1852 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__unused_args_scalar_common_1[22])));
#line 1852 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_36_36, 1) = ((MR_Box) (transform_hlds__unused_args__V_39_39));
#line 1852 "unused_args.m"
        }
#line 1852 "unused_args.m"
        {
#line 1852 "unused_args.m"
          transform_hlds__unused_args__Pieces2_16 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__unused_args__V_36_36, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__unused_args_scalar_common_1[17]));
        }
#line 1852 "unused_args.m"
      }
#line 1854 "unused_args.m"
    else
#line 1855 "unused_args.m"
      {
#line 1855 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_46_46;
#line 1855 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_49_49;

#line 1863 "unused_args.m"
        if ((transform_hlds__unused_args__UnusedArgs_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1863 "unused_args.m"
          {
#line 1863 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv1_V_49_49;

#line 1863 "unused_args.m"
            {
#line 1863 "unused_args.m"
              transform_hlds__unused_args__conv1_V_49_49 = mercury__require__unexpected_3_f_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[5], (MR_String) "transform_hlds.unused_args", (MR_String) "function \140transform_hlds.unused_args.format_arg_list\'/1", (MR_String) "empty list");
            }
#line 1863 "unused_args.m"
            transform_hlds__unused_args__V_49_49 = ((MR_Word) transform_hlds__unused_args__conv1_V_49_49);
#line 1863 "unused_args.m"
          }
#line 1863 "unused_args.m"
        else
#line 1864 "unused_args.m"
          {
#line 1864 "unused_args.m"
            MR_Integer transform_hlds__unused_args__Arg_85 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__UnusedArgs_7, (MR_Integer) 0)));
#line 1864 "unused_args.m"
            MR_Word transform_hlds__unused_args__Rest_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__UnusedArgs_7, (MR_Integer) 1)));
#line 1864 "unused_args.m"
            MR_String transform_hlds__unused_args__ArgStr_88;

#line 1865 "unused_args.m"
            {
#line 1865 "unused_args.m"
              transform_hlds__unused_args__ArgStr_88 = mercury__string__int_to_string_1_f_0(transform_hlds__unused_args__Arg_85);
            }
#line 1869 "unused_args.m"
            if ((transform_hlds__unused_args__Rest_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1867 "unused_args.m"
              {
#line 1867 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_93_93;

#line 1868 "unused_args.m"
                {
#line 1868 "unused_args.m"
                  transform_hlds__unused_args__V_93_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1868 "unused_args.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__unused_args__V_93_93, 0) = ((MR_Box) (transform_hlds__unused_args__ArgStr_88));
#line 1868 "unused_args.m"
                }
#line 1868 "unused_args.m"
                {
#line 1868 "unused_args.m"
                  transform_hlds__unused_args__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1868 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_49_49, 0) = ((MR_Box) (transform_hlds__unused_args__V_93_93));
#line 1868 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1868 "unused_args.m"
                }
#line 1867 "unused_args.m"
              }
#line 1869 "unused_args.m"
            else
#line 1870 "unused_args.m"
              {
#line 1870 "unused_args.m"
                MR_Integer transform_hlds__unused_args__Head_89 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Rest_86, (MR_Integer) 0)));
#line 1870 "unused_args.m"
                MR_Word transform_hlds__unused_args__Tail_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Rest_86, (MR_Integer) 1)));
#line 1870 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_91_91;
#line 1870 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_92_92;

#line 1871 "unused_args.m"
                {
#line 1871 "unused_args.m"
                  transform_hlds__unused_args__V_91_91 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1871 "unused_args.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__unused_args__V_91_91, 0) = ((MR_Box) (transform_hlds__unused_args__ArgStr_88));
#line 1871 "unused_args.m"
                }
#line 1871 "unused_args.m"
                {
#line 1871 "unused_args.m"
                  transform_hlds__unused_args__V_92_92 = transform_hlds__unused_args__format_arg_list_2_2_f_0(transform_hlds__unused_args__Head_89, transform_hlds__unused_args__Tail_90);
                }
#line 1871 "unused_args.m"
                {
#line 1871 "unused_args.m"
                  transform_hlds__unused_args__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1871 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_49_49, 0) = ((MR_Box) (transform_hlds__unused_args__V_91_91));
#line 1871 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_49_49, 1) = ((MR_Box) (transform_hlds__unused_args__V_92_92));
#line 1871 "unused_args.m"
                }
#line 1870 "unused_args.m"
              }
#line 1864 "unused_args.m"
          }
#line 1855 "unused_args.m"
        {
#line 1855 "unused_args.m"
          transform_hlds__unused_args__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1855 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_46_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__unused_args_scalar_common_1[23])));
#line 1855 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_46_46, 1) = ((MR_Box) (transform_hlds__unused_args__V_49_49));
#line 1855 "unused_args.m"
        }
#line 1855 "unused_args.m"
        {
#line 1855 "unused_args.m"
          transform_hlds__unused_args__Pieces2_16 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__unused_args__V_46_46, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__unused_args_scalar_common_1[19]));
        }
#line 1855 "unused_args.m"
      }
#line 1858 "unused_args.m"
    {
#line 1858 "unused_args.m"
      transform_hlds__unused_args__V_58_58 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__unused_args__Pieces1_15, transform_hlds__unused_args__Pieces2_16);
    }
#line 1858 "unused_args.m"
    {
#line 1858 "unused_args.m"
      transform_hlds__unused_args__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1858 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_57_57, 0) = ((MR_Box) (transform_hlds__unused_args__V_58_58));
#line 1858 "unused_args.m"
    }
#line 1858 "unused_args.m"
    {
#line 1858 "unused_args.m"
      transform_hlds__unused_args__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1858 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_56_56, 0) = ((MR_Box) (transform_hlds__unused_args__V_57_57));
#line 1858 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1858 "unused_args.m"
    }
#line 1858 "unused_args.m"
    {
#line 1858 "unused_args.m"
      transform_hlds__unused_args__Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1858 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Msg_17, 0) = ((MR_Box) (transform_hlds__unused_args__Context_10));
#line 1858 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Msg_17, 1) = ((MR_Box) (transform_hlds__unused_args__V_56_56));
#line 1858 "unused_args.m"
    }
#line 1859 "unused_args.m"
    {
#line 1859 "unused_args.m"
      transform_hlds__unused_args__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1859 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_62_62, 0) = ((MR_Box) (transform_hlds__unused_args__Msg_17));
#line 1859 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1859 "unused_args.m"
    }
#line 1859 "unused_args.m"
    {
#line 1859 "unused_args.m"
      transform_hlds__unused_args__Spec_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1859 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Spec_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1859 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Spec_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17))));
#line 1859 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Spec_8, 2) = ((MR_Box) (transform_hlds__unused_args__V_62_62));
#line 1859 "unused_args.m"
    }
#line 1841 "unused_args.m"
    return transform_hlds__unused_args__Spec_8;
#line 1841 "unused_args.m"
  }
#line 1839 "unused_args.m"
}

#line 1787 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_103_97_116_104_101_114_95_119_97_114_110_105_110_103_95_95_91_49_93_95_48_9_p_0(
#line 1787 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredInfo_11,
#line 1787 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_12,
#line 1787 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_13,
#line 1787 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs0_14,
#line 1787 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_26,
#line 1787 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_27,
#line 1787 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Specs_0_28,
#line 1787 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Specs_29)
#line 1787 "unused_args.m"
{
#line 1796 "unused_args.m"
  {
#line 1796 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1794 "unused_args.m"
    {
#line 1794 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (transform_hlds__unused_args__PredId_12)), transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_26);
    }
#line 1796 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1795 "unused_args.m"
      {
#line 1795 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Specs_29 = transform_hlds__unused_args__STATE_VARIABLE_Specs_0_28;
#line 1795 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_27 = transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_26;
#line 1795 "unused_args.m"
      }
#line 1796 "unused_args.m"
    else
#line 1797 "unused_args.m"
      {
#line 1797 "unused_args.m"
        MR_Word transform_hlds__unused_args__Procs_17;
#line 1797 "unused_args.m"
        MR_Word transform_hlds__unused_args__Proc_18;
#line 1797 "unused_args.m"
        MR_Word transform_hlds__unused_args__HeadVars_19;
#line 1797 "unused_args.m"
        MR_Integer transform_hlds__unused_args__NumHeadVars_20;
#line 1797 "unused_args.m"
        MR_Integer transform_hlds__unused_args__NumToDrop_21;
#line 1797 "unused_args.m"
        MR_Word transform_hlds__unused_args__UnusedArgs_22;
#line 1797 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_31_31;
#line 1799 "unused_args.m"
        MR_Box transform_hlds__unused_args__conv0_Proc_18;

#line 1797 "unused_args.m"
        {
#line 1797 "unused_args.m"
          mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (transform_hlds__unused_args__PredId_12)), transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_26, transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_27);
        }
#line 1798 "unused_args.m"
        {
#line 1798 "unused_args.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__unused_args__PredInfo_11, &transform_hlds__unused_args__Procs_17);
        }
#line 1799 "unused_args.m"
        {
#line 1799 "unused_args.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__unused_args__Procs_17, transform_hlds__unused_args__ProcId_13, &transform_hlds__unused_args__conv0_Proc_18);
        }
#line 1799 "unused_args.m"
        transform_hlds__unused_args__Proc_18 = ((MR_Word) transform_hlds__unused_args__conv0_Proc_18);
#line 1800 "unused_args.m"
        {
#line 1800 "unused_args.m"
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__Proc_18, &transform_hlds__unused_args__HeadVars_19);
        }
#line 1801 "unused_args.m"
        {
#line 1801 "unused_args.m"
          mercury__list__length_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], transform_hlds__unused_args__HeadVars_19, &transform_hlds__unused_args__NumHeadVars_20);
        }
#line 1805 "unused_args.m"
        {
#line 1805 "unused_args.m"
          transform_hlds__unused_args__V_31_31 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__unused_args__PredInfo_11);
        }
#line 1805 "unused_args.m"
        transform_hlds__unused_args__NumToDrop_21 = (transform_hlds__unused_args__NumHeadVars_20 - transform_hlds__unused_args__V_31_31);
#line 1806 "unused_args.m"
        {
#line 1806 "unused_args.m"
          transform_hlds__unused_args__drop_poly_inserted_args_3_p_0(transform_hlds__unused_args__NumToDrop_21, transform_hlds__unused_args__UnusedArgs0_14, &transform_hlds__unused_args__UnusedArgs_22);
        }
#line 1811 "unused_args.m"
        if ((transform_hlds__unused_args__UnusedArgs_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1812 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_Specs_29 = transform_hlds__unused_args__STATE_VARIABLE_Specs_0_28;
#line 1811 "unused_args.m"
        else
#line 1808 "unused_args.m"
          {
#line 1808 "unused_args.m"
            MR_Word transform_hlds__unused_args__Spec_25;

#line 1809 "unused_args.m"
            {
#line 1809 "unused_args.m"
              transform_hlds__unused_args__Spec_25 = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_117_110_117_115_101_100_95_97_114_103_115_95_95_91_49_93_95_48_3_f_0(transform_hlds__unused_args__PredInfo_11, transform_hlds__unused_args__UnusedArgs_22);
            }
#line 1810 "unused_args.m"
            {
#line 1810 "unused_args.m"
              MR_Word base;
#line 1810 "unused_args.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1810 "unused_args.m"
              *transform_hlds__unused_args__STATE_VARIABLE_Specs_29 = base;
#line 1810 "unused_args.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__Spec_25));
#line 1810 "unused_args.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_Specs_0_28));
#line 1810 "unused_args.m"
            }
#line 1808 "unused_args.m"
          }
#line 1797 "unused_args.m"
      }
#line 1796 "unused_args.m"
  }
#line 1787 "unused_args.m"
}

#line 1259 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0(
#line 1259 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ArgNo_5,
#line 1259 "unused_args.m"
  MR_Word transform_hlds__unused_args__ElemsToRemove_6,
#line 1259 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_List_0_14,
#line 1259 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_List_15)
#line 1259 "unused_args.m"
{
#line 1265 "unused_args.m"
  {
#line 1265 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1265 "unused_args.m"
    if ((transform_hlds__unused_args__ElemsToRemove_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1264 "unused_args.m"
      *transform_hlds__unused_args__STATE_VARIABLE_List_15 = transform_hlds__unused_args__STATE_VARIABLE_List_0_14;
#line 1265 "unused_args.m"
    else
#line 1276 "unused_args.m"
    if ((transform_hlds__unused_args__STATE_VARIABLE_List_0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1277 "unused_args.m"
      *transform_hlds__unused_args__STATE_VARIABLE_List_15 = transform_hlds__unused_args__STATE_VARIABLE_List_0_14;
#line 1276 "unused_args.m"
    else
#line 1268 "unused_args.m"
      {
#line 1268 "unused_args.m"
        MR_Box transform_hlds__unused_args__Head_10 = (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__STATE_VARIABLE_List_0_14, (MR_Integer) 0));
#line 1268 "unused_args.m"
        MR_Word transform_hlds__unused_args__Tail_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__STATE_VARIABLE_List_0_14, (MR_Integer) 1)));
#line 1268 "unused_args.m"
        MR_Integer transform_hlds__unused_args__NextArg_12 = (transform_hlds__unused_args__ArgNo_5 + (MR_Integer) 1);
#line 1268 "unused_args.m"
        MR_Word transform_hlds__unused_args__NewTail_13;

#line 1276 "unused_args.m"
        if ((transform_hlds__unused_args__Tail_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1277 "unused_args.m"
          transform_hlds__unused_args__NewTail_13 = transform_hlds__unused_args__Tail_11;
#line 1276 "unused_args.m"
        else
#line 1268 "unused_args.m"
          {
#line 1268 "unused_args.m"
            MR_Box transform_hlds__unused_args__Head_28 = (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Tail_11, (MR_Integer) 0));
#line 1268 "unused_args.m"
            MR_Word transform_hlds__unused_args__Tail_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Tail_11, (MR_Integer) 1)));
#line 1268 "unused_args.m"
            MR_Integer transform_hlds__unused_args__NextArg_30 = (transform_hlds__unused_args__NextArg_12 + (MR_Integer) 1);
#line 1268 "unused_args.m"
            MR_Word transform_hlds__unused_args__NewTail_31;

#line 1270 "unused_args.m"
            {
#line 1270 "unused_args.m"
              transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0(transform_hlds__unused_args__NextArg_30, transform_hlds__unused_args__ElemsToRemove_6, transform_hlds__unused_args__Tail_29, &transform_hlds__unused_args__NewTail_31);
            }
#line 1271 "unused_args.m"
            {
#line 1271 "unused_args.m"
              transform_hlds__unused_args__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__unused_args__NextArg_12)), transform_hlds__unused_args__ElemsToRemove_6);
            }
#line 1273 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1272 "unused_args.m"
              transform_hlds__unused_args__NewTail_13 = transform_hlds__unused_args__NewTail_31;
#line 1273 "unused_args.m"
            else
#line 1274 "unused_args.m"
              {
#line 1274 "unused_args.m"
                transform_hlds__unused_args__NewTail_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1274 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__NewTail_13, 0) = transform_hlds__unused_args__Head_28;
#line 1274 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__NewTail_13, 1) = ((MR_Box) (transform_hlds__unused_args__NewTail_31));
#line 1274 "unused_args.m"
              }
#line 1268 "unused_args.m"
          }
#line 1271 "unused_args.m"
        {
#line 1271 "unused_args.m"
          transform_hlds__unused_args__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__unused_args__ArgNo_5)), transform_hlds__unused_args__ElemsToRemove_6);
        }
#line 1273 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1272 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_List_15 = transform_hlds__unused_args__NewTail_13;
#line 1273 "unused_args.m"
        else
#line 1274 "unused_args.m"
          {
#line 1274 "unused_args.m"
            MR_Word base;
#line 1274 "unused_args.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1274 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_List_15 = base;
#line 1274 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 0) = transform_hlds__unused_args__Head_10;
#line 1274 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__NewTail_13));
#line 1274 "unused_args.m"
          }
#line 1268 "unused_args.m"
      }
#line 1265 "unused_args.m"
  }
#line 1259 "unused_args.m"
}

#line 1117 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(
#line 1117 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_8,
#line 1117 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredStatus_9,
#line 1117 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__4_4,
#line 1117 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44,
#line 1117 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_PredInfo_45)
#line 1117 "unused_args.m"
{
#line 1121 "unused_args.m"
  {
#line 1121 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1121 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeCtorInfo_70_70;
#line 1121 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__4_4, (MR_Integer) 0)));
#line 1121 "unused_args.m"
    MR_Integer transform_hlds__unused_args__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__4_4, (MR_Integer) 1)));
#line 1121 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredModule_13;
#line 1121 "unused_args.m"
    MR_String transform_hlds__unused_args__Name0_14;
#line 1121 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredOrFunc_15;
#line 1121 "unused_args.m"
    MR_Word transform_hlds__unused_args__Tvars_16;
#line 1121 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExistQVars_17;
#line 1121 "unused_args.m"
    MR_Word transform_hlds__unused_args__ArgTypes0_18;
#line 1121 "unused_args.m"
    MR_Word transform_hlds__unused_args__OrigOrigin_19;
#line 1121 "unused_args.m"
    MR_String transform_hlds__unused_args__Name1_27;
#line 1121 "unused_args.m"
    MR_Word transform_hlds__unused_args__Name2_28;
#line 1121 "unused_args.m"
    MR_Integer transform_hlds__unused_args__ProcInt_29;
#line 1121 "unused_args.m"
    MR_Word transform_hlds__unused_args__Name_30;
#line 1121 "unused_args.m"
    MR_Integer transform_hlds__unused_args__Arity_31;
#line 1121 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeVars_32;
#line 1121 "unused_args.m"
    MR_Word transform_hlds__unused_args__ArgTypes_33;
#line 1121 "unused_args.m"
    MR_Word transform_hlds__unused_args__Context_34;
#line 1121 "unused_args.m"
    MR_Word transform_hlds__unused_args__ClausesInfo_35;
#line 1121 "unused_args.m"
    MR_Word transform_hlds__unused_args__Markers_36;
#line 1121 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalType_37;
#line 1121 "unused_args.m"
    MR_Word transform_hlds__unused_args__ClassContext_38;
#line 1121 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarNameRemap_39;
#line 1121 "unused_args.m"
    MR_Word transform_hlds__unused_args__EmptyProofs_40;
#line 1121 "unused_args.m"
    MR_Word transform_hlds__unused_args__EmptyConstraintMap_41;
#line 1121 "unused_args.m"
    MR_Word transform_hlds__unused_args__Transform_42;
#line 1121 "unused_args.m"
    MR_Word transform_hlds__unused_args__Origin_43;
#line 1121 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_61_61;
#line 1121 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_62_62;
#line 1121 "unused_args.m"
    MR_String transform_hlds__unused_args__V_63_63;
#line 1121 "unused_args.m"
    MR_String transform_hlds__unused_args__V_65_65;
#line 1121 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredInfo_67_67;
#line 1130 "unused_args.m"
    MR_String transform_hlds__unused_args__V_47_47;

#line 1122 "unused_args.m"
    {
#line 1122 "unused_args.m"
      transform_hlds__unused_args__PredModule_13 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44);
    }
#line 1123 "unused_args.m"
    {
#line 1123 "unused_args.m"
      transform_hlds__unused_args__Name0_14 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44);
    }
#line 1124 "unused_args.m"
    {
#line 1124 "unused_args.m"
      transform_hlds__unused_args__PredOrFunc_15 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44);
    }
#line 1125 "unused_args.m"
    {
#line 1125 "unused_args.m"
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__Tvars_16, &transform_hlds__unused_args__ExistQVars_17, &transform_hlds__unused_args__ArgTypes0_18);
    }
#line 1126 "unused_args.m"
    {
#line 1126 "unused_args.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__OrigOrigin_19);
    }
#line 1129 "unused_args.m"
    {
#line 1129 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__string__prefix_2_p_0(transform_hlds__unused_args__Name0_14, (MR_String) "__");
    }
#line 1129 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1129 "unused_args.m"
      {
#line 1130 "unused_args.m"
        transform_hlds__unused_args__V_47_47 = (MR_String) "__LambdaGoal__";
#line 1130 "unused_args.m"
        {
#line 1130 "unused_args.m"
          transform_hlds__unused_args__succeeded = mercury__string__prefix_2_p_0(transform_hlds__unused_args__Name0_14, transform_hlds__unused_args__V_47_47);
        }
#line 1130 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1129 "unused_args.m"
      }
#line 1146 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1142 "unused_args.m"
      {
#line 1142 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeCtor_21;
#line 1134 "unused_args.m"
        MR_Word transform_hlds__unused_args___SpecialId_20;

#line 1134 "unused_args.m"
        transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__OrigOrigin_19)) == (MR_mktag((MR_Integer) 0)));
#line 1134 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1134 "unused_args.m"
          {
#line 1134 "unused_args.m"
            transform_hlds__unused_args___SpecialId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OrigOrigin_19, (MR_Integer) 0)));
#line 1134 "unused_args.m"
            transform_hlds__unused_args__TypeCtor_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OrigOrigin_19, (MR_Integer) 1)));
#line 1137 "unused_args.m"
            {
#line 1137 "unused_args.m"
              MR_Word transform_hlds__unused_args__TypeModule_22;
#line 1137 "unused_args.m"
              MR_String transform_hlds__unused_args__TypeName_23;
#line 1137 "unused_args.m"
              MR_Integer transform_hlds__unused_args__TypeArity_24;
#line 1137 "unused_args.m"
              MR_String transform_hlds__unused_args__TypeArityStr_25;
#line 1137 "unused_args.m"
              MR_String transform_hlds__unused_args__TypeModuleString_26;
#line 1137 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_49_49;
#line 1137 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_50_50;
#line 1137 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_52_52;
#line 1137 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_53_53;
#line 1137 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_55_55;
#line 1137 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_56_56;
#line 1137 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_58_58;

#line 1136 "unused_args.m"
              {
#line 1136 "unused_args.m"
                check_hlds__type_util__type_ctor_module_name_arity_4_p_0(transform_hlds__unused_args__TypeCtor_21, &transform_hlds__unused_args__TypeModule_22, &transform_hlds__unused_args__TypeName_23, &transform_hlds__unused_args__TypeArity_24);
              }
#line 1138 "unused_args.m"
              {
#line 1138 "unused_args.m"
                mercury__string__int_to_string_2_p_0(transform_hlds__unused_args__TypeArity_24, &transform_hlds__unused_args__TypeArityStr_25);
              }
#line 1139 "unused_args.m"
              {
#line 1139 "unused_args.m"
                transform_hlds__unused_args__TypeModuleString_26 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(transform_hlds__unused_args__TypeModule_22, (MR_String) "__");
              }
#line 1141 "unused_args.m"
              {
#line 1141 "unused_args.m"
                transform_hlds__unused_args__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1141 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_58_58, 0) = ((MR_Box) (transform_hlds__unused_args__TypeArityStr_25));
#line 1141 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1141 "unused_args.m"
              }
#line 1141 "unused_args.m"
              {
#line 1141 "unused_args.m"
                transform_hlds__unused_args__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1141 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_56_56, 0) = ((MR_Box) ((MR_String) "_"));
#line 1141 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_56_56, 1) = ((MR_Box) (transform_hlds__unused_args__V_58_58));
#line 1141 "unused_args.m"
              }
#line 1140 "unused_args.m"
              {
#line 1140 "unused_args.m"
                transform_hlds__unused_args__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1140 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_55_55, 0) = ((MR_Box) (transform_hlds__unused_args__TypeName_23));
#line 1140 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_55_55, 1) = ((MR_Box) (transform_hlds__unused_args__V_56_56));
#line 1140 "unused_args.m"
              }
#line 1140 "unused_args.m"
              {
#line 1140 "unused_args.m"
                transform_hlds__unused_args__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1140 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_53_53, 0) = ((MR_Box) ((MR_String) "__"));
#line 1140 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_53_53, 1) = ((MR_Box) (transform_hlds__unused_args__V_55_55));
#line 1140 "unused_args.m"
              }
#line 1140 "unused_args.m"
              {
#line 1140 "unused_args.m"
                transform_hlds__unused_args__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1140 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_52_52, 0) = ((MR_Box) (transform_hlds__unused_args__TypeModuleString_26));
#line 1140 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_52_52, 1) = ((MR_Box) (transform_hlds__unused_args__V_53_53));
#line 1140 "unused_args.m"
              }
#line 1140 "unused_args.m"
              {
#line 1140 "unused_args.m"
                transform_hlds__unused_args__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1140 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_50_50, 0) = ((MR_Box) ((MR_String) "_"));
#line 1140 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_50_50, 1) = ((MR_Box) (transform_hlds__unused_args__V_52_52));
#line 1140 "unused_args.m"
              }
#line 1140 "unused_args.m"
              {
#line 1140 "unused_args.m"
                transform_hlds__unused_args__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1140 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_49_49, 0) = ((MR_Box) (transform_hlds__unused_args__Name0_14));
#line 1140 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_49_49, 1) = ((MR_Box) (transform_hlds__unused_args__V_50_50));
#line 1140 "unused_args.m"
              }
#line 1140 "unused_args.m"
              {
#line 1140 "unused_args.m"
                mercury__string__append_list_2_p_0(transform_hlds__unused_args__V_49_49, &transform_hlds__unused_args__Name1_27);
              }
#line 1137 "unused_args.m"
            }
#line 1134 "unused_args.m"
          }
#line 1134 "unused_args.m"
        else
#line 1144 "unused_args.m"
          transform_hlds__unused_args__Name1_27 = transform_hlds__unused_args__Name0_14;
#line 1142 "unused_args.m"
      }
#line 1146 "unused_args.m"
    else
#line 1147 "unused_args.m"
      transform_hlds__unused_args__Name1_27 = transform_hlds__unused_args__Name0_14;
#line 1149 "unused_args.m"
    {
#line 1149 "unused_args.m"
      transform_hlds__unused_args__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_61_61, 0) = ((MR_Box) (transform_hlds__unused_args__PredOrFunc_15));
#line 1149 "unused_args.m"
    }
#line 1150 "unused_args.m"
    {
#line 1150 "unused_args.m"
      transform_hlds__unused_args__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1150 "unused_args.m"
      MR_hl_field(MR_mktag(3), transform_hlds__unused_args__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1150 "unused_args.m"
      MR_hl_field(MR_mktag(3), transform_hlds__unused_args__V_62_62, 1) = ((MR_Box) (transform_hlds__unused_args__UnusedArgs_8));
#line 1150 "unused_args.m"
    }
#line 1149 "unused_args.m"
    {
#line 1149 "unused_args.m"
      parse_tree__prog_util__make_pred_name_6_p_0(transform_hlds__unused_args__PredModule_13, (MR_String) "UnusedArgs", transform_hlds__unused_args__V_61_61, transform_hlds__unused_args__Name1_27, transform_hlds__unused_args__V_62_62, &transform_hlds__unused_args__Name2_28);
    }
#line 1157 "unused_args.m"
    {
#line 1157 "unused_args.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__unused_args__ProcId_11, &transform_hlds__unused_args__ProcInt_29);
    }
#line 1158 "unused_args.m"
    {
#line 1158 "unused_args.m"
      transform_hlds__unused_args__V_65_65 = mercury__string__int_to_string_1_f_0(transform_hlds__unused_args__ProcInt_29);
    }
#line 1158 "unused_args.m"
    {
#line 1158 "unused_args.m"
      transform_hlds__unused_args__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__unused_args__V_65_65);
    }
#line 1158 "unused_args.m"
    {
#line 1158 "unused_args.m"
      mdbcomp__sym_name__add_sym_name_suffix_3_p_0(transform_hlds__unused_args__Name2_28, transform_hlds__unused_args__V_63_63, &transform_hlds__unused_args__Name_30);
    }
#line 1159 "unused_args.m"
    {
#line 1159 "unused_args.m"
      transform_hlds__unused_args__Arity_31 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44);
    }
#line 1160 "unused_args.m"
    {
#line 1160 "unused_args.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__TypeVars_32);
    }
#line 1161 "unused_args.m"
    {
#line 1161 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_8, transform_hlds__unused_args__ArgTypes0_18, &transform_hlds__unused_args__ArgTypes_33);
    }
#line 1162 "unused_args.m"
    {
#line 1162 "unused_args.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__Context_34);
    }
#line 1163 "unused_args.m"
    {
#line 1163 "unused_args.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__ClausesInfo_35);
    }
#line 1164 "unused_args.m"
    {
#line 1164 "unused_args.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__Markers_36);
    }
#line 1165 "unused_args.m"
    {
#line 1165 "unused_args.m"
      hlds__hlds_pred__pred_info_get_goal_type_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__GoalType_37);
    }
#line 1166 "unused_args.m"
    {
#line 1166 "unused_args.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__ClassContext_38);
    }
#line 1167 "unused_args.m"
    {
#line 1167 "unused_args.m"
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__VarNameRemap_39);
    }
#line 5912 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__TypeCtorInfo_70_70 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 1172 "unused_args.m"
    {
#line 1172 "unused_args.m"
      mercury__map__init_1_p_0(transform_hlds__unused_args__TypeCtorInfo_70_70, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &transform_hlds__unused_args__EmptyProofs_40);
    }
#line 1173 "unused_args.m"
    {
#line 1173 "unused_args.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, transform_hlds__unused_args__TypeCtorInfo_70_70, &transform_hlds__unused_args__EmptyConstraintMap_41);
    }
#line 1174 "unused_args.m"
    {
#line 1174 "unused_args.m"
      transform_hlds__unused_args__Transform_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1174 "unused_args.m"
      MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Transform_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1174 "unused_args.m"
      MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Transform_42, 1) = ((MR_Box) (transform_hlds__unused_args__UnusedArgs_8));
#line 1174 "unused_args.m"
    }
#line 1175 "unused_args.m"
    {
#line 1175 "unused_args.m"
      transform_hlds__unused_args__Origin_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1175 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Origin_43, 0) = ((MR_Box) (transform_hlds__unused_args__Transform_42));
#line 1175 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Origin_43, 1) = ((MR_Box) (transform_hlds__unused_args__OrigOrigin_19));
#line 1175 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Origin_43, 2) = ((MR_Box) (transform_hlds__unused_args__PredId_10));
#line 1175 "unused_args.m"
    }
#line 1176 "unused_args.m"
    {
#line 1176 "unused_args.m"
      hlds__hlds_pred__pred_info_init_18_p_0(transform_hlds__unused_args__PredModule_13, transform_hlds__unused_args__Name_30, transform_hlds__unused_args__Arity_31, transform_hlds__unused_args__PredOrFunc_15, transform_hlds__unused_args__Context_34, transform_hlds__unused_args__Origin_43, transform_hlds__unused_args__PredStatus_9, transform_hlds__unused_args__GoalType_37, transform_hlds__unused_args__Markers_36, transform_hlds__unused_args__ArgTypes_33, transform_hlds__unused_args__Tvars_16, transform_hlds__unused_args__ExistQVars_17, transform_hlds__unused_args__ClassContext_38, transform_hlds__unused_args__EmptyProofs_40, transform_hlds__unused_args__EmptyConstraintMap_41, transform_hlds__unused_args__ClausesInfo_35, transform_hlds__unused_args__VarNameRemap_39, &transform_hlds__unused_args__STATE_VARIABLE_PredInfo_67_67);
    }
#line 1180 "unused_args.m"
    {
#line 1180 "unused_args.m"
      hlds__hlds_pred__pred_info_set_typevarset_3_p_0(transform_hlds__unused_args__TypeVars_32, transform_hlds__unused_args__STATE_VARIABLE_PredInfo_67_67, transform_hlds__unused_args__STATE_VARIABLE_PredInfo_45);
    }
#line 1121 "unused_args.m"
  }
#line 1117 "unused_args.m"
}

#line 862 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_117_115_101_100_95_97_114_103_115_95_112_97_115_115_95_95_91_50_93_95_48_5_p_0(
#line 862 "unused_args.m"
  MR_Integer transform_hlds__unused_args__PassNum_6,
#line 862 "unused_args.m"
  MR_Word transform_hlds__unused_args__LocalPredProcIds_8,
#line 862 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_12,
#line 862 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_13)
#line 862 "unused_args.m"
{
#line 865 "unused_args.m"
  while (MR_TRUE)
#line 865 "unused_args.m"
    {
#line 865 "unused_args.m"
      /* tailcall optimized into a loop */
#line 865 "unused_args.m"
      {
#line 865 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;
#line 865 "unused_args.m"
        MR_Word transform_hlds__unused_args__Changed_10;
#line 865 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_15_15;

#line 866 "unused_args.m"
        {
#line 866 "unused_args.m"
          transform_hlds__unused_args__unused_args_single_pass_5_p_0(transform_hlds__unused_args__LocalPredProcIds_8, (MR_Integer) 0, &transform_hlds__unused_args__Changed_10, transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_12, &transform_hlds__unused_args__STATE_VARIABLE_VarUsage_15_15);
        }
#line 875 "unused_args.m"
#line 875 "unused_args.m"
        switch (transform_hlds__unused_args__Changed_10) {
#line 875 "unused_args.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 875 "unused_args.m"
          case (MR_Integer) 0:
#line 876 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_VarUsage_13 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_15_15;
#line 875 "unused_args.m"
            break;
#line 875 "unused_args.m"
          case (MR_Integer) 1:
#line 868 "unused_args.m"
            {
#line 868 "unused_args.m"
              MR_Integer transform_hlds__unused_args__V_23_23 = (transform_hlds__unused_args__PassNum_6 + (MR_Integer) 1);

#line 874 "unused_args.m"
              /* direct tailcall eliminated */
#line 874 "unused_args.m"
              {
#line 874 "unused_args.m"
                MR_Integer transform_hlds__unused_args__PassNum__tmp_copy_6 = transform_hlds__unused_args__V_23_23;
#line 874 "unused_args.m"
                MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_12 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_15_15;

#line 874 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_12 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_12;
#line 874 "unused_args.m"
                transform_hlds__unused_args__PassNum_6 = transform_hlds__unused_args__PassNum__tmp_copy_6;
#line 874 "unused_args.m"
              }
#line 874 "unused_args.m"
              continue;
#line 868 "unused_args.m"
            }
#line 875 "unused_args.m"
            break;
#line 875 "unused_args.m"
        }
#line 865 "unused_args.m"
      }
#line 865 "unused_args.m"
      break;
#line 865 "unused_args.m"
    }
#line 862 "unused_args.m"
}

#line 1014 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_create_new_pred__1014__1_3_p_0(
#line 1014 "unused_args.m"
  MR_Word transform_hlds__unused_args__FuncInfo_25,
#line 1014 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer_26,
#line 1014 "unused_args.m"
  MR_Word transform_hlds__unused_args__LambdaHeadVar__1_56)
#line 1014 "unused_args.m"
{
#line 1014 "unused_args.m"
  {
#line 1014 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1014 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeClassInfo_for_partial_order_81;
#line 1016 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_57_57;
#line 94 "analysis.int"
    MR_bool MR_CALL (* transform_hlds__unused_args__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 1015 "unused_args.m"
    {
#line 1015 "unused_args.m"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____unused_args_answer_0_0(transform_hlds__unused_args__LambdaHeadVar__1_56, transform_hlds__unused_args__Answer_26);
    }
#line 1015 "unused_args.m"
    transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1014 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1014 "unused_args.m"
      {
#line 1016 "unused_args.m"
        transform_hlds__unused_args__V_57_57 = (MR_Word) transform_hlds__unused_args__LambdaHeadVar__1_56;
#line 1016 "unused_args.m"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1016 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1014 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1014 "unused_args.m"
          {
#line 6087 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__TypeClassInfo_for_partial_order_81 = (MR_Word) &transform_hlds__unused_args_scalar_common_2[3];
#line 94 "analysis.int"
            transform_hlds__unused_args__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__TypeClassInfo_for_partial_order_81, (MR_Integer) 0)), (MR_Integer) 5)));
#line 94 "analysis.int"
            {
#line 94 "analysis.int"
              transform_hlds__unused_args__succeeded = transform_hlds__unused_args__func_0(((MR_Box) transform_hlds__unused_args__TypeClassInfo_for_partial_order_81), ((MR_Box) (transform_hlds__unused_args__FuncInfo_25)), ((MR_Box) (transform_hlds__unused_args__Answer_26)), ((MR_Box) (transform_hlds__unused_args__LambdaHeadVar__1_56)));
            }
#line 1014 "unused_args.m"
          }
#line 1014 "unused_args.m"
      }
#line 1014 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 1014 "unused_args.m"
  }
#line 1014 "unused_args.m"
}

#line 1007 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__IntroducedFrom__func__unused_args_create_new_pred__1007__1_1_f_0(
#line 1007 "unused_args.m"
  MR_Word transform_hlds__unused_args__LambdaHeadVar__1_54)
#line 1007 "unused_args.m"
{
#line 1007 "unused_args.m"
  {
#line 1007 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1007 "unused_args.m"
    MR_Word transform_hlds__unused_args__LambdaHeadVar__2_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__LambdaHeadVar__1_54, (MR_Integer) 1)));
#line 1007 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__LambdaHeadVar__1_54, (MR_Integer) 2)));

#line 1007 "unused_args.m"
    return transform_hlds__unused_args__LambdaHeadVar__2_55;
#line 1007 "unused_args.m"
  }
#line 1007 "unused_args.m"
}

#line 683 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__683__1_2_p_0(
#line 683 "unused_args.m"
  MR_Word transform_hlds__unused_args__LHS_49,
#line 683 "unused_args.m"
  MR_Word transform_hlds__unused_args__CellVar_58)
#line 683 "unused_args.m"
{
#line 683 "unused_args.m"
  {
#line 683 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 683 "unused_args.m"
    {
#line 683 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], ((MR_Box) (transform_hlds__unused_args__CellVar_58)), ((MR_Box) (transform_hlds__unused_args__LHS_49)));
    }
#line 683 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 683 "unused_args.m"
  }
#line 683 "unused_args.m"
}

#line 701 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__701__1_2_p_0(
#line 701 "unused_args.m"
  MR_Word transform_hlds__unused_args__LHS_49,
#line 701 "unused_args.m"
  MR_Word transform_hlds__unused_args__CellVar_144)
#line 701 "unused_args.m"
{
#line 701 "unused_args.m"
  {
#line 701 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 701 "unused_args.m"
    {
#line 701 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], ((MR_Box) (transform_hlds__unused_args__CellVar_144)), ((MR_Box) (transform_hlds__unused_args__LHS_49)));
    }
#line 701 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 701 "unused_args.m"
  }
#line 701 "unused_args.m"
}

#line 660 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__660__1_2_p_0(
#line 660 "unused_args.m"
  MR_Word transform_hlds__unused_args__LambdaHeadVar__1_116,
#line 660 "unused_args.m"
  MR_Word * transform_hlds__unused_args__LambdaHeadVar__2_117)
#line 660 "unused_args.m"
{
#line 660 "unused_args.m"
  {
#line 660 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 660 "unused_args.m"
    MR_Word transform_hlds__unused_args__MaybeNameAndMode_44;
#line 661 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_45_45;
#line 661 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_46_46;
#line 662 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_47_47;

#line 661 "unused_args.m"
    *transform_hlds__unused_args__LambdaHeadVar__2_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__LambdaHeadVar__1_116, (MR_Integer) 0)));
#line 661 "unused_args.m"
    transform_hlds__unused_args__MaybeNameAndMode_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__LambdaHeadVar__1_116, (MR_Integer) 1)));
#line 661 "unused_args.m"
    transform_hlds__unused_args__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__LambdaHeadVar__1_116, (MR_Integer) 2)));
#line 661 "unused_args.m"
    transform_hlds__unused_args__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__LambdaHeadVar__1_116, (MR_Integer) 3)));
#line 662 "unused_args.m"
    transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__MaybeNameAndMode_44)) == (MR_mktag((MR_Integer) 1)));
#line 662 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 662 "unused_args.m"
      transform_hlds__unused_args__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__MaybeNameAndMode_44, (MR_Integer) 0)));
#line 660 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 660 "unused_args.m"
  }
#line 660 "unused_args.m"
}

#line 427 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__setup_proc_args__427__1_3_p_0(
#line 427 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVars_35,
#line 427 "unused_args.m"
  MR_Integer transform_hlds__unused_args__HeadVar__2_84,
#line 427 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__3_85)
#line 427 "unused_args.m"
{
#line 427 "unused_args.m"
  {
#line 427 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 427 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv0_HeadVar__3_85;

#line 427 "unused_args.m"
    {
#line 427 "unused_args.m"
      mercury__list__det_index1_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], transform_hlds__unused_args__HeadVars_35, transform_hlds__unused_args__HeadVar__2_84, &transform_hlds__unused_args__conv0_HeadVar__3_85);
    }
#line 427 "unused_args.m"
    *transform_hlds__unused_args__HeadVar__3_85 = ((MR_Word) transform_hlds__unused_args__conv0_HeadVar__3_85);
#line 427 "unused_args.m"
  }
#line 427 "unused_args.m"
}

#line 207 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__from_term_2_2_p_0(
#line 207 "unused_args.m"
  MR_Word transform_hlds__unused_args__Term_3)
#line 207 "unused_args.m"
{
#line 207 "unused_args.m"
  {
#line 207 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 207 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_5_5;
#line 207 "unused_args.m"
    MR_String transform_hlds__unused_args__V_6_6;
#line 207 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_7_7;
#line 208 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_4_4;

#line 207 "unused_args.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 208 "unused_args.m"
    transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 208 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 208 "unused_args.m"
      {
#line 208 "unused_args.m"
        transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Term_3, (MR_Integer) 0)));
#line 208 "unused_args.m"
        transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Term_3, (MR_Integer) 1)));
#line 208 "unused_args.m"
        transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Term_3, (MR_Integer) 2)));
#line 208 "unused_args.m"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 207 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 207 "unused_args.m"
          {
#line 208 "unused_args.m"
            transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__V_5_5)) == (MR_mktag((MR_Integer) 0)));
#line 208 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 208 "unused_args.m"
              {
#line 208 "unused_args.m"
                transform_hlds__unused_args__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_5_5, (MR_Integer) 0)));
#line 208 "unused_args.m"
                transform_hlds__unused_args__succeeded = (strcmp(transform_hlds__unused_args__V_6_6, (MR_String) "any") == 0);
#line 208 "unused_args.m"
              }
#line 207 "unused_args.m"
          }
#line 208 "unused_args.m"
      }
#line 207 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 207 "unused_args.m"
  }
#line 207 "unused_args.m"
}

#line 204 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__to_term_1_1_f_0(void)
#line 204 "unused_args.m"
{
#line 204 "unused_args.m"
  {
#line 204 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 204 "unused_args.m"
    MR_Word transform_hlds__unused_args__Term_3;

#line 204 "unused_args.m"
    {
#line 204 "unused_args.m"
      transform_hlds__unused_args__Term_3 = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_f_0();
    }
#line 204 "unused_args.m"
    return transform_hlds__unused_args__Term_3;
#line 204 "unused_args.m"
  }
#line 204 "unused_args.m"
}

#line 226 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__from_term_2_2_p_0(
#line 226 "unused_args.m"
  MR_Word transform_hlds__unused_args__Term_4,
#line 226 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2)
#line 226 "unused_args.m"
{
#line 226 "unused_args.m"
  {
#line 226 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 226 "unused_args.m"
    MR_Word transform_hlds__unused_args__Args_3;
#line 227 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv0_Args_3;

#line 227 "unused_args.m"
    {
#line 227 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__term_conversion__term_to_type_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &transform_hlds__unused_args_scalar_common_1[0], transform_hlds__unused_args__Term_4, &transform_hlds__unused_args__conv0_Args_3);
    }
#line 227 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 227 "unused_args.m"
      {
#line 227 "unused_args.m"
        transform_hlds__unused_args__Args_3 = ((MR_Word) transform_hlds__unused_args__conv0_Args_3);
#line 227 "unused_args.m"
        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 227 "unused_args.m"
      }
#line 226 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 226 "unused_args.m"
      {
#line 226 "unused_args.m"
        *transform_hlds__unused_args__HeadVar__2_2 = (MR_Word) transform_hlds__unused_args__Args_3;
#line 226 "unused_args.m"
        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 226 "unused_args.m"
      }
#line 226 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 226 "unused_args.m"
  }
#line 226 "unused_args.m"
}

#line 223 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__to_term_1_1_f_0(
#line 223 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1)
#line 223 "unused_args.m"
{
#line 223 "unused_args.m"
  {
#line 223 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 223 "unused_args.m"
    MR_Word transform_hlds__unused_args__Term_4;
#line 223 "unused_args.m"
    MR_Word transform_hlds__unused_args__Args_3 = (MR_Word) transform_hlds__unused_args__HeadVar__1_1;

#line 224 "unused_args.m"
    {
#line 224 "unused_args.m"
      mercury__term_conversion__type_to_term_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[0], (MR_Word) &mercury__term__term__type_ctor_info_generic_0, ((MR_Box) (transform_hlds__unused_args__Args_3)), &transform_hlds__unused_args__Term_4);
    }
#line 223 "unused_args.m"
    return transform_hlds__unused_args__Term_4;
#line 223 "unused_args.m"
  }
#line 223 "unused_args.m"
}

#line 200 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__equivalent_3_3_p_0(
#line 200 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_7)
#line 200 "unused_args.m"
{
#line 200 "unused_args.m"
  {
#line 200 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 200 "unused_args.m"
    {
#line 200 "unused_args.m"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0();
    }
#line 200 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 200 "unused_args.m"
  }
#line 200 "unused_args.m"
}

#line 197 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__more_precise_than_3_3_p_0(
#line 197 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_4)
#line 197 "unused_args.m"
{
#line 198 "unused_args.m"
  {
#line 198 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 198 "unused_args.m"
    {
#line 198 "unused_args.m"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0();
    }
#line 198 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 198 "unused_args.m"
  }
#line 197 "unused_args.m"
}

#line 219 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__equivalent_3_3_p_0(
#line 219 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_9,
#line 219 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_10,
#line 219 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_3)
#line 219 "unused_args.m"
{
#line 219 "unused_args.m"
  {
#line 219 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 219 "unused_args.m"
    {
#line 219 "unused_args.m"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(transform_hlds__unused_args__Args_10, transform_hlds__unused_args__Args_3);
    }
#line 219 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 219 "unused_args.m"
  }
#line 219 "unused_args.m"
}

#line 214 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__more_precise_than_3_3_p_0(
#line 214 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_4,
#line 214 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer1_5,
#line 214 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer2_6)
#line 214 "unused_args.m"
{
#line 214 "unused_args.m"
  {
#line 214 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 214 "unused_args.m"
    {
#line 214 "unused_args.m"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_93_95_48_3_p_0(transform_hlds__unused_args__Answer1_5, transform_hlds__unused_args__Answer2_6);
    }
#line 214 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 214 "unused_args.m"
  }
#line 214 "unused_args.m"
}

#line 183 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__get_func_info_6_6_p_0(
#line 183 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_17,
#line 183 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleName_18,
#line 183 "unused_args.m"
  MR_Word transform_hlds__unused_args__FuncId_19,
#line 183 "unused_args.m"
  MR_Word * transform_hlds__unused_args__FuncInfo_22)
#line 183 "unused_args.m"
{
#line 183 "unused_args.m"
  {
#line 183 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 183 "unused_args.m"
    {
#line 183 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_103_101_116_95_102_117_110_99_95_105_110_102_111_95_54_95_95_91_52_44_32_53_93_95_48_6_p_0(transform_hlds__unused_args__ModuleInfo_17, transform_hlds__unused_args__ModuleName_18, transform_hlds__unused_args__FuncId_19, transform_hlds__unused_args__FuncInfo_22);
    }
#line 183 "unused_args.m"
  }
#line 183 "unused_args.m"
}

#line 182 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__top_2_2_f_0(
#line 182 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_12)
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
      transform_hlds__unused_args__HeadVar__3_3 = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 182 "unused_args.m"
    return transform_hlds__unused_args__HeadVar__3_3;
#line 182 "unused_args.m"
  }
#line 182 "unused_args.m"
}

#line 181 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__bottom_2_2_f_0(
#line 181 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1)
#line 181 "unused_args.m"
{
#line 181 "unused_args.m"
  {
#line 181 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 181 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVar__3_3;

#line 181 "unused_args.m"
    {
#line 181 "unused_args.m"
      transform_hlds__unused_args__HeadVar__3_3 = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_50_95_95_91_50_93_95_48_2_f_0(transform_hlds__unused_args__HeadVar__1_1);
    }
#line 181 "unused_args.m"
    return transform_hlds__unused_args__HeadVar__3_3;
#line 181 "unused_args.m"
  }
#line 181 "unused_args.m"
}

#line 180 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0(void)
#line 180 "unused_args.m"
{
#line 180 "unused_args.m"
  {
#line 180 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 180 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVar__3_3;

#line 180 "unused_args.m"
    {
#line 180 "unused_args.m"
      transform_hlds__unused_args__HeadVar__3_3 = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 180 "unused_args.m"
    return transform_hlds__unused_args__HeadVar__3_3;
#line 180 "unused_args.m"
  }
#line 180 "unused_args.m"
}

#line 179 "unused_args.m"
static MR_Integer MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_version_number_2_2_f_0(void)
#line 179 "unused_args.m"
{
#line 179 "unused_args.m"
  {
#line 179 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 179 "unused_args.m"
    MR_Integer transform_hlds__unused_args__HeadVar__3_3;

#line 179 "unused_args.m"
    {
#line 179 "unused_args.m"
      transform_hlds__unused_args__HeadVar__3_3 = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 179 "unused_args.m"
    return transform_hlds__unused_args__HeadVar__3_3;
#line 179 "unused_args.m"
  }
#line 179 "unused_args.m"
}

#line 178 "unused_args.m"
static MR_String MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_name_2_2_f_0(void)
#line 178 "unused_args.m"
{
#line 193 "unused_args.m"
  {
#line 193 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 193 "unused_args.m"
    MR_String transform_hlds__unused_args__HeadVar__3_3;

#line 193 "unused_args.m"
    {
#line 193 "unused_args.m"
      transform_hlds__unused_args__HeadVar__3_3 = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 193 "unused_args.m"
    return transform_hlds__unused_args__HeadVar__3_3;
#line 193 "unused_args.m"
  }
#line 178 "unused_args.m"
}

#line 150 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____warning_info_0_0(
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
    MR_Integer transform_hlds__unused_args__CastX_15 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 150 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_16 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 150 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_15 == transform_hlds__unused_args__CastY_16);
#line 150 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 6700 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 150 "unused_args.m"
    else
#line 150 "unused_args.m"
      {
#line 150 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 150 "unused_args.m"
        MR_String transform_hlds__unused_args__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 150 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 2)));
#line 150 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 3)));
#line 150 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 0)));
#line 150 "unused_args.m"
        MR_String transform_hlds__unused_args__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 1)));
#line 150 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 2)));
#line 150 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 3)));
#line 150 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_12_12;

#line 150 "unused_args.m"
        {
#line 150 "unused_args.m"
          mercury__term____Compare____context_0_0(&transform_hlds__unused_args__V_12_12, transform_hlds__unused_args__V_4_4, transform_hlds__unused_args__V_8_8);
        }
#line 6730 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_12_12 == (MR_Integer) 0);
#line 150 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 150 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 150 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_12_12;
#line 150 "unused_args.m"
        else
#line 150 "unused_args.m"
          {
#line 150 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_13_13;

#line 150 "unused_args.m"
            {
#line 150 "unused_args.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&transform_hlds__unused_args__V_13_13, transform_hlds__unused_args__V_5_5, transform_hlds__unused_args__V_9_9);
            }
#line 6750 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_13_13 == (MR_Integer) 0);
#line 150 "unused_args.m"
            transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 150 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 150 "unused_args.m"
              *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_13_13;
#line 150 "unused_args.m"
            else
#line 150 "unused_args.m"
              {
#line 150 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_14_14;

#line 150 "unused_args.m"
                {
#line 150 "unused_args.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__unused_args__V_14_14, transform_hlds__unused_args__V_6_6, transform_hlds__unused_args__V_10_10);
                }
#line 6770 "transform_hlds.unused_args.c"
                transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_14_14 == (MR_Integer) 0);
#line 150 "unused_args.m"
                transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 150 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 150 "unused_args.m"
                  *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_14_14;
#line 150 "unused_args.m"
                else
#line 150 "unused_args.m"
                  {
#line 150 "unused_args.m"
                    {
#line 150 "unused_args.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[0], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__V_7_7)), ((MR_Box) (transform_hlds__unused_args__V_11_11)));
                    }
#line 150 "unused_args.m"
                  }
#line 150 "unused_args.m"
              }
#line 150 "unused_args.m"
          }
#line 150 "unused_args.m"
      }
#line 150 "unused_args.m"
  }
#line 150 "unused_args.m"
}

#line 150 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____warning_info_0_0(
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
    MR_Integer transform_hlds__unused_args__CastX_11 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 150 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_12 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 150 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_11 == transform_hlds__unused_args__CastY_12);
#line 150 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 150 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 150 "unused_args.m"
    else
#line 150 "unused_args.m"
      {
#line 150 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_14_14;
#line 150 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 150 "unused_args.m"
        MR_String transform_hlds__unused_args__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 150 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 2)));
#line 150 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 3)));
#line 150 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 150 "unused_args.m"
        MR_String transform_hlds__unused_args__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 150 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 2)));
#line 150 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 3)));

#line 6847 "transform_hlds.unused_args.c"
        {
#line 6849 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__succeeded = mercury__term____Unify____context_0_0(transform_hlds__unused_args__V_3_3, transform_hlds__unused_args__V_7_7);
        }
#line 150 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 150 "unused_args.m"
          {
#line 6856 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__succeeded = (strcmp(transform_hlds__unused_args__V_4_4, transform_hlds__unused_args__V_8_8) == 0);
#line 150 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 150 "unused_args.m"
              {
#line 6862 "transform_hlds.unused_args.c"
                transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_5_5 == transform_hlds__unused_args__V_9_9);
#line 150 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 150 "unused_args.m"
                  {
#line 6868 "transform_hlds.unused_args.c"
                    transform_hlds__unused_args__TypeInfo_14_14 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[0];
#line 6870 "transform_hlds.unused_args.c"
                    {
#line 6872 "transform_hlds.unused_args.c"
                      transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_14_14, ((MR_Box) (transform_hlds__unused_args__V_6_6)), ((MR_Box) (transform_hlds__unused_args__V_10_10)));
                    }
#line 150 "unused_args.m"
                  }
#line 150 "unused_args.m"
              }
#line 150 "unused_args.m"
          }
#line 150 "unused_args.m"
      }
#line 150 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 150 "unused_args.m"
  }
#line 150 "unused_args.m"
}

#line 148 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____var_usage_0_0(
#line 148 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 148 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 148 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 148 "unused_args.m"
{
#line 148 "unused_args.m"
  {
#line 148 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 148 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar1_4 = transform_hlds__unused_args__HeadVar__2_2;
#line 148 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar2_5 = transform_hlds__unused_args__HeadVar__3_3;

#line 148 "unused_args.m"
    {
#line 148 "unused_args.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[7], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar2_5)));
    }
#line 148 "unused_args.m"
  }
#line 148 "unused_args.m"
}

#line 148 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_usage_0_0(
#line 148 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 148 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 148 "unused_args.m"
{
#line 148 "unused_args.m"
  {
#line 148 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 148 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar1_3 = transform_hlds__unused_args__HeadVar__1_1;
#line 148 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar2_4 = transform_hlds__unused_args__HeadVar__2_2;

#line 148 "unused_args.m"
    {
#line 148 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[7], ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar2_4)));
    }
#line 148 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 148 "unused_args.m"
  }
#line 148 "unused_args.m"
}

#line 145 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____var_dep_0_0(
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
    MR_Word transform_hlds__unused_args__Cast_HeadVar1_4 = transform_hlds__unused_args__HeadVar__2_2;
#line 145 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar2_5 = transform_hlds__unused_args__HeadVar__3_3;

#line 145 "unused_args.m"
    {
#line 145 "unused_args.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[1], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar2_5)));
    }
#line 145 "unused_args.m"
  }
#line 145 "unused_args.m"
}

#line 145 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_dep_0_0(
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
    MR_Word transform_hlds__unused_args__Cast_HeadVar1_3 = transform_hlds__unused_args__HeadVar__1_1;
#line 145 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar2_4 = transform_hlds__unused_args__HeadVar__2_2;

#line 145 "unused_args.m"
    {
#line 145 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[1], ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar2_4)));
    }
#line 145 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 145 "unused_args.m"
  }
#line 145 "unused_args.m"
}

#line 140 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____usage_info_0_0(
#line 140 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 140 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 140 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 140 "unused_args.m"
{
#line 140 "unused_args.m"
  {
#line 140 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 140 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_9 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 140 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_10 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 140 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_9 == transform_hlds__unused_args__CastY_10);
#line 140 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 7034 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 140 "unused_args.m"
    else
#line 140 "unused_args.m"
      {
#line 140 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 140 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 140 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 0)));
#line 140 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 1)));
#line 140 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8;

#line 140 "unused_args.m"
        {
#line 140 "unused_args.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[8], &transform_hlds__unused_args__V_8_8, ((MR_Box) (transform_hlds__unused_args__V_4_4)), ((MR_Box) (transform_hlds__unused_args__V_6_6)));
        }
#line 7056 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_8_8 == (MR_Integer) 0);
#line 140 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 140 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 140 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_8_8;
#line 140 "unused_args.m"
        else
#line 140 "unused_args.m"
          {
#line 140 "unused_args.m"
            {
#line 140 "unused_args.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[9], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__V_5_5)), ((MR_Box) (transform_hlds__unused_args__V_7_7)));
            }
#line 140 "unused_args.m"
          }
#line 140 "unused_args.m"
      }
#line 140 "unused_args.m"
  }
#line 140 "unused_args.m"
}

#line 140 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____usage_info_0_0(
#line 140 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 140 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 140 "unused_args.m"
{
#line 140 "unused_args.m"
  {
#line 140 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 140 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_7 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 140 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_8 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 140 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_7 == transform_hlds__unused_args__CastY_8);
#line 140 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 140 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 140 "unused_args.m"
    else
#line 140 "unused_args.m"
      {
#line 140 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_10_10;
#line 140 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 140 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 140 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 140 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));

#line 7121 "transform_hlds.unused_args.c"
        {
#line 7123 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[8], ((MR_Box) (transform_hlds__unused_args__V_3_3)), ((MR_Box) (transform_hlds__unused_args__V_5_5)));
        }
#line 140 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 140 "unused_args.m"
          {
#line 7130 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__TypeInfo_10_10 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[9];
#line 7132 "transform_hlds.unused_args.c"
            {
#line 7134 "transform_hlds.unused_args.c"
              transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_10_10, ((MR_Box) (transform_hlds__unused_args__V_4_4)), ((MR_Box) (transform_hlds__unused_args__V_6_6)));
            }
#line 140 "unused_args.m"
          }
#line 140 "unused_args.m"
      }
#line 140 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 140 "unused_args.m"
  }
#line 140 "unused_args.m"
}

#line 600 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_info_0_0(
#line 600 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 600 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 600 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 600 "unused_args.m"
{
#line 600 "unused_args.m"
  {
#line 600 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 600 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_9 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 600 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_10 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 600 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_9 == transform_hlds__unused_args__CastY_10);
#line 600 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 7172 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 600 "unused_args.m"
    else
#line 600 "unused_args.m"
      {
#line 600 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 600 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 600 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 0)));
#line 600 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 1)));
#line 600 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8;

#line 600 "unused_args.m"
        {
#line 600 "unused_args.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__unused_args__V_8_8, transform_hlds__unused_args__V_4_4, transform_hlds__unused_args__V_6_6);
        }
#line 7194 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_8_8 == (MR_Integer) 0);
#line 600 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 600 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 600 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_8_8;
#line 600 "unused_args.m"
        else
#line 600 "unused_args.m"
          {
#line 600 "unused_args.m"
            {
#line 600 "unused_args.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[6], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__V_5_5)), ((MR_Box) (transform_hlds__unused_args__V_7_7)));
            }
#line 600 "unused_args.m"
          }
#line 600 "unused_args.m"
      }
#line 600 "unused_args.m"
  }
#line 600 "unused_args.m"
}

#line 600 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_info_0_0(
#line 600 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 600 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 600 "unused_args.m"
{
#line 600 "unused_args.m"
  {
#line 600 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 600 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_7 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 600 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_8 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 600 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_7 == transform_hlds__unused_args__CastY_8);
#line 600 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 600 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 600 "unused_args.m"
    else
#line 600 "unused_args.m"
      {
#line 600 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_10_10;
#line 600 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 600 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 600 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 600 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));

#line 7259 "transform_hlds.unused_args.c"
        {
#line 7261 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__unused_args__V_3_3, transform_hlds__unused_args__V_5_5);
        }
#line 600 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 600 "unused_args.m"
          {
#line 7268 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__TypeInfo_10_10 = (MR_Word) &transform_hlds__unused_args_scalar_common_2[6];
#line 7270 "transform_hlds.unused_args.c"
            {
#line 7272 "transform_hlds.unused_args.c"
              transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_10_10, ((MR_Box) (transform_hlds__unused_args__V_4_4)), ((MR_Box) (transform_hlds__unused_args__V_6_6)));
            }
#line 600 "unused_args.m"
          }
#line 600 "unused_args.m"
      }
#line 600 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 600 "unused_args.m"
  }
#line 600 "unused_args.m"
}

#line 159 "unused_args.m"
void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_func_info_0_0(
#line 159 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 159 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 159 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 159 "unused_args.m"
{
#line 159 "unused_args.m"
  {
#line 159 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 159 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_6 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 159 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_7 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 159 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_6 == transform_hlds__unused_args__CastY_7);
#line 159 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 7310 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 159 "unused_args.m"
    else
#line 159 "unused_args.m"
      {
#line 159 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_4_4 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 159 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_5_5 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 159 "unused_args.m"
        {
#line 159 "unused_args.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__unused_args__HeadVar__1_1, transform_hlds__unused_args__V_4_4, transform_hlds__unused_args__V_5_5);
        }
#line 159 "unused_args.m"
      }
#line 159 "unused_args.m"
  }
#line 159 "unused_args.m"
}

#line 159 "unused_args.m"
MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_func_info_0_0(
#line 159 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 159 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 159 "unused_args.m"
{
#line 159 "unused_args.m"
  {
#line 159 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 159 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_5 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 159 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_6 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 159 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_5 == transform_hlds__unused_args__CastY_6);
#line 159 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 159 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 159 "unused_args.m"
    else
#line 159 "unused_args.m"
      {
#line 159 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_3_3 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 159 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_4_4 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 7366 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_3_3 == transform_hlds__unused_args__V_4_4);
#line 159 "unused_args.m"
      }
#line 159 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 159 "unused_args.m"
  }
#line 159 "unused_args.m"
}

#line 162 "unused_args.m"
void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_call_0_0(
#line 162 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1)
#line 162 "unused_args.m"
{
#line 162 "unused_args.m"
  {
#line 162 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 162 "unused_args.m"
    {
#line 162 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(transform_hlds__unused_args__HeadVar__1_1);
    }
#line 162 "unused_args.m"
  }
#line 162 "unused_args.m"
}

#line 162 "unused_args.m"
MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_call_0_0(void)
#line 162 "unused_args.m"
{
#line 162 "unused_args.m"
  {
#line 162 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 162 "unused_args.m"
    {
#line 162 "unused_args.m"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 162 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 162 "unused_args.m"
  }
#line 162 "unused_args.m"
}

#line 165 "unused_args.m"
void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_answer_0_0(
#line 165 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 165 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 165 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 165 "unused_args.m"
{
#line 165 "unused_args.m"
  {
#line 165 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 165 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_6 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 165 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_7 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 165 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_6 == transform_hlds__unused_args__CastY_7);
#line 165 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 7445 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 165 "unused_args.m"
    else
#line 165 "unused_args.m"
      {
#line 165 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = (MR_Word) transform_hlds__unused_args__HeadVar__2_2;
#line 165 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = (MR_Word) transform_hlds__unused_args__HeadVar__3_3;

#line 165 "unused_args.m"
        {
#line 165 "unused_args.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[0], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__V_4_4)), ((MR_Box) (transform_hlds__unused_args__V_5_5)));
        }
#line 165 "unused_args.m"
      }
#line 165 "unused_args.m"
  }
#line 165 "unused_args.m"
}

#line 165 "unused_args.m"
MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_answer_0_0(
#line 165 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 165 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 165 "unused_args.m"
{
#line 165 "unused_args.m"
  {
#line 165 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 165 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_5 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 165 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_6 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 165 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_5 == transform_hlds__unused_args__CastY_6);
#line 165 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 165 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 165 "unused_args.m"
    else
#line 165 "unused_args.m"
      {
#line 165 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = (MR_Word) transform_hlds__unused_args__HeadVar__1_1;
#line 165 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = (MR_Word) transform_hlds__unused_args__HeadVar__2_2;

#line 7501 "transform_hlds.unused_args.c"
        {
#line 7503 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[0], ((MR_Box) (transform_hlds__unused_args__V_3_3)), ((MR_Box) (transform_hlds__unused_args__V_4_4)));
        }
#line 165 "unused_args.m"
      }
#line 165 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 165 "unused_args.m"
  }
#line 165 "unused_args.m"
}

#line 971 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____proc_call_info_0_0(
#line 971 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 971 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 971 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 971 "unused_args.m"
{
#line 971 "unused_args.m"
  {
#line 971 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 971 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar1_4 = transform_hlds__unused_args__HeadVar__2_2;
#line 971 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar2_5 = transform_hlds__unused_args__HeadVar__3_3;

#line 971 "unused_args.m"
    {
#line 971 "unused_args.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[0], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar2_5)));
    }
#line 971 "unused_args.m"
  }
#line 971 "unused_args.m"
}

#line 971 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____proc_call_info_0_0(
#line 971 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 971 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 971 "unused_args.m"
{
#line 971 "unused_args.m"
  {
#line 971 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 971 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar1_3 = transform_hlds__unused_args__HeadVar__1_1;
#line 971 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar2_4 = transform_hlds__unused_args__HeadVar__2_2;

#line 971 "unused_args.m"
    {
#line 971 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[0], ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar2_4)));
    }
#line 971 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 971 "unused_args.m"
  }
#line 971 "unused_args.m"
}

#line 975 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____new_proc_info_0_0(
#line 975 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 975 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 975 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 975 "unused_args.m"
{
#line 975 "unused_args.m"
  {
#line 975 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 975 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_15 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 975 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_16 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 975 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_15 == transform_hlds__unused_args__CastY_16);
#line 975 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 7599 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 975 "unused_args.m"
    else
#line 975 "unused_args.m"
      {
#line 975 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 975 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 975 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 2)));
#line 975 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 3)));
#line 975 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 0)));
#line 975 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 1)));
#line 975 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 2)));
#line 975 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 3)));
#line 975 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_12_12;

#line 975 "unused_args.m"
        {
#line 975 "unused_args.m"
          hlds__hlds_pred____Compare____pred_id_0_0(&transform_hlds__unused_args__V_12_12, transform_hlds__unused_args__V_4_4, transform_hlds__unused_args__V_8_8);
        }
#line 7629 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_12_12 == (MR_Integer) 0);
#line 975 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 975 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 975 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_12_12;
#line 975 "unused_args.m"
        else
#line 975 "unused_args.m"
          {
#line 975 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_13_13;

#line 975 "unused_args.m"
            {
#line 975 "unused_args.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__unused_args__V_13_13, transform_hlds__unused_args__V_5_5, transform_hlds__unused_args__V_9_9);
            }
#line 7649 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_13_13 == (MR_Integer) 0);
#line 975 "unused_args.m"
            transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 975 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 975 "unused_args.m"
              *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_13_13;
#line 975 "unused_args.m"
            else
#line 975 "unused_args.m"
              {
#line 975 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_14_14;

#line 975 "unused_args.m"
                {
#line 975 "unused_args.m"
                  mdbcomp__sym_name____Compare____sym_name_0_0(&transform_hlds__unused_args__V_14_14, transform_hlds__unused_args__V_6_6, transform_hlds__unused_args__V_10_10);
                }
#line 7669 "transform_hlds.unused_args.c"
                transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_14_14 == (MR_Integer) 0);
#line 975 "unused_args.m"
                transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 975 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 975 "unused_args.m"
                  *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_14_14;
#line 975 "unused_args.m"
                else
#line 975 "unused_args.m"
                  {
#line 975 "unused_args.m"
                    {
#line 975 "unused_args.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[0], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__V_7_7)), ((MR_Box) (transform_hlds__unused_args__V_11_11)));
                    }
#line 975 "unused_args.m"
                  }
#line 975 "unused_args.m"
              }
#line 975 "unused_args.m"
          }
#line 975 "unused_args.m"
      }
#line 975 "unused_args.m"
  }
#line 975 "unused_args.m"
}

#line 975 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____new_proc_info_0_0(
#line 975 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 975 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 975 "unused_args.m"
{
#line 975 "unused_args.m"
  {
#line 975 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 975 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_11 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 975 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_12 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 975 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_11 == transform_hlds__unused_args__CastY_12);
#line 975 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 975 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 975 "unused_args.m"
    else
#line 975 "unused_args.m"
      {
#line 975 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_15_15;
#line 975 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 975 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 975 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 2)));
#line 975 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 3)));
#line 975 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 975 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 975 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 2)));
#line 975 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 3)));

#line 7746 "transform_hlds.unused_args.c"
        {
#line 7748 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__unused_args__V_3_3, transform_hlds__unused_args__V_7_7);
        }
#line 975 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 975 "unused_args.m"
          {
#line 7755 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_4_4 == transform_hlds__unused_args__V_8_8);
#line 975 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 975 "unused_args.m"
              {
#line 7761 "transform_hlds.unused_args.c"
                {
#line 7763 "transform_hlds.unused_args.c"
                  transform_hlds__unused_args__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__unused_args__V_5_5, transform_hlds__unused_args__V_9_9);
                }
#line 975 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 975 "unused_args.m"
                  {
#line 7770 "transform_hlds.unused_args.c"
                    transform_hlds__unused_args__TypeInfo_15_15 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[0];
#line 7772 "transform_hlds.unused_args.c"
                    {
#line 7774 "transform_hlds.unused_args.c"
                      transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_15_15, ((MR_Box) (transform_hlds__unused_args__V_6_6)), ((MR_Box) (transform_hlds__unused_args__V_10_10)));
                    }
#line 975 "unused_args.m"
                  }
#line 975 "unused_args.m"
              }
#line 975 "unused_args.m"
          }
#line 975 "unused_args.m"
      }
#line 975 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 975 "unused_args.m"
  }
#line 975 "unused_args.m"
}

#line 1391 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____fixup_info_0_0(
#line 1391 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 1391 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 1391 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 1391 "unused_args.m"
{
#line 1391 "unused_args.m"
  {
#line 1391 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1391 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_18 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 1391 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_19 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 1391 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_18 == transform_hlds__unused_args__CastY_19);
#line 1391 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 7816 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 1391 "unused_args.m"
    else
#line 1391 "unused_args.m"
      {
#line 1391 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 1391 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 1391 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 2)));
#line 1391 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 3)));
#line 1391 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 4)));
#line 1391 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 0)));
#line 1391 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 1)));
#line 1391 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 2)));
#line 1391 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 3)));
#line 1391 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 4)));
#line 1391 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_14_14;

#line 1391 "unused_args.m"
        {
#line 1391 "unused_args.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__unused_args__V_14_14, transform_hlds__unused_args__V_4_4, transform_hlds__unused_args__V_9_9);
        }
#line 7850 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_14_14 == (MR_Integer) 0);
#line 1391 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1391 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1391 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_14_14;
#line 1391 "unused_args.m"
        else
#line 1391 "unused_args.m"
          {
#line 1391 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_15_15;

#line 1391 "unused_args.m"
            {
#line 1391 "unused_args.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[0], &transform_hlds__unused_args__V_15_15, ((MR_Box) (transform_hlds__unused_args__V_5_5)), ((MR_Box) (transform_hlds__unused_args__V_10_10)));
            }
#line 7870 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_15_15 == (MR_Integer) 0);
#line 1391 "unused_args.m"
            transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1391 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1391 "unused_args.m"
              *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_15_15;
#line 1391 "unused_args.m"
            else
#line 1391 "unused_args.m"
              {
#line 1391 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_16_16;

#line 1391 "unused_args.m"
                {
#line 1391 "unused_args.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[6], &transform_hlds__unused_args__V_16_16, ((MR_Box) (transform_hlds__unused_args__V_6_6)), ((MR_Box) (transform_hlds__unused_args__V_11_11)));
                }
#line 7890 "transform_hlds.unused_args.c"
                transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_16_16 == (MR_Integer) 0);
#line 1391 "unused_args.m"
                transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1391 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 1391 "unused_args.m"
                  *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_16_16;
#line 1391 "unused_args.m"
                else
#line 1391 "unused_args.m"
                  {
#line 1391 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_17_17;

#line 1391 "unused_args.m"
                    {
#line 1391 "unused_args.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[7], &transform_hlds__unused_args__V_17_17, ((MR_Box) (transform_hlds__unused_args__V_7_7)), ((MR_Box) (transform_hlds__unused_args__V_12_12)));
                    }
#line 7910 "transform_hlds.unused_args.c"
                    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_17_17 == (MR_Integer) 0);
#line 1391 "unused_args.m"
                    transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1391 "unused_args.m"
                    if (transform_hlds__unused_args__succeeded)
#line 1391 "unused_args.m"
                      *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_17_17;
#line 1391 "unused_args.m"
                    else
#line 1391 "unused_args.m"
                      {
#line 1391 "unused_args.m"
                        {
#line 1391 "unused_args.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[6], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__V_8_8)), ((MR_Box) (transform_hlds__unused_args__V_13_13)));
                        }
#line 1391 "unused_args.m"
                      }
#line 1391 "unused_args.m"
                  }
#line 1391 "unused_args.m"
              }
#line 1391 "unused_args.m"
          }
#line 1391 "unused_args.m"
      }
#line 1391 "unused_args.m"
  }
#line 1391 "unused_args.m"
}

#line 1391 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____fixup_info_0_0(
#line 1391 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1391 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 1391 "unused_args.m"
{
#line 1391 "unused_args.m"
  {
#line 1391 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1391 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_13 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 1391 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_14 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 1391 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_13 == transform_hlds__unused_args__CastY_14);
#line 1391 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1391 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1391 "unused_args.m"
    else
#line 1391 "unused_args.m"
      {
#line 1391 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_16_16;
#line 1391 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_17_17;
#line 1391 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_18_18;
#line 1391 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_19_19;
#line 1391 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 1391 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 1391 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 2)));
#line 1391 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 3)));
#line 1391 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 4)));
#line 1391 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 1391 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 1391 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 2)));
#line 1391 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 3)));
#line 1391 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 4)));

#line 7999 "transform_hlds.unused_args.c"
        {
#line 8001 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__unused_args__V_3_3, transform_hlds__unused_args__V_8_8);
        }
#line 1391 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1391 "unused_args.m"
          {
#line 8008 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__TypeInfo_16_16 = (MR_Word) &transform_hlds__unused_args_scalar_common_2[0];
#line 8010 "transform_hlds.unused_args.c"
            {
#line 8012 "transform_hlds.unused_args.c"
              transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_16_16, ((MR_Box) (transform_hlds__unused_args__V_4_4)), ((MR_Box) (transform_hlds__unused_args__V_9_9)));
            }
#line 1391 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1391 "unused_args.m"
              {
#line 8019 "transform_hlds.unused_args.c"
                transform_hlds__unused_args__TypeInfo_17_17 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[6];
#line 8021 "transform_hlds.unused_args.c"
                {
#line 8023 "transform_hlds.unused_args.c"
                  transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_17_17, ((MR_Box) (transform_hlds__unused_args__V_5_5)), ((MR_Box) (transform_hlds__unused_args__V_10_10)));
                }
#line 1391 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 1391 "unused_args.m"
                  {
#line 8030 "transform_hlds.unused_args.c"
                    transform_hlds__unused_args__TypeInfo_18_18 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[7];
#line 8032 "transform_hlds.unused_args.c"
                    {
#line 8034 "transform_hlds.unused_args.c"
                      transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_18_18, ((MR_Box) (transform_hlds__unused_args__V_6_6)), ((MR_Box) (transform_hlds__unused_args__V_11_11)));
                    }
#line 1391 "unused_args.m"
                    if (transform_hlds__unused_args__succeeded)
#line 1391 "unused_args.m"
                      {
#line 8041 "transform_hlds.unused_args.c"
                        transform_hlds__unused_args__TypeInfo_19_19 = (MR_Word) &transform_hlds__unused_args_scalar_common_2[6];
#line 8043 "transform_hlds.unused_args.c"
                        {
#line 8045 "transform_hlds.unused_args.c"
                          transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_19_19, ((MR_Box) (transform_hlds__unused_args__V_7_7)), ((MR_Box) (transform_hlds__unused_args__V_12_12)));
                        }
#line 1391 "unused_args.m"
                      }
#line 1391 "unused_args.m"
                  }
#line 1391 "unused_args.m"
              }
#line 1391 "unused_args.m"
          }
#line 1391 "unused_args.m"
      }
#line 1391 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 1391 "unused_args.m"
  }
#line 1391 "unused_args.m"
}

#line 131 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____arg_var_in_proc_0_0(
#line 131 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 131 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 131 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 131 "unused_args.m"
{
#line 131 "unused_args.m"
  {
#line 131 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 131 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_9 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 131 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_10 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 131 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_9 == transform_hlds__unused_args__CastY_10);
#line 131 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 8089 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 131 "unused_args.m"
    else
#line 131 "unused_args.m"
      {
#line 131 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 131 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 131 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 0)));
#line 131 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 1)));
#line 131 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8;

#line 131 "unused_args.m"
        {
#line 131 "unused_args.m"
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__unused_args__V_8_8, transform_hlds__unused_args__V_4_4, transform_hlds__unused_args__V_6_6);
        }
#line 8111 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_8_8 == (MR_Integer) 0);
#line 131 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 131 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 131 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_8_8;
#line 131 "unused_args.m"
        else
#line 131 "unused_args.m"
          {
#line 131 "unused_args.m"
            {
#line 131 "unused_args.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__V_5_5)), ((MR_Box) (transform_hlds__unused_args__V_7_7)));
            }
#line 131 "unused_args.m"
          }
#line 131 "unused_args.m"
      }
#line 131 "unused_args.m"
  }
#line 131 "unused_args.m"
}

#line 131 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____arg_var_in_proc_0_0(
#line 131 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 131 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 131 "unused_args.m"
{
#line 131 "unused_args.m"
  {
#line 131 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 131 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_7 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 131 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_8 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 131 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_7 == transform_hlds__unused_args__CastY_8);
#line 131 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 131 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 131 "unused_args.m"
    else
#line 131 "unused_args.m"
      {
#line 131 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_10_10;
#line 131 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 131 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 131 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 131 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));

#line 8176 "transform_hlds.unused_args.c"
        {
#line 8178 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__unused_args__V_3_3, transform_hlds__unused_args__V_5_5);
        }
#line 131 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 131 "unused_args.m"
          {
#line 8185 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__TypeInfo_10_10 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 8187 "transform_hlds.unused_args.c"
            {
#line 8189 "transform_hlds.unused_args.c"
              transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_10_10, ((MR_Box) (transform_hlds__unused_args__V_4_4)), ((MR_Box) (transform_hlds__unused_args__V_6_6)));
            }
#line 131 "unused_args.m"
          }
#line 131 "unused_args.m"
      }
#line 131 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 131 "unused_args.m"
  }
#line 131 "unused_args.m"
}

#line 1978 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_2_4_p_0(
#line 1978 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 1978 "unused_args.m"
  MR_Word transform_hlds__unused_args__CalleePredProcId_6,
#line 1978 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_17,
#line 1978 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_18)
#line 1978 "unused_args.m"
{
#line 1981 "unused_args.m"
  {
#line 1981 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1981 "unused_args.m"
    MR_Word transform_hlds__unused_args__CalleePredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__CalleePredProcId_6, (MR_Integer) 0)));
#line 1981 "unused_args.m"
    MR_Word transform_hlds__unused_args__CalleePredInfo_10;
#line 1982 "unused_args.m"
    MR_Integer transform_hlds__unused_args__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__CalleePredProcId_6, (MR_Integer) 1)));

#line 1983 "unused_args.m"
    {
#line 1983 "unused_args.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__unused_args__ModuleInfo_5, transform_hlds__unused_args__CalleePredId_8, &transform_hlds__unused_args__CalleePredInfo_10);
    }
#line 1985 "unused_args.m"
    {
#line 1985 "unused_args.m"
      transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_imported_not_external_1_p_0(transform_hlds__unused_args__CalleePredInfo_10);
    }
#line 1985 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1985 "unused_args.m"
      {
#line 1986 "unused_args.m"
        {
#line 1986 "unused_args.m"
          transform_hlds__unused_args__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__unused_args__CalleePredInfo_10);
        }
#line 1986 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1985 "unused_args.m"
      }
#line 1996 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1989 "unused_args.m"
      {
#line 1989 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeClassInfo_for_analysis_20;
#line 1989 "unused_args.m"
        MR_Word transform_hlds__unused_args__CalleeModule_11;
#line 1989 "unused_args.m"
        MR_Word transform_hlds__unused_args__CalleeFuncId_12;
#line 1989 "unused_args.m"
        MR_Word transform_hlds__unused_args__Answer_14;
#line 1989 "unused_args.m"
        MR_Word transform_hlds__unused_args__FuncInfo_16;
#line 76 "analysis.int"
        void MR_CALL (* transform_hlds__unused_args__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 76 "analysis.int"
        MR_Box transform_hlds__unused_args__conv1_FuncInfo_16;

#line 1988 "unused_args.m"
        {
#line 1988 "unused_args.m"
          transform_hlds__mmc_analysis__module_name_func_id_4_p_0(transform_hlds__unused_args__ModuleInfo_5, transform_hlds__unused_args__CalleePredProcId_6, &transform_hlds__unused_args__CalleeModule_11, &transform_hlds__unused_args__CalleeFuncId_12);
        }
#line 1990 "unused_args.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 8276 "transform_hlds.unused_args.c"
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
#line 1994 "unused_args.m"
        {
#line 1994 "unused_args.m"
          analysis__record_dependency_7_p_0(transform_hlds__unused_args__TypeClassInfo_for_analysis_20, transform_hlds__unused_args__CalleeModule_11, transform_hlds__unused_args__CalleeFuncId_12, ((MR_Box) (transform_hlds__unused_args__FuncInfo_16)), ((MR_Box) ((MR_Integer) 0)), transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_17, transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_18);
        }
#line 1989 "unused_args.m"
      }
#line 1996 "unused_args.m"
    else
#line 1996 "unused_args.m"
      *transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_18 = transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_17;
#line 1981 "unused_args.m"
  }
#line 1978 "unused_args.m"
}

#line 1975 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_4_p_0_1(
#line 1975 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1975 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1975 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1975 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3)
#line 1975 "unused_args.m"
{
#line 1975 "unused_args.m"
  {
#line 1975 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1975 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_18;

#line 1975 "unused_args.m"
    {
#line 1975 "unused_args.m"
      transform_hlds__unused_args__record_intermod_dependencies_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_18);
    }
#line 1975 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_18));
#line 1975 "unused_args.m"
  }
#line 1975 "unused_args.m"
}

#line 1967 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_4_p_0(
#line 1967 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 1967 "unused_args.m"
  MR_Word transform_hlds__unused_args__CallerPredProcId_6,
#line 1967 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_12,
#line 1967 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_13)
#line 1967 "unused_args.m"
{
#line 1970 "unused_args.m"
  {
#line 1970 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1970 "unused_args.m"
    MR_Word transform_hlds__unused_args__CallerProcInfo_9;
#line 1970 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal_10;
#line 1970 "unused_args.m"
    MR_Word transform_hlds__unused_args__CalleePredProcIds_11;
#line 1970 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_14_14;
#line 1971 "unused_args.m"
    MR_Word transform_hlds__unused_args___CallerPredInfo_8;
#line 1975 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv1_STATE_VARIABLE_AnalysisInfo_13;

#line 1971 "unused_args.m"
    {
#line 1971 "unused_args.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__unused_args__ModuleInfo_5, transform_hlds__unused_args__CallerPredProcId_6, &transform_hlds__unused_args___CallerPredInfo_8, &transform_hlds__unused_args__CallerProcInfo_9);
    }
#line 1973 "unused_args.m"
    {
#line 1973 "unused_args.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__unused_args__CallerProcInfo_9, &transform_hlds__unused_args__Goal_10);
    }
#line 1974 "unused_args.m"
    {
#line 1974 "unused_args.m"
      hlds__goal_util__pred_proc_ids_from_goal_2_p_0(transform_hlds__unused_args__Goal_10, &transform_hlds__unused_args__CalleePredProcIds_11);
    }
#line 1975 "unused_args.m"
    {
#line 1975 "unused_args.m"
      transform_hlds__unused_args__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1975 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_6[0]));
#line 1975 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 1) = ((MR_Box) (transform_hlds__unused_args__record_intermod_dependencies_4_p_0_1));
#line 1975 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1975 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 3) = ((MR_Box) (transform_hlds__unused_args__ModuleInfo_5));
#line 1975 "unused_args.m"
    }
#line 1975 "unused_args.m"
    {
#line 1975 "unused_args.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, transform_hlds__unused_args__V_14_14, transform_hlds__unused_args__CalleePredProcIds_11, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_12)), &transform_hlds__unused_args__conv1_STATE_VARIABLE_AnalysisInfo_13);
    }
#line 1975 "unused_args.m"
    *transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_13 = ((MR_Word) transform_hlds__unused_args__conv1_STATE_VARIABLE_AnalysisInfo_13);
#line 1970 "unused_args.m"
  }
#line 1967 "unused_args.m"
}

#line 1930 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__maybe_record_intermod_unused_args_2_7_p_0(
#line 1930 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_8,
#line 1930 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_9,
#line 1930 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_10,
#line 1930 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredInfo_11,
#line 1930 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_12,
#line 1930 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_19,
#line 1930 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_20)
#line 1930 "unused_args.m"
{
#line 1949 "unused_args.m"
  {
#line 1949 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1937 "unused_args.m"
    {
#line 1937 "unused_args.m"
      transform_hlds__unused_args__succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(transform_hlds__unused_args__ModuleInfo_8, transform_hlds__unused_args__PredInfo_11, transform_hlds__unused_args__ProcId_12);
    }
#line 1937 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1937 "unused_args.m"
      {
#line 1938 "unused_args.m"
        {
#line 1938 "unused_args.m"
          transform_hlds__unused_args__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__unused_args__PredInfo_11);
        }
#line 1938 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1937 "unused_args.m"
      }
#line 1949 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1940 "unused_args.m"
      {
#line 1940 "unused_args.m"
        MR_Word transform_hlds__unused_args__PPId_14;
#line 1940 "unused_args.m"
        MR_Word transform_hlds__unused_args__Answer_16;
#line 1940 "unused_args.m"
        MR_Word transform_hlds__unused_args__ModuleName_17;
#line 1940 "unused_args.m"
        MR_Word transform_hlds__unused_args__FuncId_18;
#line 1943 "unused_args.m"
        MR_Word transform_hlds__unused_args__UnusedArgs_15;
#line 1941 "unused_args.m"
        MR_Box transform_hlds__unused_args__conv0_UnusedArgs_15;

#line 1940 "unused_args.m"
        {
#line 1940 "unused_args.m"
          transform_hlds__unused_args__PPId_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1940 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PPId_14, 0) = ((MR_Box) (transform_hlds__unused_args__PredId_10));
#line 1940 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PPId_14, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_12));
#line 1940 "unused_args.m"
        }
#line 1941 "unused_args.m"
        {
#line 1941 "unused_args.m"
          transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args_scalar_common_1[0], transform_hlds__unused_args__UnusedArgInfo_9, ((MR_Box) (transform_hlds__unused_args__PPId_14)), &transform_hlds__unused_args__conv0_UnusedArgs_15);
        }
#line 1941 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1941 "unused_args.m"
          {
#line 1941 "unused_args.m"
            transform_hlds__unused_args__UnusedArgs_15 = ((MR_Word) transform_hlds__unused_args__conv0_UnusedArgs_15);
#line 1941 "unused_args.m"
            transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1941 "unused_args.m"
          }
#line 1943 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1942 "unused_args.m"
          transform_hlds__unused_args__Answer_16 = (MR_Word) transform_hlds__unused_args__UnusedArgs_15;
#line 1943 "unused_args.m"
        else
#line 1944 "unused_args.m"
          {
#line 1944 "unused_args.m"
            transform_hlds__unused_args__Answer_16 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1944 "unused_args.m"
          }
#line 1946 "unused_args.m"
        {
#line 1946 "unused_args.m"
          transform_hlds__mmc_analysis__module_name_func_id_4_p_0(transform_hlds__unused_args__ModuleInfo_8, transform_hlds__unused_args__PPId_14, &transform_hlds__unused_args__ModuleName_17, &transform_hlds__unused_args__FuncId_18);
        }
#line 1947 "unused_args.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1947 "unused_args.m"
        {
#line 1947 "unused_args.m"
          analysis__record_result_7_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_4[0], transform_hlds__unused_args__ModuleName_17, transform_hlds__unused_args__FuncId_18, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (transform_hlds__unused_args__Answer_16)), (MR_Integer) 2, transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_19, transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_20);
        }
#line 1940 "unused_args.m"
      }
#line 1949 "unused_args.m"
    else
#line 1949 "unused_args.m"
      *transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_20 = transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_19;
#line 1949 "unused_args.m"
  }
#line 1930 "unused_args.m"
}

#line 1926 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0_1(
#line 1926 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1926 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1926 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1926 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3)
#line 1926 "unused_args.m"
{
#line 1926 "unused_args.m"
  {
#line 1926 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1926 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_20;

#line 1926 "unused_args.m"
    {
#line 1926 "unused_args.m"
      transform_hlds__unused_args__maybe_record_intermod_unused_args_2_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 6))), ((MR_Integer) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_20);
    }
#line 1926 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_20));
#line 1926 "unused_args.m"
  }
#line 1926 "unused_args.m"
}

#line 1918 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0(
#line 1918 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_6,
#line 1918 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_7,
#line 1918 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_8,
#line 1918 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_12,
#line 1918 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_13)
#line 1918 "unused_args.m"
{
#line 1922 "unused_args.m"
  {
#line 1922 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1922 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredInfo_10;
#line 1922 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcIds_11;
#line 1922 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_14_14;
#line 1925 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv1_STATE_VARIABLE_AnalysisInfo_13;

#line 1923 "unused_args.m"
    {
#line 1923 "unused_args.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__unused_args__ModuleInfo_6, transform_hlds__unused_args__PredId_8, &transform_hlds__unused_args__PredInfo_10);
    }
#line 1924 "unused_args.m"
    {
#line 1924 "unused_args.m"
      transform_hlds__unused_args__ProcIds_11 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__unused_args__PredInfo_10);
    }
#line 1926 "unused_args.m"
    {
#line 1926 "unused_args.m"
      transform_hlds__unused_args__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1926 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_11[0]));
#line 1926 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 1) = ((MR_Box) (transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0_1));
#line 1926 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1926 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 3) = ((MR_Box) (transform_hlds__unused_args__ModuleInfo_6));
#line 1926 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 4) = ((MR_Box) (transform_hlds__unused_args__UnusedArgInfo_7));
#line 1926 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 5) = ((MR_Box) (transform_hlds__unused_args__PredId_8));
#line 1926 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 6) = ((MR_Box) (transform_hlds__unused_args__PredInfo_10));
#line 1926 "unused_args.m"
    }
#line 1925 "unused_args.m"
    {
#line 1925 "unused_args.m"
      mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, transform_hlds__unused_args__V_14_14, transform_hlds__unused_args__ProcIds_11, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_12)), &transform_hlds__unused_args__conv1_STATE_VARIABLE_AnalysisInfo_13);
    }
#line 1925 "unused_args.m"
    *transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_13 = ((MR_Word) transform_hlds__unused_args__conv1_STATE_VARIABLE_AnalysisInfo_13);
#line 1922 "unused_args.m"
  }
#line 1918 "unused_args.m"
}

#line 1874 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__format_arg_list_2_2_f_0(
#line 1874 "unused_args.m"
  MR_Integer transform_hlds__unused_args__First_4,
#line 1874 "unused_args.m"
  MR_Word transform_hlds__unused_args__List_5)
#line 1874 "unused_args.m"
{
#line 1876 "unused_args.m"
  {
#line 1876 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1876 "unused_args.m"
    MR_Word transform_hlds__unused_args__Pieces_6;
#line 1876 "unused_args.m"
    MR_String transform_hlds__unused_args__FirstStr_7;

#line 1877 "unused_args.m"
    {
#line 1877 "unused_args.m"
      transform_hlds__unused_args__FirstStr_7 = mercury__string__int_to_string_1_f_0(transform_hlds__unused_args__First_4);
    }
#line 1882 "unused_args.m"
    if ((transform_hlds__unused_args__List_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1883 "unused_args.m"
      {
#line 1883 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_12_12;
#line 1883 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_13_13;

#line 1884 "unused_args.m"
        {
#line 1884 "unused_args.m"
          transform_hlds__unused_args__V_13_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1884 "unused_args.m"
          MR_hl_field(MR_mktag(2), transform_hlds__unused_args__V_13_13, 0) = ((MR_Box) (transform_hlds__unused_args__FirstStr_7));
#line 1884 "unused_args.m"
        }
#line 1884 "unused_args.m"
        {
#line 1884 "unused_args.m"
          transform_hlds__unused_args__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1884 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_12_12, 0) = ((MR_Box) (transform_hlds__unused_args__V_13_13));
#line 1884 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_12_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1884 "unused_args.m"
        }
#line 1884 "unused_args.m"
        {
#line 1884 "unused_args.m"
          transform_hlds__unused_args__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1884 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &transform_hlds__unused_args_scalar_common_9[1])));
#line 1884 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Pieces_6, 1) = ((MR_Box) (transform_hlds__unused_args__V_12_12));
#line 1884 "unused_args.m"
        }
#line 1883 "unused_args.m"
      }
#line 1882 "unused_args.m"
    else
#line 1879 "unused_args.m"
      {
#line 1879 "unused_args.m"
        MR_Integer transform_hlds__unused_args__Second_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__List_5, (MR_Integer) 0)));
#line 1879 "unused_args.m"
        MR_Word transform_hlds__unused_args__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__List_5, (MR_Integer) 1)));
#line 1879 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_17_17;
#line 1879 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_18_18;
#line 1879 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_19_19;

#line 1880 "unused_args.m"
        {
#line 1880 "unused_args.m"
          transform_hlds__unused_args__V_18_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1880 "unused_args.m"
          MR_hl_field(MR_mktag(2), transform_hlds__unused_args__V_18_18, 0) = ((MR_Box) (transform_hlds__unused_args__FirstStr_7));
#line 1880 "unused_args.m"
        }
#line 1881 "unused_args.m"
        {
#line 1881 "unused_args.m"
          transform_hlds__unused_args__V_19_19 = transform_hlds__unused_args__format_arg_list_2_2_f_0(transform_hlds__unused_args__Second_8, transform_hlds__unused_args__Rest_9);
        }
#line 1880 "unused_args.m"
        {
#line 1880 "unused_args.m"
          transform_hlds__unused_args__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1880 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_17_17, 0) = ((MR_Box) (transform_hlds__unused_args__V_18_18));
#line 1880 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_17_17, 1) = ((MR_Box) (transform_hlds__unused_args__V_19_19));
#line 1880 "unused_args.m"
        }
#line 1880 "unused_args.m"
        {
#line 1880 "unused_args.m"
          transform_hlds__unused_args__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1880 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__unused_args_scalar_common_1[20])));
#line 1880 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Pieces_6, 1) = ((MR_Box) (transform_hlds__unused_args__V_17_17));
#line 1880 "unused_args.m"
        }
#line 1879 "unused_args.m"
      }
#line 1876 "unused_args.m"
    return transform_hlds__unused_args__Pieces_6;
#line 1876 "unused_args.m"
  }
#line 1874 "unused_args.m"
}

#line 1822 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__drop_poly_inserted_args_3_p_0(
#line 1822 "unused_args.m"
  MR_Integer transform_hlds__unused_args__NumInserted_1,
#line 1822 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 1822 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__3_3)
#line 1822 "unused_args.m"
{
#line 1824 "unused_args.m"
  {
#line 1824 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1824 "unused_args.m"
    if ((transform_hlds__unused_args__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1824 "unused_args.m"
      *transform_hlds__unused_args__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1824 "unused_args.m"
    else
#line 1826 "unused_args.m"
      {
#line 1826 "unused_args.m"
        MR_Integer transform_hlds__unused_args__HeadArgWith_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 1826 "unused_args.m"
        MR_Word transform_hlds__unused_args__TailArgsWith_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 1826 "unused_args.m"
        MR_Word transform_hlds__unused_args__TailArgsWithout_9;
#line 1826 "unused_args.m"
        MR_Integer transform_hlds__unused_args__HeadArgWithout_10;

#line 1827 "unused_args.m"
        {
#line 1827 "unused_args.m"
          transform_hlds__unused_args__drop_poly_inserted_args_3_p_0(transform_hlds__unused_args__NumInserted_1, transform_hlds__unused_args__TailArgsWith_7, &transform_hlds__unused_args__TailArgsWithout_9);
        }
#line 1828 "unused_args.m"
        transform_hlds__unused_args__HeadArgWithout_10 = (transform_hlds__unused_args__HeadArgWith_6 - transform_hlds__unused_args__NumInserted_1);
#line 1829 "unused_args.m"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__HeadArgWithout_10 < (MR_Integer) 1);
#line 1831 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1830 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__3_3 = transform_hlds__unused_args__TailArgsWithout_9;
#line 1831 "unused_args.m"
        else
#line 1832 "unused_args.m"
          {
#line 1832 "unused_args.m"
            MR_Word base;
#line 1832 "unused_args.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1832 "unused_args.m"
            *transform_hlds__unused_args__HeadVar__3_3 = base;
#line 1832 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__HeadArgWithout_10));
#line 1832 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__TailArgsWithout_9));
#line 1832 "unused_args.m"
          }
#line 1826 "unused_args.m"
      }
#line 1824 "unused_args.m"
  }
#line 1822 "unused_args.m"
}

#line 1706 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__gather_warnings_and_pragmas_10_p_0(
#line 1706 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_1,
#line 1706 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_2,
#line 1706 "unused_args.m"
  MR_Word transform_hlds__unused_args__DoWarn_3,
#line 1706 "unused_args.m"
  MR_Word transform_hlds__unused_args__DoPragma_4,
#line 1706 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__5_5,
#line 1706 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_6,
#line 1706 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Specs_0_7,
#line 1706 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Specs_8,
#line 1706 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0_9,
#line 1706 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_10)
#line 1706 "unused_args.m"
{
#line 1712 "unused_args.m"
  while (MR_TRUE)
#line 1712 "unused_args.m"
    {
#line 1712 "unused_args.m"
      /* tailcall optimized into a loop */
#line 1712 "unused_args.m"
      {
#line 1712 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 1712 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1712 "unused_args.m"
          {
#line 1713 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_10 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0_9;
#line 1713 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_Specs_8 = transform_hlds__unused_args__STATE_VARIABLE_Specs_0_7;
#line 1712 "unused_args.m"
          }
#line 1712 "unused_args.m"
        else
#line 1716 "unused_args.m"
          {
#line 1716 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredProcId_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__5_5, (MR_Integer) 0)));
#line 1716 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredProcIds_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__5_5, (MR_Integer) 1)));
#line 1716 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_67_67;
#line 1716 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_68_68;
#line 1716 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_Specs_69_69;
#line 1781 "unused_args.m"
            MR_Word transform_hlds__unused_args__UnusedArgs_31;
#line 1717 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv0_UnusedArgs_31;

#line 1717 "unused_args.m"
            {
#line 1717 "unused_args.m"
              transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args_scalar_common_1[0], transform_hlds__unused_args__UnusedArgInfo_2, ((MR_Box) (transform_hlds__unused_args__PredProcId_26)), &transform_hlds__unused_args__conv0_UnusedArgs_31);
            }
#line 1717 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1717 "unused_args.m"
              {
#line 1717 "unused_args.m"
                transform_hlds__unused_args__UnusedArgs_31 = ((MR_Word) transform_hlds__unused_args__conv0_UnusedArgs_31);
#line 1717 "unused_args.m"
                transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1717 "unused_args.m"
              }
#line 1781 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1718 "unused_args.m"
              {
#line 1718 "unused_args.m"
                MR_Word transform_hlds__unused_args__PredId_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredProcId_26, (MR_Integer) 0)));
#line 1718 "unused_args.m"
                MR_Integer transform_hlds__unused_args__ProcId_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredProcId_26, (MR_Integer) 1)));
#line 1718 "unused_args.m"
                MR_Word transform_hlds__unused_args__PredInfo_34;
#line 1721 "unused_args.m"
                MR_String transform_hlds__unused_args__Name_35;
#line 1721 "unused_args.m"
                MR_Word transform_hlds__unused_args__PredStatus_36;
#line 1721 "unused_args.m"
                MR_Word transform_hlds__unused_args__Markers_37;
#line 1721 "unused_args.m"
                MR_Word transform_hlds__unused_args__TypeSpecInfo_44;
#line 1721 "unused_args.m"
                MR_Word transform_hlds__unused_args__TypeSpecForcePreds_46;
#line 1721 "unused_args.m"
                MR_Word transform_hlds__unused_args__Origin_49;
#line 1724 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_58_58;
#line 1733 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_59_59;
#line 1738 "unused_args.m"
                MR_String transform_hlds__unused_args__V_60_60;
#line 1738 "unused_args.m"
                MR_Integer transform_hlds__unused_args__V_38_38;
#line 1742 "unused_args.m"
                MR_Integer transform_hlds__unused_args__Position_39;
#line 1742 "unused_args.m"
                MR_Integer transform_hlds__unused_args__Length_40;
#line 1742 "unused_args.m"
                MR_Integer transform_hlds__unused_args__IdLen_41;
#line 1742 "unused_args.m"
                MR_String transform_hlds__unused_args__Id_42;
#line 1742 "unused_args.m"
                MR_String transform_hlds__unused_args__V_61_61;
#line 1742 "unused_args.m"
                MR_Integer transform_hlds__unused_args__V_62_62;
#line 1742 "unused_args.m"
                MR_Integer transform_hlds__unused_args__V_63_63;
#line 1746 "unused_args.m"
                MR_Integer transform_hlds__unused_args__V_43_43;
#line 1749 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_45_45;
#line 1749 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_47_47;
#line 1749 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_48_48;
#line 1750 "unused_args.m"
                MR_Word transform_hlds__unused_args__TypeCtorInfo_74_74;
#line 1755 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_64_64;
#line 1755 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_51_51;
#line 1755 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_52_52;
#line 1755 "unused_args.m"
                MR_Integer transform_hlds__unused_args__V_50_50;
#line 1761 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_65_65;
#line 1762 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_66_66;

#line 1719 "unused_args.m"
                {
#line 1719 "unused_args.m"
                  hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__unused_args__ModuleInfo_1, transform_hlds__unused_args__PredId_32, &transform_hlds__unused_args__PredInfo_34);
                }
#line 1721 "unused_args.m"
                {
#line 1721 "unused_args.m"
                  transform_hlds__unused_args__Name_35 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__unused_args__PredInfo_34);
                }
#line 1722 "unused_args.m"
                {
#line 1722 "unused_args.m"
                  transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__unused_args__PredInfo_34);
                }
#line 1722 "unused_args.m"
                transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1721 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 1721 "unused_args.m"
                  {
#line 1723 "unused_args.m"
                    {
#line 1723 "unused_args.m"
                      hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__unused_args__PredInfo_34, &transform_hlds__unused_args__PredStatus_36);
                    }
#line 1724 "unused_args.m"
                    transform_hlds__unused_args__V_58_58 = (MR_Word) transform_hlds__unused_args__PredStatus_36;
#line 1724 "unused_args.m"
                    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1724 "unused_args.m"
                    transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1721 "unused_args.m"
                    if (transform_hlds__unused_args__succeeded)
#line 1721 "unused_args.m"
                      {
#line 1727 "unused_args.m"
                        {
#line 1727 "unused_args.m"
                          transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(transform_hlds__unused_args__PredInfo_34);
                        }
#line 1727 "unused_args.m"
                        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1721 "unused_args.m"
                        if (transform_hlds__unused_args__succeeded)
#line 1721 "unused_args.m"
                          {
#line 1728 "unused_args.m"
                            {
#line 1728 "unused_args.m"
                              transform_hlds__unused_args__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__unused_args__PredInfo_34);
                            }
#line 1728 "unused_args.m"
                            transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1721 "unused_args.m"
                            if (transform_hlds__unused_args__succeeded)
#line 1721 "unused_args.m"
                              {
#line 1732 "unused_args.m"
                                {
#line 1732 "unused_args.m"
                                  hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__unused_args__PredInfo_34, &transform_hlds__unused_args__Markers_37);
                                }
#line 1733 "unused_args.m"
                                transform_hlds__unused_args__V_59_59 = (MR_Integer) 0;
#line 1733 "unused_args.m"
                                {
#line 1733 "unused_args.m"
                                  transform_hlds__unused_args__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__unused_args__Markers_37, transform_hlds__unused_args__V_59_59);
                                }
#line 1733 "unused_args.m"
                                transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1721 "unused_args.m"
                                if (transform_hlds__unused_args__succeeded)
#line 1721 "unused_args.m"
                                  {
#line 1738 "unused_args.m"
                                    transform_hlds__unused_args__V_60_60 = (MR_String) "__LambdaGoal__";
#line 1738 "unused_args.m"
                                    {
#line 1738 "unused_args.m"
                                      transform_hlds__unused_args__succeeded = mercury__string__sub_string_search_3_p_0(transform_hlds__unused_args__Name_35, transform_hlds__unused_args__V_60_60, &transform_hlds__unused_args__V_38_38);
                                    }
#line 1738 "unused_args.m"
                                    transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1721 "unused_args.m"
                                    if (transform_hlds__unused_args__succeeded)
#line 1721 "unused_args.m"
                                      {
#line 1742 "unused_args.m"
                                        transform_hlds__unused_args__V_61_61 = (MR_String) "__ho";
#line 1742 "unused_args.m"
                                        {
#line 1742 "unused_args.m"
                                          transform_hlds__unused_args__succeeded = mercury__string__sub_string_search_3_p_0(transform_hlds__unused_args__Name_35, transform_hlds__unused_args__V_61_61, &transform_hlds__unused_args__Position_39);
                                        }
#line 1742 "unused_args.m"
                                        if (transform_hlds__unused_args__succeeded)
#line 1742 "unused_args.m"
                                          {
#line 1743 "unused_args.m"
                                            {
#line 1743 "unused_args.m"
                                              mercury__string__length_2_p_0(transform_hlds__unused_args__Name_35, &transform_hlds__unused_args__Length_40);
                                            }
#line 1744 "unused_args.m"
                                            transform_hlds__unused_args__V_62_62 = (transform_hlds__unused_args__Length_40 - transform_hlds__unused_args__Position_39);
#line 1744 "unused_args.m"
                                            transform_hlds__unused_args__V_63_63 = (MR_Integer) 4;
#line 1744 "unused_args.m"
                                            transform_hlds__unused_args__IdLen_41 = (transform_hlds__unused_args__V_62_62 - transform_hlds__unused_args__V_63_63);
#line 1745 "unused_args.m"
                                            {
#line 1745 "unused_args.m"
                                              mercury__string__right_3_p_0(transform_hlds__unused_args__Name_35, transform_hlds__unused_args__IdLen_41, &transform_hlds__unused_args__Id_42);
                                            }
#line 1746 "unused_args.m"
                                            {
#line 1746 "unused_args.m"
                                              transform_hlds__unused_args__succeeded = mercury__string__to_int_2_p_0(transform_hlds__unused_args__Id_42, &transform_hlds__unused_args__V_43_43);
                                            }
#line 1742 "unused_args.m"
                                          }
#line 1741 "unused_args.m"
                                        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1721 "unused_args.m"
                                        if (transform_hlds__unused_args__succeeded)
#line 1721 "unused_args.m"
                                          {
#line 1748 "unused_args.m"
                                            {
#line 1748 "unused_args.m"
                                              hlds__hlds_module__module_info_get_type_spec_info_2_p_0(transform_hlds__unused_args__ModuleInfo_1, &transform_hlds__unused_args__TypeSpecInfo_44);
                                            }
#line 1749 "unused_args.m"
                                            transform_hlds__unused_args__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__TypeSpecInfo_44, (MR_Integer) 0)));
#line 1749 "unused_args.m"
                                            transform_hlds__unused_args__TypeSpecForcePreds_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__TypeSpecInfo_44, (MR_Integer) 1)));
#line 1749 "unused_args.m"
                                            transform_hlds__unused_args__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__TypeSpecInfo_44, (MR_Integer) 2)));
#line 1749 "unused_args.m"
                                            transform_hlds__unused_args__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__TypeSpecInfo_44, (MR_Integer) 3)));
#line 9104 "transform_hlds.unused_args.c"
                                            transform_hlds__unused_args__TypeCtorInfo_74_74 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1750 "unused_args.m"
                                            {
#line 1750 "unused_args.m"
                                              transform_hlds__unused_args__succeeded = mercury__set__member_2_p_0(transform_hlds__unused_args__TypeCtorInfo_74_74, ((MR_Box) (transform_hlds__unused_args__PredId_32)), transform_hlds__unused_args__TypeSpecForcePreds_46);
                                            }
#line 1750 "unused_args.m"
                                            transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1721 "unused_args.m"
                                            if (transform_hlds__unused_args__succeeded)
#line 1721 "unused_args.m"
                                              {
#line 1753 "unused_args.m"
                                                {
#line 1753 "unused_args.m"
                                                  hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__unused_args__PredInfo_34, &transform_hlds__unused_args__Origin_49);
                                                }
#line 1755 "unused_args.m"
                                                transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__Origin_49)) == (MR_mktag((MR_Integer) 2)));
#line 1755 "unused_args.m"
                                                if (transform_hlds__unused_args__succeeded)
#line 1755 "unused_args.m"
                                                  {
#line 1755 "unused_args.m"
                                                    transform_hlds__unused_args__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Origin_49, (MR_Integer) 0)));
#line 1755 "unused_args.m"
                                                    transform_hlds__unused_args__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Origin_49, (MR_Integer) 1)));
#line 1755 "unused_args.m"
                                                    transform_hlds__unused_args__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Origin_49, (MR_Integer) 2)));
#line 1755 "unused_args.m"
                                                    transform_hlds__unused_args__succeeded = ((((MR_tag((MR_Word) transform_hlds__unused_args__V_64_64)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__V_64_64, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1755 "unused_args.m"
                                                    if (transform_hlds__unused_args__succeeded)
#line 1755 "unused_args.m"
                                                      transform_hlds__unused_args__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__V_64_64, (MR_Integer) 1)));
#line 1755 "unused_args.m"
                                                  }
#line 1754 "unused_args.m"
                                                transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1721 "unused_args.m"
                                                if (transform_hlds__unused_args__succeeded)
#line 1721 "unused_args.m"
                                                  {
#line 1761 "unused_args.m"
                                                    transform_hlds__unused_args__V_65_65 = (MR_Integer) 10;
#line 1761 "unused_args.m"
                                                    {
#line 1761 "unused_args.m"
                                                      transform_hlds__unused_args__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__unused_args__Markers_37, transform_hlds__unused_args__V_65_65);
                                                    }
#line 1761 "unused_args.m"
                                                    transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1721 "unused_args.m"
                                                    if (transform_hlds__unused_args__succeeded)
#line 1721 "unused_args.m"
                                                      {
#line 1762 "unused_args.m"
                                                        transform_hlds__unused_args__V_66_66 = (MR_Integer) 11;
#line 1762 "unused_args.m"
                                                        {
#line 1762 "unused_args.m"
                                                          transform_hlds__unused_args__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__unused_args__Markers_37, transform_hlds__unused_args__V_66_66);
                                                        }
#line 1762 "unused_args.m"
                                                        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1721 "unused_args.m"
                                                      }
#line 1721 "unused_args.m"
                                                  }
#line 1721 "unused_args.m"
                                              }
#line 1721 "unused_args.m"
                                          }
#line 1721 "unused_args.m"
                                      }
#line 1721 "unused_args.m"
                                  }
#line 1721 "unused_args.m"
                              }
#line 1721 "unused_args.m"
                          }
#line 1721 "unused_args.m"
                      }
#line 1721 "unused_args.m"
                  }
#line 1778 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 1770 "unused_args.m"
                  {
#line 1766 "unused_args.m"
#line 1766 "unused_args.m"
                    switch (transform_hlds__unused_args__DoPragma_4) {
#line 1766 "unused_args.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1766 "unused_args.m"
                      case (MR_Integer) 0:
#line 1765 "unused_args.m"
                        transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_67_67 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0_9;
#line 1766 "unused_args.m"
                        break;
#line 1766 "unused_args.m"
                      case (MR_Integer) 1:
#line 1912 "unused_args.m"
                        {
#line 1899 "unused_args.m"
                          MR_Integer transform_hlds__unused_args__V_81_81;
#line 1899 "unused_args.m"
                          MR_Word transform_hlds__unused_args__V_82_82;

#line 1895 "unused_args.m"
                          {
#line 1895 "unused_args.m"
                            transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(transform_hlds__unused_args__PredInfo_34);
                          }
#line 1896 "unused_args.m"
                          if (!(transform_hlds__unused_args__succeeded))
#line 1896 "unused_args.m"
                            {
#line 1896 "unused_args.m"
                              {
#line 1896 "unused_args.m"
                                transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_opt_exported_1_p_0(transform_hlds__unused_args__PredInfo_34);
                              }
#line 1896 "unused_args.m"
                              if (!(transform_hlds__unused_args__succeeded))
#line 1897 "unused_args.m"
                                {
#line 1897 "unused_args.m"
                                  transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_exported_to_submodules_1_p_0(transform_hlds__unused_args__PredInfo_34);
                                }
#line 1896 "unused_args.m"
                            }
#line 1898 "unused_args.m"
                          if (transform_hlds__unused_args__succeeded)
#line 1898 "unused_args.m"
                            {
#line 1899 "unused_args.m"
                              transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__UnusedArgs_31)) == (MR_mktag((MR_Integer) 1)));
#line 1899 "unused_args.m"
                              if (transform_hlds__unused_args__succeeded)
#line 1899 "unused_args.m"
                                {
#line 1899 "unused_args.m"
                                  transform_hlds__unused_args__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__UnusedArgs_31, (MR_Integer) 0)));
#line 1899 "unused_args.m"
                                  transform_hlds__unused_args__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__UnusedArgs_31, (MR_Integer) 1)));
#line 1899 "unused_args.m"
                                }
#line 1898 "unused_args.m"
                            }
#line 1912 "unused_args.m"
                          if (transform_hlds__unused_args__succeeded)
#line 1901 "unused_args.m"
                            {
#line 1901 "unused_args.m"
                              MR_Word transform_hlds__unused_args__ModuleName_83;
#line 1901 "unused_args.m"
                              MR_String transform_hlds__unused_args__PredName_84;
#line 1901 "unused_args.m"
                              MR_Integer transform_hlds__unused_args__PredArity_85;
#line 1901 "unused_args.m"
                              MR_Word transform_hlds__unused_args__PredOrFunc_86;
#line 1901 "unused_args.m"
                              MR_Integer transform_hlds__unused_args__ModeNum_87;
#line 1901 "unused_args.m"
                              MR_Word transform_hlds__unused_args__PredSymName_88;
#line 1901 "unused_args.m"
                              MR_Word transform_hlds__unused_args__PredNameArityPFMn_89;
#line 1901 "unused_args.m"
                              MR_Word transform_hlds__unused_args__UnusedArgInfo_90;

#line 1901 "unused_args.m"
                              {
#line 1901 "unused_args.m"
                                transform_hlds__unused_args__ModuleName_83 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__unused_args__PredInfo_34);
                              }
#line 1902 "unused_args.m"
                              {
#line 1902 "unused_args.m"
                                transform_hlds__unused_args__PredName_84 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__unused_args__PredInfo_34);
                              }
#line 1903 "unused_args.m"
                              {
#line 1903 "unused_args.m"
                                transform_hlds__unused_args__PredArity_85 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__unused_args__PredInfo_34);
                              }
#line 1904 "unused_args.m"
                              {
#line 1904 "unused_args.m"
                                transform_hlds__unused_args__PredOrFunc_86 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__unused_args__PredInfo_34);
                              }
#line 1905 "unused_args.m"
                              {
#line 1905 "unused_args.m"
                                hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__unused_args__ProcId_33, &transform_hlds__unused_args__ModeNum_87);
                              }
#line 1906 "unused_args.m"
                              {
#line 1906 "unused_args.m"
                                transform_hlds__unused_args__PredSymName_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1906 "unused_args.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__PredSymName_88, 0) = ((MR_Box) (transform_hlds__unused_args__ModuleName_83));
#line 1906 "unused_args.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__PredSymName_88, 1) = ((MR_Box) (transform_hlds__unused_args__PredName_84));
#line 1906 "unused_args.m"
                              }
#line 1907 "unused_args.m"
                              {
#line 1907 "unused_args.m"
                                transform_hlds__unused_args__PredNameArityPFMn_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1907 "unused_args.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredNameArityPFMn_89, 0) = ((MR_Box) (transform_hlds__unused_args__PredSymName_88));
#line 1907 "unused_args.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredNameArityPFMn_89, 1) = ((MR_Box) (transform_hlds__unused_args__PredArity_85));
#line 1907 "unused_args.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredNameArityPFMn_89, 2) = ((MR_Box) (transform_hlds__unused_args__PredOrFunc_86));
#line 1907 "unused_args.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredNameArityPFMn_89, 3) = ((MR_Box) (transform_hlds__unused_args__ModeNum_87));
#line 1907 "unused_args.m"
                              }
#line 1909 "unused_args.m"
                              {
#line 1909 "unused_args.m"
                                transform_hlds__unused_args__UnusedArgInfo_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1909 "unused_args.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__unused_args__UnusedArgInfo_90, 0) = ((MR_Box) (transform_hlds__unused_args__PredNameArityPFMn_89));
#line 1909 "unused_args.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__unused_args__UnusedArgInfo_90, 1) = ((MR_Box) (transform_hlds__unused_args__UnusedArgs_31));
#line 1909 "unused_args.m"
                              }
#line 1911 "unused_args.m"
                              {
#line 1911 "unused_args.m"
                                mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0, ((MR_Box) (transform_hlds__unused_args__UnusedArgInfo_90)), transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0_9, &transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_67_67);
                              }
#line 1901 "unused_args.m"
                            }
#line 1912 "unused_args.m"
                          else
#line 1912 "unused_args.m"
                            transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_67_67 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0_9;
#line 1912 "unused_args.m"
                        }
#line 1766 "unused_args.m"
                        break;
#line 1766 "unused_args.m"
                    }
#line 1773 "unused_args.m"
#line 1773 "unused_args.m"
                    switch (transform_hlds__unused_args__DoWarn_3) {
#line 1773 "unused_args.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1773 "unused_args.m"
                      case (MR_Integer) 0:
#line 1772 "unused_args.m"
                        {
#line 1772 "unused_args.m"
                          transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_68_68 = transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_6;
#line 1772 "unused_args.m"
                          transform_hlds__unused_args__STATE_VARIABLE_Specs_69_69 = transform_hlds__unused_args__STATE_VARIABLE_Specs_0_7;
#line 1772 "unused_args.m"
                        }
#line 1773 "unused_args.m"
                        break;
#line 1773 "unused_args.m"
                      case (MR_Integer) 1:
#line 1775 "unused_args.m"
                        {
#line 1775 "unused_args.m"
                          transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_103_97_116_104_101_114_95_119_97_114_110_105_110_103_95_95_91_49_93_95_48_9_p_0(transform_hlds__unused_args__PredInfo_34, transform_hlds__unused_args__PredId_32, transform_hlds__unused_args__ProcId_33, transform_hlds__unused_args__UnusedArgs_31, transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_6, &transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_68_68, transform_hlds__unused_args__STATE_VARIABLE_Specs_0_7, &transform_hlds__unused_args__STATE_VARIABLE_Specs_69_69);
                        }
#line 1773 "unused_args.m"
                        break;
#line 1773 "unused_args.m"
                    }
#line 1770 "unused_args.m"
                  }
#line 1778 "unused_args.m"
                else
#line 1779 "unused_args.m"
                  {
#line 1779 "unused_args.m"
                    transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_67_67 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0_9;
#line 1779 "unused_args.m"
                    transform_hlds__unused_args__STATE_VARIABLE_Specs_69_69 = transform_hlds__unused_args__STATE_VARIABLE_Specs_0_7;
#line 1779 "unused_args.m"
                    transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_68_68 = transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_6;
#line 1779 "unused_args.m"
                  }
#line 1718 "unused_args.m"
              }
#line 1781 "unused_args.m"
            else
#line 1782 "unused_args.m"
              {
#line 1782 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_67_67 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0_9;
#line 1782 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_Specs_69_69 = transform_hlds__unused_args__STATE_VARIABLE_Specs_0_7;
#line 1782 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_68_68 = transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_6;
#line 1782 "unused_args.m"
              }
#line 1784 "unused_args.m"
            /* direct tailcall eliminated */
#line 1784 "unused_args.m"
            {
#line 1784 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__5__tmp_copy_5 = transform_hlds__unused_args__PredProcIds_27;
#line 1784 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0__tmp_copy_6 = transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_68_68;
#line 1784 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_Specs_0__tmp_copy_7 = transform_hlds__unused_args__STATE_VARIABLE_Specs_69_69;
#line 1784 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0__tmp_copy_9 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_67_67;

#line 1784 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0_9 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfos_0__tmp_copy_9;
#line 1784 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Specs_0_7 = transform_hlds__unused_args__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 1784 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_6 = transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0__tmp_copy_6;
#line 1784 "unused_args.m"
              transform_hlds__unused_args__HeadVar__5_5 = transform_hlds__unused_args__HeadVar__5__tmp_copy_5;
#line 1784 "unused_args.m"
            }
#line 1784 "unused_args.m"
            continue;
#line 1716 "unused_args.m"
          }
#line 1712 "unused_args.m"
      }
#line 1712 "unused_args.m"
      break;
#line 1712 "unused_args.m"
    }
#line 1706 "unused_args.m"
}

#line 1653 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__check_deconstruct_args_6_p_0(
#line 1653 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_7,
#line 1653 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedVars_8,
#line 1653 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_9,
#line 1653 "unused_args.m"
  MR_Word transform_hlds__unused_args__Modes_10,
#line 1653 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_SomeUsed_0_25,
#line 1653 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_12)
#line 1653 "unused_args.m"
{
#line 1659 "unused_args.m"
  while (MR_TRUE)
#line 1659 "unused_args.m"
    {
#line 1659 "unused_args.m"
      /* tailcall optimized into a loop */
#line 1659 "unused_args.m"
      {
#line 1659 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 1659 "unused_args.m"
        if ((transform_hlds__unused_args__Args_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1659 "unused_args.m"
          if ((transform_hlds__unused_args__Modes_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1659 "unused_args.m"
            {
#line 1661 "unused_args.m"
              transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__STATE_VARIABLE_SomeUsed_0_25 == (MR_Integer) 1);
#line 1659 "unused_args.m"
              if (transform_hlds__unused_args__succeeded)
#line 1659 "unused_args.m"
                {
#line 1662 "unused_args.m"
                  *transform_hlds__unused_args__Changed_12 = (MR_Integer) 0;
#line 1662 "unused_args.m"
                  transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1659 "unused_args.m"
                }
#line 1659 "unused_args.m"
            }
#line 1659 "unused_args.m"
          else
#line 1664 "unused_args.m"
            {
#line 1666 "unused_args.m"
              {
#line 1666 "unused_args.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.check_deconstruct_args\'/6", (MR_String) "mismatched lists");
              }
#line 1664 "unused_args.m"
              transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1664 "unused_args.m"
            }
#line 1659 "unused_args.m"
        else
#line 1659 "unused_args.m"
          {
#line 1659 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Args_9, (MR_Integer) 1)));
#line 1659 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Args_9, (MR_Integer) 0)));

#line 1659 "unused_args.m"
            if ((transform_hlds__unused_args__Modes_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1668 "unused_args.m"
              {
#line 1670 "unused_args.m"
                {
#line 1670 "unused_args.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.check_deconstruct_args\'/6", (MR_String) "mismatched lists");
                }
#line 1668 "unused_args.m"
                transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1668 "unused_args.m"
              }
#line 1659 "unused_args.m"
            else
#line 1672 "unused_args.m"
              {
#line 1672 "unused_args.m"
                MR_Word transform_hlds__unused_args__ArgMode_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Modes_10, (MR_Integer) 0)));
#line 1672 "unused_args.m"
                MR_Word transform_hlds__unused_args__ArgModes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Modes_10, (MR_Integer) 1)));
#line 1675 "unused_args.m"
                MR_Word transform_hlds__unused_args__TypeInfo_44_44;
#line 1675 "unused_args.m"
                MR_Word transform_hlds__unused_args__Inst1_21;
#line 1675 "unused_args.m"
                MR_Word transform_hlds__unused_args__Inst2_22;
#line 1675 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__ArgMode_19, (MR_Integer) 0)));
#line 1675 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_27_27;
#line 1675 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__ArgMode_19, (MR_Integer) 1)));

#line 1675 "unused_args.m"
                transform_hlds__unused_args__Inst1_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_26_26, (MR_Integer) 0)));
#line 1675 "unused_args.m"
                transform_hlds__unused_args__Inst2_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_26_26, (MR_Integer) 1)));
#line 1676 "unused_args.m"
                {
#line 1676 "unused_args.m"
                  transform_hlds__unused_args__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1676 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_27_27, 0) = ((MR_Box) (transform_hlds__unused_args__Inst1_21));
#line 1676 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_27_27, 1) = ((MR_Box) (transform_hlds__unused_args__Inst2_22));
#line 1676 "unused_args.m"
                }
#line 1676 "unused_args.m"
                {
#line 1676 "unused_args.m"
                  transform_hlds__unused_args__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(transform_hlds__unused_args__ModuleInfo_7, transform_hlds__unused_args__V_27_27);
                }
#line 1675 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 1675 "unused_args.m"
                  {
#line 9571 "transform_hlds.unused_args.c"
                    transform_hlds__unused_args__TypeInfo_44_44 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 1677 "unused_args.m"
                    {
#line 1677 "unused_args.m"
                      transform_hlds__unused_args__succeeded = mercury__list__member_2_p_0(transform_hlds__unused_args__TypeInfo_44_44, ((MR_Box) (transform_hlds__unused_args__V_46_46)), transform_hlds__unused_args__UnusedVars_8);
                    }
#line 1675 "unused_args.m"
                  }
#line 1682 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 1680 "unused_args.m"
                  {
#line 1679 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_24_24;

#line 1679 "unused_args.m"
                    {
#line 1679 "unused_args.m"
                      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__check_deconstruct_args_6_p_0(transform_hlds__unused_args__ModuleInfo_7, transform_hlds__unused_args__UnusedVars_8, transform_hlds__unused_args__V_45_45, transform_hlds__unused_args__ArgModes_20, transform_hlds__unused_args__STATE_VARIABLE_SomeUsed_0_25, &transform_hlds__unused_args__V_24_24);
                    }
#line 1680 "unused_args.m"
                    if (transform_hlds__unused_args__succeeded)
#line 1680 "unused_args.m"
                      {
#line 1681 "unused_args.m"
                        *transform_hlds__unused_args__Changed_12 = (MR_Integer) 1;
#line 1681 "unused_args.m"
                        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1680 "unused_args.m"
                      }
#line 1680 "unused_args.m"
                  }
#line 1682 "unused_args.m"
                else
#line 1683 "unused_args.m"
                  {
#line 1684 "unused_args.m"
                    /* direct tailcall eliminated */
#line 1684 "unused_args.m"
                    {
#line 1684 "unused_args.m"
                      MR_Word transform_hlds__unused_args__Args__tmp_copy_9 = transform_hlds__unused_args__V_45_45;
#line 1684 "unused_args.m"
                      MR_Word transform_hlds__unused_args__Modes__tmp_copy_10 = transform_hlds__unused_args__ArgModes_20;

#line 1684 "unused_args.m"
                      transform_hlds__unused_args__STATE_VARIABLE_SomeUsed_0_25 = (MR_Integer) 1;
#line 1684 "unused_args.m"
                      transform_hlds__unused_args__Modes_10 = transform_hlds__unused_args__Modes__tmp_copy_10;
#line 1684 "unused_args.m"
                      transform_hlds__unused_args__Args_9 = transform_hlds__unused_args__Args__tmp_copy_9;
#line 1684 "unused_args.m"
                    }
#line 1684 "unused_args.m"
                    continue;
#line 1683 "unused_args.m"
                  }
#line 1672 "unused_args.m"
              }
#line 1659 "unused_args.m"
          }
#line 1659 "unused_args.m"
        return transform_hlds__unused_args__succeeded;
#line 1659 "unused_args.m"
      }
#line 1659 "unused_args.m"
      break;
#line 1659 "unused_args.m"
    }
#line 1653 "unused_args.m"
}

#line 1610 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__need_unify_4_p_0(
#line 1610 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 1610 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedVars_6,
#line 1610 "unused_args.m"
  MR_Word transform_hlds__unused_args__Unify_7,
#line 1610 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_8)
#line 1610 "unused_args.m"
{
#line 1615 "unused_args.m"
  {
#line 1615 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1615 "unused_args.m"
#line 1615 "unused_args.m"
    switch (MR_tag((MR_Word) transform_hlds__unused_args__Unify_7)) {
#line 1615 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1615 "unused_args.m"
      case (MR_Integer) 0:
#line 1626 "unused_args.m"
        {
#line 1626 "unused_args.m"
          MR_Word transform_hlds__unused_args__LVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_7, (MR_Integer) 0)));
#line 1626 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_7, (MR_Integer) 1)));
#line 1626 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_7, (MR_Integer) 2)));
#line 1626 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_7, (MR_Integer) 3)));
#line 1626 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_7, (MR_Integer) 4)));
#line 1626 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_7, (MR_Integer) 5)));
#line 1626 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_7, (MR_Integer) 6)));

#line 1627 "unused_args.m"
          {
#line 1627 "unused_args.m"
            transform_hlds__unused_args__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], ((MR_Box) (transform_hlds__unused_args__LVar_13)), transform_hlds__unused_args__UnusedVars_6);
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
#line 1615 "unused_args.m"
        break;
#line 1615 "unused_args.m"
      case (MR_Integer) 1:
#line 1630 "unused_args.m"
        {
#line 1630 "unused_args.m"
          MR_Word transform_hlds__unused_args__ArgVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_7, (MR_Integer) 2)));
#line 1630 "unused_args.m"
          MR_Word transform_hlds__unused_args__ArgModes_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_7, (MR_Integer) 3)));
#line 1630 "unused_args.m"
          MR_Word transform_hlds__unused_args__CanFail_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_7, (MR_Integer) 4)));
#line 1630 "unused_args.m"
          MR_Word transform_hlds__unused_args__LVar_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_7, (MR_Integer) 0)));
#line 1630 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_7, (MR_Integer) 1)));
#line 1630 "unused_args.m"
          MR_Word transform_hlds__unused_args___CanCGC_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_7, (MR_Integer) 5)));

#line 1631 "unused_args.m"
          {
#line 1631 "unused_args.m"
            transform_hlds__unused_args__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], ((MR_Box) (transform_hlds__unused_args__LVar_32)), transform_hlds__unused_args__UnusedVars_6);
          }
#line 1631 "unused_args.m"
          transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1630 "unused_args.m"
          if (transform_hlds__unused_args__succeeded)
#line 1638 "unused_args.m"
#line 1638 "unused_args.m"
            switch (transform_hlds__unused_args__CanFail_23) {
#line 1638 "unused_args.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1638 "unused_args.m"
              case (MR_Integer) 0:
#line 1640 "unused_args.m"
                {
#line 1640 "unused_args.m"
                  *transform_hlds__unused_args__Changed_8 = (MR_Integer) 0;
#line 1640 "unused_args.m"
                  transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1640 "unused_args.m"
                }
#line 1638 "unused_args.m"
                break;
#line 1638 "unused_args.m"
              case (MR_Integer) 1:
#line 1635 "unused_args.m"
                {
#line 1636 "unused_args.m"
                  {
#line 1636 "unused_args.m"
                    transform_hlds__unused_args__succeeded = transform_hlds__unused_args__check_deconstruct_args_6_p_0(transform_hlds__unused_args__ModuleInfo_5, transform_hlds__unused_args__UnusedVars_6, transform_hlds__unused_args__ArgVars_21, transform_hlds__unused_args__ArgModes_22, (MR_Integer) 0, transform_hlds__unused_args__Changed_8);
                  }
#line 1635 "unused_args.m"
                }
#line 1638 "unused_args.m"
                break;
#line 1638 "unused_args.m"
            }
#line 1630 "unused_args.m"
        }
#line 1615 "unused_args.m"
        break;
#line 1615 "unused_args.m"
      case (MR_Integer) 2:
#line 1621 "unused_args.m"
        {
#line 1621 "unused_args.m"
          MR_Word transform_hlds__unused_args__Target_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Unify_7, (MR_Integer) 0)));
#line 1621 "unused_args.m"
          MR_Word transform_hlds__unused_args___Source_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Unify_7, (MR_Integer) 1)));

#line 1622 "unused_args.m"
          {
#line 1622 "unused_args.m"
            transform_hlds__unused_args__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], ((MR_Box) (transform_hlds__unused_args__Target_11)), transform_hlds__unused_args__UnusedVars_6);
          }
#line 1622 "unused_args.m"
          transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1621 "unused_args.m"
          if (transform_hlds__unused_args__succeeded)
#line 1621 "unused_args.m"
            {
#line 1623 "unused_args.m"
              *transform_hlds__unused_args__Changed_8 = (MR_Integer) 0;
#line 1623 "unused_args.m"
              transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1621 "unused_args.m"
            }
#line 1621 "unused_args.m"
        }
#line 1615 "unused_args.m"
        break;
#line 1615 "unused_args.m"
      case (MR_Integer) 3:
#line 1615 "unused_args.m"
#line 1615 "unused_args.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Unify_7, (MR_Integer) 0)))) {
#line 1615 "unused_args.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1615 "unused_args.m"
          case (MR_Integer) 0:
#line 1617 "unused_args.m"
            {
#line 1617 "unused_args.m"
              *transform_hlds__unused_args__Changed_8 = (MR_Integer) 0;
#line 1617 "unused_args.m"
              transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1617 "unused_args.m"
            }
#line 1615 "unused_args.m"
            break;
#line 1615 "unused_args.m"
          case (MR_Integer) 1:
#line 1644 "unused_args.m"
            {
#line 1645 "unused_args.m"
              {
#line 1645 "unused_args.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.need_unify\'/4", (MR_String) "complicated unify");
              }
#line 1644 "unused_args.m"
              transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1644 "unused_args.m"
            }
#line 1615 "unused_args.m"
            break;
#line 1615 "unused_args.m"
        }
#line 1615 "unused_args.m"
        break;
#line 1615 "unused_args.m"
    }
#line 1615 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 1615 "unused_args.m"
  }
#line 1610 "unused_args.m"
}

#line 1592 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_cases_6_p_0(
#line 1592 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1592 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2,
#line 1592 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_3,
#line 1592 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_4,
#line 1592 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5,
#line 1592 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_6)
#line 1592 "unused_args.m"
{
#line 1595 "unused_args.m"
  {
#line 1595 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1595 "unused_args.m"
    if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1595 "unused_args.m"
      {
#line 1595 "unused_args.m"
        *transform_hlds__unused_args__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1595 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Changed_6 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5;
#line 1595 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Info_4 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_3;
#line 1595 "unused_args.m"
      }
#line 1595 "unused_args.m"
    else
#line 1596 "unused_args.m"
      {
#line 1596 "unused_args.m"
        MR_Word transform_hlds__unused_args__Case0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 1596 "unused_args.m"
        MR_Word transform_hlds__unused_args__Cases0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 1596 "unused_args.m"
        MR_Word transform_hlds__unused_args__Case_15;
#line 1596 "unused_args.m"
        MR_Word transform_hlds__unused_args__Cases_16;
#line 1596 "unused_args.m"
        MR_Word transform_hlds__unused_args__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Case0_13, (MR_Integer) 0)));
#line 1596 "unused_args.m"
        MR_Word transform_hlds__unused_args__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Case0_13, (MR_Integer) 1)));
#line 1596 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Case0_13, (MR_Integer) 2)));
#line 1596 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal_22;
#line 1596 "unused_args.m"
        MR_Word transform_hlds__unused_args__LocalChanged_23;
#line 1596 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_28_28;
#line 1596 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_29_29;
#line 1596 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal1_38;
#line 1596 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalExpr1_39;
#line 1596 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalInfo1_40;
#line 1596 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalInfo_42;

#line 1406 "unused_args.m"
        {
#line 1406 "unused_args.m"
          transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(transform_hlds__unused_args__Goal0_21, &transform_hlds__unused_args__Goal1_38, transform_hlds__unused_args__STATE_VARIABLE_Info_0_3, &transform_hlds__unused_args__STATE_VARIABLE_Info_28_28, &transform_hlds__unused_args__LocalChanged_23);
        }
#line 1407 "unused_args.m"
        transform_hlds__unused_args__GoalExpr1_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_38, (MR_Integer) 0)));
#line 1407 "unused_args.m"
        transform_hlds__unused_args__GoalInfo1_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_38, (MR_Integer) 1)));
#line 9924 "transform_hlds.unused_args.c"
#line 9925 "transform_hlds.unused_args.c"
        switch (transform_hlds__unused_args__LocalChanged_23) {
#line 9927 "transform_hlds.unused_args.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 9929 "transform_hlds.unused_args.c"
          case (MR_Integer) 0:
#line 9931 "transform_hlds.unused_args.c"
            {
#line 1414 "unused_args.m"
              transform_hlds__unused_args__GoalInfo_42 = transform_hlds__unused_args__GoalInfo1_40;
#line 1604 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_29_29 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5;
#line 9937 "transform_hlds.unused_args.c"
            }
#line 9939 "transform_hlds.unused_args.c"
            break;
#line 9941 "transform_hlds.unused_args.c"
          case (MR_Integer) 1:
#line 9943 "transform_hlds.unused_args.c"
            {
#line 9945 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__UnusedVars_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_28_28, (MR_Integer) 2)));
#line 9947 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__InstMap0_52;
#line 9949 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__InstMap_53;
#line 1410 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_28_28, (MR_Integer) 0)));
#line 1410 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_28_28, (MR_Integer) 1)));
#line 1410 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_28_28, (MR_Integer) 3)));
#line 1410 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_28_28, (MR_Integer) 4)));

#line 1696 "unused_args.m"
              {
#line 1696 "unused_args.m"
                transform_hlds__unused_args__InstMap0_52 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__unused_args__GoalInfo1_40);
              }
#line 1697 "unused_args.m"
              {
#line 1697 "unused_args.m"
                hlds__instmap__instmap_delta_delete_vars_3_p_0(transform_hlds__unused_args__UnusedVars_41, transform_hlds__unused_args__InstMap0_52, &transform_hlds__unused_args__InstMap_53);
              }
#line 1698 "unused_args.m"
              {
#line 1698 "unused_args.m"
                hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__unused_args__InstMap_53, transform_hlds__unused_args__GoalInfo1_40, &transform_hlds__unused_args__GoalInfo_42);
              }
#line 1602 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_29_29 = (MR_Integer) 1;
#line 9977 "transform_hlds.unused_args.c"
            }
#line 9979 "transform_hlds.unused_args.c"
            break;
#line 9981 "transform_hlds.unused_args.c"
        }
#line 1416 "unused_args.m"
        {
#line 1416 "unused_args.m"
          transform_hlds__unused_args__Goal_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1416 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_22, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr1_39));
#line 1416 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_22, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo_42));
#line 1416 "unused_args.m"
        }
#line 1599 "unused_args.m"
        {
#line 1599 "unused_args.m"
          transform_hlds__unused_args__Case_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1599 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Case_15, 0) = ((MR_Box) (transform_hlds__unused_args__MainConsId_19));
#line 1599 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Case_15, 1) = ((MR_Box) (transform_hlds__unused_args__OtherConsIds_20));
#line 1599 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Case_15, 2) = ((MR_Box) (transform_hlds__unused_args__Goal_22));
#line 1599 "unused_args.m"
        }
#line 1606 "unused_args.m"
        {
#line 1606 "unused_args.m"
          transform_hlds__unused_args__unused_args_fixup_cases_6_p_0(transform_hlds__unused_args__Cases0_14, &transform_hlds__unused_args__Cases_16, transform_hlds__unused_args__STATE_VARIABLE_Info_28_28, transform_hlds__unused_args__STATE_VARIABLE_Info_4, transform_hlds__unused_args__STATE_VARIABLE_Changed_29_29, transform_hlds__unused_args__STATE_VARIABLE_Changed_6);
        }
#line 1596 "unused_args.m"
        {
#line 1596 "unused_args.m"
          MR_Word base;
#line 1596 "unused_args.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1596 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__2_2 = base;
#line 1596 "unused_args.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__Case_15));
#line 1596 "unused_args.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__Cases_16));
#line 1596 "unused_args.m"
        }
#line 1596 "unused_args.m"
      }
#line 1595 "unused_args.m"
  }
#line 1592 "unused_args.m"
}

#line 1577 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_disjuncts_6_p_0(
#line 1577 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1577 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2,
#line 1577 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_3,
#line 1577 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_4,
#line 1577 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5,
#line 1577 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_6)
#line 1577 "unused_args.m"
{
#line 1580 "unused_args.m"
  {
#line 1580 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1580 "unused_args.m"
    if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1580 "unused_args.m"
      {
#line 1580 "unused_args.m"
        *transform_hlds__unused_args__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1580 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Changed_6 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5;
#line 1580 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Info_4 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_3;
#line 1580 "unused_args.m"
      }
#line 1580 "unused_args.m"
    else
#line 1582 "unused_args.m"
      {
#line 1582 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 1582 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 1582 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal_15;
#line 1582 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goals_16;
#line 1582 "unused_args.m"
        MR_Word transform_hlds__unused_args__LocalChanged_19;
#line 1582 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_24_24;
#line 1582 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_25_25;
#line 1582 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal1_34;
#line 1582 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalExpr1_35;
#line 1582 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalInfo1_36;
#line 1582 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalInfo_38;

#line 1406 "unused_args.m"
        {
#line 1406 "unused_args.m"
          transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(transform_hlds__unused_args__Goal0_13, &transform_hlds__unused_args__Goal1_34, transform_hlds__unused_args__STATE_VARIABLE_Info_0_3, &transform_hlds__unused_args__STATE_VARIABLE_Info_24_24, &transform_hlds__unused_args__LocalChanged_19);
        }
#line 1407 "unused_args.m"
        transform_hlds__unused_args__GoalExpr1_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_34, (MR_Integer) 0)));
#line 1407 "unused_args.m"
        transform_hlds__unused_args__GoalInfo1_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_34, (MR_Integer) 1)));
#line 10101 "transform_hlds.unused_args.c"
#line 10102 "transform_hlds.unused_args.c"
        switch (transform_hlds__unused_args__LocalChanged_19) {
#line 10104 "transform_hlds.unused_args.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 10106 "transform_hlds.unused_args.c"
          case (MR_Integer) 0:
#line 10108 "transform_hlds.unused_args.c"
            {
#line 1414 "unused_args.m"
              transform_hlds__unused_args__GoalInfo_38 = transform_hlds__unused_args__GoalInfo1_36;
#line 1588 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_25_25 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5;
#line 10114 "transform_hlds.unused_args.c"
            }
#line 10116 "transform_hlds.unused_args.c"
            break;
#line 10118 "transform_hlds.unused_args.c"
          case (MR_Integer) 1:
#line 10120 "transform_hlds.unused_args.c"
            {
#line 10122 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__UnusedVars_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_24_24, (MR_Integer) 2)));
#line 10124 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__InstMap0_48;
#line 10126 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__InstMap_49;
#line 1410 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_24_24, (MR_Integer) 0)));
#line 1410 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_24_24, (MR_Integer) 1)));
#line 1410 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_24_24, (MR_Integer) 3)));
#line 1410 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_24_24, (MR_Integer) 4)));

#line 1696 "unused_args.m"
              {
#line 1696 "unused_args.m"
                transform_hlds__unused_args__InstMap0_48 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__unused_args__GoalInfo1_36);
              }
#line 1697 "unused_args.m"
              {
#line 1697 "unused_args.m"
                hlds__instmap__instmap_delta_delete_vars_3_p_0(transform_hlds__unused_args__UnusedVars_37, transform_hlds__unused_args__InstMap0_48, &transform_hlds__unused_args__InstMap_49);
              }
#line 1698 "unused_args.m"
              {
#line 1698 "unused_args.m"
                hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__unused_args__InstMap_49, transform_hlds__unused_args__GoalInfo1_36, &transform_hlds__unused_args__GoalInfo_38);
              }
#line 1586 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_25_25 = (MR_Integer) 1;
#line 10154 "transform_hlds.unused_args.c"
            }
#line 10156 "transform_hlds.unused_args.c"
            break;
#line 10158 "transform_hlds.unused_args.c"
        }
#line 1416 "unused_args.m"
        {
#line 1416 "unused_args.m"
          transform_hlds__unused_args__Goal_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1416 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_15, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr1_35));
#line 1416 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_15, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo_38));
#line 1416 "unused_args.m"
        }
#line 1590 "unused_args.m"
        {
#line 1590 "unused_args.m"
          transform_hlds__unused_args__unused_args_fixup_disjuncts_6_p_0(transform_hlds__unused_args__Goals0_14, &transform_hlds__unused_args__Goals_16, transform_hlds__unused_args__STATE_VARIABLE_Info_24_24, transform_hlds__unused_args__STATE_VARIABLE_Info_4, transform_hlds__unused_args__STATE_VARIABLE_Changed_25_25, transform_hlds__unused_args__STATE_VARIABLE_Changed_6);
        }
#line 1581 "unused_args.m"
        {
#line 1581 "unused_args.m"
          MR_Word base;
#line 1581 "unused_args.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1581 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__2_2 = base;
#line 1581 "unused_args.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__Goal_15));
#line 1581 "unused_args.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__Goals_16));
#line 1581 "unused_args.m"
        }
#line 1582 "unused_args.m"
      }
#line 1580 "unused_args.m"
  }
#line 1577 "unused_args.m"
}

#line 1554 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_conjuncts_6_p_0(
#line 1554 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1554 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2,
#line 1554 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_3,
#line 1554 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_4,
#line 1554 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5,
#line 1554 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_6)
#line 1554 "unused_args.m"
{
#line 1557 "unused_args.m"
  {
#line 1557 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1557 "unused_args.m"
    if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1557 "unused_args.m"
      {
#line 1557 "unused_args.m"
        *transform_hlds__unused_args__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1557 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Changed_6 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5;
#line 1557 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Info_4 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_3;
#line 1557 "unused_args.m"
      }
#line 1557 "unused_args.m"
    else
#line 1558 "unused_args.m"
      {
#line 1558 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 1558 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 1558 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal_18;
#line 1558 "unused_args.m"
        MR_Word transform_hlds__unused_args__LocalChanged_19;
#line 1558 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goals1_21;
#line 1558 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_26_26;
#line 1558 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_27_27;
#line 1558 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal1_40;
#line 1558 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalExpr1_41;
#line 1558 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalInfo1_42;
#line 1558 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalInfo_44;
#line 1567 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_28_28;
#line 1567 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_32_32;
#line 1567 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_20_20;

#line 1406 "unused_args.m"
        {
#line 1406 "unused_args.m"
          transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(transform_hlds__unused_args__Goal0_13, &transform_hlds__unused_args__Goal1_40, transform_hlds__unused_args__STATE_VARIABLE_Info_0_3, &transform_hlds__unused_args__STATE_VARIABLE_Info_26_26, &transform_hlds__unused_args__LocalChanged_19);
        }
#line 1407 "unused_args.m"
        transform_hlds__unused_args__GoalExpr1_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_40, (MR_Integer) 0)));
#line 1407 "unused_args.m"
        transform_hlds__unused_args__GoalInfo1_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_40, (MR_Integer) 1)));
#line 10272 "transform_hlds.unused_args.c"
#line 10273 "transform_hlds.unused_args.c"
        switch (transform_hlds__unused_args__LocalChanged_19) {
#line 10275 "transform_hlds.unused_args.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 10277 "transform_hlds.unused_args.c"
          case (MR_Integer) 0:
#line 10279 "transform_hlds.unused_args.c"
            {
#line 1414 "unused_args.m"
              transform_hlds__unused_args__GoalInfo_44 = transform_hlds__unused_args__GoalInfo1_42;
#line 1564 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_27_27 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5;
#line 10285 "transform_hlds.unused_args.c"
            }
#line 10287 "transform_hlds.unused_args.c"
            break;
#line 10289 "transform_hlds.unused_args.c"
          case (MR_Integer) 1:
#line 10291 "transform_hlds.unused_args.c"
            {
#line 10293 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__UnusedVars_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_26_26, (MR_Integer) 2)));
#line 10295 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__InstMap0_54;
#line 10297 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__InstMap_55;
#line 1410 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_26_26, (MR_Integer) 0)));
#line 1410 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_26_26, (MR_Integer) 1)));
#line 1410 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_26_26, (MR_Integer) 3)));
#line 1410 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_26_26, (MR_Integer) 4)));

#line 1696 "unused_args.m"
              {
#line 1696 "unused_args.m"
                transform_hlds__unused_args__InstMap0_54 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__unused_args__GoalInfo1_42);
              }
#line 1697 "unused_args.m"
              {
#line 1697 "unused_args.m"
                hlds__instmap__instmap_delta_delete_vars_3_p_0(transform_hlds__unused_args__UnusedVars_43, transform_hlds__unused_args__InstMap0_54, &transform_hlds__unused_args__InstMap_55);
              }
#line 1698 "unused_args.m"
              {
#line 1698 "unused_args.m"
                hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__unused_args__InstMap_55, transform_hlds__unused_args__GoalInfo1_42, &transform_hlds__unused_args__GoalInfo_44);
              }
#line 1562 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_27_27 = (MR_Integer) 1;
#line 10325 "transform_hlds.unused_args.c"
            }
#line 10327 "transform_hlds.unused_args.c"
            break;
#line 10329 "transform_hlds.unused_args.c"
        }
#line 1416 "unused_args.m"
        {
#line 1416 "unused_args.m"
          transform_hlds__unused_args__Goal_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1416 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_18, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr1_41));
#line 1416 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_18, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo_44));
#line 1416 "unused_args.m"
        }
#line 1572 "unused_args.m"
        {
#line 1572 "unused_args.m"
          transform_hlds__unused_args__unused_args_fixup_conjuncts_6_p_0(transform_hlds__unused_args__Goals0_14, &transform_hlds__unused_args__Goals1_21, transform_hlds__unused_args__STATE_VARIABLE_Info_26_26, transform_hlds__unused_args__STATE_VARIABLE_Info_4, transform_hlds__unused_args__STATE_VARIABLE_Changed_27_27, transform_hlds__unused_args__STATE_VARIABLE_Changed_6);
        }
#line 1567 "unused_args.m"
        transform_hlds__unused_args__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_18, (MR_Integer) 0)));
#line 1567 "unused_args.m"
        transform_hlds__unused_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_18, (MR_Integer) 1)));
#line 1567 "unused_args.m"
        {
#line 1567 "unused_args.m"
          transform_hlds__unused_args__V_32_32 = hlds__make_goal__true_goal_expr_0_f_0();
        }
#line 1567 "unused_args.m"
        {
#line 1567 "unused_args.m"
          transform_hlds__unused_args__succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0(transform_hlds__unused_args__V_28_28, transform_hlds__unused_args__V_32_32);
        }
#line 1569 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1568 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__2_2 = transform_hlds__unused_args__Goals1_21;
#line 1569 "unused_args.m"
        else
#line 1570 "unused_args.m"
          {
#line 1570 "unused_args.m"
            MR_Word base;
#line 1570 "unused_args.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1570 "unused_args.m"
            *transform_hlds__unused_args__HeadVar__2_2 = base;
#line 1570 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__Goal_18));
#line 1570 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__Goals1_21));
#line 1570 "unused_args.m"
          }
#line 1558 "unused_args.m"
      }
#line 1557 "unused_args.m"
  }
#line 1554 "unused_args.m"
}

#line 1522 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__rename_apart_unused_foreign_arg_8_p_0(
#line 1522 "unused_args.m"
  MR_Word transform_hlds__unused_args__Arg0_9,
#line 1522 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Arg_10,
#line 1522 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Subst_0_26,
#line 1522 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Subst_27,
#line 1522 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_28,
#line 1522 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_29,
#line 1522 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_30,
#line 1522 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_31)
#line 1522 "unused_args.m"
{
#line 1526 "unused_args.m"
  {
#line 1526 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1526 "unused_args.m"
    MR_Word transform_hlds__unused_args__OldVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Arg0_9, (MR_Integer) 0)));
#line 1526 "unused_args.m"
    MR_Word transform_hlds__unused_args__MaybeName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Arg0_9, (MR_Integer) 1)));
#line 1526 "unused_args.m"
    MR_Word transform_hlds__unused_args__OrigType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Arg0_9, (MR_Integer) 2)));
#line 1526 "unused_args.m"
    MR_Word transform_hlds__unused_args__BoxPolicy_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Arg0_9, (MR_Integer) 3)));

#line 1531 "unused_args.m"
    if ((transform_hlds__unused_args__MaybeName_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1532 "unused_args.m"
      {
#line 1532 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_57_57;
#line 1532 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarSet0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
#line 1532 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarTypes0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
#line 1532 "unused_args.m"
        MR_Word transform_hlds__unused_args__NewVar_22;
#line 1532 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarSet_23;
#line 1532 "unused_args.m"
        MR_Word transform_hlds__unused_args__Type_24;
#line 1532 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarTypes_25;
#line 1532 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_44_44;
#line 1532 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_45_45;
#line 1532 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_46_46;
#line 1533 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
#line 1533 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
#line 1533 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
#line 1537 "unused_args.m"
        MR_String transform_hlds__unused_args__Name_21;
#line 1542 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_47_47;
#line 1542 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_48_48;

#line 1535 "unused_args.m"
        {
#line 1535 "unused_args.m"
          transform_hlds__unused_args__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__unused_args__VarSet0_19, transform_hlds__unused_args__OldVar_14, &transform_hlds__unused_args__Name_21);
        }
#line 1537 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1536 "unused_args.m"
          {
#line 1536 "unused_args.m"
            {
#line 1536 "unused_args.m"
              mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__unused_args__Name_21, &transform_hlds__unused_args__NewVar_22, transform_hlds__unused_args__VarSet0_19, &transform_hlds__unused_args__VarSet_23);
            }
#line 1536 "unused_args.m"
          }
#line 1537 "unused_args.m"
        else
#line 1538 "unused_args.m"
          {
#line 1538 "unused_args.m"
            {
#line 1538 "unused_args.m"
              mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &transform_hlds__unused_args__NewVar_22, transform_hlds__unused_args__VarSet0_19, &transform_hlds__unused_args__VarSet_23);
            }
#line 1538 "unused_args.m"
          }
#line 1540 "unused_args.m"
        {
#line 1540 "unused_args.m"
          hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__unused_args__VarTypes0_20, transform_hlds__unused_args__OldVar_14, &transform_hlds__unused_args__Type_24);
        }
#line 1541 "unused_args.m"
        {
#line 1541 "unused_args.m"
          hlds__vartypes__add_var_type_4_p_0(transform_hlds__unused_args__NewVar_22, transform_hlds__unused_args__Type_24, transform_hlds__unused_args__VarTypes0_20, &transform_hlds__unused_args__VarTypes_25);
        }
#line 1542 "unused_args.m"
        transform_hlds__unused_args__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
#line 1542 "unused_args.m"
        transform_hlds__unused_args__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
#line 1542 "unused_args.m"
        transform_hlds__unused_args__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
#line 1542 "unused_args.m"
        transform_hlds__unused_args__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
#line 1542 "unused_args.m"
        transform_hlds__unused_args__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
#line 1543 "unused_args.m"
        {
#line 1543 "unused_args.m"
          MR_Word base;
#line 1543 "unused_args.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1543 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_Info_29 = base;
#line 1543 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__V_44_44));
#line 1543 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__V_45_45));
#line 1543 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__unused_args__V_46_46));
#line 1543 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__unused_args__VarSet_23));
#line 1543 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__unused_args__VarTypes_25));
#line 1543 "unused_args.m"
        }
#line 10525 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__TypeInfo_57_57 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 1547 "unused_args.m"
        {
#line 1547 "unused_args.m"
          mercury__map__set_4_p_0(transform_hlds__unused_args__TypeInfo_57_57, transform_hlds__unused_args__TypeInfo_57_57, ((MR_Box) (transform_hlds__unused_args__OldVar_14)), ((MR_Box) (transform_hlds__unused_args__NewVar_22)), transform_hlds__unused_args__STATE_VARIABLE_Subst_0_26, transform_hlds__unused_args__STATE_VARIABLE_Subst_27);
        }
#line 1548 "unused_args.m"
        {
#line 1548 "unused_args.m"
          MR_Word base;
#line 1548 "unused_args.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1548 "unused_args.m"
          *transform_hlds__unused_args__Arg_10 = base;
#line 1548 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__NewVar_22));
#line 1548 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__MaybeName_15));
#line 1548 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__unused_args__OrigType_16));
#line 1548 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__unused_args__BoxPolicy_17));
#line 1548 "unused_args.m"
        }
#line 1549 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Changed_31 = (MR_Integer) 1;
#line 1532 "unused_args.m"
      }
#line 1531 "unused_args.m"
    else
#line 1529 "unused_args.m"
      {
#line 1530 "unused_args.m"
        *transform_hlds__unused_args__Arg_10 = transform_hlds__unused_args__Arg0_9;
#line 1529 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Subst_27 = transform_hlds__unused_args__STATE_VARIABLE_Subst_0_26;
#line 1529 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Info_29 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_28;
#line 1529 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Changed_31 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_30;
#line 1529 "unused_args.m"
      }
#line 1526 "unused_args.m"
  }
#line 1522 "unused_args.m"
}

#line 1510 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0_2(
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
    MR_Word transform_hlds__unused_args__conv10_Arg_10;
#line 1510 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv9_STATE_VARIABLE_Subst_27;
#line 1510 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv8_STATE_VARIABLE_Info_29;
#line 1510 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv7_STATE_VARIABLE_Changed_31;

#line 1510 "unused_args.m"
    {
#line 1510 "unused_args.m"
      transform_hlds__unused_args__rename_apart_unused_foreign_arg_8_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), &transform_hlds__unused_args__conv10_Arg_10, ((MR_Word) transform_hlds__unused_args__wrapper_arg_3), &transform_hlds__unused_args__conv9_STATE_VARIABLE_Subst_27, ((MR_Word) transform_hlds__unused_args__wrapper_arg_5), &transform_hlds__unused_args__conv8_STATE_VARIABLE_Info_29, ((MR_Word) transform_hlds__unused_args__wrapper_arg_7), &transform_hlds__unused_args__conv7_STATE_VARIABLE_Changed_31);
    }
#line 1510 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv10_Arg_10));
#line 1510 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_4 = ((MR_Box) (transform_hlds__unused_args__conv9_STATE_VARIABLE_Subst_27));
#line 1510 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_6 = ((MR_Box) (transform_hlds__unused_args__conv8_STATE_VARIABLE_Info_29));
#line 1510 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_8 = ((MR_Box) (transform_hlds__unused_args__conv7_STATE_VARIABLE_Changed_31));
#line 1510 "unused_args.m"
  }
#line 1510 "unused_args.m"
}

#line 1508 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0_1(
#line 1508 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1508 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1508 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2,
#line 1508 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_3,
#line 1508 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_4,
#line 1508 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_5,
#line 1508 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_6,
#line 1508 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_7,
#line 1508 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_8)
#line 1508 "unused_args.m"
{
#line 1508 "unused_args.m"
  {
#line 1508 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1508 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv3_Arg_10;
#line 1508 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv2_STATE_VARIABLE_Subst_27;
#line 1508 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv1_STATE_VARIABLE_Info_29;
#line 1508 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_STATE_VARIABLE_Changed_31;

#line 1508 "unused_args.m"
    {
#line 1508 "unused_args.m"
      transform_hlds__unused_args__rename_apart_unused_foreign_arg_8_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), &transform_hlds__unused_args__conv3_Arg_10, ((MR_Word) transform_hlds__unused_args__wrapper_arg_3), &transform_hlds__unused_args__conv2_STATE_VARIABLE_Subst_27, ((MR_Word) transform_hlds__unused_args__wrapper_arg_5), &transform_hlds__unused_args__conv1_STATE_VARIABLE_Info_29, ((MR_Word) transform_hlds__unused_args__wrapper_arg_7), &transform_hlds__unused_args__conv0_STATE_VARIABLE_Changed_31);
    }
#line 1508 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv3_Arg_10));
#line 1508 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_4 = ((MR_Box) (transform_hlds__unused_args__conv2_STATE_VARIABLE_Subst_27));
#line 1508 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_6 = ((MR_Box) (transform_hlds__unused_args__conv1_STATE_VARIABLE_Info_29));
#line 1508 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_8 = ((MR_Box) (transform_hlds__unused_args__conv0_STATE_VARIABLE_Changed_31));
#line 1508 "unused_args.m"
  }
#line 1508 "unused_args.m"
}

#line 1418 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(
#line 1418 "unused_args.m"
  MR_Word transform_hlds__unused_args__Goal0_6,
#line 1418 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Goal_7,
#line 1418 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_76,
#line 1418 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_77,
#line 1418 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_9)
#line 1418 "unused_args.m"
{
#line 1421 "unused_args.m"
  {
#line 1421 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1421 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal0_6, (MR_Integer) 0)));
#line 1421 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal0_6, (MR_Integer) 1)));

#line 1428 "unused_args.m"
#line 1428 "unused_args.m"
    switch (MR_tag((MR_Word) transform_hlds__unused_args__GoalExpr0_10)) {
#line 1428 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1428 "unused_args.m"
      case (MR_Integer) 0:
#line 1434 "unused_args.m"
        {
#line 1434 "unused_args.m"
          MR_Word transform_hlds__unused_args__NegGoal0_16 = (MR_Word) MR_body(((MR_Word) transform_hlds__unused_args__GoalExpr0_10), (MR_Integer) 0);
#line 1434 "unused_args.m"
          MR_Word transform_hlds__unused_args__NegGoal_17;
#line 1434 "unused_args.m"
          MR_Word transform_hlds__unused_args__GoalExpr_107;

#line 1435 "unused_args.m"
          {
#line 1435 "unused_args.m"
            transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(transform_hlds__unused_args__NegGoal0_16, &transform_hlds__unused_args__NegGoal_17, transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, transform_hlds__unused_args__STATE_VARIABLE_Info_77, transform_hlds__unused_args__Changed_9);
          }
#line 1436 "unused_args.m"
          transform_hlds__unused_args__GoalExpr_107 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__unused_args__NegGoal_17);
#line 1437 "unused_args.m"
          {
#line 1437 "unused_args.m"
            MR_Word base;
#line 1437 "unused_args.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1437 "unused_args.m"
            *transform_hlds__unused_args__Goal_7 = base;
#line 1437 "unused_args.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_107));
#line 1437 "unused_args.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1437 "unused_args.m"
          }
#line 1434 "unused_args.m"
        }
#line 1428 "unused_args.m"
        break;
#line 1428 "unused_args.m"
      case (MR_Integer) 1:
#line 1486 "unused_args.m"
        {
#line 1486 "unused_args.m"
          MR_Word transform_hlds__unused_args__Unify_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 3)));
#line 1486 "unused_args.m"
          MR_Word transform_hlds__unused_args__ModuleInfo_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 0)));
#line 1486 "unused_args.m"
          MR_Word transform_hlds__unused_args__GoalExpr_116;
#line 1486 "unused_args.m"
          MR_Word transform_hlds__unused_args__UnusedVars_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 2)));
#line 1486 "unused_args.m"
          MR_Word transform_hlds__unused_args___Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 0)));
#line 1486 "unused_args.m"
          MR_Word transform_hlds__unused_args___RHS_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1486 "unused_args.m"
          MR_Word transform_hlds__unused_args___Mode_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 2)));
#line 1486 "unused_args.m"
          MR_Word transform_hlds__unused_args___Context_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 4)));
#line 1487 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 1)));
#line 1487 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 3)));
#line 1487 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 4)));
#line 1492 "unused_args.m"
          MR_Word transform_hlds__unused_args__ChangedPrime_56;

#line 1489 "unused_args.m"
          {
#line 1489 "unused_args.m"
            transform_hlds__unused_args__succeeded = transform_hlds__unused_args__need_unify_4_p_0(transform_hlds__unused_args__ModuleInfo_55, transform_hlds__unused_args__UnusedVars_117, transform_hlds__unused_args__Unify_53, &transform_hlds__unused_args__ChangedPrime_56);
          }
#line 1492 "unused_args.m"
          if (transform_hlds__unused_args__succeeded)
#line 1490 "unused_args.m"
            {
#line 1490 "unused_args.m"
              transform_hlds__unused_args__GoalExpr_116 = transform_hlds__unused_args__GoalExpr0_10;
#line 1491 "unused_args.m"
              *transform_hlds__unused_args__Changed_9 = transform_hlds__unused_args__ChangedPrime_56;
#line 1490 "unused_args.m"
            }
#line 1492 "unused_args.m"
          else
#line 1493 "unused_args.m"
            {
#line 1493 "unused_args.m"
              {
#line 1493 "unused_args.m"
                transform_hlds__unused_args__GoalExpr_116 = hlds__make_goal__true_goal_expr_0_f_0();
              }
#line 1494 "unused_args.m"
              *transform_hlds__unused_args__Changed_9 = (MR_Integer) 1;
#line 1493 "unused_args.m"
            }
#line 1496 "unused_args.m"
          {
#line 1496 "unused_args.m"
            MR_Word base;
#line 1496 "unused_args.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1496 "unused_args.m"
            *transform_hlds__unused_args__Goal_7 = base;
#line 1496 "unused_args.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_116));
#line 1496 "unused_args.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1496 "unused_args.m"
          }
#line 1486 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_Info_77 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_76;
#line 1486 "unused_args.m"
        }
#line 1428 "unused_args.m"
        break;
#line 1428 "unused_args.m"
      case (MR_Integer) 2:
#line 1472 "unused_args.m"
        {
#line 1472 "unused_args.m"
          MR_Word transform_hlds__unused_args__PredId_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 0)));
#line 1472 "unused_args.m"
          MR_Integer transform_hlds__unused_args__ProcId_38 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1472 "unused_args.m"
          MR_Word transform_hlds__unused_args__ArgVars0_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 2)));
#line 1472 "unused_args.m"
          MR_Word transform_hlds__unused_args__Builtin_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 3)));
#line 1472 "unused_args.m"
          MR_Word transform_hlds__unused_args__UnifyC_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 4)));
#line 1472 "unused_args.m"
          MR_Word transform_hlds__unused_args__ProcCallInfo_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 1)));
#line 1471 "unused_args.m"
          MR_Word transform_hlds__unused_args___Name_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 5)));
#line 1473 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 0)));
#line 1473 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 2)));
#line 1473 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 3)));
#line 1473 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 4)));
#line 1481 "unused_args.m"
          MR_Word transform_hlds__unused_args__CallInfo_44;
#line 1474 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_86_86;
#line 1474 "unused_args.m"
          MR_Box transform_hlds__unused_args__conv14_CallInfo_44;

#line 1474 "unused_args.m"
          {
#line 1474 "unused_args.m"
            transform_hlds__unused_args__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1474 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_86_86, 0) = ((MR_Box) (transform_hlds__unused_args__PredId_37));
#line 1474 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_86_86, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_38));
#line 1474 "unused_args.m"
          }
#line 1474 "unused_args.m"
          {
#line 1474 "unused_args.m"
            transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0, transform_hlds__unused_args__ProcCallInfo_43, ((MR_Box) (transform_hlds__unused_args__V_86_86)), &transform_hlds__unused_args__conv14_CallInfo_44);
          }
#line 1474 "unused_args.m"
          if (transform_hlds__unused_args__succeeded)
#line 1474 "unused_args.m"
            {
#line 1474 "unused_args.m"
              transform_hlds__unused_args__CallInfo_44 = ((MR_Word) transform_hlds__unused_args__conv14_CallInfo_44);
#line 1474 "unused_args.m"
              transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1474 "unused_args.m"
            }
#line 1481 "unused_args.m"
          if (transform_hlds__unused_args__succeeded)
#line 1475 "unused_args.m"
            {
#line 1475 "unused_args.m"
              MR_Word transform_hlds__unused_args__NewPredId_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__CallInfo_44, (MR_Integer) 0)));
#line 1475 "unused_args.m"
              MR_Integer transform_hlds__unused_args__NewProcId_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__CallInfo_44, (MR_Integer) 1)));
#line 1475 "unused_args.m"
              MR_Word transform_hlds__unused_args__NewName_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__CallInfo_44, (MR_Integer) 2)));
#line 1475 "unused_args.m"
              MR_Word transform_hlds__unused_args__UnusedArgs_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__CallInfo_44, (MR_Integer) 3)));
#line 1475 "unused_args.m"
              MR_Word transform_hlds__unused_args__ArgVars_49;
#line 1475 "unused_args.m"
              MR_Word transform_hlds__unused_args__GoalExpr_113;

#line 1476 "unused_args.m"
              *transform_hlds__unused_args__Changed_9 = (MR_Integer) 1;
#line 1477 "unused_args.m"
              {
#line 1477 "unused_args.m"
                transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_48, transform_hlds__unused_args__ArgVars0_39, &transform_hlds__unused_args__ArgVars_49);
              }
#line 1478 "unused_args.m"
              {
#line 1478 "unused_args.m"
                transform_hlds__unused_args__GoalExpr_113 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1478 "unused_args.m"
                MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_113, 0) = ((MR_Box) (transform_hlds__unused_args__NewPredId_45));
#line 1478 "unused_args.m"
                MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_113, 1) = ((MR_Box) (transform_hlds__unused_args__NewProcId_46));
#line 1478 "unused_args.m"
                MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_113, 2) = ((MR_Box) (transform_hlds__unused_args__ArgVars_49));
#line 1478 "unused_args.m"
                MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_113, 3) = ((MR_Box) (transform_hlds__unused_args__Builtin_40));
#line 1478 "unused_args.m"
                MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_113, 4) = ((MR_Box) (transform_hlds__unused_args__UnifyC_41));
#line 1478 "unused_args.m"
                MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_113, 5) = ((MR_Box) (transform_hlds__unused_args__NewName_47));
#line 1478 "unused_args.m"
              }
#line 1480 "unused_args.m"
              {
#line 1480 "unused_args.m"
                MR_Word base;
#line 1480 "unused_args.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1480 "unused_args.m"
                *transform_hlds__unused_args__Goal_7 = base;
#line 1480 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_113));
#line 1480 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1480 "unused_args.m"
              }
#line 1475 "unused_args.m"
            }
#line 1481 "unused_args.m"
          else
#line 1482 "unused_args.m"
            {
#line 1482 "unused_args.m"
              *transform_hlds__unused_args__Changed_9 = (MR_Integer) 0;
#line 1483 "unused_args.m"
              *transform_hlds__unused_args__Goal_7 = transform_hlds__unused_args__Goal0_6;
#line 1482 "unused_args.m"
            }
#line 1472 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_Info_77 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_76;
#line 1472 "unused_args.m"
        }
#line 1428 "unused_args.m"
        break;
#line 1428 "unused_args.m"
      case (MR_Integer) 3:
#line 1428 "unused_args.m"
#line 1428 "unused_args.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 0)))) {
#line 1428 "unused_args.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1428 "unused_args.m"
          case (MR_Integer) 0:
#line 1498 "unused_args.m"
            {
#line 1499 "unused_args.m"
              *transform_hlds__unused_args__Goal_7 = transform_hlds__unused_args__Goal0_6;
#line 1500 "unused_args.m"
              *transform_hlds__unused_args__Changed_9 = (MR_Integer) 0;
#line 1498 "unused_args.m"
              *transform_hlds__unused_args__STATE_VARIABLE_Info_77 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_76;
#line 1498 "unused_args.m"
            }
#line 1428 "unused_args.m"
            break;
#line 1428 "unused_args.m"
          case (MR_Integer) 1:
#line 1503 "unused_args.m"
            {
#line 1503 "unused_args.m"
              MR_Word transform_hlds__unused_args__TypeInfo_141_141 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 1503 "unused_args.m"
              MR_Word transform_hlds__unused_args__TypeCtorInfo_150_150;
#line 1503 "unused_args.m"
              MR_Word transform_hlds__unused_args__TypeInfo_151_151;
#line 1503 "unused_args.m"
              MR_Word transform_hlds__unused_args__TypeCtorInfo_152_152;
#line 1503 "unused_args.m"
              MR_Word transform_hlds__unused_args__TypeCtorInfo_153_153;
#line 1503 "unused_args.m"
              MR_Word transform_hlds__unused_args__Attributes_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1503 "unused_args.m"
              MR_Word transform_hlds__unused_args__Args0_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 4)));
#line 1503 "unused_args.m"
              MR_Word transform_hlds__unused_args__ExtraArgs0_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 5)));
#line 1503 "unused_args.m"
              MR_Word transform_hlds__unused_args__MaybeTraceRuntimeCond_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 6)));
#line 1503 "unused_args.m"
              MR_Word transform_hlds__unused_args__Impl_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 7)));
#line 1503 "unused_args.m"
              MR_Word transform_hlds__unused_args__Subst0_68;
#line 1503 "unused_args.m"
              MR_Word transform_hlds__unused_args__Args_69;
#line 1503 "unused_args.m"
              MR_Word transform_hlds__unused_args__Subst1_70;
#line 1503 "unused_args.m"
              MR_Word transform_hlds__unused_args__ArgsChanged_71;
#line 1503 "unused_args.m"
              MR_Word transform_hlds__unused_args__ExtraArgs_72;
#line 1503 "unused_args.m"
              MR_Word transform_hlds__unused_args__Subst_73;
#line 1503 "unused_args.m"
              MR_Word transform_hlds__unused_args__GoalInfo_74;
#line 1503 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_82_82;
#line 1503 "unused_args.m"
              MR_Word transform_hlds__unused_args__GoalExpr_118;
#line 1503 "unused_args.m"
              MR_Word transform_hlds__unused_args__PredId_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 2)));
#line 1503 "unused_args.m"
              MR_Integer transform_hlds__unused_args__ProcId_120 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 3)));
#line 1508 "unused_args.m"
              MR_Box transform_hlds__unused_args__conv6_Subst1_70;
#line 1508 "unused_args.m"
              MR_Box transform_hlds__unused_args__conv5_STATE_VARIABLE_Info_82_82;
#line 1508 "unused_args.m"
              MR_Box transform_hlds__unused_args__conv4_ArgsChanged_71;
#line 1510 "unused_args.m"
              MR_Box transform_hlds__unused_args__conv13_Subst_73;
#line 1510 "unused_args.m"
              MR_Box transform_hlds__unused_args__conv12_STATE_VARIABLE_Info_77;
#line 1510 "unused_args.m"
              MR_Box transform_hlds__unused_args__conv11_Changed_9;

#line 1507 "unused_args.m"
              {
#line 1507 "unused_args.m"
                mercury__map__init_1_p_0(transform_hlds__unused_args__TypeInfo_141_141, transform_hlds__unused_args__TypeInfo_141_141, &transform_hlds__unused_args__Subst0_68);
              }
#line 11040 "transform_hlds.unused_args.c"
              transform_hlds__unused_args__TypeCtorInfo_150_150 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 11042 "transform_hlds.unused_args.c"
              transform_hlds__unused_args__TypeInfo_151_151 = (MR_Word) &transform_hlds__unused_args_scalar_common_2[5];
#line 11044 "transform_hlds.unused_args.c"
              transform_hlds__unused_args__TypeCtorInfo_152_152 = (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_fixup_info_0;
#line 11046 "transform_hlds.unused_args.c"
              transform_hlds__unused_args__TypeCtorInfo_153_153 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
#line 1508 "unused_args.m"
              {
#line 1508 "unused_args.m"
                mercury__list__map_foldl3_9_p_1(transform_hlds__unused_args__TypeCtorInfo_150_150, transform_hlds__unused_args__TypeCtorInfo_150_150, transform_hlds__unused_args__TypeInfo_151_151, transform_hlds__unused_args__TypeCtorInfo_152_152, transform_hlds__unused_args__TypeCtorInfo_153_153, (MR_Word) &transform_hlds__unused_args_scalar_common_2[12], transform_hlds__unused_args__Args0_63, &transform_hlds__unused_args__Args_69, ((MR_Box) (transform_hlds__unused_args__Subst0_68)), &transform_hlds__unused_args__conv6_Subst1_70, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_Info_0_76)), &transform_hlds__unused_args__conv5_STATE_VARIABLE_Info_82_82, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__unused_args__conv4_ArgsChanged_71);
              }
#line 1508 "unused_args.m"
              transform_hlds__unused_args__Subst1_70 = ((MR_Word) transform_hlds__unused_args__conv6_Subst1_70);
#line 1508 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Info_82_82 = ((MR_Word) transform_hlds__unused_args__conv5_STATE_VARIABLE_Info_82_82);
#line 1508 "unused_args.m"
              transform_hlds__unused_args__ArgsChanged_71 = ((MR_Word) transform_hlds__unused_args__conv4_ArgsChanged_71);
#line 1510 "unused_args.m"
              {
#line 1510 "unused_args.m"
                mercury__list__map_foldl3_9_p_1(transform_hlds__unused_args__TypeCtorInfo_150_150, transform_hlds__unused_args__TypeCtorInfo_150_150, transform_hlds__unused_args__TypeInfo_151_151, transform_hlds__unused_args__TypeCtorInfo_152_152, transform_hlds__unused_args__TypeCtorInfo_153_153, (MR_Word) &transform_hlds__unused_args_scalar_common_2[13], transform_hlds__unused_args__ExtraArgs0_64, &transform_hlds__unused_args__ExtraArgs_72, ((MR_Box) (transform_hlds__unused_args__Subst1_70)), &transform_hlds__unused_args__conv13_Subst_73, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_Info_82_82)), &transform_hlds__unused_args__conv12_STATE_VARIABLE_Info_77, ((MR_Box) (transform_hlds__unused_args__ArgsChanged_71)), &transform_hlds__unused_args__conv11_Changed_9);
              }
#line 1510 "unused_args.m"
              transform_hlds__unused_args__Subst_73 = ((MR_Word) transform_hlds__unused_args__conv13_Subst_73);
#line 1510 "unused_args.m"
              *transform_hlds__unused_args__STATE_VARIABLE_Info_77 = ((MR_Word) transform_hlds__unused_args__conv12_STATE_VARIABLE_Info_77);
#line 1510 "unused_args.m"
              *transform_hlds__unused_args__Changed_9 = ((MR_Word) transform_hlds__unused_args__conv11_Changed_9);
#line 1512 "unused_args.m"
              {
#line 1512 "unused_args.m"
                transform_hlds__unused_args__GoalExpr_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 1512 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1512 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 1) = ((MR_Box) (transform_hlds__unused_args__Attributes_62));
#line 1512 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 2) = ((MR_Box) (transform_hlds__unused_args__PredId_119));
#line 1512 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 3) = ((MR_Box) (transform_hlds__unused_args__ProcId_120));
#line 1512 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 4) = ((MR_Box) (transform_hlds__unused_args__Args_69));
#line 1512 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 5) = ((MR_Box) (transform_hlds__unused_args__ExtraArgs_72));
#line 1512 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 6) = ((MR_Box) (transform_hlds__unused_args__MaybeTraceRuntimeCond_65));
#line 1512 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 7) = ((MR_Box) (transform_hlds__unused_args__Impl_66));
#line 1512 "unused_args.m"
              }
#line 1514 "unused_args.m"
              {
#line 1514 "unused_args.m"
                hlds__hlds_goal__rename_vars_in_goal_info_4_p_0((MR_Integer) 1, transform_hlds__unused_args__Subst_73, transform_hlds__unused_args__GoalInfo0_11, &transform_hlds__unused_args__GoalInfo_74);
              }
#line 1515 "unused_args.m"
              {
#line 1515 "unused_args.m"
                MR_Word base;
#line 1515 "unused_args.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1515 "unused_args.m"
                *transform_hlds__unused_args__Goal_7 = base;
#line 1515 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_118));
#line 1515 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo_74));
#line 1515 "unused_args.m"
              }
#line 1503 "unused_args.m"
            }
#line 1428 "unused_args.m"
            break;
#line 1428 "unused_args.m"
          case (MR_Integer) 2:
#line 1424 "unused_args.m"
            {
#line 1424 "unused_args.m"
              MR_Word transform_hlds__unused_args__ConjType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1424 "unused_args.m"
              MR_Word transform_hlds__unused_args__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 2)));
#line 1424 "unused_args.m"
              MR_Word transform_hlds__unused_args__Goals_14;
#line 1424 "unused_args.m"
              MR_Word transform_hlds__unused_args__GoalExpr_15;

#line 1425 "unused_args.m"
              {
#line 1425 "unused_args.m"
                transform_hlds__unused_args__unused_args_fixup_conjuncts_6_p_0(transform_hlds__unused_args__Goals0_13, &transform_hlds__unused_args__Goals_14, transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, transform_hlds__unused_args__STATE_VARIABLE_Info_77, (MR_Integer) 0, transform_hlds__unused_args__Changed_9);
              }
#line 1426 "unused_args.m"
              {
#line 1426 "unused_args.m"
                transform_hlds__unused_args__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1426 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1426 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__unused_args__ConjType_12));
#line 1426 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__unused_args__Goals_14));
#line 1426 "unused_args.m"
              }
#line 1427 "unused_args.m"
              {
#line 1427 "unused_args.m"
                MR_Word base;
#line 1427 "unused_args.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1427 "unused_args.m"
                *transform_hlds__unused_args__Goal_7 = base;
#line 1427 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_15));
#line 1427 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1427 "unused_args.m"
              }
#line 1424 "unused_args.m"
            }
#line 1428 "unused_args.m"
            break;
#line 1428 "unused_args.m"
          case (MR_Integer) 3:
#line 1429 "unused_args.m"
            {
#line 1429 "unused_args.m"
              MR_Word transform_hlds__unused_args__Goals0_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1429 "unused_args.m"
              MR_Word transform_hlds__unused_args__Goals_105;
#line 1429 "unused_args.m"
              MR_Word transform_hlds__unused_args__GoalExpr_106;

#line 1430 "unused_args.m"
              {
#line 1430 "unused_args.m"
                transform_hlds__unused_args__unused_args_fixup_disjuncts_6_p_0(transform_hlds__unused_args__Goals0_104, &transform_hlds__unused_args__Goals_105, transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, transform_hlds__unused_args__STATE_VARIABLE_Info_77, (MR_Integer) 0, transform_hlds__unused_args__Changed_9);
              }
#line 1431 "unused_args.m"
              {
#line 1431 "unused_args.m"
                transform_hlds__unused_args__GoalExpr_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1431 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1431 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_106, 1) = ((MR_Box) (transform_hlds__unused_args__Goals_105));
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
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_106));
#line 1432 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1432 "unused_args.m"
              }
#line 1429 "unused_args.m"
            }
#line 1428 "unused_args.m"
            break;
#line 1428 "unused_args.m"
          case (MR_Integer) 4:
#line 1439 "unused_args.m"
            {
#line 1439 "unused_args.m"
              MR_Word transform_hlds__unused_args__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1439 "unused_args.m"
              MR_Word transform_hlds__unused_args__CanFail_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 2)));
#line 1439 "unused_args.m"
              MR_Word transform_hlds__unused_args__Cases0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 3)));
#line 1439 "unused_args.m"
              MR_Word transform_hlds__unused_args__Cases_21;
#line 1439 "unused_args.m"
              MR_Word transform_hlds__unused_args__GoalExpr_108;

#line 1440 "unused_args.m"
              {
#line 1440 "unused_args.m"
                transform_hlds__unused_args__unused_args_fixup_cases_6_p_0(transform_hlds__unused_args__Cases0_20, &transform_hlds__unused_args__Cases_21, transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, transform_hlds__unused_args__STATE_VARIABLE_Info_77, (MR_Integer) 0, transform_hlds__unused_args__Changed_9);
              }
#line 1441 "unused_args.m"
              {
#line 1441 "unused_args.m"
                transform_hlds__unused_args__GoalExpr_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1441 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1441 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_108, 1) = ((MR_Box) (transform_hlds__unused_args__Var_18));
#line 1441 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_108, 2) = ((MR_Box) (transform_hlds__unused_args__CanFail_19));
#line 1441 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_108, 3) = ((MR_Box) (transform_hlds__unused_args__Cases_21));
#line 1441 "unused_args.m"
              }
#line 1442 "unused_args.m"
              {
#line 1442 "unused_args.m"
                MR_Word base;
#line 1442 "unused_args.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1442 "unused_args.m"
                *transform_hlds__unused_args__Goal_7 = base;
#line 1442 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_108));
#line 1442 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1442 "unused_args.m"
              }
#line 1439 "unused_args.m"
            }
#line 1428 "unused_args.m"
            break;
#line 1428 "unused_args.m"
          case (MR_Integer) 5:
#line 1452 "unused_args.m"
            {
#line 1452 "unused_args.m"
              MR_Word transform_hlds__unused_args__Reason_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1452 "unused_args.m"
              MR_Word transform_hlds__unused_args__SubGoal0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 2)));
#line 1465 "unused_args.m"
              MR_Word transform_hlds__unused_args__TermVar_34;
#line 1454 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_88_88;

#line 1454 "unused_args.m"
              transform_hlds__unused_args__succeeded = ((((MR_tag((MR_Word) transform_hlds__unused_args__Reason_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Reason_32, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1454 "unused_args.m"
              if (transform_hlds__unused_args__succeeded)
#line 1454 "unused_args.m"
                {
#line 1454 "unused_args.m"
                  transform_hlds__unused_args__TermVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Reason_32, (MR_Integer) 1)));
#line 1454 "unused_args.m"
                  transform_hlds__unused_args__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Reason_32, (MR_Integer) 2)));
#line 1454 "unused_args.m"
                  transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_88_88 == (MR_Integer) 1);
#line 1454 "unused_args.m"
                }
#line 1465 "unused_args.m"
              if (transform_hlds__unused_args__succeeded)
#line 1456 "unused_args.m"
                {
#line 1456 "unused_args.m"
                  MR_Word transform_hlds__unused_args__UnusedVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 2)));
#line 1456 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 0)));
#line 1456 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 1)));
#line 1456 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 3)));
#line 1456 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 4)));

#line 1457 "unused_args.m"
                  {
#line 1457 "unused_args.m"
                    transform_hlds__unused_args__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], ((MR_Box) (transform_hlds__unused_args__TermVar_34)), transform_hlds__unused_args__UnusedVars_35);
                  }
#line 1461 "unused_args.m"
                  if (transform_hlds__unused_args__succeeded)
#line 1458 "unused_args.m"
                    {
#line 1458 "unused_args.m"
                      {
#line 1458 "unused_args.m"
                        *transform_hlds__unused_args__Goal_7 = hlds__make_goal__true_goal_0_f_0();
                      }
#line 1460 "unused_args.m"
                      *transform_hlds__unused_args__Changed_9 = (MR_Integer) 0;
#line 1458 "unused_args.m"
                    }
#line 1461 "unused_args.m"
                  else
#line 1462 "unused_args.m"
                    {
#line 1462 "unused_args.m"
                      *transform_hlds__unused_args__Goal_7 = transform_hlds__unused_args__Goal0_6;
#line 1463 "unused_args.m"
                      *transform_hlds__unused_args__Changed_9 = (MR_Integer) 0;
#line 1462 "unused_args.m"
                    }
#line 1456 "unused_args.m"
                  *transform_hlds__unused_args__STATE_VARIABLE_Info_77 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_76;
#line 1456 "unused_args.m"
                }
#line 1465 "unused_args.m"
              else
#line 1466 "unused_args.m"
                {
#line 1466 "unused_args.m"
                  MR_Word transform_hlds__unused_args__SubGoal_36;
#line 1466 "unused_args.m"
                  MR_Word transform_hlds__unused_args__GoalExpr_110;

#line 1466 "unused_args.m"
                  {
#line 1466 "unused_args.m"
                    transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(transform_hlds__unused_args__SubGoal0_33, &transform_hlds__unused_args__SubGoal_36, transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, transform_hlds__unused_args__STATE_VARIABLE_Info_77, transform_hlds__unused_args__Changed_9);
                  }
#line 1467 "unused_args.m"
                  {
#line 1467 "unused_args.m"
                    transform_hlds__unused_args__GoalExpr_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1467 "unused_args.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1467 "unused_args.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_110, 1) = ((MR_Box) (transform_hlds__unused_args__Reason_32));
#line 1467 "unused_args.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_110, 2) = ((MR_Box) (transform_hlds__unused_args__SubGoal_36));
#line 1467 "unused_args.m"
                  }
#line 1468 "unused_args.m"
                  {
#line 1468 "unused_args.m"
                    MR_Word base;
#line 1468 "unused_args.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1468 "unused_args.m"
                    *transform_hlds__unused_args__Goal_7 = base;
#line 1468 "unused_args.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_110));
#line 1468 "unused_args.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1468 "unused_args.m"
                  }
#line 1466 "unused_args.m"
                }
#line 1452 "unused_args.m"
            }
#line 1428 "unused_args.m"
            break;
#line 1428 "unused_args.m"
          case (MR_Integer) 6:
#line 1444 "unused_args.m"
            {
#line 1444 "unused_args.m"
              MR_Word transform_hlds__unused_args__Vars_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1444 "unused_args.m"
              MR_Word transform_hlds__unused_args__Cond0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 2)));
#line 1444 "unused_args.m"
              MR_Word transform_hlds__unused_args__Then0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 3)));
#line 1444 "unused_args.m"
              MR_Word transform_hlds__unused_args__Else0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 4)));
#line 1444 "unused_args.m"
              MR_Word transform_hlds__unused_args__Cond_26;
#line 1444 "unused_args.m"
              MR_Word transform_hlds__unused_args__Changed1_27;
#line 1444 "unused_args.m"
              MR_Word transform_hlds__unused_args__Then_28;
#line 1444 "unused_args.m"
              MR_Word transform_hlds__unused_args__Changed2_29;
#line 1444 "unused_args.m"
              MR_Word transform_hlds__unused_args__Else_30;
#line 1444 "unused_args.m"
              MR_Word transform_hlds__unused_args__Changed3_31;
#line 1444 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_90_90;
#line 1444 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_91_91;
#line 1444 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_93_93;
#line 1444 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_94_94;
#line 1444 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_95_95;
#line 1444 "unused_args.m"
              MR_Word transform_hlds__unused_args__GoalExpr_109;

#line 1445 "unused_args.m"
              {
#line 1445 "unused_args.m"
                transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(transform_hlds__unused_args__Cond0_23, &transform_hlds__unused_args__Cond_26, transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, &transform_hlds__unused_args__STATE_VARIABLE_Info_90_90, &transform_hlds__unused_args__Changed1_27);
              }
#line 1446 "unused_args.m"
              {
#line 1446 "unused_args.m"
                transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(transform_hlds__unused_args__Then0_24, &transform_hlds__unused_args__Then_28, transform_hlds__unused_args__STATE_VARIABLE_Info_90_90, &transform_hlds__unused_args__STATE_VARIABLE_Info_91_91, &transform_hlds__unused_args__Changed2_29);
              }
#line 1447 "unused_args.m"
              {
#line 1447 "unused_args.m"
                transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(transform_hlds__unused_args__Else0_25, &transform_hlds__unused_args__Else_30, transform_hlds__unused_args__STATE_VARIABLE_Info_91_91, transform_hlds__unused_args__STATE_VARIABLE_Info_77, &transform_hlds__unused_args__Changed3_31);
              }
#line 1448 "unused_args.m"
              {
#line 1448 "unused_args.m"
                transform_hlds__unused_args__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1448 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_95_95, 0) = ((MR_Box) (transform_hlds__unused_args__Changed3_31));
#line 1448 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1448 "unused_args.m"
              }
#line 1448 "unused_args.m"
              {
#line 1448 "unused_args.m"
                transform_hlds__unused_args__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1448 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_94_94, 0) = ((MR_Box) (transform_hlds__unused_args__Changed2_29));
#line 1448 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_94_94, 1) = ((MR_Box) (transform_hlds__unused_args__V_95_95));
#line 1448 "unused_args.m"
              }
#line 1448 "unused_args.m"
              {
#line 1448 "unused_args.m"
                transform_hlds__unused_args__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1448 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_93_93, 0) = ((MR_Box) (transform_hlds__unused_args__Changed1_27));
#line 1448 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_93_93, 1) = ((MR_Box) (transform_hlds__unused_args__V_94_94));
#line 1448 "unused_args.m"
              }
#line 1448 "unused_args.m"
              {
#line 1448 "unused_args.m"
                mercury__bool__or_list_2_p_0(transform_hlds__unused_args__V_93_93, transform_hlds__unused_args__Changed_9);
              }
#line 1449 "unused_args.m"
              {
#line 1449 "unused_args.m"
                transform_hlds__unused_args__GoalExpr_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1449 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1449 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_109, 1) = ((MR_Box) (transform_hlds__unused_args__Vars_22));
#line 1449 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_109, 2) = ((MR_Box) (transform_hlds__unused_args__Cond_26));
#line 1449 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_109, 3) = ((MR_Box) (transform_hlds__unused_args__Then_28));
#line 1449 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_109, 4) = ((MR_Box) (transform_hlds__unused_args__Else_30));
#line 1449 "unused_args.m"
              }
#line 1450 "unused_args.m"
              {
#line 1450 "unused_args.m"
                MR_Word base;
#line 1450 "unused_args.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1450 "unused_args.m"
                *transform_hlds__unused_args__Goal_7 = base;
#line 1450 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_109));
#line 1450 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1450 "unused_args.m"
              }
#line 1444 "unused_args.m"
            }
#line 1428 "unused_args.m"
            break;
#line 1428 "unused_args.m"
          case (MR_Integer) 7:
#line 1517 "unused_args.m"
            {
#line 1519 "unused_args.m"
              {
#line 1519 "unused_args.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.unused_args_fixup_goal_expr\'/5", (MR_String) "shorthand");
#line 1519 "unused_args.m"
                return;
              }
#line 1517 "unused_args.m"
            }
#line 1428 "unused_args.m"
            break;
#line 1428 "unused_args.m"
        }
#line 1428 "unused_args.m"
        break;
#line 1428 "unused_args.m"
    }
#line 1421 "unused_args.m"
  }
#line 1418 "unused_args.m"
}

#line 1402 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(
#line 1402 "unused_args.m"
  MR_Word transform_hlds__unused_args__Goal0_6,
#line 1402 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Goal_7,
#line 1402 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_15,
#line 1402 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_16,
#line 1402 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_9)
#line 1402 "unused_args.m"
{
#line 1405 "unused_args.m"
  {
#line 1405 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1405 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal1_10;
#line 1405 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalExpr1_11;
#line 1405 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalInfo1_12;
#line 1405 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalInfo_14;

#line 1406 "unused_args.m"
    {
#line 1406 "unused_args.m"
      transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(transform_hlds__unused_args__Goal0_6, &transform_hlds__unused_args__Goal1_10, transform_hlds__unused_args__STATE_VARIABLE_Info_0_15, transform_hlds__unused_args__STATE_VARIABLE_Info_16, transform_hlds__unused_args__Changed_9);
    }
#line 1407 "unused_args.m"
    transform_hlds__unused_args__GoalExpr1_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_10, (MR_Integer) 0)));
#line 1407 "unused_args.m"
    transform_hlds__unused_args__GoalInfo1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_10, (MR_Integer) 1)));
#line 1412 "unused_args.m"
#line 1412 "unused_args.m"
    switch (*transform_hlds__unused_args__Changed_9) {
#line 1412 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1412 "unused_args.m"
      case (MR_Integer) 0:
#line 1414 "unused_args.m"
        transform_hlds__unused_args__GoalInfo_14 = transform_hlds__unused_args__GoalInfo1_12;
#line 1412 "unused_args.m"
        break;
#line 1412 "unused_args.m"
      case (MR_Integer) 1:
#line 1409 "unused_args.m"
        {
#line 1409 "unused_args.m"
          MR_Word transform_hlds__unused_args__UnusedVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__unused_args__STATE_VARIABLE_Info_16, (MR_Integer) 2)));
#line 1409 "unused_args.m"
          MR_Word transform_hlds__unused_args__InstMap0_26;
#line 1409 "unused_args.m"
          MR_Word transform_hlds__unused_args__InstMap_27;
#line 1410 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__unused_args__STATE_VARIABLE_Info_16, (MR_Integer) 0)));
#line 1410 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__unused_args__STATE_VARIABLE_Info_16, (MR_Integer) 1)));
#line 1410 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__unused_args__STATE_VARIABLE_Info_16, (MR_Integer) 3)));
#line 1410 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__unused_args__STATE_VARIABLE_Info_16, (MR_Integer) 4)));

#line 1696 "unused_args.m"
          {
#line 1696 "unused_args.m"
            transform_hlds__unused_args__InstMap0_26 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__unused_args__GoalInfo1_12);
          }
#line 1697 "unused_args.m"
          {
#line 1697 "unused_args.m"
            hlds__instmap__instmap_delta_delete_vars_3_p_0(transform_hlds__unused_args__UnusedVars_13, transform_hlds__unused_args__InstMap0_26, &transform_hlds__unused_args__InstMap_27);
          }
#line 1698 "unused_args.m"
          {
#line 1698 "unused_args.m"
            hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__unused_args__InstMap_27, transform_hlds__unused_args__GoalInfo1_12, &transform_hlds__unused_args__GoalInfo_14);
          }
#line 1409 "unused_args.m"
        }
#line 1412 "unused_args.m"
        break;
#line 1412 "unused_args.m"
    }
#line 1416 "unused_args.m"
    {
#line 1416 "unused_args.m"
      MR_Word base;
#line 1416 "unused_args.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1416 "unused_args.m"
      *transform_hlds__unused_args__Goal_7 = base;
#line 1416 "unused_args.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr1_11));
#line 1416 "unused_args.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo_14));
#line 1416 "unused_args.m"
    }
#line 1405 "unused_args.m"
  }
#line 1402 "unused_args.m"
}

#line 1328 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__do_unused_args_fixup_proc_5_p_0(
#line 1328 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_6,
#line 1328 "unused_args.m"
  MR_Word transform_hlds__unused_args__OldPredProcId_7,
#line 1328 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcCallInfo_8,
#line 1328 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo0_9,
#line 1328 "unused_args.m"
  MR_Word * transform_hlds__unused_args__ModuleInfo_10)
#line 1328 "unused_args.m"
{
#line 1332 "unused_args.m"
  {
#line 1332 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1332 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredId_12;
#line 1332 "unused_args.m"
    MR_Integer transform_hlds__unused_args__ProcId_13;
#line 1332 "unused_args.m"
    MR_Word transform_hlds__unused_args__UnusedArgs_15;
#line 1332 "unused_args.m"
    MR_Word transform_hlds__unused_args__UsageInfos_16;
#line 1332 "unused_args.m"
    MR_Word transform_hlds__unused_args__UnusedVars_17;
#line 1332 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredInfo0_18;
#line 1332 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes0_20;
#line 1332 "unused_args.m"
    MR_Word transform_hlds__unused_args__Preds0_21;
#line 1332 "unused_args.m"
    MR_Word transform_hlds__unused_args__Procs0_22;
#line 1332 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVars0_23;
#line 1332 "unused_args.m"
    MR_Word transform_hlds__unused_args__ArgModes0_24;
#line 1332 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarSet0_25;
#line 1332 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVars_27;
#line 1332 "unused_args.m"
    MR_Word transform_hlds__unused_args__ArgModes_28;
#line 1332 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcInfo_29;
#line 1332 "unused_args.m"
    MR_Word transform_hlds__unused_args__FixupInfo0_31;
#line 1332 "unused_args.m"
    MR_Word transform_hlds__unused_args__FixupInfo_32;
#line 1332 "unused_args.m"
    MR_Word transform_hlds__unused_args__Changed_33;
#line 1332 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarSet1_37;
#line 1332 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes1_38;
#line 1332 "unused_args.m"
    MR_Word transform_hlds__unused_args__Procs_45;
#line 1332 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredInfo_46;
#line 1332 "unused_args.m"
    MR_Word transform_hlds__unused_args__Preds_47;
#line 1332 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_50_50;
#line 1332 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_Goal_51_51;
#line 1332 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_52_52;
#line 1332 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_53_53;
#line 1332 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_Goal_54_54;
#line 1336 "unused_args.m"
    MR_Word transform_hlds__unused_args__OldProcCallInfo_11;
#line 1334 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv0_OldProcCallInfo_11;
#line 1340 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv1_UsageInfos_16;
#line 1367 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_34_34;
#line 1367 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_35_35;
#line 1367 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_36_36;

#line 1334 "unused_args.m"
    {
#line 1334 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0, transform_hlds__unused_args__ProcCallInfo_8, ((MR_Box) (transform_hlds__unused_args__OldPredProcId_7)), &transform_hlds__unused_args__conv0_OldProcCallInfo_11);
    }
#line 1334 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1334 "unused_args.m"
      {
#line 1334 "unused_args.m"
        transform_hlds__unused_args__OldProcCallInfo_11 = ((MR_Word) transform_hlds__unused_args__conv0_OldProcCallInfo_11);
#line 1334 "unused_args.m"
        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1334 "unused_args.m"
      }
#line 1336 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1335 "unused_args.m"
      {
#line 1335 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_14_14;

#line 1335 "unused_args.m"
        transform_hlds__unused_args__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OldProcCallInfo_11, (MR_Integer) 0)));
#line 1335 "unused_args.m"
        transform_hlds__unused_args__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OldProcCallInfo_11, (MR_Integer) 1)));
#line 1335 "unused_args.m"
        transform_hlds__unused_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OldProcCallInfo_11, (MR_Integer) 2)));
#line 1335 "unused_args.m"
        transform_hlds__unused_args__UnusedArgs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OldProcCallInfo_11, (MR_Integer) 3)));
#line 1335 "unused_args.m"
      }
#line 1336 "unused_args.m"
    else
#line 1337 "unused_args.m"
      {
#line 1337 "unused_args.m"
        transform_hlds__unused_args__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OldPredProcId_7, (MR_Integer) 0)));
#line 1337 "unused_args.m"
        transform_hlds__unused_args__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OldPredProcId_7, (MR_Integer) 1)));
#line 1338 "unused_args.m"
        transform_hlds__unused_args__UnusedArgs_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1337 "unused_args.m"
      }
#line 1340 "unused_args.m"
    {
#line 1340 "unused_args.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], transform_hlds__unused_args__VarUsage_6, ((MR_Box) (transform_hlds__unused_args__OldPredProcId_7)), &transform_hlds__unused_args__conv1_UsageInfos_16);
    }
#line 1340 "unused_args.m"
    transform_hlds__unused_args__UsageInfos_16 = ((MR_Word) transform_hlds__unused_args__conv1_UsageInfos_16);
#line 1341 "unused_args.m"
    {
#line 1341 "unused_args.m"
      mercury__map__keys_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__UsageInfos_16, &transform_hlds__unused_args__UnusedVars_17);
    }
#line 1342 "unused_args.m"
    {
#line 1342 "unused_args.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__unused_args__ModuleInfo0_9, transform_hlds__unused_args__PredId_12, transform_hlds__unused_args__ProcId_13, &transform_hlds__unused_args__PredInfo0_18, &transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_50_50);
    }
#line 1344 "unused_args.m"
    {
#line 1344 "unused_args.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_50_50, &transform_hlds__unused_args__VarTypes0_20);
    }
#line 1345 "unused_args.m"
    {
#line 1345 "unused_args.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__unused_args__ModuleInfo0_9, &transform_hlds__unused_args__Preds0_21);
    }
#line 1346 "unused_args.m"
    {
#line 1346 "unused_args.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__unused_args__PredInfo0_18, &transform_hlds__unused_args__Procs0_22);
    }
#line 1348 "unused_args.m"
    {
#line 1348 "unused_args.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_50_50, &transform_hlds__unused_args__HeadVars0_23);
    }
#line 1349 "unused_args.m"
    {
#line 1349 "unused_args.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_50_50, &transform_hlds__unused_args__ArgModes0_24);
    }
#line 1350 "unused_args.m"
    {
#line 1350 "unused_args.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_50_50, &transform_hlds__unused_args__VarSet0_25);
    }
#line 1351 "unused_args.m"
    {
#line 1351 "unused_args.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_50_50, &transform_hlds__unused_args__STATE_VARIABLE_Goal_51_51);
    }
#line 1352 "unused_args.m"
    {
#line 1352 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_15, transform_hlds__unused_args__HeadVars0_23, &transform_hlds__unused_args__HeadVars_27);
    }
#line 1353 "unused_args.m"
    {
#line 1353 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_15, transform_hlds__unused_args__ArgModes0_24, &transform_hlds__unused_args__ArgModes_28);
    }
#line 1359 "unused_args.m"
    {
#line 1359 "unused_args.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__unused_args__HeadVars_27, transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_50_50, &transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_52_52);
    }
#line 1360 "unused_args.m"
    {
#line 1360 "unused_args.m"
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__unused_args__ArgModes_28, transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_52_52, &transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_53_53);
    }
#line 1364 "unused_args.m"
    {
#line 1364 "unused_args.m"
      transform_hlds__unused_args__FixupInfo0_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1364 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo0_31, 0) = ((MR_Box) (transform_hlds__unused_args__ModuleInfo0_9));
#line 1364 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo0_31, 1) = ((MR_Box) (transform_hlds__unused_args__ProcCallInfo_8));
#line 1364 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo0_31, 2) = ((MR_Box) (transform_hlds__unused_args__UnusedVars_17));
#line 1364 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo0_31, 3) = ((MR_Box) (transform_hlds__unused_args__VarSet0_25));
#line 1364 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo0_31, 4) = ((MR_Box) (transform_hlds__unused_args__VarTypes0_20));
#line 1364 "unused_args.m"
    }
#line 1366 "unused_args.m"
    {
#line 1366 "unused_args.m"
      transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(transform_hlds__unused_args__STATE_VARIABLE_Goal_51_51, &transform_hlds__unused_args__STATE_VARIABLE_Goal_54_54, transform_hlds__unused_args__FixupInfo0_31, &transform_hlds__unused_args__FixupInfo_32, &transform_hlds__unused_args__Changed_33);
    }
#line 1367 "unused_args.m"
    transform_hlds__unused_args__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo_32, (MR_Integer) 0)));
#line 1367 "unused_args.m"
    transform_hlds__unused_args__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo_32, (MR_Integer) 1)));
#line 1367 "unused_args.m"
    transform_hlds__unused_args__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo_32, (MR_Integer) 2)));
#line 1367 "unused_args.m"
    transform_hlds__unused_args__VarSet1_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo_32, (MR_Integer) 3)));
#line 1367 "unused_args.m"
    transform_hlds__unused_args__VarTypes1_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo_32, (MR_Integer) 4)));
#line 1380 "unused_args.m"
#line 1380 "unused_args.m"
    switch (transform_hlds__unused_args__Changed_33) {
#line 1380 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1380 "unused_args.m"
      case (MR_Integer) 0:
#line 1381 "unused_args.m"
        transform_hlds__unused_args__ProcInfo_29 = transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_53_53;
#line 1380 "unused_args.m"
        break;
#line 1380 "unused_args.m"
      case (MR_Integer) 1:
#line 1369 "unused_args.m"
        {
#line 1369 "unused_args.m"
          MR_Word transform_hlds__unused_args__NonLocals_39;
#line 1369 "unused_args.m"
          MR_Word transform_hlds__unused_args__RttiVarMaps0_40;
#line 1369 "unused_args.m"
          MR_Word transform_hlds__unused_args__VarSet_42;
#line 1369 "unused_args.m"
          MR_Word transform_hlds__unused_args__VarTypes_43;
#line 1369 "unused_args.m"
          MR_Word transform_hlds__unused_args__RttiVarMaps_44;
#line 1369 "unused_args.m"
          MR_Word transform_hlds__unused_args__STATE_VARIABLE_Goal_56_56;
#line 1369 "unused_args.m"
          MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_57_57;
#line 1369 "unused_args.m"
          MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_58_58;
#line 1369 "unused_args.m"
          MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_59_59;
#line 1373 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_41_41;

#line 1371 "unused_args.m"
          {
#line 1371 "unused_args.m"
            transform_hlds__unused_args__NonLocals_39 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__unused_args__HeadVars_27);
          }
#line 1372 "unused_args.m"
          {
#line 1372 "unused_args.m"
            hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_53_53, &transform_hlds__unused_args__RttiVarMaps0_40);
          }
#line 1373 "unused_args.m"
          {
#line 1373 "unused_args.m"
            hlds__quantification__implicitly_quantify_goal_general_11_p_0((MR_Integer) 1, transform_hlds__unused_args__NonLocals_39, &transform_hlds__unused_args__V_41_41, transform_hlds__unused_args__STATE_VARIABLE_Goal_54_54, &transform_hlds__unused_args__STATE_VARIABLE_Goal_56_56, transform_hlds__unused_args__VarSet1_37, &transform_hlds__unused_args__VarSet_42, transform_hlds__unused_args__VarTypes1_38, &transform_hlds__unused_args__VarTypes_43, transform_hlds__unused_args__RttiVarMaps0_40, &transform_hlds__unused_args__RttiVarMaps_44);
          }
#line 1376 "unused_args.m"
          {
#line 1376 "unused_args.m"
            hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__unused_args__STATE_VARIABLE_Goal_56_56, transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_53_53, &transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_57_57);
          }
#line 1377 "unused_args.m"
          {
#line 1377 "unused_args.m"
            hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__unused_args__VarSet_42, transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_57_57, &transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_58_58);
          }
#line 1378 "unused_args.m"
          {
#line 1378 "unused_args.m"
            hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__unused_args__VarTypes_43, transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_58_58, &transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_59_59);
          }
#line 1379 "unused_args.m"
          {
#line 1379 "unused_args.m"
            hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__unused_args__RttiVarMaps_44, transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_59_59, &transform_hlds__unused_args__ProcInfo_29);
          }
#line 1369 "unused_args.m"
        }
#line 1380 "unused_args.m"
        break;
#line 1380 "unused_args.m"
    }
#line 1386 "unused_args.m"
    {
#line 1386 "unused_args.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__unused_args__ProcId_13, ((MR_Box) (transform_hlds__unused_args__ProcInfo_29)), transform_hlds__unused_args__Procs0_22, &transform_hlds__unused_args__Procs_45);
    }
#line 1387 "unused_args.m"
    {
#line 1387 "unused_args.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__unused_args__Procs_45, transform_hlds__unused_args__PredInfo0_18, &transform_hlds__unused_args__PredInfo_46);
    }
#line 1388 "unused_args.m"
    {
#line 1388 "unused_args.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ((MR_Box) (transform_hlds__unused_args__PredId_12)), ((MR_Box) (transform_hlds__unused_args__PredInfo_46)), transform_hlds__unused_args__Preds0_21, &transform_hlds__unused_args__Preds_47);
    }
#line 1389 "unused_args.m"
    {
#line 1389 "unused_args.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__unused_args__Preds_47, transform_hlds__unused_args__ModuleInfo0_9, transform_hlds__unused_args__ModuleInfo_10);
    }
#line 1332 "unused_args.m"
  }
#line 1328 "unused_args.m"
}

#line 1303 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_proc_6_p_0(
#line 1303 "unused_args.m"
  MR_Word transform_hlds__unused_args__VeryVerbose_7,
#line 1303 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_8,
#line 1303 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcCallInfo_9,
#line 1303 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcId_10,
#line 1303 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_18,
#line 1303 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_19)
#line 1303 "unused_args.m"
{
#line 1307 "unused_args.m"
  {
#line 1307 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1323 "unused_args.m"
#line 1323 "unused_args.m"
    switch (transform_hlds__unused_args__VeryVerbose_7) {
#line 1323 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1323 "unused_args.m"
      case (MR_Integer) 0:
#line 1324 "unused_args.m"
        {
#line 1324 "unused_args.m"
        }
#line 1323 "unused_args.m"
        break;
#line 1323 "unused_args.m"
      case (MR_Integer) 1:
#line 1310 "unused_args.m"
        {
#line 1310 "unused_args.m"
          MR_Word transform_hlds__unused_args__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredProcId_10, (MR_Integer) 0)));
#line 1310 "unused_args.m"
          MR_Integer transform_hlds__unused_args__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredProcId_10, (MR_Integer) 1)));
#line 1310 "unused_args.m"
          MR_String transform_hlds__unused_args__Name_15;
#line 1310 "unused_args.m"
          MR_Integer transform_hlds__unused_args__Arity_16;
#line 1310 "unused_args.m"
          MR_Integer transform_hlds__unused_args__ProcInt_17;

#line 1312 "unused_args.m"
          {
#line 1312 "unused_args.m"
            mercury__io__write_string_3_p_0((MR_String) "% Fixing up \140");
          }
#line 1313 "unused_args.m"
          {
#line 1313 "unused_args.m"
            transform_hlds__unused_args__Name_15 = hlds__hlds_module__predicate_name_2_f_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_18, transform_hlds__unused_args__PredId_13);
          }
#line 1314 "unused_args.m"
          {
#line 1314 "unused_args.m"
            transform_hlds__unused_args__Arity_16 = hlds__hlds_module__predicate_arity_2_f_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_18, transform_hlds__unused_args__PredId_13);
          }
#line 1315 "unused_args.m"
          {
#line 1315 "unused_args.m"
            hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__unused_args__ProcId_14, &transform_hlds__unused_args__ProcInt_17);
          }
#line 1316 "unused_args.m"
          {
#line 1316 "unused_args.m"
            mercury__io__write_string_3_p_0(transform_hlds__unused_args__Name_15);
          }
#line 1317 "unused_args.m"
          {
#line 1317 "unused_args.m"
            mercury__io__write_string_3_p_0((MR_String) "/");
          }
#line 1318 "unused_args.m"
          {
#line 1318 "unused_args.m"
            mercury__io__write_int_3_p_0(transform_hlds__unused_args__Arity_16);
          }
#line 1319 "unused_args.m"
          {
#line 1319 "unused_args.m"
            mercury__io__write_string_3_p_0((MR_String) "\' in mode ");
          }
#line 1320 "unused_args.m"
          {
#line 1320 "unused_args.m"
            mercury__io__write_int_3_p_0(transform_hlds__unused_args__ProcInt_17);
          }
#line 1321 "unused_args.m"
          {
#line 1321 "unused_args.m"
            mercury__io__write_char_3_p_0((MR_Char) 10);
          }
#line 1310 "unused_args.m"
        }
#line 1323 "unused_args.m"
        break;
#line 1323 "unused_args.m"
    }
#line 1326 "unused_args.m"
    {
#line 1326 "unused_args.m"
      transform_hlds__unused_args__do_unused_args_fixup_proc_5_p_0(transform_hlds__unused_args__VarUsage_8, transform_hlds__unused_args__PredProcId_10, transform_hlds__unused_args__ProcCallInfo_9, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_18, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_19);
    }
#line 1307 "unused_args.m"
  }
#line 1303 "unused_args.m"
}

#line 1300 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_module_6_p_0_1(
#line 1300 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1300 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1300 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1300 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3)
#line 1300 "unused_args.m"
{
#line 1300 "unused_args.m"
  {
#line 1300 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1300 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_STATE_VARIABLE_ModuleInfo_19;

#line 1300 "unused_args.m"
    {
#line 1300 "unused_args.m"
      transform_hlds__unused_args__unused_args_fixup_proc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv0_STATE_VARIABLE_ModuleInfo_19);
    }
#line 1300 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_STATE_VARIABLE_ModuleInfo_19));
#line 1300 "unused_args.m"
  }
#line 1300 "unused_args.m"
}

#line 1294 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_module_6_p_0(
#line 1294 "unused_args.m"
  MR_Word transform_hlds__unused_args__VeryVerbose_7,
#line 1294 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_8,
#line 1294 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcIds_9,
#line 1294 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcCallInfo_10,
#line 1294 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_12,
#line 1294 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_13)
#line 1294 "unused_args.m"
{
#line 1299 "unused_args.m"
  {
#line 1299 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1299 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_14_14;
#line 1300 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv1_STATE_VARIABLE_ModuleInfo_13;

#line 1300 "unused_args.m"
    {
#line 1300 "unused_args.m"
      transform_hlds__unused_args__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1300 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_7[1]));
#line 1300 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_fixup_module_6_p_0_1));
#line 1300 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1300 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 3) = ((MR_Box) (transform_hlds__unused_args__VeryVerbose_7));
#line 1300 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 4) = ((MR_Box) (transform_hlds__unused_args__VarUsage_8));
#line 1300 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 5) = ((MR_Box) (transform_hlds__unused_args__ProcCallInfo_10));
#line 1300 "unused_args.m"
    }
#line 1300 "unused_args.m"
    {
#line 1300 "unused_args.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__unused_args__V_14_14, transform_hlds__unused_args__PredProcIds_9, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_12)), &transform_hlds__unused_args__conv1_STATE_VARIABLE_ModuleInfo_13);
    }
#line 1300 "unused_args.m"
    *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_13 = ((MR_Word) transform_hlds__unused_args__conv1_STATE_VARIABLE_ModuleInfo_13);
#line 1299 "unused_args.m"
  }
#line 1294 "unused_args.m"
}

#line 1281 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__get_unused_arg_nos_4_p_0(
#line 1281 "unused_args.m"
  MR_Word transform_hlds__unused_args__LocalVars_1,
#line 1281 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 1281 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ArgNo_3,
#line 1281 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__4_4)
#line 1281 "unused_args.m"
{
#line 1284 "unused_args.m"
  {
#line 1284 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1284 "unused_args.m"
    if ((transform_hlds__unused_args__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1284 "unused_args.m"
      *transform_hlds__unused_args__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1284 "unused_args.m"
    else
#line 1285 "unused_args.m"
      {
#line 1285 "unused_args.m"
        MR_Word transform_hlds__unused_args__HeadVar_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 1285 "unused_args.m"
        MR_Word transform_hlds__unused_args__HeadVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 1285 "unused_args.m"
        MR_Integer transform_hlds__unused_args__NextArg_12 = (transform_hlds__unused_args__ArgNo_3 + (MR_Integer) 1);
#line 1285 "unused_args.m"
        MR_Word transform_hlds__unused_args__UnusedArgsTail_13;

#line 1286 "unused_args.m"
        {
#line 1286 "unused_args.m"
          transform_hlds__unused_args__get_unused_arg_nos_4_p_0(transform_hlds__unused_args__LocalVars_1, transform_hlds__unused_args__HeadVars_9, transform_hlds__unused_args__NextArg_12, &transform_hlds__unused_args__UnusedArgsTail_13);
        }
#line 1288 "unused_args.m"
        {
#line 1288 "unused_args.m"
          transform_hlds__unused_args__succeeded = mercury__map__contains_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__LocalVars_1, ((MR_Box) (transform_hlds__unused_args__HeadVar_8)));
        }
#line 1290 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1289 "unused_args.m"
          {
#line 1289 "unused_args.m"
            MR_Word base;
#line 1289 "unused_args.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1289 "unused_args.m"
            *transform_hlds__unused_args__HeadVar__4_4 = base;
#line 1289 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__ArgNo_3));
#line 1289 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__UnusedArgsTail_13));
#line 1289 "unused_args.m"
          }
#line 1290 "unused_args.m"
        else
#line 1291 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__4_4 = transform_hlds__unused_args__UnusedArgsTail_13;
#line 1285 "unused_args.m"
      }
#line 1284 "unused_args.m"
  }
#line 1281 "unused_args.m"
}

#line 1224 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__make_imported_unused_args_pred_info_6_p_0(
#line 1224 "unused_args.m"
  MR_Word transform_hlds__unused_args__OptProc_7,
#line 1224 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_8,
#line 1224 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_0_31,
#line 1224 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_32,
#line 1224 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_33,
#line 1224 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_34)
#line 1224 "unused_args.m"
{
#line 1229 "unused_args.m"
  {
#line 1229 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1229 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OptProc_7, (MR_Integer) 0)));
#line 1229 "unused_args.m"
    MR_Integer transform_hlds__unused_args__ProcId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OptProc_7, (MR_Integer) 1)));
#line 1229 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredInfo0_13;
#line 1229 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcInfo0_14;
#line 1229 "unused_args.m"
    MR_Word transform_hlds__unused_args__NewPredInfo0_15;
#line 1229 "unused_args.m"
    MR_Word transform_hlds__unused_args__NewProcs0_16;
#line 1229 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVars0_17;
#line 1229 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVars_18;
#line 1229 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcInfo1_19;
#line 1229 "unused_args.m"
    MR_Word transform_hlds__unused_args__ArgModes0_20;
#line 1229 "unused_args.m"
    MR_Word transform_hlds__unused_args__ArgModes_21;
#line 1229 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcInfo_22;
#line 1229 "unused_args.m"
    MR_Word transform_hlds__unused_args__NewProcs_23;
#line 1229 "unused_args.m"
    MR_Word transform_hlds__unused_args__NewPredInfo_24;
#line 1229 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredTable0_25;
#line 1229 "unused_args.m"
    MR_Word transform_hlds__unused_args__NewPredId_26;
#line 1229 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredTable1_27;
#line 1229 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredModule_28;
#line 1229 "unused_args.m"
    MR_String transform_hlds__unused_args__PredName_29;
#line 1229 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredSymName_30;
#line 1229 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_42_42;

#line 1231 "unused_args.m"
    {
#line 1231 "unused_args.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_33, transform_hlds__unused_args__PredId_11, transform_hlds__unused_args__ProcId_12, &transform_hlds__unused_args__PredInfo0_13, &transform_hlds__unused_args__ProcInfo0_14);
    }
#line 1233 "unused_args.m"
    {
#line 1233 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(transform_hlds__unused_args__UnusedArgs_8, (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(2), &transform_hlds__unused_args_scalar_common_9[0]))), transform_hlds__unused_args__OptProc_7, transform_hlds__unused_args__PredInfo0_13, &transform_hlds__unused_args__NewPredInfo0_15);
    }
#line 1236 "unused_args.m"
    {
#line 1236 "unused_args.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__unused_args__NewPredInfo0_15, &transform_hlds__unused_args__NewProcs0_16);
    }
#line 1239 "unused_args.m"
    {
#line 1239 "unused_args.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__ProcInfo0_14, &transform_hlds__unused_args__HeadVars0_17);
    }
#line 1240 "unused_args.m"
    {
#line 1240 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_8, transform_hlds__unused_args__HeadVars0_17, &transform_hlds__unused_args__HeadVars_18);
    }
#line 1241 "unused_args.m"
    {
#line 1241 "unused_args.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__unused_args__HeadVars_18, transform_hlds__unused_args__ProcInfo0_14, &transform_hlds__unused_args__ProcInfo1_19);
    }
#line 1242 "unused_args.m"
    {
#line 1242 "unused_args.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__unused_args__ProcInfo1_19, &transform_hlds__unused_args__ArgModes0_20);
    }
#line 1243 "unused_args.m"
    {
#line 1243 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_8, transform_hlds__unused_args__ArgModes0_20, &transform_hlds__unused_args__ArgModes_21);
    }
#line 1244 "unused_args.m"
    {
#line 1244 "unused_args.m"
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__unused_args__ArgModes_21, transform_hlds__unused_args__ProcInfo1_19, &transform_hlds__unused_args__ProcInfo_22);
    }
#line 1245 "unused_args.m"
    {
#line 1245 "unused_args.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__unused_args__ProcId_12, ((MR_Box) (transform_hlds__unused_args__ProcInfo_22)), transform_hlds__unused_args__NewProcs0_16, &transform_hlds__unused_args__NewProcs_23);
    }
#line 1246 "unused_args.m"
    {
#line 1246 "unused_args.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__unused_args__NewProcs_23, transform_hlds__unused_args__NewPredInfo0_15, &transform_hlds__unused_args__NewPredInfo_24);
    }
#line 1249 "unused_args.m"
    {
#line 1249 "unused_args.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_33, &transform_hlds__unused_args__PredTable0_25);
    }
#line 1250 "unused_args.m"
    {
#line 1250 "unused_args.m"
      hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__unused_args__NewPredInfo_24, &transform_hlds__unused_args__NewPredId_26, transform_hlds__unused_args__PredTable0_25, &transform_hlds__unused_args__PredTable1_27);
    }
#line 1251 "unused_args.m"
    {
#line 1251 "unused_args.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__unused_args__PredTable1_27, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_33, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_34);
    }
#line 1252 "unused_args.m"
    {
#line 1252 "unused_args.m"
      transform_hlds__unused_args__PredModule_28 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__unused_args__NewPredInfo_24);
    }
#line 1253 "unused_args.m"
    {
#line 1253 "unused_args.m"
      transform_hlds__unused_args__PredName_29 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__unused_args__NewPredInfo_24);
    }
#line 1254 "unused_args.m"
    {
#line 1254 "unused_args.m"
      transform_hlds__unused_args__PredSymName_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1254 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__PredSymName_30, 0) = ((MR_Box) (transform_hlds__unused_args__PredModule_28));
#line 1254 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__PredSymName_30, 1) = ((MR_Box) (transform_hlds__unused_args__PredName_29));
#line 1254 "unused_args.m"
    }
#line 1257 "unused_args.m"
    {
#line 1257 "unused_args.m"
      transform_hlds__unused_args__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1257 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_42_42, 0) = ((MR_Box) (transform_hlds__unused_args__NewPredId_26));
#line 1257 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_42_42, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_12));
#line 1257 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_42_42, 2) = ((MR_Box) (transform_hlds__unused_args__PredSymName_30));
#line 1257 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_42_42, 3) = ((MR_Box) (transform_hlds__unused_args__UnusedArgs_8));
#line 1257 "unused_args.m"
    }
#line 1256 "unused_args.m"
    {
#line 1256 "unused_args.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0, ((MR_Box) (transform_hlds__unused_args__OptProc_7)), ((MR_Box) (transform_hlds__unused_args__V_42_42)), transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_0_31, transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_32);
    }
#line 1229 "unused_args.m"
  }
#line 1224 "unused_args.m"
}

#line 1185 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__create_call_goal_7_p_0(
#line 1185 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_8,
#line 1185 "unused_args.m"
  MR_Word transform_hlds__unused_args__NewPredId_9,
#line 1185 "unused_args.m"
  MR_Integer transform_hlds__unused_args__NewProcId_10,
#line 1185 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredModule_11,
#line 1185 "unused_args.m"
  MR_String transform_hlds__unused_args__PredName_12,
#line 1185 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34,
#line 1185 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OldProc_35)
#line 1185 "unused_args.m"
{
#line 1189 "unused_args.m"
  {
#line 1189 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1189 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVars_14;
#line 1189 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal0_15;
#line 1189 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalInfo0_17;
#line 1189 "unused_args.m"
    MR_Word transform_hlds__unused_args__Determinism_18;
#line 1189 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalInfo1_19;
#line 1189 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes0_20;
#line 1189 "unused_args.m"
    MR_Word transform_hlds__unused_args__NonLocals_21;
#line 1189 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypeList_22;
#line 1189 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes1_23;
#line 1189 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarSet0_24;
#line 1189 "unused_args.m"
    MR_Word transform_hlds__unused_args__RttiVarMaps0_25;
#line 1189 "unused_args.m"
    MR_Word transform_hlds__unused_args__NewHeadVars_26;
#line 1189 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalExpr_27;
#line 1189 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal1_28;
#line 1189 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal_30;
#line 1189 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarSet_31;
#line 1189 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes_32;
#line 1189 "unused_args.m"
    MR_Word transform_hlds__unused_args__RttiVarMaps_33;
#line 1189 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_39_39;
#line 1189 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_41_41;
#line 1189 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_42_42;
#line 1189 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_43_43;
#line 1189 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_44_44;
#line 1192 "unused_args.m"
    MR_Word transform_hlds__unused_args___GoalExpr_16;
#line 1213 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_29_29;

#line 1190 "unused_args.m"
    {
#line 1190 "unused_args.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34, &transform_hlds__unused_args__HeadVars_14);
    }
#line 1191 "unused_args.m"
    {
#line 1191 "unused_args.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34, &transform_hlds__unused_args__Goal0_15);
    }
#line 1192 "unused_args.m"
    transform_hlds__unused_args___GoalExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal0_15, (MR_Integer) 0)));
#line 1192 "unused_args.m"
    transform_hlds__unused_args__GoalInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal0_15, (MR_Integer) 1)));
#line 1198 "unused_args.m"
    {
#line 1198 "unused_args.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34, &transform_hlds__unused_args__Determinism_18);
    }
#line 1199 "unused_args.m"
    {
#line 1199 "unused_args.m"
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__unused_args__Determinism_18, transform_hlds__unused_args__GoalInfo0_17, &transform_hlds__unused_args__GoalInfo1_19);
    }
#line 1201 "unused_args.m"
    {
#line 1201 "unused_args.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34, &transform_hlds__unused_args__VarTypes0_20);
    }
#line 1202 "unused_args.m"
    {
#line 1202 "unused_args.m"
      mercury__set__list_to_set_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], transform_hlds__unused_args__HeadVars_14, &transform_hlds__unused_args__NonLocals_21);
    }
#line 1203 "unused_args.m"
    {
#line 1203 "unused_args.m"
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__unused_args__VarTypes0_20, transform_hlds__unused_args__HeadVars_14, &transform_hlds__unused_args__VarTypeList_22);
    }
#line 1204 "unused_args.m"
    {
#line 1204 "unused_args.m"
      hlds__vartypes__vartypes_from_corresponding_lists_3_p_0(transform_hlds__unused_args__HeadVars_14, transform_hlds__unused_args__VarTypeList_22, &transform_hlds__unused_args__VarTypes1_23);
    }
#line 1207 "unused_args.m"
    {
#line 1207 "unused_args.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34, &transform_hlds__unused_args__VarSet0_24);
    }
#line 1208 "unused_args.m"
    {
#line 1208 "unused_args.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34, &transform_hlds__unused_args__RttiVarMaps0_25);
    }
#line 1209 "unused_args.m"
    {
#line 1209 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_8, transform_hlds__unused_args__HeadVars_14, &transform_hlds__unused_args__NewHeadVars_26);
    }
#line 1211 "unused_args.m"
    {
#line 1211 "unused_args.m"
      transform_hlds__unused_args__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1211 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_39_39, 0) = ((MR_Box) (transform_hlds__unused_args__PredModule_11));
#line 1211 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_39_39, 1) = ((MR_Box) (transform_hlds__unused_args__PredName_12));
#line 1211 "unused_args.m"
    }
#line 1210 "unused_args.m"
    {
#line 1210 "unused_args.m"
      transform_hlds__unused_args__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1210 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_27, 0) = ((MR_Box) (transform_hlds__unused_args__NewPredId_9));
#line 1210 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_27, 1) = ((MR_Box) (transform_hlds__unused_args__NewProcId_10));
#line 1210 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_27, 2) = ((MR_Box) (transform_hlds__unused_args__NewHeadVars_26));
#line 1210 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_27, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1210 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_27, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1210 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_27, 5) = ((MR_Box) (transform_hlds__unused_args__V_39_39));
#line 1210 "unused_args.m"
    }
#line 1212 "unused_args.m"
    {
#line 1212 "unused_args.m"
      transform_hlds__unused_args__Goal1_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1212 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_28, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_27));
#line 1212 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_28, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo1_19));
#line 1212 "unused_args.m"
    }
#line 1214 "unused_args.m"
    {
#line 1214 "unused_args.m"
      transform_hlds__unused_args__V_41_41 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__unused_args__NonLocals_21);
    }
#line 1213 "unused_args.m"
    {
#line 1213 "unused_args.m"
      hlds__quantification__implicitly_quantify_goal_general_11_p_0((MR_Integer) 1, transform_hlds__unused_args__V_41_41, &transform_hlds__unused_args__V_29_29, transform_hlds__unused_args__Goal1_28, &transform_hlds__unused_args__Goal_30, transform_hlds__unused_args__VarSet0_24, &transform_hlds__unused_args__VarSet_31, transform_hlds__unused_args__VarTypes1_23, &transform_hlds__unused_args__VarTypes_32, transform_hlds__unused_args__RttiVarMaps0_25, &transform_hlds__unused_args__RttiVarMaps_33);
    }
#line 1216 "unused_args.m"
    {
#line 1216 "unused_args.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__unused_args__Goal_30, transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34, &transform_hlds__unused_args__STATE_VARIABLE_OldProc_42_42);
    }
#line 1217 "unused_args.m"
    {
#line 1217 "unused_args.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__unused_args__VarSet_31, transform_hlds__unused_args__STATE_VARIABLE_OldProc_42_42, &transform_hlds__unused_args__STATE_VARIABLE_OldProc_43_43);
    }
#line 1218 "unused_args.m"
    {
#line 1218 "unused_args.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__unused_args__VarTypes_32, transform_hlds__unused_args__STATE_VARIABLE_OldProc_43_43, &transform_hlds__unused_args__STATE_VARIABLE_OldProc_44_44);
    }
#line 1219 "unused_args.m"
    {
#line 1219 "unused_args.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__unused_args__RttiVarMaps_33, transform_hlds__unused_args__STATE_VARIABLE_OldProc_44_44, transform_hlds__unused_args__STATE_VARIABLE_OldProc_35);
    }
#line 1189 "unused_args.m"
  }
#line 1185 "unused_args.m"
}

#line 1091 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__make_intermod_proc_10_p_0(
#line 1091 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_11,
#line 1091 "unused_args.m"
  MR_Word transform_hlds__unused_args__NewPredId_12,
#line 1091 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_13,
#line 1091 "unused_args.m"
  MR_String transform_hlds__unused_args__NewPredName_14,
#line 1091 "unused_args.m"
  MR_Word transform_hlds__unused_args__OrigPredInfo_15,
#line 1091 "unused_args.m"
  MR_Word transform_hlds__unused_args__OrigProcInfo_16,
#line 1091 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_17,
#line 1091 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs2_18,
#line 1091 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_35,
#line 1091 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_36)
#line 1091 "unused_args.m"
{
#line 1096 "unused_args.m"
  {
#line 1096 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExtraPredInfo0_20;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredModule_21;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExtraProc0_22;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVars0_23;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__IntermodHeadVars_24;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExtraProc1_25;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__ArgModes0_26;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__IntermodArgModes_27;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExtraProc_28;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExtraProcs0_29;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExtraProcs_30;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExtraPredInfo_31;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredTable0_32;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredTable_34;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_38_38;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVars_55;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal0_56;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalInfo0_58;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__Determinism_59;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalInfo1_60;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes0_61;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__NonLocals_62;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypeList_63;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes1_64;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarSet0_65;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__RttiVarMaps0_66;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__NewHeadVars_67;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalExpr_68;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal1_69;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal_71;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarSet_72;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes_73;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__RttiVarMaps_74;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_78_78;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_80_80;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_42_81;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_43_82;
#line 1096 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_44_83;
#line 1192 "unused_args.m"
    MR_Word transform_hlds__unused_args___GoalExpr_57;
#line 1213 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_70_70;
#line 1114 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_33_33;

#line 1100 "unused_args.m"
    {
#line 1100 "unused_args.m"
      transform_hlds__unused_args__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1100 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_38_38, 0) = ((MR_Box) (transform_hlds__unused_args__PredId_11));
#line 1100 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_38_38, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_13));
#line 1100 "unused_args.m"
    }
#line 1099 "unused_args.m"
    {
#line 1099 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(transform_hlds__unused_args__UnusedArgs2_18, (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))), transform_hlds__unused_args__V_38_38, transform_hlds__unused_args__OrigPredInfo_15, &transform_hlds__unused_args__ExtraPredInfo0_20);
    }
#line 1101 "unused_args.m"
    {
#line 1101 "unused_args.m"
      transform_hlds__unused_args__PredModule_21 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__unused_args__OrigPredInfo_15);
    }
#line 1190 "unused_args.m"
    {
#line 1190 "unused_args.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__HeadVars_55);
    }
#line 1191 "unused_args.m"
    {
#line 1191 "unused_args.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__Goal0_56);
    }
#line 1192 "unused_args.m"
    transform_hlds__unused_args___GoalExpr_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal0_56, (MR_Integer) 0)));
#line 1192 "unused_args.m"
    transform_hlds__unused_args__GoalInfo0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal0_56, (MR_Integer) 1)));
#line 1198 "unused_args.m"
    {
#line 1198 "unused_args.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__Determinism_59);
    }
#line 1199 "unused_args.m"
    {
#line 1199 "unused_args.m"
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__unused_args__Determinism_59, transform_hlds__unused_args__GoalInfo0_58, &transform_hlds__unused_args__GoalInfo1_60);
    }
#line 1201 "unused_args.m"
    {
#line 1201 "unused_args.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__VarTypes0_61);
    }
#line 1202 "unused_args.m"
    {
#line 1202 "unused_args.m"
      mercury__set__list_to_set_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], transform_hlds__unused_args__HeadVars_55, &transform_hlds__unused_args__NonLocals_62);
    }
#line 1203 "unused_args.m"
    {
#line 1203 "unused_args.m"
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__unused_args__VarTypes0_61, transform_hlds__unused_args__HeadVars_55, &transform_hlds__unused_args__VarTypeList_63);
    }
#line 1204 "unused_args.m"
    {
#line 1204 "unused_args.m"
      hlds__vartypes__vartypes_from_corresponding_lists_3_p_0(transform_hlds__unused_args__HeadVars_55, transform_hlds__unused_args__VarTypeList_63, &transform_hlds__unused_args__VarTypes1_64);
    }
#line 1207 "unused_args.m"
    {
#line 1207 "unused_args.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__VarSet0_65);
    }
#line 1208 "unused_args.m"
    {
#line 1208 "unused_args.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__RttiVarMaps0_66);
    }
#line 1209 "unused_args.m"
    {
#line 1209 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_17, transform_hlds__unused_args__HeadVars_55, &transform_hlds__unused_args__NewHeadVars_67);
    }
#line 1211 "unused_args.m"
    {
#line 1211 "unused_args.m"
      transform_hlds__unused_args__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1211 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_78_78, 0) = ((MR_Box) (transform_hlds__unused_args__PredModule_21));
#line 1211 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_78_78, 1) = ((MR_Box) (transform_hlds__unused_args__NewPredName_14));
#line 1211 "unused_args.m"
    }
#line 1210 "unused_args.m"
    {
#line 1210 "unused_args.m"
      transform_hlds__unused_args__GoalExpr_68 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1210 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_68, 0) = ((MR_Box) (transform_hlds__unused_args__NewPredId_12));
#line 1210 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_68, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_13));
#line 1210 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_68, 2) = ((MR_Box) (transform_hlds__unused_args__NewHeadVars_67));
#line 1210 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_68, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1210 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_68, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1210 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_68, 5) = ((MR_Box) (transform_hlds__unused_args__V_78_78));
#line 1210 "unused_args.m"
    }
#line 1212 "unused_args.m"
    {
#line 1212 "unused_args.m"
      transform_hlds__unused_args__Goal1_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1212 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_69, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_68));
#line 1212 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_69, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo1_60));
#line 1212 "unused_args.m"
    }
#line 1214 "unused_args.m"
    {
#line 1214 "unused_args.m"
      transform_hlds__unused_args__V_80_80 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__unused_args__NonLocals_62);
    }
#line 1213 "unused_args.m"
    {
#line 1213 "unused_args.m"
      hlds__quantification__implicitly_quantify_goal_general_11_p_0((MR_Integer) 1, transform_hlds__unused_args__V_80_80, &transform_hlds__unused_args__V_70_70, transform_hlds__unused_args__Goal1_69, &transform_hlds__unused_args__Goal_71, transform_hlds__unused_args__VarSet0_65, &transform_hlds__unused_args__VarSet_72, transform_hlds__unused_args__VarTypes1_64, &transform_hlds__unused_args__VarTypes_73, transform_hlds__unused_args__RttiVarMaps0_66, &transform_hlds__unused_args__RttiVarMaps_74);
    }
#line 1216 "unused_args.m"
    {
#line 1216 "unused_args.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__unused_args__Goal_71, transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__STATE_VARIABLE_OldProc_42_81);
    }
#line 1217 "unused_args.m"
    {
#line 1217 "unused_args.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__unused_args__VarSet_72, transform_hlds__unused_args__STATE_VARIABLE_OldProc_42_81, &transform_hlds__unused_args__STATE_VARIABLE_OldProc_43_82);
    }
#line 1218 "unused_args.m"
    {
#line 1218 "unused_args.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__unused_args__VarTypes_73, transform_hlds__unused_args__STATE_VARIABLE_OldProc_43_82, &transform_hlds__unused_args__STATE_VARIABLE_OldProc_44_83);
    }
#line 1219 "unused_args.m"
    {
#line 1219 "unused_args.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__unused_args__RttiVarMaps_74, transform_hlds__unused_args__STATE_VARIABLE_OldProc_44_83, &transform_hlds__unused_args__ExtraProc0_22);
    }
#line 1104 "unused_args.m"
    {
#line 1104 "unused_args.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__HeadVars0_23);
    }
#line 1105 "unused_args.m"
    {
#line 1105 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs2_18, transform_hlds__unused_args__HeadVars0_23, &transform_hlds__unused_args__IntermodHeadVars_24);
    }
#line 1106 "unused_args.m"
    {
#line 1106 "unused_args.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__unused_args__IntermodHeadVars_24, transform_hlds__unused_args__ExtraProc0_22, &transform_hlds__unused_args__ExtraProc1_25);
    }
#line 1107 "unused_args.m"
    {
#line 1107 "unused_args.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__ArgModes0_26);
    }
#line 1108 "unused_args.m"
    {
#line 1108 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs2_18, transform_hlds__unused_args__ArgModes0_26, &transform_hlds__unused_args__IntermodArgModes_27);
    }
#line 1109 "unused_args.m"
    {
#line 1109 "unused_args.m"
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__unused_args__IntermodArgModes_27, transform_hlds__unused_args__ExtraProc1_25, &transform_hlds__unused_args__ExtraProc_28);
    }
#line 1110 "unused_args.m"
    {
#line 1110 "unused_args.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__unused_args__ExtraPredInfo0_20, &transform_hlds__unused_args__ExtraProcs0_29);
    }
#line 1111 "unused_args.m"
    {
#line 1111 "unused_args.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__unused_args__ProcId_13, ((MR_Box) (transform_hlds__unused_args__ExtraProc_28)), transform_hlds__unused_args__ExtraProcs0_29, &transform_hlds__unused_args__ExtraProcs_30);
    }
#line 1112 "unused_args.m"
    {
#line 1112 "unused_args.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__unused_args__ExtraProcs_30, transform_hlds__unused_args__ExtraPredInfo0_20, &transform_hlds__unused_args__ExtraPredInfo_31);
    }
#line 1113 "unused_args.m"
    {
#line 1113 "unused_args.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_35, &transform_hlds__unused_args__PredTable0_32);
    }
#line 1114 "unused_args.m"
    {
#line 1114 "unused_args.m"
      hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__unused_args__ExtraPredInfo_31, &transform_hlds__unused_args__V_33_33, transform_hlds__unused_args__PredTable0_32, &transform_hlds__unused_args__PredTable_34);
    }
#line 1115 "unused_args.m"
    {
#line 1115 "unused_args.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__unused_args__PredTable_34, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_35, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_36);
    }
#line 1096 "unused_args.m"
  }
#line 1091 "unused_args.m"
}

#line 1086 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_4(
#line 1086 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1086 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1086 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1086 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3)
#line 1086 "unused_args.m"
{
#line 1086 "unused_args.m"
  {
#line 1086 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1086 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv3_STATE_VARIABLE_ModuleInfo_36;

#line 1086 "unused_args.m"
    {
#line 1086 "unused_args.m"
      transform_hlds__unused_args__make_intermod_proc_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 9))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv3_STATE_VARIABLE_ModuleInfo_36);
    }
#line 1086 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv3_STATE_VARIABLE_ModuleInfo_36));
#line 1086 "unused_args.m"
  }
#line 1086 "unused_args.m"
}

#line 1019 "unused_args.m"
static MR_Box MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_3(
#line 1019 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1019 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1)
#line 1019 "unused_args.m"
{
#line 1019 "unused_args.m"
  {
#line 1019 "unused_args.m"
    MR_Box transform_hlds__unused_args__wrapper_arg_2;
#line 1019 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1019 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv2_HeadVar__2_2;

#line 1019 "unused_args.m"
    {
#line 1019 "unused_args.m"
      transform_hlds__unused_args__conv2_HeadVar__2_2 = transform_hlds__unused_args__get_unused_args_1_f_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 1019 "unused_args.m"
    transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv2_HeadVar__2_2));
#line 1019 "unused_args.m"
    return transform_hlds__unused_args__wrapper_arg_2;
#line 1019 "unused_args.m"
  }
#line 1019 "unused_args.m"
}

#line 1014 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_2(
#line 1014 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1014 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1)
#line 1014 "unused_args.m"
{
#line 1014 "unused_args.m"
  {
#line 1014 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1014 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;

#line 1014 "unused_args.m"
    {
#line 1014 "unused_args.m"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__IntroducedFrom__pred__unused_args_create_new_pred__1014__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 1014 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 1014 "unused_args.m"
  }
#line 1014 "unused_args.m"
}

#line 1007 "unused_args.m"
static MR_Box MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_1(
#line 1007 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1007 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1)
#line 1007 "unused_args.m"
{
#line 1007 "unused_args.m"
  {
#line 1007 "unused_args.m"
    MR_Box transform_hlds__unused_args__wrapper_arg_2;
#line 1007 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1007 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv1_LambdaHeadVar__2_55;

#line 1007 "unused_args.m"
    {
#line 1007 "unused_args.m"
      transform_hlds__unused_args__conv1_LambdaHeadVar__2_55 = transform_hlds__unused_args__IntroducedFrom__func__unused_args_create_new_pred__1007__1_1_f_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 1007 "unused_args.m"
    transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv1_LambdaHeadVar__2_55));
#line 1007 "unused_args.m"
    return transform_hlds__unused_args__wrapper_arg_2;
#line 1007 "unused_args.m"
  }
#line 1007 "unused_args.m"
}

#line 985 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0(
#line 985 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_7,
#line 985 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 985 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_0_46,
#line 985 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_47,
#line 985 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48,
#line 985 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_49)
#line 985 "unused_args.m"
{
#line 990 "unused_args.m"
  {
#line 990 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 990 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeCtorInfo_76_76 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 990 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeInfo_77_77 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[0];
#line 990 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 990 "unused_args.m"
    MR_Integer transform_hlds__unused_args__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 990 "unused_args.m"
    MR_Word transform_hlds__unused_args__UnusedArgs_12;
#line 990 "unused_args.m"
    MR_Word transform_hlds__unused_args__OrigPredInfo_13;
#line 990 "unused_args.m"
    MR_Word transform_hlds__unused_args__OrigProcInfo_14;
#line 990 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredModule_15;
#line 990 "unused_args.m"
    MR_Word transform_hlds__unused_args__Globals_16;
#line 990 "unused_args.m"
    MR_Word transform_hlds__unused_args__Intermod_17;
#line 990 "unused_args.m"
    MR_Word transform_hlds__unused_args__IntermodResultsTriples_21;
#line 990 "unused_args.m"
    MR_Word transform_hlds__unused_args__IntermodOldArgLists_29;
#line 991 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv0_UnusedArgs_12;

#line 991 "unused_args.m"
    {
#line 991 "unused_args.m"
      mercury__map__lookup_3_p_0(transform_hlds__unused_args__TypeCtorInfo_76_76, transform_hlds__unused_args__TypeInfo_77_77, transform_hlds__unused_args__UnusedArgInfo_7, ((MR_Box) (transform_hlds__unused_args__HeadVar__2_2)), &transform_hlds__unused_args__conv0_UnusedArgs_12);
    }
#line 991 "unused_args.m"
    transform_hlds__unused_args__UnusedArgs_12 = ((MR_Word) transform_hlds__unused_args__conv0_UnusedArgs_12);
#line 992 "unused_args.m"
    {
#line 992 "unused_args.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48, transform_hlds__unused_args__PredId_8, transform_hlds__unused_args__ProcId_9, &transform_hlds__unused_args__OrigPredInfo_13, &transform_hlds__unused_args__OrigProcInfo_14);
    }
#line 994 "unused_args.m"
    {
#line 994 "unused_args.m"
      transform_hlds__unused_args__PredModule_15 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__unused_args__OrigPredInfo_13);
    }
#line 996 "unused_args.m"
    {
#line 996 "unused_args.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48, &transform_hlds__unused_args__Globals_16);
    }
#line 997 "unused_args.m"
    {
#line 997 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_16, (MR_Integer) 325, &transform_hlds__unused_args__Intermod_17);
    }
#line 1021 "unused_args.m"
#line 1021 "unused_args.m"
    switch (transform_hlds__unused_args__Intermod_17) {
#line 1021 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1021 "unused_args.m"
      case (MR_Integer) 0:
#line 1022 "unused_args.m"
        {
#line 1023 "unused_args.m"
          transform_hlds__unused_args__IntermodResultsTriples_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1024 "unused_args.m"
          transform_hlds__unused_args__IntermodOldArgLists_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1022 "unused_args.m"
        }
#line 1021 "unused_args.m"
        break;
#line 1021 "unused_args.m"
      case (MR_Integer) 1:
#line 999 "unused_args.m"
        {
#line 999 "unused_args.m"
          MR_Word transform_hlds__unused_args__TypeCtorInfo_80_80;
#line 999 "unused_args.m"
          MR_Word transform_hlds__unused_args__AnalysisInfo0_18;
#line 999 "unused_args.m"
          MR_Word transform_hlds__unused_args__ModuleId_19;
#line 999 "unused_args.m"
          MR_Word transform_hlds__unused_args__FuncId_20;
#line 999 "unused_args.m"
          MR_Word transform_hlds__unused_args__IntermodOldAnswers_22;
#line 999 "unused_args.m"
          MR_Integer transform_hlds__unused_args__PredArity_24;
#line 999 "unused_args.m"
          MR_Word transform_hlds__unused_args__FuncInfo_25;
#line 999 "unused_args.m"
          MR_Word transform_hlds__unused_args__Answer_26;
#line 999 "unused_args.m"
          MR_Word transform_hlds__unused_args__FilterUnused_27;
#line 999 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_59_59;

#line 1000 "unused_args.m"
          {
#line 1000 "unused_args.m"
            hlds__hlds_module__module_info_get_analysis_info_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48, &transform_hlds__unused_args__AnalysisInfo0_18);
          }
#line 1002 "unused_args.m"
          {
#line 1002 "unused_args.m"
            transform_hlds__mmc_analysis__module_name_func_id_from_pred_info_4_p_0(transform_hlds__unused_args__OrigPredInfo_13, transform_hlds__unused_args__ProcId_9, &transform_hlds__unused_args__ModuleId_19, &transform_hlds__unused_args__FuncId_20);
          }
#line 1004 "unused_args.m"
          {
#line 1004 "unused_args.m"
            analysis__lookup_results_4_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_4[0], transform_hlds__unused_args__AnalysisInfo0_18, transform_hlds__unused_args__ModuleId_19, transform_hlds__unused_args__FuncId_20, &transform_hlds__unused_args__IntermodResultsTriples_21);
          }
#line 13210 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__TypeCtorInfo_80_80 = (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0;
#line 1007 "unused_args.m"
          {
#line 1007 "unused_args.m"
            transform_hlds__unused_args__IntermodOldAnswers_22 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[4], transform_hlds__unused_args__TypeCtorInfo_80_80, (MR_Word) &transform_hlds__unused_args_scalar_common_2[10], transform_hlds__unused_args__IntermodResultsTriples_21);
          }
#line 1010 "unused_args.m"
          {
#line 1010 "unused_args.m"
            transform_hlds__unused_args__PredArity_24 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__unused_args__OrigPredInfo_13);
          }
#line 1011 "unused_args.m"
          transform_hlds__unused_args__FuncInfo_25 = (MR_Word) transform_hlds__unused_args__PredArity_24;
#line 1012 "unused_args.m"
          transform_hlds__unused_args__Answer_26 = (MR_Word) transform_hlds__unused_args__UnusedArgs_12;
#line 1014 "unused_args.m"
          {
#line 1014 "unused_args.m"
            transform_hlds__unused_args__FilterUnused_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1014 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FilterUnused_27, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_4[4]));
#line 1014 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FilterUnused_27, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_2));
#line 1014 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FilterUnused_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1014 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FilterUnused_27, 3) = ((MR_Box) (transform_hlds__unused_args__FuncInfo_25));
#line 1014 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FilterUnused_27, 4) = ((MR_Box) (transform_hlds__unused_args__Answer_26));
#line 1014 "unused_args.m"
          }
#line 1020 "unused_args.m"
          {
#line 1020 "unused_args.m"
            transform_hlds__unused_args__V_59_59 = mercury__list__filter_2_f_0(transform_hlds__unused_args__TypeCtorInfo_80_80, transform_hlds__unused_args__FilterUnused_27, transform_hlds__unused_args__IntermodOldAnswers_22);
          }
#line 1019 "unused_args.m"
          {
#line 1019 "unused_args.m"
            transform_hlds__unused_args__IntermodOldArgLists_29 = mercury__list__map_2_f_0(transform_hlds__unused_args__TypeCtorInfo_80_80, transform_hlds__unused_args__TypeInfo_77_77, (MR_Word) &transform_hlds__unused_args_scalar_common_2[11], transform_hlds__unused_args__V_59_59);
          }
#line 999 "unused_args.m"
        }
#line 1021 "unused_args.m"
        break;
#line 1021 "unused_args.m"
    }
#line 1029 "unused_args.m"
    if ((transform_hlds__unused_args__UnusedArgs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1028 "unused_args.m"
      {
#line 1028 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_47 = transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_0_46;
#line 1028 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_49 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48;
#line 1028 "unused_args.m"
      }
#line 1029 "unused_args.m"
    else
#line 1030 "unused_args.m"
      {
#line 1030 "unused_args.m"
        MR_Word transform_hlds__unused_args__PredStatus0_32;
#line 1030 "unused_args.m"
        MR_Word transform_hlds__unused_args__PredStatus_35;
#line 1030 "unused_args.m"
        MR_Word transform_hlds__unused_args__NewPredInfo0_36;
#line 1030 "unused_args.m"
        MR_String transform_hlds__unused_args__NewPredName_37;
#line 1030 "unused_args.m"
        MR_Word transform_hlds__unused_args__NewProcs0_38;
#line 1030 "unused_args.m"
        MR_Word transform_hlds__unused_args__NewProcs_39;
#line 1030 "unused_args.m"
        MR_Word transform_hlds__unused_args__NewPredInfo_40;
#line 1030 "unused_args.m"
        MR_Word transform_hlds__unused_args__PredTable0_41;
#line 1030 "unused_args.m"
        MR_Word transform_hlds__unused_args__NewPredId_42;
#line 1030 "unused_args.m"
        MR_Word transform_hlds__unused_args__PredTable_43;
#line 1030 "unused_args.m"
        MR_Word transform_hlds__unused_args__PredSymName_44;
#line 1030 "unused_args.m"
        MR_Word transform_hlds__unused_args__ForwardingProcInfo_45;
#line 1030 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65;
#line 1030 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_67_67;
#line 1030 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_69_69;
#line 1030 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_70_70;
#line 1033 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_60_60;
#line 1034 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_33_33;
#line 1034 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_34_34;
#line 1085 "unused_args.m"
        MR_Box transform_hlds__unused_args__conv4_STATE_VARIABLE_ModuleInfo_49;

#line 1031 "unused_args.m"
        {
#line 1031 "unused_args.m"
          hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__unused_args__OrigPredInfo_13, &transform_hlds__unused_args__PredStatus0_32);
        }
#line 1034 "unused_args.m"
        transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__IntermodResultsTriples_21)) == (MR_mktag((MR_Integer) 1)));
#line 1034 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1034 "unused_args.m"
          {
#line 1034 "unused_args.m"
            transform_hlds__unused_args__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__IntermodResultsTriples_21, (MR_Integer) 0)));
#line 1034 "unused_args.m"
            transform_hlds__unused_args__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__IntermodResultsTriples_21, (MR_Integer) 1)));
#line 1035 "unused_args.m"
            transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__IntermodOldArgLists_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1033 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1033 "unused_args.m"
              {
#line 1033 "unused_args.m"
                transform_hlds__unused_args__V_60_60 = (MR_Word) transform_hlds__unused_args__PredStatus0_32;
#line 1033 "unused_args.m"
                transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_60_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1033 "unused_args.m"
              }
#line 1034 "unused_args.m"
          }
#line 1042 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1041 "unused_args.m"
          transform_hlds__unused_args__PredStatus_35 = transform_hlds__unused_args__PredStatus0_32;
#line 1042 "unused_args.m"
        else
#line 1048 "unused_args.m"
          {
#line 1043 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_62_62;

#line 1043 "unused_args.m"
            {
#line 1043 "unused_args.m"
              transform_hlds__unused_args__V_62_62 = hlds__status__pred_status_is_exported_1_f_0(transform_hlds__unused_args__PredStatus0_32);
            }
#line 1043 "unused_args.m"
            transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_62_62 == (MR_Integer) 1);
#line 1048 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1047 "unused_args.m"
              transform_hlds__unused_args__PredStatus_35 = transform_hlds__unused_args__PredStatus0_32;
#line 1048 "unused_args.m"
            else
#line 1049 "unused_args.m"
              {
#line 1049 "unused_args.m"
                transform_hlds__unused_args__PredStatus_35 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 1049 "unused_args.m"
              }
#line 1048 "unused_args.m"
          }
#line 1051 "unused_args.m"
        {
#line 1051 "unused_args.m"
          transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(transform_hlds__unused_args__UnusedArgs_12, transform_hlds__unused_args__PredStatus_35, transform_hlds__unused_args__HeadVar__2_2, transform_hlds__unused_args__OrigPredInfo_13, &transform_hlds__unused_args__NewPredInfo0_36);
        }
#line 1053 "unused_args.m"
        {
#line 1053 "unused_args.m"
          transform_hlds__unused_args__NewPredName_37 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__unused_args__NewPredInfo0_36);
        }
#line 1054 "unused_args.m"
        {
#line 1054 "unused_args.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__unused_args__NewPredInfo0_36, &transform_hlds__unused_args__NewProcs0_38);
        }
#line 1058 "unused_args.m"
        {
#line 1058 "unused_args.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__unused_args__ProcId_9, ((MR_Box) (transform_hlds__unused_args__OrigProcInfo_14)), transform_hlds__unused_args__NewProcs0_38, &transform_hlds__unused_args__NewProcs_39);
        }
#line 1059 "unused_args.m"
        {
#line 1059 "unused_args.m"
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__unused_args__NewProcs_39, transform_hlds__unused_args__NewPredInfo0_36, &transform_hlds__unused_args__NewPredInfo_40);
        }
#line 1062 "unused_args.m"
        {
#line 1062 "unused_args.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48, &transform_hlds__unused_args__PredTable0_41);
        }
#line 1063 "unused_args.m"
        {
#line 1063 "unused_args.m"
          hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__unused_args__NewPredInfo_40, &transform_hlds__unused_args__NewPredId_42, transform_hlds__unused_args__PredTable0_41, &transform_hlds__unused_args__PredTable_43);
        }
#line 1064 "unused_args.m"
        {
#line 1064 "unused_args.m"
          hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__unused_args__PredTable_43, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65);
        }
#line 1067 "unused_args.m"
        {
#line 1067 "unused_args.m"
          transform_hlds__unused_args__PredSymName_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1067 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__PredSymName_44, 0) = ((MR_Box) (transform_hlds__unused_args__PredModule_15));
#line 1067 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__PredSymName_44, 1) = ((MR_Box) (transform_hlds__unused_args__NewPredName_37));
#line 1067 "unused_args.m"
        }
#line 1069 "unused_args.m"
        {
#line 1069 "unused_args.m"
          transform_hlds__unused_args__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1069 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_67_67, 0) = ((MR_Box) (transform_hlds__unused_args__NewPredId_42));
#line 1069 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_67_67, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_9));
#line 1069 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_67_67, 2) = ((MR_Box) (transform_hlds__unused_args__PredSymName_44));
#line 1069 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_67_67, 3) = ((MR_Box) (transform_hlds__unused_args__UnusedArgs_12));
#line 1069 "unused_args.m"
        }
#line 1068 "unused_args.m"
        {
#line 1068 "unused_args.m"
          mercury__map__det_insert_4_p_0(transform_hlds__unused_args__TypeCtorInfo_76_76, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0, ((MR_Box) (transform_hlds__unused_args__HeadVar__2_2)), ((MR_Box) (transform_hlds__unused_args__V_67_67)), transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_0_46, transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_47);
        }
#line 1073 "unused_args.m"
        {
#line 1073 "unused_args.m"
          transform_hlds__unused_args__create_call_goal_7_p_0(transform_hlds__unused_args__UnusedArgs_12, transform_hlds__unused_args__NewPredId_42, transform_hlds__unused_args__ProcId_9, transform_hlds__unused_args__PredModule_15, transform_hlds__unused_args__NewPredName_37, transform_hlds__unused_args__OrigProcInfo_14, &transform_hlds__unused_args__ForwardingProcInfo_45);
        }
#line 1075 "unused_args.m"
        {
#line 1075 "unused_args.m"
          hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__unused_args__PredId_8, transform_hlds__unused_args__ProcId_9, transform_hlds__unused_args__OrigPredInfo_13, transform_hlds__unused_args__ForwardingProcInfo_45, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_69_69);
        }
#line 1086 "unused_args.m"
        {
#line 1086 "unused_args.m"
          transform_hlds__unused_args__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 1086 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_70_70, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_8[0]));
#line 1086 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_70_70, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_4));
#line 1086 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1086 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_70_70, 3) = ((MR_Box) (transform_hlds__unused_args__PredId_8));
#line 1086 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_70_70, 4) = ((MR_Box) (transform_hlds__unused_args__NewPredId_42));
#line 1086 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_70_70, 5) = ((MR_Box) (transform_hlds__unused_args__ProcId_9));
#line 1086 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_70_70, 6) = ((MR_Box) (transform_hlds__unused_args__NewPredName_37));
#line 1086 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_70_70, 7) = ((MR_Box) (transform_hlds__unused_args__OrigPredInfo_13));
#line 1086 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_70_70, 8) = ((MR_Box) (transform_hlds__unused_args__OrigProcInfo_14));
#line 1086 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_70_70, 9) = ((MR_Box) (transform_hlds__unused_args__UnusedArgs_12));
#line 1086 "unused_args.m"
        }
#line 1085 "unused_args.m"
        {
#line 1085 "unused_args.m"
          mercury__list__foldl_4_p_0(transform_hlds__unused_args__TypeInfo_77_77, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__unused_args__V_70_70, transform_hlds__unused_args__IntermodOldArgLists_29, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_69_69)), &transform_hlds__unused_args__conv4_STATE_VARIABLE_ModuleInfo_49);
        }
#line 1085 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_49 = ((MR_Word) transform_hlds__unused_args__conv4_STATE_VARIABLE_ModuleInfo_49);
#line 1030 "unused_args.m"
      }
#line 990 "unused_args.m"
  }
#line 985 "unused_args.m"
}

#line 949 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__get_unused_arg_info_5_p_0(
#line 949 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_1,
#line 949 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 949 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_3,
#line 949 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_0_4,
#line 949 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_5)
#line 949 "unused_args.m"
{
#line 952 "unused_args.m"
  while (MR_TRUE)
#line 952 "unused_args.m"
    {
#line 952 "unused_args.m"
      /* tailcall optimized into a loop */
#line 952 "unused_args.m"
      {
#line 952 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 952 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 952 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_5 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_0_4;
#line 952 "unused_args.m"
        else
#line 954 "unused_args.m"
          {
#line 954 "unused_args.m"
            MR_Word transform_hlds__unused_args__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 954 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredProcId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 954 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredProcIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 954 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredProcId_12, (MR_Integer) 0)));
#line 954 "unused_args.m"
            MR_Integer transform_hlds__unused_args__ProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredProcId_12, (MR_Integer) 1)));
#line 954 "unused_args.m"
            MR_Word transform_hlds__unused_args__LocalVarUsage_18;
#line 954 "unused_args.m"
            MR_Word transform_hlds__unused_args__ProcInfo_20;
#line 954 "unused_args.m"
            MR_Word transform_hlds__unused_args__HeadVars_21;
#line 954 "unused_args.m"
            MR_Word transform_hlds__unused_args__UnusedArgs_22;
#line 954 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_26_26;
#line 956 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv0_LocalVarUsage_18;
#line 957 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_19_19;

#line 956 "unused_args.m"
            {
#line 956 "unused_args.m"
              mercury__map__lookup_3_p_0(transform_hlds__unused_args__TypeCtorInfo_28_28, (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], transform_hlds__unused_args__VarUsage_3, ((MR_Box) (transform_hlds__unused_args__PredProcId_12)), &transform_hlds__unused_args__conv0_LocalVarUsage_18);
            }
#line 956 "unused_args.m"
            transform_hlds__unused_args__LocalVarUsage_18 = ((MR_Word) transform_hlds__unused_args__conv0_LocalVarUsage_18);
#line 957 "unused_args.m"
            {
#line 957 "unused_args.m"
              hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__unused_args__ModuleInfo_1, transform_hlds__unused_args__PredId_16, transform_hlds__unused_args__ProcId_17, &transform_hlds__unused_args__V_19_19, &transform_hlds__unused_args__ProcInfo_20);
            }
#line 958 "unused_args.m"
            {
#line 958 "unused_args.m"
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__ProcInfo_20, &transform_hlds__unused_args__HeadVars_21);
            }
#line 959 "unused_args.m"
            {
#line 959 "unused_args.m"
              transform_hlds__unused_args__get_unused_arg_nos_4_p_0(transform_hlds__unused_args__LocalVarUsage_18, transform_hlds__unused_args__HeadVars_21, (MR_Integer) 1, &transform_hlds__unused_args__UnusedArgs_22);
            }
#line 960 "unused_args.m"
            {
#line 960 "unused_args.m"
              mercury__map__det_insert_4_p_0(transform_hlds__unused_args__TypeCtorInfo_28_28, (MR_Word) &transform_hlds__unused_args_scalar_common_1[0], ((MR_Box) (transform_hlds__unused_args__PredProcId_12)), ((MR_Box) (transform_hlds__unused_args__UnusedArgs_22)), transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_0_4, &transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_26_26);
            }
#line 961 "unused_args.m"
            /* direct tailcall eliminated */
#line 961 "unused_args.m"
            {
#line 961 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__2__tmp_copy_2 = transform_hlds__unused_args__PredProcIds_13;
#line 961 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_0__tmp_copy_4 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_26_26;

#line 961 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_0_4 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_0__tmp_copy_4;
#line 961 "unused_args.m"
              transform_hlds__unused_args__HeadVar__2_2 = transform_hlds__unused_args__HeadVar__2__tmp_copy_2;
#line 961 "unused_args.m"
            }
#line 961 "unused_args.m"
            continue;
#line 954 "unused_args.m"
          }
#line 952 "unused_args.m"
      }
#line 952 "unused_args.m"
      break;
#line 952 "unused_args.m"
    }
#line 949 "unused_args.m"
}

#line 921 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_1(
#line 921 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 921 "unused_args.m"
{
#line 921 "unused_args.m"
  {
#line 921 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 921 "unused_args.m"
    MR_builtin_longjmp((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_0, 1);
#line 921 "unused_args.m"
  }
#line 921 "unused_args.m"
}

#line 921 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_3(
#line 921 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 921 "unused_args.m"
{
#line 921 "unused_args.m"
  {
#line 921 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 921 "unused_args.m"
    (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__Argument_34 = ((MR_Word) (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv1_Argument_34);
#line 921 "unused_args.m"
    {
#line 921 "unused_args.m"
      transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_2(transform_hlds__unused_args__env_ptr);
    }
#line 921 "unused_args.m"
  }
#line 921 "unused_args.m"
}

#line 921 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_2(
#line 921 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 921 "unused_args.m"
{
#line 921 "unused_args.m"
  {
#line 921 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 921 "unused_args.m"
    {
#line 554 "unused_args.m"
      MR_Word transform_hlds__unused_args__TypeInfo_10_49;
#line 554 "unused_args.m"
      MR_Word transform_hlds__unused_args__TypeCtorInfo_11_50;
#line 554 "unused_args.m"
      MR_Word transform_hlds__unused_args__UsageInfos_46;
#line 554 "unused_args.m"
      MR_Box transform_hlds__unused_args__conv2_UsageInfos_46;

#line 922 "unused_args.m"
      (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__PredProcId_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__Argument_34, (MR_Integer) 0)));
#line 922 "unused_args.m"
      (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgVar_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__Argument_34, (MR_Integer) 1)));
#line 554 "unused_args.m"
      {
#line 554 "unused_args.m"
        (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__VarUsage_1, ((MR_Box) ((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__PredProcId_23)), &transform_hlds__unused_args__conv2_UsageInfos_46);
      }
#line 554 "unused_args.m"
      if ((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
#line 554 "unused_args.m"
        {
#line 554 "unused_args.m"
          transform_hlds__unused_args__UsageInfos_46 = ((MR_Word) transform_hlds__unused_args__conv2_UsageInfos_46);
#line 554 "unused_args.m"
          (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_TRUE;
#line 554 "unused_args.m"
        }
#line 554 "unused_args.m"
      if ((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
#line 554 "unused_args.m"
        {
#line 13696 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__TypeInfo_10_49 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 13698 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__TypeCtorInfo_11_50 = (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0;
#line 555 "unused_args.m"
          {
#line 555 "unused_args.m"
            (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = mercury__map__contains_2_p_0(transform_hlds__unused_args__TypeInfo_10_49, transform_hlds__unused_args__TypeCtorInfo_11_50, transform_hlds__unused_args__UsageInfos_46, ((MR_Box) ((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgVar_24)));
          }
#line 554 "unused_args.m"
        }
#line 553 "unused_args.m"
      (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = !((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded);
#line 553 "unused_args.m"
      if ((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
#line 553 "unused_args.m"
        {
#line 553 "unused_args.m"
          transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_1(transform_hlds__unused_args__env_ptr);
        }
#line 921 "unused_args.m"
    }
#line 921 "unused_args.m"
  }
#line 921 "unused_args.m"
}

#line 921 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_4(
#line 921 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 921 "unused_args.m"
{
#line 921 "unused_args.m"
  {
#line 921 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 921 "unused_args.m"
    if (MR_builtin_setjmp((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_0) == 0)
#line 921 "unused_args.m"
      {
#line 921 "unused_args.m"
        {
#line 921 "unused_args.m"
          {
#line 921 "unused_args.m"
            mercury__set__member_2_p_1((MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0, &(transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv1_Argument_34, (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgDep0_21, transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_3, transform_hlds__unused_args__env_ptr);
          }
#line 921 "unused_args.m"
        }
#line 921 "unused_args.m"
        (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_FALSE;
#line 921 "unused_args.m"
      }
#line 921 "unused_args.m"
    else
#line 921 "unused_args.m"
      (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_TRUE;
#line 921 "unused_args.m"
  }
#line 921 "unused_args.m"
}

#line 929 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_5(
#line 929 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 929 "unused_args.m"
{
#line 929 "unused_args.m"
  {
#line 929 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 929 "unused_args.m"
    MR_builtin_longjmp((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_1, 1);
#line 929 "unused_args.m"
  }
#line 929 "unused_args.m"
}

#line 929 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_7(
#line 929 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 929 "unused_args.m"
{
#line 929 "unused_args.m"
  {
#line 929 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 929 "unused_args.m"
    (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__X_35 = ((MR_Word) (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv3_X_35);
#line 929 "unused_args.m"
    {
#line 929 "unused_args.m"
      transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_6(transform_hlds__unused_args__env_ptr);
    }
#line 929 "unused_args.m"
  }
#line 929 "unused_args.m"
}

#line 929 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_6(
#line 929 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 929 "unused_args.m"
{
#line 929 "unused_args.m"
  {
#line 929 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 929 "unused_args.m"
    {
#line 561 "unused_args.m"
      {
#line 561 "unused_args.m"
        (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = mercury__map__contains_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5, ((MR_Box) ((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__X_35)));
      }
#line 561 "unused_args.m"
      (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = !((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded);
#line 561 "unused_args.m"
      if ((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
#line 561 "unused_args.m"
        {
#line 561 "unused_args.m"
          transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_5(transform_hlds__unused_args__env_ptr);
        }
#line 929 "unused_args.m"
    }
#line 929 "unused_args.m"
  }
#line 929 "unused_args.m"
}

#line 929 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_8(
#line 929 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 929 "unused_args.m"
{
#line 929 "unused_args.m"
  {
#line 929 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 929 "unused_args.m"
    if (MR_builtin_setjmp((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_1) == 0)
#line 929 "unused_args.m"
      {
#line 929 "unused_args.m"
        {
#line 929 "unused_args.m"
          {
#line 929 "unused_args.m"
            mercury__set__member_2_p_1((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], &(transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv3_X_35, (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__VarDep0_20, transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_7, transform_hlds__unused_args__env_ptr);
          }
#line 929 "unused_args.m"
        }
#line 929 "unused_args.m"
        (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_FALSE;
#line 929 "unused_args.m"
      }
#line 929 "unused_args.m"
    else
#line 929 "unused_args.m"
      (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_TRUE;
#line 929 "unused_args.m"
  }
#line 929 "unused_args.m"
}

#line 909 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0(
#line 909 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_1,
#line 909 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 909 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_3,
#line 909 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_4,
#line 909 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_LocalVars_0_5,
#line 909 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_LocalVars_6)
#line 909 "unused_args.m"
{
#line 909 "unused_args.m"
  {
#line 909 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s transform_hlds__unused_args__env;

#line 909 "unused_args.m"
    (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__VarUsage_1 = transform_hlds__unused_args__VarUsage_1;
#line 909 "unused_args.m"
    (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5 = transform_hlds__unused_args__STATE_VARIABLE_LocalVars_0_5;
#line 912 "unused_args.m"
    while (MR_TRUE)
#line 912 "unused_args.m"
      {
#line 912 "unused_args.m"
        /* tailcall optimized into a loop */
#line 912 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 912 "unused_args.m"
          {
#line 912 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_LocalVars_6 = (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5;
#line 912 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_Changed_4 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_3;
#line 912 "unused_args.m"
          }
#line 912 "unused_args.m"
        else
#line 913 "unused_args.m"
          {
#line 913 "unused_args.m"
            MR_Word transform_hlds__unused_args__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 913 "unused_args.m"
            MR_Word transform_hlds__unused_args__Vars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 913 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_LocalVars_30_30;
#line 913 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_31_31;
#line 944 "unused_args.m"
            MR_Word transform_hlds__unused_args__Usage_19;
#line 593 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv0_Usage_19;

#line 593 "unused_args.m"
            {
#line 593 "unused_args.m"
              (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5, ((MR_Box) (transform_hlds__unused_args__Var_15)), &transform_hlds__unused_args__conv0_Usage_19);
            }
#line 593 "unused_args.m"
            if ((transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
#line 593 "unused_args.m"
              {
#line 593 "unused_args.m"
                transform_hlds__unused_args__Usage_19 = ((MR_Word) transform_hlds__unused_args__conv0_Usage_19);
#line 593 "unused_args.m"
                (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_TRUE;
#line 593 "unused_args.m"
              }
#line 944 "unused_args.m"
            if ((transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
#line 915 "unused_args.m"
              {
#line 915 "unused_args.m"
                (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__VarDep0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Usage_19, (MR_Integer) 0)));
#line 915 "unused_args.m"
                (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgDep0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Usage_19, (MR_Integer) 1)));
#line 921 "unused_args.m"
                {
#line 921 "unused_args.m"
                  transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_4(&transform_hlds__unused_args__env);
                }
#line 925 "unused_args.m"
                if (!((transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded))
#line 929 "unused_args.m"
                  {
#line 929 "unused_args.m"
                    {
#line 929 "unused_args.m"
                      transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_8(&transform_hlds__unused_args__env);
                    }
#line 929 "unused_args.m"
                  }
#line 941 "unused_args.m"
                if ((transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
#line 939 "unused_args.m"
                  {
#line 587 "unused_args.m"
                    {
#line 587 "unused_args.m"
                      mercury__map__delete_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, ((MR_Box) (transform_hlds__unused_args__Var_15)), (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5, &transform_hlds__unused_args__STATE_VARIABLE_LocalVars_30_30);
                    }
#line 940 "unused_args.m"
                    transform_hlds__unused_args__STATE_VARIABLE_Changed_31_31 = (MR_Integer) 1;
#line 939 "unused_args.m"
                  }
#line 941 "unused_args.m"
                else
#line 942 "unused_args.m"
                  {
#line 942 "unused_args.m"
                    transform_hlds__unused_args__STATE_VARIABLE_LocalVars_30_30 = (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5;
#line 942 "unused_args.m"
                    transform_hlds__unused_args__STATE_VARIABLE_Changed_31_31 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_3;
#line 942 "unused_args.m"
                  }
#line 915 "unused_args.m"
              }
#line 944 "unused_args.m"
            else
#line 945 "unused_args.m"
              {
#line 945 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_LocalVars_30_30 = (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5;
#line 945 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_Changed_31_31 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_3;
#line 945 "unused_args.m"
              }
#line 947 "unused_args.m"
            /* direct tailcall eliminated */
#line 947 "unused_args.m"
            {
#line 947 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__2__tmp_copy_2 = transform_hlds__unused_args__Vars_16;
#line 947 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0__tmp_copy_3 = transform_hlds__unused_args__STATE_VARIABLE_Changed_31_31;
#line 947 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_LocalVars_0__tmp_copy_5 = transform_hlds__unused_args__STATE_VARIABLE_LocalVars_30_30;

#line 947 "unused_args.m"
              (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5 = transform_hlds__unused_args__STATE_VARIABLE_LocalVars_0__tmp_copy_5;
#line 947 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_0_3 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0__tmp_copy_3;
#line 947 "unused_args.m"
              transform_hlds__unused_args__HeadVar__2_2 = transform_hlds__unused_args__HeadVar__2__tmp_copy_2;
#line 947 "unused_args.m"
            }
#line 947 "unused_args.m"
            continue;
#line 913 "unused_args.m"
          }
#line 912 "unused_args.m"
        break;
#line 912 "unused_args.m"
      }
#line 909 "unused_args.m"
  }
#line 909 "unused_args.m"
}

#line 881 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_single_pass_5_p_0(
#line 881 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 881 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_2,
#line 881 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_3,
#line 881 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4,
#line 881 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_5)
#line 881 "unused_args.m"
{
#line 884 "unused_args.m"
  while (MR_TRUE)
#line 884 "unused_args.m"
    {
#line 884 "unused_args.m"
      /* tailcall optimized into a loop */
#line 884 "unused_args.m"
      {
#line 884 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 884 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 884 "unused_args.m"
          {
#line 884 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_VarUsage_5 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4;
#line 884 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_Changed_3 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_2;
#line 884 "unused_args.m"
          }
#line 884 "unused_args.m"
        else
#line 885 "unused_args.m"
          {
#line 885 "unused_args.m"
            MR_Word transform_hlds__unused_args__TypeCtorInfo_20_38 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 885 "unused_args.m"
            MR_Word transform_hlds__unused_args__TypeInfo_21_39 = (MR_Word) &transform_hlds__unused_args_scalar_common_2[1];
#line 885 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredProcId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 885 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredProcIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 885 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_20_20;
#line 885 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_21_21;
#line 885 "unused_args.m"
            MR_Word transform_hlds__unused_args__LocalUsages0_31;
#line 885 "unused_args.m"
            MR_Word transform_hlds__unused_args__Vars_32;
#line 885 "unused_args.m"
            MR_Word transform_hlds__unused_args__LocalChanged_33;
#line 885 "unused_args.m"
            MR_Word transform_hlds__unused_args__LocalUsages_34;
#line 895 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv0_LocalUsages0_31;

#line 895 "unused_args.m"
            {
#line 895 "unused_args.m"
              mercury__map__lookup_3_p_0(transform_hlds__unused_args__TypeCtorInfo_20_38, transform_hlds__unused_args__TypeInfo_21_39, transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4, ((MR_Box) (transform_hlds__unused_args__PredProcId_12)), &transform_hlds__unused_args__conv0_LocalUsages0_31);
            }
#line 895 "unused_args.m"
            transform_hlds__unused_args__LocalUsages0_31 = ((MR_Word) transform_hlds__unused_args__conv0_LocalUsages0_31);
#line 896 "unused_args.m"
            {
#line 896 "unused_args.m"
              mercury__map__keys_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__LocalUsages0_31, &transform_hlds__unused_args__Vars_32);
            }
#line 897 "unused_args.m"
            {
#line 897 "unused_args.m"
              transform_hlds__unused_args__unused_args_check_all_vars_6_p_0(transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4, transform_hlds__unused_args__Vars_32, (MR_Integer) 0, &transform_hlds__unused_args__LocalChanged_33, transform_hlds__unused_args__LocalUsages0_31, &transform_hlds__unused_args__LocalUsages_34);
            }
#line 903 "unused_args.m"
#line 903 "unused_args.m"
            switch (transform_hlds__unused_args__LocalChanged_33) {
#line 903 "unused_args.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 903 "unused_args.m"
              case (MR_Integer) 0:
#line 904 "unused_args.m"
                {
#line 904 "unused_args.m"
                  transform_hlds__unused_args__STATE_VARIABLE_Changed_20_20 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_2;
#line 904 "unused_args.m"
                  transform_hlds__unused_args__STATE_VARIABLE_VarUsage_21_21 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4;
#line 904 "unused_args.m"
                }
#line 903 "unused_args.m"
                break;
#line 903 "unused_args.m"
              case (MR_Integer) 1:
#line 900 "unused_args.m"
                {
#line 901 "unused_args.m"
                  {
#line 901 "unused_args.m"
                    mercury__map__det_update_4_p_0(transform_hlds__unused_args__TypeCtorInfo_20_38, transform_hlds__unused_args__TypeInfo_21_39, ((MR_Box) (transform_hlds__unused_args__PredProcId_12)), ((MR_Box) (transform_hlds__unused_args__LocalUsages_34)), transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4, &transform_hlds__unused_args__STATE_VARIABLE_VarUsage_21_21);
                  }
#line 902 "unused_args.m"
                  transform_hlds__unused_args__STATE_VARIABLE_Changed_20_20 = (MR_Integer) 1;
#line 900 "unused_args.m"
                }
#line 903 "unused_args.m"
                break;
#line 903 "unused_args.m"
            }
#line 887 "unused_args.m"
            /* direct tailcall eliminated */
#line 887 "unused_args.m"
            {
#line 887 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__1__tmp_copy_1 = transform_hlds__unused_args__PredProcIds_13;
#line 887 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0__tmp_copy_2 = transform_hlds__unused_args__STATE_VARIABLE_Changed_20_20;
#line 887 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_4 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_21_21;

#line 887 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_4;
#line 887 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_0_2 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0__tmp_copy_2;
#line 887 "unused_args.m"
              transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__HeadVar__1__tmp_copy_1;
#line 887 "unused_args.m"
            }
#line 887 "unused_args.m"
            continue;
#line 885 "unused_args.m"
          }
#line 884 "unused_args.m"
      }
#line 884 "unused_args.m"
      break;
#line 884 "unused_args.m"
    }
#line 881 "unused_args.m"
}

#line 847 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(
#line 847 "unused_args.m"
  MR_Word transform_hlds__unused_args__Info_1,
#line 847 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 847 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3,
#line 847 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_4)
#line 847 "unused_args.m"
{
#line 850 "unused_args.m"
  while (MR_TRUE)
#line 850 "unused_args.m"
    {
#line 850 "unused_args.m"
      /* tailcall optimized into a loop */
#line 850 "unused_args.m"
      {
#line 850 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 850 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 850 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_VarDep_4 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3;
#line 850 "unused_args.m"
        else
#line 851 "unused_args.m"
          {
#line 851 "unused_args.m"
            MR_Word transform_hlds__unused_args__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 851 "unused_args.m"
            MR_Word transform_hlds__unused_args__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 851 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_15_15;

#line 852 "unused_args.m"
            {
#line 852 "unused_args.m"
              transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(transform_hlds__unused_args__Info_1, transform_hlds__unused_args__Goal_10, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_15_15);
            }
#line 853 "unused_args.m"
            /* direct tailcall eliminated */
#line 853 "unused_args.m"
            {
#line 853 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__2__tmp_copy_2 = transform_hlds__unused_args__Goals_11;
#line 853 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_3 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_15_15;

#line 853 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_3;
#line 853 "unused_args.m"
              transform_hlds__unused_args__HeadVar__2_2 = transform_hlds__unused_args__HeadVar__2__tmp_copy_2;
#line 853 "unused_args.m"
            }
#line 853 "unused_args.m"
            continue;
#line 851 "unused_args.m"
          }
#line 850 "unused_args.m"
      }
#line 850 "unused_args.m"
      break;
#line 850 "unused_args.m"
    }
#line 847 "unused_args.m"
}

#line 841 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__list_case_to_list_goal_2_p_0(
#line 841 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 841 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2)
#line 841 "unused_args.m"
{
#line 843 "unused_args.m"
  {
#line 843 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 843 "unused_args.m"
    if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 843 "unused_args.m"
      *transform_hlds__unused_args__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 843 "unused_args.m"
    else
#line 844 "unused_args.m"
      {
#line 844 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal_5;
#line 844 "unused_args.m"
        MR_Word transform_hlds__unused_args__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 844 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goals_7;
#line 844 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 844 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_8_8, (MR_Integer) 0)));
#line 844 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_8_8, (MR_Integer) 1)));

#line 844 "unused_args.m"
        transform_hlds__unused_args__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_8_8, (MR_Integer) 2)));
#line 845 "unused_args.m"
        {
#line 845 "unused_args.m"
          transform_hlds__unused_args__list_case_to_list_goal_2_p_0(transform_hlds__unused_args__Cases_6, &transform_hlds__unused_args__Goals_7);
        }
#line 844 "unused_args.m"
        {
#line 844 "unused_args.m"
          MR_Word base;
#line 844 "unused_args.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 844 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__2_2 = base;
#line 844 "unused_args.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__Goal_5));
#line 844 "unused_args.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__Goals_7));
#line 844 "unused_args.m"
        }
#line 844 "unused_args.m"
      }
#line 843 "unused_args.m"
  }
#line 841 "unused_args.m"
}

#line 826 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_construction_aliases_4_p_0(
#line 826 "unused_args.m"
  MR_Word transform_hlds__unused_args__Alias_1,
#line 826 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 826 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3,
#line 826 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_4)
#line 826 "unused_args.m"
{
#line 829 "unused_args.m"
  while (MR_TRUE)
#line 829 "unused_args.m"
    {
#line 829 "unused_args.m"
      /* tailcall optimized into a loop */
#line 829 "unused_args.m"
      {
#line 829 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 829 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 829 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_VarDep_4 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3;
#line 829 "unused_args.m"
        else
#line 830 "unused_args.m"
          {
#line 830 "unused_args.m"
            MR_Word transform_hlds__unused_args__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 830 "unused_args.m"
            MR_Word transform_hlds__unused_args__Vars_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 830 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_19_19;
#line 836 "unused_args.m"
            MR_Word transform_hlds__unused_args__VarInfo0_13;
#line 593 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv0_VarInfo0_13;

#line 593 "unused_args.m"
            {
#line 593 "unused_args.m"
              transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3, ((MR_Box) (transform_hlds__unused_args__Var_10)), &transform_hlds__unused_args__conv0_VarInfo0_13);
            }
#line 593 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 593 "unused_args.m"
              {
#line 593 "unused_args.m"
                transform_hlds__unused_args__VarInfo0_13 = ((MR_Word) transform_hlds__unused_args__conv0_VarInfo0_13);
#line 593 "unused_args.m"
                transform_hlds__unused_args__succeeded = MR_TRUE;
#line 593 "unused_args.m"
              }
#line 836 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 832 "unused_args.m"
              {
#line 832 "unused_args.m"
                MR_Word transform_hlds__unused_args__TypeInfo_21_21 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 832 "unused_args.m"
                MR_Word transform_hlds__unused_args__VarDep_12;
#line 832 "unused_args.m"
                MR_Word transform_hlds__unused_args__VarDep0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInfo0_13, (MR_Integer) 0)));
#line 832 "unused_args.m"
                MR_Word transform_hlds__unused_args__ArgDep_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInfo0_13, (MR_Integer) 1)));
#line 832 "unused_args.m"
                MR_Word transform_hlds__unused_args__VarInfo_16;

#line 833 "unused_args.m"
                {
#line 833 "unused_args.m"
                  mercury__set__insert_3_p_0(transform_hlds__unused_args__TypeInfo_21_21, ((MR_Box) (transform_hlds__unused_args__Alias_1)), transform_hlds__unused_args__VarDep0_14, &transform_hlds__unused_args__VarDep_12);
                }
#line 834 "unused_args.m"
                {
#line 834 "unused_args.m"
                  transform_hlds__unused_args__VarInfo_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 834 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInfo_16, 0) = ((MR_Box) (transform_hlds__unused_args__VarDep_12));
#line 834 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInfo_16, 1) = ((MR_Box) (transform_hlds__unused_args__ArgDep_15));
#line 834 "unused_args.m"
                }
#line 835 "unused_args.m"
                {
#line 835 "unused_args.m"
                  mercury__map__set_4_p_0(transform_hlds__unused_args__TypeInfo_21_21, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, ((MR_Box) (transform_hlds__unused_args__Var_10)), ((MR_Box) (transform_hlds__unused_args__VarInfo_16)), transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_19_19);
                }
#line 832 "unused_args.m"
              }
#line 836 "unused_args.m"
            else
#line 836 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarDep_19_19 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3;
#line 839 "unused_args.m"
            /* direct tailcall eliminated */
#line 839 "unused_args.m"
            {
#line 839 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__2__tmp_copy_2 = transform_hlds__unused_args__Vars_11;
#line 839 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_3 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_19_19;

#line 839 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_3;
#line 839 "unused_args.m"
              transform_hlds__unused_args__HeadVar__2_2 = transform_hlds__unused_args__HeadVar__2__tmp_copy_2;
#line 839 "unused_args.m"
            }
#line 839 "unused_args.m"
            continue;
#line 830 "unused_args.m"
          }
#line 829 "unused_args.m"
      }
#line 829 "unused_args.m"
      break;
#line 829 "unused_args.m"
    }
#line 826 "unused_args.m"
}

#line 776 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__partition_deconstruct_args_5_p_0(
#line 776 "unused_args.m"
  MR_Word transform_hlds__unused_args__Info_6,
#line 776 "unused_args.m"
  MR_Word transform_hlds__unused_args__ArgVars_7,
#line 776 "unused_args.m"
  MR_Word transform_hlds__unused_args__ArgModes_8,
#line 776 "unused_args.m"
  MR_Word * transform_hlds__unused_args__InputVars_9,
#line 776 "unused_args.m"
  MR_Word * transform_hlds__unused_args__OutputVars_10)
#line 776 "unused_args.m"
{
#line 781 "unused_args.m"
  {
#line 781 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 781 "unused_args.m"
    if ((transform_hlds__unused_args__ArgVars_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 781 "unused_args.m"
      if ((transform_hlds__unused_args__ArgModes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 781 "unused_args.m"
        {
#line 783 "unused_args.m"
          *transform_hlds__unused_args__InputVars_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 784 "unused_args.m"
          *transform_hlds__unused_args__OutputVars_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 781 "unused_args.m"
        }
#line 781 "unused_args.m"
      else
#line 786 "unused_args.m"
        {
#line 788 "unused_args.m"
          {
#line 788 "unused_args.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.partition_deconstruct_args\'/5", (MR_String) "mismatched lists");
#line 788 "unused_args.m"
            return;
          }
#line 786 "unused_args.m"
        }
#line 781 "unused_args.m"
    else
#line 781 "unused_args.m"
      {
#line 781 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__ArgVars_7, (MR_Integer) 1)));
#line 781 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__ArgVars_7, (MR_Integer) 0)));

#line 781 "unused_args.m"
        if ((transform_hlds__unused_args__ArgModes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 790 "unused_args.m"
          {
#line 792 "unused_args.m"
            {
#line 792 "unused_args.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.partition_deconstruct_args\'/5", (MR_String) "mismatched lists");
#line 792 "unused_args.m"
              return;
            }
#line 790 "unused_args.m"
          }
#line 781 "unused_args.m"
        else
#line 794 "unused_args.m"
          {
#line 794 "unused_args.m"
            MR_Word transform_hlds__unused_args__Mode_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__ArgModes_8, (MR_Integer) 0)));
#line 794 "unused_args.m"
            MR_Word transform_hlds__unused_args__Modes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__ArgModes_8, (MR_Integer) 1)));
#line 794 "unused_args.m"
            MR_Word transform_hlds__unused_args__InputVars1_19;
#line 794 "unused_args.m"
            MR_Word transform_hlds__unused_args__OutputVars1_20;
#line 794 "unused_args.m"
            MR_Word transform_hlds__unused_args__InitialInst1_21;
#line 794 "unused_args.m"
            MR_Word transform_hlds__unused_args__InitialInst2_22;
#line 794 "unused_args.m"
            MR_Word transform_hlds__unused_args__FinalInst1_23;
#line 794 "unused_args.m"
            MR_Word transform_hlds__unused_args__FinalInst2_24;
#line 794 "unused_args.m"
            MR_Word transform_hlds__unused_args__Type_25;
#line 794 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_26_26;
#line 794 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_27_27;
#line 794 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_28_28;
#line 799 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_37_37;
#line 804 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_29_29;
#line 804 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_38_38;
#line 815 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_30_30;
#line 815 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_39_39;

#line 796 "unused_args.m"
            {
#line 796 "unused_args.m"
              transform_hlds__unused_args__partition_deconstruct_args_5_p_0(transform_hlds__unused_args__Info_6, transform_hlds__unused_args__V_40_40, transform_hlds__unused_args__Modes_18, &transform_hlds__unused_args__InputVars1_19, &transform_hlds__unused_args__OutputVars1_20);
            }
#line 797 "unused_args.m"
            transform_hlds__unused_args__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Mode_17, (MR_Integer) 0)));
#line 797 "unused_args.m"
            transform_hlds__unused_args__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Mode_17, (MR_Integer) 1)));
#line 797 "unused_args.m"
            transform_hlds__unused_args__InitialInst1_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_26_26, (MR_Integer) 0)));
#line 797 "unused_args.m"
            transform_hlds__unused_args__InitialInst2_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_26_26, (MR_Integer) 1)));
#line 797 "unused_args.m"
            transform_hlds__unused_args__FinalInst1_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_27_27, (MR_Integer) 0)));
#line 797 "unused_args.m"
            transform_hlds__unused_args__FinalInst2_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_27_27, (MR_Integer) 1)));
#line 799 "unused_args.m"
            transform_hlds__unused_args__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_6, (MR_Integer) 0)));
#line 799 "unused_args.m"
            transform_hlds__unused_args__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_6, (MR_Integer) 1)));
#line 799 "unused_args.m"
            {
#line 799 "unused_args.m"
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__unused_args__V_28_28, transform_hlds__unused_args__V_41_41, &transform_hlds__unused_args__Type_25);
            }
#line 804 "unused_args.m"
            transform_hlds__unused_args__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_6, (MR_Integer) 0)));
#line 804 "unused_args.m"
            transform_hlds__unused_args__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_6, (MR_Integer) 1)));
#line 804 "unused_args.m"
            {
#line 804 "unused_args.m"
              transform_hlds__unused_args__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(transform_hlds__unused_args__InitialInst1_21, transform_hlds__unused_args__FinalInst1_23, transform_hlds__unused_args__Type_25, transform_hlds__unused_args__V_29_29);
            }
#line 808 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 807 "unused_args.m"
              *transform_hlds__unused_args__InputVars_9 = transform_hlds__unused_args__InputVars1_19;
#line 808 "unused_args.m"
            else
#line 809 "unused_args.m"
              {
#line 809 "unused_args.m"
                MR_Word base;
#line 809 "unused_args.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 809 "unused_args.m"
                *transform_hlds__unused_args__InputVars_9 = base;
#line 809 "unused_args.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__V_41_41));
#line 809 "unused_args.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__InputVars1_19));
#line 809 "unused_args.m"
              }
#line 815 "unused_args.m"
            transform_hlds__unused_args__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_6, (MR_Integer) 0)));
#line 815 "unused_args.m"
            transform_hlds__unused_args__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_6, (MR_Integer) 1)));
#line 815 "unused_args.m"
            {
#line 815 "unused_args.m"
              transform_hlds__unused_args__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(transform_hlds__unused_args__InitialInst2_22, transform_hlds__unused_args__FinalInst2_24, transform_hlds__unused_args__Type_25, transform_hlds__unused_args__V_30_30);
            }
#line 819 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 818 "unused_args.m"
              *transform_hlds__unused_args__OutputVars_10 = transform_hlds__unused_args__OutputVars1_20;
#line 819 "unused_args.m"
            else
#line 820 "unused_args.m"
              {
#line 820 "unused_args.m"
                MR_Word base;
#line 820 "unused_args.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "unused_args.m"
                *transform_hlds__unused_args__OutputVars_10 = base;
#line 820 "unused_args.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__V_41_41));
#line 820 "unused_args.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__OutputVars1_20));
#line 820 "unused_args.m"
              }
#line 794 "unused_args.m"
          }
#line 781 "unused_args.m"
      }
#line 781 "unused_args.m"
  }
#line 776 "unused_args.m"
}

#line 767 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_rev_arg_dep_5_p_0(
#line 767 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_6,
#line 767 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcId_7,
#line 767 "unused_args.m"
  MR_Word transform_hlds__unused_args__Arg_8,
#line 767 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_10,
#line 767 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_11)
#line 767 "unused_args.m"
{
#line 763 "unused_args.m"
  {
#line 763 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 763 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarUsage0_19;
#line 593 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv0_VarUsage0_19;

#line 593 "unused_args.m"
    {
#line 593 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_10, ((MR_Box) (transform_hlds__unused_args__Arg_8)), &transform_hlds__unused_args__conv0_VarUsage0_19);
    }
#line 593 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 593 "unused_args.m"
      {
#line 593 "unused_args.m"
        transform_hlds__unused_args__VarUsage0_19 = ((MR_Word) transform_hlds__unused_args__conv0_VarUsage0_19);
#line 593 "unused_args.m"
        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 593 "unused_args.m"
      }
#line 763 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 759 "unused_args.m"
      {
#line 759 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarDep_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage0_19, (MR_Integer) 0)));
#line 759 "unused_args.m"
        MR_Word transform_hlds__unused_args__ArgDep0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage0_19, (MR_Integer) 1)));
#line 759 "unused_args.m"
        MR_Word transform_hlds__unused_args__ArgDep_21;
#line 759 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarUsage_22;
#line 759 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_23_23;

#line 760 "unused_args.m"
        {
#line 760 "unused_args.m"
          transform_hlds__unused_args__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 760 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_23_23, 0) = ((MR_Box) (transform_hlds__unused_args__PredProcId_7));
#line 760 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_23_23, 1) = ((MR_Box) (transform_hlds__unused_args__Var_6));
#line 760 "unused_args.m"
        }
#line 760 "unused_args.m"
        {
#line 760 "unused_args.m"
          mercury__set__insert_3_p_0((MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0, ((MR_Box) (transform_hlds__unused_args__V_23_23)), transform_hlds__unused_args__ArgDep0_20, &transform_hlds__unused_args__ArgDep_21);
        }
#line 761 "unused_args.m"
        {
#line 761 "unused_args.m"
          transform_hlds__unused_args__VarUsage_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 761 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage_22, 0) = ((MR_Box) (transform_hlds__unused_args__VarDep_18));
#line 761 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage_22, 1) = ((MR_Box) (transform_hlds__unused_args__ArgDep_21));
#line 761 "unused_args.m"
        }
#line 762 "unused_args.m"
        {
#line 762 "unused_args.m"
          mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, ((MR_Box) (transform_hlds__unused_args__Arg_8)), ((MR_Box) (transform_hlds__unused_args__VarUsage_22)), transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_10, transform_hlds__unused_args__STATE_VARIABLE_VarDep_11);
        }
#line 759 "unused_args.m"
      }
#line 763 "unused_args.m"
    else
#line 763 "unused_args.m"
      *transform_hlds__unused_args__STATE_VARIABLE_VarDep_11 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_10;
#line 763 "unused_args.m"
  }
#line 767 "unused_args.m"
}

#line 732 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_pred_call_arg_dep_5_p_0(
#line 732 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcId_6,
#line 732 "unused_args.m"
  MR_Word transform_hlds__unused_args__LocalArguments_7,
#line 732 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVarIds_8,
#line 732 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_18,
#line 732 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_19)
#line 732 "unused_args.m"
{
#line 737 "unused_args.m"
  while (MR_TRUE)
#line 737 "unused_args.m"
    {
#line 737 "unused_args.m"
      /* tailcall optimized into a loop */
#line 737 "unused_args.m"
      {
#line 737 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 737 "unused_args.m"
        if ((transform_hlds__unused_args__LocalArguments_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 737 "unused_args.m"
          if ((transform_hlds__unused_args__HeadVarIds_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 737 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_VarDep_19 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_18;
#line 737 "unused_args.m"
          else
#line 740 "unused_args.m"
            {
#line 742 "unused_args.m"
              {
#line 742 "unused_args.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.add_pred_call_arg_dep\'/5", (MR_String) "invalid call");
#line 742 "unused_args.m"
                return;
              }
#line 740 "unused_args.m"
            }
#line 737 "unused_args.m"
        else
#line 737 "unused_args.m"
          {
#line 737 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__LocalArguments_7, (MR_Integer) 1)));
#line 737 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__LocalArguments_7, (MR_Integer) 0)));

#line 737 "unused_args.m"
            if ((transform_hlds__unused_args__HeadVarIds_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 744 "unused_args.m"
              {
#line 746 "unused_args.m"
                {
#line 746 "unused_args.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.add_pred_call_arg_dep\'/5", (MR_String) "invalid call");
#line 746 "unused_args.m"
                  return;
                }
#line 744 "unused_args.m"
              }
#line 737 "unused_args.m"
            else
#line 748 "unused_args.m"
              {
#line 748 "unused_args.m"
                MR_Word transform_hlds__unused_args__HeadVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVarIds_8, (MR_Integer) 0)));
#line 748 "unused_args.m"
                MR_Word transform_hlds__unused_args__HeadVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVarIds_8, (MR_Integer) 1)));
#line 748 "unused_args.m"
                MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_20_20;
#line 763 "unused_args.m"
                MR_Word transform_hlds__unused_args__VarUsage0_36;
#line 593 "unused_args.m"
                MR_Box transform_hlds__unused_args__conv0_VarUsage0_36;

#line 593 "unused_args.m"
                {
#line 593 "unused_args.m"
                  transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_18, ((MR_Box) (transform_hlds__unused_args__V_29_29)), &transform_hlds__unused_args__conv0_VarUsage0_36);
                }
#line 593 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 593 "unused_args.m"
                  {
#line 593 "unused_args.m"
                    transform_hlds__unused_args__VarUsage0_36 = ((MR_Word) transform_hlds__unused_args__conv0_VarUsage0_36);
#line 593 "unused_args.m"
                    transform_hlds__unused_args__succeeded = MR_TRUE;
#line 593 "unused_args.m"
                  }
#line 763 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 759 "unused_args.m"
                  {
#line 759 "unused_args.m"
                    MR_Word transform_hlds__unused_args__VarDep_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage0_36, (MR_Integer) 0)));
#line 759 "unused_args.m"
                    MR_Word transform_hlds__unused_args__ArgDep0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage0_36, (MR_Integer) 1)));
#line 759 "unused_args.m"
                    MR_Word transform_hlds__unused_args__ArgDep_38;
#line 759 "unused_args.m"
                    MR_Word transform_hlds__unused_args__VarUsage_39;
#line 759 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_40_40;

#line 760 "unused_args.m"
                    {
#line 760 "unused_args.m"
                      transform_hlds__unused_args__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 760 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_40_40, 0) = ((MR_Box) (transform_hlds__unused_args__PredProcId_6));
#line 760 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_40_40, 1) = ((MR_Box) (transform_hlds__unused_args__HeadVar_16));
#line 760 "unused_args.m"
                    }
#line 760 "unused_args.m"
                    {
#line 760 "unused_args.m"
                      mercury__set__insert_3_p_0((MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0, ((MR_Box) (transform_hlds__unused_args__V_40_40)), transform_hlds__unused_args__ArgDep0_37, &transform_hlds__unused_args__ArgDep_38);
                    }
#line 761 "unused_args.m"
                    {
#line 761 "unused_args.m"
                      transform_hlds__unused_args__VarUsage_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 761 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage_39, 0) = ((MR_Box) (transform_hlds__unused_args__VarDep_35));
#line 761 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage_39, 1) = ((MR_Box) (transform_hlds__unused_args__ArgDep_38));
#line 761 "unused_args.m"
                    }
#line 762 "unused_args.m"
                    {
#line 762 "unused_args.m"
                      mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, ((MR_Box) (transform_hlds__unused_args__V_29_29)), ((MR_Box) (transform_hlds__unused_args__VarUsage_39)), transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_18, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_20_20);
                    }
#line 759 "unused_args.m"
                  }
#line 763 "unused_args.m"
                else
#line 763 "unused_args.m"
                  transform_hlds__unused_args__STATE_VARIABLE_VarDep_20_20 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_18;
#line 751 "unused_args.m"
                /* direct tailcall eliminated */
#line 751 "unused_args.m"
                {
#line 751 "unused_args.m"
                  MR_Word transform_hlds__unused_args__LocalArguments__tmp_copy_7 = transform_hlds__unused_args__V_28_28;
#line 751 "unused_args.m"
                  MR_Word transform_hlds__unused_args__HeadVarIds__tmp_copy_8 = transform_hlds__unused_args__HeadVars_17;
#line 751 "unused_args.m"
                  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_18 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_20_20;

#line 751 "unused_args.m"
                  transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_18 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_18;
#line 751 "unused_args.m"
                  transform_hlds__unused_args__HeadVarIds_8 = transform_hlds__unused_args__HeadVarIds__tmp_copy_8;
#line 751 "unused_args.m"
                  transform_hlds__unused_args__LocalArguments_7 = transform_hlds__unused_args__LocalArguments__tmp_copy_7;
#line 751 "unused_args.m"
                }
#line 751 "unused_args.m"
                continue;
#line 748 "unused_args.m"
              }
#line 737 "unused_args.m"
          }
#line 737 "unused_args.m"
      }
#line 737 "unused_args.m"
      break;
#line 737 "unused_args.m"
    }
#line 732 "unused_args.m"
}

#line 683 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_3(
#line 683 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg)
#line 683 "unused_args.m"
{
#line 683 "unused_args.m"
  {
#line 683 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 683 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;

#line 683 "unused_args.m"
    {
#line 683 "unused_args.m"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__683__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))));
    }
#line 683 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 683 "unused_args.m"
  }
#line 683 "unused_args.m"
}

#line 701 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_2(
#line 701 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg)
#line 701 "unused_args.m"
{
#line 701 "unused_args.m"
  {
#line 701 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 701 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;

#line 701 "unused_args.m"
    {
#line 701 "unused_args.m"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__701__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))));
    }
#line 701 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 701 "unused_args.m"
  }
#line 701 "unused_args.m"
}

#line 660 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_1(
#line 660 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 660 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 660 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2)
#line 660 "unused_args.m"
{
#line 660 "unused_args.m"
  {
#line 660 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 660 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 660 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_LambdaHeadVar__2_117;

#line 660 "unused_args.m"
    {
#line 660 "unused_args.m"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__660__1_2_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), &transform_hlds__unused_args__conv0_LambdaHeadVar__2_117);
    }
#line 660 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 660 "unused_args.m"
      {
#line 660 "unused_args.m"
        *transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv0_LambdaHeadVar__2_117));
#line 660 "unused_args.m"
        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 660 "unused_args.m"
      }
#line 660 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 660 "unused_args.m"
  }
#line 660 "unused_args.m"
}

#line 606 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(
#line 606 "unused_args.m"
  MR_Word transform_hlds__unused_args__Info_5,
#line 606 "unused_args.m"
  MR_Word transform_hlds__unused_args__Goal_6,
#line 606 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87,
#line 606 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_88)
#line 606 "unused_args.m"
{
#line 609 "unused_args.m"
  while (MR_TRUE)
#line 609 "unused_args.m"
    {
#line 609 "unused_args.m"
      /* tailcall optimized into a loop */
#line 609 "unused_args.m"
      {
#line 609 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;
#line 609 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_6, (MR_Integer) 0)));
#line 610 "unused_args.m"
        MR_Word transform_hlds__unused_args___GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_6, (MR_Integer) 1)));

#line 614 "unused_args.m"
#line 614 "unused_args.m"
        switch (MR_tag((MR_Word) transform_hlds__unused_args__GoalExpr_8)) {
#line 614 "unused_args.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 614 "unused_args.m"
          case (MR_Integer) 0:
#line 634 "unused_args.m"
            {
#line 634 "unused_args.m"
              MR_Word transform_hlds__unused_args__SubGoal_28 = (MR_Word) MR_body(((MR_Word) transform_hlds__unused_args__GoalExpr_8), (MR_Integer) 0);

#line 635 "unused_args.m"
              /* direct tailcall eliminated */
#line 635 "unused_args.m"
              {
#line 635 "unused_args.m"
                MR_Word transform_hlds__unused_args__Goal__tmp_copy_6 = transform_hlds__unused_args__SubGoal_28;

#line 635 "unused_args.m"
                transform_hlds__unused_args__Goal_6 = transform_hlds__unused_args__Goal__tmp_copy_6;
#line 635 "unused_args.m"
              }
#line 635 "unused_args.m"
              continue;
#line 634 "unused_args.m"
            }
#line 614 "unused_args.m"
            break;
#line 614 "unused_args.m"
          case (MR_Integer) 1:
#line 667 "unused_args.m"
            {
#line 667 "unused_args.m"
              MR_Word transform_hlds__unused_args__LHS_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 0)));
#line 667 "unused_args.m"
              MR_Word transform_hlds__unused_args__RHS_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));
#line 667 "unused_args.m"
              MR_Word transform_hlds__unused_args__Unify_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 3)));
#line 667 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));
#line 667 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 4)));

#line 672 "unused_args.m"
#line 672 "unused_args.m"
              switch (MR_tag((MR_Word) transform_hlds__unused_args__Unify_52)) {
#line 672 "unused_args.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 672 "unused_args.m"
                case (MR_Integer) 0:
#line 700 "unused_args.m"
                  {
#line 700 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_97_97;
#line 700 "unused_args.m"
                    MR_Word transform_hlds__unused_args__Args_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_52, (MR_Integer) 2)));
#line 700 "unused_args.m"
                    MR_Word transform_hlds__unused_args__CellVar_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_52, (MR_Integer) 0)));
#line 700 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_52, (MR_Integer) 1)));
#line 700 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_52, (MR_Integer) 3)));
#line 700 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_52, (MR_Integer) 4)));
#line 700 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_52, (MR_Integer) 5)));
#line 700 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_52, (MR_Integer) 6)));

#line 701 "unused_args.m"
                    {
#line 701 "unused_args.m"
                      transform_hlds__unused_args__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 701 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_97_97, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[3]));
#line 701 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_97_97, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_2));
#line 701 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_97_97, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 701 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_97_97, 3) = ((MR_Box) (transform_hlds__unused_args__LHS_49));
#line 701 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_97_97, 4) = ((MR_Box) (transform_hlds__unused_args__CellVar_144));
#line 701 "unused_args.m"
                    }
#line 701 "unused_args.m"
                    {
#line 701 "unused_args.m"
                      mercury__require__expect_4_p_0(transform_hlds__unused_args__V_97_97, (MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.unused_args_traverse_goal\'/4", (MR_String) "LHS != CellVar");
                    }
#line 702 "unused_args.m"
                    {
#line 702 "unused_args.m"
                      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__local_var_is_used_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__CellVar_144);
                    }
#line 704 "unused_args.m"
                    if (transform_hlds__unused_args__succeeded)
#line 703 "unused_args.m"
                      {
#line 703 "unused_args.m"
                        transform_hlds__unused_args__set_list_vars_used_3_p_0(transform_hlds__unused_args__Args_143, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
                      }
#line 704 "unused_args.m"
                    else
#line 705 "unused_args.m"
                      {
#line 705 "unused_args.m"
                        transform_hlds__unused_args__add_construction_aliases_4_p_0(transform_hlds__unused_args__CellVar_144, transform_hlds__unused_args__Args_143, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
                      }
#line 700 "unused_args.m"
                  }
#line 672 "unused_args.m"
                  break;
#line 672 "unused_args.m"
                case (MR_Integer) 1:
#line 682 "unused_args.m"
                  {
#line 682 "unused_args.m"
                    MR_Word transform_hlds__unused_args__CellVar_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_52, (MR_Integer) 0)));
#line 682 "unused_args.m"
                    MR_Word transform_hlds__unused_args__Modes_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_52, (MR_Integer) 3)));
#line 682 "unused_args.m"
                    MR_Word transform_hlds__unused_args__CanFail_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_52, (MR_Integer) 4)));
#line 682 "unused_args.m"
                    MR_Word transform_hlds__unused_args__InputVars_63;
#line 682 "unused_args.m"
                    MR_Word transform_hlds__unused_args__OutputVars_64;
#line 682 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_103_103;
#line 682 "unused_args.m"
                    MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_107_107;
#line 682 "unused_args.m"
                    MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_108_108;
#line 682 "unused_args.m"
                    MR_Word transform_hlds__unused_args__Args_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_52, (MR_Integer) 2)));
#line 682 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_52, (MR_Integer) 1)));
#line 682 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_52, (MR_Integer) 5)));

#line 683 "unused_args.m"
                    {
#line 683 "unused_args.m"
                      transform_hlds__unused_args__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 683 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_103_103, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[3]));
#line 683 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_103_103, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_3));
#line 683 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_103_103, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 683 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_103_103, 3) = ((MR_Box) (transform_hlds__unused_args__LHS_49));
#line 683 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_103_103, 4) = ((MR_Box) (transform_hlds__unused_args__CellVar_58));
#line 683 "unused_args.m"
                    }
#line 683 "unused_args.m"
                    {
#line 683 "unused_args.m"
                      mercury__require__expect_4_p_0(transform_hlds__unused_args__V_103_103, (MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.unused_args_traverse_goal\'/4", (MR_String) "LHS != CellVar");
                    }
#line 684 "unused_args.m"
                    {
#line 684 "unused_args.m"
                      transform_hlds__unused_args__partition_deconstruct_args_5_p_0(transform_hlds__unused_args__Info_5, transform_hlds__unused_args__Args_142, transform_hlds__unused_args__Modes_60, &transform_hlds__unused_args__InputVars_63, &transform_hlds__unused_args__OutputVars_64);
                    }
#line 688 "unused_args.m"
                    {
#line 688 "unused_args.m"
                      transform_hlds__unused_args__add_aliases_4_p_0(transform_hlds__unused_args__CellVar_58, transform_hlds__unused_args__OutputVars_64, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_107_107);
                    }
#line 691 "unused_args.m"
                    {
#line 691 "unused_args.m"
                      transform_hlds__unused_args__add_construction_aliases_4_p_0(transform_hlds__unused_args__CellVar_58, transform_hlds__unused_args__InputVars_63, transform_hlds__unused_args__STATE_VARIABLE_VarDep_107_107, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_108_108);
                    }
#line 696 "unused_args.m"
#line 696 "unused_args.m"
                    switch (transform_hlds__unused_args__CanFail_61) {
#line 696 "unused_args.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 696 "unused_args.m"
                      case (MR_Integer) 0:
#line 695 "unused_args.m"
                        {
#line 695 "unused_args.m"
                          transform_hlds__unused_args__set_var_used_3_p_0(transform_hlds__unused_args__CellVar_58, transform_hlds__unused_args__STATE_VARIABLE_VarDep_108_108, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
                        }
#line 696 "unused_args.m"
                        break;
#line 696 "unused_args.m"
                      case (MR_Integer) 1:
#line 697 "unused_args.m"
                        *transform_hlds__unused_args__STATE_VARIABLE_VarDep_88 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_108_108;
#line 696 "unused_args.m"
                        break;
#line 696 "unused_args.m"
                    }
#line 682 "unused_args.m"
                  }
#line 672 "unused_args.m"
                  break;
#line 672 "unused_args.m"
                case (MR_Integer) 2:
#line 673 "unused_args.m"
                  {
#line 673 "unused_args.m"
                    MR_Word transform_hlds__unused_args__Target_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Unify_52, (MR_Integer) 0)));
#line 673 "unused_args.m"
                    MR_Word transform_hlds__unused_args__Source_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Unify_52, (MR_Integer) 1)));

#line 674 "unused_args.m"
                    {
#line 674 "unused_args.m"
                      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__local_var_is_used_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__Target_56);
                    }
#line 678 "unused_args.m"
                    if (transform_hlds__unused_args__succeeded)
#line 677 "unused_args.m"
                      {
#line 677 "unused_args.m"
                        transform_hlds__unused_args__set_var_used_3_p_0(transform_hlds__unused_args__Source_57, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
                      }
#line 678 "unused_args.m"
                    else
#line 679 "unused_args.m"
                      {
#line 679 "unused_args.m"
                        MR_Word transform_hlds__unused_args__V_111_111;

#line 679 "unused_args.m"
                        {
#line 679 "unused_args.m"
                          transform_hlds__unused_args__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 679 "unused_args.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_111_111, 0) = ((MR_Box) (transform_hlds__unused_args__Target_56));
#line 679 "unused_args.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 679 "unused_args.m"
                        }
#line 679 "unused_args.m"
                        {
#line 679 "unused_args.m"
                          transform_hlds__unused_args__add_aliases_4_p_0(transform_hlds__unused_args__Source_57, transform_hlds__unused_args__V_111_111, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
                        }
#line 679 "unused_args.m"
                      }
#line 673 "unused_args.m"
                  }
#line 672 "unused_args.m"
                  break;
#line 672 "unused_args.m"
                case (MR_Integer) 3:
#line 672 "unused_args.m"
#line 672 "unused_args.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Unify_52, (MR_Integer) 0)))) {
#line 672 "unused_args.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 672 "unused_args.m"
                    case (MR_Integer) 0:
#line 669 "unused_args.m"
                      {
#line 669 "unused_args.m"
                        MR_Word transform_hlds__unused_args__Var1_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Unify_52, (MR_Integer) 1)));
#line 669 "unused_args.m"
                        MR_Word transform_hlds__unused_args__Var2_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Unify_52, (MR_Integer) 2)));
#line 669 "unused_args.m"
                        MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_114_114;

#line 670 "unused_args.m"
                        {
#line 670 "unused_args.m"
                          transform_hlds__unused_args__set_var_used_3_p_0(transform_hlds__unused_args__Var1_54, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_114_114);
                        }
#line 671 "unused_args.m"
                        {
#line 671 "unused_args.m"
                          transform_hlds__unused_args__set_var_used_3_p_0(transform_hlds__unused_args__Var2_55, transform_hlds__unused_args__STATE_VARIABLE_VarDep_114_114, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
                        }
#line 669 "unused_args.m"
                      }
#line 672 "unused_args.m"
                      break;
#line 672 "unused_args.m"
                    case (MR_Integer) 1:
#line 716 "unused_args.m"
#line 716 "unused_args.m"
                      switch (MR_tag((MR_Word) transform_hlds__unused_args__RHS_50)) {
#line 716 "unused_args.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 716 "unused_args.m"
                        case (MR_Integer) 0:
#line 713 "unused_args.m"
                          {
#line 713 "unused_args.m"
                            MR_Word transform_hlds__unused_args__RHSVar_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__RHS_50, (MR_Integer) 0)));
#line 713 "unused_args.m"
                            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_95_95;

#line 714 "unused_args.m"
                            {
#line 714 "unused_args.m"
                              transform_hlds__unused_args__set_var_used_3_p_0(transform_hlds__unused_args__RHSVar_73, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_95_95);
                            }
#line 715 "unused_args.m"
                            {
#line 715 "unused_args.m"
                              transform_hlds__unused_args__set_var_used_3_p_0(transform_hlds__unused_args__LHS_49, transform_hlds__unused_args__STATE_VARIABLE_VarDep_95_95, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
                            }
#line 713 "unused_args.m"
                          }
#line 716 "unused_args.m"
                          break;
#line 716 "unused_args.m"
                        case (MR_Integer) 1:
#line 716 "unused_args.m"
                        case (MR_Integer) 2:
#line 719 "unused_args.m"
                          {
#line 720 "unused_args.m"
                            {
#line 720 "unused_args.m"
                              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.unused_args_traverse_goal\'/4", (MR_String) "complicated unifications should only be var-var");
#line 720 "unused_args.m"
                              return;
                            }
#line 719 "unused_args.m"
                          }
#line 716 "unused_args.m"
                          break;
#line 716 "unused_args.m"
                      }
#line 672 "unused_args.m"
                      break;
#line 672 "unused_args.m"
                  }
#line 672 "unused_args.m"
                  break;
#line 672 "unused_args.m"
              }
#line 667 "unused_args.m"
            }
#line 614 "unused_args.m"
            break;
#line 614 "unused_args.m"
          case (MR_Integer) 2:
#line 623 "unused_args.m"
            {
#line 623 "unused_args.m"
              MR_Word transform_hlds__unused_args__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 0)));
#line 623 "unused_args.m"
              MR_Integer transform_hlds__unused_args__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));
#line 623 "unused_args.m"
              MR_Word transform_hlds__unused_args__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));
#line 623 "unused_args.m"
              MR_Word transform_hlds__unused_args__ProcInfo_22;
#line 623 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVars_23;
#line 623 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_5, (MR_Integer) 0)));
#line 623 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_129_129;
#line 623 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 3)));
#line 623 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 4)));
#line 623 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 5)));
#line 624 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_5, (MR_Integer) 1)));
#line 624 "unused_args.m"
              MR_Word transform_hlds__unused_args___PredInfo_21;

#line 624 "unused_args.m"
              {
#line 624 "unused_args.m"
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__unused_args__V_128_128, transform_hlds__unused_args__PredId_15, transform_hlds__unused_args__ProcId_16, &transform_hlds__unused_args___PredInfo_21, &transform_hlds__unused_args__ProcInfo_22);
              }
#line 626 "unused_args.m"
              {
#line 626 "unused_args.m"
                hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__ProcInfo_22, &transform_hlds__unused_args__HeadVars_23);
              }
#line 627 "unused_args.m"
              {
#line 627 "unused_args.m"
                transform_hlds__unused_args__V_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 627 "unused_args.m"
                MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_129_129, 0) = ((MR_Box) (transform_hlds__unused_args__PredId_15));
#line 627 "unused_args.m"
                MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_129_129, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_16));
#line 627 "unused_args.m"
              }
#line 627 "unused_args.m"
              {
#line 627 "unused_args.m"
                transform_hlds__unused_args__add_pred_call_arg_dep_5_p_0(transform_hlds__unused_args__V_129_129, transform_hlds__unused_args__Args_17, transform_hlds__unused_args__HeadVars_23, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
              }
#line 623 "unused_args.m"
            }
#line 614 "unused_args.m"
            break;
#line 614 "unused_args.m"
          case (MR_Integer) 3:
#line 614 "unused_args.m"
#line 614 "unused_args.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 0)))) {
#line 614 "unused_args.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 614 "unused_args.m"
              case (MR_Integer) 0:
#line 650 "unused_args.m"
                {
#line 650 "unused_args.m"
                  MR_Word transform_hlds__unused_args__GenericCall_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));
#line 650 "unused_args.m"
                  MR_Word transform_hlds__unused_args__CallArgs_35;
#line 650 "unused_args.m"
                  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_120_120;
#line 650 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Args_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));
#line 650 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 3)));
#line 650 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 4)));
#line 650 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 5)));

#line 651 "unused_args.m"
                  {
#line 651 "unused_args.m"
                    hlds__goal_util__generic_call_vars_2_p_0(transform_hlds__unused_args__GenericCall_31, &transform_hlds__unused_args__CallArgs_35);
                  }
#line 652 "unused_args.m"
                  {
#line 652 "unused_args.m"
                    transform_hlds__unused_args__set_list_vars_used_3_p_0(transform_hlds__unused_args__CallArgs_35, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_120_120);
                  }
#line 653 "unused_args.m"
                  {
#line 653 "unused_args.m"
                    transform_hlds__unused_args__set_list_vars_used_3_p_0(transform_hlds__unused_args__Args_138, transform_hlds__unused_args__STATE_VARIABLE_VarDep_120_120, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
                  }
#line 650 "unused_args.m"
                }
#line 614 "unused_args.m"
                break;
#line 614 "unused_args.m"
              case (MR_Integer) 1:
#line 655 "unused_args.m"
                {
#line 655 "unused_args.m"
                  MR_Word transform_hlds__unused_args__TypeCtorInfo_148_148 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 655 "unused_args.m"
                  MR_Word transform_hlds__unused_args__ExtraArgs_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 5)));
#line 655 "unused_args.m"
                  MR_Word transform_hlds__unused_args__UsedVars_48;
#line 655 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_118_118;
#line 655 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Args_141 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 4)));
#line 655 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));
#line 655 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));
#line 655 "unused_args.m"
                  MR_Integer transform_hlds__unused_args__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 3)));
#line 655 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 6)));
#line 655 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 7)));

#line 664 "unused_args.m"
                  {
#line 664 "unused_args.m"
                    transform_hlds__unused_args__V_118_118 = mercury__list__f_43_43_2_f_0(transform_hlds__unused_args__TypeCtorInfo_148_148, transform_hlds__unused_args__Args_141, transform_hlds__unused_args__ExtraArgs_39);
                  }
#line 664 "unused_args.m"
                  {
#line 664 "unused_args.m"
                    mercury__list__filter_map_3_p_0(transform_hlds__unused_args__TypeCtorInfo_148_148, (MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args_scalar_common_2[9], transform_hlds__unused_args__V_118_118, &transform_hlds__unused_args__UsedVars_48);
                  }
#line 665 "unused_args.m"
                  {
#line 665 "unused_args.m"
                    transform_hlds__unused_args__set_list_vars_used_3_p_0(transform_hlds__unused_args__UsedVars_48, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
                  }
#line 655 "unused_args.m"
                }
#line 614 "unused_args.m"
                break;
#line 614 "unused_args.m"
              case (MR_Integer) 2:
#line 612 "unused_args.m"
                {
#line 612 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));
#line 612 "unused_args.m"
                  MR_Word transform_hlds__unused_args___ConjType_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));

#line 613 "unused_args.m"
                  {
#line 613 "unused_args.m"
                    transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(transform_hlds__unused_args__Info_5, transform_hlds__unused_args__Goals_11, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
                  }
#line 612 "unused_args.m"
                }
#line 614 "unused_args.m"
                break;
#line 614 "unused_args.m"
              case (MR_Integer) 3:
#line 615 "unused_args.m"
                {
#line 615 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Goals_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));

#line 616 "unused_args.m"
                  {
#line 616 "unused_args.m"
                    transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(transform_hlds__unused_args__Info_5, transform_hlds__unused_args__Goals_135, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
                  }
#line 615 "unused_args.m"
                }
#line 614 "unused_args.m"
                break;
#line 614 "unused_args.m"
              case (MR_Integer) 4:
#line 618 "unused_args.m"
                {
#line 618 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));
#line 618 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 3)));
#line 618 "unused_args.m"
                  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_131_131;
#line 618 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Goals_136;
#line 618 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));

#line 619 "unused_args.m"
                  {
#line 619 "unused_args.m"
                    transform_hlds__unused_args__set_var_used_3_p_0(transform_hlds__unused_args__Var_12, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_131_131);
                  }
#line 620 "unused_args.m"
                  {
#line 620 "unused_args.m"
                    transform_hlds__unused_args__list_case_to_list_goal_2_p_0(transform_hlds__unused_args__Cases_14, &transform_hlds__unused_args__Goals_136);
                  }
#line 621 "unused_args.m"
                  {
#line 621 "unused_args.m"
                    transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(transform_hlds__unused_args__Info_5, transform_hlds__unused_args__Goals_136, transform_hlds__unused_args__STATE_VARIABLE_VarDep_131_131, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
                  }
#line 618 "unused_args.m"
                }
#line 614 "unused_args.m"
                break;
#line 614 "unused_args.m"
              case (MR_Integer) 5:
#line 637 "unused_args.m"
                {
#line 637 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Reason_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));
#line 637 "unused_args.m"
                  MR_Word transform_hlds__unused_args__SubGoal_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));
#line 639 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_122_122;
#line 639 "unused_args.m"
                  MR_Word transform_hlds__unused_args___TermVar_30;

#line 639 "unused_args.m"
                  transform_hlds__unused_args__succeeded = ((((MR_tag((MR_Word) transform_hlds__unused_args__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 639 "unused_args.m"
                  if (transform_hlds__unused_args__succeeded)
#line 639 "unused_args.m"
                    {
#line 639 "unused_args.m"
                      transform_hlds__unused_args___TermVar_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Reason_29, (MR_Integer) 1)));
#line 639 "unused_args.m"
                      transform_hlds__unused_args__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Reason_29, (MR_Integer) 2)));
#line 639 "unused_args.m"
                      transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_122_122 == (MR_Integer) 1);
#line 639 "unused_args.m"
                    }
#line 644 "unused_args.m"
                  if (transform_hlds__unused_args__succeeded)
#line 644 "unused_args.m"
                    *transform_hlds__unused_args__STATE_VARIABLE_VarDep_88 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87;
#line 644 "unused_args.m"
                  else
#line 647 "unused_args.m"
                    {
#line 647 "unused_args.m"
                      /* direct tailcall eliminated */
#line 647 "unused_args.m"
                      {
#line 647 "unused_args.m"
                        MR_Word transform_hlds__unused_args__Goal__tmp_copy_6 = transform_hlds__unused_args__SubGoal_137;

#line 647 "unused_args.m"
                        transform_hlds__unused_args__Goal_6 = transform_hlds__unused_args__Goal__tmp_copy_6;
#line 647 "unused_args.m"
                      }
#line 647 "unused_args.m"
                      continue;
#line 647 "unused_args.m"
                    }
#line 637 "unused_args.m"
                }
#line 614 "unused_args.m"
                break;
#line 614 "unused_args.m"
              case (MR_Integer) 6:
#line 629 "unused_args.m"
                {
#line 629 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Cond_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));
#line 629 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Then_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 3)));
#line 629 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Else_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 4)));
#line 629 "unused_args.m"
                  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_125_125;
#line 629 "unused_args.m"
                  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_126_126;
#line 629 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));

#line 630 "unused_args.m"
                  {
#line 630 "unused_args.m"
                    transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(transform_hlds__unused_args__Info_5, transform_hlds__unused_args__Cond_25, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_125_125);
                  }
#line 631 "unused_args.m"
                  {
#line 631 "unused_args.m"
                    transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(transform_hlds__unused_args__Info_5, transform_hlds__unused_args__Then_26, transform_hlds__unused_args__STATE_VARIABLE_VarDep_125_125, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_126_126);
                  }
#line 632 "unused_args.m"
                  /* direct tailcall eliminated */
#line 632 "unused_args.m"
                  {
#line 632 "unused_args.m"
                    MR_Word transform_hlds__unused_args__Goal__tmp_copy_6 = transform_hlds__unused_args__Else_27;
#line 632 "unused_args.m"
                    MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_87 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_126_126;

#line 632 "unused_args.m"
                    transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_87;
#line 632 "unused_args.m"
                    transform_hlds__unused_args__Goal_6 = transform_hlds__unused_args__Goal__tmp_copy_6;
#line 632 "unused_args.m"
                  }
#line 632 "unused_args.m"
                  continue;
#line 629 "unused_args.m"
                }
#line 614 "unused_args.m"
                break;
#line 614 "unused_args.m"
              case (MR_Integer) 7:
#line 725 "unused_args.m"
                {
#line 727 "unused_args.m"
                  {
#line 727 "unused_args.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.unused_args_traverse_goal\'/4", (MR_String) "shorthand");
#line 727 "unused_args.m"
                    return;
                  }
#line 725 "unused_args.m"
                }
#line 614 "unused_args.m"
                break;
#line 614 "unused_args.m"
            }
#line 614 "unused_args.m"
            break;
#line 614 "unused_args.m"
        }
#line 609 "unused_args.m"
      }
#line 609 "unused_args.m"
      break;
#line 609 "unused_args.m"
    }
#line 606 "unused_args.m"
}

#line 584 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__set_var_used_3_p_0(
#line 584 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_4,
#line 584 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_6,
#line 584 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_7)
#line 584 "unused_args.m"
{
#line 587 "unused_args.m"
  {
#line 587 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 587 "unused_args.m"
    {
#line 587 "unused_args.m"
      mercury__map__delete_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, ((MR_Box) (transform_hlds__unused_args__Var_4)), transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_6, transform_hlds__unused_args__STATE_VARIABLE_VarDep_7);
    }
#line 587 "unused_args.m"
  }
#line 584 "unused_args.m"
}

#line 578 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__set_list_vars_used_3_p_0(
#line 578 "unused_args.m"
  MR_Word transform_hlds__unused_args__Vars_4,
#line 578 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_6,
#line 578 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_7)
#line 578 "unused_args.m"
{
#line 582 "unused_args.m"
  {
#line 582 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 582 "unused_args.m"
    {
#line 582 "unused_args.m"
      mercury__map__delete_list_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__Vars_4, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_6, transform_hlds__unused_args__STATE_VARIABLE_VarDep_7);
    }
#line 582 "unused_args.m"
  }
#line 578 "unused_args.m"
}

#line 565 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_aliases_4_p_0(
#line 565 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_5,
#line 565 "unused_args.m"
  MR_Word transform_hlds__unused_args__Aliases_6,
#line 565 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_12,
#line 565 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_13)
#line 565 "unused_args.m"
{
#line 574 "unused_args.m"
  {
#line 574 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 574 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarInf0_8;
#line 569 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv0_VarInf0_8;

#line 569 "unused_args.m"
    {
#line 569 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_12, ((MR_Box) (transform_hlds__unused_args__Var_5)), &transform_hlds__unused_args__conv0_VarInf0_8);
    }
#line 569 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 569 "unused_args.m"
      {
#line 569 "unused_args.m"
        transform_hlds__unused_args__VarInf0_8 = ((MR_Word) transform_hlds__unused_args__conv0_VarInf0_8);
#line 569 "unused_args.m"
        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 569 "unused_args.m"
      }
#line 574 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 570 "unused_args.m"
      {
#line 570 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_17_17 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 570 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarDep_7;
#line 570 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarDep0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInf0_8, (MR_Integer) 0)));
#line 570 "unused_args.m"
        MR_Word transform_hlds__unused_args__ArgDep_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInf0_8, (MR_Integer) 1)));
#line 570 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarInf_11;

#line 571 "unused_args.m"
        {
#line 571 "unused_args.m"
          mercury__set__insert_list_3_p_0(transform_hlds__unused_args__TypeInfo_17_17, transform_hlds__unused_args__Aliases_6, transform_hlds__unused_args__VarDep0_9, &transform_hlds__unused_args__VarDep_7);
        }
#line 572 "unused_args.m"
        {
#line 572 "unused_args.m"
          transform_hlds__unused_args__VarInf_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 572 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInf_11, 0) = ((MR_Box) (transform_hlds__unused_args__VarDep_7));
#line 572 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInf_11, 1) = ((MR_Box) (transform_hlds__unused_args__ArgDep_10));
#line 572 "unused_args.m"
        }
#line 573 "unused_args.m"
        {
#line 573 "unused_args.m"
          mercury__map__det_update_4_p_0(transform_hlds__unused_args__TypeInfo_17_17, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, ((MR_Box) (transform_hlds__unused_args__Var_5)), ((MR_Box) (transform_hlds__unused_args__VarInf_11)), transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_12, transform_hlds__unused_args__STATE_VARIABLE_VarDep_13);
        }
#line 570 "unused_args.m"
      }
#line 574 "unused_args.m"
    else
#line 574 "unused_args.m"
      *transform_hlds__unused_args__STATE_VARIABLE_VarDep_13 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_12;
#line 574 "unused_args.m"
  }
#line 565 "unused_args.m"
}

#line 558 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__local_var_is_used_2_p_0(
#line 558 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarDep_3,
#line 558 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_4)
#line 558 "unused_args.m"
{
#line 561 "unused_args.m"
  {
#line 561 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 561 "unused_args.m"
    {
#line 561 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__map__contains_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__VarDep_3, ((MR_Box) (transform_hlds__unused_args__Var_4)));
    }
#line 561 "unused_args.m"
    transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 561 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 561 "unused_args.m"
  }
#line 558 "unused_args.m"
}

#line 545 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_output_args_4_p_0_1(
#line 545 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 545 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 545 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 545 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3)
#line 545 "unused_args.m"
{
#line 545 "unused_args.m"
  {
#line 545 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 545 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_STATE_VARIABLE_VarDep_7;

#line 545 "unused_args.m"
    {
#line 545 "unused_args.m"
      transform_hlds__unused_args__set_var_used_3_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv0_STATE_VARIABLE_VarDep_7);
    }
#line 545 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_STATE_VARIABLE_VarDep_7));
#line 545 "unused_args.m"
  }
#line 545 "unused_args.m"
}

#line 539 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_output_args_4_p_0(
#line 539 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 539 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcInfo_6,
#line 539 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_9,
#line 539 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_10)
#line 539 "unused_args.m"
{
#line 542 "unused_args.m"
  {
#line 542 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 542 "unused_args.m"
    MR_Word transform_hlds__unused_args__ChangedInstHeadVars_8;
#line 545 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv1_STATE_VARIABLE_VarDep_10;

#line 543 "unused_args.m"
    {
#line 543 "unused_args.m"
      hlds__hlds_pred__proc_info_instantiated_head_vars_3_p_0(transform_hlds__unused_args__ModuleInfo_5, transform_hlds__unused_args__ProcInfo_6, &transform_hlds__unused_args__ChangedInstHeadVars_8);
    }
#line 545 "unused_args.m"
    {
#line 545 "unused_args.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], (MR_Word) &transform_hlds__unused_args_scalar_common_2[8], transform_hlds__unused_args__ChangedInstHeadVars_8, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_9)), &transform_hlds__unused_args__conv1_STATE_VARIABLE_VarDep_10);
    }
#line 545 "unused_args.m"
    *transform_hlds__unused_args__STATE_VARIABLE_VarDep_10 = ((MR_Word) transform_hlds__unused_args__conv1_STATE_VARIABLE_VarDep_10);
#line 542 "unused_args.m"
  }
#line 539 "unused_args.m"
}

#line 529 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__tvar_to_type_info_var_3_p_0(
#line 529 "unused_args.m"
  MR_Word transform_hlds__unused_args__RttiVarMaps_4,
#line 529 "unused_args.m"
  MR_Word transform_hlds__unused_args__TVar_5,
#line 529 "unused_args.m"
  MR_Word * transform_hlds__unused_args__TypeInfoVar_6)
#line 529 "unused_args.m"
{
#line 532 "unused_args.m"
  {
#line 532 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 532 "unused_args.m"
    MR_Word transform_hlds__unused_args__Locn_7;

#line 533 "unused_args.m"
    {
#line 533 "unused_args.m"
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(transform_hlds__unused_args__RttiVarMaps_4, transform_hlds__unused_args__TVar_5, &transform_hlds__unused_args__Locn_7);
    }
#line 534 "unused_args.m"
    {
#line 534 "unused_args.m"
      hlds__hlds_rtti__type_info_locn_var_2_p_0(transform_hlds__unused_args__Locn_7, transform_hlds__unused_args__TypeInfoVar_6);
    }
#line 532 "unused_args.m"
  }
#line 529 "unused_args.m"
}

#line 527 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_2(
#line 527 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 527 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 527 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 527 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3)
#line 527 "unused_args.m"
{
#line 527 "unused_args.m"
  {
#line 527 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 527 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv1_STATE_VARIABLE_VarDep_11;

#line 527 "unused_args.m"
    {
#line 527 "unused_args.m"
      transform_hlds__unused_args__add_rev_arg_dep_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv1_STATE_VARIABLE_VarDep_11);
    }
#line 527 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv1_STATE_VARIABLE_VarDep_11));
#line 527 "unused_args.m"
  }
#line 527 "unused_args.m"
}

#line 526 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_1(
#line 526 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 526 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 526 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2)
#line 526 "unused_args.m"
{
#line 526 "unused_args.m"
  {
#line 526 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 526 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_TypeInfoVar_6;

#line 526 "unused_args.m"
    {
#line 526 "unused_args.m"
      transform_hlds__unused_args__tvar_to_type_info_var_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), &transform_hlds__unused_args__conv0_TypeInfoVar_6);
    }
#line 526 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv0_TypeInfoVar_6));
#line 526 "unused_args.m"
  }
#line 526 "unused_args.m"
}

#line 511 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0(
#line 511 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 511 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarTypeMap_2,
#line 511 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcId_3,
#line 511 "unused_args.m"
  MR_Word transform_hlds__unused_args__RttiVarMaps_4,
#line 511 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_5,
#line 511 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_6)
#line 511 "unused_args.m"
{
#line 514 "unused_args.m"
  while (MR_TRUE)
#line 514 "unused_args.m"
    {
#line 514 "unused_args.m"
      /* tailcall optimized into a loop */
#line 514 "unused_args.m"
      {
#line 514 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 514 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 514 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_VarDep_6 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_5;
#line 514 "unused_args.m"
        else
#line 516 "unused_args.m"
          {
#line 516 "unused_args.m"
            MR_Word transform_hlds__unused_args__TypeInfo_23_39;
#line 516 "unused_args.m"
            MR_Word transform_hlds__unused_args__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 516 "unused_args.m"
            MR_Word transform_hlds__unused_args__Vars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 516 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_21_21;
#line 516 "unused_args.m"
            MR_Word transform_hlds__unused_args__Type_30;
#line 516 "unused_args.m"
            MR_Word transform_hlds__unused_args__TVars_31;
#line 516 "unused_args.m"
            MR_Word transform_hlds__unused_args__TypeInfoVars_32;
#line 516 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_33_33;
#line 516 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_34_34;
#line 527 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv2_STATE_VARIABLE_VarDep_21_21;

#line 524 "unused_args.m"
            {
#line 524 "unused_args.m"
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__unused_args__VarTypeMap_2, transform_hlds__unused_args__Var_13, &transform_hlds__unused_args__Type_30);
            }
#line 525 "unused_args.m"
            {
#line 525 "unused_args.m"
              parse_tree__prog_type__type_vars_2_p_0(transform_hlds__unused_args__Type_30, &transform_hlds__unused_args__TVars_31);
            }
#line 526 "unused_args.m"
            {
#line 526 "unused_args.m"
              transform_hlds__unused_args__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 526 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_33_33, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_4[2]));
#line 526 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_33_33, 1) = ((MR_Box) (transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_1));
#line 526 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 526 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_33_33, 3) = ((MR_Box) (transform_hlds__unused_args__RttiVarMaps_4));
#line 526 "unused_args.m"
            }
#line 16150 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__TypeInfo_23_39 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 526 "unused_args.m"
            {
#line 526 "unused_args.m"
              mercury__list__map_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[4], transform_hlds__unused_args__TypeInfo_23_39, transform_hlds__unused_args__V_33_33, transform_hlds__unused_args__TVars_31, &transform_hlds__unused_args__TypeInfoVars_32);
            }
#line 527 "unused_args.m"
            {
#line 527 "unused_args.m"
              transform_hlds__unused_args__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 527 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_34_34, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_5[1]));
#line 527 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_34_34, 1) = ((MR_Box) (transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_2));
#line 527 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 527 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_34_34, 3) = ((MR_Box) (transform_hlds__unused_args__Var_13));
#line 527 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_34_34, 4) = ((MR_Box) (transform_hlds__unused_args__PredProcId_3));
#line 527 "unused_args.m"
            }
#line 527 "unused_args.m"
            {
#line 527 "unused_args.m"
              mercury__list__foldl_4_p_0(transform_hlds__unused_args__TypeInfo_23_39, (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], transform_hlds__unused_args__V_34_34, transform_hlds__unused_args__TypeInfoVars_32, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_5)), &transform_hlds__unused_args__conv2_STATE_VARIABLE_VarDep_21_21);
            }
#line 527 "unused_args.m"
            transform_hlds__unused_args__STATE_VARIABLE_VarDep_21_21 = ((MR_Word) transform_hlds__unused_args__conv2_STATE_VARIABLE_VarDep_21_21);
#line 518 "unused_args.m"
            /* direct tailcall eliminated */
#line 518 "unused_args.m"
            {
#line 518 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__1__tmp_copy_1 = transform_hlds__unused_args__Vars_14;
#line 518 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_5 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_21_21;

#line 518 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_5 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_5;
#line 518 "unused_args.m"
              transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__HeadVar__1__tmp_copy_1;
#line 518 "unused_args.m"
            }
#line 518 "unused_args.m"
            continue;
#line 516 "unused_args.m"
          }
#line 514 "unused_args.m"
      }
#line 514 "unused_args.m"
      break;
#line 514 "unused_args.m"
    }
#line 511 "unused_args.m"
}

#line 491 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__initialise_vardep_3_p_0(
#line 491 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 491 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_2,
#line 491 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_3)
#line 491 "unused_args.m"
{
#line 494 "unused_args.m"
  while (MR_TRUE)
#line 494 "unused_args.m"
    {
#line 494 "unused_args.m"
      /* tailcall optimized into a loop */
#line 494 "unused_args.m"
      {
#line 494 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 494 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 494 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_VarDep_3 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_2;
#line 494 "unused_args.m"
        else
#line 495 "unused_args.m"
          {
#line 495 "unused_args.m"
            MR_Word transform_hlds__unused_args__TypeInfo_17_17 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 495 "unused_args.m"
            MR_Word transform_hlds__unused_args__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 495 "unused_args.m"
            MR_Word transform_hlds__unused_args__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 495 "unused_args.m"
            MR_Word transform_hlds__unused_args__VDep_10;
#line 495 "unused_args.m"
            MR_Word transform_hlds__unused_args__Args_11;
#line 495 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_14_14;
#line 495 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_15_15;

#line 496 "unused_args.m"
            {
#line 496 "unused_args.m"
              mercury__set__init_1_p_0(transform_hlds__unused_args__TypeInfo_17_17, &transform_hlds__unused_args__VDep_10);
            }
#line 497 "unused_args.m"
            {
#line 497 "unused_args.m"
              mercury__set__init_1_p_0((MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0, &transform_hlds__unused_args__Args_11);
            }
#line 498 "unused_args.m"
            {
#line 498 "unused_args.m"
              transform_hlds__unused_args__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 498 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 0) = ((MR_Box) (transform_hlds__unused_args__VDep_10));
#line 498 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 1) = ((MR_Box) (transform_hlds__unused_args__Args_11));
#line 498 "unused_args.m"
            }
#line 498 "unused_args.m"
            {
#line 498 "unused_args.m"
              mercury__map__set_4_p_0(transform_hlds__unused_args__TypeInfo_17_17, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, ((MR_Box) (transform_hlds__unused_args__Var_7)), ((MR_Box) (transform_hlds__unused_args__V_14_14)), transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_2, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_15_15);
            }
#line 499 "unused_args.m"
            /* direct tailcall eliminated */
#line 499 "unused_args.m"
            {
#line 499 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__1__tmp_copy_1 = transform_hlds__unused_args__Vars_8;
#line 499 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_2 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_15_15;

#line 499 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_2 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_2;
#line 499 "unused_args.m"
              transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__HeadVar__1__tmp_copy_1;
#line 499 "unused_args.m"
            }
#line 499 "unused_args.m"
            continue;
#line 495 "unused_args.m"
          }
#line 494 "unused_args.m"
      }
#line 494 "unused_args.m"
      break;
#line 494 "unused_args.m"
    }
#line 491 "unused_args.m"
}

#line 427 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_proc_args_10_p_0_1(
#line 427 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 427 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 427 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2)
#line 427 "unused_args.m"
{
#line 427 "unused_args.m"
  {
#line 427 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 427 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__3_85;

#line 427 "unused_args.m"
    {
#line 427 "unused_args.m"
      transform_hlds__unused_args__IntroducedFrom__pred__setup_proc_args__427__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__unused_args__wrapper_arg_1), &transform_hlds__unused_args__conv0_HeadVar__3_85);
    }
#line 427 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__3_85));
#line 427 "unused_args.m"
  }
#line 427 "unused_args.m"
}

#line 391 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_proc_args_10_p_0(
#line 391 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_11,
#line 391 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_12,
#line 391 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_47,
#line 391 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_48,
#line 391 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0_49,
#line 391 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_50,
#line 391 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_51,
#line 391 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OptProcs_52,
#line 391 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53,
#line 391 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_54)
#line 391 "unused_args.m"
{
#line 398 "unused_args.m"
  {
#line 398 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 398 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeInfo_81_81;
#line 398 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredInfo_17;
#line 398 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcInfo_18;
#line 398 "unused_args.m"
    MR_Word transform_hlds__unused_args__Globals_19;
#line 398 "unused_args.m"
    MR_Word transform_hlds__unused_args__Intermod_21;
#line 398 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_55_55;

#line 399 "unused_args.m"
    {
#line 399 "unused_args.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53, transform_hlds__unused_args__PredId_11, transform_hlds__unused_args__ProcId_12, &transform_hlds__unused_args__PredInfo_17, &transform_hlds__unused_args__ProcInfo_18);
    }
#line 401 "unused_args.m"
    {
#line 401 "unused_args.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53, &transform_hlds__unused_args__Globals_19);
    }
#line 16388 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__TypeInfo_81_81 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 403 "unused_args.m"
    {
#line 403 "unused_args.m"
      mercury__map__init_1_p_0(transform_hlds__unused_args__TypeInfo_81_81, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_55_55);
    }
#line 404 "unused_args.m"
    {
#line 404 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_19, (MR_Integer) 325, &transform_hlds__unused_args__Intermod_21);
    }
#line 409 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__Intermod_21 == (MR_Integer) 1);
#line 409 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 409 "unused_args.m"
      {
#line 410 "unused_args.m"
        {
#line 410 "unused_args.m"
          transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_imported_not_external_1_p_0(transform_hlds__unused_args__PredInfo_17);
        }
#line 409 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 409 "unused_args.m"
          {
#line 411 "unused_args.m"
            {
#line 411 "unused_args.m"
              transform_hlds__unused_args__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__unused_args__PredInfo_17);
            }
#line 411 "unused_args.m"
            transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 409 "unused_args.m"
          }
#line 409 "unused_args.m"
      }
#line 451 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 413 "unused_args.m"
      {
#line 413 "unused_args.m"
        MR_Word transform_hlds__unused_args__PredModule_22;
#line 413 "unused_args.m"
        MR_Integer transform_hlds__unused_args__PredArity_23;
#line 413 "unused_args.m"
        MR_Word transform_hlds__unused_args__FuncInfo_24;
#line 413 "unused_args.m"
        MR_Word transform_hlds__unused_args__AnalysisInfo0_25;
#line 413 "unused_args.m"
        MR_Word transform_hlds__unused_args__ModuleId_26;
#line 413 "unused_args.m"
        MR_Word transform_hlds__unused_args__FuncId_27;
#line 413 "unused_args.m"
        MR_Word transform_hlds__unused_args__MaybeBestResult_28;
#line 413 "unused_args.m"
        MR_Word transform_hlds__unused_args__AnalysisInfo_39;
#line 413 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65;

#line 413 "unused_args.m"
        {
#line 413 "unused_args.m"
          transform_hlds__unused_args__PredModule_22 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__unused_args__PredInfo_17);
        }
#line 414 "unused_args.m"
        {
#line 414 "unused_args.m"
          transform_hlds__unused_args__PredArity_23 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__unused_args__PredInfo_17);
        }
#line 415 "unused_args.m"
        transform_hlds__unused_args__FuncInfo_24 = (MR_Word) transform_hlds__unused_args__PredArity_23;
#line 416 "unused_args.m"
        {
#line 416 "unused_args.m"
          hlds__hlds_module__module_info_get_analysis_info_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53, &transform_hlds__unused_args__AnalysisInfo0_25);
        }
#line 417 "unused_args.m"
        {
#line 417 "unused_args.m"
          transform_hlds__mmc_analysis__module_name_func_id_from_pred_info_4_p_0(transform_hlds__unused_args__PredInfo_17, transform_hlds__unused_args__ProcId_12, &transform_hlds__unused_args__ModuleId_26, &transform_hlds__unused_args__FuncId_27);
        }
#line 420 "unused_args.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 419 "unused_args.m"
        {
#line 419 "unused_args.m"
          analysis__lookup_best_result_6_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_4[0], transform_hlds__unused_args__AnalysisInfo0_25, transform_hlds__unused_args__ModuleId_26, transform_hlds__unused_args__FuncId_27, ((MR_Box) (transform_hlds__unused_args__FuncInfo_24)), ((MR_Box) ((MR_Integer) 0)), &transform_hlds__unused_args__MaybeBestResult_28);
        }
#line 445 "unused_args.m"
        if ((transform_hlds__unused_args__MaybeBestResult_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 446 "unused_args.m"
          {
#line 448 "unused_args.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 447 "unused_args.m"
            {
#line 447 "unused_args.m"
              analysis__record_request_6_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_3[0], (MR_String) "unused_args", transform_hlds__unused_args__PredModule_22, transform_hlds__unused_args__FuncId_27, ((MR_Box) ((MR_Integer) 0)), transform_hlds__unused_args__AnalysisInfo0_25, &transform_hlds__unused_args__AnalysisInfo_39);
            }
#line 446 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_VarUsage_48 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_47;
#line 446 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_OptProcs_52 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_51;
#line 446 "unused_args.m"
            transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53;
#line 446 "unused_args.m"
          }
#line 445 "unused_args.m"
        else
#line 422 "unused_args.m"
          {
#line 422 "unused_args.m"
            MR_Word transform_hlds__unused_args__BestAnswer_30;
#line 422 "unused_args.m"
            MR_Word transform_hlds__unused_args__UnusedArgs_32;
#line 422 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__MaybeBestResult_28, (MR_Integer) 0)));
#line 422 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_31_31;

#line 422 "unused_args.m"
            transform_hlds__unused_args__BestAnswer_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_60_60, (MR_Integer) 1)));
#line 422 "unused_args.m"
            transform_hlds__unused_args__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_60_60, (MR_Integer) 2)));
#line 423 "unused_args.m"
            transform_hlds__unused_args__UnusedArgs_32 = (MR_Word) transform_hlds__unused_args__BestAnswer_30;
#line 441 "unused_args.m"
            if ((transform_hlds__unused_args__UnusedArgs_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 442 "unused_args.m"
              {
#line 442 "unused_args.m"
                *transform_hlds__unused_args__STATE_VARIABLE_VarUsage_48 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_47;
#line 442 "unused_args.m"
                *transform_hlds__unused_args__STATE_VARIABLE_OptProcs_52 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_51;
#line 442 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53;
#line 442 "unused_args.m"
              }
#line 441 "unused_args.m"
            else
#line 425 "unused_args.m"
              {
#line 425 "unused_args.m"
                MR_Word transform_hlds__unused_args__VarDep_20;
#line 425 "unused_args.m"
                MR_Word transform_hlds__unused_args__HeadVars_35;
#line 425 "unused_args.m"
                MR_Word transform_hlds__unused_args__UnusedVars_36;
#line 425 "unused_args.m"
                MR_Word transform_hlds__unused_args__PredProcId_37;
#line 425 "unused_args.m"
                MR_Word transform_hlds__unused_args__OptimizeUnusedArgs_38;
#line 425 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_61_61;

#line 426 "unused_args.m"
                {
#line 426 "unused_args.m"
                  hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__ProcInfo_18, &transform_hlds__unused_args__HeadVars_35);
                }
#line 427 "unused_args.m"
                {
#line 427 "unused_args.m"
                  transform_hlds__unused_args__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 427 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_61_61, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_4[1]));
#line 427 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_61_61, 1) = ((MR_Box) (transform_hlds__unused_args__setup_proc_args_10_p_0_1));
#line 427 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 427 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_61_61, 3) = ((MR_Box) (transform_hlds__unused_args__HeadVars_35));
#line 427 "unused_args.m"
                }
#line 427 "unused_args.m"
                {
#line 427 "unused_args.m"
                  mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__unused_args__TypeInfo_81_81, transform_hlds__unused_args__V_61_61, transform_hlds__unused_args__UnusedArgs_32, &transform_hlds__unused_args__UnusedVars_36);
                }
#line 429 "unused_args.m"
                {
#line 429 "unused_args.m"
                  transform_hlds__unused_args__initialise_vardep_3_p_0(transform_hlds__unused_args__UnusedVars_36, transform_hlds__unused_args__STATE_VARIABLE_VarDep_55_55, &transform_hlds__unused_args__VarDep_20);
                }
#line 430 "unused_args.m"
                {
#line 430 "unused_args.m"
                  transform_hlds__unused_args__PredProcId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 430 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredProcId_37, 0) = ((MR_Box) (transform_hlds__unused_args__PredId_11));
#line 430 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredProcId_37, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_12));
#line 430 "unused_args.m"
                }
#line 431 "unused_args.m"
                {
#line 431 "unused_args.m"
                  mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], ((MR_Box) (transform_hlds__unused_args__PredProcId_37)), ((MR_Box) (transform_hlds__unused_args__VarDep_20)), transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_47, transform_hlds__unused_args__STATE_VARIABLE_VarUsage_48);
                }
#line 432 "unused_args.m"
                {
#line 432 "unused_args.m"
                  libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_19, (MR_Integer) 344, &transform_hlds__unused_args__OptimizeUnusedArgs_38);
                }
#line 438 "unused_args.m"
#line 438 "unused_args.m"
                switch (transform_hlds__unused_args__OptimizeUnusedArgs_38) {
#line 438 "unused_args.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 438 "unused_args.m"
                  case (MR_Integer) 0:
#line 439 "unused_args.m"
                    {
#line 439 "unused_args.m"
                      *transform_hlds__unused_args__STATE_VARIABLE_OptProcs_52 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_51;
#line 439 "unused_args.m"
                      transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53;
#line 439 "unused_args.m"
                    }
#line 438 "unused_args.m"
                    break;
#line 438 "unused_args.m"
                  case (MR_Integer) 1:
#line 436 "unused_args.m"
                    {
#line 436 "unused_args.m"
                      transform_hlds__unused_args__make_imported_unused_args_pred_info_6_p_0(transform_hlds__unused_args__PredProcId_37, transform_hlds__unused_args__UnusedArgs_32, transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_51, transform_hlds__unused_args__STATE_VARIABLE_OptProcs_52, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65);
                    }
#line 438 "unused_args.m"
                    break;
#line 438 "unused_args.m"
                }
#line 425 "unused_args.m"
              }
#line 444 "unused_args.m"
            transform_hlds__unused_args__AnalysisInfo_39 = transform_hlds__unused_args__AnalysisInfo0_25;
#line 422 "unused_args.m"
          }
#line 450 "unused_args.m"
        {
#line 450 "unused_args.m"
          hlds__hlds_module__module_info_set_analysis_info_3_p_0(transform_hlds__unused_args__AnalysisInfo_39, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_54);
        }
#line 413 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_50 = transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0_49;
#line 413 "unused_args.m"
      }
#line 451 "unused_args.m"
    else
#line 465 "unused_args.m"
      {
#line 453 "unused_args.m"
        {
#line 453 "unused_args.m"
          transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__unused_args__PredInfo_17);
        }
#line 454 "unused_args.m"
        if (!(transform_hlds__unused_args__succeeded))
#line 454 "unused_args.m"
          {
#line 455 "unused_args.m"
            {
#line 455 "unused_args.m"
              MR_Integer transform_hlds__unused_args__V_93_93;

#line 455 "unused_args.m"
              {
#line 455 "unused_args.m"
                transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(transform_hlds__unused_args__PredInfo_17);
              }
#line 455 "unused_args.m"
              if (transform_hlds__unused_args__succeeded)
#line 455 "unused_args.m"
                {
#line 456 "unused_args.m"
                  {
#line 456 "unused_args.m"
                    hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&transform_hlds__unused_args__V_93_93);
                  }
#line 456 "unused_args.m"
                  transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__ProcId_12 == transform_hlds__unused_args__V_93_93);
#line 455 "unused_args.m"
                }
#line 455 "unused_args.m"
            }
#line 454 "unused_args.m"
            if (!(transform_hlds__unused_args__succeeded))
#line 460 "unused_args.m"
              {
#line 460 "unused_args.m"
                MR_Word transform_hlds__unused_args__EvalMethod_40;

#line 460 "unused_args.m"
                {
#line 460 "unused_args.m"
                  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(transform_hlds__unused_args__ProcInfo_18, &transform_hlds__unused_args__EvalMethod_40);
                }
#line 461 "unused_args.m"
                transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__EvalMethod_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 461 "unused_args.m"
                transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 460 "unused_args.m"
              }
#line 454 "unused_args.m"
          }
#line 465 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 464 "unused_args.m"
          {
#line 464 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_50 = transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0_49;
#line 464 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_VarUsage_48 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_47;
#line 464 "unused_args.m"
          }
#line 465 "unused_args.m"
        else
#line 466 "unused_args.m"
          {
#line 466 "unused_args.m"
            MR_Word transform_hlds__unused_args__VarTypes_41;
#line 466 "unused_args.m"
            MR_Word transform_hlds__unused_args__Vars_42;
#line 466 "unused_args.m"
            MR_Word transform_hlds__unused_args__TypeInfoLiveness_43;
#line 466 "unused_args.m"
            MR_Word transform_hlds__unused_args__Goal_45;
#line 466 "unused_args.m"
            MR_Word transform_hlds__unused_args__Info_46;
#line 466 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_67_67;
#line 466 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_68_68;
#line 466 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_70_70;
#line 466 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_72_72;
#line 466 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_71_78;

#line 466 "unused_args.m"
            {
#line 466 "unused_args.m"
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__unused_args__ProcInfo_18, &transform_hlds__unused_args__VarTypes_41);
            }
#line 467 "unused_args.m"
            {
#line 467 "unused_args.m"
              hlds__vartypes__vartypes_vars_2_p_0(transform_hlds__unused_args__VarTypes_41, &transform_hlds__unused_args__Vars_42);
            }
#line 468 "unused_args.m"
            {
#line 468 "unused_args.m"
              transform_hlds__unused_args__initialise_vardep_3_p_0(transform_hlds__unused_args__Vars_42, transform_hlds__unused_args__STATE_VARIABLE_VarDep_55_55, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_67_67);
            }
#line 469 "unused_args.m"
            {
#line 469 "unused_args.m"
              transform_hlds__unused_args__setup_output_args_4_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53, transform_hlds__unused_args__ProcInfo_18, transform_hlds__unused_args__STATE_VARIABLE_VarDep_67_67, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_68_68);
            }
#line 471 "unused_args.m"
            {
#line 471 "unused_args.m"
              hlds__hlds_pred__proc_interface_should_use_typeinfo_liveness_4_p_0(transform_hlds__unused_args__PredInfo_17, transform_hlds__unused_args__ProcId_12, transform_hlds__unused_args__Globals_19, &transform_hlds__unused_args__TypeInfoLiveness_43);
            }
#line 478 "unused_args.m"
#line 478 "unused_args.m"
            switch (transform_hlds__unused_args__TypeInfoLiveness_43) {
#line 478 "unused_args.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 478 "unused_args.m"
              case (MR_Integer) 0:
#line 479 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_VarDep_70_70 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_68_68;
#line 478 "unused_args.m"
                break;
#line 478 "unused_args.m"
              case (MR_Integer) 1:
#line 474 "unused_args.m"
                {
#line 474 "unused_args.m"
                  MR_Word transform_hlds__unused_args__RttiVarMaps_44;
#line 474 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_69_69;

#line 475 "unused_args.m"
                  {
#line 475 "unused_args.m"
                    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__unused_args__ProcInfo_18, &transform_hlds__unused_args__RttiVarMaps_44);
                  }
#line 476 "unused_args.m"
                  {
#line 476 "unused_args.m"
                    transform_hlds__unused_args__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 476 "unused_args.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_69_69, 0) = ((MR_Box) (transform_hlds__unused_args__PredId_11));
#line 476 "unused_args.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_69_69, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_12));
#line 476 "unused_args.m"
                  }
#line 476 "unused_args.m"
                  {
#line 476 "unused_args.m"
                    transform_hlds__unused_args__setup_typeinfo_deps_6_p_0(transform_hlds__unused_args__Vars_42, transform_hlds__unused_args__VarTypes_41, transform_hlds__unused_args__V_69_69, transform_hlds__unused_args__RttiVarMaps_44, transform_hlds__unused_args__STATE_VARIABLE_VarDep_68_68, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_70_70);
                  }
#line 474 "unused_args.m"
                }
#line 478 "unused_args.m"
                break;
#line 478 "unused_args.m"
            }
#line 482 "unused_args.m"
            {
#line 482 "unused_args.m"
              hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__unused_args__ProcInfo_18, &transform_hlds__unused_args__Goal_45);
            }
#line 483 "unused_args.m"
            {
#line 483 "unused_args.m"
              transform_hlds__unused_args__Info_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 483 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_46, 0) = ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53));
#line 483 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_46, 1) = ((MR_Box) (transform_hlds__unused_args__VarTypes_41));
#line 483 "unused_args.m"
            }
#line 484 "unused_args.m"
            {
#line 484 "unused_args.m"
              transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(transform_hlds__unused_args__Info_46, transform_hlds__unused_args__Goal_45, transform_hlds__unused_args__STATE_VARIABLE_VarDep_70_70, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_71_78);
            }
#line 485 "unused_args.m"
            {
#line 485 "unused_args.m"
              transform_hlds__unused_args__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 485 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_72_72, 0) = ((MR_Box) (transform_hlds__unused_args__PredId_11));
#line 485 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_72_72, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_12));
#line 485 "unused_args.m"
            }
#line 485 "unused_args.m"
            {
#line 485 "unused_args.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], ((MR_Box) (transform_hlds__unused_args__V_72_72)), ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_VarDep_71_78)), transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_47, transform_hlds__unused_args__STATE_VARIABLE_VarUsage_48);
            }
#line 487 "unused_args.m"
            {
#line 487 "unused_args.m"
              MR_Word base;
#line 487 "unused_args.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 487 "unused_args.m"
              *transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_50 = base;
#line 487 "unused_args.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__V_72_72));
#line 487 "unused_args.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0_49));
#line 487 "unused_args.m"
            }
#line 466 "unused_args.m"
          }
#line 465 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_54 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53;
#line 465 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_OptProcs_52 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_51;
#line 465 "unused_args.m"
      }
#line 398 "unused_args.m"
  }
#line 391 "unused_args.m"
}

#line 375 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_pred_args_10_p_0(
#line 375 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_1,
#line 375 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 375 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_3,
#line 375 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_4,
#line 375 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0_5,
#line 375 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_6,
#line 375 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_7,
#line 375 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OptProcs_8,
#line 375 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_9,
#line 375 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_10)
#line 375 "unused_args.m"
{
#line 381 "unused_args.m"
  while (MR_TRUE)
#line 381 "unused_args.m"
    {
#line 381 "unused_args.m"
      /* tailcall optimized into a loop */
#line 381 "unused_args.m"
      {
#line 381 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 381 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 381 "unused_args.m"
          {
#line 381 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_10 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_9;
#line 381 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_OptProcs_8 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_7;
#line 381 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_6 = transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0_5;
#line 381 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_VarUsage_4 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_3;
#line 381 "unused_args.m"
          }
#line 381 "unused_args.m"
        else
#line 383 "unused_args.m"
          {
#line 383 "unused_args.m"
            MR_Integer transform_hlds__unused_args__ProcId_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 383 "unused_args.m"
            MR_Word transform_hlds__unused_args__ProcIds_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 383 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_39_39;
#line 383 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_40_40;
#line 383 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_41_41;
#line 383 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_42_42;

#line 384 "unused_args.m"
            {
#line 384 "unused_args.m"
              transform_hlds__unused_args__setup_proc_args_10_p_0(transform_hlds__unused_args__PredId_1, transform_hlds__unused_args__ProcId_25, transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_3, &transform_hlds__unused_args__STATE_VARIABLE_VarUsage_39_39, transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0_5, &transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_40_40, transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_7, &transform_hlds__unused_args__STATE_VARIABLE_OptProcs_41_41, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_9, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_42_42);
            }
#line 386 "unused_args.m"
            /* direct tailcall eliminated */
#line 386 "unused_args.m"
            {
#line 386 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__2__tmp_copy_2 = transform_hlds__unused_args__ProcIds_26;
#line 386 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_3 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_39_39;
#line 386 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0__tmp_copy_5 = transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_40_40;
#line 386 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0__tmp_copy_7 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_41_41;
#line 386 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0__tmp_copy_9 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_42_42;

#line 386 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_9 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0__tmp_copy_9;
#line 386 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_7 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0__tmp_copy_7;
#line 386 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0_5 = transform_hlds__unused_args__STATE_VARIABLE_PredProcIds_0__tmp_copy_5;
#line 386 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_3 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_3;
#line 386 "unused_args.m"
              transform_hlds__unused_args__HeadVar__2_2 = transform_hlds__unused_args__HeadVar__2__tmp_copy_2;
#line 386 "unused_args.m"
            }
#line 386 "unused_args.m"
            continue;
#line 383 "unused_args.m"
          }
#line 381 "unused_args.m"
      }
#line 381 "unused_args.m"
      break;
#line 381 "unused_args.m"
    }
#line 375 "unused_args.m"
}

#line 331 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_local_var_usage_9_p_0(
#line 331 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 331 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_2,
#line 331 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_3,
#line 331 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__4_4,
#line 331 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__5_5,
#line 331 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_6,
#line 331 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OptProcs_7,
#line 331 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_8,
#line 331 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_9)
#line 331 "unused_args.m"
{
#line 337 "unused_args.m"
  while (MR_TRUE)
#line 337 "unused_args.m"
    {
#line 337 "unused_args.m"
      /* tailcall optimized into a loop */
#line 337 "unused_args.m"
      {
#line 337 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 337 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 337 "unused_args.m"
          {
#line 337 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_9 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_8;
#line 337 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_OptProcs_7 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_6;
#line 337 "unused_args.m"
            *transform_hlds__unused_args__HeadVar__5_5 = transform_hlds__unused_args__HeadVar__4_4;
#line 337 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_VarUsage_3 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_2;
#line 337 "unused_args.m"
          }
#line 337 "unused_args.m"
        else
#line 339 "unused_args.m"
          {
#line 339 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredId_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 339 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 339 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_36_36;
#line 339 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredProcList_37_37;
#line 339 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_38_38;
#line 339 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_39_39;
#line 339 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredInfo_57;

#line 354 "unused_args.m"
            {
#line 354 "unused_args.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__unused_args__PredId_22, &transform_hlds__unused_args__PredInfo_57);
            }
#line 360 "unused_args.m"
            {
#line 360 "unused_args.m"
              transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(transform_hlds__unused_args__PredInfo_57);
            }
#line 361 "unused_args.m"
            if (!(transform_hlds__unused_args__succeeded))
#line 362 "unused_args.m"
              {
#line 362 "unused_args.m"
                MR_Word transform_hlds__unused_args__Markers_58;

#line 362 "unused_args.m"
                {
#line 362 "unused_args.m"
                  hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__unused_args__PredInfo_57, &transform_hlds__unused_args__Markers_58);
                }
#line 363 "unused_args.m"
                {
#line 363 "unused_args.m"
                  transform_hlds__unused_args__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__unused_args__Markers_58, (MR_Integer) 0);
                }
#line 362 "unused_args.m"
              }
#line 367 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 366 "unused_args.m"
              {
#line 366 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_39_39 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_8;
#line 366 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_OptProcs_38_38 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_6;
#line 366 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_PredProcList_37_37 = transform_hlds__unused_args__HeadVar__4_4;
#line 366 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_VarUsage_36_36 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_2;
#line 366 "unused_args.m"
              }
#line 367 "unused_args.m"
            else
#line 368 "unused_args.m"
              {
#line 368 "unused_args.m"
                MR_Word transform_hlds__unused_args__ProcIds_59;

#line 368 "unused_args.m"
                {
#line 368 "unused_args.m"
                  transform_hlds__unused_args__ProcIds_59 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__unused_args__PredInfo_57);
                }
#line 369 "unused_args.m"
                {
#line 369 "unused_args.m"
                  transform_hlds__unused_args__setup_pred_args_10_p_0(transform_hlds__unused_args__PredId_22, transform_hlds__unused_args__ProcIds_59, transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_2, &transform_hlds__unused_args__STATE_VARIABLE_VarUsage_36_36, transform_hlds__unused_args__HeadVar__4_4, &transform_hlds__unused_args__STATE_VARIABLE_PredProcList_37_37, transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_6, &transform_hlds__unused_args__STATE_VARIABLE_OptProcs_38_38, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_39_39);
                }
#line 368 "unused_args.m"
              }
#line 342 "unused_args.m"
            /* direct tailcall eliminated */
#line 342 "unused_args.m"
            {
#line 342 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__1__tmp_copy_1 = transform_hlds__unused_args__PredIds_23;
#line 342 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_2 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_36_36;
#line 342 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__4__tmp_copy_4 = transform_hlds__unused_args__STATE_VARIABLE_PredProcList_37_37;
#line 342 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0__tmp_copy_6 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_38_38;
#line 342 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_39_39;

#line 342 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_8 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8;
#line 342 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_6 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0__tmp_copy_6;
#line 342 "unused_args.m"
              transform_hlds__unused_args__HeadVar__4_4 = transform_hlds__unused_args__HeadVar__4__tmp_copy_4;
#line 342 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_2 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_2;
#line 342 "unused_args.m"
              transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__HeadVar__1__tmp_copy_1;
#line 342 "unused_args.m"
            }
#line 342 "unused_args.m"
            continue;
#line 339 "unused_args.m"
          }
#line 337 "unused_args.m"
      }
#line 337 "unused_args.m"
      break;
#line 337 "unused_args.m"
    }
#line 331 "unused_args.m"
}

#line 171 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__get_unused_args_1_f_0(
#line 171 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_3)
#line 171 "unused_args.m"
{
#line 173 "unused_args.m"
  {
#line 173 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 173 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVar__2_2 = (MR_Word) transform_hlds__unused_args__UnusedArgs_3;

#line 173 "unused_args.m"
    return transform_hlds__unused_args__HeadVar__2_2;
#line 173 "unused_args.m"
  }
#line 171 "unused_args.m"
}

#line 292 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_4_p_0_3(
#line 292 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 292 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 292 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 292 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3,
#line 292 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_4,
#line 292 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_5)
#line 292 "unused_args.m"
{
#line 292 "unused_args.m"
  {
#line 292 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 292 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv5_STATE_VARIABLE_ProcCallInfo_47;
#line 292 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv4_STATE_VARIABLE_ModuleInfo_49;

#line 292 "unused_args.m"
    {
#line 292 "unused_args.m"
      transform_hlds__unused_args__unused_args_create_new_pred_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv5_STATE_VARIABLE_ProcCallInfo_47, ((MR_Word) transform_hlds__unused_args__wrapper_arg_4), &transform_hlds__unused_args__conv4_STATE_VARIABLE_ModuleInfo_49);
    }
#line 292 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv5_STATE_VARIABLE_ProcCallInfo_47));
#line 292 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_5 = ((MR_Box) (transform_hlds__unused_args__conv4_STATE_VARIABLE_ModuleInfo_49));
#line 292 "unused_args.m"
  }
#line 292 "unused_args.m"
}

#line 283 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_4_p_0_2(
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
    MR_Word transform_hlds__unused_args__conv2_STATE_VARIABLE_AnalysisInfo_13;

#line 283 "unused_args.m"
    {
#line 283 "unused_args.m"
      transform_hlds__unused_args__record_intermod_dependencies_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv2_STATE_VARIABLE_AnalysisInfo_13);
    }
#line 283 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv2_STATE_VARIABLE_AnalysisInfo_13));
#line 283 "unused_args.m"
  }
#line 283 "unused_args.m"
}

#line 281 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_4_p_0_1(
#line 281 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 281 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 281 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 281 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3)
#line 281 "unused_args.m"
{
#line 281 "unused_args.m"
  {
#line 281 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 281 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_13;

#line 281 "unused_args.m"
    {
#line 281 "unused_args.m"
      transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_13);
    }
#line 281 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_13));
#line 281 "unused_args.m"
  }
#line 281 "unused_args.m"
}

#line 60 "unused_args.m"
void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_4_p_0(
#line 60 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_29,
#line 60 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_30,
#line 60 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Specs_6,
#line 60 "unused_args.m"
  MR_Word * transform_hlds__unused_args__UnusedArgInfos_7)
#line 60 "unused_args.m"
{
#line 233 "unused_args.m"
  {
#line 233 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 233 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeCtorInfo_48_48;
#line 233 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeInfo_49_49;
#line 233 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeCtorInfo_17_80;
#line 233 "unused_args.m"
    MR_Word transform_hlds__unused_args__Globals_8;
#line 233 "unused_args.m"
    MR_Word transform_hlds__unused_args__VeryVerbose_9;
#line 233 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarUsage0_10;
#line 233 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredProcIds_11;
#line 233 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcCallInfo0_12;
#line 233 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarUsage_13;
#line 233 "unused_args.m"
    MR_Word transform_hlds__unused_args__UnusedArgInfo0_14;
#line 233 "unused_args.m"
    MR_Word transform_hlds__unused_args__UnusedArgInfo_15;
#line 233 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredProcIdsToFix_16;
#line 233 "unused_args.m"
    MR_Word transform_hlds__unused_args__MakeOpt_17;
#line 233 "unused_args.m"
    MR_Word transform_hlds__unused_args__IntermodAnalysis_18;
#line 233 "unused_args.m"
    MR_Word transform_hlds__unused_args__DoGather_19;
#line 233 "unused_args.m"
    MR_Word transform_hlds__unused_args__DoWarn_20;
#line 233 "unused_args.m"
    MR_Word transform_hlds__unused_args__MakeAnalysisRegistry_22;
#line 233 "unused_args.m"
    MR_Word transform_hlds__unused_args__DoFixup_27;
#line 233 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_32_32;
#line 233 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_42_42;
#line 233 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcCallInfo0_75;
#line 233 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarUsage0_76;
#line 233 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredIds_77;

#line 234 "unused_args.m"
    {
#line 234 "unused_args.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_29, &transform_hlds__unused_args__Globals_8);
    }
#line 235 "unused_args.m"
    {
#line 235 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_8, (MR_Integer) 46, &transform_hlds__unused_args__VeryVerbose_9);
    }
#line 17343 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__TypeCtorInfo_17_80 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 323 "unused_args.m"
    {
#line 323 "unused_args.m"
      mercury__map__init_1_p_0(transform_hlds__unused_args__TypeCtorInfo_17_80, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0, &transform_hlds__unused_args__ProcCallInfo0_75);
    }
#line 324 "unused_args.m"
    {
#line 324 "unused_args.m"
      mercury__map__init_1_p_0(transform_hlds__unused_args__TypeCtorInfo_17_80, (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], &transform_hlds__unused_args__VarUsage0_76);
    }
#line 325 "unused_args.m"
    {
#line 325 "unused_args.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_29, &transform_hlds__unused_args__PredIds_77);
    }
#line 326 "unused_args.m"
    {
#line 326 "unused_args.m"
      transform_hlds__unused_args__setup_local_var_usage_9_p_0(transform_hlds__unused_args__PredIds_77, transform_hlds__unused_args__VarUsage0_76, &transform_hlds__unused_args__VarUsage0_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__unused_args__PredProcIds_11, transform_hlds__unused_args__ProcCallInfo0_75, &transform_hlds__unused_args__ProcCallInfo0_12, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_29, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_32_32);
    }
#line 239 "unused_args.m"
    {
#line 239 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_117_115_101_100_95_97_114_103_115_95_112_97_115_115_95_95_91_50_93_95_48_5_p_0((MR_Integer) 0, transform_hlds__unused_args__PredProcIds_11, transform_hlds__unused_args__VarUsage0_10, &transform_hlds__unused_args__VarUsage_13);
    }
#line 17370 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__TypeCtorInfo_48_48 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 17372 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__TypeInfo_49_49 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[0];
#line 242 "unused_args.m"
    {
#line 242 "unused_args.m"
      mercury__map__init_1_p_0(transform_hlds__unused_args__TypeCtorInfo_48_48, transform_hlds__unused_args__TypeInfo_49_49, &transform_hlds__unused_args__UnusedArgInfo0_14);
    }
#line 243 "unused_args.m"
    {
#line 243 "unused_args.m"
      transform_hlds__unused_args__get_unused_arg_info_5_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_32_32, transform_hlds__unused_args__PredProcIds_11, transform_hlds__unused_args__VarUsage_13, transform_hlds__unused_args__UnusedArgInfo0_14, &transform_hlds__unused_args__UnusedArgInfo_15);
    }
#line 246 "unused_args.m"
    {
#line 246 "unused_args.m"
      mercury__map__keys_2_p_0(transform_hlds__unused_args__TypeCtorInfo_48_48, transform_hlds__unused_args__TypeInfo_49_49, transform_hlds__unused_args__UnusedArgInfo_15, &transform_hlds__unused_args__PredProcIdsToFix_16);
    }
#line 247 "unused_args.m"
    {
#line 247 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_8, (MR_Integer) 86, &transform_hlds__unused_args__MakeOpt_17);
    }
#line 248 "unused_args.m"
    {
#line 248 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_8, (MR_Integer) 325, &transform_hlds__unused_args__IntermodAnalysis_18);
    }
#line 253 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__MakeOpt_17 == (MR_Integer) 1);
#line 253 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 254 "unused_args.m"
      transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__IntermodAnalysis_18 == (MR_Integer) 0);
#line 257 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 256 "unused_args.m"
      transform_hlds__unused_args__DoGather_19 = (MR_Integer) 1;
#line 257 "unused_args.m"
    else
#line 258 "unused_args.m"
      transform_hlds__unused_args__DoGather_19 = (MR_Integer) 0;
#line 260 "unused_args.m"
    {
#line 260 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_8, (MR_Integer) 10, &transform_hlds__unused_args__DoWarn_20);
    }
#line 262 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__DoWarn_20 == (MR_Integer) 1);
#line 263 "unused_args.m"
    if (!(transform_hlds__unused_args__succeeded))
#line 263 "unused_args.m"
      transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__MakeOpt_17 == (MR_Integer) 1);
#line 270 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 266 "unused_args.m"
      {
#line 266 "unused_args.m"
        MR_Word transform_hlds__unused_args__WarnedPredIds0_21;
#line 266 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_38_38;

#line 266 "unused_args.m"
        {
#line 266 "unused_args.m"
          mercury__set__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, &transform_hlds__unused_args__WarnedPredIds0_21);
        }
#line 269 "unused_args.m"
        {
#line 269 "unused_args.m"
          transform_hlds__unused_args__V_38_38 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0);
        }
#line 267 "unused_args.m"
        {
#line 267 "unused_args.m"
          transform_hlds__unused_args__gather_warnings_and_pragmas_10_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_32_32, transform_hlds__unused_args__UnusedArgInfo_15, transform_hlds__unused_args__DoWarn_20, transform_hlds__unused_args__DoGather_19, transform_hlds__unused_args__PredProcIdsToFix_16, transform_hlds__unused_args__WarnedPredIds0_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__unused_args__Specs_6, transform_hlds__unused_args__V_38_38, transform_hlds__unused_args__UnusedArgInfos_7);
        }
#line 266 "unused_args.m"
      }
#line 270 "unused_args.m"
    else
#line 271 "unused_args.m"
      {
#line 271 "unused_args.m"
        *transform_hlds__unused_args__Specs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 272 "unused_args.m"
        {
#line 272 "unused_args.m"
          mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0, transform_hlds__unused_args__UnusedArgInfos_7);
        }
#line 271 "unused_args.m"
      }
#line 274 "unused_args.m"
    {
#line 274 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_8, (MR_Integer) 88, &transform_hlds__unused_args__MakeAnalysisRegistry_22);
    }
#line 286 "unused_args.m"
#line 286 "unused_args.m"
    switch (transform_hlds__unused_args__MakeAnalysisRegistry_22) {
#line 286 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 286 "unused_args.m"
      case (MR_Integer) 0:
#line 287 "unused_args.m"
        transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_42_42 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_32_32;
#line 286 "unused_args.m"
        break;
#line 286 "unused_args.m"
      case (MR_Integer) 1:
#line 277 "unused_args.m"
        {
#line 277 "unused_args.m"
          MR_Word transform_hlds__unused_args__TypeCtorInfo_57_57;
#line 277 "unused_args.m"
          MR_Word transform_hlds__unused_args__AnalysisInfo0_23;
#line 277 "unused_args.m"
          MR_Word transform_hlds__unused_args__PredIds_24;
#line 277 "unused_args.m"
          MR_Word transform_hlds__unused_args__AnalysisInfo1_25;
#line 277 "unused_args.m"
          MR_Word transform_hlds__unused_args__AnalysisInfo_26;
#line 277 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_40_40;
#line 277 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_41_41;
#line 280 "unused_args.m"
          MR_Box transform_hlds__unused_args__conv1_AnalysisInfo1_25;
#line 283 "unused_args.m"
          MR_Box transform_hlds__unused_args__conv3_AnalysisInfo_26;

#line 278 "unused_args.m"
          {
#line 278 "unused_args.m"
            hlds__hlds_module__module_info_get_analysis_info_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_32_32, &transform_hlds__unused_args__AnalysisInfo0_23);
          }
#line 279 "unused_args.m"
          {
#line 279 "unused_args.m"
            hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_32_32, &transform_hlds__unused_args__PredIds_24);
          }
#line 281 "unused_args.m"
          {
#line 281 "unused_args.m"
            transform_hlds__unused_args__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 281 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_40_40, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_5[0]));
#line 281 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_40_40, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_process_module_4_p_0_1));
#line 281 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 281 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_40_40, 3) = ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_32_32));
#line 281 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_40_40, 4) = ((MR_Box) (transform_hlds__unused_args__UnusedArgInfo_15));
#line 281 "unused_args.m"
          }
#line 17528 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__TypeCtorInfo_57_57 = (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0;
#line 280 "unused_args.m"
          {
#line 280 "unused_args.m"
            mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__unused_args__TypeCtorInfo_57_57, transform_hlds__unused_args__V_40_40, transform_hlds__unused_args__PredIds_24, ((MR_Box) (transform_hlds__unused_args__AnalysisInfo0_23)), &transform_hlds__unused_args__conv1_AnalysisInfo1_25);
          }
#line 280 "unused_args.m"
          transform_hlds__unused_args__AnalysisInfo1_25 = ((MR_Word) transform_hlds__unused_args__conv1_AnalysisInfo1_25);
#line 283 "unused_args.m"
          {
#line 283 "unused_args.m"
            transform_hlds__unused_args__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 283 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_41_41, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_6[0]));
#line 283 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_41_41, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_process_module_4_p_0_2));
#line 283 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 283 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_41_41, 3) = ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_32_32));
#line 283 "unused_args.m"
          }
#line 283 "unused_args.m"
          {
#line 283 "unused_args.m"
            mercury__list__foldl_4_p_0(transform_hlds__unused_args__TypeCtorInfo_48_48, transform_hlds__unused_args__TypeCtorInfo_57_57, transform_hlds__unused_args__V_41_41, transform_hlds__unused_args__PredProcIds_11, ((MR_Box) (transform_hlds__unused_args__AnalysisInfo1_25)), &transform_hlds__unused_args__conv3_AnalysisInfo_26);
          }
#line 283 "unused_args.m"
          transform_hlds__unused_args__AnalysisInfo_26 = ((MR_Word) transform_hlds__unused_args__conv3_AnalysisInfo_26);
#line 285 "unused_args.m"
          {
#line 285 "unused_args.m"
            hlds__hlds_module__module_info_set_analysis_info_3_p_0(transform_hlds__unused_args__AnalysisInfo_26, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_32_32, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_42_42);
          }
#line 277 "unused_args.m"
        }
#line 286 "unused_args.m"
        break;
#line 286 "unused_args.m"
    }
#line 289 "unused_args.m"
    {
#line 289 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_8, (MR_Integer) 344, &transform_hlds__unused_args__DoFixup_27);
    }
#line 306 "unused_args.m"
#line 306 "unused_args.m"
    switch (transform_hlds__unused_args__DoFixup_27) {
#line 306 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 306 "unused_args.m"
      case (MR_Integer) 0:
#line 307 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_30 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_42_42;
#line 306 "unused_args.m"
        break;
#line 306 "unused_args.m"
      case (MR_Integer) 1:
#line 291 "unused_args.m"
        {
#line 291 "unused_args.m"
          MR_Word transform_hlds__unused_args__ProcCallInfo_28;
#line 291 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_44_44;
#line 291 "unused_args.m"
          MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_45_45;
#line 291 "unused_args.m"
          MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_46_46;
#line 292 "unused_args.m"
          MR_Box transform_hlds__unused_args__conv7_ProcCallInfo_28;
#line 292 "unused_args.m"
          MR_Box transform_hlds__unused_args__conv6_STATE_VARIABLE_ModuleInfo_45_45;

#line 292 "unused_args.m"
          {
#line 292 "unused_args.m"
            transform_hlds__unused_args__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 292 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_44_44, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_7[0]));
#line 292 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_44_44, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_process_module_4_p_0_3));
#line 292 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 292 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_44_44, 3) = ((MR_Box) (transform_hlds__unused_args__UnusedArgInfo_15));
#line 292 "unused_args.m"
          }
#line 292 "unused_args.m"
          {
#line 292 "unused_args.m"
            mercury__list__foldl2_6_p_0(transform_hlds__unused_args__TypeCtorInfo_48_48, (MR_Word) &transform_hlds__unused_args_scalar_common_2[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__unused_args__V_44_44, transform_hlds__unused_args__PredProcIdsToFix_16, ((MR_Box) (transform_hlds__unused_args__ProcCallInfo0_12)), &transform_hlds__unused_args__conv7_ProcCallInfo_28, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_42_42)), &transform_hlds__unused_args__conv6_STATE_VARIABLE_ModuleInfo_45_45);
          }
#line 292 "unused_args.m"
          transform_hlds__unused_args__ProcCallInfo_28 = ((MR_Word) transform_hlds__unused_args__conv7_ProcCallInfo_28);
#line 292 "unused_args.m"
          transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_45_45 = ((MR_Word) transform_hlds__unused_args__conv6_STATE_VARIABLE_ModuleInfo_45_45);
#line 296 "unused_args.m"
          {
#line 296 "unused_args.m"
            transform_hlds__unused_args__unused_args_fixup_module_6_p_0(transform_hlds__unused_args__VeryVerbose_9, transform_hlds__unused_args__VarUsage_13, transform_hlds__unused_args__PredProcIds_11, transform_hlds__unused_args__ProcCallInfo_28, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_45_45, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_46_46);
          }
#line 299 "unused_args.m"
          {
#line 299 "unused_args.m"
            transform_hlds__unused_args__succeeded = mercury__map__is_empty_1_p_0(transform_hlds__unused_args__TypeCtorInfo_48_48, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0, transform_hlds__unused_args__ProcCallInfo_28);
          }
#line 301 "unused_args.m"
          if (transform_hlds__unused_args__succeeded)
#line 301 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_30 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_46_46;
#line 301 "unused_args.m"
          else
#line 304 "unused_args.m"
            {
#line 304 "unused_args.m"
              hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_46_46, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_30);
            }
#line 291 "unused_args.m"
        }
#line 306 "unused_args.m"
        break;
#line 306 "unused_args.m"
    }
#line 233 "unused_args.m"
  }
#line 60 "unused_args.m"
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
