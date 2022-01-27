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
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_conversion.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.mmc_analysis.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 916 "unused_args.m"
struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s {
#line 916 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__VarUsage_1;
#line 916 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5;
#line 919 "unused_args.m"
  MR_bool transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded;
#line 922 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__VarDep0_20;
#line 922 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgDep0_21;
#line 928 "unused_args.m"
  jmp_buf transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_0;
#line 928 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__PredProc_23;
#line 928 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgVar_24;
#line 928 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__Argument_34;
#line 928 "unused_args.m"
  MR_Box transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv1_Argument_34;
#line 936 "unused_args.m"
  jmp_buf transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_1;
#line 936 "unused_args.m"
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__X_35;
#line 936 "unused_args.m"
  MR_Box transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv3_X_35;
#line 916 "unused_args.m"
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

#line 205 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_f_0(void);

#line 201 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(void);

#line 198 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0(void);

#line 220 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(
#line 220 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_10,
#line 220 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_3);

#line 215 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_93_95_48_3_p_0(
#line 215 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer1_5,
#line 215 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer2_6);

#line 184 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_103_101_116_95_102_117_110_99_95_105_110_102_111_95_54_95_95_91_52_44_32_53_93_95_48_6_p_0(
#line 184 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_17,
#line 184 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleName_18,
#line 184 "unused_args.m"
  MR_Word transform_hlds__unused_args__FuncId_19,
#line 184 "unused_args.m"
  MR_Word * transform_hlds__unused_args__FuncInfo_22);

#line 183 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 182 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_50_95_95_91_50_93_95_48_2_f_0(
#line 182 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1);

#line 181 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 180 "unused_args.m"
static MR_Integer MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 179 "unused_args.m"
static MR_String MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 1859 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_117_110_117_115_101_100_95_97_114_103_115_95_95_91_49_93_95_48_3_f_0(
#line 1859 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredInfo_6,
#line 1859 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_7);

#line 1811 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_97_114_110_95_117_110_117_115_101_100_95_97_114_103_115_95_95_91_50_93_95_48_10_p_0(
#line 1811 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1811 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredInfo_3,
#line 1811 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_4,
#line 1811 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_5,
#line 1811 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs0_6,
#line 1811 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_7,
#line 1811 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_8,
#line 1811 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Specs_0_9,
#line 1811 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Specs_10);

#line 1266 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0(
#line 1266 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ArgNo_5,
#line 1266 "unused_args.m"
  MR_Word transform_hlds__unused_args__ElemsToRemove_6,
#line 1266 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_List_0_14,
#line 1266 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_List_15);

#line 1124 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(
#line 1124 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_8,
#line 1124 "unused_args.m"
  MR_Word transform_hlds__unused_args__Status_9,
#line 1124 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__4_4,
#line 1124 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44,
#line 1124 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_PredInfo_45);

#line 869 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_117_115_101_100_95_97_114_103_115_95_112_97_115_115_95_95_91_50_93_95_48_5_p_0(
#line 869 "unused_args.m"
  MR_Integer transform_hlds__unused_args__PassNum_6,
#line 869 "unused_args.m"
  MR_Word transform_hlds__unused_args__LocalPredProcs_8,
#line 869 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_12,
#line 869 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_13);

#line 1021 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_create_new_pred__1021__1_3_p_0(
#line 1021 "unused_args.m"
  MR_Word transform_hlds__unused_args__FuncInfo_25,
#line 1021 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer_26,
#line 1021 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_56);

#line 1014 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__IntroducedFrom__func__unused_args_create_new_pred__1014__1_1_f_0(
#line 1014 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_54);

#line 697 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__697__1_2_p_0(
#line 697 "unused_args.m"
  MR_Word transform_hlds__unused_args__LHS_49,
#line 697 "unused_args.m"
  MR_Word transform_hlds__unused_args__CellVar_58);

#line 715 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__715__1_2_p_0(
#line 715 "unused_args.m"
  MR_Word transform_hlds__unused_args__LHS_49,
#line 715 "unused_args.m"
  MR_Word transform_hlds__unused_args__CellVar_144);

#line 674 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__674__1_2_p_0(
#line 674 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_116,
#line 674 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_117);

#line 443 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__setup_proc_args__443__1_3_p_0(
#line 443 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVars_35,
#line 443 "unused_args.m"
  MR_Integer transform_hlds__unused_args__HeadVar__2_84,
#line 443 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__3_85);

#line 208 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__from_term_2_2_p_0(
#line 208 "unused_args.m"
  MR_Word transform_hlds__unused_args__Term_3);

#line 205 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__to_term_1_1_f_0(void);

#line 227 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__from_term_2_2_p_0(
#line 227 "unused_args.m"
  MR_Word transform_hlds__unused_args__Term_4,
#line 227 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2);

#line 224 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__to_term_1_1_f_0(
#line 224 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1);

#line 201 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__equivalent_3_3_p_0(
#line 201 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_7);

#line 198 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__more_precise_than_3_3_p_0(
#line 198 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_4);

#line 220 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__equivalent_3_3_p_0(
#line 220 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_9,
#line 220 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_10,
#line 220 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_3);

#line 215 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__more_precise_than_3_3_p_0(
#line 215 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_4,
#line 215 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer1_5,
#line 215 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer2_6);

#line 184 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__get_func_info_6_6_p_0(
#line 184 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_17,
#line 184 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleName_18,
#line 184 "unused_args.m"
  MR_Word transform_hlds__unused_args__FuncId_19,
#line 184 "unused_args.m"
  MR_Word * transform_hlds__unused_args__FuncInfo_22);

#line 183 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__top_2_2_f_0(
#line 183 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_12);

#line 182 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__bottom_2_2_f_0(
#line 182 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1);

#line 181 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0(void);

#line 180 "unused_args.m"
static MR_Integer MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_version_number_2_2_f_0(void);

#line 179 "unused_args.m"
static MR_String MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_name_2_2_f_0(void);

#line 151 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____warning_info_0_0(
#line 151 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 151 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 151 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 151 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____warning_info_0_0(
#line 151 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 151 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 149 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____var_usage_0_0(
#line 149 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 149 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 149 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 149 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_usage_0_0(
#line 149 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 149 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 146 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____var_dep_0_0(
#line 146 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 146 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 146 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 146 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_dep_0_0(
#line 146 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 146 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 141 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____usage_info_0_0(
#line 141 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 141 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 141 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 141 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____usage_info_0_0(
#line 141 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 141 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 616 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_info_0_0(
#line 616 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 616 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 616 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 616 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_info_0_0(
#line 616 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 616 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 978 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____proc_call_info_0_0(
#line 978 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 978 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 978 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 978 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____proc_call_info_0_0(
#line 978 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 978 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 982 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____new_proc_info_0_0(
#line 982 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 982 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 982 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 982 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____new_proc_info_0_0(
#line 982 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 982 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 1406 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____fixup_info_0_0(
#line 1406 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 1406 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 1406 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 1406 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____fixup_info_0_0(
#line 1406 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1406 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 132 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____arg_var_in_proc_0_0(
#line 132 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 132 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 132 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3);

#line 132 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____arg_var_in_proc_0_0(
#line 132 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 132 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2);

#line 1969 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_2_4_p_0(
#line 1969 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 1969 "unused_args.m"
  MR_Word transform_hlds__unused_args__CalleePredProcId_6,
#line 1969 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_17,
#line 1969 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_18);

#line 1966 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_4_p_0_1(
#line 1966 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1966 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1966 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1966 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3);

#line 1958 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_4_p_0(
#line 1958 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 1958 "unused_args.m"
  MR_Word transform_hlds__unused_args__CallerPredProcId_6,
#line 1958 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_12,
#line 1958 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_13);

#line 1921 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__maybe_record_intermod_unused_args_2_7_p_0(
#line 1921 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_8,
#line 1921 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_9,
#line 1921 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_10,
#line 1921 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredInfo_11,
#line 1921 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_12,
#line 1921 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_19,
#line 1921 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_20);

#line 1917 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0_1(
#line 1917 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1917 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1917 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1917 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3);

#line 1909 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0(
#line 1909 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_6,
#line 1909 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_7,
#line 1909 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_8,
#line 1909 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_12,
#line 1909 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_13);

#line 1894 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__format_arg_list_2_2_f_0(
#line 1894 "unused_args.m"
  MR_Integer transform_hlds__unused_args__First_4,
#line 1894 "unused_args.m"
  MR_Word transform_hlds__unused_args__List_5);

#line 1843 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__adjust_unused_args_3_p_0(
#line 1843 "unused_args.m"
  MR_Integer transform_hlds__unused_args__NumToDrop_1,
#line 1843 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 1843 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__3_3);

#line 1781 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__write_unused_args_to_opt_file_6_p_0(
#line 1781 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1781 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredInfo_2,
#line 1781 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_3,
#line 1781 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_4);

#line 1715 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__output_warnings_and_pragmas_10_p_0(
#line 1715 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_1,
#line 1715 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_2,
#line 1715 "unused_args.m"
  MR_Word transform_hlds__unused_args__WriteOptPragmas_3,
#line 1715 "unused_args.m"
  MR_Word transform_hlds__unused_args__DoWarn_4,
#line 1715 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__5_5,
#line 1715 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_6,
#line 1715 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Specs_0_7,
#line 1715 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Specs_8);

#line 1666 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__check_deconstruct_args_6_p_0(
#line 1666 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_7,
#line 1666 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedVars_8,
#line 1666 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_9,
#line 1666 "unused_args.m"
  MR_Word transform_hlds__unused_args__Modes_10,
#line 1666 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_SomeUsed_0_21,
#line 1666 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_12);

#line 1623 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__need_unify_4_p_0(
#line 1623 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 1623 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedVars_6,
#line 1623 "unused_args.m"
  MR_Word transform_hlds__unused_args__Unify_7,
#line 1623 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_8);

#line 1605 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_cases_6_p_0(
#line 1605 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1605 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2,
#line 1605 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_3,
#line 1605 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_4,
#line 1605 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5,
#line 1605 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_6);

#line 1590 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_disjuncts_6_p_0(
#line 1590 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1590 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2,
#line 1590 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_3,
#line 1590 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_4,
#line 1590 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5,
#line 1590 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_6);

#line 1567 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_conjuncts_6_p_0(
#line 1567 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1567 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2,
#line 1567 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_3,
#line 1567 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_4,
#line 1567 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5,
#line 1567 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_6);

#line 1535 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__rename_apart_unused_foreign_arg_8_p_0(
#line 1535 "unused_args.m"
  MR_Word transform_hlds__unused_args__Arg0_9,
#line 1535 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Arg_10,
#line 1535 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Subst_0_26,
#line 1535 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Subst_27,
#line 1535 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_28,
#line 1535 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_29,
#line 1535 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_30,
#line 1535 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_31);

#line 1523 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0_2(
#line 1523 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1523 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1523 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2,
#line 1523 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_3,
#line 1523 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_4,
#line 1523 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_5,
#line 1523 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_6,
#line 1523 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_7,
#line 1523 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_8);

#line 1521 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0_1(
#line 1521 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1521 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1521 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2,
#line 1521 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_3,
#line 1521 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_4,
#line 1521 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_5,
#line 1521 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_6,
#line 1521 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_7,
#line 1521 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_8);

#line 1433 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(
#line 1433 "unused_args.m"
  MR_Word transform_hlds__unused_args__Goal0_6,
#line 1433 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Goal_7,
#line 1433 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_76,
#line 1433 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_77,
#line 1433 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_9);

#line 1417 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(
#line 1417 "unused_args.m"
  MR_Word transform_hlds__unused_args__Goal0_6,
#line 1417 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Goal_7,
#line 1417 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_15,
#line 1417 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_16,
#line 1417 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_9);

#line 1338 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__do_unused_args_fixup_proc_5_p_0(
#line 1338 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_6,
#line 1338 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 1338 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcCallInfo_9,
#line 1338 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo0_10,
#line 1338 "unused_args.m"
  MR_Word * transform_hlds__unused_args__ModuleInfo_11);

#line 1314 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_proc_8_p_0(
#line 1314 "unused_args.m"
  MR_Word transform_hlds__unused_args__VeryVerbose_9,
#line 1314 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_10,
#line 1314 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcCallInfo_11,
#line 1314 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProc_12,
#line 1314 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_20,
#line 1314 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_21);

#line 1309 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_module_8_p_0_1(
#line 1309 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1309 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1309 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1309 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3,
#line 1309 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_4,
#line 1309 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_5);

#line 1303 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_module_8_p_0(
#line 1303 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_9,
#line 1303 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcs_10,
#line 1303 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcCallInfo_11,
#line 1303 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_15,
#line 1303 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_16,
#line 1303 "unused_args.m"
  MR_Word transform_hlds__unused_args__VeryVerbose_13);

#line 1288 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__get_unused_arg_nos_4_p_0(
#line 1288 "unused_args.m"
  MR_Word transform_hlds__unused_args__LocalVars_1,
#line 1288 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 1288 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ArgNo_3,
#line 1288 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__4_4);

#line 1231 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__make_imported_unused_args_pred_info_6_p_0(
#line 1231 "unused_args.m"
  MR_Word transform_hlds__unused_args__OptProc_7,
#line 1231 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_8,
#line 1231 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_0_31,
#line 1231 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_32,
#line 1231 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_33,
#line 1231 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_34);

#line 1192 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__create_call_goal_7_p_0(
#line 1192 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_8,
#line 1192 "unused_args.m"
  MR_Word transform_hlds__unused_args__NewPredId_9,
#line 1192 "unused_args.m"
  MR_Integer transform_hlds__unused_args__NewProcId_10,
#line 1192 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredModule_11,
#line 1192 "unused_args.m"
  MR_String transform_hlds__unused_args__PredName_12,
#line 1192 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34,
#line 1192 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OldProc_35);

#line 1098 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__make_intermod_proc_10_p_0(
#line 1098 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_11,
#line 1098 "unused_args.m"
  MR_Word transform_hlds__unused_args__NewPredId_12,
#line 1098 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_13,
#line 1098 "unused_args.m"
  MR_String transform_hlds__unused_args__NewPredName_14,
#line 1098 "unused_args.m"
  MR_Word transform_hlds__unused_args__OrigPredInfo_15,
#line 1098 "unused_args.m"
  MR_Word transform_hlds__unused_args__OrigProcInfo_16,
#line 1098 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_17,
#line 1098 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs2_18,
#line 1098 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_35,
#line 1098 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_36);

#line 1093 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_4(
#line 1093 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1093 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1093 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1093 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3);

#line 1026 "unused_args.m"
static MR_Box MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_3(
#line 1026 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1026 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1);

#line 1021 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_2(
#line 1021 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1021 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1);

#line 1014 "unused_args.m"
static MR_Box MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_1(
#line 1014 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1014 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1);

#line 992 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0(
#line 992 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_7,
#line 992 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 992 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_0_46,
#line 992 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_47,
#line 992 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48,
#line 992 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_49);

#line 956 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__get_unused_arg_info_5_p_0(
#line 956 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_1,
#line 956 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 956 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_3,
#line 956 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_0_4,
#line 956 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_5);

#line 928 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_1(
#line 928 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 928 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_3(
#line 928 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 928 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_2(
#line 928 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 928 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_4(
#line 928 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 936 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_5(
#line 936 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 936 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_7(
#line 936 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 936 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_6(
#line 936 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 936 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_8(
#line 936 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg);

#line 916 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0(
#line 916 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_1,
#line 916 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 916 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_3,
#line 916 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_4,
#line 916 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_LocalVars_0_5,
#line 916 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_LocalVars_6);

#line 888 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_single_pass_5_p_0(
#line 888 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 888 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_2,
#line 888 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_3,
#line 888 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4,
#line 888 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_5);

#line 854 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(
#line 854 "unused_args.m"
  MR_Word transform_hlds__unused_args__Info_1,
#line 854 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 854 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3,
#line 854 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_4);

#line 848 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__list_case_to_list_goal_2_p_0(
#line 848 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 848 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2);

#line 833 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_construction_aliases_4_p_0(
#line 833 "unused_args.m"
  MR_Word transform_hlds__unused_args__Alias_1,
#line 833 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 833 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3,
#line 833 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_4);

#line 787 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__partition_deconstruct_args_5_p_0(
#line 787 "unused_args.m"
  MR_Word transform_hlds__unused_args__Info_6,
#line 787 "unused_args.m"
  MR_Word transform_hlds__unused_args__ArgVars_7,
#line 787 "unused_args.m"
  MR_Word transform_hlds__unused_args__ArgModes_8,
#line 787 "unused_args.m"
  MR_Word * transform_hlds__unused_args__InputVars_9,
#line 787 "unused_args.m"
  MR_Word * transform_hlds__unused_args__OutputVars_10);

#line 778 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_rev_arg_dep_5_p_0(
#line 778 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_6,
#line 778 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcId_7,
#line 778 "unused_args.m"
  MR_Word transform_hlds__unused_args__Arg_8,
#line 778 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_10,
#line 778 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_11);

#line 746 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_pred_call_arg_dep_5_p_0(
#line 746 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProc_6,
#line 746 "unused_args.m"
  MR_Word transform_hlds__unused_args__LocalArguments_7,
#line 746 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVarIds_8,
#line 746 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_14,
#line 746 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_15);

#line 697 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_3(
#line 697 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg);

#line 715 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_2(
#line 715 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg);

#line 674 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_1(
#line 674 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 674 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 674 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2);

#line 622 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(
#line 622 "unused_args.m"
  MR_Word transform_hlds__unused_args__Info_5,
#line 622 "unused_args.m"
  MR_Word transform_hlds__unused_args__Goal_6,
#line 622 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87,
#line 622 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);

#line 600 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__set_var_used_3_p_0(
#line 600 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_4,
#line 600 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_6,
#line 600 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_7);

#line 594 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__set_list_vars_used_3_p_0(
#line 594 "unused_args.m"
  MR_Word transform_hlds__unused_args__Vars_4,
#line 594 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_6,
#line 594 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_7);

#line 581 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_aliases_4_p_0(
#line 581 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_5,
#line 581 "unused_args.m"
  MR_Word transform_hlds__unused_args__Aliases_6,
#line 581 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_12,
#line 581 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_13);

#line 574 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__local_var_is_used_2_p_0(
#line 574 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarDep_3,
#line 574 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_4);

#line 561 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_output_args_4_p_0_1(
#line 561 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 561 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 561 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 561 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3);

#line 555 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_output_args_4_p_0(
#line 555 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 555 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcInfo_6,
#line 555 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_9,
#line 555 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_10);

#line 545 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__tvar_to_type_info_var_3_p_0(
#line 545 "unused_args.m"
  MR_Word transform_hlds__unused_args__RttiVarMaps_4,
#line 545 "unused_args.m"
  MR_Word transform_hlds__unused_args__TVar_5,
#line 545 "unused_args.m"
  MR_Word * transform_hlds__unused_args__TypeInfoVar_6);

#line 543 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_2(
#line 543 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 543 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 543 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 543 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3);

#line 542 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_1(
#line 542 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 542 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 542 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2);

#line 527 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0(
#line 527 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 527 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarTypeMap_2,
#line 527 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcId_3,
#line 527 "unused_args.m"
  MR_Word transform_hlds__unused_args__RttiVarMaps_4,
#line 527 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_5,
#line 527 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_6);

#line 507 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__initialise_vardep_3_p_0(
#line 507 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 507 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_2,
#line 507 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_3);

#line 443 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_proc_args_10_p_0_1(
#line 443 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 443 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 443 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2);

#line 408 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_proc_args_10_p_0(
#line 408 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_11,
#line 408 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_12,
#line 408 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_47,
#line 408 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_48,
#line 408 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredProcs_0_49,
#line 408 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_PredProcs_50,
#line 408 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_51,
#line 408 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OptProcs_52,
#line 408 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53,
#line 408 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_54);

#line 393 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_pred_args_10_p_0(
#line 393 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_1,
#line 393 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 393 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_3,
#line 393 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_4,
#line 393 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredProcs_0_5,
#line 393 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_PredProcs_6,
#line 393 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_7,
#line 393 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OptProcs_8,
#line 393 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_9,
#line 393 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_10);

#line 350 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_local_var_usage_9_p_0(
#line 350 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 350 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_2,
#line 350 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_3,
#line 350 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__4_4,
#line 350 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__5_5,
#line 350 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_6,
#line 350 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OptProcs_7,
#line 350 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_8,
#line 350 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_9);

#line 338 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__init_var_usage_5_p_0(
#line 338 "unused_args.m"
  MR_Word * transform_hlds__unused_args__VarUsage_6,
#line 338 "unused_args.m"
  MR_Word * transform_hlds__unused_args__PredProcList_7,
#line 338 "unused_args.m"
  MR_Word * transform_hlds__unused_args__ProcCallInfo_8,
#line 338 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_13,
#line 338 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_14);

#line 172 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__get_unused_args_1_f_0(
#line 172 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_3);

#line 311 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_6_p_0_3(
#line 311 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 311 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 311 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 311 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3,
#line 311 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_4,
#line 311 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_5);

#line 302 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_6_p_0_2(
#line 302 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 302 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 302 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 302 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3);

#line 300 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_6_p_0_1(
#line 300 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 300 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 300 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 300 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_1[24][2];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_2[14][3];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_3[6][5];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_4[5][6];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_5[2][8];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_6[1][7];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_7[1][9];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_8[1][13];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_9[3][1];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_10[2][11];

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
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_10[1])),
    ((MR_Box) (transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_10[1])),
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

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_7[1][9] = {
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

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_10[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__unused_args__type_ctor_info_new_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
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



#line 2590 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2598 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0
  }
};

#line 2607 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__unused_args__type_ctor_info_new_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0
  }
};

#line 2616 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2624 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2632 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2640 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2648 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unused_args__type_ctor_info_usage_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0
  }
};

#line 2657 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__analysis__pti_analysis_result_2__plain_transform_hlds__unused_args__type_ctor_info_unused_args_call_0__plain_transform_hlds__unused_args__type_ctor_info_unused_args_answer_0 = {
  &analysis__analysis__type_ctor_info_analysis_result_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0,
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0
  }
};

#line 2666 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2674 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0
  }
};

#line 2683 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0
  }
};

#line 2692 "transform_hlds.unused_args.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2701 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_arg_var_in_proc_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2707 "transform_hlds.unused_args.c"
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

#line 2722 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_arg_var_in_proc_0_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_arg_var_in_proc_0_0
};

#line 2727 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_arg_var_in_proc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_arg_var_in_proc_0_0
  }
};

#line 2736 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_arg_var_in_proc_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_arg_var_in_proc_0_0
};

#line 2741 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_arg_var_in_proc_0[1] = {
  (MR_Integer) 0
};

#line 2746 "transform_hlds.unused_args.c"
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

#line 2763 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__unused_args__type_ctor_info_new_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0
  }
};

#line 2772 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2780 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2788 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2797 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_fixup_info_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__unused_args__type_ctor_info_new_proc_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 2806 "transform_hlds.unused_args.c"
static const MR_ConstString transform_hlds__unused_args__transform_hlds__unused_args__field_names_fixup_info_0_0[5] = {
  (MR_String) "fixup_module_info",
  (MR_String) "fixup_proc_call_info",
  (MR_String) "fixup_unused_vars",
  (MR_String) "fixup_varset",
  (MR_String) "fixup_vartypes"
};

#line 2815 "transform_hlds.unused_args.c"
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

#line 2830 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_fixup_info_0_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_fixup_info_0_0
};

#line 2835 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_fixup_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_fixup_info_0_0
  }
};

#line 2844 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_fixup_info_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_fixup_info_0_0
};

#line 2849 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_fixup_info_0[1] = {
  (MR_Integer) 0
};

#line 2854 "transform_hlds.unused_args.c"
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

#line 2871 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_new_proc_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 2879 "transform_hlds.unused_args.c"
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

#line 2894 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_new_proc_info_0_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_new_proc_info_0_0
};

#line 2899 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_new_proc_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_new_proc_info_0_0
  }
};

#line 2908 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_new_proc_info_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_new_proc_info_0_0
};

#line 2913 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_new_proc_info_0[1] = {
  (MR_Integer) 0
};

#line 2918 "transform_hlds.unused_args.c"
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

#line 2935 "transform_hlds.unused_args.c"
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

#line 2952 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_answer_0[1] = {
  (MR_Integer) 0
};

#line 2957 "transform_hlds.unused_args.c"
static const MR_NotagFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__notag_functor_desc_unused_args_answer_0 = {
  (MR_String) "unused_args",
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_String) "args"
};

#line 2964 "transform_hlds.unused_args.c"
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

#line 2981 "transform_hlds.unused_args.c"
static const MR_EnumFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_unused_args_call_0_0 = {
  (MR_String) "unused_args_call",
  (MR_Integer) 0
};

#line 2987 "transform_hlds.unused_args.c"
static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_value_ordered_unused_args_call_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_unused_args_call_0_0
};

#line 2992 "transform_hlds.unused_args.c"
static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_name_ordered_unused_args_call_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_unused_args_call_0_0
};

#line 2997 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_call_0[1] = {
  (MR_Integer) 0
};

#line 3002 "transform_hlds.unused_args.c"
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

#line 3019 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_func_info_0[1] = {
  (MR_Integer) 0
};

#line 3024 "transform_hlds.unused_args.c"
static const MR_NotagFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__notag_functor_desc_unused_args_func_info_0 = {
  (MR_String) "unused_args_func_info",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 3031 "transform_hlds.unused_args.c"
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

#line 3048 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_unused_args_info_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 3054 "transform_hlds.unused_args.c"
static const MR_ConstString transform_hlds__unused_args__transform_hlds__unused_args__field_names_unused_args_info_0_0[2] = {
  (MR_String) "unarg_module_info",
  (MR_String) "unarg_vartypes"
};

#line 3060 "transform_hlds.unused_args.c"
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

#line 3075 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_unused_args_info_0_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_unused_args_info_0_0
};

#line 3080 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_unused_args_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_unused_args_info_0_0
  }
};

#line 3089 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_unused_args_info_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_unused_args_info_0_0
};

#line 3094 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_info_0[1] = {
  (MR_Integer) 0
};

#line 3099 "transform_hlds.unused_args.c"
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

#line 3116 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3124 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__set_ordlist__ti_set_ordlist_1transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0
  }
};

#line 3132 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_usage_info_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__set_ordlist__ti_set_ordlist_1transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0
};

#line 3138 "transform_hlds.unused_args.c"
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

#line 3153 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_usage_info_0_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_usage_info_0_0
};

#line 3158 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_usage_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_usage_info_0_0
  }
};

#line 3167 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_usage_info_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_usage_info_0_0
};

#line 3172 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_usage_info_0[1] = {
  (MR_Integer) 0
};

#line 3177 "transform_hlds.unused_args.c"
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

#line 3194 "transform_hlds.unused_args.c"
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

#line 3211 "transform_hlds.unused_args.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0
  }
};

#line 3220 "transform_hlds.unused_args.c"
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

#line 3237 "transform_hlds.unused_args.c"
static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_warning_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 3245 "transform_hlds.unused_args.c"
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

#line 3260 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_warning_info_0_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_warning_info_0_0
};

#line 3265 "transform_hlds.unused_args.c"
static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_warning_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_warning_info_0_0
  }
};

#line 3274 "transform_hlds.unused_args.c"
static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_warning_info_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_warning_info_0_0
};

#line 3279 "transform_hlds.unused_args.c"
static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_warning_info_0[1] = {
  (MR_Integer) 0
};

#line 3284 "transform_hlds.unused_args.c"
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

#line 3301 "transform_hlds.unused_args.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__to_term__arity1__transform_hlds__unused_args__unused_args_answer__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__to_term_1_1_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__from_term_2_2_p_0_10001))
};

#line 3312 "transform_hlds.unused_args.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__to_term__arity1__transform_hlds__unused_args__unused_args_call__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__to_term_1_1_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__from_term_2_2_p_0_10001))
};

#line 3323 "transform_hlds.unused_args.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__partial_order__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__equivalent_3_3_p_0_10001))
};

#line 3334 "transform_hlds.unused_args.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__partial_order__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__equivalent_3_3_p_0_10001))
};

#line 3345 "transform_hlds.unused_args.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__call_pattern__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__[5] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0))
};

#line 3354 "transform_hlds.unused_args.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__answer_pattern__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0__[5] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0))
};

#line 3363 "transform_hlds.unused_args.c"
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

#line 3378 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____arg_var_in_proc_0_0_10001(
#line 3381 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3383 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3385 "transform_hlds.unused_args.c"
{
#line 3387 "transform_hlds.unused_args.c"
  {
#line 3389 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3392 "transform_hlds.unused_args.c"
    {
#line 3394 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____arg_var_in_proc_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3397 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3399 "transform_hlds.unused_args.c"
  }
#line 3401 "transform_hlds.unused_args.c"
}

#line 3404 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____arg_var_in_proc_0_0_10001(
#line 3407 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3409 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3411 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3413 "transform_hlds.unused_args.c"
{
#line 3415 "transform_hlds.unused_args.c"
  {
#line 3417 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3420 "transform_hlds.unused_args.c"
    {
#line 3422 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____arg_var_in_proc_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3425 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3427 "transform_hlds.unused_args.c"
  }
#line 3429 "transform_hlds.unused_args.c"
}

#line 3432 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____fixup_info_0_0_10001(
#line 3435 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3437 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3439 "transform_hlds.unused_args.c"
{
#line 3441 "transform_hlds.unused_args.c"
  {
#line 3443 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3446 "transform_hlds.unused_args.c"
    {
#line 3448 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____fixup_info_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3451 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3453 "transform_hlds.unused_args.c"
  }
#line 3455 "transform_hlds.unused_args.c"
}

#line 3458 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____fixup_info_0_0_10001(
#line 3461 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3463 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3465 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3467 "transform_hlds.unused_args.c"
{
#line 3469 "transform_hlds.unused_args.c"
  {
#line 3471 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3474 "transform_hlds.unused_args.c"
    {
#line 3476 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____fixup_info_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3479 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3481 "transform_hlds.unused_args.c"
  }
#line 3483 "transform_hlds.unused_args.c"
}

#line 3486 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____new_proc_info_0_0_10001(
#line 3489 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3491 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3493 "transform_hlds.unused_args.c"
{
#line 3495 "transform_hlds.unused_args.c"
  {
#line 3497 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3500 "transform_hlds.unused_args.c"
    {
#line 3502 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____new_proc_info_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3505 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3507 "transform_hlds.unused_args.c"
  }
#line 3509 "transform_hlds.unused_args.c"
}

#line 3512 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____new_proc_info_0_0_10001(
#line 3515 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3517 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3519 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3521 "transform_hlds.unused_args.c"
{
#line 3523 "transform_hlds.unused_args.c"
  {
#line 3525 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3528 "transform_hlds.unused_args.c"
    {
#line 3530 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____new_proc_info_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3533 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3535 "transform_hlds.unused_args.c"
  }
#line 3537 "transform_hlds.unused_args.c"
}

#line 3540 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____proc_call_info_0_0_10001(
#line 3543 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3545 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3547 "transform_hlds.unused_args.c"
{
#line 3549 "transform_hlds.unused_args.c"
  {
#line 3551 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3554 "transform_hlds.unused_args.c"
    {
#line 3556 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____proc_call_info_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3559 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3561 "transform_hlds.unused_args.c"
  }
#line 3563 "transform_hlds.unused_args.c"
}

#line 3566 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____proc_call_info_0_0_10001(
#line 3569 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3571 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3573 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3575 "transform_hlds.unused_args.c"
{
#line 3577 "transform_hlds.unused_args.c"
  {
#line 3579 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3582 "transform_hlds.unused_args.c"
    {
#line 3584 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____proc_call_info_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3587 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3589 "transform_hlds.unused_args.c"
  }
#line 3591 "transform_hlds.unused_args.c"
}

#line 3594 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_answer_0_0_10001(
#line 3597 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3599 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3601 "transform_hlds.unused_args.c"
{
#line 3603 "transform_hlds.unused_args.c"
  {
#line 3605 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3608 "transform_hlds.unused_args.c"
    {
#line 3610 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____unused_args_answer_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3613 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3615 "transform_hlds.unused_args.c"
  }
#line 3617 "transform_hlds.unused_args.c"
}

#line 3620 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_answer_0_0_10001(
#line 3623 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3625 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3627 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3629 "transform_hlds.unused_args.c"
{
#line 3631 "transform_hlds.unused_args.c"
  {
#line 3633 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3636 "transform_hlds.unused_args.c"
    {
#line 3638 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____unused_args_answer_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3641 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3643 "transform_hlds.unused_args.c"
  }
#line 3645 "transform_hlds.unused_args.c"
}

#line 3648 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_call_0_0_10001(
#line 3651 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3653 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3655 "transform_hlds.unused_args.c"
{
#line 3657 "transform_hlds.unused_args.c"
  {
#line 3659 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3662 "transform_hlds.unused_args.c"
    {
#line 3664 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____unused_args_call_0_0();
    }
#line 3667 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3669 "transform_hlds.unused_args.c"
  }
#line 3671 "transform_hlds.unused_args.c"
}

#line 3674 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_call_0_0_10001(
#line 3677 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3679 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3681 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3683 "transform_hlds.unused_args.c"
{
#line 3685 "transform_hlds.unused_args.c"
  {
#line 3687 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3690 "transform_hlds.unused_args.c"
    {
#line 3692 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____unused_args_call_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1);
    }
#line 3695 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3697 "transform_hlds.unused_args.c"
  }
#line 3699 "transform_hlds.unused_args.c"
}

#line 3702 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_func_info_0_0_10001(
#line 3705 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3707 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3709 "transform_hlds.unused_args.c"
{
#line 3711 "transform_hlds.unused_args.c"
  {
#line 3713 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3716 "transform_hlds.unused_args.c"
    {
#line 3718 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____unused_args_func_info_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3721 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3723 "transform_hlds.unused_args.c"
  }
#line 3725 "transform_hlds.unused_args.c"
}

#line 3728 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_func_info_0_0_10001(
#line 3731 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3733 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3735 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3737 "transform_hlds.unused_args.c"
{
#line 3739 "transform_hlds.unused_args.c"
  {
#line 3741 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3744 "transform_hlds.unused_args.c"
    {
#line 3746 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____unused_args_func_info_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3749 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3751 "transform_hlds.unused_args.c"
  }
#line 3753 "transform_hlds.unused_args.c"
}

#line 3756 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_info_0_0_10001(
#line 3759 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3761 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3763 "transform_hlds.unused_args.c"
{
#line 3765 "transform_hlds.unused_args.c"
  {
#line 3767 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3770 "transform_hlds.unused_args.c"
    {
#line 3772 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____unused_args_info_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3775 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3777 "transform_hlds.unused_args.c"
  }
#line 3779 "transform_hlds.unused_args.c"
}

#line 3782 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_info_0_0_10001(
#line 3785 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3787 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3789 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3791 "transform_hlds.unused_args.c"
{
#line 3793 "transform_hlds.unused_args.c"
  {
#line 3795 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3798 "transform_hlds.unused_args.c"
    {
#line 3800 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____unused_args_info_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3803 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3805 "transform_hlds.unused_args.c"
  }
#line 3807 "transform_hlds.unused_args.c"
}

#line 3810 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____usage_info_0_0_10001(
#line 3813 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3815 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3817 "transform_hlds.unused_args.c"
{
#line 3819 "transform_hlds.unused_args.c"
  {
#line 3821 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3824 "transform_hlds.unused_args.c"
    {
#line 3826 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____usage_info_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3829 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3831 "transform_hlds.unused_args.c"
  }
#line 3833 "transform_hlds.unused_args.c"
}

#line 3836 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____usage_info_0_0_10001(
#line 3839 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3841 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3843 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3845 "transform_hlds.unused_args.c"
{
#line 3847 "transform_hlds.unused_args.c"
  {
#line 3849 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3852 "transform_hlds.unused_args.c"
    {
#line 3854 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____usage_info_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3857 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3859 "transform_hlds.unused_args.c"
  }
#line 3861 "transform_hlds.unused_args.c"
}

#line 3864 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_dep_0_0_10001(
#line 3867 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3869 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3871 "transform_hlds.unused_args.c"
{
#line 3873 "transform_hlds.unused_args.c"
  {
#line 3875 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3878 "transform_hlds.unused_args.c"
    {
#line 3880 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____var_dep_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3883 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3885 "transform_hlds.unused_args.c"
  }
#line 3887 "transform_hlds.unused_args.c"
}

#line 3890 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____var_dep_0_0_10001(
#line 3893 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3895 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3897 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3899 "transform_hlds.unused_args.c"
{
#line 3901 "transform_hlds.unused_args.c"
  {
#line 3903 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3906 "transform_hlds.unused_args.c"
    {
#line 3908 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____var_dep_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3911 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3913 "transform_hlds.unused_args.c"
  }
#line 3915 "transform_hlds.unused_args.c"
}

#line 3918 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_usage_0_0_10001(
#line 3921 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3923 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3925 "transform_hlds.unused_args.c"
{
#line 3927 "transform_hlds.unused_args.c"
  {
#line 3929 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3932 "transform_hlds.unused_args.c"
    {
#line 3934 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____var_usage_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3937 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3939 "transform_hlds.unused_args.c"
  }
#line 3941 "transform_hlds.unused_args.c"
}

#line 3944 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____var_usage_0_0_10001(
#line 3947 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 3949 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 3951 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 3953 "transform_hlds.unused_args.c"
{
#line 3955 "transform_hlds.unused_args.c"
  {
#line 3957 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 3960 "transform_hlds.unused_args.c"
    {
#line 3962 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____var_usage_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 3965 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 3967 "transform_hlds.unused_args.c"
  }
#line 3969 "transform_hlds.unused_args.c"
}

#line 3972 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____warning_info_0_0_10001(
#line 3975 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 3977 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2)
#line 3979 "transform_hlds.unused_args.c"
{
#line 3981 "transform_hlds.unused_args.c"
  {
#line 3983 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;

#line 3986 "transform_hlds.unused_args.c"
    {
#line 3988 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____warning_info_0_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2));
    }
#line 3991 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 3993 "transform_hlds.unused_args.c"
  }
#line 3995 "transform_hlds.unused_args.c"
}

#line 3998 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args____Compare____warning_info_0_0_10001(
#line 4001 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_1,
#line 4003 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 4005 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 4007 "transform_hlds.unused_args.c"
{
#line 4009 "transform_hlds.unused_args.c"
  {
#line 4011 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__1_1;

#line 4014 "transform_hlds.unused_args.c"
    {
#line 4016 "transform_hlds.unused_args.c"
      transform_hlds__unused_args____Compare____warning_info_0_0(&transform_hlds__unused_args__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 4019 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_1 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__1_1));
#line 4021 "transform_hlds.unused_args.c"
  }
#line 4023 "transform_hlds.unused_args.c"
}

#line 4026 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__to_term_1_1_f_0_10001(
#line 4029 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4031 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1)
#line 4033 "transform_hlds.unused_args.c"
{
#line 4035 "transform_hlds.unused_args.c"
  {
#line 4037 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__wrapper_arg_2;
#line 4039 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4041 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_Term_4;

#line 4044 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4046 "transform_hlds.unused_args.c"
    {
#line 4048 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__conv0_Term_4 = transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__to_term_1_1_f_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 4051 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv0_Term_4));
#line 4053 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__wrapper_arg_2;
#line 4055 "transform_hlds.unused_args.c"
  }
#line 4057 "transform_hlds.unused_args.c"
}

#line 4060 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__from_term_2_2_p_0_10001(
#line 4063 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4065 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 4067 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2)
#line 4069 "transform_hlds.unused_args.c"
{
#line 4071 "transform_hlds.unused_args.c"
  {
#line 4073 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;
#line 4075 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4077 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__2_2;

#line 4080 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4082 "transform_hlds.unused_args.c"
    {
#line 4084 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__from_term_2_2_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), &transform_hlds__unused_args__conv0_HeadVar__2_2);
    }
#line 4087 "transform_hlds.unused_args.c"
    if (transform_hlds__unused_args__succeeded)
#line 4089 "transform_hlds.unused_args.c"
      {
#line 4091 "transform_hlds.unused_args.c"
        *transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__2_2));
#line 4093 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 4095 "transform_hlds.unused_args.c"
      }
#line 4097 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 4099 "transform_hlds.unused_args.c"
  }
#line 4101 "transform_hlds.unused_args.c"
}

#line 4104 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__to_term_1_1_f_0_10001(
#line 4107 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4109 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1)
#line 4111 "transform_hlds.unused_args.c"
{
#line 4113 "transform_hlds.unused_args.c"
  {
#line 4115 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__wrapper_arg_2;
#line 4117 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4119 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_Term_3;

#line 4122 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4124 "transform_hlds.unused_args.c"
    {
#line 4126 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__conv0_Term_3 = transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__to_term_1_1_f_0();
    }
#line 4129 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv0_Term_3));
#line 4131 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__wrapper_arg_2;
#line 4133 "transform_hlds.unused_args.c"
  }
#line 4135 "transform_hlds.unused_args.c"
}

#line 4138 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__from_term_2_2_p_0_10001(
#line 4141 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4143 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 4145 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2)
#line 4147 "transform_hlds.unused_args.c"
{
#line 4149 "transform_hlds.unused_args.c"
  {
#line 4151 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;
#line 4153 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;

#line 4156 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4158 "transform_hlds.unused_args.c"
    {
#line 4160 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__from_term_2_2_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 4163 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 4165 "transform_hlds.unused_args.c"
  }
#line 4167 "transform_hlds.unused_args.c"
}

#line 4170 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 4173 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4175 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 4177 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 4179 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 4181 "transform_hlds.unused_args.c"
{
#line 4183 "transform_hlds.unused_args.c"
  {
#line 4185 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;
#line 4187 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;

#line 4190 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4192 "transform_hlds.unused_args.c"
    {
#line 4194 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__more_precise_than_3_3_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 4197 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 4199 "transform_hlds.unused_args.c"
  }
#line 4201 "transform_hlds.unused_args.c"
}

#line 4204 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__equivalent_3_3_p_0_10001(
#line 4207 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4209 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 4211 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 4213 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 4215 "transform_hlds.unused_args.c"
{
#line 4217 "transform_hlds.unused_args.c"
  {
#line 4219 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;
#line 4221 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;

#line 4224 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4226 "transform_hlds.unused_args.c"
    {
#line 4228 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__equivalent_3_3_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3));
    }
#line 4231 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 4233 "transform_hlds.unused_args.c"
  }
#line 4235 "transform_hlds.unused_args.c"
}

#line 4238 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 4241 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4243 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 4245 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 4247 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 4249 "transform_hlds.unused_args.c"
{
#line 4251 "transform_hlds.unused_args.c"
  {
#line 4253 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;
#line 4255 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;

#line 4258 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4260 "transform_hlds.unused_args.c"
    {
#line 4262 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__more_precise_than_3_3_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 4265 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 4267 "transform_hlds.unused_args.c"
  }
#line 4269 "transform_hlds.unused_args.c"
}

#line 4272 "transform_hlds.unused_args.c"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__equivalent_3_3_p_0_10001(
#line 4275 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4277 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 4279 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 4281 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3)
#line 4283 "transform_hlds.unused_args.c"
{
#line 4285 "transform_hlds.unused_args.c"
  {
#line 4287 "transform_hlds.unused_args.c"
    MR_bool transform_hlds__unused_args__succeeded;
#line 4289 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;

#line 4292 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4294 "transform_hlds.unused_args.c"
    {
#line 4296 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__equivalent_3_3_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 4299 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__succeeded;
#line 4301 "transform_hlds.unused_args.c"
  }
#line 4303 "transform_hlds.unused_args.c"
}

#line 4306 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_name_2_2_f_0_10001(
#line 4309 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg)
#line 4311 "transform_hlds.unused_args.c"
{
#line 4313 "transform_hlds.unused_args.c"
  {
#line 4315 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__wrapper_arg_3;
#line 4317 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4319 "transform_hlds.unused_args.c"
    MR_String transform_hlds__unused_args__conv0_HeadVar__3_3;

#line 4322 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4324 "transform_hlds.unused_args.c"
    {
#line 4326 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__conv0_HeadVar__3_3 = transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_name_2_2_f_0();
    }
#line 4329 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__3_3));
#line 4331 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__wrapper_arg_3;
#line 4333 "transform_hlds.unused_args.c"
  }
#line 4335 "transform_hlds.unused_args.c"
}

#line 4338 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001(
#line 4341 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg)
#line 4343 "transform_hlds.unused_args.c"
{
#line 4345 "transform_hlds.unused_args.c"
  {
#line 4347 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__wrapper_arg_3;
#line 4349 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4351 "transform_hlds.unused_args.c"
    MR_Integer transform_hlds__unused_args__conv0_HeadVar__3_3;

#line 4354 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4356 "transform_hlds.unused_args.c"
    {
#line 4358 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__conv0_HeadVar__3_3 = transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_version_number_2_2_f_0();
    }
#line 4361 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__3_3));
#line 4363 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__wrapper_arg_3;
#line 4365 "transform_hlds.unused_args.c"
  }
#line 4367 "transform_hlds.unused_args.c"
}

#line 4370 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001(
#line 4373 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg)
#line 4375 "transform_hlds.unused_args.c"
{
#line 4377 "transform_hlds.unused_args.c"
  {
#line 4379 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__wrapper_arg_3;
#line 4381 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4383 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__3_3;

#line 4386 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4388 "transform_hlds.unused_args.c"
    {
#line 4390 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__conv0_HeadVar__3_3 = transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0();
    }
#line 4393 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__3_3));
#line 4395 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__wrapper_arg_3;
#line 4397 "transform_hlds.unused_args.c"
  }
#line 4399 "transform_hlds.unused_args.c"
}

#line 4402 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__bottom_2_2_f_0_10001(
#line 4405 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4407 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1)
#line 4409 "transform_hlds.unused_args.c"
{
#line 4411 "transform_hlds.unused_args.c"
  {
#line 4413 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__wrapper_arg_3;
#line 4415 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4417 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__3_3;

#line 4420 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4422 "transform_hlds.unused_args.c"
    {
#line 4424 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__conv0_HeadVar__3_3 = transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__bottom_2_2_f_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 4427 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__3_3));
#line 4429 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__wrapper_arg_3;
#line 4431 "transform_hlds.unused_args.c"
  }
#line 4433 "transform_hlds.unused_args.c"
}

#line 4436 "transform_hlds.unused_args.c"
static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__top_2_2_f_0_10001(
#line 4439 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4441 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1)
#line 4443 "transform_hlds.unused_args.c"
{
#line 4445 "transform_hlds.unused_args.c"
  {
#line 4447 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__wrapper_arg_3;
#line 4449 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4451 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__3_3;

#line 4454 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4456 "transform_hlds.unused_args.c"
    {
#line 4458 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__conv0_HeadVar__3_3 = transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__top_2_2_f_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 4461 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__3_3));
#line 4463 "transform_hlds.unused_args.c"
    return transform_hlds__unused_args__wrapper_arg_3;
#line 4465 "transform_hlds.unused_args.c"
  }
#line 4467 "transform_hlds.unused_args.c"
}

#line 4470 "transform_hlds.unused_args.c"
static void MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__get_func_info_6_6_p_0_10001(
#line 4473 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 4475 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 4477 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 4479 "transform_hlds.unused_args.c"
  MR_Box transform_hlds__unused_args__wrapper_arg_3,
#line 4481 "transform_hlds.unused_args.c"
  MR_Box * transform_hlds__unused_args__wrapper_arg_6)
#line 4483 "transform_hlds.unused_args.c"
{
#line 4485 "transform_hlds.unused_args.c"
  {
#line 4487 "transform_hlds.unused_args.c"
    MR_Box transform_hlds__unused_args__closure;
#line 4489 "transform_hlds.unused_args.c"
    MR_Word transform_hlds__unused_args__conv0_FuncInfo_22;

#line 4492 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 4494 "transform_hlds.unused_args.c"
    {
#line 4496 "transform_hlds.unused_args.c"
      transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__get_func_info_6_6_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), ((MR_Word) transform_hlds__unused_args__wrapper_arg_3), &transform_hlds__unused_args__conv0_FuncInfo_22);
    }
#line 4499 "transform_hlds.unused_args.c"
    *transform_hlds__unused_args__wrapper_arg_6 = ((MR_Box) (transform_hlds__unused_args__conv0_FuncInfo_22));
#line 4501 "transform_hlds.unused_args.c"
  }
#line 4503 "transform_hlds.unused_args.c"
}

#line 205 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_f_0(void)
#line 205 "unused_args.m"
{
#line 205 "unused_args.m"
  {
#line 205 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 205 "unused_args.m"
    MR_Word transform_hlds__unused_args__Term_3;
#line 205 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_8_8;

#line 206 "unused_args.m"
    {
#line 206 "unused_args.m"
      transform_hlds__unused_args__V_8_8 = mercury__term__context_init_0_f_0();
    }
#line 206 "unused_args.m"
    {
#line 206 "unused_args.m"
      transform_hlds__unused_args__Term_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 206 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Term_3, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_9[2]));
#line 206 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Term_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 206 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Term_3, 2) = ((MR_Box) (transform_hlds__unused_args__V_8_8));
#line 206 "unused_args.m"
    }
#line 205 "unused_args.m"
    return transform_hlds__unused_args__Term_3;
#line 205 "unused_args.m"
  }
#line 205 "unused_args.m"
}

#line 201 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(void)
#line 201 "unused_args.m"
{
#line 201 "unused_args.m"
  {
#line 201 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);

#line 201 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 201 "unused_args.m"
  }
#line 201 "unused_args.m"
}

#line 198 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0(void)
#line 198 "unused_args.m"
{
#line 199 "unused_args.m"
  {
#line 199 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 199 "unused_args.m"
    {
#line 199 "unused_args.m"
      return transform_hlds__unused_args__succeeded = mercury__builtin__semidet_fail_0_p_0();
    }
#line 199 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 199 "unused_args.m"
  }
#line 198 "unused_args.m"
}

#line 220 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(
#line 220 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_10,
#line 220 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_3)
#line 220 "unused_args.m"
{
#line 220 "unused_args.m"
  {
#line 220 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 220 "unused_args.m"
    {
#line 220 "unused_args.m"
      return transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____unused_args_answer_0_0(transform_hlds__unused_args__Args_3, transform_hlds__unused_args__Args_10);
    }
#line 220 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 220 "unused_args.m"
  }
#line 220 "unused_args.m"
}

#line 215 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_93_95_48_3_p_0(
#line 215 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer1_5,
#line 215 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer2_6)
#line 215 "unused_args.m"
{
#line 215 "unused_args.m"
  {
#line 215 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 215 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 215 "unused_args.m"
    MR_Word transform_hlds__unused_args__Args1_7 = (MR_Word) transform_hlds__unused_args__Answer1_5;
#line 215 "unused_args.m"
    MR_Word transform_hlds__unused_args__Args2_8 = (MR_Word) transform_hlds__unused_args__Answer2_6;
#line 215 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_11_11;
#line 215 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_12_12;

#line 218 "unused_args.m"
    {
#line 218 "unused_args.m"
      transform_hlds__unused_args__V_11_11 = mercury__set__sorted_list_to_set_1_f_0(transform_hlds__unused_args__TypeCtorInfo_13_13, transform_hlds__unused_args__Args2_8);
    }
#line 218 "unused_args.m"
    {
#line 218 "unused_args.m"
      transform_hlds__unused_args__V_12_12 = mercury__set__sorted_list_to_set_1_f_0(transform_hlds__unused_args__TypeCtorInfo_13_13, transform_hlds__unused_args__Args1_7);
    }
#line 218 "unused_args.m"
    {
#line 218 "unused_args.m"
      return transform_hlds__unused_args__succeeded = mercury__set__subset_2_p_0(transform_hlds__unused_args__TypeCtorInfo_13_13, transform_hlds__unused_args__V_11_11, transform_hlds__unused_args__V_12_12);
    }
#line 215 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 215 "unused_args.m"
  }
#line 215 "unused_args.m"
}

#line 184 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_103_101_116_95_102_117_110_99_95_105_110_102_111_95_54_95_95_91_52_44_32_53_93_95_48_6_p_0(
#line 184 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_17,
#line 184 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleName_18,
#line 184 "unused_args.m"
  MR_Word transform_hlds__unused_args__FuncId_19,
#line 184 "unused_args.m"
  MR_Word * transform_hlds__unused_args__FuncInfo_22)
#line 184 "unused_args.m"
{
#line 184 "unused_args.m"
  {
#line 184 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 184 "unused_args.m"
    MR_Integer transform_hlds__unused_args__Arity_13;
#line 184 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredId_23;
#line 184 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredInfo_25;
#line 184 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_26_26;
#line 185 "unused_args.m"
    MR_Integer transform_hlds__unused_args__V_24_24;

#line 185 "unused_args.m"
    {
#line 185 "unused_args.m"
      transform_hlds__mmc_analysis__func_id_to_ppid_4_p_0(transform_hlds__unused_args__ModuleInfo_17, transform_hlds__unused_args__ModuleName_18, transform_hlds__unused_args__FuncId_19, &transform_hlds__unused_args__V_26_26);
    }
#line 185 "unused_args.m"
    transform_hlds__unused_args__PredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_26_26, (MR_Integer) 0)));
#line 185 "unused_args.m"
    transform_hlds__unused_args__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_26_26, (MR_Integer) 1)));
#line 186 "unused_args.m"
    {
#line 186 "unused_args.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__unused_args__ModuleInfo_17, transform_hlds__unused_args__PredId_23, &transform_hlds__unused_args__PredInfo_25);
    }
#line 187 "unused_args.m"
    {
#line 187 "unused_args.m"
      transform_hlds__unused_args__Arity_13 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__unused_args__PredInfo_25);
    }
#line 188 "unused_args.m"
    *transform_hlds__unused_args__FuncInfo_22 = (MR_Word) transform_hlds__unused_args__Arity_13;
#line 184 "unused_args.m"
  }
#line 184 "unused_args.m"
}

#line 183 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 183 "unused_args.m"
{
#line 183 "unused_args.m"
  {
#line 183 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 183 "unused_args.m"
    return (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 183 "unused_args.m"
  }
#line 183 "unused_args.m"
}

#line 182 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_50_95_95_91_50_93_95_48_2_f_0(
#line 182 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1)
#line 182 "unused_args.m"
{
#line 182 "unused_args.m"
  {
#line 182 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 182 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVar__3_3;
#line 182 "unused_args.m"
    MR_Integer transform_hlds__unused_args__Arity_10 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 182 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_23_23;

#line 182 "unused_args.m"
    {
#line 182 "unused_args.m"
      transform_hlds__unused_args__V_23_23 = mercury__list__f_46_46_2_f_0((MR_Integer) 1, transform_hlds__unused_args__Arity_10);
    }
#line 182 "unused_args.m"
    transform_hlds__unused_args__HeadVar__3_3 = (MR_Word) transform_hlds__unused_args__V_23_23;
#line 182 "unused_args.m"
    return transform_hlds__unused_args__HeadVar__3_3;
#line 182 "unused_args.m"
  }
#line 182 "unused_args.m"
}

#line 181 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 181 "unused_args.m"
{
#line 181 "unused_args.m"
  {
#line 181 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 181 "unused_args.m"
    return (MR_Integer) 0;
#line 181 "unused_args.m"
  }
#line 181 "unused_args.m"
}

#line 180 "unused_args.m"
static MR_Integer MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 180 "unused_args.m"
{
#line 180 "unused_args.m"
  {
#line 180 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 180 "unused_args.m"
    return (MR_Integer) 3;
#line 180 "unused_args.m"
  }
#line 180 "unused_args.m"
}

#line 179 "unused_args.m"
static MR_String MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 179 "unused_args.m"
{
#line 194 "unused_args.m"
  {
#line 194 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 194 "unused_args.m"
    return (MR_String) "unused_args";
#line 194 "unused_args.m"
  }
#line 179 "unused_args.m"
}

#line 163 "unused_args.m"
void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 163 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1)
#line 163 "unused_args.m"
{
#line 163 "unused_args.m"
  {
#line 163 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 163 "unused_args.m"
    *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 163 "unused_args.m"
  }
#line 163 "unused_args.m"
}

#line 163 "unused_args.m"
MR_bool MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 163 "unused_args.m"
{
#line 163 "unused_args.m"
  {
#line 163 "unused_args.m"
    return MR_TRUE;
#line 163 "unused_args.m"
  }
#line 163 "unused_args.m"
}

#line 1859 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_117_110_117_115_101_100_95_97_114_103_115_95_95_91_49_93_95_48_3_f_0(
#line 1859 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredInfo_6,
#line 1859 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_7)
#line 1859 "unused_args.m"
{
#line 1861 "unused_args.m"
  {
#line 1861 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1861 "unused_args.m"
    MR_Word transform_hlds__unused_args__Spec_8;
#line 1861 "unused_args.m"
    MR_Integer transform_hlds__unused_args__NumArgs_9;
#line 1861 "unused_args.m"
    MR_Word transform_hlds__unused_args__Context_10;
#line 1861 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredOrFunc_11;
#line 1861 "unused_args.m"
    MR_Word transform_hlds__unused_args__ModuleName_12;
#line 1861 "unused_args.m"
    MR_String transform_hlds__unused_args__PredName_13;
#line 1861 "unused_args.m"
    MR_Integer transform_hlds__unused_args__Arity_14;
#line 1861 "unused_args.m"
    MR_Word transform_hlds__unused_args__Pieces1_15;
#line 1861 "unused_args.m"
    MR_Word transform_hlds__unused_args__Pieces2_16;
#line 1861 "unused_args.m"
    MR_Word transform_hlds__unused_args__Msg_17;
#line 1861 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_20_20;
#line 1861 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_21_21;
#line 1861 "unused_args.m"
    MR_String transform_hlds__unused_args__V_22_22;
#line 1861 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_23_23;
#line 1861 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_24_24;
#line 1861 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_25_25;
#line 1861 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_26_26;
#line 1861 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_56_56;
#line 1861 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_57_57;
#line 1861 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_58_58;
#line 1861 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_62_62;

#line 1862 "unused_args.m"
    {
#line 1862 "unused_args.m"
      mercury__list__length_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__unused_args__UnusedArgs_7, &transform_hlds__unused_args__NumArgs_9);
    }
#line 1863 "unused_args.m"
    {
#line 1863 "unused_args.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__unused_args__PredInfo_6, &transform_hlds__unused_args__Context_10);
    }
#line 1864 "unused_args.m"
    {
#line 1864 "unused_args.m"
      transform_hlds__unused_args__PredOrFunc_11 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__unused_args__PredInfo_6);
    }
#line 1865 "unused_args.m"
    {
#line 1865 "unused_args.m"
      transform_hlds__unused_args__ModuleName_12 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__unused_args__PredInfo_6);
    }
#line 1866 "unused_args.m"
    {
#line 1866 "unused_args.m"
      transform_hlds__unused_args__PredName_13 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__unused_args__PredInfo_6);
    }
#line 1867 "unused_args.m"
    {
#line 1867 "unused_args.m"
      transform_hlds__unused_args__Arity_14 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__unused_args__PredInfo_6);
    }
#line 1868 "unused_args.m"
    {
#line 1868 "unused_args.m"
      transform_hlds__unused_args__V_22_22 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(transform_hlds__unused_args__PredOrFunc_11);
    }
#line 1868 "unused_args.m"
    {
#line 1868 "unused_args.m"
      transform_hlds__unused_args__V_21_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1868 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__V_21_21, 0) = ((MR_Box) (transform_hlds__unused_args__V_22_22));
#line 1868 "unused_args.m"
    }
#line 1869 "unused_args.m"
    {
#line 1869 "unused_args.m"
      transform_hlds__unused_args__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1869 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_26_26, 0) = ((MR_Box) (transform_hlds__unused_args__ModuleName_12));
#line 1869 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_26_26, 1) = ((MR_Box) (transform_hlds__unused_args__PredName_13));
#line 1869 "unused_args.m"
    }
#line 1869 "unused_args.m"
    {
#line 1869 "unused_args.m"
      transform_hlds__unused_args__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1869 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_25_25, 0) = ((MR_Box) (transform_hlds__unused_args__V_26_26));
#line 1869 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_25_25, 1) = ((MR_Box) (transform_hlds__unused_args__Arity_14));
#line 1869 "unused_args.m"
    }
#line 1869 "unused_args.m"
    {
#line 1869 "unused_args.m"
      transform_hlds__unused_args__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1869 "unused_args.m"
      MR_hl_field(MR_mktag(3), transform_hlds__unused_args__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1869 "unused_args.m"
      MR_hl_field(MR_mktag(3), transform_hlds__unused_args__V_24_24, 1) = ((MR_Box) (transform_hlds__unused_args__V_25_25));
#line 1869 "unused_args.m"
    }
#line 1869 "unused_args.m"
    {
#line 1869 "unused_args.m"
      transform_hlds__unused_args__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1869 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_23_23, 0) = ((MR_Box) (transform_hlds__unused_args__V_24_24));
#line 1869 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__unused_args_scalar_common_1[14])));
#line 1869 "unused_args.m"
    }
#line 1868 "unused_args.m"
    {
#line 1868 "unused_args.m"
      transform_hlds__unused_args__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1868 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_20_20, 0) = ((MR_Box) (transform_hlds__unused_args__V_21_21));
#line 1868 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_20_20, 1) = ((MR_Box) (transform_hlds__unused_args__V_23_23));
#line 1868 "unused_args.m"
    }
#line 1868 "unused_args.m"
    {
#line 1868 "unused_args.m"
      transform_hlds__unused_args__Pieces1_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1868 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Pieces1_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__unused_args_scalar_common_1[21])));
#line 1868 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Pieces1_15, 1) = ((MR_Box) (transform_hlds__unused_args__V_20_20));
#line 1868 "unused_args.m"
    }
#line 1871 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__NumArgs_9 == (MR_Integer) 1);
#line 1874 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1872 "unused_args.m"
      {
#line 1872 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_36_36;
#line 1872 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_39_39;

#line 1883 "unused_args.m"
        if ((transform_hlds__unused_args__UnusedArgs_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1883 "unused_args.m"
          {
#line 1883 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv0_V_39_39;

#line 1883 "unused_args.m"
            {
#line 1883 "unused_args.m"
              transform_hlds__unused_args__conv0_V_39_39 = mercury__require__unexpected_3_f_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[5], (MR_String) "transform_hlds.unused_args", (MR_String) "function \140transform_hlds.unused_args.format_arg_list\'/1", (MR_String) "empty list");
            }
#line 1883 "unused_args.m"
            transform_hlds__unused_args__V_39_39 = ((MR_Word) transform_hlds__unused_args__conv0_V_39_39);
#line 1883 "unused_args.m"
          }
#line 1883 "unused_args.m"
        else
#line 1884 "unused_args.m"
          {
#line 1884 "unused_args.m"
            MR_Integer transform_hlds__unused_args__Arg_71 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__UnusedArgs_7, (MR_Integer) 0)));
#line 1884 "unused_args.m"
            MR_Word transform_hlds__unused_args__Rest_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__UnusedArgs_7, (MR_Integer) 1)));
#line 1884 "unused_args.m"
            MR_String transform_hlds__unused_args__ArgStr_74;

#line 1885 "unused_args.m"
            {
#line 1885 "unused_args.m"
              transform_hlds__unused_args__ArgStr_74 = mercury__string__int_to_string_1_f_0(transform_hlds__unused_args__Arg_71);
            }
#line 1889 "unused_args.m"
            if ((transform_hlds__unused_args__Rest_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1887 "unused_args.m"
              {
#line 1887 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_79_79;

#line 1888 "unused_args.m"
                {
#line 1888 "unused_args.m"
                  transform_hlds__unused_args__V_79_79 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1888 "unused_args.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__unused_args__V_79_79, 0) = ((MR_Box) (transform_hlds__unused_args__ArgStr_74));
#line 1888 "unused_args.m"
                }
#line 1888 "unused_args.m"
                {
#line 1888 "unused_args.m"
                  transform_hlds__unused_args__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1888 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_39_39, 0) = ((MR_Box) (transform_hlds__unused_args__V_79_79));
#line 1888 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1888 "unused_args.m"
                }
#line 1887 "unused_args.m"
              }
#line 1889 "unused_args.m"
            else
#line 1890 "unused_args.m"
              {
#line 1890 "unused_args.m"
                MR_Integer transform_hlds__unused_args__Head_75 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Rest_72, (MR_Integer) 0)));
#line 1890 "unused_args.m"
                MR_Word transform_hlds__unused_args__Tail_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Rest_72, (MR_Integer) 1)));
#line 1890 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_77_77;
#line 1890 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_78_78;

#line 1891 "unused_args.m"
                {
#line 1891 "unused_args.m"
                  transform_hlds__unused_args__V_77_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1891 "unused_args.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__unused_args__V_77_77, 0) = ((MR_Box) (transform_hlds__unused_args__ArgStr_74));
#line 1891 "unused_args.m"
                }
#line 1891 "unused_args.m"
                {
#line 1891 "unused_args.m"
                  transform_hlds__unused_args__V_78_78 = transform_hlds__unused_args__format_arg_list_2_2_f_0(transform_hlds__unused_args__Head_75, transform_hlds__unused_args__Tail_76);
                }
#line 1891 "unused_args.m"
                {
#line 1891 "unused_args.m"
                  transform_hlds__unused_args__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1891 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_39_39, 0) = ((MR_Box) (transform_hlds__unused_args__V_77_77));
#line 1891 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_39_39, 1) = ((MR_Box) (transform_hlds__unused_args__V_78_78));
#line 1891 "unused_args.m"
                }
#line 1890 "unused_args.m"
              }
#line 1884 "unused_args.m"
          }
#line 1872 "unused_args.m"
        {
#line 1872 "unused_args.m"
          transform_hlds__unused_args__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1872 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__unused_args_scalar_common_1[22])));
#line 1872 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_36_36, 1) = ((MR_Box) (transform_hlds__unused_args__V_39_39));
#line 1872 "unused_args.m"
        }
#line 1872 "unused_args.m"
        {
#line 1872 "unused_args.m"
          transform_hlds__unused_args__Pieces2_16 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__unused_args__V_36_36, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__unused_args_scalar_common_1[17]));
        }
#line 1872 "unused_args.m"
      }
#line 1874 "unused_args.m"
    else
#line 1875 "unused_args.m"
      {
#line 1875 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_46_46;
#line 1875 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_49_49;

#line 1883 "unused_args.m"
        if ((transform_hlds__unused_args__UnusedArgs_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1883 "unused_args.m"
          {
#line 1883 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv1_V_49_49;

#line 1883 "unused_args.m"
            {
#line 1883 "unused_args.m"
              transform_hlds__unused_args__conv1_V_49_49 = mercury__require__unexpected_3_f_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[5], (MR_String) "transform_hlds.unused_args", (MR_String) "function \140transform_hlds.unused_args.format_arg_list\'/1", (MR_String) "empty list");
            }
#line 1883 "unused_args.m"
            transform_hlds__unused_args__V_49_49 = ((MR_Word) transform_hlds__unused_args__conv1_V_49_49);
#line 1883 "unused_args.m"
          }
#line 1883 "unused_args.m"
        else
#line 1884 "unused_args.m"
          {
#line 1884 "unused_args.m"
            MR_Integer transform_hlds__unused_args__Arg_85 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__UnusedArgs_7, (MR_Integer) 0)));
#line 1884 "unused_args.m"
            MR_Word transform_hlds__unused_args__Rest_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__UnusedArgs_7, (MR_Integer) 1)));
#line 1884 "unused_args.m"
            MR_String transform_hlds__unused_args__ArgStr_88;

#line 1885 "unused_args.m"
            {
#line 1885 "unused_args.m"
              transform_hlds__unused_args__ArgStr_88 = mercury__string__int_to_string_1_f_0(transform_hlds__unused_args__Arg_85);
            }
#line 1889 "unused_args.m"
            if ((transform_hlds__unused_args__Rest_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1887 "unused_args.m"
              {
#line 1887 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_93_93;

#line 1888 "unused_args.m"
                {
#line 1888 "unused_args.m"
                  transform_hlds__unused_args__V_93_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1888 "unused_args.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__unused_args__V_93_93, 0) = ((MR_Box) (transform_hlds__unused_args__ArgStr_88));
#line 1888 "unused_args.m"
                }
#line 1888 "unused_args.m"
                {
#line 1888 "unused_args.m"
                  transform_hlds__unused_args__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1888 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_49_49, 0) = ((MR_Box) (transform_hlds__unused_args__V_93_93));
#line 1888 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1888 "unused_args.m"
                }
#line 1887 "unused_args.m"
              }
#line 1889 "unused_args.m"
            else
#line 1890 "unused_args.m"
              {
#line 1890 "unused_args.m"
                MR_Integer transform_hlds__unused_args__Head_89 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Rest_86, (MR_Integer) 0)));
#line 1890 "unused_args.m"
                MR_Word transform_hlds__unused_args__Tail_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Rest_86, (MR_Integer) 1)));
#line 1890 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_91_91;
#line 1890 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_92_92;

#line 1891 "unused_args.m"
                {
#line 1891 "unused_args.m"
                  transform_hlds__unused_args__V_91_91 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1891 "unused_args.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__unused_args__V_91_91, 0) = ((MR_Box) (transform_hlds__unused_args__ArgStr_88));
#line 1891 "unused_args.m"
                }
#line 1891 "unused_args.m"
                {
#line 1891 "unused_args.m"
                  transform_hlds__unused_args__V_92_92 = transform_hlds__unused_args__format_arg_list_2_2_f_0(transform_hlds__unused_args__Head_89, transform_hlds__unused_args__Tail_90);
                }
#line 1891 "unused_args.m"
                {
#line 1891 "unused_args.m"
                  transform_hlds__unused_args__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1891 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_49_49, 0) = ((MR_Box) (transform_hlds__unused_args__V_91_91));
#line 1891 "unused_args.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_49_49, 1) = ((MR_Box) (transform_hlds__unused_args__V_92_92));
#line 1891 "unused_args.m"
                }
#line 1890 "unused_args.m"
              }
#line 1884 "unused_args.m"
          }
#line 1875 "unused_args.m"
        {
#line 1875 "unused_args.m"
          transform_hlds__unused_args__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1875 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_46_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__unused_args_scalar_common_1[23])));
#line 1875 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_46_46, 1) = ((MR_Box) (transform_hlds__unused_args__V_49_49));
#line 1875 "unused_args.m"
        }
#line 1875 "unused_args.m"
        {
#line 1875 "unused_args.m"
          transform_hlds__unused_args__Pieces2_16 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__unused_args__V_46_46, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__unused_args_scalar_common_1[19]));
        }
#line 1875 "unused_args.m"
      }
#line 1878 "unused_args.m"
    {
#line 1878 "unused_args.m"
      transform_hlds__unused_args__V_58_58 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__unused_args__Pieces1_15, transform_hlds__unused_args__Pieces2_16);
    }
#line 1878 "unused_args.m"
    {
#line 1878 "unused_args.m"
      transform_hlds__unused_args__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1878 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_57_57, 0) = ((MR_Box) (transform_hlds__unused_args__V_58_58));
#line 1878 "unused_args.m"
    }
#line 1878 "unused_args.m"
    {
#line 1878 "unused_args.m"
      transform_hlds__unused_args__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1878 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_56_56, 0) = ((MR_Box) (transform_hlds__unused_args__V_57_57));
#line 1878 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1878 "unused_args.m"
    }
#line 1878 "unused_args.m"
    {
#line 1878 "unused_args.m"
      transform_hlds__unused_args__Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1878 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Msg_17, 0) = ((MR_Box) (transform_hlds__unused_args__Context_10));
#line 1878 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Msg_17, 1) = ((MR_Box) (transform_hlds__unused_args__V_56_56));
#line 1878 "unused_args.m"
    }
#line 1879 "unused_args.m"
    {
#line 1879 "unused_args.m"
      transform_hlds__unused_args__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1879 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_62_62, 0) = ((MR_Box) (transform_hlds__unused_args__Msg_17));
#line 1879 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1879 "unused_args.m"
    }
#line 1879 "unused_args.m"
    {
#line 1879 "unused_args.m"
      transform_hlds__unused_args__Spec_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1879 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Spec_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1879 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Spec_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14))));
#line 1879 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Spec_8, 2) = ((MR_Box) (transform_hlds__unused_args__V_62_62));
#line 1879 "unused_args.m"
    }
#line 1861 "unused_args.m"
    return transform_hlds__unused_args__Spec_8;
#line 1861 "unused_args.m"
  }
#line 1859 "unused_args.m"
}

#line 1811 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_97_114_110_95_117_110_117_115_101_100_95_97_114_103_115_95_95_91_50_93_95_48_10_p_0(
#line 1811 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1811 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredInfo_3,
#line 1811 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_4,
#line 1811 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_5,
#line 1811 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs0_6,
#line 1811 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_7,
#line 1811 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_8,
#line 1811 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Specs_0_9,
#line 1811 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Specs_10)
#line 1811 "unused_args.m"
{
#line 1816 "unused_args.m"
  {
#line 1816 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1816 "unused_args.m"
#line 1816 "unused_args.m"
    switch (transform_hlds__unused_args__HeadVar__1_1) {
#line 1816 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1816 "unused_args.m"
      case (MR_Integer) 0:
#line 1816 "unused_args.m"
        {
#line 1816 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_Specs_10 = transform_hlds__unused_args__STATE_VARIABLE_Specs_0_9;
#line 1816 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_8 = transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_7;
#line 1816 "unused_args.m"
        }
#line 1816 "unused_args.m"
        break;
#line 1816 "unused_args.m"
      case (MR_Integer) 1:
#line 1821 "unused_args.m"
        {
#line 1819 "unused_args.m"
          {
#line 1819 "unused_args.m"
            transform_hlds__unused_args__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (transform_hlds__unused_args__PredId_4)), transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_7);
          }
#line 1821 "unused_args.m"
          if (transform_hlds__unused_args__succeeded)
#line 1820 "unused_args.m"
            {
#line 1820 "unused_args.m"
              *transform_hlds__unused_args__STATE_VARIABLE_Specs_10 = transform_hlds__unused_args__STATE_VARIABLE_Specs_0_9;
#line 1820 "unused_args.m"
              *transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_8 = transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_7;
#line 1820 "unused_args.m"
            }
#line 1821 "unused_args.m"
          else
#line 1822 "unused_args.m"
            {
#line 1822 "unused_args.m"
              MR_Word transform_hlds__unused_args__Procs_29;
#line 1822 "unused_args.m"
              MR_Word transform_hlds__unused_args__Proc_30;
#line 1822 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVars_31;
#line 1822 "unused_args.m"
              MR_Integer transform_hlds__unused_args__NumHeadVars_32;
#line 1822 "unused_args.m"
              MR_Integer transform_hlds__unused_args__NumToDrop_33;
#line 1822 "unused_args.m"
              MR_Word transform_hlds__unused_args__UnusedArgs_34;
#line 1822 "unused_args.m"
              MR_Integer transform_hlds__unused_args__V_43_43;
#line 1824 "unused_args.m"
              MR_Box transform_hlds__unused_args__conv0_Proc_30;

#line 1822 "unused_args.m"
              {
#line 1822 "unused_args.m"
                mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (transform_hlds__unused_args__PredId_4)), transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_7, transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_8);
              }
#line 1823 "unused_args.m"
              {
#line 1823 "unused_args.m"
                hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__unused_args__PredInfo_3, &transform_hlds__unused_args__Procs_29);
              }
#line 1824 "unused_args.m"
              {
#line 1824 "unused_args.m"
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__unused_args__Procs_29, transform_hlds__unused_args__ProcId_5, &transform_hlds__unused_args__conv0_Proc_30);
              }
#line 1824 "unused_args.m"
              transform_hlds__unused_args__Proc_30 = ((MR_Word) transform_hlds__unused_args__conv0_Proc_30);
#line 1825 "unused_args.m"
              {
#line 1825 "unused_args.m"
                hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__Proc_30, &transform_hlds__unused_args__HeadVars_31);
              }
#line 1826 "unused_args.m"
              {
#line 1826 "unused_args.m"
                mercury__list__length_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], transform_hlds__unused_args__HeadVars_31, &transform_hlds__unused_args__NumHeadVars_32);
              }
#line 1830 "unused_args.m"
              {
#line 1830 "unused_args.m"
                transform_hlds__unused_args__V_43_43 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__unused_args__PredInfo_3);
              }
#line 1830 "unused_args.m"
              transform_hlds__unused_args__NumToDrop_33 = (transform_hlds__unused_args__NumHeadVars_32 - transform_hlds__unused_args__V_43_43);
#line 1831 "unused_args.m"
              {
#line 1831 "unused_args.m"
                transform_hlds__unused_args__adjust_unused_args_3_p_0(transform_hlds__unused_args__NumToDrop_33, transform_hlds__unused_args__UnusedArgs0_6, &transform_hlds__unused_args__UnusedArgs_34);
              }
#line 1836 "unused_args.m"
              if ((transform_hlds__unused_args__UnusedArgs_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1837 "unused_args.m"
                *transform_hlds__unused_args__STATE_VARIABLE_Specs_10 = transform_hlds__unused_args__STATE_VARIABLE_Specs_0_9;
#line 1836 "unused_args.m"
              else
#line 1833 "unused_args.m"
                {
#line 1833 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Spec_37;

#line 1834 "unused_args.m"
                  {
#line 1834 "unused_args.m"
                    transform_hlds__unused_args__Spec_37 = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_117_110_117_115_101_100_95_97_114_103_115_95_95_91_49_93_95_48_3_f_0(transform_hlds__unused_args__PredInfo_3, transform_hlds__unused_args__UnusedArgs_34);
                  }
#line 1835 "unused_args.m"
                  {
#line 1835 "unused_args.m"
                    MR_Word base;
#line 1835 "unused_args.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1835 "unused_args.m"
                    *transform_hlds__unused_args__STATE_VARIABLE_Specs_10 = base;
#line 1835 "unused_args.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__Spec_37));
#line 1835 "unused_args.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_Specs_0_9));
#line 1835 "unused_args.m"
                  }
#line 1833 "unused_args.m"
                }
#line 1822 "unused_args.m"
            }
#line 1821 "unused_args.m"
        }
#line 1816 "unused_args.m"
        break;
#line 1816 "unused_args.m"
    }
#line 1816 "unused_args.m"
  }
#line 1811 "unused_args.m"
}

#line 1266 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0(
#line 1266 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ArgNo_5,
#line 1266 "unused_args.m"
  MR_Word transform_hlds__unused_args__ElemsToRemove_6,
#line 1266 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_List_0_14,
#line 1266 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_List_15)
#line 1266 "unused_args.m"
{
#line 1272 "unused_args.m"
  {
#line 1272 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1272 "unused_args.m"
    if ((transform_hlds__unused_args__ElemsToRemove_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1271 "unused_args.m"
      *transform_hlds__unused_args__STATE_VARIABLE_List_15 = transform_hlds__unused_args__STATE_VARIABLE_List_0_14;
#line 1272 "unused_args.m"
    else
#line 1283 "unused_args.m"
    if ((transform_hlds__unused_args__STATE_VARIABLE_List_0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1284 "unused_args.m"
      *transform_hlds__unused_args__STATE_VARIABLE_List_15 = transform_hlds__unused_args__STATE_VARIABLE_List_0_14;
#line 1283 "unused_args.m"
    else
#line 1275 "unused_args.m"
      {
#line 1275 "unused_args.m"
        MR_Box transform_hlds__unused_args__Head_10 = (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__STATE_VARIABLE_List_0_14, (MR_Integer) 0));
#line 1275 "unused_args.m"
        MR_Word transform_hlds__unused_args__Tail_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__STATE_VARIABLE_List_0_14, (MR_Integer) 1)));
#line 1275 "unused_args.m"
        MR_Integer transform_hlds__unused_args__NextArg_12 = (transform_hlds__unused_args__ArgNo_5 + (MR_Integer) 1);
#line 1275 "unused_args.m"
        MR_Word transform_hlds__unused_args__NewTail_13;

#line 1283 "unused_args.m"
        if ((transform_hlds__unused_args__Tail_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1284 "unused_args.m"
          transform_hlds__unused_args__NewTail_13 = transform_hlds__unused_args__Tail_11;
#line 1283 "unused_args.m"
        else
#line 1275 "unused_args.m"
          {
#line 1275 "unused_args.m"
            MR_Box transform_hlds__unused_args__Head_28 = (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Tail_11, (MR_Integer) 0));
#line 1275 "unused_args.m"
            MR_Word transform_hlds__unused_args__Tail_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Tail_11, (MR_Integer) 1)));
#line 1275 "unused_args.m"
            MR_Integer transform_hlds__unused_args__NextArg_30 = (transform_hlds__unused_args__NextArg_12 + (MR_Integer) 1);
#line 1275 "unused_args.m"
            MR_Word transform_hlds__unused_args__NewTail_31;

#line 1277 "unused_args.m"
            {
#line 1277 "unused_args.m"
              transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0(transform_hlds__unused_args__NextArg_30, transform_hlds__unused_args__ElemsToRemove_6, transform_hlds__unused_args__Tail_29, &transform_hlds__unused_args__NewTail_31);
            }
#line 1278 "unused_args.m"
            {
#line 1278 "unused_args.m"
              transform_hlds__unused_args__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__unused_args__NextArg_12)), transform_hlds__unused_args__ElemsToRemove_6);
            }
#line 1280 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1279 "unused_args.m"
              transform_hlds__unused_args__NewTail_13 = transform_hlds__unused_args__NewTail_31;
#line 1280 "unused_args.m"
            else
#line 1281 "unused_args.m"
              {
#line 1281 "unused_args.m"
                transform_hlds__unused_args__NewTail_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1281 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__NewTail_13, 0) = transform_hlds__unused_args__Head_28;
#line 1281 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__NewTail_13, 1) = ((MR_Box) (transform_hlds__unused_args__NewTail_31));
#line 1281 "unused_args.m"
              }
#line 1275 "unused_args.m"
          }
#line 1278 "unused_args.m"
        {
#line 1278 "unused_args.m"
          transform_hlds__unused_args__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__unused_args__ArgNo_5)), transform_hlds__unused_args__ElemsToRemove_6);
        }
#line 1280 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1279 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_List_15 = transform_hlds__unused_args__NewTail_13;
#line 1280 "unused_args.m"
        else
#line 1281 "unused_args.m"
          {
#line 1281 "unused_args.m"
            MR_Word base;
#line 1281 "unused_args.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1281 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_List_15 = base;
#line 1281 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 0) = transform_hlds__unused_args__Head_10;
#line 1281 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__NewTail_13));
#line 1281 "unused_args.m"
          }
#line 1275 "unused_args.m"
      }
#line 1272 "unused_args.m"
  }
#line 1266 "unused_args.m"
}

#line 1124 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(
#line 1124 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_8,
#line 1124 "unused_args.m"
  MR_Word transform_hlds__unused_args__Status_9,
#line 1124 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__4_4,
#line 1124 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44,
#line 1124 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_PredInfo_45)
#line 1124 "unused_args.m"
{
#line 1128 "unused_args.m"
  {
#line 1128 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1128 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeCtorInfo_71_71;
#line 1128 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__4_4, (MR_Integer) 0)));
#line 1128 "unused_args.m"
    MR_Integer transform_hlds__unused_args__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__4_4, (MR_Integer) 1)));
#line 1128 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredModule_13;
#line 1128 "unused_args.m"
    MR_String transform_hlds__unused_args__Name0_14;
#line 1128 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredOrFunc_15;
#line 1128 "unused_args.m"
    MR_Word transform_hlds__unused_args__Tvars_16;
#line 1128 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExistQVars_17;
#line 1128 "unused_args.m"
    MR_Word transform_hlds__unused_args__ArgTypes0_18;
#line 1128 "unused_args.m"
    MR_Word transform_hlds__unused_args__OrigOrigin_19;
#line 1128 "unused_args.m"
    MR_String transform_hlds__unused_args__Name1_27;
#line 1128 "unused_args.m"
    MR_Word transform_hlds__unused_args__Name2_28;
#line 1128 "unused_args.m"
    MR_Integer transform_hlds__unused_args__ProcInt_29;
#line 1128 "unused_args.m"
    MR_Word transform_hlds__unused_args__Name_30;
#line 1128 "unused_args.m"
    MR_Integer transform_hlds__unused_args__Arity_31;
#line 1128 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeVars_32;
#line 1128 "unused_args.m"
    MR_Word transform_hlds__unused_args__ArgTypes_33;
#line 1128 "unused_args.m"
    MR_Word transform_hlds__unused_args__Context_34;
#line 1128 "unused_args.m"
    MR_Word transform_hlds__unused_args__ClausesInfo_35;
#line 1128 "unused_args.m"
    MR_Word transform_hlds__unused_args__Markers_36;
#line 1128 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalType_37;
#line 1128 "unused_args.m"
    MR_Word transform_hlds__unused_args__ClassContext_38;
#line 1128 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarNameRemap_39;
#line 1128 "unused_args.m"
    MR_Word transform_hlds__unused_args__EmptyProofs_40;
#line 1128 "unused_args.m"
    MR_Word transform_hlds__unused_args__EmptyConstraintMap_41;
#line 1128 "unused_args.m"
    MR_Word transform_hlds__unused_args__Transform_42;
#line 1128 "unused_args.m"
    MR_Word transform_hlds__unused_args__Origin_43;
#line 1128 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_62_62;
#line 1128 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_63_63;
#line 1128 "unused_args.m"
    MR_String transform_hlds__unused_args__V_64_64;
#line 1128 "unused_args.m"
    MR_String transform_hlds__unused_args__V_66_66;
#line 1128 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredInfo_68_68;
#line 1137 "unused_args.m"
    MR_String transform_hlds__unused_args__V_47_47;

#line 1129 "unused_args.m"
    {
#line 1129 "unused_args.m"
      transform_hlds__unused_args__PredModule_13 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44);
    }
#line 1130 "unused_args.m"
    {
#line 1130 "unused_args.m"
      transform_hlds__unused_args__Name0_14 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44);
    }
#line 1131 "unused_args.m"
    {
#line 1131 "unused_args.m"
      transform_hlds__unused_args__PredOrFunc_15 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44);
    }
#line 1132 "unused_args.m"
    {
#line 1132 "unused_args.m"
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__Tvars_16, &transform_hlds__unused_args__ExistQVars_17, &transform_hlds__unused_args__ArgTypes0_18);
    }
#line 1133 "unused_args.m"
    {
#line 1133 "unused_args.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__OrigOrigin_19);
    }
#line 1136 "unused_args.m"
    {
#line 1136 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__string__prefix_2_p_0(transform_hlds__unused_args__Name0_14, (MR_String) "__");
    }
#line 1136 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1136 "unused_args.m"
      {
#line 1137 "unused_args.m"
        transform_hlds__unused_args__V_47_47 = (MR_String) "__LambdaGoal__";
#line 1137 "unused_args.m"
        {
#line 1137 "unused_args.m"
          transform_hlds__unused_args__succeeded = mercury__string__prefix_2_p_0(transform_hlds__unused_args__Name0_14, transform_hlds__unused_args__V_47_47);
        }
#line 1137 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1136 "unused_args.m"
      }
#line 1153 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1149 "unused_args.m"
      {
#line 1149 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeCtor_21;
#line 1141 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_48_48;
#line 1141 "unused_args.m"
        MR_Word transform_hlds__unused_args___SpecialId_20;

#line 1141 "unused_args.m"
        transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__OrigOrigin_19)) == (MR_mktag((MR_Integer) 0)));
#line 1141 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1141 "unused_args.m"
          {
#line 1141 "unused_args.m"
            transform_hlds__unused_args__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OrigOrigin_19, (MR_Integer) 0)));
#line 1141 "unused_args.m"
            transform_hlds__unused_args___SpecialId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_48_48, (MR_Integer) 0)));
#line 1141 "unused_args.m"
            transform_hlds__unused_args__TypeCtor_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_48_48, (MR_Integer) 1)));
#line 1141 "unused_args.m"
            transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1141 "unused_args.m"
          }
#line 1149 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1144 "unused_args.m"
          {
#line 1144 "unused_args.m"
            MR_Word transform_hlds__unused_args__TypeModule_22;
#line 1144 "unused_args.m"
            MR_String transform_hlds__unused_args__TypeName_23;
#line 1144 "unused_args.m"
            MR_Integer transform_hlds__unused_args__TypeArity_24;
#line 1144 "unused_args.m"
            MR_String transform_hlds__unused_args__TypeArityStr_25;
#line 1144 "unused_args.m"
            MR_String transform_hlds__unused_args__TypeModuleString_26;
#line 1144 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_50_50;
#line 1144 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_51_51;
#line 1144 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_53_53;
#line 1144 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_54_54;
#line 1144 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_56_56;
#line 1144 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_57_57;
#line 1144 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_59_59;

#line 1143 "unused_args.m"
            {
#line 1143 "unused_args.m"
              check_hlds__type_util__type_ctor_module_name_arity_4_p_0(transform_hlds__unused_args__TypeCtor_21, &transform_hlds__unused_args__TypeModule_22, &transform_hlds__unused_args__TypeName_23, &transform_hlds__unused_args__TypeArity_24);
            }
#line 1145 "unused_args.m"
            {
#line 1145 "unused_args.m"
              mercury__string__int_to_string_2_p_0(transform_hlds__unused_args__TypeArity_24, &transform_hlds__unused_args__TypeArityStr_25);
            }
#line 1146 "unused_args.m"
            {
#line 1146 "unused_args.m"
              transform_hlds__unused_args__TypeModuleString_26 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(transform_hlds__unused_args__TypeModule_22, (MR_String) "__");
            }
#line 1148 "unused_args.m"
            {
#line 1148 "unused_args.m"
              transform_hlds__unused_args__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "unused_args.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_59_59, 0) = ((MR_Box) (transform_hlds__unused_args__TypeArityStr_25));
#line 1148 "unused_args.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1148 "unused_args.m"
            }
#line 1148 "unused_args.m"
            {
#line 1148 "unused_args.m"
              transform_hlds__unused_args__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "unused_args.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_57_57, 0) = ((MR_Box) ((MR_String) "_"));
#line 1148 "unused_args.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_57_57, 1) = ((MR_Box) (transform_hlds__unused_args__V_59_59));
#line 1148 "unused_args.m"
            }
#line 1147 "unused_args.m"
            {
#line 1147 "unused_args.m"
              transform_hlds__unused_args__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "unused_args.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_56_56, 0) = ((MR_Box) (transform_hlds__unused_args__TypeName_23));
#line 1147 "unused_args.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_56_56, 1) = ((MR_Box) (transform_hlds__unused_args__V_57_57));
#line 1147 "unused_args.m"
            }
#line 1147 "unused_args.m"
            {
#line 1147 "unused_args.m"
              transform_hlds__unused_args__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "unused_args.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_54_54, 0) = ((MR_Box) ((MR_String) "__"));
#line 1147 "unused_args.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_54_54, 1) = ((MR_Box) (transform_hlds__unused_args__V_56_56));
#line 1147 "unused_args.m"
            }
#line 1147 "unused_args.m"
            {
#line 1147 "unused_args.m"
              transform_hlds__unused_args__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "unused_args.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_53_53, 0) = ((MR_Box) (transform_hlds__unused_args__TypeModuleString_26));
#line 1147 "unused_args.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_53_53, 1) = ((MR_Box) (transform_hlds__unused_args__V_54_54));
#line 1147 "unused_args.m"
            }
#line 1147 "unused_args.m"
            {
#line 1147 "unused_args.m"
              transform_hlds__unused_args__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "unused_args.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_51_51, 0) = ((MR_Box) ((MR_String) "_"));
#line 1147 "unused_args.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_51_51, 1) = ((MR_Box) (transform_hlds__unused_args__V_53_53));
#line 1147 "unused_args.m"
            }
#line 1147 "unused_args.m"
            {
#line 1147 "unused_args.m"
              transform_hlds__unused_args__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "unused_args.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_50_50, 0) = ((MR_Box) (transform_hlds__unused_args__Name0_14));
#line 1147 "unused_args.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_50_50, 1) = ((MR_Box) (transform_hlds__unused_args__V_51_51));
#line 1147 "unused_args.m"
            }
#line 1147 "unused_args.m"
            {
#line 1147 "unused_args.m"
              mercury__string__append_list_2_p_0(transform_hlds__unused_args__V_50_50, &transform_hlds__unused_args__Name1_27);
            }
#line 1144 "unused_args.m"
          }
#line 1149 "unused_args.m"
        else
#line 1151 "unused_args.m"
          transform_hlds__unused_args__Name1_27 = transform_hlds__unused_args__Name0_14;
#line 1149 "unused_args.m"
      }
#line 1153 "unused_args.m"
    else
#line 1154 "unused_args.m"
      transform_hlds__unused_args__Name1_27 = transform_hlds__unused_args__Name0_14;
#line 1156 "unused_args.m"
    {
#line 1156 "unused_args.m"
      transform_hlds__unused_args__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1156 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_62_62, 0) = ((MR_Box) (transform_hlds__unused_args__PredOrFunc_15));
#line 1156 "unused_args.m"
    }
#line 1157 "unused_args.m"
    {
#line 1157 "unused_args.m"
      transform_hlds__unused_args__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1157 "unused_args.m"
      MR_hl_field(MR_mktag(3), transform_hlds__unused_args__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1157 "unused_args.m"
      MR_hl_field(MR_mktag(3), transform_hlds__unused_args__V_63_63, 1) = ((MR_Box) (transform_hlds__unused_args__UnusedArgs_8));
#line 1157 "unused_args.m"
    }
#line 1156 "unused_args.m"
    {
#line 1156 "unused_args.m"
      parse_tree__prog_util__make_pred_name_6_p_0(transform_hlds__unused_args__PredModule_13, (MR_String) "UnusedArgs", transform_hlds__unused_args__V_62_62, transform_hlds__unused_args__Name1_27, transform_hlds__unused_args__V_63_63, &transform_hlds__unused_args__Name2_28);
    }
#line 1164 "unused_args.m"
    {
#line 1164 "unused_args.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__unused_args__ProcId_11, &transform_hlds__unused_args__ProcInt_29);
    }
#line 1165 "unused_args.m"
    {
#line 1165 "unused_args.m"
      transform_hlds__unused_args__V_66_66 = mercury__string__int_to_string_1_f_0(transform_hlds__unused_args__ProcInt_29);
    }
#line 1165 "unused_args.m"
    {
#line 1165 "unused_args.m"
      transform_hlds__unused_args__V_64_64 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__unused_args__V_66_66);
    }
#line 1165 "unused_args.m"
    {
#line 1165 "unused_args.m"
      mdbcomp__sym_name__add_sym_name_suffix_3_p_0(transform_hlds__unused_args__Name2_28, transform_hlds__unused_args__V_64_64, &transform_hlds__unused_args__Name_30);
    }
#line 1166 "unused_args.m"
    {
#line 1166 "unused_args.m"
      transform_hlds__unused_args__Arity_31 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44);
    }
#line 1167 "unused_args.m"
    {
#line 1167 "unused_args.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__TypeVars_32);
    }
#line 1168 "unused_args.m"
    {
#line 1168 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_8, transform_hlds__unused_args__ArgTypes0_18, &transform_hlds__unused_args__ArgTypes_33);
    }
#line 1169 "unused_args.m"
    {
#line 1169 "unused_args.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__Context_34);
    }
#line 1170 "unused_args.m"
    {
#line 1170 "unused_args.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__ClausesInfo_35);
    }
#line 1171 "unused_args.m"
    {
#line 1171 "unused_args.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__Markers_36);
    }
#line 1172 "unused_args.m"
    {
#line 1172 "unused_args.m"
      hlds__hlds_pred__pred_info_get_goal_type_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__GoalType_37);
    }
#line 1173 "unused_args.m"
    {
#line 1173 "unused_args.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__ClassContext_38);
    }
#line 1174 "unused_args.m"
    {
#line 1174 "unused_args.m"
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__unused_args__VarNameRemap_39);
    }
#line 5979 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__TypeCtorInfo_71_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 1179 "unused_args.m"
    {
#line 1179 "unused_args.m"
      mercury__map__init_1_p_0(transform_hlds__unused_args__TypeCtorInfo_71_71, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &transform_hlds__unused_args__EmptyProofs_40);
    }
#line 1180 "unused_args.m"
    {
#line 1180 "unused_args.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, transform_hlds__unused_args__TypeCtorInfo_71_71, &transform_hlds__unused_args__EmptyConstraintMap_41);
    }
#line 1181 "unused_args.m"
    {
#line 1181 "unused_args.m"
      transform_hlds__unused_args__Transform_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1181 "unused_args.m"
      MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Transform_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1181 "unused_args.m"
      MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Transform_42, 1) = ((MR_Box) (transform_hlds__unused_args__UnusedArgs_8));
#line 1181 "unused_args.m"
    }
#line 1182 "unused_args.m"
    {
#line 1182 "unused_args.m"
      transform_hlds__unused_args__Origin_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1182 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Origin_43, 0) = ((MR_Box) (transform_hlds__unused_args__Transform_42));
#line 1182 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Origin_43, 1) = ((MR_Box) (transform_hlds__unused_args__OrigOrigin_19));
#line 1182 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Origin_43, 2) = ((MR_Box) (transform_hlds__unused_args__PredId_10));
#line 1182 "unused_args.m"
    }
#line 1183 "unused_args.m"
    {
#line 1183 "unused_args.m"
      hlds__hlds_pred__pred_info_init_18_p_0(transform_hlds__unused_args__PredModule_13, transform_hlds__unused_args__Name_30, transform_hlds__unused_args__Arity_31, transform_hlds__unused_args__PredOrFunc_15, transform_hlds__unused_args__Context_34, transform_hlds__unused_args__Origin_43, transform_hlds__unused_args__Status_9, transform_hlds__unused_args__GoalType_37, transform_hlds__unused_args__Markers_36, transform_hlds__unused_args__ArgTypes_33, transform_hlds__unused_args__Tvars_16, transform_hlds__unused_args__ExistQVars_17, transform_hlds__unused_args__ClassContext_38, transform_hlds__unused_args__EmptyProofs_40, transform_hlds__unused_args__EmptyConstraintMap_41, transform_hlds__unused_args__ClausesInfo_35, transform_hlds__unused_args__VarNameRemap_39, &transform_hlds__unused_args__STATE_VARIABLE_PredInfo_68_68);
    }
#line 1187 "unused_args.m"
    {
#line 1187 "unused_args.m"
      hlds__hlds_pred__pred_info_set_typevarset_3_p_0(transform_hlds__unused_args__TypeVars_32, transform_hlds__unused_args__STATE_VARIABLE_PredInfo_68_68, transform_hlds__unused_args__STATE_VARIABLE_PredInfo_45);
#line 1187 "unused_args.m"
      return;
    }
#line 1128 "unused_args.m"
  }
#line 1124 "unused_args.m"
}

#line 869 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_117_115_101_100_95_97_114_103_115_95_112_97_115_115_95_95_91_50_93_95_48_5_p_0(
#line 869 "unused_args.m"
  MR_Integer transform_hlds__unused_args__PassNum_6,
#line 869 "unused_args.m"
  MR_Word transform_hlds__unused_args__LocalPredProcs_8,
#line 869 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_12,
#line 869 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_13)
#line 869 "unused_args.m"
{
#line 872 "unused_args.m"
  while (MR_TRUE)
#line 872 "unused_args.m"
    {
#line 872 "unused_args.m"
      /* tailcall optimized into a loop */
#line 872 "unused_args.m"
      {
#line 872 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;
#line 872 "unused_args.m"
        MR_Word transform_hlds__unused_args__Changed_10;
#line 872 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_15_15;

#line 873 "unused_args.m"
        {
#line 873 "unused_args.m"
          transform_hlds__unused_args__unused_args_single_pass_5_p_0(transform_hlds__unused_args__LocalPredProcs_8, (MR_Integer) 0, &transform_hlds__unused_args__Changed_10, transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_12, &transform_hlds__unused_args__STATE_VARIABLE_VarUsage_15_15);
        }
#line 882 "unused_args.m"
#line 882 "unused_args.m"
        switch (transform_hlds__unused_args__Changed_10) {
#line 882 "unused_args.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 882 "unused_args.m"
          case (MR_Integer) 0:
#line 883 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_VarUsage_13 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_15_15;
#line 882 "unused_args.m"
            break;
#line 882 "unused_args.m"
          case (MR_Integer) 1:
#line 875 "unused_args.m"
            {
#line 875 "unused_args.m"
              MR_Integer transform_hlds__unused_args__V_23_23 = (transform_hlds__unused_args__PassNum_6 + (MR_Integer) 1);

#line 881 "unused_args.m"
              /* direct tailcall eliminated */
#line 881 "unused_args.m"
              {
#line 881 "unused_args.m"
                MR_Integer transform_hlds__unused_args__PassNum__tmp_copy_6 = transform_hlds__unused_args__V_23_23;
#line 881 "unused_args.m"
                MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_12 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_15_15;

#line 881 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_12 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_12;
#line 881 "unused_args.m"
                transform_hlds__unused_args__PassNum_6 = transform_hlds__unused_args__PassNum__tmp_copy_6;
#line 881 "unused_args.m"
              }
#line 881 "unused_args.m"
              continue;
#line 875 "unused_args.m"
            }
#line 882 "unused_args.m"
            break;
#line 882 "unused_args.m"
        }
#line 872 "unused_args.m"
      }
#line 872 "unused_args.m"
      break;
#line 872 "unused_args.m"
    }
#line 869 "unused_args.m"
}

#line 1021 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_create_new_pred__1021__1_3_p_0(
#line 1021 "unused_args.m"
  MR_Word transform_hlds__unused_args__FuncInfo_25,
#line 1021 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer_26,
#line 1021 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_56)
#line 1021 "unused_args.m"
{
#line 1021 "unused_args.m"
  {
#line 1021 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1021 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeClassInfo_for_partial_order_78;
#line 1023 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_57_57;
#line 6132 "transform_hlds.unused_args.c"
    MR_bool MR_CALL (* transform_hlds__unused_args__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 1022 "unused_args.m"
    {
#line 1022 "unused_args.m"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args____Unify____unused_args_answer_0_0(transform_hlds__unused_args__HeadVar__3_56, transform_hlds__unused_args__Answer_26);
    }
#line 1022 "unused_args.m"
    transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1021 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1021 "unused_args.m"
      {
#line 1023 "unused_args.m"
        transform_hlds__unused_args__V_57_57 = (MR_Word) transform_hlds__unused_args__HeadVar__3_56;
#line 1023 "unused_args.m"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1023 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1021 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1021 "unused_args.m"
          {
#line 6156 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__TypeClassInfo_for_partial_order_78 = (MR_Word) &transform_hlds__unused_args_scalar_common_2[3];
#line 6158 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__TypeClassInfo_for_partial_order_78, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6160 "transform_hlds.unused_args.c"
            {
#line 6162 "transform_hlds.unused_args.c"
              return transform_hlds__unused_args__succeeded = transform_hlds__unused_args__func_0(((MR_Box) transform_hlds__unused_args__TypeClassInfo_for_partial_order_78), ((MR_Box) (transform_hlds__unused_args__FuncInfo_25)), ((MR_Box) (transform_hlds__unused_args__Answer_26)), ((MR_Box) (transform_hlds__unused_args__HeadVar__3_56)));
            }
#line 1021 "unused_args.m"
          }
#line 1021 "unused_args.m"
      }
#line 1021 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 1021 "unused_args.m"
  }
#line 1021 "unused_args.m"
}

#line 1014 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__IntroducedFrom__func__unused_args_create_new_pred__1014__1_1_f_0(
#line 1014 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_54)
#line 1014 "unused_args.m"
{
#line 1014 "unused_args.m"
  {
#line 1014 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1014 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVar__2_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_54, (MR_Integer) 1)));
#line 1014 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_54, (MR_Integer) 2)));

#line 1014 "unused_args.m"
    return transform_hlds__unused_args__HeadVar__2_55;
#line 1014 "unused_args.m"
  }
#line 1014 "unused_args.m"
}

#line 697 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__697__1_2_p_0(
#line 697 "unused_args.m"
  MR_Word transform_hlds__unused_args__LHS_49,
#line 697 "unused_args.m"
  MR_Word transform_hlds__unused_args__CellVar_58)
#line 697 "unused_args.m"
{
#line 697 "unused_args.m"
  {
#line 697 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 697 "unused_args.m"
    {
#line 697 "unused_args.m"
      return transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], ((MR_Box) (transform_hlds__unused_args__CellVar_58)), ((MR_Box) (transform_hlds__unused_args__LHS_49)));
    }
#line 697 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 697 "unused_args.m"
  }
#line 697 "unused_args.m"
}

#line 715 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__715__1_2_p_0(
#line 715 "unused_args.m"
  MR_Word transform_hlds__unused_args__LHS_49,
#line 715 "unused_args.m"
  MR_Word transform_hlds__unused_args__CellVar_144)
#line 715 "unused_args.m"
{
#line 715 "unused_args.m"
  {
#line 715 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 715 "unused_args.m"
    {
#line 715 "unused_args.m"
      return transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], ((MR_Box) (transform_hlds__unused_args__CellVar_144)), ((MR_Box) (transform_hlds__unused_args__LHS_49)));
    }
#line 715 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 715 "unused_args.m"
  }
#line 715 "unused_args.m"
}

#line 674 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__674__1_2_p_0(
#line 674 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_116,
#line 674 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_117)
#line 674 "unused_args.m"
{
#line 674 "unused_args.m"
  {
#line 674 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 674 "unused_args.m"
    MR_Word transform_hlds__unused_args__MaybeNameAndMode_44;
#line 675 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_45_45;
#line 675 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_46_46;
#line 676 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_47_47;

#line 675 "unused_args.m"
    *transform_hlds__unused_args__HeadVar__2_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_116, (MR_Integer) 0)));
#line 675 "unused_args.m"
    transform_hlds__unused_args__MaybeNameAndMode_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_116, (MR_Integer) 1)));
#line 675 "unused_args.m"
    transform_hlds__unused_args__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_116, (MR_Integer) 2)));
#line 675 "unused_args.m"
    transform_hlds__unused_args__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_116, (MR_Integer) 3)));
#line 676 "unused_args.m"
    transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__MaybeNameAndMode_44)) == (MR_mktag((MR_Integer) 1)));
#line 676 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 676 "unused_args.m"
      transform_hlds__unused_args__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__MaybeNameAndMode_44, (MR_Integer) 0)));
#line 674 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 674 "unused_args.m"
  }
#line 674 "unused_args.m"
}

#line 443 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__setup_proc_args__443__1_3_p_0(
#line 443 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVars_35,
#line 443 "unused_args.m"
  MR_Integer transform_hlds__unused_args__HeadVar__2_84,
#line 443 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__3_85)
#line 443 "unused_args.m"
{
#line 443 "unused_args.m"
  {
#line 443 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 443 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv0_HeadVar__3_85;

#line 443 "unused_args.m"
    {
#line 443 "unused_args.m"
      mercury__list__det_index1_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], transform_hlds__unused_args__HeadVars_35, transform_hlds__unused_args__HeadVar__2_84, &transform_hlds__unused_args__conv0_HeadVar__3_85);
    }
#line 443 "unused_args.m"
    *transform_hlds__unused_args__HeadVar__3_85 = ((MR_Word) transform_hlds__unused_args__conv0_HeadVar__3_85);
#line 443 "unused_args.m"
  }
#line 443 "unused_args.m"
}

#line 208 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__from_term_2_2_p_0(
#line 208 "unused_args.m"
  MR_Word transform_hlds__unused_args__Term_3)
#line 208 "unused_args.m"
{
#line 208 "unused_args.m"
  {
#line 208 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 208 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_5_5;
#line 208 "unused_args.m"
    MR_String transform_hlds__unused_args__V_6_6;
#line 208 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_7_7;
#line 209 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_4_4;

#line 208 "unused_args.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 209 "unused_args.m"
    transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 209 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 209 "unused_args.m"
      {
#line 209 "unused_args.m"
        transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Term_3, (MR_Integer) 0)));
#line 209 "unused_args.m"
        transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Term_3, (MR_Integer) 1)));
#line 209 "unused_args.m"
        transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Term_3, (MR_Integer) 2)));
#line 209 "unused_args.m"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 208 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 208 "unused_args.m"
          {
#line 209 "unused_args.m"
            transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__V_5_5)) == (MR_mktag((MR_Integer) 0)));
#line 209 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 209 "unused_args.m"
              {
#line 209 "unused_args.m"
                transform_hlds__unused_args__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_5_5, (MR_Integer) 0)));
#line 209 "unused_args.m"
                transform_hlds__unused_args__succeeded = (strcmp(transform_hlds__unused_args__V_6_6, (MR_String) "any") == 0);
#line 209 "unused_args.m"
              }
#line 208 "unused_args.m"
          }
#line 209 "unused_args.m"
      }
#line 208 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 208 "unused_args.m"
  }
#line 208 "unused_args.m"
}

#line 205 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__to_term_1_1_f_0(void)
#line 205 "unused_args.m"
{
#line 205 "unused_args.m"
  {
#line 205 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 205 "unused_args.m"
    MR_Word transform_hlds__unused_args__Term_3;

#line 205 "unused_args.m"
    {
#line 205 "unused_args.m"
      return transform_hlds__unused_args__Term_3 = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_f_0();
    }
#line 205 "unused_args.m"
    return transform_hlds__unused_args__Term_3;
#line 205 "unused_args.m"
  }
#line 205 "unused_args.m"
}

#line 227 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__from_term_2_2_p_0(
#line 227 "unused_args.m"
  MR_Word transform_hlds__unused_args__Term_4,
#line 227 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2)
#line 227 "unused_args.m"
{
#line 227 "unused_args.m"
  {
#line 227 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 227 "unused_args.m"
    MR_Word transform_hlds__unused_args__Args_3;
#line 228 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv0_Args_3;

#line 228 "unused_args.m"
    {
#line 228 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__term_conversion__term_to_type_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &transform_hlds__unused_args_scalar_common_1[0], transform_hlds__unused_args__Term_4, &transform_hlds__unused_args__conv0_Args_3);
    }
#line 228 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 228 "unused_args.m"
      {
#line 228 "unused_args.m"
        transform_hlds__unused_args__Args_3 = ((MR_Word) transform_hlds__unused_args__conv0_Args_3);
#line 228 "unused_args.m"
        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 228 "unused_args.m"
      }
#line 227 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 227 "unused_args.m"
      {
#line 227 "unused_args.m"
        *transform_hlds__unused_args__HeadVar__2_2 = (MR_Word) transform_hlds__unused_args__Args_3;
#line 227 "unused_args.m"
        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 227 "unused_args.m"
      }
#line 227 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 227 "unused_args.m"
  }
#line 227 "unused_args.m"
}

#line 224 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__to_term_1_1_f_0(
#line 224 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1)
#line 224 "unused_args.m"
{
#line 224 "unused_args.m"
  {
#line 224 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 224 "unused_args.m"
    MR_Word transform_hlds__unused_args__Term_4;
#line 224 "unused_args.m"
    MR_Word transform_hlds__unused_args__Args_3 = (MR_Word) transform_hlds__unused_args__HeadVar__1_1;

#line 225 "unused_args.m"
    {
#line 225 "unused_args.m"
      mercury__term_conversion__type_to_term_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[0], (MR_Word) &mercury__term__term__type_ctor_info_generic_0, ((MR_Box) (transform_hlds__unused_args__Args_3)), &transform_hlds__unused_args__Term_4);
    }
#line 224 "unused_args.m"
    return transform_hlds__unused_args__Term_4;
#line 224 "unused_args.m"
  }
#line 224 "unused_args.m"
}

#line 201 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__equivalent_3_3_p_0(
#line 201 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_7)
#line 201 "unused_args.m"
{
#line 201 "unused_args.m"
  {
#line 201 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 201 "unused_args.m"
    {
#line 201 "unused_args.m"
      return transform_hlds__unused_args__succeeded = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0();
    }
#line 201 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 201 "unused_args.m"
  }
#line 201 "unused_args.m"
}

#line 198 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__more_precise_than_3_3_p_0(
#line 198 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_4)
#line 198 "unused_args.m"
{
#line 199 "unused_args.m"
  {
#line 199 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 199 "unused_args.m"
    {
#line 199 "unused_args.m"
      return transform_hlds__unused_args__succeeded = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0();
    }
#line 199 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 199 "unused_args.m"
  }
#line 198 "unused_args.m"
}

#line 220 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__equivalent_3_3_p_0(
#line 220 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_9,
#line 220 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_10,
#line 220 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_3)
#line 220 "unused_args.m"
{
#line 220 "unused_args.m"
  {
#line 220 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 220 "unused_args.m"
    {
#line 220 "unused_args.m"
      return transform_hlds__unused_args__succeeded = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(transform_hlds__unused_args__Args_10, transform_hlds__unused_args__Args_3);
    }
#line 220 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 220 "unused_args.m"
  }
#line 220 "unused_args.m"
}

#line 215 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__more_precise_than_3_3_p_0(
#line 215 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_4,
#line 215 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer1_5,
#line 215 "unused_args.m"
  MR_Word transform_hlds__unused_args__Answer2_6)
#line 215 "unused_args.m"
{
#line 215 "unused_args.m"
  {
#line 215 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 215 "unused_args.m"
    {
#line 215 "unused_args.m"
      return transform_hlds__unused_args__succeeded = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_93_95_48_3_p_0(transform_hlds__unused_args__Answer1_5, transform_hlds__unused_args__Answer2_6);
    }
#line 215 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 215 "unused_args.m"
  }
#line 215 "unused_args.m"
}

#line 184 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__get_func_info_6_6_p_0(
#line 184 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_17,
#line 184 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleName_18,
#line 184 "unused_args.m"
  MR_Word transform_hlds__unused_args__FuncId_19,
#line 184 "unused_args.m"
  MR_Word * transform_hlds__unused_args__FuncInfo_22)
#line 184 "unused_args.m"
{
#line 184 "unused_args.m"
  {
#line 184 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 184 "unused_args.m"
    {
#line 184 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_103_101_116_95_102_117_110_99_95_105_110_102_111_95_54_95_95_91_52_44_32_53_93_95_48_6_p_0(transform_hlds__unused_args__ModuleInfo_17, transform_hlds__unused_args__ModuleName_18, transform_hlds__unused_args__FuncId_19, transform_hlds__unused_args__FuncInfo_22);
#line 184 "unused_args.m"
      return;
    }
#line 184 "unused_args.m"
  }
#line 184 "unused_args.m"
}

#line 183 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__top_2_2_f_0(
#line 183 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_12)
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
      return transform_hlds__unused_args__HeadVar__3_3 = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 183 "unused_args.m"
    return transform_hlds__unused_args__HeadVar__3_3;
#line 183 "unused_args.m"
  }
#line 183 "unused_args.m"
}

#line 182 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__bottom_2_2_f_0(
#line 182 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1)
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
      return transform_hlds__unused_args__HeadVar__3_3 = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_50_95_95_91_50_93_95_48_2_f_0(transform_hlds__unused_args__HeadVar__1_1);
    }
#line 182 "unused_args.m"
    return transform_hlds__unused_args__HeadVar__3_3;
#line 182 "unused_args.m"
  }
#line 182 "unused_args.m"
}

#line 181 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0(void)
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
      return transform_hlds__unused_args__HeadVar__3_3 = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 181 "unused_args.m"
    return transform_hlds__unused_args__HeadVar__3_3;
#line 181 "unused_args.m"
  }
#line 181 "unused_args.m"
}

#line 180 "unused_args.m"
static MR_Integer MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_version_number_2_2_f_0(void)
#line 180 "unused_args.m"
{
#line 180 "unused_args.m"
  {
#line 180 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 180 "unused_args.m"
    MR_Integer transform_hlds__unused_args__HeadVar__3_3;

#line 180 "unused_args.m"
    {
#line 180 "unused_args.m"
      return transform_hlds__unused_args__HeadVar__3_3 = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 180 "unused_args.m"
    return transform_hlds__unused_args__HeadVar__3_3;
#line 180 "unused_args.m"
  }
#line 180 "unused_args.m"
}

#line 179 "unused_args.m"
static MR_String MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_name_2_2_f_0(void)
#line 179 "unused_args.m"
{
#line 194 "unused_args.m"
  {
#line 194 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 194 "unused_args.m"
    MR_String transform_hlds__unused_args__HeadVar__3_3;

#line 194 "unused_args.m"
    {
#line 194 "unused_args.m"
      return transform_hlds__unused_args__HeadVar__3_3 = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 194 "unused_args.m"
    return transform_hlds__unused_args__HeadVar__3_3;
#line 194 "unused_args.m"
  }
#line 179 "unused_args.m"
}

#line 151 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____warning_info_0_0(
#line 151 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 151 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 151 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 151 "unused_args.m"
{
#line 151 "unused_args.m"
  {
#line 151 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 151 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_15 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 151 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_16 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 151 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_15 == transform_hlds__unused_args__CastY_16);
#line 151 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 6771 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 151 "unused_args.m"
    else
#line 151 "unused_args.m"
      {
#line 151 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 151 "unused_args.m"
        MR_String transform_hlds__unused_args__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 151 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 2)));
#line 151 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 3)));
#line 151 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 0)));
#line 151 "unused_args.m"
        MR_String transform_hlds__unused_args__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 1)));
#line 151 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 2)));
#line 151 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 3)));
#line 151 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_12_12;

#line 151 "unused_args.m"
        {
#line 151 "unused_args.m"
          mercury__term____Compare____context_0_0(&transform_hlds__unused_args__V_12_12, transform_hlds__unused_args__V_4_4, transform_hlds__unused_args__V_8_8);
        }
#line 6801 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_12_12 == (MR_Integer) 0);
#line 151 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 151 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 151 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_12_12;
#line 151 "unused_args.m"
        else
#line 151 "unused_args.m"
          {
#line 151 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_13_13;

#line 151 "unused_args.m"
            {
#line 151 "unused_args.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&transform_hlds__unused_args__V_13_13, transform_hlds__unused_args__V_5_5, transform_hlds__unused_args__V_9_9);
            }
#line 6821 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_13_13 == (MR_Integer) 0);
#line 151 "unused_args.m"
            transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 151 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 151 "unused_args.m"
              *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_13_13;
#line 151 "unused_args.m"
            else
#line 151 "unused_args.m"
              {
#line 151 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_14_14;

#line 151 "unused_args.m"
                {
#line 151 "unused_args.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__unused_args__V_14_14, transform_hlds__unused_args__V_6_6, transform_hlds__unused_args__V_10_10);
                }
#line 6841 "transform_hlds.unused_args.c"
                transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_14_14 == (MR_Integer) 0);
#line 151 "unused_args.m"
                transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 151 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 151 "unused_args.m"
                  *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_14_14;
#line 151 "unused_args.m"
                else
#line 151 "unused_args.m"
                  {
#line 151 "unused_args.m"
                    {
#line 151 "unused_args.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[0], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__V_7_7)), ((MR_Box) (transform_hlds__unused_args__V_11_11)));
#line 151 "unused_args.m"
                      return;
                    }
#line 151 "unused_args.m"
                  }
#line 151 "unused_args.m"
              }
#line 151 "unused_args.m"
          }
#line 151 "unused_args.m"
      }
#line 151 "unused_args.m"
  }
#line 151 "unused_args.m"
}

#line 151 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____warning_info_0_0(
#line 151 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 151 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 151 "unused_args.m"
{
#line 151 "unused_args.m"
  {
#line 151 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 151 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_11 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 151 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_12 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 151 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_11 == transform_hlds__unused_args__CastY_12);
#line 151 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 151 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 151 "unused_args.m"
    else
#line 151 "unused_args.m"
      {
#line 151 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_14_14;
#line 151 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 151 "unused_args.m"
        MR_String transform_hlds__unused_args__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 151 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 2)));
#line 151 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 3)));
#line 151 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 151 "unused_args.m"
        MR_String transform_hlds__unused_args__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 151 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 2)));
#line 151 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 3)));

#line 6920 "transform_hlds.unused_args.c"
        {
#line 6922 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__succeeded = mercury__term____Unify____context_0_0(transform_hlds__unused_args__V_3_3, transform_hlds__unused_args__V_7_7);
        }
#line 151 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 151 "unused_args.m"
          {
#line 6929 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__succeeded = (strcmp(transform_hlds__unused_args__V_4_4, transform_hlds__unused_args__V_8_8) == 0);
#line 151 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 151 "unused_args.m"
              {
#line 6935 "transform_hlds.unused_args.c"
                transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_5_5 == transform_hlds__unused_args__V_9_9);
#line 151 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 151 "unused_args.m"
                  {
#line 6941 "transform_hlds.unused_args.c"
                    transform_hlds__unused_args__TypeInfo_14_14 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[0];
#line 6943 "transform_hlds.unused_args.c"
                    {
#line 6945 "transform_hlds.unused_args.c"
                      return transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_14_14, ((MR_Box) (transform_hlds__unused_args__V_6_6)), ((MR_Box) (transform_hlds__unused_args__V_10_10)));
                    }
#line 151 "unused_args.m"
                  }
#line 151 "unused_args.m"
              }
#line 151 "unused_args.m"
          }
#line 151 "unused_args.m"
      }
#line 151 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 151 "unused_args.m"
  }
#line 151 "unused_args.m"
}

#line 149 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____var_usage_0_0(
#line 149 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 149 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 149 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 149 "unused_args.m"
{
#line 149 "unused_args.m"
  {
#line 149 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 149 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar1_4 = transform_hlds__unused_args__HeadVar__2_2;
#line 149 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar2_5 = transform_hlds__unused_args__HeadVar__3_3;

#line 149 "unused_args.m"
    {
#line 149 "unused_args.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[7], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar2_5)));
#line 149 "unused_args.m"
      return;
    }
#line 149 "unused_args.m"
  }
#line 149 "unused_args.m"
}

#line 149 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_usage_0_0(
#line 149 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 149 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 149 "unused_args.m"
{
#line 149 "unused_args.m"
  {
#line 149 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 149 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar1_3 = transform_hlds__unused_args__HeadVar__1_1;
#line 149 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar2_4 = transform_hlds__unused_args__HeadVar__2_2;

#line 149 "unused_args.m"
    {
#line 149 "unused_args.m"
      return transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[7], ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar2_4)));
    }
#line 149 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 149 "unused_args.m"
  }
#line 149 "unused_args.m"
}

#line 146 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____var_dep_0_0(
#line 146 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 146 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 146 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 146 "unused_args.m"
{
#line 146 "unused_args.m"
  {
#line 146 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 146 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar1_4 = transform_hlds__unused_args__HeadVar__2_2;
#line 146 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar2_5 = transform_hlds__unused_args__HeadVar__3_3;

#line 146 "unused_args.m"
    {
#line 146 "unused_args.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[1], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar2_5)));
#line 146 "unused_args.m"
      return;
    }
#line 146 "unused_args.m"
  }
#line 146 "unused_args.m"
}

#line 146 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_dep_0_0(
#line 146 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 146 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 146 "unused_args.m"
{
#line 146 "unused_args.m"
  {
#line 146 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 146 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar1_3 = transform_hlds__unused_args__HeadVar__1_1;
#line 146 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar2_4 = transform_hlds__unused_args__HeadVar__2_2;

#line 146 "unused_args.m"
    {
#line 146 "unused_args.m"
      return transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[1], ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar2_4)));
    }
#line 146 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 146 "unused_args.m"
  }
#line 146 "unused_args.m"
}

#line 141 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____usage_info_0_0(
#line 141 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 141 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 141 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 141 "unused_args.m"
{
#line 141 "unused_args.m"
  {
#line 141 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 141 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_9 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 141 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_10 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 141 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_9 == transform_hlds__unused_args__CastY_10);
#line 141 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 7111 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 141 "unused_args.m"
    else
#line 141 "unused_args.m"
      {
#line 141 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 141 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 141 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 0)));
#line 141 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 1)));
#line 141 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8;

#line 141 "unused_args.m"
        {
#line 141 "unused_args.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[8], &transform_hlds__unused_args__V_8_8, ((MR_Box) (transform_hlds__unused_args__V_4_4)), ((MR_Box) (transform_hlds__unused_args__V_6_6)));
        }
#line 7133 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_8_8 == (MR_Integer) 0);
#line 141 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 141 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 141 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_8_8;
#line 141 "unused_args.m"
        else
#line 141 "unused_args.m"
          {
#line 141 "unused_args.m"
            {
#line 141 "unused_args.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[9], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__V_5_5)), ((MR_Box) (transform_hlds__unused_args__V_7_7)));
#line 141 "unused_args.m"
              return;
            }
#line 141 "unused_args.m"
          }
#line 141 "unused_args.m"
      }
#line 141 "unused_args.m"
  }
#line 141 "unused_args.m"
}

#line 141 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____usage_info_0_0(
#line 141 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 141 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 141 "unused_args.m"
{
#line 141 "unused_args.m"
  {
#line 141 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 141 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_7 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 141 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_8 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 141 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_7 == transform_hlds__unused_args__CastY_8);
#line 141 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 141 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 141 "unused_args.m"
    else
#line 141 "unused_args.m"
      {
#line 141 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_10_10;
#line 141 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 141 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 141 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 141 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));

#line 7200 "transform_hlds.unused_args.c"
        {
#line 7202 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[8], ((MR_Box) (transform_hlds__unused_args__V_3_3)), ((MR_Box) (transform_hlds__unused_args__V_5_5)));
        }
#line 141 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 141 "unused_args.m"
          {
#line 7209 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__TypeInfo_10_10 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[9];
#line 7211 "transform_hlds.unused_args.c"
            {
#line 7213 "transform_hlds.unused_args.c"
              return transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_10_10, ((MR_Box) (transform_hlds__unused_args__V_4_4)), ((MR_Box) (transform_hlds__unused_args__V_6_6)));
            }
#line 141 "unused_args.m"
          }
#line 141 "unused_args.m"
      }
#line 141 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 141 "unused_args.m"
  }
#line 141 "unused_args.m"
}

#line 616 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_info_0_0(
#line 616 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 616 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 616 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 616 "unused_args.m"
{
#line 616 "unused_args.m"
  {
#line 616 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 616 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_9 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 616 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_10 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 616 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_9 == transform_hlds__unused_args__CastY_10);
#line 616 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 7251 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 616 "unused_args.m"
    else
#line 616 "unused_args.m"
      {
#line 616 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 616 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 616 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 0)));
#line 616 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 1)));
#line 616 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8;

#line 616 "unused_args.m"
        {
#line 616 "unused_args.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__unused_args__V_8_8, transform_hlds__unused_args__V_4_4, transform_hlds__unused_args__V_6_6);
        }
#line 7273 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_8_8 == (MR_Integer) 0);
#line 616 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 616 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 616 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_8_8;
#line 616 "unused_args.m"
        else
#line 616 "unused_args.m"
          {
#line 616 "unused_args.m"
            {
#line 616 "unused_args.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[6], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__V_5_5)), ((MR_Box) (transform_hlds__unused_args__V_7_7)));
#line 616 "unused_args.m"
              return;
            }
#line 616 "unused_args.m"
          }
#line 616 "unused_args.m"
      }
#line 616 "unused_args.m"
  }
#line 616 "unused_args.m"
}

#line 616 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_info_0_0(
#line 616 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 616 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 616 "unused_args.m"
{
#line 616 "unused_args.m"
  {
#line 616 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 616 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_7 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 616 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_8 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 616 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_7 == transform_hlds__unused_args__CastY_8);
#line 616 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 616 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 616 "unused_args.m"
    else
#line 616 "unused_args.m"
      {
#line 616 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_10_10;
#line 616 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 616 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 616 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 616 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));

#line 7340 "transform_hlds.unused_args.c"
        {
#line 7342 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__unused_args__V_3_3, transform_hlds__unused_args__V_5_5);
        }
#line 616 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 616 "unused_args.m"
          {
#line 7349 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__TypeInfo_10_10 = (MR_Word) &transform_hlds__unused_args_scalar_common_2[6];
#line 7351 "transform_hlds.unused_args.c"
            {
#line 7353 "transform_hlds.unused_args.c"
              return transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_10_10, ((MR_Box) (transform_hlds__unused_args__V_4_4)), ((MR_Box) (transform_hlds__unused_args__V_6_6)));
            }
#line 616 "unused_args.m"
          }
#line 616 "unused_args.m"
      }
#line 616 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 616 "unused_args.m"
  }
#line 616 "unused_args.m"
}

#line 160 "unused_args.m"
void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_func_info_0_0(
#line 160 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 160 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 160 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 160 "unused_args.m"
{
#line 160 "unused_args.m"
  {
#line 160 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 160 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_6 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 160 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_7 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 160 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_6 == transform_hlds__unused_args__CastY_7);
#line 160 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 7391 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 160 "unused_args.m"
    else
#line 160 "unused_args.m"
      {
#line 160 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_4_4 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 160 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_5_5 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 160 "unused_args.m"
        {
#line 160 "unused_args.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__unused_args__HeadVar__1_1, transform_hlds__unused_args__V_4_4, transform_hlds__unused_args__V_5_5);
#line 160 "unused_args.m"
          return;
        }
#line 160 "unused_args.m"
      }
#line 160 "unused_args.m"
  }
#line 160 "unused_args.m"
}

#line 160 "unused_args.m"
MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_func_info_0_0(
#line 160 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 160 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 160 "unused_args.m"
{
#line 160 "unused_args.m"
  {
#line 160 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 160 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_5 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 160 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_6 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 160 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_5 == transform_hlds__unused_args__CastY_6);
#line 160 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 160 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 160 "unused_args.m"
    else
#line 160 "unused_args.m"
      {
#line 160 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_3_3 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 160 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_4_4 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 7449 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_3_3 == transform_hlds__unused_args__V_4_4);
#line 160 "unused_args.m"
      }
#line 160 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 160 "unused_args.m"
  }
#line 160 "unused_args.m"
}

#line 163 "unused_args.m"
void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_call_0_0(
#line 163 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1)
#line 163 "unused_args.m"
{
#line 163 "unused_args.m"
  {
#line 163 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 163 "unused_args.m"
    {
#line 163 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(transform_hlds__unused_args__HeadVar__1_1);
#line 163 "unused_args.m"
      return;
    }
#line 163 "unused_args.m"
  }
#line 163 "unused_args.m"
}

#line 163 "unused_args.m"
MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_call_0_0(void)
#line 163 "unused_args.m"
{
#line 163 "unused_args.m"
  {
#line 163 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 163 "unused_args.m"
    {
#line 163 "unused_args.m"
      return transform_hlds__unused_args__succeeded = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 163 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 163 "unused_args.m"
  }
#line 163 "unused_args.m"
}

#line 166 "unused_args.m"
void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_answer_0_0(
#line 166 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 166 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 166 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 166 "unused_args.m"
{
#line 166 "unused_args.m"
  {
#line 166 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 166 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_6 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 166 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_7 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 166 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_6 == transform_hlds__unused_args__CastY_7);
#line 166 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 7530 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 166 "unused_args.m"
    else
#line 166 "unused_args.m"
      {
#line 166 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = (MR_Word) transform_hlds__unused_args__HeadVar__2_2;
#line 166 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = (MR_Word) transform_hlds__unused_args__HeadVar__3_3;

#line 166 "unused_args.m"
        {
#line 166 "unused_args.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[0], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__V_4_4)), ((MR_Box) (transform_hlds__unused_args__V_5_5)));
#line 166 "unused_args.m"
          return;
        }
#line 166 "unused_args.m"
      }
#line 166 "unused_args.m"
  }
#line 166 "unused_args.m"
}

#line 166 "unused_args.m"
MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_answer_0_0(
#line 166 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 166 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 166 "unused_args.m"
{
#line 166 "unused_args.m"
  {
#line 166 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 166 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_5 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 166 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_6 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 166 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_5 == transform_hlds__unused_args__CastY_6);
#line 166 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 166 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 166 "unused_args.m"
    else
#line 166 "unused_args.m"
      {
#line 166 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = (MR_Word) transform_hlds__unused_args__HeadVar__1_1;
#line 166 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = (MR_Word) transform_hlds__unused_args__HeadVar__2_2;

#line 7588 "transform_hlds.unused_args.c"
        {
#line 7590 "transform_hlds.unused_args.c"
          return transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[0], ((MR_Box) (transform_hlds__unused_args__V_3_3)), ((MR_Box) (transform_hlds__unused_args__V_4_4)));
        }
#line 166 "unused_args.m"
      }
#line 166 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 166 "unused_args.m"
  }
#line 166 "unused_args.m"
}

#line 978 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____proc_call_info_0_0(
#line 978 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 978 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 978 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 978 "unused_args.m"
{
#line 978 "unused_args.m"
  {
#line 978 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 978 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar1_4 = transform_hlds__unused_args__HeadVar__2_2;
#line 978 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar2_5 = transform_hlds__unused_args__HeadVar__3_3;

#line 978 "unused_args.m"
    {
#line 978 "unused_args.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[0], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar2_5)));
#line 978 "unused_args.m"
      return;
    }
#line 978 "unused_args.m"
  }
#line 978 "unused_args.m"
}

#line 978 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____proc_call_info_0_0(
#line 978 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 978 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 978 "unused_args.m"
{
#line 978 "unused_args.m"
  {
#line 978 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 978 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar1_3 = transform_hlds__unused_args__HeadVar__1_1;
#line 978 "unused_args.m"
    MR_Word transform_hlds__unused_args__Cast_HeadVar2_4 = transform_hlds__unused_args__HeadVar__2_2;

#line 978 "unused_args.m"
    {
#line 978 "unused_args.m"
      return transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[0], ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__unused_args__Cast_HeadVar2_4)));
    }
#line 978 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 978 "unused_args.m"
  }
#line 978 "unused_args.m"
}

#line 982 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____new_proc_info_0_0(
#line 982 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 982 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 982 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 982 "unused_args.m"
{
#line 982 "unused_args.m"
  {
#line 982 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 982 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_15 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 982 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_16 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 982 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_15 == transform_hlds__unused_args__CastY_16);
#line 982 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 7688 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 982 "unused_args.m"
    else
#line 982 "unused_args.m"
      {
#line 982 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 982 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 982 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 2)));
#line 982 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 3)));
#line 982 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 0)));
#line 982 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 1)));
#line 982 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 2)));
#line 982 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 3)));
#line 982 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_12_12;

#line 982 "unused_args.m"
        {
#line 982 "unused_args.m"
          hlds__hlds_pred____Compare____pred_id_0_0(&transform_hlds__unused_args__V_12_12, transform_hlds__unused_args__V_4_4, transform_hlds__unused_args__V_8_8);
        }
#line 7718 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_12_12 == (MR_Integer) 0);
#line 982 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 982 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 982 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_12_12;
#line 982 "unused_args.m"
        else
#line 982 "unused_args.m"
          {
#line 982 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_13_13;

#line 982 "unused_args.m"
            {
#line 982 "unused_args.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__unused_args__V_13_13, transform_hlds__unused_args__V_5_5, transform_hlds__unused_args__V_9_9);
            }
#line 7738 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_13_13 == (MR_Integer) 0);
#line 982 "unused_args.m"
            transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 982 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 982 "unused_args.m"
              *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_13_13;
#line 982 "unused_args.m"
            else
#line 982 "unused_args.m"
              {
#line 982 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_14_14;

#line 982 "unused_args.m"
                {
#line 982 "unused_args.m"
                  mdbcomp__sym_name____Compare____sym_name_0_0(&transform_hlds__unused_args__V_14_14, transform_hlds__unused_args__V_6_6, transform_hlds__unused_args__V_10_10);
                }
#line 7758 "transform_hlds.unused_args.c"
                transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_14_14 == (MR_Integer) 0);
#line 982 "unused_args.m"
                transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 982 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 982 "unused_args.m"
                  *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_14_14;
#line 982 "unused_args.m"
                else
#line 982 "unused_args.m"
                  {
#line 982 "unused_args.m"
                    {
#line 982 "unused_args.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[0], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__V_7_7)), ((MR_Box) (transform_hlds__unused_args__V_11_11)));
#line 982 "unused_args.m"
                      return;
                    }
#line 982 "unused_args.m"
                  }
#line 982 "unused_args.m"
              }
#line 982 "unused_args.m"
          }
#line 982 "unused_args.m"
      }
#line 982 "unused_args.m"
  }
#line 982 "unused_args.m"
}

#line 982 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____new_proc_info_0_0(
#line 982 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 982 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 982 "unused_args.m"
{
#line 982 "unused_args.m"
  {
#line 982 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 982 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_11 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 982 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_12 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 982 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_11 == transform_hlds__unused_args__CastY_12);
#line 982 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 982 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 982 "unused_args.m"
    else
#line 982 "unused_args.m"
      {
#line 982 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_15_15;
#line 982 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 982 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 982 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 2)));
#line 982 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 3)));
#line 982 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 982 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 982 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 2)));
#line 982 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 3)));

#line 7837 "transform_hlds.unused_args.c"
        {
#line 7839 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__unused_args__V_3_3, transform_hlds__unused_args__V_7_7);
        }
#line 982 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 982 "unused_args.m"
          {
#line 7846 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_4_4 == transform_hlds__unused_args__V_8_8);
#line 982 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 982 "unused_args.m"
              {
#line 7852 "transform_hlds.unused_args.c"
                {
#line 7854 "transform_hlds.unused_args.c"
                  transform_hlds__unused_args__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__unused_args__V_5_5, transform_hlds__unused_args__V_9_9);
                }
#line 982 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 982 "unused_args.m"
                  {
#line 7861 "transform_hlds.unused_args.c"
                    transform_hlds__unused_args__TypeInfo_15_15 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[0];
#line 7863 "transform_hlds.unused_args.c"
                    {
#line 7865 "transform_hlds.unused_args.c"
                      return transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_15_15, ((MR_Box) (transform_hlds__unused_args__V_6_6)), ((MR_Box) (transform_hlds__unused_args__V_10_10)));
                    }
#line 982 "unused_args.m"
                  }
#line 982 "unused_args.m"
              }
#line 982 "unused_args.m"
          }
#line 982 "unused_args.m"
      }
#line 982 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 982 "unused_args.m"
  }
#line 982 "unused_args.m"
}

#line 1406 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____fixup_info_0_0(
#line 1406 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 1406 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 1406 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 1406 "unused_args.m"
{
#line 1406 "unused_args.m"
  {
#line 1406 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1406 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_18 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 1406 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_19 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 1406 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_18 == transform_hlds__unused_args__CastY_19);
#line 1406 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 7907 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 1406 "unused_args.m"
    else
#line 1406 "unused_args.m"
      {
#line 1406 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 1406 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 1406 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 2)));
#line 1406 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 3)));
#line 1406 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 4)));
#line 1406 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 0)));
#line 1406 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 1)));
#line 1406 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 2)));
#line 1406 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 3)));
#line 1406 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 4)));
#line 1406 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_14_14;

#line 1406 "unused_args.m"
        {
#line 1406 "unused_args.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__unused_args__V_14_14, transform_hlds__unused_args__V_4_4, transform_hlds__unused_args__V_9_9);
        }
#line 7941 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_14_14 == (MR_Integer) 0);
#line 1406 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1406 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1406 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_14_14;
#line 1406 "unused_args.m"
        else
#line 1406 "unused_args.m"
          {
#line 1406 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_15_15;

#line 1406 "unused_args.m"
            {
#line 1406 "unused_args.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[0], &transform_hlds__unused_args__V_15_15, ((MR_Box) (transform_hlds__unused_args__V_5_5)), ((MR_Box) (transform_hlds__unused_args__V_10_10)));
            }
#line 7961 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_15_15 == (MR_Integer) 0);
#line 1406 "unused_args.m"
            transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1406 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1406 "unused_args.m"
              *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_15_15;
#line 1406 "unused_args.m"
            else
#line 1406 "unused_args.m"
              {
#line 1406 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_16_16;

#line 1406 "unused_args.m"
                {
#line 1406 "unused_args.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[6], &transform_hlds__unused_args__V_16_16, ((MR_Box) (transform_hlds__unused_args__V_6_6)), ((MR_Box) (transform_hlds__unused_args__V_11_11)));
                }
#line 7981 "transform_hlds.unused_args.c"
                transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_16_16 == (MR_Integer) 0);
#line 1406 "unused_args.m"
                transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1406 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 1406 "unused_args.m"
                  *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_16_16;
#line 1406 "unused_args.m"
                else
#line 1406 "unused_args.m"
                  {
#line 1406 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_17_17;

#line 1406 "unused_args.m"
                    {
#line 1406 "unused_args.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[7], &transform_hlds__unused_args__V_17_17, ((MR_Box) (transform_hlds__unused_args__V_7_7)), ((MR_Box) (transform_hlds__unused_args__V_12_12)));
                    }
#line 8001 "transform_hlds.unused_args.c"
                    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_17_17 == (MR_Integer) 0);
#line 1406 "unused_args.m"
                    transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1406 "unused_args.m"
                    if (transform_hlds__unused_args__succeeded)
#line 1406 "unused_args.m"
                      *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_17_17;
#line 1406 "unused_args.m"
                    else
#line 1406 "unused_args.m"
                      {
#line 1406 "unused_args.m"
                        {
#line 1406 "unused_args.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[6], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__V_8_8)), ((MR_Box) (transform_hlds__unused_args__V_13_13)));
#line 1406 "unused_args.m"
                          return;
                        }
#line 1406 "unused_args.m"
                      }
#line 1406 "unused_args.m"
                  }
#line 1406 "unused_args.m"
              }
#line 1406 "unused_args.m"
          }
#line 1406 "unused_args.m"
      }
#line 1406 "unused_args.m"
  }
#line 1406 "unused_args.m"
}

#line 1406 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____fixup_info_0_0(
#line 1406 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1406 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 1406 "unused_args.m"
{
#line 1406 "unused_args.m"
  {
#line 1406 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1406 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_13 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 1406 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_14 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 1406 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_13 == transform_hlds__unused_args__CastY_14);
#line 1406 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1406 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1406 "unused_args.m"
    else
#line 1406 "unused_args.m"
      {
#line 1406 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_16_16;
#line 1406 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_17_17;
#line 1406 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_18_18;
#line 1406 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_19_19;
#line 1406 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 1406 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 1406 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 2)));
#line 1406 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 3)));
#line 1406 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 4)));
#line 1406 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 1406 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 1406 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 2)));
#line 1406 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 3)));
#line 1406 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 4)));

#line 8092 "transform_hlds.unused_args.c"
        {
#line 8094 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__unused_args__V_3_3, transform_hlds__unused_args__V_8_8);
        }
#line 1406 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1406 "unused_args.m"
          {
#line 8101 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__TypeInfo_16_16 = (MR_Word) &transform_hlds__unused_args_scalar_common_2[0];
#line 8103 "transform_hlds.unused_args.c"
            {
#line 8105 "transform_hlds.unused_args.c"
              transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_16_16, ((MR_Box) (transform_hlds__unused_args__V_4_4)), ((MR_Box) (transform_hlds__unused_args__V_9_9)));
            }
#line 1406 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1406 "unused_args.m"
              {
#line 8112 "transform_hlds.unused_args.c"
                transform_hlds__unused_args__TypeInfo_17_17 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[6];
#line 8114 "transform_hlds.unused_args.c"
                {
#line 8116 "transform_hlds.unused_args.c"
                  transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_17_17, ((MR_Box) (transform_hlds__unused_args__V_5_5)), ((MR_Box) (transform_hlds__unused_args__V_10_10)));
                }
#line 1406 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 1406 "unused_args.m"
                  {
#line 8123 "transform_hlds.unused_args.c"
                    transform_hlds__unused_args__TypeInfo_18_18 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[7];
#line 8125 "transform_hlds.unused_args.c"
                    {
#line 8127 "transform_hlds.unused_args.c"
                      transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_18_18, ((MR_Box) (transform_hlds__unused_args__V_6_6)), ((MR_Box) (transform_hlds__unused_args__V_11_11)));
                    }
#line 1406 "unused_args.m"
                    if (transform_hlds__unused_args__succeeded)
#line 1406 "unused_args.m"
                      {
#line 8134 "transform_hlds.unused_args.c"
                        transform_hlds__unused_args__TypeInfo_19_19 = (MR_Word) &transform_hlds__unused_args_scalar_common_2[6];
#line 8136 "transform_hlds.unused_args.c"
                        {
#line 8138 "transform_hlds.unused_args.c"
                          return transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_19_19, ((MR_Box) (transform_hlds__unused_args__V_7_7)), ((MR_Box) (transform_hlds__unused_args__V_12_12)));
                        }
#line 1406 "unused_args.m"
                      }
#line 1406 "unused_args.m"
                  }
#line 1406 "unused_args.m"
              }
#line 1406 "unused_args.m"
          }
#line 1406 "unused_args.m"
      }
#line 1406 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 1406 "unused_args.m"
  }
#line 1406 "unused_args.m"
}

#line 132 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args____Compare____arg_var_in_proc_0_0(
#line 132 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__1_1,
#line 132 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 132 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__3_3)
#line 132 "unused_args.m"
{
#line 132 "unused_args.m"
  {
#line 132 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 132 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_9 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;
#line 132 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_10 = (MR_Integer) transform_hlds__unused_args__HeadVar__3_3;

#line 132 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_9 == transform_hlds__unused_args__CastY_10);
#line 132 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 8182 "transform_hlds.unused_args.c"
      *transform_hlds__unused_args__HeadVar__1_1 = (MR_Integer) 0;
#line 132 "unused_args.m"
    else
#line 132 "unused_args.m"
      {
#line 132 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 132 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 132 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 0)));
#line 132 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__3_3, (MR_Integer) 1)));
#line 132 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8;

#line 132 "unused_args.m"
        {
#line 132 "unused_args.m"
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__unused_args__V_8_8, transform_hlds__unused_args__V_4_4, transform_hlds__unused_args__V_6_6);
        }
#line 8204 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_8_8 == (MR_Integer) 0);
#line 132 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 132 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 132 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__V_8_8;
#line 132 "unused_args.m"
        else
#line 132 "unused_args.m"
          {
#line 132 "unused_args.m"
            {
#line 132 "unused_args.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], transform_hlds__unused_args__HeadVar__1_1, ((MR_Box) (transform_hlds__unused_args__V_5_5)), ((MR_Box) (transform_hlds__unused_args__V_7_7)));
#line 132 "unused_args.m"
              return;
            }
#line 132 "unused_args.m"
          }
#line 132 "unused_args.m"
      }
#line 132 "unused_args.m"
  }
#line 132 "unused_args.m"
}

#line 132 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____arg_var_in_proc_0_0(
#line 132 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 132 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2)
#line 132 "unused_args.m"
{
#line 132 "unused_args.m"
  {
#line 132 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 132 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastX_7 = (MR_Integer) transform_hlds__unused_args__HeadVar__1_1;
#line 132 "unused_args.m"
    MR_Integer transform_hlds__unused_args__CastY_8 = (MR_Integer) transform_hlds__unused_args__HeadVar__2_2;

#line 132 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__CastX_7 == transform_hlds__unused_args__CastY_8);
#line 132 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 132 "unused_args.m"
      transform_hlds__unused_args__succeeded = MR_TRUE;
#line 132 "unused_args.m"
    else
#line 132 "unused_args.m"
      {
#line 132 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_10_10;
#line 132 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 132 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 132 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 132 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));

#line 8271 "transform_hlds.unused_args.c"
        {
#line 8273 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__unused_args__V_3_3, transform_hlds__unused_args__V_5_5);
        }
#line 132 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 132 "unused_args.m"
          {
#line 8280 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__TypeInfo_10_10 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 8282 "transform_hlds.unused_args.c"
            {
#line 8284 "transform_hlds.unused_args.c"
              return transform_hlds__unused_args__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unused_args__TypeInfo_10_10, ((MR_Box) (transform_hlds__unused_args__V_4_4)), ((MR_Box) (transform_hlds__unused_args__V_6_6)));
            }
#line 132 "unused_args.m"
          }
#line 132 "unused_args.m"
      }
#line 132 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 132 "unused_args.m"
  }
#line 132 "unused_args.m"
}

#line 1969 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_2_4_p_0(
#line 1969 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 1969 "unused_args.m"
  MR_Word transform_hlds__unused_args__CalleePredProcId_6,
#line 1969 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_17,
#line 1969 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_18)
#line 1969 "unused_args.m"
{
#line 1972 "unused_args.m"
  {
#line 1972 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1972 "unused_args.m"
    MR_Word transform_hlds__unused_args__CalleePredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__CalleePredProcId_6, (MR_Integer) 0)));
#line 1972 "unused_args.m"
    MR_Word transform_hlds__unused_args__CalleePredInfo_10;
#line 1973 "unused_args.m"
    MR_Integer transform_hlds__unused_args__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__CalleePredProcId_6, (MR_Integer) 1)));

#line 1974 "unused_args.m"
    {
#line 1974 "unused_args.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__unused_args__ModuleInfo_5, transform_hlds__unused_args__CalleePredId_8, &transform_hlds__unused_args__CalleePredInfo_10);
    }
#line 1976 "unused_args.m"
    {
#line 1976 "unused_args.m"
      transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_imported_not_external_1_p_0(transform_hlds__unused_args__CalleePredInfo_10);
    }
#line 1976 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1976 "unused_args.m"
      {
#line 1977 "unused_args.m"
        {
#line 1977 "unused_args.m"
          transform_hlds__unused_args__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__unused_args__CalleePredInfo_10);
        }
#line 1977 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1976 "unused_args.m"
      }
#line 1987 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1980 "unused_args.m"
      {
#line 1980 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeClassInfo_for_analysis_20;
#line 1980 "unused_args.m"
        MR_Word transform_hlds__unused_args__CalleeModule_11;
#line 1980 "unused_args.m"
        MR_Word transform_hlds__unused_args__CalleeFuncId_12;
#line 1980 "unused_args.m"
        MR_Word transform_hlds__unused_args__Answer_14;
#line 1980 "unused_args.m"
        MR_Word transform_hlds__unused_args__FuncInfo_16;
#line 8359 "transform_hlds.unused_args.c"
        void MR_CALL (* transform_hlds__unused_args__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8361 "transform_hlds.unused_args.c"
        MR_Box transform_hlds__unused_args__conv1_FuncInfo_16;

#line 1979 "unused_args.m"
        {
#line 1979 "unused_args.m"
          transform_hlds__mmc_analysis__module_name_func_id_4_p_0(transform_hlds__unused_args__ModuleInfo_5, transform_hlds__unused_args__CalleePredProcId_6, &transform_hlds__unused_args__CalleeModule_11, &transform_hlds__unused_args__CalleeFuncId_12);
        }
#line 1981 "unused_args.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 8371 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__TypeClassInfo_for_analysis_20 = (MR_Word) &transform_hlds__unused_args_scalar_common_4[0];
#line 8373 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__TypeClassInfo_for_analysis_20, (MR_Integer) 0)), (MR_Integer) 10)));
#line 8375 "transform_hlds.unused_args.c"
        {
#line 8377 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__func_0(((MR_Box) transform_hlds__unused_args__TypeClassInfo_for_analysis_20), ((MR_Box) (transform_hlds__unused_args__ModuleInfo_5)), ((MR_Box) (transform_hlds__unused_args__CalleeModule_11)), ((MR_Box) (transform_hlds__unused_args__CalleeFuncId_12)), &transform_hlds__unused_args__conv1_FuncInfo_16);
        }
#line 8380 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__FuncInfo_16 = ((MR_Word) transform_hlds__unused_args__conv1_FuncInfo_16);
#line 1985 "unused_args.m"
        {
#line 1985 "unused_args.m"
          analysis__record_dependency_7_p_0(transform_hlds__unused_args__TypeClassInfo_for_analysis_20, transform_hlds__unused_args__CalleeModule_11, transform_hlds__unused_args__CalleeFuncId_12, ((MR_Box) (transform_hlds__unused_args__FuncInfo_16)), ((MR_Box) ((MR_Integer) 0)), transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_17, transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_18);
#line 1985 "unused_args.m"
          return;
        }
#line 1980 "unused_args.m"
      }
#line 1987 "unused_args.m"
    else
#line 1987 "unused_args.m"
      *transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_18 = transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_17;
#line 1972 "unused_args.m"
  }
#line 1969 "unused_args.m"
}

#line 1966 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_4_p_0_1(
#line 1966 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1966 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1966 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1966 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3)
#line 1966 "unused_args.m"
{
#line 1966 "unused_args.m"
  {
#line 1966 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1966 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_18;

#line 1966 "unused_args.m"
    {
#line 1966 "unused_args.m"
      transform_hlds__unused_args__record_intermod_dependencies_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_18);
    }
#line 1966 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_18));
#line 1966 "unused_args.m"
  }
#line 1966 "unused_args.m"
}

#line 1958 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_4_p_0(
#line 1958 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 1958 "unused_args.m"
  MR_Word transform_hlds__unused_args__CallerPredProcId_6,
#line 1958 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_12,
#line 1958 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_13)
#line 1958 "unused_args.m"
{
#line 1961 "unused_args.m"
  {
#line 1961 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1961 "unused_args.m"
    MR_Word transform_hlds__unused_args__CallerProcInfo_9;
#line 1961 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal_10;
#line 1961 "unused_args.m"
    MR_Word transform_hlds__unused_args__CalleePredProcIds_11;
#line 1961 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_14_14;
#line 1962 "unused_args.m"
    MR_Word transform_hlds__unused_args___CallerPredInfo_8;
#line 1966 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv1_STATE_VARIABLE_AnalysisInfo_13;

#line 1962 "unused_args.m"
    {
#line 1962 "unused_args.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__unused_args__ModuleInfo_5, transform_hlds__unused_args__CallerPredProcId_6, &transform_hlds__unused_args___CallerPredInfo_8, &transform_hlds__unused_args__CallerProcInfo_9);
    }
#line 1964 "unused_args.m"
    {
#line 1964 "unused_args.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__unused_args__CallerProcInfo_9, &transform_hlds__unused_args__Goal_10);
    }
#line 1965 "unused_args.m"
    {
#line 1965 "unused_args.m"
      hlds__goal_util__pred_proc_ids_from_goal_2_p_0(transform_hlds__unused_args__Goal_10, &transform_hlds__unused_args__CalleePredProcIds_11);
    }
#line 1966 "unused_args.m"
    {
#line 1966 "unused_args.m"
      transform_hlds__unused_args__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1966 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_6[0]));
#line 1966 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 1) = ((MR_Box) (transform_hlds__unused_args__record_intermod_dependencies_4_p_0_1));
#line 1966 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1966 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 3) = ((MR_Box) (transform_hlds__unused_args__ModuleInfo_5));
#line 1966 "unused_args.m"
    }
#line 1966 "unused_args.m"
    {
#line 1966 "unused_args.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, transform_hlds__unused_args__V_14_14, transform_hlds__unused_args__CalleePredProcIds_11, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_12)), &transform_hlds__unused_args__conv1_STATE_VARIABLE_AnalysisInfo_13);
    }
#line 1966 "unused_args.m"
    *transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_13 = ((MR_Word) transform_hlds__unused_args__conv1_STATE_VARIABLE_AnalysisInfo_13);
#line 1961 "unused_args.m"
  }
#line 1958 "unused_args.m"
}

#line 1921 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__maybe_record_intermod_unused_args_2_7_p_0(
#line 1921 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_8,
#line 1921 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_9,
#line 1921 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_10,
#line 1921 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredInfo_11,
#line 1921 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_12,
#line 1921 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_19,
#line 1921 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_20)
#line 1921 "unused_args.m"
{
#line 1940 "unused_args.m"
  {
#line 1940 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1928 "unused_args.m"
    {
#line 1928 "unused_args.m"
      transform_hlds__unused_args__succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(transform_hlds__unused_args__ModuleInfo_8, transform_hlds__unused_args__PredInfo_11, transform_hlds__unused_args__ProcId_12);
    }
#line 1928 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1928 "unused_args.m"
      {
#line 1929 "unused_args.m"
        {
#line 1929 "unused_args.m"
          transform_hlds__unused_args__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__unused_args__PredInfo_11);
        }
#line 1929 "unused_args.m"
        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1928 "unused_args.m"
      }
#line 1940 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1931 "unused_args.m"
      {
#line 1931 "unused_args.m"
        MR_Word transform_hlds__unused_args__PPId_14;
#line 1931 "unused_args.m"
        MR_Word transform_hlds__unused_args__Answer_16;
#line 1931 "unused_args.m"
        MR_Word transform_hlds__unused_args__ModuleName_17;
#line 1931 "unused_args.m"
        MR_Word transform_hlds__unused_args__FuncId_18;
#line 1934 "unused_args.m"
        MR_Word transform_hlds__unused_args__UnusedArgs_15;
#line 1932 "unused_args.m"
        MR_Box transform_hlds__unused_args__conv0_UnusedArgs_15;

#line 1931 "unused_args.m"
        {
#line 1931 "unused_args.m"
          transform_hlds__unused_args__PPId_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1931 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PPId_14, 0) = ((MR_Box) (transform_hlds__unused_args__PredId_10));
#line 1931 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PPId_14, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_12));
#line 1931 "unused_args.m"
        }
#line 1932 "unused_args.m"
        {
#line 1932 "unused_args.m"
          transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args_scalar_common_1[0], transform_hlds__unused_args__UnusedArgInfo_9, ((MR_Box) (transform_hlds__unused_args__PPId_14)), &transform_hlds__unused_args__conv0_UnusedArgs_15);
        }
#line 1932 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1932 "unused_args.m"
          {
#line 1932 "unused_args.m"
            transform_hlds__unused_args__UnusedArgs_15 = ((MR_Word) transform_hlds__unused_args__conv0_UnusedArgs_15);
#line 1932 "unused_args.m"
            transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1932 "unused_args.m"
          }
#line 1934 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1933 "unused_args.m"
          transform_hlds__unused_args__Answer_16 = (MR_Word) transform_hlds__unused_args__UnusedArgs_15;
#line 1934 "unused_args.m"
        else
#line 1935 "unused_args.m"
          {
#line 1935 "unused_args.m"
            transform_hlds__unused_args__Answer_16 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1935 "unused_args.m"
          }
#line 1937 "unused_args.m"
        {
#line 1937 "unused_args.m"
          transform_hlds__mmc_analysis__module_name_func_id_4_p_0(transform_hlds__unused_args__ModuleInfo_8, transform_hlds__unused_args__PPId_14, &transform_hlds__unused_args__ModuleName_17, &transform_hlds__unused_args__FuncId_18);
        }
#line 1938 "unused_args.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1938 "unused_args.m"
        {
#line 1938 "unused_args.m"
          analysis__record_result_7_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_4[0], transform_hlds__unused_args__ModuleName_17, transform_hlds__unused_args__FuncId_18, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (transform_hlds__unused_args__Answer_16)), (MR_Integer) 2, transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_19, transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_20);
#line 1938 "unused_args.m"
          return;
        }
#line 1931 "unused_args.m"
      }
#line 1940 "unused_args.m"
    else
#line 1940 "unused_args.m"
      *transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_20 = transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_19;
#line 1940 "unused_args.m"
  }
#line 1921 "unused_args.m"
}

#line 1917 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0_1(
#line 1917 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1917 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1917 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1917 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3)
#line 1917 "unused_args.m"
{
#line 1917 "unused_args.m"
  {
#line 1917 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1917 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_20;

#line 1917 "unused_args.m"
    {
#line 1917 "unused_args.m"
      transform_hlds__unused_args__maybe_record_intermod_unused_args_2_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 6))), ((MR_Integer) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_20);
    }
#line 1917 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_20));
#line 1917 "unused_args.m"
  }
#line 1917 "unused_args.m"
}

#line 1909 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0(
#line 1909 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_6,
#line 1909 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_7,
#line 1909 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_8,
#line 1909 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_12,
#line 1909 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_13)
#line 1909 "unused_args.m"
{
#line 1913 "unused_args.m"
  {
#line 1913 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1913 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredInfo_10;
#line 1913 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcIds_11;
#line 1913 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_14_14;
#line 1916 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv1_STATE_VARIABLE_AnalysisInfo_13;

#line 1914 "unused_args.m"
    {
#line 1914 "unused_args.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__unused_args__ModuleInfo_6, transform_hlds__unused_args__PredId_8, &transform_hlds__unused_args__PredInfo_10);
    }
#line 1915 "unused_args.m"
    {
#line 1915 "unused_args.m"
      transform_hlds__unused_args__ProcIds_11 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__unused_args__PredInfo_10);
    }
#line 1917 "unused_args.m"
    {
#line 1917 "unused_args.m"
      transform_hlds__unused_args__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1917 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_11[0]));
#line 1917 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 1) = ((MR_Box) (transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0_1));
#line 1917 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1917 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 3) = ((MR_Box) (transform_hlds__unused_args__ModuleInfo_6));
#line 1917 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 4) = ((MR_Box) (transform_hlds__unused_args__UnusedArgInfo_7));
#line 1917 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 5) = ((MR_Box) (transform_hlds__unused_args__PredId_8));
#line 1917 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 6) = ((MR_Box) (transform_hlds__unused_args__PredInfo_10));
#line 1917 "unused_args.m"
    }
#line 1916 "unused_args.m"
    {
#line 1916 "unused_args.m"
      mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, transform_hlds__unused_args__V_14_14, transform_hlds__unused_args__ProcIds_11, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_0_12)), &transform_hlds__unused_args__conv1_STATE_VARIABLE_AnalysisInfo_13);
    }
#line 1916 "unused_args.m"
    *transform_hlds__unused_args__STATE_VARIABLE_AnalysisInfo_13 = ((MR_Word) transform_hlds__unused_args__conv1_STATE_VARIABLE_AnalysisInfo_13);
#line 1913 "unused_args.m"
  }
#line 1909 "unused_args.m"
}

#line 1894 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__format_arg_list_2_2_f_0(
#line 1894 "unused_args.m"
  MR_Integer transform_hlds__unused_args__First_4,
#line 1894 "unused_args.m"
  MR_Word transform_hlds__unused_args__List_5)
#line 1894 "unused_args.m"
{
#line 1896 "unused_args.m"
  {
#line 1896 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1896 "unused_args.m"
    MR_Word transform_hlds__unused_args__Pieces_6;
#line 1896 "unused_args.m"
    MR_String transform_hlds__unused_args__FirstStr_7;

#line 1897 "unused_args.m"
    {
#line 1897 "unused_args.m"
      transform_hlds__unused_args__FirstStr_7 = mercury__string__int_to_string_1_f_0(transform_hlds__unused_args__First_4);
    }
#line 1902 "unused_args.m"
    if ((transform_hlds__unused_args__List_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1903 "unused_args.m"
      {
#line 1903 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_12_12;
#line 1903 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_13_13;

#line 1904 "unused_args.m"
        {
#line 1904 "unused_args.m"
          transform_hlds__unused_args__V_13_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1904 "unused_args.m"
          MR_hl_field(MR_mktag(2), transform_hlds__unused_args__V_13_13, 0) = ((MR_Box) (transform_hlds__unused_args__FirstStr_7));
#line 1904 "unused_args.m"
        }
#line 1904 "unused_args.m"
        {
#line 1904 "unused_args.m"
          transform_hlds__unused_args__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1904 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_12_12, 0) = ((MR_Box) (transform_hlds__unused_args__V_13_13));
#line 1904 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_12_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1904 "unused_args.m"
        }
#line 1904 "unused_args.m"
        {
#line 1904 "unused_args.m"
          transform_hlds__unused_args__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1904 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &transform_hlds__unused_args_scalar_common_9[1])));
#line 1904 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Pieces_6, 1) = ((MR_Box) (transform_hlds__unused_args__V_12_12));
#line 1904 "unused_args.m"
        }
#line 1903 "unused_args.m"
      }
#line 1902 "unused_args.m"
    else
#line 1899 "unused_args.m"
      {
#line 1899 "unused_args.m"
        MR_Integer transform_hlds__unused_args__Second_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__List_5, (MR_Integer) 0)));
#line 1899 "unused_args.m"
        MR_Word transform_hlds__unused_args__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__List_5, (MR_Integer) 1)));
#line 1899 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_17_17;
#line 1899 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_18_18;
#line 1899 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_19_19;

#line 1900 "unused_args.m"
        {
#line 1900 "unused_args.m"
          transform_hlds__unused_args__V_18_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1900 "unused_args.m"
          MR_hl_field(MR_mktag(2), transform_hlds__unused_args__V_18_18, 0) = ((MR_Box) (transform_hlds__unused_args__FirstStr_7));
#line 1900 "unused_args.m"
        }
#line 1901 "unused_args.m"
        {
#line 1901 "unused_args.m"
          transform_hlds__unused_args__V_19_19 = transform_hlds__unused_args__format_arg_list_2_2_f_0(transform_hlds__unused_args__Second_8, transform_hlds__unused_args__Rest_9);
        }
#line 1900 "unused_args.m"
        {
#line 1900 "unused_args.m"
          transform_hlds__unused_args__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1900 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_17_17, 0) = ((MR_Box) (transform_hlds__unused_args__V_18_18));
#line 1900 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_17_17, 1) = ((MR_Box) (transform_hlds__unused_args__V_19_19));
#line 1900 "unused_args.m"
        }
#line 1900 "unused_args.m"
        {
#line 1900 "unused_args.m"
          transform_hlds__unused_args__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1900 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__unused_args_scalar_common_1[20])));
#line 1900 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Pieces_6, 1) = ((MR_Box) (transform_hlds__unused_args__V_17_17));
#line 1900 "unused_args.m"
        }
#line 1899 "unused_args.m"
      }
#line 1896 "unused_args.m"
    return transform_hlds__unused_args__Pieces_6;
#line 1896 "unused_args.m"
  }
#line 1894 "unused_args.m"
}

#line 1843 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__adjust_unused_args_3_p_0(
#line 1843 "unused_args.m"
  MR_Integer transform_hlds__unused_args__NumToDrop_1,
#line 1843 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 1843 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__3_3)
#line 1843 "unused_args.m"
{
#line 1845 "unused_args.m"
  {
#line 1845 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1845 "unused_args.m"
    if ((transform_hlds__unused_args__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1845 "unused_args.m"
      *transform_hlds__unused_args__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1845 "unused_args.m"
    else
#line 1846 "unused_args.m"
      {
#line 1846 "unused_args.m"
        MR_Integer transform_hlds__unused_args__UnusedArgNo_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 1846 "unused_args.m"
        MR_Word transform_hlds__unused_args__UnusedArgNos0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 1846 "unused_args.m"
        MR_Integer transform_hlds__unused_args__NewArg_9 = (transform_hlds__unused_args__UnusedArgNo_6 - transform_hlds__unused_args__NumToDrop_1);
#line 1846 "unused_args.m"
        MR_Word transform_hlds__unused_args__AdjUnusedArgs1_10;

#line 1853 "unused_args.m"
        {
#line 1853 "unused_args.m"
          transform_hlds__unused_args__adjust_unused_args_3_p_0(transform_hlds__unused_args__NumToDrop_1, transform_hlds__unused_args__UnusedArgNos0_7, &transform_hlds__unused_args__AdjUnusedArgs1_10);
        }
#line 1848 "unused_args.m"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__NewArg_9 < (MR_Integer) 1);
#line 1850 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1849 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__3_3 = transform_hlds__unused_args__AdjUnusedArgs1_10;
#line 1850 "unused_args.m"
        else
#line 1851 "unused_args.m"
          {
#line 1851 "unused_args.m"
            MR_Word base;
#line 1851 "unused_args.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1851 "unused_args.m"
            *transform_hlds__unused_args__HeadVar__3_3 = base;
#line 1851 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__NewArg_9));
#line 1851 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__AdjUnusedArgs1_10));
#line 1851 "unused_args.m"
          }
#line 1846 "unused_args.m"
      }
#line 1845 "unused_args.m"
  }
#line 1843 "unused_args.m"
}

#line 1781 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__write_unused_args_to_opt_file_6_p_0(
#line 1781 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1781 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredInfo_2,
#line 1781 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_3,
#line 1781 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_4)
#line 1781 "unused_args.m"
{
#line 1784 "unused_args.m"
  {
#line 1784 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1784 "unused_args.m"
    if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1784 "unused_args.m"
      {
#line 1784 "unused_args.m"
      }
#line 1784 "unused_args.m"
    else
#line 1786 "unused_args.m"
      {
#line 1786 "unused_args.m"
        MR_Word transform_hlds__unused_args__OptStream_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 1792 "unused_args.m"
        MR_Integer transform_hlds__unused_args__V_18_18;
#line 1792 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_19_19;

#line 1788 "unused_args.m"
        {
#line 1788 "unused_args.m"
          transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(transform_hlds__unused_args__PredInfo_2);
        }
#line 1789 "unused_args.m"
        if (!(transform_hlds__unused_args__succeeded))
#line 1789 "unused_args.m"
          {
#line 1789 "unused_args.m"
            {
#line 1789 "unused_args.m"
              transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_opt_exported_1_p_0(transform_hlds__unused_args__PredInfo_2);
            }
#line 1789 "unused_args.m"
            if (!(transform_hlds__unused_args__succeeded))
#line 1790 "unused_args.m"
              {
#line 1790 "unused_args.m"
                transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_exported_to_submodules_1_p_0(transform_hlds__unused_args__PredInfo_2);
              }
#line 1789 "unused_args.m"
          }
#line 1791 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1791 "unused_args.m"
          {
#line 1792 "unused_args.m"
            transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__UnusedArgs_4)) == (MR_mktag((MR_Integer) 1)));
#line 1792 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1792 "unused_args.m"
              {
#line 1792 "unused_args.m"
                transform_hlds__unused_args__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__UnusedArgs_4, (MR_Integer) 0)));
#line 1792 "unused_args.m"
                transform_hlds__unused_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__UnusedArgs_4, (MR_Integer) 1)));
#line 1792 "unused_args.m"
              }
#line 1791 "unused_args.m"
          }
#line 1807 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1794 "unused_args.m"
          {
#line 1794 "unused_args.m"
            MR_Word transform_hlds__unused_args__Module_20;
#line 1794 "unused_args.m"
            MR_String transform_hlds__unused_args__Name_21;
#line 1794 "unused_args.m"
            MR_Integer transform_hlds__unused_args__Arity_22;
#line 1794 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredOrFunc_23;
#line 1794 "unused_args.m"
            MR_Word transform_hlds__unused_args__OldOutput_24;
#line 1794 "unused_args.m"
            MR_Integer transform_hlds__unused_args__ModeNum_25;
#line 1794 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredSymName_26;
#line 1794 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredNameArityPFMn_27;
#line 1794 "unused_args.m"
            MR_Word transform_hlds__unused_args__UnusedArgsInfo_28;
#line 1806 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_29_29;

#line 1794 "unused_args.m"
            {
#line 1794 "unused_args.m"
              transform_hlds__unused_args__Module_20 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__unused_args__PredInfo_2);
            }
#line 1795 "unused_args.m"
            {
#line 1795 "unused_args.m"
              transform_hlds__unused_args__Name_21 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__unused_args__PredInfo_2);
            }
#line 1796 "unused_args.m"
            {
#line 1796 "unused_args.m"
              transform_hlds__unused_args__Arity_22 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__unused_args__PredInfo_2);
            }
#line 1797 "unused_args.m"
            {
#line 1797 "unused_args.m"
              transform_hlds__unused_args__PredOrFunc_23 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__unused_args__PredInfo_2);
            }
#line 1798 "unused_args.m"
            {
#line 1798 "unused_args.m"
              mercury__io__set_output_stream_4_p_0(transform_hlds__unused_args__OptStream_13, &transform_hlds__unused_args__OldOutput_24);
            }
#line 1799 "unused_args.m"
            {
#line 1799 "unused_args.m"
              hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__unused_args__ProcId_3, &transform_hlds__unused_args__ModeNum_25);
            }
#line 1800 "unused_args.m"
            {
#line 1800 "unused_args.m"
              transform_hlds__unused_args__PredSymName_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1800 "unused_args.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unused_args__PredSymName_26, 0) = ((MR_Box) (transform_hlds__unused_args__Module_20));
#line 1800 "unused_args.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unused_args__PredSymName_26, 1) = ((MR_Box) (transform_hlds__unused_args__Name_21));
#line 1800 "unused_args.m"
            }
#line 1801 "unused_args.m"
            {
#line 1801 "unused_args.m"
              transform_hlds__unused_args__PredNameArityPFMn_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1801 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredNameArityPFMn_27, 0) = ((MR_Box) (transform_hlds__unused_args__PredSymName_26));
#line 1801 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredNameArityPFMn_27, 1) = ((MR_Box) (transform_hlds__unused_args__Arity_22));
#line 1801 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredNameArityPFMn_27, 2) = ((MR_Box) (transform_hlds__unused_args__PredOrFunc_23));
#line 1801 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredNameArityPFMn_27, 3) = ((MR_Box) (transform_hlds__unused_args__ModeNum_25));
#line 1801 "unused_args.m"
            }
#line 1803 "unused_args.m"
            {
#line 1803 "unused_args.m"
              transform_hlds__unused_args__UnusedArgsInfo_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1803 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__UnusedArgsInfo_28, 0) = ((MR_Box) (transform_hlds__unused_args__PredNameArityPFMn_27));
#line 1803 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__UnusedArgsInfo_28, 1) = ((MR_Box) (transform_hlds__unused_args__UnusedArgs_4));
#line 1803 "unused_args.m"
            }
#line 1805 "unused_args.m"
            {
#line 1805 "unused_args.m"
              parse_tree__mercury_to_mercury__mercury_output_pragma_unused_args_3_p_0(transform_hlds__unused_args__UnusedArgsInfo_28);
            }
#line 1806 "unused_args.m"
            {
#line 1806 "unused_args.m"
              mercury__io__set_output_stream_4_p_0(transform_hlds__unused_args__OldOutput_24, &transform_hlds__unused_args__V_29_29);
            }
#line 1794 "unused_args.m"
          }
#line 1807 "unused_args.m"
        else
#line 1807 "unused_args.m"
          {
#line 1807 "unused_args.m"
          }
#line 1786 "unused_args.m"
      }
#line 1784 "unused_args.m"
  }
#line 1781 "unused_args.m"
}

#line 1715 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__output_warnings_and_pragmas_10_p_0(
#line 1715 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_1,
#line 1715 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_2,
#line 1715 "unused_args.m"
  MR_Word transform_hlds__unused_args__WriteOptPragmas_3,
#line 1715 "unused_args.m"
  MR_Word transform_hlds__unused_args__DoWarn_4,
#line 1715 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__5_5,
#line 1715 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_6,
#line 1715 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Specs_0_7,
#line 1715 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Specs_8)
#line 1715 "unused_args.m"
{
#line 1720 "unused_args.m"
  while (MR_TRUE)
#line 1720 "unused_args.m"
    {
#line 1720 "unused_args.m"
      /* tailcall optimized into a loop */
#line 1720 "unused_args.m"
      {
#line 1720 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 1720 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1720 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_Specs_8 = transform_hlds__unused_args__STATE_VARIABLE_Specs_0_7;
#line 1720 "unused_args.m"
        else
#line 1722 "unused_args.m"
          {
#line 1722 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredId_26;
#line 1722 "unused_args.m"
            MR_Integer transform_hlds__unused_args__ProcId_27;
#line 1722 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredProcIds_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__5_5, (MR_Integer) 1)));
#line 1722 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__5_5, (MR_Integer) 0)));
#line 1722 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_68_68;
#line 1722 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_Specs_69_69;
#line 1775 "unused_args.m"
            MR_Word transform_hlds__unused_args__UnusedArgs_32;
#line 1723 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv0_UnusedArgs_32;

#line 1722 "unused_args.m"
            transform_hlds__unused_args__PredId_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_56_56, (MR_Integer) 0)));
#line 1722 "unused_args.m"
            transform_hlds__unused_args__ProcId_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_56_56, (MR_Integer) 1)));
#line 1723 "unused_args.m"
            {
#line 1723 "unused_args.m"
              transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args_scalar_common_1[0], transform_hlds__unused_args__UnusedArgInfo_2, ((MR_Box) (transform_hlds__unused_args__V_56_56)), &transform_hlds__unused_args__conv0_UnusedArgs_32);
            }
#line 1723 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1723 "unused_args.m"
              {
#line 1723 "unused_args.m"
                transform_hlds__unused_args__UnusedArgs_32 = ((MR_Word) transform_hlds__unused_args__conv0_UnusedArgs_32);
#line 1723 "unused_args.m"
                transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1723 "unused_args.m"
              }
#line 1775 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1724 "unused_args.m"
              {
#line 1724 "unused_args.m"
                MR_Word transform_hlds__unused_args__PredInfo_33;
#line 1726 "unused_args.m"
                MR_String transform_hlds__unused_args__Name_34;
#line 1726 "unused_args.m"
                MR_Word transform_hlds__unused_args__Markers_35;
#line 1726 "unused_args.m"
                MR_Word transform_hlds__unused_args__TypeSpecInfo_42;
#line 1726 "unused_args.m"
                MR_Word transform_hlds__unused_args__TypeSpecForcePreds_44;
#line 1726 "unused_args.m"
                MR_Word transform_hlds__unused_args__Origin_47;
#line 1728 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_58_58;
#line 1728 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_75_75;
#line 1737 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_59_59;
#line 1742 "unused_args.m"
                MR_String transform_hlds__unused_args__V_60_60;
#line 1742 "unused_args.m"
                MR_Integer transform_hlds__unused_args__V_36_36;
#line 1746 "unused_args.m"
                MR_Integer transform_hlds__unused_args__Position_37;
#line 1746 "unused_args.m"
                MR_Integer transform_hlds__unused_args__Length_38;
#line 1746 "unused_args.m"
                MR_Integer transform_hlds__unused_args__IdLen_39;
#line 1746 "unused_args.m"
                MR_String transform_hlds__unused_args__Id_40;
#line 1746 "unused_args.m"
                MR_String transform_hlds__unused_args__V_61_61;
#line 1746 "unused_args.m"
                MR_Integer transform_hlds__unused_args__V_62_62;
#line 1746 "unused_args.m"
                MR_Integer transform_hlds__unused_args__V_63_63;
#line 1750 "unused_args.m"
                MR_Integer transform_hlds__unused_args__V_41_41;
#line 1753 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_43_43;
#line 1753 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_45_45;
#line 1753 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_46_46;
#line 1754 "unused_args.m"
                MR_Word transform_hlds__unused_args__TypeCtorInfo_74_74;
#line 1759 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_64_64;
#line 1759 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_49_49;
#line 1759 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_50_50;
#line 1759 "unused_args.m"
                MR_Integer transform_hlds__unused_args__V_48_48;
#line 1765 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_65_65;
#line 1766 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_66_66;

#line 1724 "unused_args.m"
                {
#line 1724 "unused_args.m"
                  hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__unused_args__ModuleInfo_1, transform_hlds__unused_args__PredId_26, &transform_hlds__unused_args__PredInfo_33);
                }
#line 1726 "unused_args.m"
                {
#line 1726 "unused_args.m"
                  transform_hlds__unused_args__Name_34 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__unused_args__PredInfo_33);
                }
#line 1727 "unused_args.m"
                {
#line 1727 "unused_args.m"
                  transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__unused_args__PredInfo_33);
                }
#line 1727 "unused_args.m"
                transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1726 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 1726 "unused_args.m"
                  {
#line 1728 "unused_args.m"
                    transform_hlds__unused_args__V_58_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1728 "unused_args.m"
                    {
#line 1728 "unused_args.m"
                      hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__unused_args__PredInfo_33, &transform_hlds__unused_args__V_75_75);
                    }
#line 1728 "unused_args.m"
                    {
#line 1728 "unused_args.m"
                      transform_hlds__unused_args__succeeded = parse_tree__status____Unify____import_status_0_0(transform_hlds__unused_args__V_58_58, transform_hlds__unused_args__V_75_75);
                    }
#line 1728 "unused_args.m"
                    transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1726 "unused_args.m"
                    if (transform_hlds__unused_args__succeeded)
#line 1726 "unused_args.m"
                      {
#line 1731 "unused_args.m"
                        {
#line 1731 "unused_args.m"
                          transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(transform_hlds__unused_args__PredInfo_33);
                        }
#line 1731 "unused_args.m"
                        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1726 "unused_args.m"
                        if (transform_hlds__unused_args__succeeded)
#line 1726 "unused_args.m"
                          {
#line 1732 "unused_args.m"
                            {
#line 1732 "unused_args.m"
                              transform_hlds__unused_args__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__unused_args__PredInfo_33);
                            }
#line 1732 "unused_args.m"
                            transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1726 "unused_args.m"
                            if (transform_hlds__unused_args__succeeded)
#line 1726 "unused_args.m"
                              {
#line 1736 "unused_args.m"
                                {
#line 1736 "unused_args.m"
                                  hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__unused_args__PredInfo_33, &transform_hlds__unused_args__Markers_35);
                                }
#line 1737 "unused_args.m"
                                transform_hlds__unused_args__V_59_59 = (MR_Integer) 0;
#line 1737 "unused_args.m"
                                {
#line 1737 "unused_args.m"
                                  transform_hlds__unused_args__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__unused_args__Markers_35, transform_hlds__unused_args__V_59_59);
                                }
#line 1737 "unused_args.m"
                                transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1726 "unused_args.m"
                                if (transform_hlds__unused_args__succeeded)
#line 1726 "unused_args.m"
                                  {
#line 1742 "unused_args.m"
                                    transform_hlds__unused_args__V_60_60 = (MR_String) "__LambdaGoal__";
#line 1742 "unused_args.m"
                                    {
#line 1742 "unused_args.m"
                                      transform_hlds__unused_args__succeeded = mercury__string__sub_string_search_3_p_0(transform_hlds__unused_args__Name_34, transform_hlds__unused_args__V_60_60, &transform_hlds__unused_args__V_36_36);
                                    }
#line 1742 "unused_args.m"
                                    transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1726 "unused_args.m"
                                    if (transform_hlds__unused_args__succeeded)
#line 1726 "unused_args.m"
                                      {
#line 1746 "unused_args.m"
                                        transform_hlds__unused_args__V_61_61 = (MR_String) "__ho";
#line 1746 "unused_args.m"
                                        {
#line 1746 "unused_args.m"
                                          transform_hlds__unused_args__succeeded = mercury__string__sub_string_search_3_p_0(transform_hlds__unused_args__Name_34, transform_hlds__unused_args__V_61_61, &transform_hlds__unused_args__Position_37);
                                        }
#line 1746 "unused_args.m"
                                        if (transform_hlds__unused_args__succeeded)
#line 1746 "unused_args.m"
                                          {
#line 1747 "unused_args.m"
                                            {
#line 1747 "unused_args.m"
                                              mercury__string__length_2_p_0(transform_hlds__unused_args__Name_34, &transform_hlds__unused_args__Length_38);
                                            }
#line 1748 "unused_args.m"
                                            transform_hlds__unused_args__V_62_62 = (transform_hlds__unused_args__Length_38 - transform_hlds__unused_args__Position_37);
#line 1748 "unused_args.m"
                                            transform_hlds__unused_args__V_63_63 = (MR_Integer) 4;
#line 1748 "unused_args.m"
                                            transform_hlds__unused_args__IdLen_39 = (transform_hlds__unused_args__V_62_62 - transform_hlds__unused_args__V_63_63);
#line 1749 "unused_args.m"
                                            {
#line 1749 "unused_args.m"
                                              mercury__string__right_3_p_0(transform_hlds__unused_args__Name_34, transform_hlds__unused_args__IdLen_39, &transform_hlds__unused_args__Id_40);
                                            }
#line 1750 "unused_args.m"
                                            {
#line 1750 "unused_args.m"
                                              transform_hlds__unused_args__succeeded = mercury__string__to_int_2_p_0(transform_hlds__unused_args__Id_40, &transform_hlds__unused_args__V_41_41);
                                            }
#line 1746 "unused_args.m"
                                          }
#line 1745 "unused_args.m"
                                        transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1726 "unused_args.m"
                                        if (transform_hlds__unused_args__succeeded)
#line 1726 "unused_args.m"
                                          {
#line 1752 "unused_args.m"
                                            {
#line 1752 "unused_args.m"
                                              hlds__hlds_module__module_info_get_type_spec_info_2_p_0(transform_hlds__unused_args__ModuleInfo_1, &transform_hlds__unused_args__TypeSpecInfo_42);
                                            }
#line 1753 "unused_args.m"
                                            transform_hlds__unused_args__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__TypeSpecInfo_42, (MR_Integer) 0)));
#line 1753 "unused_args.m"
                                            transform_hlds__unused_args__TypeSpecForcePreds_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__TypeSpecInfo_42, (MR_Integer) 1)));
#line 1753 "unused_args.m"
                                            transform_hlds__unused_args__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__TypeSpecInfo_42, (MR_Integer) 2)));
#line 1753 "unused_args.m"
                                            transform_hlds__unused_args__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__TypeSpecInfo_42, (MR_Integer) 3)));
#line 9386 "transform_hlds.unused_args.c"
                                            transform_hlds__unused_args__TypeCtorInfo_74_74 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1754 "unused_args.m"
                                            {
#line 1754 "unused_args.m"
                                              transform_hlds__unused_args__succeeded = mercury__set__member_2_p_0(transform_hlds__unused_args__TypeCtorInfo_74_74, ((MR_Box) (transform_hlds__unused_args__PredId_26)), transform_hlds__unused_args__TypeSpecForcePreds_44);
                                            }
#line 1754 "unused_args.m"
                                            transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1726 "unused_args.m"
                                            if (transform_hlds__unused_args__succeeded)
#line 1726 "unused_args.m"
                                              {
#line 1757 "unused_args.m"
                                                {
#line 1757 "unused_args.m"
                                                  hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__unused_args__PredInfo_33, &transform_hlds__unused_args__Origin_47);
                                                }
#line 1759 "unused_args.m"
                                                transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__Origin_47)) == (MR_mktag((MR_Integer) 2)));
#line 1759 "unused_args.m"
                                                if (transform_hlds__unused_args__succeeded)
#line 1759 "unused_args.m"
                                                  {
#line 1759 "unused_args.m"
                                                    transform_hlds__unused_args__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Origin_47, (MR_Integer) 0)));
#line 1759 "unused_args.m"
                                                    transform_hlds__unused_args__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Origin_47, (MR_Integer) 1)));
#line 1759 "unused_args.m"
                                                    transform_hlds__unused_args__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Origin_47, (MR_Integer) 2)));
#line 1759 "unused_args.m"
                                                    transform_hlds__unused_args__succeeded = ((((MR_tag((MR_Word) transform_hlds__unused_args__V_64_64)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__V_64_64, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1759 "unused_args.m"
                                                    if (transform_hlds__unused_args__succeeded)
#line 1759 "unused_args.m"
                                                      transform_hlds__unused_args__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__V_64_64, (MR_Integer) 1)));
#line 1759 "unused_args.m"
                                                  }
#line 1758 "unused_args.m"
                                                transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1726 "unused_args.m"
                                                if (transform_hlds__unused_args__succeeded)
#line 1726 "unused_args.m"
                                                  {
#line 1765 "unused_args.m"
                                                    transform_hlds__unused_args__V_65_65 = (MR_Integer) 10;
#line 1765 "unused_args.m"
                                                    {
#line 1765 "unused_args.m"
                                                      transform_hlds__unused_args__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__unused_args__Markers_35, transform_hlds__unused_args__V_65_65);
                                                    }
#line 1765 "unused_args.m"
                                                    transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1726 "unused_args.m"
                                                    if (transform_hlds__unused_args__succeeded)
#line 1726 "unused_args.m"
                                                      {
#line 1766 "unused_args.m"
                                                        transform_hlds__unused_args__V_66_66 = (MR_Integer) 11;
#line 1766 "unused_args.m"
                                                        {
#line 1766 "unused_args.m"
                                                          transform_hlds__unused_args__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__unused_args__Markers_35, transform_hlds__unused_args__V_66_66);
                                                        }
#line 1766 "unused_args.m"
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
#line 1772 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 1769 "unused_args.m"
                  {
#line 1768 "unused_args.m"
                    {
#line 1768 "unused_args.m"
                      transform_hlds__unused_args__write_unused_args_to_opt_file_6_p_0(transform_hlds__unused_args__WriteOptPragmas_3, transform_hlds__unused_args__PredInfo_33, transform_hlds__unused_args__ProcId_27, transform_hlds__unused_args__UnusedArgs_32);
                    }
#line 1770 "unused_args.m"
                    {
#line 1770 "unused_args.m"
                      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_97_114_110_95_117_110_117_115_101_100_95_97_114_103_115_95_95_91_50_93_95_48_10_p_0(transform_hlds__unused_args__DoWarn_4, transform_hlds__unused_args__PredInfo_33, transform_hlds__unused_args__PredId_26, transform_hlds__unused_args__ProcId_27, transform_hlds__unused_args__UnusedArgs_32, transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_6, &transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_68_68, transform_hlds__unused_args__STATE_VARIABLE_Specs_0_7, &transform_hlds__unused_args__STATE_VARIABLE_Specs_69_69);
                    }
#line 1769 "unused_args.m"
                  }
#line 1772 "unused_args.m"
                else
#line 1773 "unused_args.m"
                  {
#line 1773 "unused_args.m"
                    transform_hlds__unused_args__STATE_VARIABLE_Specs_69_69 = transform_hlds__unused_args__STATE_VARIABLE_Specs_0_7;
#line 1773 "unused_args.m"
                    transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_68_68 = transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_6;
#line 1773 "unused_args.m"
                  }
#line 1724 "unused_args.m"
              }
#line 1775 "unused_args.m"
            else
#line 1776 "unused_args.m"
              {
#line 1776 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_Specs_69_69 = transform_hlds__unused_args__STATE_VARIABLE_Specs_0_7;
#line 1776 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_68_68 = transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_6;
#line 1776 "unused_args.m"
              }
#line 1778 "unused_args.m"
            /* direct tailcall eliminated */
#line 1778 "unused_args.m"
            {
#line 1778 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__5__tmp_copy_5 = transform_hlds__unused_args__PredProcIds_28;
#line 1778 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0__tmp_copy_6 = transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_68_68;
#line 1778 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_Specs_0__tmp_copy_7 = transform_hlds__unused_args__STATE_VARIABLE_Specs_69_69;

#line 1778 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Specs_0_7 = transform_hlds__unused_args__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 1778 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0_6 = transform_hlds__unused_args__STATE_VARIABLE_WarnedPredIds_0__tmp_copy_6;
#line 1778 "unused_args.m"
              transform_hlds__unused_args__HeadVar__5_5 = transform_hlds__unused_args__HeadVar__5__tmp_copy_5;
#line 1778 "unused_args.m"
            }
#line 1778 "unused_args.m"
            continue;
#line 1722 "unused_args.m"
          }
#line 1720 "unused_args.m"
      }
#line 1720 "unused_args.m"
      break;
#line 1720 "unused_args.m"
    }
#line 1715 "unused_args.m"
}

#line 1666 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__check_deconstruct_args_6_p_0(
#line 1666 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_7,
#line 1666 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedVars_8,
#line 1666 "unused_args.m"
  MR_Word transform_hlds__unused_args__Args_9,
#line 1666 "unused_args.m"
  MR_Word transform_hlds__unused_args__Modes_10,
#line 1666 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_SomeUsed_0_21,
#line 1666 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_12)
#line 1666 "unused_args.m"
{
#line 1688 "unused_args.m"
  while (MR_TRUE)
#line 1688 "unused_args.m"
    {
#line 1688 "unused_args.m"
      /* tailcall optimized into a loop */
#line 1688 "unused_args.m"
      {
#line 1688 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__Args_9)) == (MR_mktag((MR_Integer) 1)));
#line 1688 "unused_args.m"
        MR_Word transform_hlds__unused_args__ArgVar_13;
#line 1688 "unused_args.m"
        MR_Word transform_hlds__unused_args__ArgVars_14;
#line 1688 "unused_args.m"
        MR_Word transform_hlds__unused_args__ArgMode_15;
#line 1688 "unused_args.m"
        MR_Word transform_hlds__unused_args__ArgModes_16;

#line 1672 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1672 "unused_args.m"
          {
#line 1672 "unused_args.m"
            transform_hlds__unused_args__ArgVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Args_9, (MR_Integer) 0)));
#line 1672 "unused_args.m"
            transform_hlds__unused_args__ArgVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Args_9, (MR_Integer) 1)));
#line 1673 "unused_args.m"
            transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__Modes_10)) == (MR_mktag((MR_Integer) 1)));
#line 1673 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1673 "unused_args.m"
              {
#line 1673 "unused_args.m"
                transform_hlds__unused_args__ArgMode_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Modes_10, (MR_Integer) 0)));
#line 1673 "unused_args.m"
                transform_hlds__unused_args__ArgModes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Modes_10, (MR_Integer) 1)));
#line 1673 "unused_args.m"
              }
#line 1672 "unused_args.m"
          }
#line 1688 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1683 "unused_args.m"
          {
#line 1676 "unused_args.m"
            MR_Word transform_hlds__unused_args__TypeInfo_31_31;
#line 1676 "unused_args.m"
            MR_Word transform_hlds__unused_args__Inst1_17;
#line 1676 "unused_args.m"
            MR_Word transform_hlds__unused_args__Inst2_18;
#line 1676 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__ArgMode_15, (MR_Integer) 0)));
#line 1676 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_23_23;
#line 1676 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__ArgMode_15, (MR_Integer) 1)));

#line 1676 "unused_args.m"
            transform_hlds__unused_args__Inst1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_22_22, (MR_Integer) 0)));
#line 1676 "unused_args.m"
            transform_hlds__unused_args__Inst2_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_22_22, (MR_Integer) 1)));
#line 1677 "unused_args.m"
            {
#line 1677 "unused_args.m"
              transform_hlds__unused_args__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1677 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_23_23, 0) = ((MR_Box) (transform_hlds__unused_args__Inst1_17));
#line 1677 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_23_23, 1) = ((MR_Box) (transform_hlds__unused_args__Inst2_18));
#line 1677 "unused_args.m"
            }
#line 1677 "unused_args.m"
            {
#line 1677 "unused_args.m"
              transform_hlds__unused_args__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(transform_hlds__unused_args__ModuleInfo_7, transform_hlds__unused_args__V_23_23);
            }
#line 1676 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1676 "unused_args.m"
              {
#line 9640 "transform_hlds.unused_args.c"
                transform_hlds__unused_args__TypeInfo_31_31 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 1678 "unused_args.m"
                {
#line 1678 "unused_args.m"
                  transform_hlds__unused_args__succeeded = mercury__list__member_2_p_0(transform_hlds__unused_args__TypeInfo_31_31, ((MR_Box) (transform_hlds__unused_args__ArgVar_13)), transform_hlds__unused_args__UnusedVars_8);
                }
#line 1676 "unused_args.m"
              }
#line 1683 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1681 "unused_args.m"
              {
#line 1680 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_20_20;

#line 1680 "unused_args.m"
                {
#line 1680 "unused_args.m"
                  transform_hlds__unused_args__succeeded = transform_hlds__unused_args__check_deconstruct_args_6_p_0(transform_hlds__unused_args__ModuleInfo_7, transform_hlds__unused_args__UnusedVars_8, transform_hlds__unused_args__ArgVars_14, transform_hlds__unused_args__ArgModes_16, transform_hlds__unused_args__STATE_VARIABLE_SomeUsed_0_21, &transform_hlds__unused_args__V_20_20);
                }
#line 1681 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 1681 "unused_args.m"
                  {
#line 1682 "unused_args.m"
                    *transform_hlds__unused_args__Changed_12 = (MR_Integer) 1;
#line 1682 "unused_args.m"
                    transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1681 "unused_args.m"
                  }
#line 1681 "unused_args.m"
              }
#line 1683 "unused_args.m"
            else
#line 1684 "unused_args.m"
              {
#line 1685 "unused_args.m"
                /* direct tailcall eliminated */
#line 1685 "unused_args.m"
                {
#line 1685 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Args__tmp_copy_9 = transform_hlds__unused_args__ArgVars_14;
#line 1685 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Modes__tmp_copy_10 = transform_hlds__unused_args__ArgModes_16;

#line 1685 "unused_args.m"
                  transform_hlds__unused_args__STATE_VARIABLE_SomeUsed_0_21 = (MR_Integer) 1;
#line 1685 "unused_args.m"
                  transform_hlds__unused_args__Modes_10 = transform_hlds__unused_args__Modes__tmp_copy_10;
#line 1685 "unused_args.m"
                  transform_hlds__unused_args__Args_9 = transform_hlds__unused_args__Args__tmp_copy_9;
#line 1685 "unused_args.m"
                }
#line 1685 "unused_args.m"
                continue;
#line 1684 "unused_args.m"
              }
#line 1683 "unused_args.m"
          }
#line 1688 "unused_args.m"
        else
#line 1694 "unused_args.m"
          {
#line 1689 "unused_args.m"
            transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__Args_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1689 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1690 "unused_args.m"
              transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__Modes_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1694 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1692 "unused_args.m"
              {
#line 1692 "unused_args.m"
                transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__STATE_VARIABLE_SomeUsed_0_21 == (MR_Integer) 1);
#line 1692 "unused_args.m"
                if (transform_hlds__unused_args__succeeded)
#line 1692 "unused_args.m"
                  {
#line 1693 "unused_args.m"
                    *transform_hlds__unused_args__Changed_12 = (MR_Integer) 0;
#line 1693 "unused_args.m"
                    transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1692 "unused_args.m"
                  }
#line 1692 "unused_args.m"
              }
#line 1694 "unused_args.m"
            else
#line 1695 "unused_args.m"
              {
#line 1695 "unused_args.m"
                {
#line 1695 "unused_args.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.check_deconstruct_args\'/6", (MR_String) "mismatched lists");
                }
#line 1695 "unused_args.m"
                transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1695 "unused_args.m"
              }
#line 1694 "unused_args.m"
          }
#line 1688 "unused_args.m"
        return transform_hlds__unused_args__succeeded;
#line 1688 "unused_args.m"
      }
#line 1688 "unused_args.m"
      break;
#line 1688 "unused_args.m"
    }
#line 1666 "unused_args.m"
}

#line 1623 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__need_unify_4_p_0(
#line 1623 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 1623 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedVars_6,
#line 1623 "unused_args.m"
  MR_Word transform_hlds__unused_args__Unify_7,
#line 1623 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_8)
#line 1623 "unused_args.m"
{
#line 1628 "unused_args.m"
  {
#line 1628 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1628 "unused_args.m"
#line 1628 "unused_args.m"
    switch (MR_tag((MR_Word) transform_hlds__unused_args__Unify_7)) {
#line 1628 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1628 "unused_args.m"
      case (MR_Integer) 0:
#line 1639 "unused_args.m"
        {
#line 1639 "unused_args.m"
          MR_Word transform_hlds__unused_args__LVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_7, (MR_Integer) 0)));
#line 1639 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_7, (MR_Integer) 1)));
#line 1639 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_7, (MR_Integer) 2)));
#line 1639 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_7, (MR_Integer) 3)));
#line 1639 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_7, (MR_Integer) 4)));
#line 1639 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_7, (MR_Integer) 5)));
#line 1639 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_7, (MR_Integer) 6)));

#line 1640 "unused_args.m"
          {
#line 1640 "unused_args.m"
            transform_hlds__unused_args__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], ((MR_Box) (transform_hlds__unused_args__LVar_13)), transform_hlds__unused_args__UnusedVars_6);
          }
#line 1640 "unused_args.m"
          transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1639 "unused_args.m"
          if (transform_hlds__unused_args__succeeded)
#line 1639 "unused_args.m"
            {
#line 1641 "unused_args.m"
              *transform_hlds__unused_args__Changed_8 = (MR_Integer) 0;
#line 1641 "unused_args.m"
              transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1639 "unused_args.m"
            }
#line 1639 "unused_args.m"
        }
#line 1628 "unused_args.m"
        break;
#line 1628 "unused_args.m"
      case (MR_Integer) 1:
#line 1643 "unused_args.m"
        {
#line 1643 "unused_args.m"
          MR_Word transform_hlds__unused_args__ArgVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_7, (MR_Integer) 2)));
#line 1643 "unused_args.m"
          MR_Word transform_hlds__unused_args__ArgModes_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_7, (MR_Integer) 3)));
#line 1643 "unused_args.m"
          MR_Word transform_hlds__unused_args__CanFail_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_7, (MR_Integer) 4)));
#line 1643 "unused_args.m"
          MR_Word transform_hlds__unused_args__LVar_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_7, (MR_Integer) 0)));
#line 1643 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_7, (MR_Integer) 1)));
#line 1643 "unused_args.m"
          MR_Word transform_hlds__unused_args___CanCGC_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_7, (MR_Integer) 5)));

#line 1644 "unused_args.m"
          {
#line 1644 "unused_args.m"
            transform_hlds__unused_args__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], ((MR_Box) (transform_hlds__unused_args__LVar_32)), transform_hlds__unused_args__UnusedVars_6);
          }
#line 1644 "unused_args.m"
          transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1643 "unused_args.m"
          if (transform_hlds__unused_args__succeeded)
#line 1651 "unused_args.m"
#line 1651 "unused_args.m"
            switch (transform_hlds__unused_args__CanFail_23) {
#line 1651 "unused_args.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1651 "unused_args.m"
              case (MR_Integer) 0:
#line 1653 "unused_args.m"
                {
#line 1653 "unused_args.m"
                  *transform_hlds__unused_args__Changed_8 = (MR_Integer) 0;
#line 1653 "unused_args.m"
                  transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1653 "unused_args.m"
                }
#line 1651 "unused_args.m"
                break;
#line 1651 "unused_args.m"
              case (MR_Integer) 1:
#line 1648 "unused_args.m"
                {
#line 1649 "unused_args.m"
                  {
#line 1649 "unused_args.m"
                    return transform_hlds__unused_args__succeeded = transform_hlds__unused_args__check_deconstruct_args_6_p_0(transform_hlds__unused_args__ModuleInfo_5, transform_hlds__unused_args__UnusedVars_6, transform_hlds__unused_args__ArgVars_21, transform_hlds__unused_args__ArgModes_22, (MR_Integer) 0, transform_hlds__unused_args__Changed_8);
                  }
#line 1648 "unused_args.m"
                }
#line 1651 "unused_args.m"
                break;
#line 1651 "unused_args.m"
            }
#line 1643 "unused_args.m"
        }
#line 1628 "unused_args.m"
        break;
#line 1628 "unused_args.m"
      case (MR_Integer) 2:
#line 1634 "unused_args.m"
        {
#line 1634 "unused_args.m"
          MR_Word transform_hlds__unused_args__Target_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Unify_7, (MR_Integer) 0)));
#line 1634 "unused_args.m"
          MR_Word transform_hlds__unused_args___Source_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Unify_7, (MR_Integer) 1)));

#line 1635 "unused_args.m"
          {
#line 1635 "unused_args.m"
            transform_hlds__unused_args__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], ((MR_Box) (transform_hlds__unused_args__Target_11)), transform_hlds__unused_args__UnusedVars_6);
          }
#line 1635 "unused_args.m"
          transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 1634 "unused_args.m"
          if (transform_hlds__unused_args__succeeded)
#line 1634 "unused_args.m"
            {
#line 1636 "unused_args.m"
              *transform_hlds__unused_args__Changed_8 = (MR_Integer) 0;
#line 1636 "unused_args.m"
              transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1634 "unused_args.m"
            }
#line 1634 "unused_args.m"
        }
#line 1628 "unused_args.m"
        break;
#line 1628 "unused_args.m"
      case (MR_Integer) 3:
#line 1628 "unused_args.m"
#line 1628 "unused_args.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Unify_7, (MR_Integer) 0)))) {
#line 1628 "unused_args.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1628 "unused_args.m"
          case (MR_Integer) 0:
#line 1630 "unused_args.m"
            {
#line 1630 "unused_args.m"
              *transform_hlds__unused_args__Changed_8 = (MR_Integer) 0;
#line 1630 "unused_args.m"
              transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1630 "unused_args.m"
            }
#line 1628 "unused_args.m"
            break;
#line 1628 "unused_args.m"
          case (MR_Integer) 1:
#line 1657 "unused_args.m"
            {
#line 1658 "unused_args.m"
              {
#line 1658 "unused_args.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.need_unify\'/4", (MR_String) "complicated unify");
              }
#line 1657 "unused_args.m"
              transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1657 "unused_args.m"
            }
#line 1628 "unused_args.m"
            break;
#line 1628 "unused_args.m"
        }
#line 1628 "unused_args.m"
        break;
#line 1628 "unused_args.m"
    }
#line 1628 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 1628 "unused_args.m"
  }
#line 1623 "unused_args.m"
}

#line 1605 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_cases_6_p_0(
#line 1605 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1605 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2,
#line 1605 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_3,
#line 1605 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_4,
#line 1605 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5,
#line 1605 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_6)
#line 1605 "unused_args.m"
{
#line 1608 "unused_args.m"
  {
#line 1608 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1608 "unused_args.m"
    if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1608 "unused_args.m"
      {
#line 1608 "unused_args.m"
        *transform_hlds__unused_args__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1608 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Changed_6 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5;
#line 1608 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Info_4 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_3;
#line 1608 "unused_args.m"
      }
#line 1608 "unused_args.m"
    else
#line 1609 "unused_args.m"
      {
#line 1609 "unused_args.m"
        MR_Word transform_hlds__unused_args__Case0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 1609 "unused_args.m"
        MR_Word transform_hlds__unused_args__Cases0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 1609 "unused_args.m"
        MR_Word transform_hlds__unused_args__Case_15;
#line 1609 "unused_args.m"
        MR_Word transform_hlds__unused_args__Cases_16;
#line 1609 "unused_args.m"
        MR_Word transform_hlds__unused_args__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Case0_13, (MR_Integer) 0)));
#line 1609 "unused_args.m"
        MR_Word transform_hlds__unused_args__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Case0_13, (MR_Integer) 1)));
#line 1609 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Case0_13, (MR_Integer) 2)));
#line 1609 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal_22;
#line 1609 "unused_args.m"
        MR_Word transform_hlds__unused_args__LocalChanged_23;
#line 1609 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_28_28;
#line 1609 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_29_29;
#line 1609 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal1_38;
#line 1609 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalExpr1_39;
#line 1609 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalInfo1_40;
#line 1609 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalInfo_42;

#line 1421 "unused_args.m"
        {
#line 1421 "unused_args.m"
          transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(transform_hlds__unused_args__Goal0_21, &transform_hlds__unused_args__Goal1_38, transform_hlds__unused_args__STATE_VARIABLE_Info_0_3, &transform_hlds__unused_args__STATE_VARIABLE_Info_28_28, &transform_hlds__unused_args__LocalChanged_23);
        }
#line 1422 "unused_args.m"
        transform_hlds__unused_args__GoalExpr1_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_38, (MR_Integer) 0)));
#line 1422 "unused_args.m"
        transform_hlds__unused_args__GoalInfo1_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_38, (MR_Integer) 1)));
#line 10034 "transform_hlds.unused_args.c"
#line 10035 "transform_hlds.unused_args.c"
        switch (transform_hlds__unused_args__LocalChanged_23) {
#line 10037 "transform_hlds.unused_args.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 10039 "transform_hlds.unused_args.c"
          case (MR_Integer) 0:
#line 10041 "transform_hlds.unused_args.c"
            {
#line 1429 "unused_args.m"
              transform_hlds__unused_args__GoalInfo_42 = transform_hlds__unused_args__GoalInfo1_40;
#line 1617 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_29_29 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5;
#line 10047 "transform_hlds.unused_args.c"
            }
#line 10049 "transform_hlds.unused_args.c"
            break;
#line 10051 "transform_hlds.unused_args.c"
          case (MR_Integer) 1:
#line 10053 "transform_hlds.unused_args.c"
            {
#line 10055 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__UnusedVars_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_28_28, (MR_Integer) 2)));
#line 10057 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__InstMap0_52;
#line 10059 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__InstMap_53;
#line 1425 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_28_28, (MR_Integer) 0)));
#line 1425 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_28_28, (MR_Integer) 1)));
#line 1425 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_28_28, (MR_Integer) 3)));
#line 1425 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_28_28, (MR_Integer) 4)));

#line 1705 "unused_args.m"
              {
#line 1705 "unused_args.m"
                transform_hlds__unused_args__InstMap0_52 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__unused_args__GoalInfo1_40);
              }
#line 1706 "unused_args.m"
              {
#line 1706 "unused_args.m"
                hlds__instmap__instmap_delta_delete_vars_3_p_0(transform_hlds__unused_args__UnusedVars_41, transform_hlds__unused_args__InstMap0_52, &transform_hlds__unused_args__InstMap_53);
              }
#line 1707 "unused_args.m"
              {
#line 1707 "unused_args.m"
                hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__unused_args__InstMap_53, transform_hlds__unused_args__GoalInfo1_40, &transform_hlds__unused_args__GoalInfo_42);
              }
#line 1615 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_29_29 = (MR_Integer) 1;
#line 10087 "transform_hlds.unused_args.c"
            }
#line 10089 "transform_hlds.unused_args.c"
            break;
#line 10091 "transform_hlds.unused_args.c"
        }
#line 1431 "unused_args.m"
        {
#line 1431 "unused_args.m"
          transform_hlds__unused_args__Goal_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1431 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_22, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr1_39));
#line 1431 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_22, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo_42));
#line 1431 "unused_args.m"
        }
#line 1612 "unused_args.m"
        {
#line 1612 "unused_args.m"
          transform_hlds__unused_args__Case_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1612 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Case_15, 0) = ((MR_Box) (transform_hlds__unused_args__MainConsId_19));
#line 1612 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Case_15, 1) = ((MR_Box) (transform_hlds__unused_args__OtherConsIds_20));
#line 1612 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Case_15, 2) = ((MR_Box) (transform_hlds__unused_args__Goal_22));
#line 1612 "unused_args.m"
        }
#line 1619 "unused_args.m"
        {
#line 1619 "unused_args.m"
          transform_hlds__unused_args__unused_args_fixup_cases_6_p_0(transform_hlds__unused_args__Cases0_14, &transform_hlds__unused_args__Cases_16, transform_hlds__unused_args__STATE_VARIABLE_Info_28_28, transform_hlds__unused_args__STATE_VARIABLE_Info_4, transform_hlds__unused_args__STATE_VARIABLE_Changed_29_29, transform_hlds__unused_args__STATE_VARIABLE_Changed_6);
        }
#line 1609 "unused_args.m"
        {
#line 1609 "unused_args.m"
          MR_Word base;
#line 1609 "unused_args.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1609 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__2_2 = base;
#line 1609 "unused_args.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__Case_15));
#line 1609 "unused_args.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__Cases_16));
#line 1609 "unused_args.m"
        }
#line 1609 "unused_args.m"
      }
#line 1608 "unused_args.m"
  }
#line 1605 "unused_args.m"
}

#line 1590 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_disjuncts_6_p_0(
#line 1590 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1590 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2,
#line 1590 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_3,
#line 1590 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_4,
#line 1590 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5,
#line 1590 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_6)
#line 1590 "unused_args.m"
{
#line 1593 "unused_args.m"
  {
#line 1593 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1593 "unused_args.m"
    if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1593 "unused_args.m"
      {
#line 1593 "unused_args.m"
        *transform_hlds__unused_args__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1593 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Changed_6 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5;
#line 1593 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Info_4 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_3;
#line 1593 "unused_args.m"
      }
#line 1593 "unused_args.m"
    else
#line 1595 "unused_args.m"
      {
#line 1595 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 1595 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 1595 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal_15;
#line 1595 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goals_16;
#line 1595 "unused_args.m"
        MR_Word transform_hlds__unused_args__LocalChanged_19;
#line 1595 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_24_24;
#line 1595 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_25_25;
#line 1595 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal1_34;
#line 1595 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalExpr1_35;
#line 1595 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalInfo1_36;
#line 1595 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalInfo_38;

#line 1421 "unused_args.m"
        {
#line 1421 "unused_args.m"
          transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(transform_hlds__unused_args__Goal0_13, &transform_hlds__unused_args__Goal1_34, transform_hlds__unused_args__STATE_VARIABLE_Info_0_3, &transform_hlds__unused_args__STATE_VARIABLE_Info_24_24, &transform_hlds__unused_args__LocalChanged_19);
        }
#line 1422 "unused_args.m"
        transform_hlds__unused_args__GoalExpr1_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_34, (MR_Integer) 0)));
#line 1422 "unused_args.m"
        transform_hlds__unused_args__GoalInfo1_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_34, (MR_Integer) 1)));
#line 10211 "transform_hlds.unused_args.c"
#line 10212 "transform_hlds.unused_args.c"
        switch (transform_hlds__unused_args__LocalChanged_19) {
#line 10214 "transform_hlds.unused_args.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 10216 "transform_hlds.unused_args.c"
          case (MR_Integer) 0:
#line 10218 "transform_hlds.unused_args.c"
            {
#line 1429 "unused_args.m"
              transform_hlds__unused_args__GoalInfo_38 = transform_hlds__unused_args__GoalInfo1_36;
#line 1601 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_25_25 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5;
#line 10224 "transform_hlds.unused_args.c"
            }
#line 10226 "transform_hlds.unused_args.c"
            break;
#line 10228 "transform_hlds.unused_args.c"
          case (MR_Integer) 1:
#line 10230 "transform_hlds.unused_args.c"
            {
#line 10232 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__UnusedVars_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_24_24, (MR_Integer) 2)));
#line 10234 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__InstMap0_48;
#line 10236 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__InstMap_49;
#line 1425 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_24_24, (MR_Integer) 0)));
#line 1425 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_24_24, (MR_Integer) 1)));
#line 1425 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_24_24, (MR_Integer) 3)));
#line 1425 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_24_24, (MR_Integer) 4)));

#line 1705 "unused_args.m"
              {
#line 1705 "unused_args.m"
                transform_hlds__unused_args__InstMap0_48 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__unused_args__GoalInfo1_36);
              }
#line 1706 "unused_args.m"
              {
#line 1706 "unused_args.m"
                hlds__instmap__instmap_delta_delete_vars_3_p_0(transform_hlds__unused_args__UnusedVars_37, transform_hlds__unused_args__InstMap0_48, &transform_hlds__unused_args__InstMap_49);
              }
#line 1707 "unused_args.m"
              {
#line 1707 "unused_args.m"
                hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__unused_args__InstMap_49, transform_hlds__unused_args__GoalInfo1_36, &transform_hlds__unused_args__GoalInfo_38);
              }
#line 1599 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_25_25 = (MR_Integer) 1;
#line 10264 "transform_hlds.unused_args.c"
            }
#line 10266 "transform_hlds.unused_args.c"
            break;
#line 10268 "transform_hlds.unused_args.c"
        }
#line 1431 "unused_args.m"
        {
#line 1431 "unused_args.m"
          transform_hlds__unused_args__Goal_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1431 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_15, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr1_35));
#line 1431 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_15, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo_38));
#line 1431 "unused_args.m"
        }
#line 1603 "unused_args.m"
        {
#line 1603 "unused_args.m"
          transform_hlds__unused_args__unused_args_fixup_disjuncts_6_p_0(transform_hlds__unused_args__Goals0_14, &transform_hlds__unused_args__Goals_16, transform_hlds__unused_args__STATE_VARIABLE_Info_24_24, transform_hlds__unused_args__STATE_VARIABLE_Info_4, transform_hlds__unused_args__STATE_VARIABLE_Changed_25_25, transform_hlds__unused_args__STATE_VARIABLE_Changed_6);
        }
#line 1594 "unused_args.m"
        {
#line 1594 "unused_args.m"
          MR_Word base;
#line 1594 "unused_args.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1594 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__2_2 = base;
#line 1594 "unused_args.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__Goal_15));
#line 1594 "unused_args.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__Goals_16));
#line 1594 "unused_args.m"
        }
#line 1595 "unused_args.m"
      }
#line 1593 "unused_args.m"
  }
#line 1590 "unused_args.m"
}

#line 1567 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_conjuncts_6_p_0(
#line 1567 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 1567 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2,
#line 1567 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_3,
#line 1567 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_4,
#line 1567 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5,
#line 1567 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_6)
#line 1567 "unused_args.m"
{
#line 1570 "unused_args.m"
  {
#line 1570 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1570 "unused_args.m"
    if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1570 "unused_args.m"
      {
#line 1570 "unused_args.m"
        *transform_hlds__unused_args__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1570 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Changed_6 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5;
#line 1570 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Info_4 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_3;
#line 1570 "unused_args.m"
      }
#line 1570 "unused_args.m"
    else
#line 1571 "unused_args.m"
      {
#line 1571 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 1571 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 1571 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal_18;
#line 1571 "unused_args.m"
        MR_Word transform_hlds__unused_args__LocalChanged_19;
#line 1571 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goals1_21;
#line 1571 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_26_26;
#line 1571 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_27_27;
#line 1571 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal1_40;
#line 1571 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalExpr1_41;
#line 1571 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalInfo1_42;
#line 1571 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalInfo_44;
#line 1580 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_28_28;
#line 1580 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_32_32;
#line 1580 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_20_20;

#line 1421 "unused_args.m"
        {
#line 1421 "unused_args.m"
          transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(transform_hlds__unused_args__Goal0_13, &transform_hlds__unused_args__Goal1_40, transform_hlds__unused_args__STATE_VARIABLE_Info_0_3, &transform_hlds__unused_args__STATE_VARIABLE_Info_26_26, &transform_hlds__unused_args__LocalChanged_19);
        }
#line 1422 "unused_args.m"
        transform_hlds__unused_args__GoalExpr1_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_40, (MR_Integer) 0)));
#line 1422 "unused_args.m"
        transform_hlds__unused_args__GoalInfo1_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_40, (MR_Integer) 1)));
#line 10382 "transform_hlds.unused_args.c"
#line 10383 "transform_hlds.unused_args.c"
        switch (transform_hlds__unused_args__LocalChanged_19) {
#line 10385 "transform_hlds.unused_args.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 10387 "transform_hlds.unused_args.c"
          case (MR_Integer) 0:
#line 10389 "transform_hlds.unused_args.c"
            {
#line 1429 "unused_args.m"
              transform_hlds__unused_args__GoalInfo_44 = transform_hlds__unused_args__GoalInfo1_42;
#line 1577 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_27_27 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_5;
#line 10395 "transform_hlds.unused_args.c"
            }
#line 10397 "transform_hlds.unused_args.c"
            break;
#line 10399 "transform_hlds.unused_args.c"
          case (MR_Integer) 1:
#line 10401 "transform_hlds.unused_args.c"
            {
#line 10403 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__UnusedVars_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_26_26, (MR_Integer) 2)));
#line 10405 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__InstMap0_54;
#line 10407 "transform_hlds.unused_args.c"
              MR_Word transform_hlds__unused_args__InstMap_55;
#line 1425 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_26_26, (MR_Integer) 0)));
#line 1425 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_26_26, (MR_Integer) 1)));
#line 1425 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_26_26, (MR_Integer) 3)));
#line 1425 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_26_26, (MR_Integer) 4)));

#line 1705 "unused_args.m"
              {
#line 1705 "unused_args.m"
                transform_hlds__unused_args__InstMap0_54 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__unused_args__GoalInfo1_42);
              }
#line 1706 "unused_args.m"
              {
#line 1706 "unused_args.m"
                hlds__instmap__instmap_delta_delete_vars_3_p_0(transform_hlds__unused_args__UnusedVars_43, transform_hlds__unused_args__InstMap0_54, &transform_hlds__unused_args__InstMap_55);
              }
#line 1707 "unused_args.m"
              {
#line 1707 "unused_args.m"
                hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__unused_args__InstMap_55, transform_hlds__unused_args__GoalInfo1_42, &transform_hlds__unused_args__GoalInfo_44);
              }
#line 1575 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_27_27 = (MR_Integer) 1;
#line 10435 "transform_hlds.unused_args.c"
            }
#line 10437 "transform_hlds.unused_args.c"
            break;
#line 10439 "transform_hlds.unused_args.c"
        }
#line 1431 "unused_args.m"
        {
#line 1431 "unused_args.m"
          transform_hlds__unused_args__Goal_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1431 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_18, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr1_41));
#line 1431 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_18, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo_44));
#line 1431 "unused_args.m"
        }
#line 1585 "unused_args.m"
        {
#line 1585 "unused_args.m"
          transform_hlds__unused_args__unused_args_fixup_conjuncts_6_p_0(transform_hlds__unused_args__Goals0_14, &transform_hlds__unused_args__Goals1_21, transform_hlds__unused_args__STATE_VARIABLE_Info_26_26, transform_hlds__unused_args__STATE_VARIABLE_Info_4, transform_hlds__unused_args__STATE_VARIABLE_Changed_27_27, transform_hlds__unused_args__STATE_VARIABLE_Changed_6);
        }
#line 1580 "unused_args.m"
        transform_hlds__unused_args__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_18, (MR_Integer) 0)));
#line 1580 "unused_args.m"
        transform_hlds__unused_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_18, (MR_Integer) 1)));
#line 1580 "unused_args.m"
        {
#line 1580 "unused_args.m"
          transform_hlds__unused_args__V_32_32 = hlds__make_goal__true_goal_expr_0_f_0();
        }
#line 1580 "unused_args.m"
        {
#line 1580 "unused_args.m"
          transform_hlds__unused_args__succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0(transform_hlds__unused_args__V_28_28, transform_hlds__unused_args__V_32_32);
        }
#line 1582 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1581 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__2_2 = transform_hlds__unused_args__Goals1_21;
#line 1582 "unused_args.m"
        else
#line 1583 "unused_args.m"
          {
#line 1583 "unused_args.m"
            MR_Word base;
#line 1583 "unused_args.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1583 "unused_args.m"
            *transform_hlds__unused_args__HeadVar__2_2 = base;
#line 1583 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__Goal_18));
#line 1583 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__Goals1_21));
#line 1583 "unused_args.m"
          }
#line 1571 "unused_args.m"
      }
#line 1570 "unused_args.m"
  }
#line 1567 "unused_args.m"
}

#line 1535 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__rename_apart_unused_foreign_arg_8_p_0(
#line 1535 "unused_args.m"
  MR_Word transform_hlds__unused_args__Arg0_9,
#line 1535 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Arg_10,
#line 1535 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Subst_0_26,
#line 1535 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Subst_27,
#line 1535 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_28,
#line 1535 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_29,
#line 1535 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_30,
#line 1535 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_31)
#line 1535 "unused_args.m"
{
#line 1539 "unused_args.m"
  {
#line 1539 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1539 "unused_args.m"
    MR_Word transform_hlds__unused_args__OldVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Arg0_9, (MR_Integer) 0)));
#line 1539 "unused_args.m"
    MR_Word transform_hlds__unused_args__MaybeName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Arg0_9, (MR_Integer) 1)));
#line 1539 "unused_args.m"
    MR_Word transform_hlds__unused_args__OrigType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Arg0_9, (MR_Integer) 2)));
#line 1539 "unused_args.m"
    MR_Word transform_hlds__unused_args__BoxPolicy_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Arg0_9, (MR_Integer) 3)));

#line 1544 "unused_args.m"
    if ((transform_hlds__unused_args__MaybeName_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1545 "unused_args.m"
      {
#line 1545 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_57_57;
#line 1545 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarSet0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
#line 1545 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarTypes0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
#line 1545 "unused_args.m"
        MR_Word transform_hlds__unused_args__NewVar_22;
#line 1545 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarSet_23;
#line 1545 "unused_args.m"
        MR_Word transform_hlds__unused_args__Type_24;
#line 1545 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarTypes_25;
#line 1545 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_44_44;
#line 1545 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_45_45;
#line 1545 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_46_46;
#line 1546 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
#line 1546 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
#line 1546 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
#line 1550 "unused_args.m"
        MR_String transform_hlds__unused_args__Name_21;
#line 1555 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_47_47;
#line 1555 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_48_48;

#line 1548 "unused_args.m"
        {
#line 1548 "unused_args.m"
          transform_hlds__unused_args__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__unused_args__VarSet0_19, transform_hlds__unused_args__OldVar_14, &transform_hlds__unused_args__Name_21);
        }
#line 1550 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1549 "unused_args.m"
          {
#line 1549 "unused_args.m"
            {
#line 1549 "unused_args.m"
              mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__unused_args__Name_21, &transform_hlds__unused_args__NewVar_22, transform_hlds__unused_args__VarSet0_19, &transform_hlds__unused_args__VarSet_23);
            }
#line 1549 "unused_args.m"
          }
#line 1550 "unused_args.m"
        else
#line 1551 "unused_args.m"
          {
#line 1551 "unused_args.m"
            {
#line 1551 "unused_args.m"
              mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &transform_hlds__unused_args__NewVar_22, transform_hlds__unused_args__VarSet0_19, &transform_hlds__unused_args__VarSet_23);
            }
#line 1551 "unused_args.m"
          }
#line 1553 "unused_args.m"
        {
#line 1553 "unused_args.m"
          hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__unused_args__VarTypes0_20, transform_hlds__unused_args__OldVar_14, &transform_hlds__unused_args__Type_24);
        }
#line 1554 "unused_args.m"
        {
#line 1554 "unused_args.m"
          hlds__vartypes__add_var_type_4_p_0(transform_hlds__unused_args__NewVar_22, transform_hlds__unused_args__Type_24, transform_hlds__unused_args__VarTypes0_20, &transform_hlds__unused_args__VarTypes_25);
        }
#line 1555 "unused_args.m"
        transform_hlds__unused_args__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
#line 1555 "unused_args.m"
        transform_hlds__unused_args__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
#line 1555 "unused_args.m"
        transform_hlds__unused_args__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
#line 1555 "unused_args.m"
        transform_hlds__unused_args__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
#line 1555 "unused_args.m"
        transform_hlds__unused_args__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
#line 1556 "unused_args.m"
        {
#line 1556 "unused_args.m"
          MR_Word base;
#line 1556 "unused_args.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1556 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_Info_29 = base;
#line 1556 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__V_44_44));
#line 1556 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__V_45_45));
#line 1556 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__unused_args__V_46_46));
#line 1556 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__unused_args__VarSet_23));
#line 1556 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__unused_args__VarTypes_25));
#line 1556 "unused_args.m"
        }
#line 10635 "transform_hlds.unused_args.c"
        transform_hlds__unused_args__TypeInfo_57_57 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 1560 "unused_args.m"
        {
#line 1560 "unused_args.m"
          mercury__map__set_4_p_0(transform_hlds__unused_args__TypeInfo_57_57, transform_hlds__unused_args__TypeInfo_57_57, ((MR_Box) (transform_hlds__unused_args__OldVar_14)), ((MR_Box) (transform_hlds__unused_args__NewVar_22)), transform_hlds__unused_args__STATE_VARIABLE_Subst_0_26, transform_hlds__unused_args__STATE_VARIABLE_Subst_27);
        }
#line 1561 "unused_args.m"
        {
#line 1561 "unused_args.m"
          MR_Word base;
#line 1561 "unused_args.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1561 "unused_args.m"
          *transform_hlds__unused_args__Arg_10 = base;
#line 1561 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__NewVar_22));
#line 1561 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__MaybeName_15));
#line 1561 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__unused_args__OrigType_16));
#line 1561 "unused_args.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__unused_args__BoxPolicy_17));
#line 1561 "unused_args.m"
        }
#line 1562 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Changed_31 = (MR_Integer) 1;
#line 1545 "unused_args.m"
      }
#line 1544 "unused_args.m"
    else
#line 1542 "unused_args.m"
      {
#line 1543 "unused_args.m"
        *transform_hlds__unused_args__Arg_10 = transform_hlds__unused_args__Arg0_9;
#line 1542 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Subst_27 = transform_hlds__unused_args__STATE_VARIABLE_Subst_0_26;
#line 1542 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Info_29 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_28;
#line 1542 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_Changed_31 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_30;
#line 1542 "unused_args.m"
      }
#line 1539 "unused_args.m"
  }
#line 1535 "unused_args.m"
}

#line 1523 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0_2(
#line 1523 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1523 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1523 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2,
#line 1523 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_3,
#line 1523 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_4,
#line 1523 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_5,
#line 1523 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_6,
#line 1523 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_7,
#line 1523 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_8)
#line 1523 "unused_args.m"
{
#line 1523 "unused_args.m"
  {
#line 1523 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1523 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv10_Arg_10;
#line 1523 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv9_STATE_VARIABLE_Subst_27;
#line 1523 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv8_STATE_VARIABLE_Info_29;
#line 1523 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv7_STATE_VARIABLE_Changed_31;

#line 1523 "unused_args.m"
    {
#line 1523 "unused_args.m"
      transform_hlds__unused_args__rename_apart_unused_foreign_arg_8_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), &transform_hlds__unused_args__conv10_Arg_10, ((MR_Word) transform_hlds__unused_args__wrapper_arg_3), &transform_hlds__unused_args__conv9_STATE_VARIABLE_Subst_27, ((MR_Word) transform_hlds__unused_args__wrapper_arg_5), &transform_hlds__unused_args__conv8_STATE_VARIABLE_Info_29, ((MR_Word) transform_hlds__unused_args__wrapper_arg_7), &transform_hlds__unused_args__conv7_STATE_VARIABLE_Changed_31);
    }
#line 1523 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv10_Arg_10));
#line 1523 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_4 = ((MR_Box) (transform_hlds__unused_args__conv9_STATE_VARIABLE_Subst_27));
#line 1523 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_6 = ((MR_Box) (transform_hlds__unused_args__conv8_STATE_VARIABLE_Info_29));
#line 1523 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_8 = ((MR_Box) (transform_hlds__unused_args__conv7_STATE_VARIABLE_Changed_31));
#line 1523 "unused_args.m"
  }
#line 1523 "unused_args.m"
}

#line 1521 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0_1(
#line 1521 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1521 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1521 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2,
#line 1521 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_3,
#line 1521 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_4,
#line 1521 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_5,
#line 1521 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_6,
#line 1521 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_7,
#line 1521 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_8)
#line 1521 "unused_args.m"
{
#line 1521 "unused_args.m"
  {
#line 1521 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1521 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv3_Arg_10;
#line 1521 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv2_STATE_VARIABLE_Subst_27;
#line 1521 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv1_STATE_VARIABLE_Info_29;
#line 1521 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_STATE_VARIABLE_Changed_31;

#line 1521 "unused_args.m"
    {
#line 1521 "unused_args.m"
      transform_hlds__unused_args__rename_apart_unused_foreign_arg_8_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), &transform_hlds__unused_args__conv3_Arg_10, ((MR_Word) transform_hlds__unused_args__wrapper_arg_3), &transform_hlds__unused_args__conv2_STATE_VARIABLE_Subst_27, ((MR_Word) transform_hlds__unused_args__wrapper_arg_5), &transform_hlds__unused_args__conv1_STATE_VARIABLE_Info_29, ((MR_Word) transform_hlds__unused_args__wrapper_arg_7), &transform_hlds__unused_args__conv0_STATE_VARIABLE_Changed_31);
    }
#line 1521 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv3_Arg_10));
#line 1521 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_4 = ((MR_Box) (transform_hlds__unused_args__conv2_STATE_VARIABLE_Subst_27));
#line 1521 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_6 = ((MR_Box) (transform_hlds__unused_args__conv1_STATE_VARIABLE_Info_29));
#line 1521 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_8 = ((MR_Box) (transform_hlds__unused_args__conv0_STATE_VARIABLE_Changed_31));
#line 1521 "unused_args.m"
  }
#line 1521 "unused_args.m"
}

#line 1433 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(
#line 1433 "unused_args.m"
  MR_Word transform_hlds__unused_args__Goal0_6,
#line 1433 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Goal_7,
#line 1433 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_76,
#line 1433 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_77,
#line 1433 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_9)
#line 1433 "unused_args.m"
{
#line 1436 "unused_args.m"
  {
#line 1436 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1436 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal0_6, (MR_Integer) 0)));
#line 1436 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal0_6, (MR_Integer) 1)));

#line 1443 "unused_args.m"
#line 1443 "unused_args.m"
    switch (MR_tag((MR_Word) transform_hlds__unused_args__GoalExpr0_10)) {
#line 1443 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1443 "unused_args.m"
      case (MR_Integer) 0:
#line 1449 "unused_args.m"
        {
#line 1449 "unused_args.m"
          MR_Word transform_hlds__unused_args__NegGoal0_16 = (MR_Word) MR_body(((MR_Word) transform_hlds__unused_args__GoalExpr0_10), (MR_Integer) 0);
#line 1449 "unused_args.m"
          MR_Word transform_hlds__unused_args__NegGoal_17;
#line 1449 "unused_args.m"
          MR_Word transform_hlds__unused_args__GoalExpr_107;

#line 1450 "unused_args.m"
          {
#line 1450 "unused_args.m"
            transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(transform_hlds__unused_args__NegGoal0_16, &transform_hlds__unused_args__NegGoal_17, transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, transform_hlds__unused_args__STATE_VARIABLE_Info_77, transform_hlds__unused_args__Changed_9);
          }
#line 1451 "unused_args.m"
          transform_hlds__unused_args__GoalExpr_107 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__unused_args__NegGoal_17);
#line 1452 "unused_args.m"
          {
#line 1452 "unused_args.m"
            MR_Word base;
#line 1452 "unused_args.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1452 "unused_args.m"
            *transform_hlds__unused_args__Goal_7 = base;
#line 1452 "unused_args.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_107));
#line 1452 "unused_args.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1452 "unused_args.m"
          }
#line 1449 "unused_args.m"
        }
#line 1443 "unused_args.m"
        break;
#line 1443 "unused_args.m"
      case (MR_Integer) 1:
#line 1499 "unused_args.m"
        {
#line 1499 "unused_args.m"
          MR_Word transform_hlds__unused_args__Unify_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 3)));
#line 1499 "unused_args.m"
          MR_Word transform_hlds__unused_args__ModuleInfo_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 0)));
#line 1499 "unused_args.m"
          MR_Word transform_hlds__unused_args__GoalExpr_116;
#line 1499 "unused_args.m"
          MR_Word transform_hlds__unused_args__UnusedVars_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 2)));
#line 1499 "unused_args.m"
          MR_Word transform_hlds__unused_args___Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 0)));
#line 1499 "unused_args.m"
          MR_Word transform_hlds__unused_args___RHS_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1499 "unused_args.m"
          MR_Word transform_hlds__unused_args___Mode_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 2)));
#line 1499 "unused_args.m"
          MR_Word transform_hlds__unused_args___Context_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 4)));
#line 1500 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 1)));
#line 1500 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 3)));
#line 1500 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 4)));
#line 1505 "unused_args.m"
          MR_Word transform_hlds__unused_args__ChangedPrime_56;

#line 1502 "unused_args.m"
          {
#line 1502 "unused_args.m"
            transform_hlds__unused_args__succeeded = transform_hlds__unused_args__need_unify_4_p_0(transform_hlds__unused_args__ModuleInfo_55, transform_hlds__unused_args__UnusedVars_117, transform_hlds__unused_args__Unify_53, &transform_hlds__unused_args__ChangedPrime_56);
          }
#line 1505 "unused_args.m"
          if (transform_hlds__unused_args__succeeded)
#line 1503 "unused_args.m"
            {
#line 1503 "unused_args.m"
              transform_hlds__unused_args__GoalExpr_116 = transform_hlds__unused_args__GoalExpr0_10;
#line 1504 "unused_args.m"
              *transform_hlds__unused_args__Changed_9 = transform_hlds__unused_args__ChangedPrime_56;
#line 1503 "unused_args.m"
            }
#line 1505 "unused_args.m"
          else
#line 1506 "unused_args.m"
            {
#line 1506 "unused_args.m"
              {
#line 1506 "unused_args.m"
                transform_hlds__unused_args__GoalExpr_116 = hlds__make_goal__true_goal_expr_0_f_0();
              }
#line 1507 "unused_args.m"
              *transform_hlds__unused_args__Changed_9 = (MR_Integer) 1;
#line 1506 "unused_args.m"
            }
#line 1509 "unused_args.m"
          {
#line 1509 "unused_args.m"
            MR_Word base;
#line 1509 "unused_args.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1509 "unused_args.m"
            *transform_hlds__unused_args__Goal_7 = base;
#line 1509 "unused_args.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_116));
#line 1509 "unused_args.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1509 "unused_args.m"
          }
#line 1499 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_Info_77 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_76;
#line 1499 "unused_args.m"
        }
#line 1443 "unused_args.m"
        break;
#line 1443 "unused_args.m"
      case (MR_Integer) 2:
#line 1485 "unused_args.m"
        {
#line 1485 "unused_args.m"
          MR_Word transform_hlds__unused_args__PredId_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 0)));
#line 1485 "unused_args.m"
          MR_Integer transform_hlds__unused_args__ProcId_38 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1485 "unused_args.m"
          MR_Word transform_hlds__unused_args__ArgVars0_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 2)));
#line 1485 "unused_args.m"
          MR_Word transform_hlds__unused_args__Builtin_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 3)));
#line 1485 "unused_args.m"
          MR_Word transform_hlds__unused_args__UnifyC_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 4)));
#line 1485 "unused_args.m"
          MR_Word transform_hlds__unused_args__ProcCallInfo_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 1)));
#line 1484 "unused_args.m"
          MR_Word transform_hlds__unused_args___Name_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 5)));
#line 1486 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 0)));
#line 1486 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 2)));
#line 1486 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 3)));
#line 1486 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 4)));
#line 1494 "unused_args.m"
          MR_Word transform_hlds__unused_args__CallInfo_44;
#line 1487 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_86_86;
#line 1487 "unused_args.m"
          MR_Box transform_hlds__unused_args__conv14_CallInfo_44;

#line 1487 "unused_args.m"
          {
#line 1487 "unused_args.m"
            transform_hlds__unused_args__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1487 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_86_86, 0) = ((MR_Box) (transform_hlds__unused_args__PredId_37));
#line 1487 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_86_86, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_38));
#line 1487 "unused_args.m"
          }
#line 1487 "unused_args.m"
          {
#line 1487 "unused_args.m"
            transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0, transform_hlds__unused_args__ProcCallInfo_43, ((MR_Box) (transform_hlds__unused_args__V_86_86)), &transform_hlds__unused_args__conv14_CallInfo_44);
          }
#line 1487 "unused_args.m"
          if (transform_hlds__unused_args__succeeded)
#line 1487 "unused_args.m"
            {
#line 1487 "unused_args.m"
              transform_hlds__unused_args__CallInfo_44 = ((MR_Word) transform_hlds__unused_args__conv14_CallInfo_44);
#line 1487 "unused_args.m"
              transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1487 "unused_args.m"
            }
#line 1494 "unused_args.m"
          if (transform_hlds__unused_args__succeeded)
#line 1488 "unused_args.m"
            {
#line 1488 "unused_args.m"
              MR_Word transform_hlds__unused_args__NewPredId_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__CallInfo_44, (MR_Integer) 0)));
#line 1488 "unused_args.m"
              MR_Integer transform_hlds__unused_args__NewProcId_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__CallInfo_44, (MR_Integer) 1)));
#line 1488 "unused_args.m"
              MR_Word transform_hlds__unused_args__NewName_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__CallInfo_44, (MR_Integer) 2)));
#line 1488 "unused_args.m"
              MR_Word transform_hlds__unused_args__UnusedArgs_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__CallInfo_44, (MR_Integer) 3)));
#line 1488 "unused_args.m"
              MR_Word transform_hlds__unused_args__ArgVars_49;
#line 1488 "unused_args.m"
              MR_Word transform_hlds__unused_args__GoalExpr_113;

#line 1489 "unused_args.m"
              *transform_hlds__unused_args__Changed_9 = (MR_Integer) 1;
#line 1490 "unused_args.m"
              {
#line 1490 "unused_args.m"
                transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_48, transform_hlds__unused_args__ArgVars0_39, &transform_hlds__unused_args__ArgVars_49);
              }
#line 1491 "unused_args.m"
              {
#line 1491 "unused_args.m"
                transform_hlds__unused_args__GoalExpr_113 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1491 "unused_args.m"
                MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_113, 0) = ((MR_Box) (transform_hlds__unused_args__NewPredId_45));
#line 1491 "unused_args.m"
                MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_113, 1) = ((MR_Box) (transform_hlds__unused_args__NewProcId_46));
#line 1491 "unused_args.m"
                MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_113, 2) = ((MR_Box) (transform_hlds__unused_args__ArgVars_49));
#line 1491 "unused_args.m"
                MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_113, 3) = ((MR_Box) (transform_hlds__unused_args__Builtin_40));
#line 1491 "unused_args.m"
                MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_113, 4) = ((MR_Box) (transform_hlds__unused_args__UnifyC_41));
#line 1491 "unused_args.m"
                MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_113, 5) = ((MR_Box) (transform_hlds__unused_args__NewName_47));
#line 1491 "unused_args.m"
              }
#line 1493 "unused_args.m"
              {
#line 1493 "unused_args.m"
                MR_Word base;
#line 1493 "unused_args.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1493 "unused_args.m"
                *transform_hlds__unused_args__Goal_7 = base;
#line 1493 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_113));
#line 1493 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1493 "unused_args.m"
              }
#line 1488 "unused_args.m"
            }
#line 1494 "unused_args.m"
          else
#line 1495 "unused_args.m"
            {
#line 1495 "unused_args.m"
              *transform_hlds__unused_args__Changed_9 = (MR_Integer) 0;
#line 1496 "unused_args.m"
              *transform_hlds__unused_args__Goal_7 = transform_hlds__unused_args__Goal0_6;
#line 1495 "unused_args.m"
            }
#line 1485 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_Info_77 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_76;
#line 1485 "unused_args.m"
        }
#line 1443 "unused_args.m"
        break;
#line 1443 "unused_args.m"
      case (MR_Integer) 3:
#line 1443 "unused_args.m"
#line 1443 "unused_args.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 0)))) {
#line 1443 "unused_args.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1443 "unused_args.m"
          case (MR_Integer) 0:
#line 1511 "unused_args.m"
            {
#line 1512 "unused_args.m"
              *transform_hlds__unused_args__Goal_7 = transform_hlds__unused_args__Goal0_6;
#line 1513 "unused_args.m"
              *transform_hlds__unused_args__Changed_9 = (MR_Integer) 0;
#line 1511 "unused_args.m"
              *transform_hlds__unused_args__STATE_VARIABLE_Info_77 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_76;
#line 1511 "unused_args.m"
            }
#line 1443 "unused_args.m"
            break;
#line 1443 "unused_args.m"
          case (MR_Integer) 1:
#line 1516 "unused_args.m"
            {
#line 1516 "unused_args.m"
              MR_Word transform_hlds__unused_args__TypeInfo_141_141 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 1516 "unused_args.m"
              MR_Word transform_hlds__unused_args__TypeCtorInfo_150_150;
#line 1516 "unused_args.m"
              MR_Word transform_hlds__unused_args__TypeInfo_151_151;
#line 1516 "unused_args.m"
              MR_Word transform_hlds__unused_args__TypeCtorInfo_152_152;
#line 1516 "unused_args.m"
              MR_Word transform_hlds__unused_args__TypeCtorInfo_153_153;
#line 1516 "unused_args.m"
              MR_Word transform_hlds__unused_args__Attributes_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1516 "unused_args.m"
              MR_Word transform_hlds__unused_args__Args0_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 4)));
#line 1516 "unused_args.m"
              MR_Word transform_hlds__unused_args__ExtraArgs0_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 5)));
#line 1516 "unused_args.m"
              MR_Word transform_hlds__unused_args__MaybeTraceRuntimeCond_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 6)));
#line 1516 "unused_args.m"
              MR_Word transform_hlds__unused_args__Impl_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 7)));
#line 1516 "unused_args.m"
              MR_Word transform_hlds__unused_args__Subst0_68;
#line 1516 "unused_args.m"
              MR_Word transform_hlds__unused_args__Args_69;
#line 1516 "unused_args.m"
              MR_Word transform_hlds__unused_args__Subst1_70;
#line 1516 "unused_args.m"
              MR_Word transform_hlds__unused_args__ArgsChanged_71;
#line 1516 "unused_args.m"
              MR_Word transform_hlds__unused_args__ExtraArgs_72;
#line 1516 "unused_args.m"
              MR_Word transform_hlds__unused_args__Subst_73;
#line 1516 "unused_args.m"
              MR_Word transform_hlds__unused_args__GoalInfo_74;
#line 1516 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_82_82;
#line 1516 "unused_args.m"
              MR_Word transform_hlds__unused_args__GoalExpr_118;
#line 1516 "unused_args.m"
              MR_Word transform_hlds__unused_args__PredId_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 2)));
#line 1516 "unused_args.m"
              MR_Integer transform_hlds__unused_args__ProcId_120 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 3)));
#line 1521 "unused_args.m"
              MR_Box transform_hlds__unused_args__conv6_Subst1_70;
#line 1521 "unused_args.m"
              MR_Box transform_hlds__unused_args__conv5_STATE_VARIABLE_Info_82_82;
#line 1521 "unused_args.m"
              MR_Box transform_hlds__unused_args__conv4_ArgsChanged_71;
#line 1523 "unused_args.m"
              MR_Box transform_hlds__unused_args__conv13_Subst_73;
#line 1523 "unused_args.m"
              MR_Box transform_hlds__unused_args__conv12_STATE_VARIABLE_Info_77;
#line 1523 "unused_args.m"
              MR_Box transform_hlds__unused_args__conv11_Changed_9;

#line 1520 "unused_args.m"
              {
#line 1520 "unused_args.m"
                mercury__map__init_1_p_0(transform_hlds__unused_args__TypeInfo_141_141, transform_hlds__unused_args__TypeInfo_141_141, &transform_hlds__unused_args__Subst0_68);
              }
#line 11150 "transform_hlds.unused_args.c"
              transform_hlds__unused_args__TypeCtorInfo_150_150 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 11152 "transform_hlds.unused_args.c"
              transform_hlds__unused_args__TypeInfo_151_151 = (MR_Word) &transform_hlds__unused_args_scalar_common_2[5];
#line 11154 "transform_hlds.unused_args.c"
              transform_hlds__unused_args__TypeCtorInfo_152_152 = (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_fixup_info_0;
#line 11156 "transform_hlds.unused_args.c"
              transform_hlds__unused_args__TypeCtorInfo_153_153 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
#line 1521 "unused_args.m"
              {
#line 1521 "unused_args.m"
                mercury__list__map_foldl3_9_p_1(transform_hlds__unused_args__TypeCtorInfo_150_150, transform_hlds__unused_args__TypeCtorInfo_150_150, transform_hlds__unused_args__TypeInfo_151_151, transform_hlds__unused_args__TypeCtorInfo_152_152, transform_hlds__unused_args__TypeCtorInfo_153_153, (MR_Word) &transform_hlds__unused_args_scalar_common_2[12], transform_hlds__unused_args__Args0_63, &transform_hlds__unused_args__Args_69, ((MR_Box) (transform_hlds__unused_args__Subst0_68)), &transform_hlds__unused_args__conv6_Subst1_70, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_Info_0_76)), &transform_hlds__unused_args__conv5_STATE_VARIABLE_Info_82_82, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__unused_args__conv4_ArgsChanged_71);
              }
#line 1521 "unused_args.m"
              transform_hlds__unused_args__Subst1_70 = ((MR_Word) transform_hlds__unused_args__conv6_Subst1_70);
#line 1521 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Info_82_82 = ((MR_Word) transform_hlds__unused_args__conv5_STATE_VARIABLE_Info_82_82);
#line 1521 "unused_args.m"
              transform_hlds__unused_args__ArgsChanged_71 = ((MR_Word) transform_hlds__unused_args__conv4_ArgsChanged_71);
#line 1523 "unused_args.m"
              {
#line 1523 "unused_args.m"
                mercury__list__map_foldl3_9_p_1(transform_hlds__unused_args__TypeCtorInfo_150_150, transform_hlds__unused_args__TypeCtorInfo_150_150, transform_hlds__unused_args__TypeInfo_151_151, transform_hlds__unused_args__TypeCtorInfo_152_152, transform_hlds__unused_args__TypeCtorInfo_153_153, (MR_Word) &transform_hlds__unused_args_scalar_common_2[13], transform_hlds__unused_args__ExtraArgs0_64, &transform_hlds__unused_args__ExtraArgs_72, ((MR_Box) (transform_hlds__unused_args__Subst1_70)), &transform_hlds__unused_args__conv13_Subst_73, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_Info_82_82)), &transform_hlds__unused_args__conv12_STATE_VARIABLE_Info_77, ((MR_Box) (transform_hlds__unused_args__ArgsChanged_71)), &transform_hlds__unused_args__conv11_Changed_9);
              }
#line 1523 "unused_args.m"
              transform_hlds__unused_args__Subst_73 = ((MR_Word) transform_hlds__unused_args__conv13_Subst_73);
#line 1523 "unused_args.m"
              *transform_hlds__unused_args__STATE_VARIABLE_Info_77 = ((MR_Word) transform_hlds__unused_args__conv12_STATE_VARIABLE_Info_77);
#line 1523 "unused_args.m"
              *transform_hlds__unused_args__Changed_9 = ((MR_Word) transform_hlds__unused_args__conv11_Changed_9);
#line 1525 "unused_args.m"
              {
#line 1525 "unused_args.m"
                transform_hlds__unused_args__GoalExpr_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 1525 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1525 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 1) = ((MR_Box) (transform_hlds__unused_args__Attributes_62));
#line 1525 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 2) = ((MR_Box) (transform_hlds__unused_args__PredId_119));
#line 1525 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 3) = ((MR_Box) (transform_hlds__unused_args__ProcId_120));
#line 1525 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 4) = ((MR_Box) (transform_hlds__unused_args__Args_69));
#line 1525 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 5) = ((MR_Box) (transform_hlds__unused_args__ExtraArgs_72));
#line 1525 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 6) = ((MR_Box) (transform_hlds__unused_args__MaybeTraceRuntimeCond_65));
#line 1525 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_118, 7) = ((MR_Box) (transform_hlds__unused_args__Impl_66));
#line 1525 "unused_args.m"
              }
#line 1527 "unused_args.m"
              {
#line 1527 "unused_args.m"
                hlds__hlds_goal__rename_vars_in_goal_info_4_p_0((MR_Integer) 1, transform_hlds__unused_args__Subst_73, transform_hlds__unused_args__GoalInfo0_11, &transform_hlds__unused_args__GoalInfo_74);
              }
#line 1528 "unused_args.m"
              {
#line 1528 "unused_args.m"
                MR_Word base;
#line 1528 "unused_args.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1528 "unused_args.m"
                *transform_hlds__unused_args__Goal_7 = base;
#line 1528 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_118));
#line 1528 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo_74));
#line 1528 "unused_args.m"
              }
#line 1516 "unused_args.m"
            }
#line 1443 "unused_args.m"
            break;
#line 1443 "unused_args.m"
          case (MR_Integer) 2:
#line 1439 "unused_args.m"
            {
#line 1439 "unused_args.m"
              MR_Word transform_hlds__unused_args__ConjType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1439 "unused_args.m"
              MR_Word transform_hlds__unused_args__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 2)));
#line 1439 "unused_args.m"
              MR_Word transform_hlds__unused_args__Goals_14;
#line 1439 "unused_args.m"
              MR_Word transform_hlds__unused_args__GoalExpr_15;

#line 1440 "unused_args.m"
              {
#line 1440 "unused_args.m"
                transform_hlds__unused_args__unused_args_fixup_conjuncts_6_p_0(transform_hlds__unused_args__Goals0_13, &transform_hlds__unused_args__Goals_14, transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, transform_hlds__unused_args__STATE_VARIABLE_Info_77, (MR_Integer) 0, transform_hlds__unused_args__Changed_9);
              }
#line 1441 "unused_args.m"
              {
#line 1441 "unused_args.m"
                transform_hlds__unused_args__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1441 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1441 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__unused_args__ConjType_12));
#line 1441 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__unused_args__Goals_14));
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
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_15));
#line 1442 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1442 "unused_args.m"
              }
#line 1439 "unused_args.m"
            }
#line 1443 "unused_args.m"
            break;
#line 1443 "unused_args.m"
          case (MR_Integer) 3:
#line 1444 "unused_args.m"
            {
#line 1444 "unused_args.m"
              MR_Word transform_hlds__unused_args__Goals0_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1444 "unused_args.m"
              MR_Word transform_hlds__unused_args__Goals_105;
#line 1444 "unused_args.m"
              MR_Word transform_hlds__unused_args__GoalExpr_106;

#line 1445 "unused_args.m"
              {
#line 1445 "unused_args.m"
                transform_hlds__unused_args__unused_args_fixup_disjuncts_6_p_0(transform_hlds__unused_args__Goals0_104, &transform_hlds__unused_args__Goals_105, transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, transform_hlds__unused_args__STATE_VARIABLE_Info_77, (MR_Integer) 0, transform_hlds__unused_args__Changed_9);
              }
#line 1446 "unused_args.m"
              {
#line 1446 "unused_args.m"
                transform_hlds__unused_args__GoalExpr_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1446 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1446 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_106, 1) = ((MR_Box) (transform_hlds__unused_args__Goals_105));
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
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_106));
#line 1447 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1447 "unused_args.m"
              }
#line 1444 "unused_args.m"
            }
#line 1443 "unused_args.m"
            break;
#line 1443 "unused_args.m"
          case (MR_Integer) 4:
#line 1454 "unused_args.m"
            {
#line 1454 "unused_args.m"
              MR_Word transform_hlds__unused_args__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1454 "unused_args.m"
              MR_Word transform_hlds__unused_args__CanFail_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 2)));
#line 1454 "unused_args.m"
              MR_Word transform_hlds__unused_args__Cases0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 3)));
#line 1454 "unused_args.m"
              MR_Word transform_hlds__unused_args__Cases_21;
#line 1454 "unused_args.m"
              MR_Word transform_hlds__unused_args__GoalExpr_108;

#line 1455 "unused_args.m"
              {
#line 1455 "unused_args.m"
                transform_hlds__unused_args__unused_args_fixup_cases_6_p_0(transform_hlds__unused_args__Cases0_20, &transform_hlds__unused_args__Cases_21, transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, transform_hlds__unused_args__STATE_VARIABLE_Info_77, (MR_Integer) 0, transform_hlds__unused_args__Changed_9);
              }
#line 1456 "unused_args.m"
              {
#line 1456 "unused_args.m"
                transform_hlds__unused_args__GoalExpr_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1456 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1456 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_108, 1) = ((MR_Box) (transform_hlds__unused_args__Var_18));
#line 1456 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_108, 2) = ((MR_Box) (transform_hlds__unused_args__CanFail_19));
#line 1456 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_108, 3) = ((MR_Box) (transform_hlds__unused_args__Cases_21));
#line 1456 "unused_args.m"
              }
#line 1457 "unused_args.m"
              {
#line 1457 "unused_args.m"
                MR_Word base;
#line 1457 "unused_args.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1457 "unused_args.m"
                *transform_hlds__unused_args__Goal_7 = base;
#line 1457 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_108));
#line 1457 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1457 "unused_args.m"
              }
#line 1454 "unused_args.m"
            }
#line 1443 "unused_args.m"
            break;
#line 1443 "unused_args.m"
          case (MR_Integer) 5:
#line 1467 "unused_args.m"
            {
#line 1467 "unused_args.m"
              MR_Word transform_hlds__unused_args__Reason_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1467 "unused_args.m"
              MR_Word transform_hlds__unused_args__SubGoal0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 2)));
#line 1478 "unused_args.m"
              MR_Word transform_hlds__unused_args__TermVar_34;
#line 1468 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_88_88;

#line 1468 "unused_args.m"
              transform_hlds__unused_args__succeeded = ((((MR_tag((MR_Word) transform_hlds__unused_args__Reason_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Reason_32, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1468 "unused_args.m"
              if (transform_hlds__unused_args__succeeded)
#line 1468 "unused_args.m"
                {
#line 1468 "unused_args.m"
                  transform_hlds__unused_args__TermVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Reason_32, (MR_Integer) 1)));
#line 1468 "unused_args.m"
                  transform_hlds__unused_args__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Reason_32, (MR_Integer) 2)));
#line 1468 "unused_args.m"
                  transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_88_88 == (MR_Integer) 1);
#line 1468 "unused_args.m"
                }
#line 1478 "unused_args.m"
              if (transform_hlds__unused_args__succeeded)
#line 1469 "unused_args.m"
                {
#line 1469 "unused_args.m"
                  MR_Word transform_hlds__unused_args__UnusedVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 2)));
#line 1469 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 0)));
#line 1469 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 1)));
#line 1469 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 3)));
#line 1469 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, (MR_Integer) 4)));

#line 1470 "unused_args.m"
                  {
#line 1470 "unused_args.m"
                    transform_hlds__unused_args__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], ((MR_Box) (transform_hlds__unused_args__TermVar_34)), transform_hlds__unused_args__UnusedVars_35);
                  }
#line 1474 "unused_args.m"
                  if (transform_hlds__unused_args__succeeded)
#line 1471 "unused_args.m"
                    {
#line 1471 "unused_args.m"
                      {
#line 1471 "unused_args.m"
                        *transform_hlds__unused_args__Goal_7 = hlds__make_goal__true_goal_0_f_0();
                      }
#line 1473 "unused_args.m"
                      *transform_hlds__unused_args__Changed_9 = (MR_Integer) 0;
#line 1471 "unused_args.m"
                    }
#line 1474 "unused_args.m"
                  else
#line 1475 "unused_args.m"
                    {
#line 1475 "unused_args.m"
                      *transform_hlds__unused_args__Goal_7 = transform_hlds__unused_args__Goal0_6;
#line 1476 "unused_args.m"
                      *transform_hlds__unused_args__Changed_9 = (MR_Integer) 0;
#line 1475 "unused_args.m"
                    }
#line 1469 "unused_args.m"
                  *transform_hlds__unused_args__STATE_VARIABLE_Info_77 = transform_hlds__unused_args__STATE_VARIABLE_Info_0_76;
#line 1469 "unused_args.m"
                }
#line 1478 "unused_args.m"
              else
#line 1479 "unused_args.m"
                {
#line 1479 "unused_args.m"
                  MR_Word transform_hlds__unused_args__SubGoal_36;
#line 1479 "unused_args.m"
                  MR_Word transform_hlds__unused_args__GoalExpr_110;

#line 1479 "unused_args.m"
                  {
#line 1479 "unused_args.m"
                    transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(transform_hlds__unused_args__SubGoal0_33, &transform_hlds__unused_args__SubGoal_36, transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, transform_hlds__unused_args__STATE_VARIABLE_Info_77, transform_hlds__unused_args__Changed_9);
                  }
#line 1480 "unused_args.m"
                  {
#line 1480 "unused_args.m"
                    transform_hlds__unused_args__GoalExpr_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1480 "unused_args.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1480 "unused_args.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_110, 1) = ((MR_Box) (transform_hlds__unused_args__Reason_32));
#line 1480 "unused_args.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_110, 2) = ((MR_Box) (transform_hlds__unused_args__SubGoal_36));
#line 1480 "unused_args.m"
                  }
#line 1481 "unused_args.m"
                  {
#line 1481 "unused_args.m"
                    MR_Word base;
#line 1481 "unused_args.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1481 "unused_args.m"
                    *transform_hlds__unused_args__Goal_7 = base;
#line 1481 "unused_args.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_110));
#line 1481 "unused_args.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1481 "unused_args.m"
                  }
#line 1479 "unused_args.m"
                }
#line 1467 "unused_args.m"
            }
#line 1443 "unused_args.m"
            break;
#line 1443 "unused_args.m"
          case (MR_Integer) 6:
#line 1459 "unused_args.m"
            {
#line 1459 "unused_args.m"
              MR_Word transform_hlds__unused_args__Vars_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 1)));
#line 1459 "unused_args.m"
              MR_Word transform_hlds__unused_args__Cond0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 2)));
#line 1459 "unused_args.m"
              MR_Word transform_hlds__unused_args__Then0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 3)));
#line 1459 "unused_args.m"
              MR_Word transform_hlds__unused_args__Else0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr0_10, (MR_Integer) 4)));
#line 1459 "unused_args.m"
              MR_Word transform_hlds__unused_args__Cond_26;
#line 1459 "unused_args.m"
              MR_Word transform_hlds__unused_args__Changed1_27;
#line 1459 "unused_args.m"
              MR_Word transform_hlds__unused_args__Then_28;
#line 1459 "unused_args.m"
              MR_Word transform_hlds__unused_args__Changed2_29;
#line 1459 "unused_args.m"
              MR_Word transform_hlds__unused_args__Else_30;
#line 1459 "unused_args.m"
              MR_Word transform_hlds__unused_args__Changed3_31;
#line 1459 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_90_90;
#line 1459 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_91_91;
#line 1459 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_93_93;
#line 1459 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_94_94;
#line 1459 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_95_95;
#line 1459 "unused_args.m"
              MR_Word transform_hlds__unused_args__GoalExpr_109;

#line 1460 "unused_args.m"
              {
#line 1460 "unused_args.m"
                transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(transform_hlds__unused_args__Cond0_23, &transform_hlds__unused_args__Cond_26, transform_hlds__unused_args__STATE_VARIABLE_Info_0_76, &transform_hlds__unused_args__STATE_VARIABLE_Info_90_90, &transform_hlds__unused_args__Changed1_27);
              }
#line 1461 "unused_args.m"
              {
#line 1461 "unused_args.m"
                transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(transform_hlds__unused_args__Then0_24, &transform_hlds__unused_args__Then_28, transform_hlds__unused_args__STATE_VARIABLE_Info_90_90, &transform_hlds__unused_args__STATE_VARIABLE_Info_91_91, &transform_hlds__unused_args__Changed2_29);
              }
#line 1462 "unused_args.m"
              {
#line 1462 "unused_args.m"
                transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(transform_hlds__unused_args__Else0_25, &transform_hlds__unused_args__Else_30, transform_hlds__unused_args__STATE_VARIABLE_Info_91_91, transform_hlds__unused_args__STATE_VARIABLE_Info_77, &transform_hlds__unused_args__Changed3_31);
              }
#line 1463 "unused_args.m"
              {
#line 1463 "unused_args.m"
                transform_hlds__unused_args__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1463 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_95_95, 0) = ((MR_Box) (transform_hlds__unused_args__Changed3_31));
#line 1463 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1463 "unused_args.m"
              }
#line 1463 "unused_args.m"
              {
#line 1463 "unused_args.m"
                transform_hlds__unused_args__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1463 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_94_94, 0) = ((MR_Box) (transform_hlds__unused_args__Changed2_29));
#line 1463 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_94_94, 1) = ((MR_Box) (transform_hlds__unused_args__V_95_95));
#line 1463 "unused_args.m"
              }
#line 1463 "unused_args.m"
              {
#line 1463 "unused_args.m"
                transform_hlds__unused_args__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1463 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_93_93, 0) = ((MR_Box) (transform_hlds__unused_args__Changed1_27));
#line 1463 "unused_args.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_93_93, 1) = ((MR_Box) (transform_hlds__unused_args__V_94_94));
#line 1463 "unused_args.m"
              }
#line 1463 "unused_args.m"
              {
#line 1463 "unused_args.m"
                mercury__bool__or_list_2_p_0(transform_hlds__unused_args__V_93_93, transform_hlds__unused_args__Changed_9);
              }
#line 1464 "unused_args.m"
              {
#line 1464 "unused_args.m"
                transform_hlds__unused_args__GoalExpr_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1464 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1464 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_109, 1) = ((MR_Box) (transform_hlds__unused_args__Vars_22));
#line 1464 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_109, 2) = ((MR_Box) (transform_hlds__unused_args__Cond_26));
#line 1464 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_109, 3) = ((MR_Box) (transform_hlds__unused_args__Then_28));
#line 1464 "unused_args.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_109, 4) = ((MR_Box) (transform_hlds__unused_args__Else_30));
#line 1464 "unused_args.m"
              }
#line 1465 "unused_args.m"
              {
#line 1465 "unused_args.m"
                MR_Word base;
#line 1465 "unused_args.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1465 "unused_args.m"
                *transform_hlds__unused_args__Goal_7 = base;
#line 1465 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_109));
#line 1465 "unused_args.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo0_11));
#line 1465 "unused_args.m"
              }
#line 1459 "unused_args.m"
            }
#line 1443 "unused_args.m"
            break;
#line 1443 "unused_args.m"
          case (MR_Integer) 7:
#line 1530 "unused_args.m"
            {
#line 1532 "unused_args.m"
              {
#line 1532 "unused_args.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.unused_args_fixup_goal_expr\'/5", (MR_String) "shorthand");
#line 1532 "unused_args.m"
                return;
              }
#line 1530 "unused_args.m"
            }
#line 1443 "unused_args.m"
            break;
#line 1443 "unused_args.m"
        }
#line 1443 "unused_args.m"
        break;
#line 1443 "unused_args.m"
    }
#line 1436 "unused_args.m"
  }
#line 1433 "unused_args.m"
}

#line 1417 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(
#line 1417 "unused_args.m"
  MR_Word transform_hlds__unused_args__Goal0_6,
#line 1417 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Goal_7,
#line 1417 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Info_0_15,
#line 1417 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Info_16,
#line 1417 "unused_args.m"
  MR_Word * transform_hlds__unused_args__Changed_9)
#line 1417 "unused_args.m"
{
#line 1420 "unused_args.m"
  {
#line 1420 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1420 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal1_10;
#line 1420 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalExpr1_11;
#line 1420 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalInfo1_12;
#line 1420 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalInfo_14;

#line 1421 "unused_args.m"
    {
#line 1421 "unused_args.m"
      transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(transform_hlds__unused_args__Goal0_6, &transform_hlds__unused_args__Goal1_10, transform_hlds__unused_args__STATE_VARIABLE_Info_0_15, transform_hlds__unused_args__STATE_VARIABLE_Info_16, transform_hlds__unused_args__Changed_9);
    }
#line 1422 "unused_args.m"
    transform_hlds__unused_args__GoalExpr1_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_10, (MR_Integer) 0)));
#line 1422 "unused_args.m"
    transform_hlds__unused_args__GoalInfo1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_10, (MR_Integer) 1)));
#line 1427 "unused_args.m"
#line 1427 "unused_args.m"
    switch (*transform_hlds__unused_args__Changed_9) {
#line 1427 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1427 "unused_args.m"
      case (MR_Integer) 0:
#line 1429 "unused_args.m"
        transform_hlds__unused_args__GoalInfo_14 = transform_hlds__unused_args__GoalInfo1_12;
#line 1427 "unused_args.m"
        break;
#line 1427 "unused_args.m"
      case (MR_Integer) 1:
#line 1424 "unused_args.m"
        {
#line 1424 "unused_args.m"
          MR_Word transform_hlds__unused_args__UnusedVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__unused_args__STATE_VARIABLE_Info_16, (MR_Integer) 2)));
#line 1424 "unused_args.m"
          MR_Word transform_hlds__unused_args__InstMap0_26;
#line 1424 "unused_args.m"
          MR_Word transform_hlds__unused_args__InstMap_27;
#line 1425 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__unused_args__STATE_VARIABLE_Info_16, (MR_Integer) 0)));
#line 1425 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__unused_args__STATE_VARIABLE_Info_16, (MR_Integer) 1)));
#line 1425 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__unused_args__STATE_VARIABLE_Info_16, (MR_Integer) 3)));
#line 1425 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__unused_args__STATE_VARIABLE_Info_16, (MR_Integer) 4)));

#line 1705 "unused_args.m"
          {
#line 1705 "unused_args.m"
            transform_hlds__unused_args__InstMap0_26 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__unused_args__GoalInfo1_12);
          }
#line 1706 "unused_args.m"
          {
#line 1706 "unused_args.m"
            hlds__instmap__instmap_delta_delete_vars_3_p_0(transform_hlds__unused_args__UnusedVars_13, transform_hlds__unused_args__InstMap0_26, &transform_hlds__unused_args__InstMap_27);
          }
#line 1707 "unused_args.m"
          {
#line 1707 "unused_args.m"
            hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__unused_args__InstMap_27, transform_hlds__unused_args__GoalInfo1_12, &transform_hlds__unused_args__GoalInfo_14);
          }
#line 1424 "unused_args.m"
        }
#line 1427 "unused_args.m"
        break;
#line 1427 "unused_args.m"
    }
#line 1431 "unused_args.m"
    {
#line 1431 "unused_args.m"
      MR_Word base;
#line 1431 "unused_args.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1431 "unused_args.m"
      *transform_hlds__unused_args__Goal_7 = base;
#line 1431 "unused_args.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr1_11));
#line 1431 "unused_args.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo_14));
#line 1431 "unused_args.m"
    }
#line 1420 "unused_args.m"
  }
#line 1417 "unused_args.m"
}

#line 1338 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__do_unused_args_fixup_proc_5_p_0(
#line 1338 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_6,
#line 1338 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 1338 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcCallInfo_9,
#line 1338 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo0_10,
#line 1338 "unused_args.m"
  MR_Word * transform_hlds__unused_args__ModuleInfo_11)
#line 1338 "unused_args.m"
{
#line 1342 "unused_args.m"
  {
#line 1342 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1342 "unused_args.m"
    MR_Word transform_hlds__unused_args__OldPredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 1342 "unused_args.m"
    MR_Integer transform_hlds__unused_args__OldProcId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 1342 "unused_args.m"
    MR_Word transform_hlds__unused_args__UnusedArgs_16;
#line 1342 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredId_17;
#line 1342 "unused_args.m"
    MR_Integer transform_hlds__unused_args__ProcId_18;
#line 1342 "unused_args.m"
    MR_Word transform_hlds__unused_args__UsageInfos_19;
#line 1342 "unused_args.m"
    MR_Word transform_hlds__unused_args__UnusedVars_20;
#line 1342 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredInfo0_21;
#line 1342 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes0_23;
#line 1342 "unused_args.m"
    MR_Word transform_hlds__unused_args__Preds0_24;
#line 1342 "unused_args.m"
    MR_Word transform_hlds__unused_args__Procs0_25;
#line 1342 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVars0_26;
#line 1342 "unused_args.m"
    MR_Word transform_hlds__unused_args__ArgModes0_27;
#line 1342 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarSet0_28;
#line 1342 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVars_30;
#line 1342 "unused_args.m"
    MR_Word transform_hlds__unused_args__ArgModes_31;
#line 1342 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcInfo_32;
#line 1342 "unused_args.m"
    MR_Word transform_hlds__unused_args__FixupInfo0_34;
#line 1342 "unused_args.m"
    MR_Word transform_hlds__unused_args__FixupInfo_35;
#line 1342 "unused_args.m"
    MR_Word transform_hlds__unused_args__Changed_36;
#line 1342 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarSet1_40;
#line 1342 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes1_41;
#line 1342 "unused_args.m"
    MR_Word transform_hlds__unused_args__Procs_48;
#line 1342 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredInfo_49;
#line 1342 "unused_args.m"
    MR_Word transform_hlds__unused_args__Preds_50;
#line 1342 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_56_56;
#line 1342 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_Goal_57_57;
#line 1342 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_58_58;
#line 1342 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_59_59;
#line 1342 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_Goal_60_60;
#line 1351 "unused_args.m"
    MR_Word transform_hlds__unused_args__NewPredId_12;
#line 1351 "unused_args.m"
    MR_Integer transform_hlds__unused_args__NewProcId_13;
#line 1351 "unused_args.m"
    MR_Word transform_hlds__unused_args__UnusedArgs0_15;
#line 1345 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_52_52;
#line 1345 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv0_V_52_52;
#line 1346 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_14_14;
#line 1356 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv1_UsageInfos_19;
#line 1382 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_37_37;
#line 1382 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_38_38;
#line 1382 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_39_39;

#line 1345 "unused_args.m"
    {
#line 1345 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0, transform_hlds__unused_args__ProcCallInfo_9, ((MR_Box) (transform_hlds__unused_args__HeadVar__2_2)), &transform_hlds__unused_args__conv0_V_52_52);
    }
#line 1345 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1345 "unused_args.m"
      {
#line 1345 "unused_args.m"
        transform_hlds__unused_args__V_52_52 = ((MR_Word) transform_hlds__unused_args__conv0_V_52_52);
#line 1345 "unused_args.m"
        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1345 "unused_args.m"
      }
#line 1345 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1345 "unused_args.m"
      {
#line 1346 "unused_args.m"
        transform_hlds__unused_args__NewPredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_52_52, (MR_Integer) 0)));
#line 1346 "unused_args.m"
        transform_hlds__unused_args__NewProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_52_52, (MR_Integer) 1)));
#line 1346 "unused_args.m"
        transform_hlds__unused_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_52_52, (MR_Integer) 2)));
#line 1346 "unused_args.m"
        transform_hlds__unused_args__UnusedArgs0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_52_52, (MR_Integer) 3)));
#line 1346 "unused_args.m"
        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 1345 "unused_args.m"
      }
#line 1351 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 1348 "unused_args.m"
      {
#line 1348 "unused_args.m"
        transform_hlds__unused_args__UnusedArgs_16 = transform_hlds__unused_args__UnusedArgs0_15;
#line 1349 "unused_args.m"
        transform_hlds__unused_args__PredId_17 = transform_hlds__unused_args__NewPredId_12;
#line 1350 "unused_args.m"
        transform_hlds__unused_args__ProcId_18 = transform_hlds__unused_args__NewProcId_13;
#line 1348 "unused_args.m"
      }
#line 1351 "unused_args.m"
    else
#line 1352 "unused_args.m"
      {
#line 1352 "unused_args.m"
        transform_hlds__unused_args__UnusedArgs_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1353 "unused_args.m"
        transform_hlds__unused_args__PredId_17 = transform_hlds__unused_args__OldPredId_7;
#line 1354 "unused_args.m"
        transform_hlds__unused_args__ProcId_18 = transform_hlds__unused_args__OldProcId_8;
#line 1352 "unused_args.m"
      }
#line 1356 "unused_args.m"
    {
#line 1356 "unused_args.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], transform_hlds__unused_args__VarUsage_6, ((MR_Box) (transform_hlds__unused_args__HeadVar__2_2)), &transform_hlds__unused_args__conv1_UsageInfos_19);
    }
#line 1356 "unused_args.m"
    transform_hlds__unused_args__UsageInfos_19 = ((MR_Word) transform_hlds__unused_args__conv1_UsageInfos_19);
#line 1357 "unused_args.m"
    {
#line 1357 "unused_args.m"
      mercury__map__keys_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__UsageInfos_19, &transform_hlds__unused_args__UnusedVars_20);
    }
#line 1358 "unused_args.m"
    {
#line 1358 "unused_args.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__unused_args__ModuleInfo0_10, transform_hlds__unused_args__PredId_17, transform_hlds__unused_args__ProcId_18, &transform_hlds__unused_args__PredInfo0_21, &transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_56_56);
    }
#line 1360 "unused_args.m"
    {
#line 1360 "unused_args.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_56_56, &transform_hlds__unused_args__VarTypes0_23);
    }
#line 1361 "unused_args.m"
    {
#line 1361 "unused_args.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__unused_args__ModuleInfo0_10, &transform_hlds__unused_args__Preds0_24);
    }
#line 1362 "unused_args.m"
    {
#line 1362 "unused_args.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__unused_args__PredInfo0_21, &transform_hlds__unused_args__Procs0_25);
    }
#line 1364 "unused_args.m"
    {
#line 1364 "unused_args.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_56_56, &transform_hlds__unused_args__HeadVars0_26);
    }
#line 1365 "unused_args.m"
    {
#line 1365 "unused_args.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_56_56, &transform_hlds__unused_args__ArgModes0_27);
    }
#line 1366 "unused_args.m"
    {
#line 1366 "unused_args.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_56_56, &transform_hlds__unused_args__VarSet0_28);
    }
#line 1367 "unused_args.m"
    {
#line 1367 "unused_args.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_56_56, &transform_hlds__unused_args__STATE_VARIABLE_Goal_57_57);
    }
#line 1368 "unused_args.m"
    {
#line 1368 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_16, transform_hlds__unused_args__HeadVars0_26, &transform_hlds__unused_args__HeadVars_30);
    }
#line 1369 "unused_args.m"
    {
#line 1369 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_16, transform_hlds__unused_args__ArgModes0_27, &transform_hlds__unused_args__ArgModes_31);
    }
#line 1375 "unused_args.m"
    {
#line 1375 "unused_args.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__unused_args__HeadVars_30, transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_56_56, &transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_58_58);
    }
#line 1376 "unused_args.m"
    {
#line 1376 "unused_args.m"
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__unused_args__ArgModes_31, transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_58_58, &transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_59_59);
    }
#line 1379 "unused_args.m"
    {
#line 1379 "unused_args.m"
      transform_hlds__unused_args__FixupInfo0_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1379 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo0_34, 0) = ((MR_Box) (transform_hlds__unused_args__ModuleInfo0_10));
#line 1379 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo0_34, 1) = ((MR_Box) (transform_hlds__unused_args__ProcCallInfo_9));
#line 1379 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo0_34, 2) = ((MR_Box) (transform_hlds__unused_args__UnusedVars_20));
#line 1379 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo0_34, 3) = ((MR_Box) (transform_hlds__unused_args__VarSet0_28));
#line 1379 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo0_34, 4) = ((MR_Box) (transform_hlds__unused_args__VarTypes0_23));
#line 1379 "unused_args.m"
    }
#line 1381 "unused_args.m"
    {
#line 1381 "unused_args.m"
      transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(transform_hlds__unused_args__STATE_VARIABLE_Goal_57_57, &transform_hlds__unused_args__STATE_VARIABLE_Goal_60_60, transform_hlds__unused_args__FixupInfo0_34, &transform_hlds__unused_args__FixupInfo_35, &transform_hlds__unused_args__Changed_36);
    }
#line 1382 "unused_args.m"
    transform_hlds__unused_args__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo_35, (MR_Integer) 0)));
#line 1382 "unused_args.m"
    transform_hlds__unused_args__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo_35, (MR_Integer) 1)));
#line 1382 "unused_args.m"
    transform_hlds__unused_args__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo_35, (MR_Integer) 2)));
#line 1382 "unused_args.m"
    transform_hlds__unused_args__VarSet1_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo_35, (MR_Integer) 3)));
#line 1382 "unused_args.m"
    transform_hlds__unused_args__VarTypes1_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FixupInfo_35, (MR_Integer) 4)));
#line 1395 "unused_args.m"
#line 1395 "unused_args.m"
    switch (transform_hlds__unused_args__Changed_36) {
#line 1395 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1395 "unused_args.m"
      case (MR_Integer) 0:
#line 1396 "unused_args.m"
        transform_hlds__unused_args__ProcInfo_32 = transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_59_59;
#line 1395 "unused_args.m"
        break;
#line 1395 "unused_args.m"
      case (MR_Integer) 1:
#line 1384 "unused_args.m"
        {
#line 1384 "unused_args.m"
          MR_Word transform_hlds__unused_args__NonLocals_42;
#line 1384 "unused_args.m"
          MR_Word transform_hlds__unused_args__RttiVarMaps0_43;
#line 1384 "unused_args.m"
          MR_Word transform_hlds__unused_args__VarSet_45;
#line 1384 "unused_args.m"
          MR_Word transform_hlds__unused_args__VarTypes_46;
#line 1384 "unused_args.m"
          MR_Word transform_hlds__unused_args__RttiVarMaps_47;
#line 1384 "unused_args.m"
          MR_Word transform_hlds__unused_args__STATE_VARIABLE_Goal_62_62;
#line 1384 "unused_args.m"
          MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_63_63;
#line 1384 "unused_args.m"
          MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_64_64;
#line 1384 "unused_args.m"
          MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_65_65;
#line 1388 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_44_44;

#line 1386 "unused_args.m"
          {
#line 1386 "unused_args.m"
            transform_hlds__unused_args__NonLocals_42 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__unused_args__HeadVars_30);
          }
#line 1387 "unused_args.m"
          {
#line 1387 "unused_args.m"
            hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_59_59, &transform_hlds__unused_args__RttiVarMaps0_43);
          }
#line 1388 "unused_args.m"
          {
#line 1388 "unused_args.m"
            hlds__quantification__implicitly_quantify_goal_general_11_p_0((MR_Integer) 1, transform_hlds__unused_args__NonLocals_42, &transform_hlds__unused_args__V_44_44, transform_hlds__unused_args__STATE_VARIABLE_Goal_60_60, &transform_hlds__unused_args__STATE_VARIABLE_Goal_62_62, transform_hlds__unused_args__VarSet1_40, &transform_hlds__unused_args__VarSet_45, transform_hlds__unused_args__VarTypes1_41, &transform_hlds__unused_args__VarTypes_46, transform_hlds__unused_args__RttiVarMaps0_43, &transform_hlds__unused_args__RttiVarMaps_47);
          }
#line 1391 "unused_args.m"
          {
#line 1391 "unused_args.m"
            hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__unused_args__STATE_VARIABLE_Goal_62_62, transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_59_59, &transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_63_63);
          }
#line 1392 "unused_args.m"
          {
#line 1392 "unused_args.m"
            hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__unused_args__VarSet_45, transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_63_63, &transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_64_64);
          }
#line 1393 "unused_args.m"
          {
#line 1393 "unused_args.m"
            hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__unused_args__VarTypes_46, transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_64_64, &transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_65_65);
          }
#line 1394 "unused_args.m"
          {
#line 1394 "unused_args.m"
            hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__unused_args__RttiVarMaps_47, transform_hlds__unused_args__STATE_VARIABLE_ProcInfo_65_65, &transform_hlds__unused_args__ProcInfo_32);
          }
#line 1384 "unused_args.m"
        }
#line 1395 "unused_args.m"
        break;
#line 1395 "unused_args.m"
    }
#line 1401 "unused_args.m"
    {
#line 1401 "unused_args.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__unused_args__ProcId_18, ((MR_Box) (transform_hlds__unused_args__ProcInfo_32)), transform_hlds__unused_args__Procs0_25, &transform_hlds__unused_args__Procs_48);
    }
#line 1402 "unused_args.m"
    {
#line 1402 "unused_args.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__unused_args__Procs_48, transform_hlds__unused_args__PredInfo0_21, &transform_hlds__unused_args__PredInfo_49);
    }
#line 1403 "unused_args.m"
    {
#line 1403 "unused_args.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ((MR_Box) (transform_hlds__unused_args__PredId_17)), ((MR_Box) (transform_hlds__unused_args__PredInfo_49)), transform_hlds__unused_args__Preds0_24, &transform_hlds__unused_args__Preds_50);
    }
#line 1404 "unused_args.m"
    {
#line 1404 "unused_args.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__unused_args__Preds_50, transform_hlds__unused_args__ModuleInfo0_10, transform_hlds__unused_args__ModuleInfo_11);
#line 1404 "unused_args.m"
      return;
    }
#line 1342 "unused_args.m"
  }
#line 1338 "unused_args.m"
}

#line 1314 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_proc_8_p_0(
#line 1314 "unused_args.m"
  MR_Word transform_hlds__unused_args__VeryVerbose_9,
#line 1314 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_10,
#line 1314 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcCallInfo_11,
#line 1314 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProc_12,
#line 1314 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_20,
#line 1314 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_21)
#line 1314 "unused_args.m"
{
#line 1319 "unused_args.m"
  {
#line 1319 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1333 "unused_args.m"
#line 1333 "unused_args.m"
    switch (transform_hlds__unused_args__VeryVerbose_9) {
#line 1333 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1333 "unused_args.m"
      case (MR_Integer) 0:
#line 1334 "unused_args.m"
        {
#line 1334 "unused_args.m"
        }
#line 1333 "unused_args.m"
        break;
#line 1333 "unused_args.m"
      case (MR_Integer) 1:
#line 1321 "unused_args.m"
        {
#line 1321 "unused_args.m"
          MR_Word transform_hlds__unused_args__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredProc_12, (MR_Integer) 0)));
#line 1321 "unused_args.m"
          MR_Integer transform_hlds__unused_args__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredProc_12, (MR_Integer) 1)));
#line 1321 "unused_args.m"
          MR_String transform_hlds__unused_args__Name_17;
#line 1321 "unused_args.m"
          MR_Integer transform_hlds__unused_args__Arity_18;
#line 1321 "unused_args.m"
          MR_Integer transform_hlds__unused_args__ProcInt_19;

#line 1323 "unused_args.m"
          {
#line 1323 "unused_args.m"
            mercury__io__write_string_3_p_0((MR_String) "% Fixing up \140");
          }
#line 1324 "unused_args.m"
          {
#line 1324 "unused_args.m"
            transform_hlds__unused_args__Name_17 = hlds__hlds_module__predicate_name_2_f_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_20, transform_hlds__unused_args__PredId_15);
          }
#line 1325 "unused_args.m"
          {
#line 1325 "unused_args.m"
            transform_hlds__unused_args__Arity_18 = hlds__hlds_module__predicate_arity_2_f_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_20, transform_hlds__unused_args__PredId_15);
          }
#line 1326 "unused_args.m"
          {
#line 1326 "unused_args.m"
            hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__unused_args__ProcId_16, &transform_hlds__unused_args__ProcInt_19);
          }
#line 1327 "unused_args.m"
          {
#line 1327 "unused_args.m"
            mercury__io__write_string_3_p_0(transform_hlds__unused_args__Name_17);
          }
#line 1328 "unused_args.m"
          {
#line 1328 "unused_args.m"
            mercury__io__write_string_3_p_0((MR_String) "/");
          }
#line 1329 "unused_args.m"
          {
#line 1329 "unused_args.m"
            mercury__io__write_int_3_p_0(transform_hlds__unused_args__Arity_18);
          }
#line 1330 "unused_args.m"
          {
#line 1330 "unused_args.m"
            mercury__io__write_string_3_p_0((MR_String) "\' in mode ");
          }
#line 1331 "unused_args.m"
          {
#line 1331 "unused_args.m"
            mercury__io__write_int_3_p_0(transform_hlds__unused_args__ProcInt_19);
          }
#line 1332 "unused_args.m"
          {
#line 1332 "unused_args.m"
            mercury__io__write_char_3_p_0((MR_Char) 10);
          }
#line 1321 "unused_args.m"
        }
#line 1333 "unused_args.m"
        break;
#line 1333 "unused_args.m"
    }
#line 1336 "unused_args.m"
    {
#line 1336 "unused_args.m"
      transform_hlds__unused_args__do_unused_args_fixup_proc_5_p_0(transform_hlds__unused_args__VarUsage_10, transform_hlds__unused_args__PredProc_12, transform_hlds__unused_args__ProcCallInfo_11, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_20, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_21);
#line 1336 "unused_args.m"
      return;
    }
#line 1319 "unused_args.m"
  }
#line 1314 "unused_args.m"
}

#line 1309 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_module_8_p_0_1(
#line 1309 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1309 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1309 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1309 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3,
#line 1309 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_4,
#line 1309 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_5)
#line 1309 "unused_args.m"
{
#line 1309 "unused_args.m"
  {
#line 1309 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1309 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_STATE_VARIABLE_ModuleInfo_21;

#line 1309 "unused_args.m"
    {
#line 1309 "unused_args.m"
      transform_hlds__unused_args__unused_args_fixup_proc_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv0_STATE_VARIABLE_ModuleInfo_21);
    }
#line 1309 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_STATE_VARIABLE_ModuleInfo_21));
#line 1309 "unused_args.m"
  }
#line 1309 "unused_args.m"
}

#line 1303 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_module_8_p_0(
#line 1303 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_9,
#line 1303 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcs_10,
#line 1303 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcCallInfo_11,
#line 1303 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_15,
#line 1303 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_16,
#line 1303 "unused_args.m"
  MR_Word transform_hlds__unused_args__VeryVerbose_13)
#line 1303 "unused_args.m"
{
#line 1308 "unused_args.m"
  {
#line 1308 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1308 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_19_19;
#line 1309 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv2_STATE_VARIABLE_ModuleInfo_16;
#line 1309 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv1_STATE_VARIABLE_IO_18;

#line 1309 "unused_args.m"
    {
#line 1309 "unused_args.m"
      transform_hlds__unused_args__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1309 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_19_19, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_10[0]));
#line 1309 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_19_19, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_fixup_module_8_p_0_1));
#line 1309 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1309 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_19_19, 3) = ((MR_Box) (transform_hlds__unused_args__VeryVerbose_13));
#line 1309 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_19_19, 4) = ((MR_Box) (transform_hlds__unused_args__VarUsage_9));
#line 1309 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_19_19, 5) = ((MR_Box) (transform_hlds__unused_args__ProcCallInfo_11));
#line 1309 "unused_args.m"
    }
#line 1309 "unused_args.m"
    {
#line 1309 "unused_args.m"
      mercury__list__foldl2_6_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__unused_args__V_19_19, transform_hlds__unused_args__PredProcs_10, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_15)), &transform_hlds__unused_args__conv2_STATE_VARIABLE_ModuleInfo_16, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__unused_args__conv1_STATE_VARIABLE_IO_18);
    }
#line 1309 "unused_args.m"
    *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_16 = ((MR_Word) transform_hlds__unused_args__conv2_STATE_VARIABLE_ModuleInfo_16);
#line 1308 "unused_args.m"
  }
#line 1303 "unused_args.m"
}

#line 1288 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__get_unused_arg_nos_4_p_0(
#line 1288 "unused_args.m"
  MR_Word transform_hlds__unused_args__LocalVars_1,
#line 1288 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 1288 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ArgNo_3,
#line 1288 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__4_4)
#line 1288 "unused_args.m"
{
#line 1291 "unused_args.m"
  {
#line 1291 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 1291 "unused_args.m"
    if ((transform_hlds__unused_args__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1291 "unused_args.m"
      *transform_hlds__unused_args__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1291 "unused_args.m"
    else
#line 1292 "unused_args.m"
      {
#line 1292 "unused_args.m"
        MR_Word transform_hlds__unused_args__HeadVar_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 1292 "unused_args.m"
        MR_Word transform_hlds__unused_args__HeadVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 1292 "unused_args.m"
        MR_Integer transform_hlds__unused_args__NextArg_12 = (transform_hlds__unused_args__ArgNo_3 + (MR_Integer) 1);
#line 1292 "unused_args.m"
        MR_Word transform_hlds__unused_args__UnusedArgsTail_13;

#line 1293 "unused_args.m"
        {
#line 1293 "unused_args.m"
          transform_hlds__unused_args__get_unused_arg_nos_4_p_0(transform_hlds__unused_args__LocalVars_1, transform_hlds__unused_args__HeadVars_9, transform_hlds__unused_args__NextArg_12, &transform_hlds__unused_args__UnusedArgsTail_13);
        }
#line 1295 "unused_args.m"
        {
#line 1295 "unused_args.m"
          transform_hlds__unused_args__succeeded = mercury__map__contains_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__LocalVars_1, ((MR_Box) (transform_hlds__unused_args__HeadVar_8)));
        }
#line 1297 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1296 "unused_args.m"
          {
#line 1296 "unused_args.m"
            MR_Word base;
#line 1296 "unused_args.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1296 "unused_args.m"
            *transform_hlds__unused_args__HeadVar__4_4 = base;
#line 1296 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__ArgNo_3));
#line 1296 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__UnusedArgsTail_13));
#line 1296 "unused_args.m"
          }
#line 1297 "unused_args.m"
        else
#line 1298 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__4_4 = transform_hlds__unused_args__UnusedArgsTail_13;
#line 1292 "unused_args.m"
      }
#line 1291 "unused_args.m"
  }
#line 1288 "unused_args.m"
}

#line 1231 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__make_imported_unused_args_pred_info_6_p_0(
#line 1231 "unused_args.m"
  MR_Word transform_hlds__unused_args__OptProc_7,
#line 1231 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_8,
#line 1231 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_0_31,
#line 1231 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_32,
#line 1231 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_33,
#line 1231 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_34)
#line 1231 "unused_args.m"
{
#line 1236 "unused_args.m"
  {
#line 1236 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1236 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OptProc_7, (MR_Integer) 0)));
#line 1236 "unused_args.m"
    MR_Integer transform_hlds__unused_args__ProcId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OptProc_7, (MR_Integer) 1)));
#line 1236 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredInfo0_13;
#line 1236 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcInfo0_14;
#line 1236 "unused_args.m"
    MR_Word transform_hlds__unused_args__NewPredInfo0_15;
#line 1236 "unused_args.m"
    MR_Word transform_hlds__unused_args__NewProcs0_16;
#line 1236 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVars0_17;
#line 1236 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVars_18;
#line 1236 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcInfo1_19;
#line 1236 "unused_args.m"
    MR_Word transform_hlds__unused_args__ArgModes0_20;
#line 1236 "unused_args.m"
    MR_Word transform_hlds__unused_args__ArgModes_21;
#line 1236 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcInfo_22;
#line 1236 "unused_args.m"
    MR_Word transform_hlds__unused_args__NewProcs_23;
#line 1236 "unused_args.m"
    MR_Word transform_hlds__unused_args__NewPredInfo_24;
#line 1236 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredTable0_25;
#line 1236 "unused_args.m"
    MR_Word transform_hlds__unused_args__NewPredId_26;
#line 1236 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredTable1_27;
#line 1236 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredModule_28;
#line 1236 "unused_args.m"
    MR_String transform_hlds__unused_args__PredName_29;
#line 1236 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredSymName_30;
#line 1236 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_41_41;

#line 1238 "unused_args.m"
    {
#line 1238 "unused_args.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_33, transform_hlds__unused_args__PredId_11, transform_hlds__unused_args__ProcId_12, &transform_hlds__unused_args__PredInfo0_13, &transform_hlds__unused_args__ProcInfo0_14);
    }
#line 1240 "unused_args.m"
    {
#line 1240 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(transform_hlds__unused_args__UnusedArgs_8, (MR_Word) MR_mkword(MR_mktag(2), &transform_hlds__unused_args_scalar_common_9[0]), transform_hlds__unused_args__OptProc_7, transform_hlds__unused_args__PredInfo0_13, &transform_hlds__unused_args__NewPredInfo0_15);
    }
#line 1243 "unused_args.m"
    {
#line 1243 "unused_args.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__unused_args__NewPredInfo0_15, &transform_hlds__unused_args__NewProcs0_16);
    }
#line 1246 "unused_args.m"
    {
#line 1246 "unused_args.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__ProcInfo0_14, &transform_hlds__unused_args__HeadVars0_17);
    }
#line 1247 "unused_args.m"
    {
#line 1247 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_8, transform_hlds__unused_args__HeadVars0_17, &transform_hlds__unused_args__HeadVars_18);
    }
#line 1248 "unused_args.m"
    {
#line 1248 "unused_args.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__unused_args__HeadVars_18, transform_hlds__unused_args__ProcInfo0_14, &transform_hlds__unused_args__ProcInfo1_19);
    }
#line 1249 "unused_args.m"
    {
#line 1249 "unused_args.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__unused_args__ProcInfo1_19, &transform_hlds__unused_args__ArgModes0_20);
    }
#line 1250 "unused_args.m"
    {
#line 1250 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_8, transform_hlds__unused_args__ArgModes0_20, &transform_hlds__unused_args__ArgModes_21);
    }
#line 1251 "unused_args.m"
    {
#line 1251 "unused_args.m"
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__unused_args__ArgModes_21, transform_hlds__unused_args__ProcInfo1_19, &transform_hlds__unused_args__ProcInfo_22);
    }
#line 1252 "unused_args.m"
    {
#line 1252 "unused_args.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__unused_args__ProcId_12, ((MR_Box) (transform_hlds__unused_args__ProcInfo_22)), transform_hlds__unused_args__NewProcs0_16, &transform_hlds__unused_args__NewProcs_23);
    }
#line 1253 "unused_args.m"
    {
#line 1253 "unused_args.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__unused_args__NewProcs_23, transform_hlds__unused_args__NewPredInfo0_15, &transform_hlds__unused_args__NewPredInfo_24);
    }
#line 1256 "unused_args.m"
    {
#line 1256 "unused_args.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_33, &transform_hlds__unused_args__PredTable0_25);
    }
#line 1257 "unused_args.m"
    {
#line 1257 "unused_args.m"
      hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__unused_args__NewPredInfo_24, &transform_hlds__unused_args__NewPredId_26, transform_hlds__unused_args__PredTable0_25, &transform_hlds__unused_args__PredTable1_27);
    }
#line 1258 "unused_args.m"
    {
#line 1258 "unused_args.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__unused_args__PredTable1_27, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_33, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_34);
    }
#line 1259 "unused_args.m"
    {
#line 1259 "unused_args.m"
      transform_hlds__unused_args__PredModule_28 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__unused_args__NewPredInfo_24);
    }
#line 1260 "unused_args.m"
    {
#line 1260 "unused_args.m"
      transform_hlds__unused_args__PredName_29 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__unused_args__NewPredInfo_24);
    }
#line 1261 "unused_args.m"
    {
#line 1261 "unused_args.m"
      transform_hlds__unused_args__PredSymName_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__PredSymName_30, 0) = ((MR_Box) (transform_hlds__unused_args__PredModule_28));
#line 1261 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__PredSymName_30, 1) = ((MR_Box) (transform_hlds__unused_args__PredName_29));
#line 1261 "unused_args.m"
    }
#line 1264 "unused_args.m"
    {
#line 1264 "unused_args.m"
      transform_hlds__unused_args__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1264 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_41_41, 0) = ((MR_Box) (transform_hlds__unused_args__NewPredId_26));
#line 1264 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_41_41, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_12));
#line 1264 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_41_41, 2) = ((MR_Box) (transform_hlds__unused_args__PredSymName_30));
#line 1264 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_41_41, 3) = ((MR_Box) (transform_hlds__unused_args__UnusedArgs_8));
#line 1264 "unused_args.m"
    }
#line 1263 "unused_args.m"
    {
#line 1263 "unused_args.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0, ((MR_Box) (transform_hlds__unused_args__OptProc_7)), ((MR_Box) (transform_hlds__unused_args__V_41_41)), transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_0_31, transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_32);
#line 1263 "unused_args.m"
      return;
    }
#line 1236 "unused_args.m"
  }
#line 1231 "unused_args.m"
}

#line 1192 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__create_call_goal_7_p_0(
#line 1192 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_8,
#line 1192 "unused_args.m"
  MR_Word transform_hlds__unused_args__NewPredId_9,
#line 1192 "unused_args.m"
  MR_Integer transform_hlds__unused_args__NewProcId_10,
#line 1192 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredModule_11,
#line 1192 "unused_args.m"
  MR_String transform_hlds__unused_args__PredName_12,
#line 1192 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34,
#line 1192 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OldProc_35)
#line 1192 "unused_args.m"
{
#line 1196 "unused_args.m"
  {
#line 1196 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1196 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVars_14;
#line 1196 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal0_15;
#line 1196 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalInfo0_17;
#line 1196 "unused_args.m"
    MR_Word transform_hlds__unused_args__Determinism_18;
#line 1196 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalInfo1_19;
#line 1196 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes0_20;
#line 1196 "unused_args.m"
    MR_Word transform_hlds__unused_args__NonLocals_21;
#line 1196 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypeList_22;
#line 1196 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes1_23;
#line 1196 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarSet0_24;
#line 1196 "unused_args.m"
    MR_Word transform_hlds__unused_args__RttiVarMaps0_25;
#line 1196 "unused_args.m"
    MR_Word transform_hlds__unused_args__NewHeadVars_26;
#line 1196 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalExpr_27;
#line 1196 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal1_28;
#line 1196 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal_30;
#line 1196 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarSet_31;
#line 1196 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes_32;
#line 1196 "unused_args.m"
    MR_Word transform_hlds__unused_args__RttiVarMaps_33;
#line 1196 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_39_39;
#line 1196 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_41_41;
#line 1196 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_42_42;
#line 1196 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_43_43;
#line 1196 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_44_44;
#line 1199 "unused_args.m"
    MR_Word transform_hlds__unused_args___GoalExpr_16;
#line 1220 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_29_29;

#line 1197 "unused_args.m"
    {
#line 1197 "unused_args.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34, &transform_hlds__unused_args__HeadVars_14);
    }
#line 1198 "unused_args.m"
    {
#line 1198 "unused_args.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34, &transform_hlds__unused_args__Goal0_15);
    }
#line 1199 "unused_args.m"
    transform_hlds__unused_args___GoalExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal0_15, (MR_Integer) 0)));
#line 1199 "unused_args.m"
    transform_hlds__unused_args__GoalInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal0_15, (MR_Integer) 1)));
#line 1205 "unused_args.m"
    {
#line 1205 "unused_args.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34, &transform_hlds__unused_args__Determinism_18);
    }
#line 1206 "unused_args.m"
    {
#line 1206 "unused_args.m"
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__unused_args__Determinism_18, transform_hlds__unused_args__GoalInfo0_17, &transform_hlds__unused_args__GoalInfo1_19);
    }
#line 1208 "unused_args.m"
    {
#line 1208 "unused_args.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34, &transform_hlds__unused_args__VarTypes0_20);
    }
#line 1209 "unused_args.m"
    {
#line 1209 "unused_args.m"
      mercury__set__list_to_set_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], transform_hlds__unused_args__HeadVars_14, &transform_hlds__unused_args__NonLocals_21);
    }
#line 1210 "unused_args.m"
    {
#line 1210 "unused_args.m"
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__unused_args__VarTypes0_20, transform_hlds__unused_args__HeadVars_14, &transform_hlds__unused_args__VarTypeList_22);
    }
#line 1211 "unused_args.m"
    {
#line 1211 "unused_args.m"
      hlds__vartypes__vartypes_from_corresponding_lists_3_p_0(transform_hlds__unused_args__HeadVars_14, transform_hlds__unused_args__VarTypeList_22, &transform_hlds__unused_args__VarTypes1_23);
    }
#line 1214 "unused_args.m"
    {
#line 1214 "unused_args.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34, &transform_hlds__unused_args__VarSet0_24);
    }
#line 1215 "unused_args.m"
    {
#line 1215 "unused_args.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34, &transform_hlds__unused_args__RttiVarMaps0_25);
    }
#line 1216 "unused_args.m"
    {
#line 1216 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_8, transform_hlds__unused_args__HeadVars_14, &transform_hlds__unused_args__NewHeadVars_26);
    }
#line 1218 "unused_args.m"
    {
#line 1218 "unused_args.m"
      transform_hlds__unused_args__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_39_39, 0) = ((MR_Box) (transform_hlds__unused_args__PredModule_11));
#line 1218 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_39_39, 1) = ((MR_Box) (transform_hlds__unused_args__PredName_12));
#line 1218 "unused_args.m"
    }
#line 1217 "unused_args.m"
    {
#line 1217 "unused_args.m"
      transform_hlds__unused_args__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1217 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_27, 0) = ((MR_Box) (transform_hlds__unused_args__NewPredId_9));
#line 1217 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_27, 1) = ((MR_Box) (transform_hlds__unused_args__NewProcId_10));
#line 1217 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_27, 2) = ((MR_Box) (transform_hlds__unused_args__NewHeadVars_26));
#line 1217 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_27, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1217 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_27, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1217 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_27, 5) = ((MR_Box) (transform_hlds__unused_args__V_39_39));
#line 1217 "unused_args.m"
    }
#line 1219 "unused_args.m"
    {
#line 1219 "unused_args.m"
      transform_hlds__unused_args__Goal1_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1219 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_28, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_27));
#line 1219 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_28, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo1_19));
#line 1219 "unused_args.m"
    }
#line 1221 "unused_args.m"
    {
#line 1221 "unused_args.m"
      transform_hlds__unused_args__V_41_41 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__unused_args__NonLocals_21);
    }
#line 1220 "unused_args.m"
    {
#line 1220 "unused_args.m"
      hlds__quantification__implicitly_quantify_goal_general_11_p_0((MR_Integer) 1, transform_hlds__unused_args__V_41_41, &transform_hlds__unused_args__V_29_29, transform_hlds__unused_args__Goal1_28, &transform_hlds__unused_args__Goal_30, transform_hlds__unused_args__VarSet0_24, &transform_hlds__unused_args__VarSet_31, transform_hlds__unused_args__VarTypes1_23, &transform_hlds__unused_args__VarTypes_32, transform_hlds__unused_args__RttiVarMaps0_25, &transform_hlds__unused_args__RttiVarMaps_33);
    }
#line 1223 "unused_args.m"
    {
#line 1223 "unused_args.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__unused_args__Goal_30, transform_hlds__unused_args__STATE_VARIABLE_OldProc_0_34, &transform_hlds__unused_args__STATE_VARIABLE_OldProc_42_42);
    }
#line 1224 "unused_args.m"
    {
#line 1224 "unused_args.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__unused_args__VarSet_31, transform_hlds__unused_args__STATE_VARIABLE_OldProc_42_42, &transform_hlds__unused_args__STATE_VARIABLE_OldProc_43_43);
    }
#line 1225 "unused_args.m"
    {
#line 1225 "unused_args.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__unused_args__VarTypes_32, transform_hlds__unused_args__STATE_VARIABLE_OldProc_43_43, &transform_hlds__unused_args__STATE_VARIABLE_OldProc_44_44);
    }
#line 1226 "unused_args.m"
    {
#line 1226 "unused_args.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__unused_args__RttiVarMaps_33, transform_hlds__unused_args__STATE_VARIABLE_OldProc_44_44, transform_hlds__unused_args__STATE_VARIABLE_OldProc_35);
#line 1226 "unused_args.m"
      return;
    }
#line 1196 "unused_args.m"
  }
#line 1192 "unused_args.m"
}

#line 1098 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__make_intermod_proc_10_p_0(
#line 1098 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_11,
#line 1098 "unused_args.m"
  MR_Word transform_hlds__unused_args__NewPredId_12,
#line 1098 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_13,
#line 1098 "unused_args.m"
  MR_String transform_hlds__unused_args__NewPredName_14,
#line 1098 "unused_args.m"
  MR_Word transform_hlds__unused_args__OrigPredInfo_15,
#line 1098 "unused_args.m"
  MR_Word transform_hlds__unused_args__OrigProcInfo_16,
#line 1098 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_17,
#line 1098 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs2_18,
#line 1098 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_35,
#line 1098 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_36)
#line 1098 "unused_args.m"
{
#line 1103 "unused_args.m"
  {
#line 1103 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExtraPredInfo0_20;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredModule_21;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExtraProc0_22;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVars0_23;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__IntermodHeadVars_24;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExtraProc1_25;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__ArgModes0_26;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__IntermodArgModes_27;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExtraProc_28;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExtraProcs0_29;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExtraProcs_30;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__ExtraPredInfo_31;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredTable0_32;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredTable_34;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_38_38;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVars_54;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal0_55;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalInfo0_57;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__Determinism_58;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalInfo1_59;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes0_60;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__NonLocals_61;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypeList_62;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes1_63;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarSet0_64;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__RttiVarMaps0_65;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__NewHeadVars_66;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__GoalExpr_67;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal1_68;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__Goal_70;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarSet_71;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarTypes_72;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__RttiVarMaps_73;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_77_77;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_79_79;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_42_80;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_43_81;
#line 1103 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_OldProc_44_82;
#line 1199 "unused_args.m"
    MR_Word transform_hlds__unused_args___GoalExpr_56;
#line 1220 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_69_69;
#line 1121 "unused_args.m"
    MR_Word transform_hlds__unused_args__V_33_33;

#line 1107 "unused_args.m"
    {
#line 1107 "unused_args.m"
      transform_hlds__unused_args__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1107 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_38_38, 0) = ((MR_Box) (transform_hlds__unused_args__PredId_11));
#line 1107 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_38_38, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_13));
#line 1107 "unused_args.m"
    }
#line 1106 "unused_args.m"
    {
#line 1106 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(transform_hlds__unused_args__UnusedArgs2_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), transform_hlds__unused_args__V_38_38, transform_hlds__unused_args__OrigPredInfo_15, &transform_hlds__unused_args__ExtraPredInfo0_20);
    }
#line 1108 "unused_args.m"
    {
#line 1108 "unused_args.m"
      transform_hlds__unused_args__PredModule_21 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__unused_args__OrigPredInfo_15);
    }
#line 1197 "unused_args.m"
    {
#line 1197 "unused_args.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__HeadVars_54);
    }
#line 1198 "unused_args.m"
    {
#line 1198 "unused_args.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__Goal0_55);
    }
#line 1199 "unused_args.m"
    transform_hlds__unused_args___GoalExpr_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal0_55, (MR_Integer) 0)));
#line 1199 "unused_args.m"
    transform_hlds__unused_args__GoalInfo0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal0_55, (MR_Integer) 1)));
#line 1205 "unused_args.m"
    {
#line 1205 "unused_args.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__Determinism_58);
    }
#line 1206 "unused_args.m"
    {
#line 1206 "unused_args.m"
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__unused_args__Determinism_58, transform_hlds__unused_args__GoalInfo0_57, &transform_hlds__unused_args__GoalInfo1_59);
    }
#line 1208 "unused_args.m"
    {
#line 1208 "unused_args.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__VarTypes0_60);
    }
#line 1209 "unused_args.m"
    {
#line 1209 "unused_args.m"
      mercury__set__list_to_set_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], transform_hlds__unused_args__HeadVars_54, &transform_hlds__unused_args__NonLocals_61);
    }
#line 1210 "unused_args.m"
    {
#line 1210 "unused_args.m"
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__unused_args__VarTypes0_60, transform_hlds__unused_args__HeadVars_54, &transform_hlds__unused_args__VarTypeList_62);
    }
#line 1211 "unused_args.m"
    {
#line 1211 "unused_args.m"
      hlds__vartypes__vartypes_from_corresponding_lists_3_p_0(transform_hlds__unused_args__HeadVars_54, transform_hlds__unused_args__VarTypeList_62, &transform_hlds__unused_args__VarTypes1_63);
    }
#line 1214 "unused_args.m"
    {
#line 1214 "unused_args.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__VarSet0_64);
    }
#line 1215 "unused_args.m"
    {
#line 1215 "unused_args.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__RttiVarMaps0_65);
    }
#line 1216 "unused_args.m"
    {
#line 1216 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs_17, transform_hlds__unused_args__HeadVars_54, &transform_hlds__unused_args__NewHeadVars_66);
    }
#line 1218 "unused_args.m"
    {
#line 1218 "unused_args.m"
      transform_hlds__unused_args__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_77_77, 0) = ((MR_Box) (transform_hlds__unused_args__PredModule_21));
#line 1218 "unused_args.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_77_77, 1) = ((MR_Box) (transform_hlds__unused_args__NewPredName_14));
#line 1218 "unused_args.m"
    }
#line 1217 "unused_args.m"
    {
#line 1217 "unused_args.m"
      transform_hlds__unused_args__GoalExpr_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1217 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_67, 0) = ((MR_Box) (transform_hlds__unused_args__NewPredId_12));
#line 1217 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_67, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_13));
#line 1217 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_67, 2) = ((MR_Box) (transform_hlds__unused_args__NewHeadVars_66));
#line 1217 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_67, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1217 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_67, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1217 "unused_args.m"
      MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_67, 5) = ((MR_Box) (transform_hlds__unused_args__V_77_77));
#line 1217 "unused_args.m"
    }
#line 1219 "unused_args.m"
    {
#line 1219 "unused_args.m"
      transform_hlds__unused_args__Goal1_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1219 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_68, 0) = ((MR_Box) (transform_hlds__unused_args__GoalExpr_67));
#line 1219 "unused_args.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal1_68, 1) = ((MR_Box) (transform_hlds__unused_args__GoalInfo1_59));
#line 1219 "unused_args.m"
    }
#line 1221 "unused_args.m"
    {
#line 1221 "unused_args.m"
      transform_hlds__unused_args__V_79_79 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__unused_args__NonLocals_61);
    }
#line 1220 "unused_args.m"
    {
#line 1220 "unused_args.m"
      hlds__quantification__implicitly_quantify_goal_general_11_p_0((MR_Integer) 1, transform_hlds__unused_args__V_79_79, &transform_hlds__unused_args__V_69_69, transform_hlds__unused_args__Goal1_68, &transform_hlds__unused_args__Goal_70, transform_hlds__unused_args__VarSet0_64, &transform_hlds__unused_args__VarSet_71, transform_hlds__unused_args__VarTypes1_63, &transform_hlds__unused_args__VarTypes_72, transform_hlds__unused_args__RttiVarMaps0_65, &transform_hlds__unused_args__RttiVarMaps_73);
    }
#line 1223 "unused_args.m"
    {
#line 1223 "unused_args.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__unused_args__Goal_70, transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__STATE_VARIABLE_OldProc_42_80);
    }
#line 1224 "unused_args.m"
    {
#line 1224 "unused_args.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__unused_args__VarSet_71, transform_hlds__unused_args__STATE_VARIABLE_OldProc_42_80, &transform_hlds__unused_args__STATE_VARIABLE_OldProc_43_81);
    }
#line 1225 "unused_args.m"
    {
#line 1225 "unused_args.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__unused_args__VarTypes_72, transform_hlds__unused_args__STATE_VARIABLE_OldProc_43_81, &transform_hlds__unused_args__STATE_VARIABLE_OldProc_44_82);
    }
#line 1226 "unused_args.m"
    {
#line 1226 "unused_args.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__unused_args__RttiVarMaps_73, transform_hlds__unused_args__STATE_VARIABLE_OldProc_44_82, &transform_hlds__unused_args__ExtraProc0_22);
    }
#line 1111 "unused_args.m"
    {
#line 1111 "unused_args.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__HeadVars0_23);
    }
#line 1112 "unused_args.m"
    {
#line 1112 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs2_18, transform_hlds__unused_args__HeadVars0_23, &transform_hlds__unused_args__IntermodHeadVars_24);
    }
#line 1113 "unused_args.m"
    {
#line 1113 "unused_args.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__unused_args__IntermodHeadVars_24, transform_hlds__unused_args__ExtraProc0_22, &transform_hlds__unused_args__ExtraProc1_25);
    }
#line 1114 "unused_args.m"
    {
#line 1114 "unused_args.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__unused_args__OrigProcInfo_16, &transform_hlds__unused_args__ArgModes0_26);
    }
#line 1115 "unused_args.m"
    {
#line 1115 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, transform_hlds__unused_args__UnusedArgs2_18, transform_hlds__unused_args__ArgModes0_26, &transform_hlds__unused_args__IntermodArgModes_27);
    }
#line 1116 "unused_args.m"
    {
#line 1116 "unused_args.m"
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__unused_args__IntermodArgModes_27, transform_hlds__unused_args__ExtraProc1_25, &transform_hlds__unused_args__ExtraProc_28);
    }
#line 1117 "unused_args.m"
    {
#line 1117 "unused_args.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__unused_args__ExtraPredInfo0_20, &transform_hlds__unused_args__ExtraProcs0_29);
    }
#line 1118 "unused_args.m"
    {
#line 1118 "unused_args.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__unused_args__ProcId_13, ((MR_Box) (transform_hlds__unused_args__ExtraProc_28)), transform_hlds__unused_args__ExtraProcs0_29, &transform_hlds__unused_args__ExtraProcs_30);
    }
#line 1119 "unused_args.m"
    {
#line 1119 "unused_args.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__unused_args__ExtraProcs_30, transform_hlds__unused_args__ExtraPredInfo0_20, &transform_hlds__unused_args__ExtraPredInfo_31);
    }
#line 1120 "unused_args.m"
    {
#line 1120 "unused_args.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_35, &transform_hlds__unused_args__PredTable0_32);
    }
#line 1121 "unused_args.m"
    {
#line 1121 "unused_args.m"
      hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__unused_args__ExtraPredInfo_31, &transform_hlds__unused_args__V_33_33, transform_hlds__unused_args__PredTable0_32, &transform_hlds__unused_args__PredTable_34);
    }
#line 1122 "unused_args.m"
    {
#line 1122 "unused_args.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__unused_args__PredTable_34, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_35, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_36);
#line 1122 "unused_args.m"
      return;
    }
#line 1103 "unused_args.m"
  }
#line 1098 "unused_args.m"
}

#line 1093 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_4(
#line 1093 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1093 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 1093 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 1093 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3)
#line 1093 "unused_args.m"
{
#line 1093 "unused_args.m"
  {
#line 1093 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1093 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv3_STATE_VARIABLE_ModuleInfo_36;

#line 1093 "unused_args.m"
    {
#line 1093 "unused_args.m"
      transform_hlds__unused_args__make_intermod_proc_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 9))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv3_STATE_VARIABLE_ModuleInfo_36);
    }
#line 1093 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv3_STATE_VARIABLE_ModuleInfo_36));
#line 1093 "unused_args.m"
  }
#line 1093 "unused_args.m"
}

#line 1026 "unused_args.m"
static MR_Box MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_3(
#line 1026 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1026 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1)
#line 1026 "unused_args.m"
{
#line 1026 "unused_args.m"
  {
#line 1026 "unused_args.m"
    MR_Box transform_hlds__unused_args__wrapper_arg_2;
#line 1026 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1026 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv2_HeadVar__2_2;

#line 1026 "unused_args.m"
    {
#line 1026 "unused_args.m"
      transform_hlds__unused_args__conv2_HeadVar__2_2 = transform_hlds__unused_args__get_unused_args_1_f_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 1026 "unused_args.m"
    transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv2_HeadVar__2_2));
#line 1026 "unused_args.m"
    return transform_hlds__unused_args__wrapper_arg_2;
#line 1026 "unused_args.m"
  }
#line 1026 "unused_args.m"
}

#line 1021 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_2(
#line 1021 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1021 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1)
#line 1021 "unused_args.m"
{
#line 1021 "unused_args.m"
  {
#line 1021 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 1021 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;

#line 1021 "unused_args.m"
    {
#line 1021 "unused_args.m"
      return transform_hlds__unused_args__succeeded = transform_hlds__unused_args__IntroducedFrom__pred__unused_args_create_new_pred__1021__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 1021 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 1021 "unused_args.m"
  }
#line 1021 "unused_args.m"
}

#line 1014 "unused_args.m"
static MR_Box MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_1(
#line 1014 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 1014 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1)
#line 1014 "unused_args.m"
{
#line 1014 "unused_args.m"
  {
#line 1014 "unused_args.m"
    MR_Box transform_hlds__unused_args__wrapper_arg_2;
#line 1014 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 1014 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv1_HeadVar__2_55;

#line 1014 "unused_args.m"
    {
#line 1014 "unused_args.m"
      transform_hlds__unused_args__conv1_HeadVar__2_55 = transform_hlds__unused_args__IntroducedFrom__func__unused_args_create_new_pred__1014__1_1_f_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1));
    }
#line 1014 "unused_args.m"
    transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv1_HeadVar__2_55));
#line 1014 "unused_args.m"
    return transform_hlds__unused_args__wrapper_arg_2;
#line 1014 "unused_args.m"
  }
#line 1014 "unused_args.m"
}

#line 992 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0(
#line 992 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgInfo_7,
#line 992 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 992 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_0_46,
#line 992 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_47,
#line 992 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48,
#line 992 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_49)
#line 992 "unused_args.m"
{
#line 997 "unused_args.m"
  {
#line 997 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 997 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 997 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeInfo_74_74 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[0];
#line 997 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 997 "unused_args.m"
    MR_Integer transform_hlds__unused_args__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 997 "unused_args.m"
    MR_Word transform_hlds__unused_args__UnusedArgs_12;
#line 997 "unused_args.m"
    MR_Word transform_hlds__unused_args__OrigPredInfo_13;
#line 997 "unused_args.m"
    MR_Word transform_hlds__unused_args__OrigProcInfo_14;
#line 997 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredModule_15;
#line 997 "unused_args.m"
    MR_Word transform_hlds__unused_args__Globals_16;
#line 997 "unused_args.m"
    MR_Word transform_hlds__unused_args__Intermod_17;
#line 997 "unused_args.m"
    MR_Word transform_hlds__unused_args__IntermodResultsTriples_21;
#line 997 "unused_args.m"
    MR_Word transform_hlds__unused_args__IntermodOldArgLists_29;
#line 998 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv0_UnusedArgs_12;

#line 998 "unused_args.m"
    {
#line 998 "unused_args.m"
      mercury__map__lookup_3_p_0(transform_hlds__unused_args__TypeCtorInfo_73_73, transform_hlds__unused_args__TypeInfo_74_74, transform_hlds__unused_args__UnusedArgInfo_7, ((MR_Box) (transform_hlds__unused_args__HeadVar__2_2)), &transform_hlds__unused_args__conv0_UnusedArgs_12);
    }
#line 998 "unused_args.m"
    transform_hlds__unused_args__UnusedArgs_12 = ((MR_Word) transform_hlds__unused_args__conv0_UnusedArgs_12);
#line 999 "unused_args.m"
    {
#line 999 "unused_args.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48, transform_hlds__unused_args__PredId_8, transform_hlds__unused_args__ProcId_9, &transform_hlds__unused_args__OrigPredInfo_13, &transform_hlds__unused_args__OrigProcInfo_14);
    }
#line 1001 "unused_args.m"
    {
#line 1001 "unused_args.m"
      transform_hlds__unused_args__PredModule_15 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__unused_args__OrigPredInfo_13);
    }
#line 1003 "unused_args.m"
    {
#line 1003 "unused_args.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48, &transform_hlds__unused_args__Globals_16);
    }
#line 1004 "unused_args.m"
    {
#line 1004 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_16, (MR_Integer) 334, &transform_hlds__unused_args__Intermod_17);
    }
#line 1028 "unused_args.m"
#line 1028 "unused_args.m"
    switch (transform_hlds__unused_args__Intermod_17) {
#line 1028 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1028 "unused_args.m"
      case (MR_Integer) 0:
#line 1029 "unused_args.m"
        {
#line 1030 "unused_args.m"
          transform_hlds__unused_args__IntermodResultsTriples_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1031 "unused_args.m"
          transform_hlds__unused_args__IntermodOldArgLists_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1029 "unused_args.m"
        }
#line 1028 "unused_args.m"
        break;
#line 1028 "unused_args.m"
      case (MR_Integer) 1:
#line 1006 "unused_args.m"
        {
#line 1006 "unused_args.m"
          MR_Word transform_hlds__unused_args__TypeCtorInfo_77_77;
#line 1006 "unused_args.m"
          MR_Word transform_hlds__unused_args__AnalysisInfo0_18;
#line 1006 "unused_args.m"
          MR_Word transform_hlds__unused_args__ModuleId_19;
#line 1006 "unused_args.m"
          MR_Word transform_hlds__unused_args__FuncId_20;
#line 1006 "unused_args.m"
          MR_Word transform_hlds__unused_args__IntermodOldAnswers_22;
#line 1006 "unused_args.m"
          MR_Integer transform_hlds__unused_args__PredArity_24;
#line 1006 "unused_args.m"
          MR_Word transform_hlds__unused_args__FuncInfo_25;
#line 1006 "unused_args.m"
          MR_Word transform_hlds__unused_args__Answer_26;
#line 1006 "unused_args.m"
          MR_Word transform_hlds__unused_args__FilterUnused_27;
#line 1006 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_59_59;

#line 1007 "unused_args.m"
          {
#line 1007 "unused_args.m"
            hlds__hlds_module__module_info_get_analysis_info_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48, &transform_hlds__unused_args__AnalysisInfo0_18);
          }
#line 1009 "unused_args.m"
          {
#line 1009 "unused_args.m"
            transform_hlds__mmc_analysis__module_name_func_id_from_pred_info_4_p_0(transform_hlds__unused_args__OrigPredInfo_13, transform_hlds__unused_args__ProcId_9, &transform_hlds__unused_args__ModuleId_19, &transform_hlds__unused_args__FuncId_20);
          }
#line 1011 "unused_args.m"
          {
#line 1011 "unused_args.m"
            analysis__lookup_results_4_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_4[0], transform_hlds__unused_args__AnalysisInfo0_18, transform_hlds__unused_args__ModuleId_19, transform_hlds__unused_args__FuncId_20, &transform_hlds__unused_args__IntermodResultsTriples_21);
          }
#line 13359 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__TypeCtorInfo_77_77 = (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0;
#line 1014 "unused_args.m"
          {
#line 1014 "unused_args.m"
            transform_hlds__unused_args__IntermodOldAnswers_22 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__unused_args_scalar_common_2[4], transform_hlds__unused_args__TypeCtorInfo_77_77, (MR_Word) &transform_hlds__unused_args_scalar_common_2[10], transform_hlds__unused_args__IntermodResultsTriples_21);
          }
#line 1017 "unused_args.m"
          {
#line 1017 "unused_args.m"
            transform_hlds__unused_args__PredArity_24 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__unused_args__OrigPredInfo_13);
          }
#line 1018 "unused_args.m"
          transform_hlds__unused_args__FuncInfo_25 = (MR_Word) transform_hlds__unused_args__PredArity_24;
#line 1019 "unused_args.m"
          transform_hlds__unused_args__Answer_26 = (MR_Word) transform_hlds__unused_args__UnusedArgs_12;
#line 1021 "unused_args.m"
          {
#line 1021 "unused_args.m"
            transform_hlds__unused_args__FilterUnused_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1021 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FilterUnused_27, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_4[4]));
#line 1021 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FilterUnused_27, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_2));
#line 1021 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FilterUnused_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1021 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FilterUnused_27, 3) = ((MR_Box) (transform_hlds__unused_args__FuncInfo_25));
#line 1021 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__FilterUnused_27, 4) = ((MR_Box) (transform_hlds__unused_args__Answer_26));
#line 1021 "unused_args.m"
          }
#line 1027 "unused_args.m"
          {
#line 1027 "unused_args.m"
            transform_hlds__unused_args__V_59_59 = mercury__list__filter_2_f_0(transform_hlds__unused_args__TypeCtorInfo_77_77, transform_hlds__unused_args__FilterUnused_27, transform_hlds__unused_args__IntermodOldAnswers_22);
          }
#line 1026 "unused_args.m"
          {
#line 1026 "unused_args.m"
            transform_hlds__unused_args__IntermodOldArgLists_29 = mercury__list__map_2_f_0(transform_hlds__unused_args__TypeCtorInfo_77_77, transform_hlds__unused_args__TypeInfo_74_74, (MR_Word) &transform_hlds__unused_args_scalar_common_2[11], transform_hlds__unused_args__V_59_59);
          }
#line 1006 "unused_args.m"
        }
#line 1028 "unused_args.m"
        break;
#line 1028 "unused_args.m"
    }
#line 1036 "unused_args.m"
    if ((transform_hlds__unused_args__UnusedArgs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1035 "unused_args.m"
      {
#line 1035 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_47 = transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_0_46;
#line 1035 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_49 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48;
#line 1035 "unused_args.m"
      }
#line 1036 "unused_args.m"
    else
#line 1037 "unused_args.m"
      {
#line 1037 "unused_args.m"
        MR_Word transform_hlds__unused_args__Status0_32;
#line 1037 "unused_args.m"
        MR_Word transform_hlds__unused_args__Status_35;
#line 1037 "unused_args.m"
        MR_Word transform_hlds__unused_args__NewPredInfo0_36;
#line 1037 "unused_args.m"
        MR_String transform_hlds__unused_args__NewPredName_37;
#line 1037 "unused_args.m"
        MR_Word transform_hlds__unused_args__NewProcs0_38;
#line 1037 "unused_args.m"
        MR_Word transform_hlds__unused_args__NewProcs_39;
#line 1037 "unused_args.m"
        MR_Word transform_hlds__unused_args__NewPredInfo_40;
#line 1037 "unused_args.m"
        MR_Word transform_hlds__unused_args__PredTable0_41;
#line 1037 "unused_args.m"
        MR_Word transform_hlds__unused_args__NewPredId_42;
#line 1037 "unused_args.m"
        MR_Word transform_hlds__unused_args__PredTable_43;
#line 1037 "unused_args.m"
        MR_Word transform_hlds__unused_args__PredSymName_44;
#line 1037 "unused_args.m"
        MR_Word transform_hlds__unused_args__ForwardingProcInfo_45;
#line 1037 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_62_62;
#line 1037 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_64_64;
#line 1037 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_66_66;
#line 1037 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_67_67;
#line 1041 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_33_33;
#line 1041 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_34_34;
#line 1092 "unused_args.m"
        MR_Box transform_hlds__unused_args__conv4_STATE_VARIABLE_ModuleInfo_49;

#line 1038 "unused_args.m"
        {
#line 1038 "unused_args.m"
          hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__unused_args__OrigPredInfo_13, &transform_hlds__unused_args__Status0_32);
        }
#line 1040 "unused_args.m"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__Status0_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1040 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1040 "unused_args.m"
          {
#line 1041 "unused_args.m"
            transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__IntermodResultsTriples_21)) == (MR_mktag((MR_Integer) 1)));
#line 1041 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1041 "unused_args.m"
              {
#line 1041 "unused_args.m"
                transform_hlds__unused_args__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__IntermodResultsTriples_21, (MR_Integer) 0)));
#line 1041 "unused_args.m"
                transform_hlds__unused_args__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__IntermodResultsTriples_21, (MR_Integer) 1)));
#line 1042 "unused_args.m"
                transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__IntermodOldArgLists_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1041 "unused_args.m"
              }
#line 1040 "unused_args.m"
          }
#line 1049 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 1048 "unused_args.m"
          transform_hlds__unused_args__Status_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1049 "unused_args.m"
        else
#line 1055 "unused_args.m"
          {
#line 1050 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_60_60;

#line 1050 "unused_args.m"
            {
#line 1050 "unused_args.m"
              transform_hlds__unused_args__V_60_60 = parse_tree__status__status_is_exported_1_f_0(transform_hlds__unused_args__Status0_32);
            }
#line 1050 "unused_args.m"
            transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_60_60 == (MR_Integer) 1);
#line 1055 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 1054 "unused_args.m"
              transform_hlds__unused_args__Status_35 = transform_hlds__unused_args__Status0_32;
#line 1055 "unused_args.m"
            else
#line 1056 "unused_args.m"
              transform_hlds__unused_args__Status_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 1055 "unused_args.m"
          }
#line 1058 "unused_args.m"
        {
#line 1058 "unused_args.m"
          transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(transform_hlds__unused_args__UnusedArgs_12, transform_hlds__unused_args__Status_35, transform_hlds__unused_args__HeadVar__2_2, transform_hlds__unused_args__OrigPredInfo_13, &transform_hlds__unused_args__NewPredInfo0_36);
        }
#line 1060 "unused_args.m"
        {
#line 1060 "unused_args.m"
          transform_hlds__unused_args__NewPredName_37 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__unused_args__NewPredInfo0_36);
        }
#line 1061 "unused_args.m"
        {
#line 1061 "unused_args.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__unused_args__NewPredInfo0_36, &transform_hlds__unused_args__NewProcs0_38);
        }
#line 1065 "unused_args.m"
        {
#line 1065 "unused_args.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__unused_args__ProcId_9, ((MR_Box) (transform_hlds__unused_args__OrigProcInfo_14)), transform_hlds__unused_args__NewProcs0_38, &transform_hlds__unused_args__NewProcs_39);
        }
#line 1066 "unused_args.m"
        {
#line 1066 "unused_args.m"
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__unused_args__NewProcs_39, transform_hlds__unused_args__NewPredInfo0_36, &transform_hlds__unused_args__NewPredInfo_40);
        }
#line 1069 "unused_args.m"
        {
#line 1069 "unused_args.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48, &transform_hlds__unused_args__PredTable0_41);
        }
#line 1070 "unused_args.m"
        {
#line 1070 "unused_args.m"
          hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__unused_args__NewPredInfo_40, &transform_hlds__unused_args__NewPredId_42, transform_hlds__unused_args__PredTable0_41, &transform_hlds__unused_args__PredTable_43);
        }
#line 1071 "unused_args.m"
        {
#line 1071 "unused_args.m"
          hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__unused_args__PredTable_43, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_48, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_62_62);
        }
#line 1074 "unused_args.m"
        {
#line 1074 "unused_args.m"
          transform_hlds__unused_args__PredSymName_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1074 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__PredSymName_44, 0) = ((MR_Box) (transform_hlds__unused_args__PredModule_15));
#line 1074 "unused_args.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__PredSymName_44, 1) = ((MR_Box) (transform_hlds__unused_args__NewPredName_37));
#line 1074 "unused_args.m"
        }
#line 1076 "unused_args.m"
        {
#line 1076 "unused_args.m"
          transform_hlds__unused_args__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1076 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_64_64, 0) = ((MR_Box) (transform_hlds__unused_args__NewPredId_42));
#line 1076 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_64_64, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_9));
#line 1076 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_64_64, 2) = ((MR_Box) (transform_hlds__unused_args__PredSymName_44));
#line 1076 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_64_64, 3) = ((MR_Box) (transform_hlds__unused_args__UnusedArgs_12));
#line 1076 "unused_args.m"
        }
#line 1075 "unused_args.m"
        {
#line 1075 "unused_args.m"
          mercury__map__det_insert_4_p_0(transform_hlds__unused_args__TypeCtorInfo_73_73, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0, ((MR_Box) (transform_hlds__unused_args__HeadVar__2_2)), ((MR_Box) (transform_hlds__unused_args__V_64_64)), transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_0_46, transform_hlds__unused_args__STATE_VARIABLE_ProcCallInfo_47);
        }
#line 1080 "unused_args.m"
        {
#line 1080 "unused_args.m"
          transform_hlds__unused_args__create_call_goal_7_p_0(transform_hlds__unused_args__UnusedArgs_12, transform_hlds__unused_args__NewPredId_42, transform_hlds__unused_args__ProcId_9, transform_hlds__unused_args__PredModule_15, transform_hlds__unused_args__NewPredName_37, transform_hlds__unused_args__OrigProcInfo_14, &transform_hlds__unused_args__ForwardingProcInfo_45);
        }
#line 1082 "unused_args.m"
        {
#line 1082 "unused_args.m"
          hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__unused_args__PredId_8, transform_hlds__unused_args__ProcId_9, transform_hlds__unused_args__OrigPredInfo_13, transform_hlds__unused_args__ForwardingProcInfo_45, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_62_62, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_66_66);
        }
#line 1093 "unused_args.m"
        {
#line 1093 "unused_args.m"
          transform_hlds__unused_args__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 1093 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_67_67, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_8[0]));
#line 1093 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_67_67, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_4));
#line 1093 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1093 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_67_67, 3) = ((MR_Box) (transform_hlds__unused_args__PredId_8));
#line 1093 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_67_67, 4) = ((MR_Box) (transform_hlds__unused_args__NewPredId_42));
#line 1093 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_67_67, 5) = ((MR_Box) (transform_hlds__unused_args__ProcId_9));
#line 1093 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_67_67, 6) = ((MR_Box) (transform_hlds__unused_args__NewPredName_37));
#line 1093 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_67_67, 7) = ((MR_Box) (transform_hlds__unused_args__OrigPredInfo_13));
#line 1093 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_67_67, 8) = ((MR_Box) (transform_hlds__unused_args__OrigProcInfo_14));
#line 1093 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_67_67, 9) = ((MR_Box) (transform_hlds__unused_args__UnusedArgs_12));
#line 1093 "unused_args.m"
        }
#line 1092 "unused_args.m"
        {
#line 1092 "unused_args.m"
          mercury__list__foldl_4_p_0(transform_hlds__unused_args__TypeInfo_74_74, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__unused_args__V_67_67, transform_hlds__unused_args__IntermodOldArgLists_29, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_66_66)), &transform_hlds__unused_args__conv4_STATE_VARIABLE_ModuleInfo_49);
        }
#line 1092 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_49 = ((MR_Word) transform_hlds__unused_args__conv4_STATE_VARIABLE_ModuleInfo_49);
#line 1037 "unused_args.m"
      }
#line 997 "unused_args.m"
  }
#line 992 "unused_args.m"
}

#line 956 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__get_unused_arg_info_5_p_0(
#line 956 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_1,
#line 956 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 956 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_3,
#line 956 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_0_4,
#line 956 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_5)
#line 956 "unused_args.m"
{
#line 959 "unused_args.m"
  while (MR_TRUE)
#line 959 "unused_args.m"
    {
#line 959 "unused_args.m"
      /* tailcall optimized into a loop */
#line 959 "unused_args.m"
      {
#line 959 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 959 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 959 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_5 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_0_4;
#line 959 "unused_args.m"
        else
#line 961 "unused_args.m"
          {
#line 961 "unused_args.m"
            MR_Word transform_hlds__unused_args__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 961 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredProc_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 961 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredProcs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 961 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredProc_12, (MR_Integer) 0)));
#line 961 "unused_args.m"
            MR_Integer transform_hlds__unused_args__ProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredProc_12, (MR_Integer) 1)));
#line 961 "unused_args.m"
            MR_Word transform_hlds__unused_args__LocalVarUsage_18;
#line 961 "unused_args.m"
            MR_Word transform_hlds__unused_args__ProcInfo_20;
#line 961 "unused_args.m"
            MR_Word transform_hlds__unused_args__HeadVars_21;
#line 961 "unused_args.m"
            MR_Word transform_hlds__unused_args__UnusedArgs_22;
#line 961 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_26_26;
#line 963 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv0_LocalVarUsage_18;
#line 964 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_19_19;

#line 963 "unused_args.m"
            {
#line 963 "unused_args.m"
              mercury__map__lookup_3_p_0(transform_hlds__unused_args__TypeCtorInfo_28_28, (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], transform_hlds__unused_args__VarUsage_3, ((MR_Box) (transform_hlds__unused_args__PredProc_12)), &transform_hlds__unused_args__conv0_LocalVarUsage_18);
            }
#line 963 "unused_args.m"
            transform_hlds__unused_args__LocalVarUsage_18 = ((MR_Word) transform_hlds__unused_args__conv0_LocalVarUsage_18);
#line 964 "unused_args.m"
            {
#line 964 "unused_args.m"
              hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__unused_args__ModuleInfo_1, transform_hlds__unused_args__PredId_16, transform_hlds__unused_args__ProcId_17, &transform_hlds__unused_args__V_19_19, &transform_hlds__unused_args__ProcInfo_20);
            }
#line 965 "unused_args.m"
            {
#line 965 "unused_args.m"
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__ProcInfo_20, &transform_hlds__unused_args__HeadVars_21);
            }
#line 966 "unused_args.m"
            {
#line 966 "unused_args.m"
              transform_hlds__unused_args__get_unused_arg_nos_4_p_0(transform_hlds__unused_args__LocalVarUsage_18, transform_hlds__unused_args__HeadVars_21, (MR_Integer) 1, &transform_hlds__unused_args__UnusedArgs_22);
            }
#line 967 "unused_args.m"
            {
#line 967 "unused_args.m"
              mercury__map__det_insert_4_p_0(transform_hlds__unused_args__TypeCtorInfo_28_28, (MR_Word) &transform_hlds__unused_args_scalar_common_1[0], ((MR_Box) (transform_hlds__unused_args__PredProc_12)), ((MR_Box) (transform_hlds__unused_args__UnusedArgs_22)), transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_0_4, &transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_26_26);
            }
#line 968 "unused_args.m"
            /* direct tailcall eliminated */
#line 968 "unused_args.m"
            {
#line 968 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__2__tmp_copy_2 = transform_hlds__unused_args__PredProcs_13;
#line 968 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_0__tmp_copy_4 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_26_26;

#line 968 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_0_4 = transform_hlds__unused_args__STATE_VARIABLE_UnusedArgInfo_0__tmp_copy_4;
#line 968 "unused_args.m"
              transform_hlds__unused_args__HeadVar__2_2 = transform_hlds__unused_args__HeadVar__2__tmp_copy_2;
#line 968 "unused_args.m"
            }
#line 968 "unused_args.m"
            continue;
#line 961 "unused_args.m"
          }
#line 959 "unused_args.m"
      }
#line 959 "unused_args.m"
      break;
#line 959 "unused_args.m"
    }
#line 956 "unused_args.m"
}

#line 928 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_1(
#line 928 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 928 "unused_args.m"
{
#line 928 "unused_args.m"
  {
#line 928 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 928 "unused_args.m"
    MR_builtin_longjmp((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_0, 1);
#line 928 "unused_args.m"
  }
#line 928 "unused_args.m"
}

#line 928 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_3(
#line 928 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 928 "unused_args.m"
{
#line 928 "unused_args.m"
  {
#line 928 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 928 "unused_args.m"
    (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__Argument_34 = ((MR_Word) (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv1_Argument_34);
#line 928 "unused_args.m"
    {
#line 928 "unused_args.m"
      transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_2(transform_hlds__unused_args__env_ptr);
#line 928 "unused_args.m"
      return;
    }
#line 928 "unused_args.m"
  }
#line 928 "unused_args.m"
}

#line 928 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_2(
#line 928 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 928 "unused_args.m"
{
#line 928 "unused_args.m"
  {
#line 928 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 928 "unused_args.m"
    {
#line 570 "unused_args.m"
      MR_Word transform_hlds__unused_args__TypeInfo_10_49;
#line 570 "unused_args.m"
      MR_Word transform_hlds__unused_args__TypeCtorInfo_11_50;
#line 570 "unused_args.m"
      MR_Word transform_hlds__unused_args__UsageInfos_46;
#line 570 "unused_args.m"
      MR_Box transform_hlds__unused_args__conv2_UsageInfos_46;

#line 929 "unused_args.m"
      (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__PredProc_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__Argument_34, (MR_Integer) 0)));
#line 929 "unused_args.m"
      (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgVar_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__Argument_34, (MR_Integer) 1)));
#line 570 "unused_args.m"
      {
#line 570 "unused_args.m"
        (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__VarUsage_1, ((MR_Box) ((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__PredProc_23)), &transform_hlds__unused_args__conv2_UsageInfos_46);
      }
#line 570 "unused_args.m"
      if ((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
#line 570 "unused_args.m"
        {
#line 570 "unused_args.m"
          transform_hlds__unused_args__UsageInfos_46 = ((MR_Word) transform_hlds__unused_args__conv2_UsageInfos_46);
#line 570 "unused_args.m"
          (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_TRUE;
#line 570 "unused_args.m"
        }
#line 570 "unused_args.m"
      if ((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
#line 570 "unused_args.m"
        {
#line 13839 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__TypeInfo_10_49 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 13841 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__TypeCtorInfo_11_50 = (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0;
#line 571 "unused_args.m"
          {
#line 571 "unused_args.m"
            (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = mercury__map__contains_2_p_0(transform_hlds__unused_args__TypeInfo_10_49, transform_hlds__unused_args__TypeCtorInfo_11_50, transform_hlds__unused_args__UsageInfos_46, ((MR_Box) ((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgVar_24)));
          }
#line 570 "unused_args.m"
        }
#line 569 "unused_args.m"
      (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = !((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded);
#line 569 "unused_args.m"
      if ((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
#line 569 "unused_args.m"
        {
#line 569 "unused_args.m"
          transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_1(transform_hlds__unused_args__env_ptr);
#line 569 "unused_args.m"
          return;
        }
#line 928 "unused_args.m"
    }
#line 928 "unused_args.m"
  }
#line 928 "unused_args.m"
}

#line 928 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_4(
#line 928 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 928 "unused_args.m"
{
#line 928 "unused_args.m"
  {
#line 928 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 928 "unused_args.m"
    if (MR_builtin_setjmp((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_0) == 0)
#line 928 "unused_args.m"
      {
#line 928 "unused_args.m"
        {
#line 928 "unused_args.m"
          {
#line 928 "unused_args.m"
            mercury__set__member_2_p_1((MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0, &(transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv1_Argument_34, (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgDep0_21, transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_3, transform_hlds__unused_args__env_ptr);
          }
#line 928 "unused_args.m"
        }
#line 928 "unused_args.m"
        (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_FALSE;
#line 928 "unused_args.m"
      }
#line 928 "unused_args.m"
    else
#line 928 "unused_args.m"
      (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_TRUE;
#line 928 "unused_args.m"
  }
#line 928 "unused_args.m"
}

#line 936 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_5(
#line 936 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 936 "unused_args.m"
{
#line 936 "unused_args.m"
  {
#line 936 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 936 "unused_args.m"
    MR_builtin_longjmp((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_1, 1);
#line 936 "unused_args.m"
  }
#line 936 "unused_args.m"
}

#line 936 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_7(
#line 936 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 936 "unused_args.m"
{
#line 936 "unused_args.m"
  {
#line 936 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 936 "unused_args.m"
    (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__X_35 = ((MR_Word) (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv3_X_35);
#line 936 "unused_args.m"
    {
#line 936 "unused_args.m"
      transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_6(transform_hlds__unused_args__env_ptr);
#line 936 "unused_args.m"
      return;
    }
#line 936 "unused_args.m"
  }
#line 936 "unused_args.m"
}

#line 936 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_6(
#line 936 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 936 "unused_args.m"
{
#line 936 "unused_args.m"
  {
#line 936 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 936 "unused_args.m"
    {
#line 577 "unused_args.m"
      {
#line 577 "unused_args.m"
        (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = mercury__map__contains_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5, ((MR_Box) ((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__X_35)));
      }
#line 577 "unused_args.m"
      (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = !((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded);
#line 577 "unused_args.m"
      if ((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
#line 577 "unused_args.m"
        {
#line 577 "unused_args.m"
          transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_5(transform_hlds__unused_args__env_ptr);
#line 577 "unused_args.m"
          return;
        }
#line 936 "unused_args.m"
    }
#line 936 "unused_args.m"
  }
#line 936 "unused_args.m"
}

#line 936 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_8(
#line 936 "unused_args.m"
  void * transform_hlds__unused_args__env_ptr_arg)
#line 936 "unused_args.m"
{
#line 936 "unused_args.m"
  {
#line 936 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * transform_hlds__unused_args__env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) transform_hlds__unused_args__env_ptr_arg;

#line 936 "unused_args.m"
    if (MR_builtin_setjmp((transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_1) == 0)
#line 936 "unused_args.m"
      {
#line 936 "unused_args.m"
        {
#line 936 "unused_args.m"
          {
#line 936 "unused_args.m"
            mercury__set__member_2_p_1((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], &(transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv3_X_35, (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__VarDep0_20, transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_7, transform_hlds__unused_args__env_ptr);
          }
#line 936 "unused_args.m"
        }
#line 936 "unused_args.m"
        (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_FALSE;
#line 936 "unused_args.m"
      }
#line 936 "unused_args.m"
    else
#line 936 "unused_args.m"
      (transform_hlds__unused_args__env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_TRUE;
#line 936 "unused_args.m"
  }
#line 936 "unused_args.m"
}

#line 916 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0(
#line 916 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarUsage_1,
#line 916 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 916 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_3,
#line 916 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_4,
#line 916 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_LocalVars_0_5,
#line 916 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_LocalVars_6)
#line 916 "unused_args.m"
{
#line 916 "unused_args.m"
  {
#line 916 "unused_args.m"
    struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s transform_hlds__unused_args__env;

#line 916 "unused_args.m"
    (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__VarUsage_1 = transform_hlds__unused_args__VarUsage_1;
#line 916 "unused_args.m"
    (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5 = transform_hlds__unused_args__STATE_VARIABLE_LocalVars_0_5;
#line 919 "unused_args.m"
    while (MR_TRUE)
#line 919 "unused_args.m"
      {
#line 919 "unused_args.m"
        /* tailcall optimized into a loop */
#line 919 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 919 "unused_args.m"
          {
#line 919 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_LocalVars_6 = (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5;
#line 919 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_Changed_4 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_3;
#line 919 "unused_args.m"
          }
#line 919 "unused_args.m"
        else
#line 920 "unused_args.m"
          {
#line 920 "unused_args.m"
            MR_Word transform_hlds__unused_args__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 920 "unused_args.m"
            MR_Word transform_hlds__unused_args__Vars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 920 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_LocalVars_30_30;
#line 920 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_31_31;
#line 951 "unused_args.m"
            MR_Word transform_hlds__unused_args__Usage_19;
#line 609 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv0_Usage_19;

#line 609 "unused_args.m"
            {
#line 609 "unused_args.m"
              (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5, ((MR_Box) (transform_hlds__unused_args__Var_15)), &transform_hlds__unused_args__conv0_Usage_19);
            }
#line 609 "unused_args.m"
            if ((transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
#line 609 "unused_args.m"
              {
#line 609 "unused_args.m"
                transform_hlds__unused_args__Usage_19 = ((MR_Word) transform_hlds__unused_args__conv0_Usage_19);
#line 609 "unused_args.m"
                (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_TRUE;
#line 609 "unused_args.m"
              }
#line 951 "unused_args.m"
            if ((transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
#line 922 "unused_args.m"
              {
#line 922 "unused_args.m"
                (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__VarDep0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Usage_19, (MR_Integer) 0)));
#line 922 "unused_args.m"
                (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgDep0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Usage_19, (MR_Integer) 1)));
#line 928 "unused_args.m"
                {
#line 928 "unused_args.m"
                  transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_4(&transform_hlds__unused_args__env);
                }
#line 932 "unused_args.m"
                if (!((transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded))
#line 936 "unused_args.m"
                  {
#line 936 "unused_args.m"
                    {
#line 936 "unused_args.m"
                      transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_8(&transform_hlds__unused_args__env);
                    }
#line 936 "unused_args.m"
                  }
#line 948 "unused_args.m"
                if ((transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
#line 946 "unused_args.m"
                  {
#line 603 "unused_args.m"
                    {
#line 603 "unused_args.m"
                      mercury__map__delete_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, ((MR_Box) (transform_hlds__unused_args__Var_15)), (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5, &transform_hlds__unused_args__STATE_VARIABLE_LocalVars_30_30);
                    }
#line 947 "unused_args.m"
                    transform_hlds__unused_args__STATE_VARIABLE_Changed_31_31 = (MR_Integer) 1;
#line 946 "unused_args.m"
                  }
#line 948 "unused_args.m"
                else
#line 949 "unused_args.m"
                  {
#line 949 "unused_args.m"
                    transform_hlds__unused_args__STATE_VARIABLE_LocalVars_30_30 = (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5;
#line 949 "unused_args.m"
                    transform_hlds__unused_args__STATE_VARIABLE_Changed_31_31 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_3;
#line 949 "unused_args.m"
                  }
#line 922 "unused_args.m"
              }
#line 951 "unused_args.m"
            else
#line 952 "unused_args.m"
              {
#line 952 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_LocalVars_30_30 = (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5;
#line 952 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_Changed_31_31 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_3;
#line 952 "unused_args.m"
              }
#line 954 "unused_args.m"
            /* direct tailcall eliminated */
#line 954 "unused_args.m"
            {
#line 954 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__2__tmp_copy_2 = transform_hlds__unused_args__Vars_16;
#line 954 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0__tmp_copy_3 = transform_hlds__unused_args__STATE_VARIABLE_Changed_31_31;
#line 954 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_LocalVars_0__tmp_copy_5 = transform_hlds__unused_args__STATE_VARIABLE_LocalVars_30_30;

#line 954 "unused_args.m"
              (transform_hlds__unused_args__env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5 = transform_hlds__unused_args__STATE_VARIABLE_LocalVars_0__tmp_copy_5;
#line 954 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_0_3 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0__tmp_copy_3;
#line 954 "unused_args.m"
              transform_hlds__unused_args__HeadVar__2_2 = transform_hlds__unused_args__HeadVar__2__tmp_copy_2;
#line 954 "unused_args.m"
            }
#line 954 "unused_args.m"
            continue;
#line 920 "unused_args.m"
          }
#line 919 "unused_args.m"
        break;
#line 919 "unused_args.m"
      }
#line 916 "unused_args.m"
  }
#line 916 "unused_args.m"
}

#line 888 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_single_pass_5_p_0(
#line 888 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 888 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0_2,
#line 888 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Changed_3,
#line 888 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4,
#line 888 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_5)
#line 888 "unused_args.m"
{
#line 891 "unused_args.m"
  while (MR_TRUE)
#line 891 "unused_args.m"
    {
#line 891 "unused_args.m"
      /* tailcall optimized into a loop */
#line 891 "unused_args.m"
      {
#line 891 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 891 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 891 "unused_args.m"
          {
#line 891 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_VarUsage_5 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4;
#line 891 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_Changed_3 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_2;
#line 891 "unused_args.m"
          }
#line 891 "unused_args.m"
        else
#line 892 "unused_args.m"
          {
#line 892 "unused_args.m"
            MR_Word transform_hlds__unused_args__TypeCtorInfo_20_38 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 892 "unused_args.m"
            MR_Word transform_hlds__unused_args__TypeInfo_21_39 = (MR_Word) &transform_hlds__unused_args_scalar_common_2[1];
#line 892 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredProc_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 892 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredProcs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 892 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_20_20;
#line 892 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_21_21;
#line 892 "unused_args.m"
            MR_Word transform_hlds__unused_args__LocalUsages0_31;
#line 892 "unused_args.m"
            MR_Word transform_hlds__unused_args__Vars_32;
#line 892 "unused_args.m"
            MR_Word transform_hlds__unused_args__LocalChanged_33;
#line 892 "unused_args.m"
            MR_Word transform_hlds__unused_args__LocalUsages_34;
#line 902 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv0_LocalUsages0_31;

#line 902 "unused_args.m"
            {
#line 902 "unused_args.m"
              mercury__map__lookup_3_p_0(transform_hlds__unused_args__TypeCtorInfo_20_38, transform_hlds__unused_args__TypeInfo_21_39, transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4, ((MR_Box) (transform_hlds__unused_args__PredProc_12)), &transform_hlds__unused_args__conv0_LocalUsages0_31);
            }
#line 902 "unused_args.m"
            transform_hlds__unused_args__LocalUsages0_31 = ((MR_Word) transform_hlds__unused_args__conv0_LocalUsages0_31);
#line 903 "unused_args.m"
            {
#line 903 "unused_args.m"
              mercury__map__keys_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__LocalUsages0_31, &transform_hlds__unused_args__Vars_32);
            }
#line 904 "unused_args.m"
            {
#line 904 "unused_args.m"
              transform_hlds__unused_args__unused_args_check_all_vars_6_p_0(transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4, transform_hlds__unused_args__Vars_32, (MR_Integer) 0, &transform_hlds__unused_args__LocalChanged_33, transform_hlds__unused_args__LocalUsages0_31, &transform_hlds__unused_args__LocalUsages_34);
            }
#line 910 "unused_args.m"
#line 910 "unused_args.m"
            switch (transform_hlds__unused_args__LocalChanged_33) {
#line 910 "unused_args.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 910 "unused_args.m"
              case (MR_Integer) 0:
#line 911 "unused_args.m"
                {
#line 911 "unused_args.m"
                  transform_hlds__unused_args__STATE_VARIABLE_Changed_20_20 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0_2;
#line 911 "unused_args.m"
                  transform_hlds__unused_args__STATE_VARIABLE_VarUsage_21_21 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4;
#line 911 "unused_args.m"
                }
#line 910 "unused_args.m"
                break;
#line 910 "unused_args.m"
              case (MR_Integer) 1:
#line 907 "unused_args.m"
                {
#line 908 "unused_args.m"
                  {
#line 908 "unused_args.m"
                    mercury__map__det_update_4_p_0(transform_hlds__unused_args__TypeCtorInfo_20_38, transform_hlds__unused_args__TypeInfo_21_39, ((MR_Box) (transform_hlds__unused_args__PredProc_12)), ((MR_Box) (transform_hlds__unused_args__LocalUsages_34)), transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4, &transform_hlds__unused_args__STATE_VARIABLE_VarUsage_21_21);
                  }
#line 909 "unused_args.m"
                  transform_hlds__unused_args__STATE_VARIABLE_Changed_20_20 = (MR_Integer) 1;
#line 907 "unused_args.m"
                }
#line 910 "unused_args.m"
                break;
#line 910 "unused_args.m"
            }
#line 894 "unused_args.m"
            /* direct tailcall eliminated */
#line 894 "unused_args.m"
            {
#line 894 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__1__tmp_copy_1 = transform_hlds__unused_args__PredProcs_13;
#line 894 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_Changed_0__tmp_copy_2 = transform_hlds__unused_args__STATE_VARIABLE_Changed_20_20;
#line 894 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_4 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_21_21;

#line 894 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_4 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_4;
#line 894 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_Changed_0_2 = transform_hlds__unused_args__STATE_VARIABLE_Changed_0__tmp_copy_2;
#line 894 "unused_args.m"
              transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__HeadVar__1__tmp_copy_1;
#line 894 "unused_args.m"
            }
#line 894 "unused_args.m"
            continue;
#line 892 "unused_args.m"
          }
#line 891 "unused_args.m"
      }
#line 891 "unused_args.m"
      break;
#line 891 "unused_args.m"
    }
#line 888 "unused_args.m"
}

#line 854 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(
#line 854 "unused_args.m"
  MR_Word transform_hlds__unused_args__Info_1,
#line 854 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 854 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3,
#line 854 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_4)
#line 854 "unused_args.m"
{
#line 857 "unused_args.m"
  while (MR_TRUE)
#line 857 "unused_args.m"
    {
#line 857 "unused_args.m"
      /* tailcall optimized into a loop */
#line 857 "unused_args.m"
      {
#line 857 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 857 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 857 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_VarDep_4 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3;
#line 857 "unused_args.m"
        else
#line 858 "unused_args.m"
          {
#line 858 "unused_args.m"
            MR_Word transform_hlds__unused_args__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 858 "unused_args.m"
            MR_Word transform_hlds__unused_args__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 858 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_15_15;

#line 859 "unused_args.m"
            {
#line 859 "unused_args.m"
              transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(transform_hlds__unused_args__Info_1, transform_hlds__unused_args__Goal_10, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_15_15);
            }
#line 860 "unused_args.m"
            /* direct tailcall eliminated */
#line 860 "unused_args.m"
            {
#line 860 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__2__tmp_copy_2 = transform_hlds__unused_args__Goals_11;
#line 860 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_3 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_15_15;

#line 860 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_3;
#line 860 "unused_args.m"
              transform_hlds__unused_args__HeadVar__2_2 = transform_hlds__unused_args__HeadVar__2__tmp_copy_2;
#line 860 "unused_args.m"
            }
#line 860 "unused_args.m"
            continue;
#line 858 "unused_args.m"
          }
#line 857 "unused_args.m"
      }
#line 857 "unused_args.m"
      break;
#line 857 "unused_args.m"
    }
#line 854 "unused_args.m"
}

#line 848 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__list_case_to_list_goal_2_p_0(
#line 848 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 848 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__2_2)
#line 848 "unused_args.m"
{
#line 850 "unused_args.m"
  {
#line 850 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 850 "unused_args.m"
    if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 850 "unused_args.m"
      *transform_hlds__unused_args__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 850 "unused_args.m"
    else
#line 851 "unused_args.m"
      {
#line 851 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goal_5;
#line 851 "unused_args.m"
        MR_Word transform_hlds__unused_args__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 851 "unused_args.m"
        MR_Word transform_hlds__unused_args__Goals_7;
#line 851 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 851 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_8_8, (MR_Integer) 0)));
#line 851 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_8_8, (MR_Integer) 1)));

#line 851 "unused_args.m"
        transform_hlds__unused_args__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_8_8, (MR_Integer) 2)));
#line 852 "unused_args.m"
        {
#line 852 "unused_args.m"
          transform_hlds__unused_args__list_case_to_list_goal_2_p_0(transform_hlds__unused_args__Cases_6, &transform_hlds__unused_args__Goals_7);
        }
#line 851 "unused_args.m"
        {
#line 851 "unused_args.m"
          MR_Word base;
#line 851 "unused_args.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 851 "unused_args.m"
          *transform_hlds__unused_args__HeadVar__2_2 = base;
#line 851 "unused_args.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__Goal_5));
#line 851 "unused_args.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__Goals_7));
#line 851 "unused_args.m"
        }
#line 851 "unused_args.m"
      }
#line 850 "unused_args.m"
  }
#line 848 "unused_args.m"
}

#line 833 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_construction_aliases_4_p_0(
#line 833 "unused_args.m"
  MR_Word transform_hlds__unused_args__Alias_1,
#line 833 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 833 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3,
#line 833 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_4)
#line 833 "unused_args.m"
{
#line 836 "unused_args.m"
  while (MR_TRUE)
#line 836 "unused_args.m"
    {
#line 836 "unused_args.m"
      /* tailcall optimized into a loop */
#line 836 "unused_args.m"
      {
#line 836 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 836 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 836 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_VarDep_4 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3;
#line 836 "unused_args.m"
        else
#line 837 "unused_args.m"
          {
#line 837 "unused_args.m"
            MR_Word transform_hlds__unused_args__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 837 "unused_args.m"
            MR_Word transform_hlds__unused_args__Vars_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 837 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_19_19;
#line 843 "unused_args.m"
            MR_Word transform_hlds__unused_args__VarInfo0_13;
#line 609 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv0_VarInfo0_13;

#line 609 "unused_args.m"
            {
#line 609 "unused_args.m"
              transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3, ((MR_Box) (transform_hlds__unused_args__Var_10)), &transform_hlds__unused_args__conv0_VarInfo0_13);
            }
#line 609 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 609 "unused_args.m"
              {
#line 609 "unused_args.m"
                transform_hlds__unused_args__VarInfo0_13 = ((MR_Word) transform_hlds__unused_args__conv0_VarInfo0_13);
#line 609 "unused_args.m"
                transform_hlds__unused_args__succeeded = MR_TRUE;
#line 609 "unused_args.m"
              }
#line 843 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 839 "unused_args.m"
              {
#line 839 "unused_args.m"
                MR_Word transform_hlds__unused_args__TypeInfo_21_21 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 839 "unused_args.m"
                MR_Word transform_hlds__unused_args__VarDep_12;
#line 839 "unused_args.m"
                MR_Word transform_hlds__unused_args__VarDep0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInfo0_13, (MR_Integer) 0)));
#line 839 "unused_args.m"
                MR_Word transform_hlds__unused_args__ArgDep_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInfo0_13, (MR_Integer) 1)));
#line 839 "unused_args.m"
                MR_Word transform_hlds__unused_args__VarInfo_16;

#line 840 "unused_args.m"
                {
#line 840 "unused_args.m"
                  mercury__set__insert_3_p_0(transform_hlds__unused_args__TypeInfo_21_21, ((MR_Box) (transform_hlds__unused_args__Alias_1)), transform_hlds__unused_args__VarDep0_14, &transform_hlds__unused_args__VarDep_12);
                }
#line 841 "unused_args.m"
                {
#line 841 "unused_args.m"
                  transform_hlds__unused_args__VarInfo_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 841 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInfo_16, 0) = ((MR_Box) (transform_hlds__unused_args__VarDep_12));
#line 841 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInfo_16, 1) = ((MR_Box) (transform_hlds__unused_args__ArgDep_15));
#line 841 "unused_args.m"
                }
#line 842 "unused_args.m"
                {
#line 842 "unused_args.m"
                  mercury__map__set_4_p_0(transform_hlds__unused_args__TypeInfo_21_21, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, ((MR_Box) (transform_hlds__unused_args__Var_10)), ((MR_Box) (transform_hlds__unused_args__VarInfo_16)), transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_19_19);
                }
#line 839 "unused_args.m"
              }
#line 843 "unused_args.m"
            else
#line 843 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarDep_19_19 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3;
#line 846 "unused_args.m"
            /* direct tailcall eliminated */
#line 846 "unused_args.m"
            {
#line 846 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__2__tmp_copy_2 = transform_hlds__unused_args__Vars_11;
#line 846 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_3 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_19_19;

#line 846 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_3 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_3;
#line 846 "unused_args.m"
              transform_hlds__unused_args__HeadVar__2_2 = transform_hlds__unused_args__HeadVar__2__tmp_copy_2;
#line 846 "unused_args.m"
            }
#line 846 "unused_args.m"
            continue;
#line 837 "unused_args.m"
          }
#line 836 "unused_args.m"
      }
#line 836 "unused_args.m"
      break;
#line 836 "unused_args.m"
    }
#line 833 "unused_args.m"
}

#line 787 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__partition_deconstruct_args_5_p_0(
#line 787 "unused_args.m"
  MR_Word transform_hlds__unused_args__Info_6,
#line 787 "unused_args.m"
  MR_Word transform_hlds__unused_args__ArgVars_7,
#line 787 "unused_args.m"
  MR_Word transform_hlds__unused_args__ArgModes_8,
#line 787 "unused_args.m"
  MR_Word * transform_hlds__unused_args__InputVars_9,
#line 787 "unused_args.m"
  MR_Word * transform_hlds__unused_args__OutputVars_10)
#line 787 "unused_args.m"
{
#line 821 "unused_args.m"
  {
#line 821 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__ArgVars_7)) == (MR_mktag((MR_Integer) 1)));
#line 821 "unused_args.m"
    MR_Word transform_hlds__unused_args__Var_11;
#line 821 "unused_args.m"
    MR_Word transform_hlds__unused_args__Vars_12;
#line 821 "unused_args.m"
    MR_Word transform_hlds__unused_args__Mode_13;
#line 821 "unused_args.m"
    MR_Word transform_hlds__unused_args__Modes_14;

#line 792 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 792 "unused_args.m"
      {
#line 792 "unused_args.m"
        transform_hlds__unused_args__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__ArgVars_7, (MR_Integer) 0)));
#line 792 "unused_args.m"
        transform_hlds__unused_args__Vars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__ArgVars_7, (MR_Integer) 1)));
#line 793 "unused_args.m"
        transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__ArgModes_8)) == (MR_mktag((MR_Integer) 1)));
#line 793 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 793 "unused_args.m"
          {
#line 793 "unused_args.m"
            transform_hlds__unused_args__Mode_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__ArgModes_8, (MR_Integer) 0)));
#line 793 "unused_args.m"
            transform_hlds__unused_args__Modes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__ArgModes_8, (MR_Integer) 1)));
#line 793 "unused_args.m"
          }
#line 792 "unused_args.m"
      }
#line 821 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 795 "unused_args.m"
      {
#line 795 "unused_args.m"
        MR_Word transform_hlds__unused_args__InputVars1_15;
#line 795 "unused_args.m"
        MR_Word transform_hlds__unused_args__OutputVars1_16;
#line 795 "unused_args.m"
        MR_Word transform_hlds__unused_args__InitialInst1_17;
#line 795 "unused_args.m"
        MR_Word transform_hlds__unused_args__InitialInst2_18;
#line 795 "unused_args.m"
        MR_Word transform_hlds__unused_args__FinalInst1_19;
#line 795 "unused_args.m"
        MR_Word transform_hlds__unused_args__FinalInst2_20;
#line 795 "unused_args.m"
        MR_Word transform_hlds__unused_args__Type_21;
#line 795 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_22_22;
#line 795 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_23_23;
#line 795 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_24_24;
#line 798 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_30_30;
#line 803 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_25_25;
#line 803 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_31_31;
#line 814 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_26_26;
#line 814 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_32_32;

#line 795 "unused_args.m"
        {
#line 795 "unused_args.m"
          transform_hlds__unused_args__partition_deconstruct_args_5_p_0(transform_hlds__unused_args__Info_6, transform_hlds__unused_args__Vars_12, transform_hlds__unused_args__Modes_14, &transform_hlds__unused_args__InputVars1_15, &transform_hlds__unused_args__OutputVars1_16);
        }
#line 796 "unused_args.m"
        transform_hlds__unused_args__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Mode_13, (MR_Integer) 0)));
#line 796 "unused_args.m"
        transform_hlds__unused_args__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Mode_13, (MR_Integer) 1)));
#line 796 "unused_args.m"
        transform_hlds__unused_args__InitialInst1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_22_22, (MR_Integer) 0)));
#line 796 "unused_args.m"
        transform_hlds__unused_args__InitialInst2_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_22_22, (MR_Integer) 1)));
#line 796 "unused_args.m"
        transform_hlds__unused_args__FinalInst1_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_23_23, (MR_Integer) 0)));
#line 796 "unused_args.m"
        transform_hlds__unused_args__FinalInst2_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_23_23, (MR_Integer) 1)));
#line 798 "unused_args.m"
        transform_hlds__unused_args__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_6, (MR_Integer) 0)));
#line 798 "unused_args.m"
        transform_hlds__unused_args__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_6, (MR_Integer) 1)));
#line 798 "unused_args.m"
        {
#line 798 "unused_args.m"
          hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__unused_args__V_24_24, transform_hlds__unused_args__Var_11, &transform_hlds__unused_args__Type_21);
        }
#line 803 "unused_args.m"
        transform_hlds__unused_args__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_6, (MR_Integer) 0)));
#line 803 "unused_args.m"
        transform_hlds__unused_args__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_6, (MR_Integer) 1)));
#line 803 "unused_args.m"
        {
#line 803 "unused_args.m"
          transform_hlds__unused_args__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(transform_hlds__unused_args__InitialInst1_17, transform_hlds__unused_args__FinalInst1_19, transform_hlds__unused_args__Type_21, transform_hlds__unused_args__V_25_25);
        }
#line 807 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 806 "unused_args.m"
          *transform_hlds__unused_args__InputVars_9 = transform_hlds__unused_args__InputVars1_15;
#line 807 "unused_args.m"
        else
#line 808 "unused_args.m"
          {
#line 808 "unused_args.m"
            MR_Word base;
#line 808 "unused_args.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 808 "unused_args.m"
            *transform_hlds__unused_args__InputVars_9 = base;
#line 808 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__Var_11));
#line 808 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__InputVars1_15));
#line 808 "unused_args.m"
          }
#line 814 "unused_args.m"
        transform_hlds__unused_args__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_6, (MR_Integer) 0)));
#line 814 "unused_args.m"
        transform_hlds__unused_args__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_6, (MR_Integer) 1)));
#line 814 "unused_args.m"
        {
#line 814 "unused_args.m"
          transform_hlds__unused_args__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(transform_hlds__unused_args__InitialInst2_18, transform_hlds__unused_args__FinalInst2_20, transform_hlds__unused_args__Type_21, transform_hlds__unused_args__V_26_26);
        }
#line 818 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 817 "unused_args.m"
          *transform_hlds__unused_args__OutputVars_10 = transform_hlds__unused_args__OutputVars1_16;
#line 818 "unused_args.m"
        else
#line 819 "unused_args.m"
          {
#line 819 "unused_args.m"
            MR_Word base;
#line 819 "unused_args.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "unused_args.m"
            *transform_hlds__unused_args__OutputVars_10 = base;
#line 819 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__Var_11));
#line 819 "unused_args.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__OutputVars1_16));
#line 819 "unused_args.m"
          }
#line 795 "unused_args.m"
      }
#line 821 "unused_args.m"
    else
#line 827 "unused_args.m"
      {
#line 822 "unused_args.m"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__ArgVars_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 822 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 823 "unused_args.m"
          transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__ArgModes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 827 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 825 "unused_args.m"
          {
#line 825 "unused_args.m"
            *transform_hlds__unused_args__InputVars_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 826 "unused_args.m"
            *transform_hlds__unused_args__OutputVars_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 825 "unused_args.m"
          }
#line 827 "unused_args.m"
        else
#line 828 "unused_args.m"
          {
#line 828 "unused_args.m"
            {
#line 828 "unused_args.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.partition_deconstruct_args\'/5", (MR_String) "mismatched lists");
#line 828 "unused_args.m"
              return;
            }
#line 828 "unused_args.m"
          }
#line 827 "unused_args.m"
      }
#line 821 "unused_args.m"
  }
#line 787 "unused_args.m"
}

#line 778 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_rev_arg_dep_5_p_0(
#line 778 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_6,
#line 778 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcId_7,
#line 778 "unused_args.m"
  MR_Word transform_hlds__unused_args__Arg_8,
#line 778 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_10,
#line 778 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_11)
#line 778 "unused_args.m"
{
#line 774 "unused_args.m"
  {
#line 774 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 774 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarUsage0_19;
#line 609 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv0_VarUsage0_19;

#line 609 "unused_args.m"
    {
#line 609 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_10, ((MR_Box) (transform_hlds__unused_args__Arg_8)), &transform_hlds__unused_args__conv0_VarUsage0_19);
    }
#line 609 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 609 "unused_args.m"
      {
#line 609 "unused_args.m"
        transform_hlds__unused_args__VarUsage0_19 = ((MR_Word) transform_hlds__unused_args__conv0_VarUsage0_19);
#line 609 "unused_args.m"
        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 609 "unused_args.m"
      }
#line 774 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 770 "unused_args.m"
      {
#line 770 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarDep_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage0_19, (MR_Integer) 0)));
#line 770 "unused_args.m"
        MR_Word transform_hlds__unused_args__ArgDep0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage0_19, (MR_Integer) 1)));
#line 770 "unused_args.m"
        MR_Word transform_hlds__unused_args__ArgDep_21;
#line 770 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarUsage_22;
#line 770 "unused_args.m"
        MR_Word transform_hlds__unused_args__V_23_23;

#line 771 "unused_args.m"
        {
#line 771 "unused_args.m"
          transform_hlds__unused_args__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 771 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_23_23, 0) = ((MR_Box) (transform_hlds__unused_args__PredProcId_7));
#line 771 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_23_23, 1) = ((MR_Box) (transform_hlds__unused_args__Var_6));
#line 771 "unused_args.m"
        }
#line 771 "unused_args.m"
        {
#line 771 "unused_args.m"
          mercury__set__insert_3_p_0((MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0, ((MR_Box) (transform_hlds__unused_args__V_23_23)), transform_hlds__unused_args__ArgDep0_20, &transform_hlds__unused_args__ArgDep_21);
        }
#line 772 "unused_args.m"
        {
#line 772 "unused_args.m"
          transform_hlds__unused_args__VarUsage_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 772 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage_22, 0) = ((MR_Box) (transform_hlds__unused_args__VarDep_18));
#line 772 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage_22, 1) = ((MR_Box) (transform_hlds__unused_args__ArgDep_21));
#line 772 "unused_args.m"
        }
#line 773 "unused_args.m"
        {
#line 773 "unused_args.m"
          mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, ((MR_Box) (transform_hlds__unused_args__Arg_8)), ((MR_Box) (transform_hlds__unused_args__VarUsage_22)), transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_10, transform_hlds__unused_args__STATE_VARIABLE_VarDep_11);
#line 773 "unused_args.m"
          return;
        }
#line 770 "unused_args.m"
      }
#line 774 "unused_args.m"
    else
#line 774 "unused_args.m"
      *transform_hlds__unused_args__STATE_VARIABLE_VarDep_11 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_10;
#line 774 "unused_args.m"
  }
#line 778 "unused_args.m"
}

#line 746 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_pred_call_arg_dep_5_p_0(
#line 746 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProc_6,
#line 746 "unused_args.m"
  MR_Word transform_hlds__unused_args__LocalArguments_7,
#line 746 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVarIds_8,
#line 746 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_14,
#line 746 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_15)
#line 746 "unused_args.m"
{
#line 756 "unused_args.m"
  while (MR_TRUE)
#line 756 "unused_args.m"
    {
#line 756 "unused_args.m"
      /* tailcall optimized into a loop */
#line 756 "unused_args.m"
      {
#line 756 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__LocalArguments_7)) == (MR_mktag((MR_Integer) 1)));
#line 756 "unused_args.m"
        MR_Word transform_hlds__unused_args__Arg_10;
#line 756 "unused_args.m"
        MR_Word transform_hlds__unused_args__Args_11;
#line 756 "unused_args.m"
        MR_Word transform_hlds__unused_args__HeadVar_12;
#line 756 "unused_args.m"
        MR_Word transform_hlds__unused_args__HeadVars_13;

#line 751 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 751 "unused_args.m"
          {
#line 751 "unused_args.m"
            transform_hlds__unused_args__Arg_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__LocalArguments_7, (MR_Integer) 0)));
#line 751 "unused_args.m"
            transform_hlds__unused_args__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__LocalArguments_7, (MR_Integer) 1)));
#line 752 "unused_args.m"
            transform_hlds__unused_args__succeeded = ((MR_tag((MR_Word) transform_hlds__unused_args__HeadVarIds_8)) == (MR_mktag((MR_Integer) 1)));
#line 752 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 752 "unused_args.m"
              {
#line 752 "unused_args.m"
                transform_hlds__unused_args__HeadVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVarIds_8, (MR_Integer) 0)));
#line 752 "unused_args.m"
                transform_hlds__unused_args__HeadVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVarIds_8, (MR_Integer) 1)));
#line 752 "unused_args.m"
              }
#line 751 "unused_args.m"
          }
#line 756 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 754 "unused_args.m"
          {
#line 754 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_16_16;
#line 774 "unused_args.m"
            MR_Word transform_hlds__unused_args__VarUsage0_27;
#line 609 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv0_VarUsage0_27;

#line 609 "unused_args.m"
            {
#line 609 "unused_args.m"
              transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_14, ((MR_Box) (transform_hlds__unused_args__Arg_10)), &transform_hlds__unused_args__conv0_VarUsage0_27);
            }
#line 609 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 609 "unused_args.m"
              {
#line 609 "unused_args.m"
                transform_hlds__unused_args__VarUsage0_27 = ((MR_Word) transform_hlds__unused_args__conv0_VarUsage0_27);
#line 609 "unused_args.m"
                transform_hlds__unused_args__succeeded = MR_TRUE;
#line 609 "unused_args.m"
              }
#line 774 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 770 "unused_args.m"
              {
#line 770 "unused_args.m"
                MR_Word transform_hlds__unused_args__VarDep_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage0_27, (MR_Integer) 0)));
#line 770 "unused_args.m"
                MR_Word transform_hlds__unused_args__ArgDep0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage0_27, (MR_Integer) 1)));
#line 770 "unused_args.m"
                MR_Word transform_hlds__unused_args__ArgDep_29;
#line 770 "unused_args.m"
                MR_Word transform_hlds__unused_args__VarUsage_30;
#line 770 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_31_31;

#line 771 "unused_args.m"
                {
#line 771 "unused_args.m"
                  transform_hlds__unused_args__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 771 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_31_31, 0) = ((MR_Box) (transform_hlds__unused_args__PredProc_6));
#line 771 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_31_31, 1) = ((MR_Box) (transform_hlds__unused_args__HeadVar_12));
#line 771 "unused_args.m"
                }
#line 771 "unused_args.m"
                {
#line 771 "unused_args.m"
                  mercury__set__insert_3_p_0((MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0, ((MR_Box) (transform_hlds__unused_args__V_31_31)), transform_hlds__unused_args__ArgDep0_28, &transform_hlds__unused_args__ArgDep_29);
                }
#line 772 "unused_args.m"
                {
#line 772 "unused_args.m"
                  transform_hlds__unused_args__VarUsage_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 772 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage_30, 0) = ((MR_Box) (transform_hlds__unused_args__VarDep_26));
#line 772 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarUsage_30, 1) = ((MR_Box) (transform_hlds__unused_args__ArgDep_29));
#line 772 "unused_args.m"
                }
#line 773 "unused_args.m"
                {
#line 773 "unused_args.m"
                  mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, ((MR_Box) (transform_hlds__unused_args__Arg_10)), ((MR_Box) (transform_hlds__unused_args__VarUsage_30)), transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_14, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_16_16);
                }
#line 770 "unused_args.m"
              }
#line 774 "unused_args.m"
            else
#line 774 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarDep_16_16 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_14;
#line 755 "unused_args.m"
            /* direct tailcall eliminated */
#line 755 "unused_args.m"
            {
#line 755 "unused_args.m"
              MR_Word transform_hlds__unused_args__LocalArguments__tmp_copy_7 = transform_hlds__unused_args__Args_11;
#line 755 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVarIds__tmp_copy_8 = transform_hlds__unused_args__HeadVars_13;
#line 755 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_14 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_16_16;

#line 755 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_14 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_14;
#line 755 "unused_args.m"
              transform_hlds__unused_args__HeadVarIds_8 = transform_hlds__unused_args__HeadVarIds__tmp_copy_8;
#line 755 "unused_args.m"
              transform_hlds__unused_args__LocalArguments_7 = transform_hlds__unused_args__LocalArguments__tmp_copy_7;
#line 755 "unused_args.m"
            }
#line 755 "unused_args.m"
            continue;
#line 754 "unused_args.m"
          }
#line 756 "unused_args.m"
        else
#line 761 "unused_args.m"
          {
#line 757 "unused_args.m"
            transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__LocalArguments_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 757 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 758 "unused_args.m"
              transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__HeadVarIds_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 761 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 760 "unused_args.m"
              {
#line 760 "unused_args.m"
              }
#line 761 "unused_args.m"
            else
#line 762 "unused_args.m"
              {
#line 762 "unused_args.m"
                {
#line 762 "unused_args.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.add_pred_call_arg_dep\'/5", (MR_String) "invalid call");
#line 762 "unused_args.m"
                  return;
                }
#line 762 "unused_args.m"
              }
#line 761 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_VarDep_15 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_14;
#line 761 "unused_args.m"
          }
#line 756 "unused_args.m"
      }
#line 756 "unused_args.m"
      break;
#line 756 "unused_args.m"
    }
#line 746 "unused_args.m"
}

#line 697 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_3(
#line 697 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg)
#line 697 "unused_args.m"
{
#line 697 "unused_args.m"
  {
#line 697 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 697 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;

#line 697 "unused_args.m"
    {
#line 697 "unused_args.m"
      return transform_hlds__unused_args__succeeded = transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__697__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))));
    }
#line 697 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 697 "unused_args.m"
  }
#line 697 "unused_args.m"
}

#line 715 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_2(
#line 715 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg)
#line 715 "unused_args.m"
{
#line 715 "unused_args.m"
  {
#line 715 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 715 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;

#line 715 "unused_args.m"
    {
#line 715 "unused_args.m"
      return transform_hlds__unused_args__succeeded = transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__715__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))));
    }
#line 715 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 715 "unused_args.m"
  }
#line 715 "unused_args.m"
}

#line 674 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_1(
#line 674 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 674 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 674 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2)
#line 674 "unused_args.m"
{
#line 674 "unused_args.m"
  {
#line 674 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 674 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 674 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__2_117;

#line 674 "unused_args.m"
    {
#line 674 "unused_args.m"
      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__674__1_2_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), &transform_hlds__unused_args__conv0_HeadVar__2_117);
    }
#line 674 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 674 "unused_args.m"
      {
#line 674 "unused_args.m"
        *transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__2_117));
#line 674 "unused_args.m"
        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 674 "unused_args.m"
      }
#line 674 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 674 "unused_args.m"
  }
#line 674 "unused_args.m"
}

#line 622 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(
#line 622 "unused_args.m"
  MR_Word transform_hlds__unused_args__Info_5,
#line 622 "unused_args.m"
  MR_Word transform_hlds__unused_args__Goal_6,
#line 622 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87,
#line 622 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_88)
#line 622 "unused_args.m"
{
#line 625 "unused_args.m"
  while (MR_TRUE)
#line 625 "unused_args.m"
    {
#line 625 "unused_args.m"
      /* tailcall optimized into a loop */
#line 625 "unused_args.m"
      {
#line 625 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;
#line 625 "unused_args.m"
        MR_Word transform_hlds__unused_args__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_6, (MR_Integer) 0)));
#line 626 "unused_args.m"
        MR_Word transform_hlds__unused_args___GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Goal_6, (MR_Integer) 1)));

#line 630 "unused_args.m"
#line 630 "unused_args.m"
        switch (MR_tag((MR_Word) transform_hlds__unused_args__GoalExpr_8)) {
#line 630 "unused_args.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 630 "unused_args.m"
          case (MR_Integer) 0:
#line 650 "unused_args.m"
            {
#line 650 "unused_args.m"
              MR_Word transform_hlds__unused_args__SubGoal_28 = (MR_Word) MR_body(((MR_Word) transform_hlds__unused_args__GoalExpr_8), (MR_Integer) 0);

#line 651 "unused_args.m"
              /* direct tailcall eliminated */
#line 651 "unused_args.m"
              {
#line 651 "unused_args.m"
                MR_Word transform_hlds__unused_args__Goal__tmp_copy_6 = transform_hlds__unused_args__SubGoal_28;

#line 651 "unused_args.m"
                transform_hlds__unused_args__Goal_6 = transform_hlds__unused_args__Goal__tmp_copy_6;
#line 651 "unused_args.m"
              }
#line 651 "unused_args.m"
              continue;
#line 650 "unused_args.m"
            }
#line 630 "unused_args.m"
            break;
#line 630 "unused_args.m"
          case (MR_Integer) 1:
#line 681 "unused_args.m"
            {
#line 681 "unused_args.m"
              MR_Word transform_hlds__unused_args__LHS_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 0)));
#line 681 "unused_args.m"
              MR_Word transform_hlds__unused_args__RHS_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));
#line 681 "unused_args.m"
              MR_Word transform_hlds__unused_args__Unify_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 3)));
#line 681 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));
#line 681 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 4)));

#line 686 "unused_args.m"
#line 686 "unused_args.m"
              switch (MR_tag((MR_Word) transform_hlds__unused_args__Unify_52)) {
#line 686 "unused_args.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 686 "unused_args.m"
                case (MR_Integer) 0:
#line 714 "unused_args.m"
                  {
#line 714 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_97_97;
#line 714 "unused_args.m"
                    MR_Word transform_hlds__unused_args__Args_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_52, (MR_Integer) 2)));
#line 714 "unused_args.m"
                    MR_Word transform_hlds__unused_args__CellVar_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_52, (MR_Integer) 0)));
#line 714 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_52, (MR_Integer) 1)));
#line 714 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_52, (MR_Integer) 3)));
#line 714 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_52, (MR_Integer) 4)));
#line 714 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_52, (MR_Integer) 5)));
#line 714 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Unify_52, (MR_Integer) 6)));

#line 715 "unused_args.m"
                    {
#line 715 "unused_args.m"
                      transform_hlds__unused_args__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 715 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_97_97, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[3]));
#line 715 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_97_97, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_2));
#line 715 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_97_97, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 715 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_97_97, 3) = ((MR_Box) (transform_hlds__unused_args__LHS_49));
#line 715 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_97_97, 4) = ((MR_Box) (transform_hlds__unused_args__CellVar_144));
#line 715 "unused_args.m"
                    }
#line 715 "unused_args.m"
                    {
#line 715 "unused_args.m"
                      mercury__require__expect_4_p_0(transform_hlds__unused_args__V_97_97, (MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.unused_args_traverse_goal\'/4", (MR_String) "LHS != CellVar");
                    }
#line 716 "unused_args.m"
                    {
#line 716 "unused_args.m"
                      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__local_var_is_used_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__CellVar_144);
                    }
#line 718 "unused_args.m"
                    if (transform_hlds__unused_args__succeeded)
#line 717 "unused_args.m"
                      {
#line 717 "unused_args.m"
                        transform_hlds__unused_args__set_list_vars_used_3_p_0(transform_hlds__unused_args__Args_143, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
#line 717 "unused_args.m"
                        return;
                      }
#line 718 "unused_args.m"
                    else
#line 719 "unused_args.m"
                      {
#line 719 "unused_args.m"
                        transform_hlds__unused_args__add_construction_aliases_4_p_0(transform_hlds__unused_args__CellVar_144, transform_hlds__unused_args__Args_143, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
#line 719 "unused_args.m"
                        return;
                      }
#line 714 "unused_args.m"
                  }
#line 686 "unused_args.m"
                  break;
#line 686 "unused_args.m"
                case (MR_Integer) 1:
#line 696 "unused_args.m"
                  {
#line 696 "unused_args.m"
                    MR_Word transform_hlds__unused_args__CellVar_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_52, (MR_Integer) 0)));
#line 696 "unused_args.m"
                    MR_Word transform_hlds__unused_args__Modes_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_52, (MR_Integer) 3)));
#line 696 "unused_args.m"
                    MR_Word transform_hlds__unused_args__CanFail_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_52, (MR_Integer) 4)));
#line 696 "unused_args.m"
                    MR_Word transform_hlds__unused_args__InputVars_63;
#line 696 "unused_args.m"
                    MR_Word transform_hlds__unused_args__OutputVars_64;
#line 696 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_103_103;
#line 696 "unused_args.m"
                    MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_107_107;
#line 696 "unused_args.m"
                    MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_108_108;
#line 696 "unused_args.m"
                    MR_Word transform_hlds__unused_args__Args_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_52, (MR_Integer) 2)));
#line 696 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_52, (MR_Integer) 1)));
#line 696 "unused_args.m"
                    MR_Word transform_hlds__unused_args__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__Unify_52, (MR_Integer) 5)));

#line 697 "unused_args.m"
                    {
#line 697 "unused_args.m"
                      transform_hlds__unused_args__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 697 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_103_103, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[3]));
#line 697 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_103_103, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_3));
#line 697 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_103_103, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 697 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_103_103, 3) = ((MR_Box) (transform_hlds__unused_args__LHS_49));
#line 697 "unused_args.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_103_103, 4) = ((MR_Box) (transform_hlds__unused_args__CellVar_58));
#line 697 "unused_args.m"
                    }
#line 697 "unused_args.m"
                    {
#line 697 "unused_args.m"
                      mercury__require__expect_4_p_0(transform_hlds__unused_args__V_103_103, (MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.unused_args_traverse_goal\'/4", (MR_String) "LHS != CellVar");
                    }
#line 698 "unused_args.m"
                    {
#line 698 "unused_args.m"
                      transform_hlds__unused_args__partition_deconstruct_args_5_p_0(transform_hlds__unused_args__Info_5, transform_hlds__unused_args__Args_142, transform_hlds__unused_args__Modes_60, &transform_hlds__unused_args__InputVars_63, &transform_hlds__unused_args__OutputVars_64);
                    }
#line 702 "unused_args.m"
                    {
#line 702 "unused_args.m"
                      transform_hlds__unused_args__add_aliases_4_p_0(transform_hlds__unused_args__CellVar_58, transform_hlds__unused_args__OutputVars_64, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_107_107);
                    }
#line 705 "unused_args.m"
                    {
#line 705 "unused_args.m"
                      transform_hlds__unused_args__add_construction_aliases_4_p_0(transform_hlds__unused_args__CellVar_58, transform_hlds__unused_args__InputVars_63, transform_hlds__unused_args__STATE_VARIABLE_VarDep_107_107, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_108_108);
                    }
#line 710 "unused_args.m"
#line 710 "unused_args.m"
                    switch (transform_hlds__unused_args__CanFail_61) {
#line 710 "unused_args.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 710 "unused_args.m"
                      case (MR_Integer) 0:
#line 709 "unused_args.m"
                        {
#line 709 "unused_args.m"
                          transform_hlds__unused_args__set_var_used_3_p_0(transform_hlds__unused_args__CellVar_58, transform_hlds__unused_args__STATE_VARIABLE_VarDep_108_108, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
#line 709 "unused_args.m"
                          return;
                        }
#line 710 "unused_args.m"
                        break;
#line 710 "unused_args.m"
                      case (MR_Integer) 1:
#line 711 "unused_args.m"
                        *transform_hlds__unused_args__STATE_VARIABLE_VarDep_88 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_108_108;
#line 710 "unused_args.m"
                        break;
#line 710 "unused_args.m"
                    }
#line 696 "unused_args.m"
                  }
#line 686 "unused_args.m"
                  break;
#line 686 "unused_args.m"
                case (MR_Integer) 2:
#line 687 "unused_args.m"
                  {
#line 687 "unused_args.m"
                    MR_Word transform_hlds__unused_args__Target_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Unify_52, (MR_Integer) 0)));
#line 687 "unused_args.m"
                    MR_Word transform_hlds__unused_args__Source_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__Unify_52, (MR_Integer) 1)));

#line 688 "unused_args.m"
                    {
#line 688 "unused_args.m"
                      transform_hlds__unused_args__succeeded = transform_hlds__unused_args__local_var_is_used_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__Target_56);
                    }
#line 692 "unused_args.m"
                    if (transform_hlds__unused_args__succeeded)
#line 691 "unused_args.m"
                      {
#line 691 "unused_args.m"
                        transform_hlds__unused_args__set_var_used_3_p_0(transform_hlds__unused_args__Source_57, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
#line 691 "unused_args.m"
                        return;
                      }
#line 692 "unused_args.m"
                    else
#line 693 "unused_args.m"
                      {
#line 693 "unused_args.m"
                        MR_Word transform_hlds__unused_args__V_111_111;

#line 693 "unused_args.m"
                        {
#line 693 "unused_args.m"
                          transform_hlds__unused_args__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 693 "unused_args.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_111_111, 0) = ((MR_Box) (transform_hlds__unused_args__Target_56));
#line 693 "unused_args.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 693 "unused_args.m"
                        }
#line 693 "unused_args.m"
                        {
#line 693 "unused_args.m"
                          transform_hlds__unused_args__add_aliases_4_p_0(transform_hlds__unused_args__Source_57, transform_hlds__unused_args__V_111_111, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
#line 693 "unused_args.m"
                          return;
                        }
#line 693 "unused_args.m"
                      }
#line 687 "unused_args.m"
                  }
#line 686 "unused_args.m"
                  break;
#line 686 "unused_args.m"
                case (MR_Integer) 3:
#line 686 "unused_args.m"
#line 686 "unused_args.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Unify_52, (MR_Integer) 0)))) {
#line 686 "unused_args.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 686 "unused_args.m"
                    case (MR_Integer) 0:
#line 683 "unused_args.m"
                      {
#line 683 "unused_args.m"
                        MR_Word transform_hlds__unused_args__Var1_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Unify_52, (MR_Integer) 1)));
#line 683 "unused_args.m"
                        MR_Word transform_hlds__unused_args__Var2_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Unify_52, (MR_Integer) 2)));
#line 683 "unused_args.m"
                        MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_114_114;

#line 684 "unused_args.m"
                        {
#line 684 "unused_args.m"
                          transform_hlds__unused_args__set_var_used_3_p_0(transform_hlds__unused_args__Var1_54, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_114_114);
                        }
#line 685 "unused_args.m"
                        {
#line 685 "unused_args.m"
                          transform_hlds__unused_args__set_var_used_3_p_0(transform_hlds__unused_args__Var2_55, transform_hlds__unused_args__STATE_VARIABLE_VarDep_114_114, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
#line 685 "unused_args.m"
                          return;
                        }
#line 683 "unused_args.m"
                      }
#line 686 "unused_args.m"
                      break;
#line 686 "unused_args.m"
                    case (MR_Integer) 1:
#line 730 "unused_args.m"
#line 730 "unused_args.m"
                      switch (MR_tag((MR_Word) transform_hlds__unused_args__RHS_50)) {
#line 730 "unused_args.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 730 "unused_args.m"
                        case (MR_Integer) 0:
#line 727 "unused_args.m"
                          {
#line 727 "unused_args.m"
                            MR_Word transform_hlds__unused_args__RHSVar_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__RHS_50, (MR_Integer) 0)));
#line 727 "unused_args.m"
                            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_95_95;

#line 728 "unused_args.m"
                            {
#line 728 "unused_args.m"
                              transform_hlds__unused_args__set_var_used_3_p_0(transform_hlds__unused_args__RHSVar_73, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_95_95);
                            }
#line 729 "unused_args.m"
                            {
#line 729 "unused_args.m"
                              transform_hlds__unused_args__set_var_used_3_p_0(transform_hlds__unused_args__LHS_49, transform_hlds__unused_args__STATE_VARIABLE_VarDep_95_95, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
#line 729 "unused_args.m"
                              return;
                            }
#line 727 "unused_args.m"
                          }
#line 730 "unused_args.m"
                          break;
#line 730 "unused_args.m"
                        case (MR_Integer) 1:
#line 730 "unused_args.m"
                        case (MR_Integer) 2:
#line 733 "unused_args.m"
                          {
#line 734 "unused_args.m"
                            {
#line 734 "unused_args.m"
                              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.unused_args_traverse_goal\'/4", (MR_String) "complicated unifications should only be var-var");
#line 734 "unused_args.m"
                              return;
                            }
#line 733 "unused_args.m"
                          }
#line 730 "unused_args.m"
                          break;
#line 730 "unused_args.m"
                      }
#line 686 "unused_args.m"
                      break;
#line 686 "unused_args.m"
                  }
#line 686 "unused_args.m"
                  break;
#line 686 "unused_args.m"
              }
#line 681 "unused_args.m"
            }
#line 630 "unused_args.m"
            break;
#line 630 "unused_args.m"
          case (MR_Integer) 2:
#line 639 "unused_args.m"
            {
#line 639 "unused_args.m"
              MR_Word transform_hlds__unused_args__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 0)));
#line 639 "unused_args.m"
              MR_Integer transform_hlds__unused_args__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));
#line 639 "unused_args.m"
              MR_Word transform_hlds__unused_args__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));
#line 639 "unused_args.m"
              MR_Word transform_hlds__unused_args__ProcInfo_22;
#line 639 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVars_23;
#line 639 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_5, (MR_Integer) 0)));
#line 639 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_129_129;
#line 639 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 3)));
#line 639 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 4)));
#line 639 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 5)));
#line 640 "unused_args.m"
              MR_Word transform_hlds__unused_args__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_5, (MR_Integer) 1)));
#line 640 "unused_args.m"
              MR_Word transform_hlds__unused_args___PredInfo_21;

#line 640 "unused_args.m"
              {
#line 640 "unused_args.m"
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__unused_args__V_128_128, transform_hlds__unused_args__PredId_15, transform_hlds__unused_args__ProcId_16, &transform_hlds__unused_args___PredInfo_21, &transform_hlds__unused_args__ProcInfo_22);
              }
#line 642 "unused_args.m"
              {
#line 642 "unused_args.m"
                hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__ProcInfo_22, &transform_hlds__unused_args__HeadVars_23);
              }
#line 643 "unused_args.m"
              {
#line 643 "unused_args.m"
                transform_hlds__unused_args__V_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 643 "unused_args.m"
                MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_129_129, 0) = ((MR_Box) (transform_hlds__unused_args__PredId_15));
#line 643 "unused_args.m"
                MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_129_129, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_16));
#line 643 "unused_args.m"
              }
#line 643 "unused_args.m"
              {
#line 643 "unused_args.m"
                transform_hlds__unused_args__add_pred_call_arg_dep_5_p_0(transform_hlds__unused_args__V_129_129, transform_hlds__unused_args__Args_17, transform_hlds__unused_args__HeadVars_23, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
#line 643 "unused_args.m"
                return;
              }
#line 639 "unused_args.m"
            }
#line 630 "unused_args.m"
            break;
#line 630 "unused_args.m"
          case (MR_Integer) 3:
#line 630 "unused_args.m"
#line 630 "unused_args.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 0)))) {
#line 630 "unused_args.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 630 "unused_args.m"
              case (MR_Integer) 0:
#line 664 "unused_args.m"
                {
#line 664 "unused_args.m"
                  MR_Word transform_hlds__unused_args__GenericCall_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));
#line 664 "unused_args.m"
                  MR_Word transform_hlds__unused_args__CallArgs_35;
#line 664 "unused_args.m"
                  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_120_120;
#line 664 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Args_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));
#line 664 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 3)));
#line 664 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 4)));
#line 664 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 5)));

#line 665 "unused_args.m"
                  {
#line 665 "unused_args.m"
                    hlds__goal_util__generic_call_vars_2_p_0(transform_hlds__unused_args__GenericCall_31, &transform_hlds__unused_args__CallArgs_35);
                  }
#line 666 "unused_args.m"
                  {
#line 666 "unused_args.m"
                    transform_hlds__unused_args__set_list_vars_used_3_p_0(transform_hlds__unused_args__CallArgs_35, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_120_120);
                  }
#line 667 "unused_args.m"
                  {
#line 667 "unused_args.m"
                    transform_hlds__unused_args__set_list_vars_used_3_p_0(transform_hlds__unused_args__Args_138, transform_hlds__unused_args__STATE_VARIABLE_VarDep_120_120, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
#line 667 "unused_args.m"
                    return;
                  }
#line 664 "unused_args.m"
                }
#line 630 "unused_args.m"
                break;
#line 630 "unused_args.m"
              case (MR_Integer) 1:
#line 669 "unused_args.m"
                {
#line 669 "unused_args.m"
                  MR_Word transform_hlds__unused_args__TypeCtorInfo_148_148 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 669 "unused_args.m"
                  MR_Word transform_hlds__unused_args__ExtraArgs_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 5)));
#line 669 "unused_args.m"
                  MR_Word transform_hlds__unused_args__UsedVars_48;
#line 669 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_118_118;
#line 669 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Args_141 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 4)));
#line 669 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));
#line 669 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));
#line 669 "unused_args.m"
                  MR_Integer transform_hlds__unused_args__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 3)));
#line 669 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 6)));
#line 669 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 7)));

#line 678 "unused_args.m"
                  {
#line 678 "unused_args.m"
                    transform_hlds__unused_args__V_118_118 = mercury__list__f_43_43_2_f_0(transform_hlds__unused_args__TypeCtorInfo_148_148, transform_hlds__unused_args__Args_141, transform_hlds__unused_args__ExtraArgs_39);
                  }
#line 678 "unused_args.m"
                  {
#line 678 "unused_args.m"
                    mercury__list__filter_map_3_p_0(transform_hlds__unused_args__TypeCtorInfo_148_148, (MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args_scalar_common_2[9], transform_hlds__unused_args__V_118_118, &transform_hlds__unused_args__UsedVars_48);
                  }
#line 679 "unused_args.m"
                  {
#line 679 "unused_args.m"
                    transform_hlds__unused_args__set_list_vars_used_3_p_0(transform_hlds__unused_args__UsedVars_48, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
#line 679 "unused_args.m"
                    return;
                  }
#line 669 "unused_args.m"
                }
#line 630 "unused_args.m"
                break;
#line 630 "unused_args.m"
              case (MR_Integer) 2:
#line 628 "unused_args.m"
                {
#line 628 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));
#line 628 "unused_args.m"
                  MR_Word transform_hlds__unused_args___ConjType_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));

#line 629 "unused_args.m"
                  {
#line 629 "unused_args.m"
                    transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(transform_hlds__unused_args__Info_5, transform_hlds__unused_args__Goals_11, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
#line 629 "unused_args.m"
                    return;
                  }
#line 628 "unused_args.m"
                }
#line 630 "unused_args.m"
                break;
#line 630 "unused_args.m"
              case (MR_Integer) 3:
#line 631 "unused_args.m"
                {
#line 631 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Goals_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));

#line 632 "unused_args.m"
                  {
#line 632 "unused_args.m"
                    transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(transform_hlds__unused_args__Info_5, transform_hlds__unused_args__Goals_135, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
#line 632 "unused_args.m"
                    return;
                  }
#line 631 "unused_args.m"
                }
#line 630 "unused_args.m"
                break;
#line 630 "unused_args.m"
              case (MR_Integer) 4:
#line 634 "unused_args.m"
                {
#line 634 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));
#line 634 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 3)));
#line 634 "unused_args.m"
                  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_131_131;
#line 634 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Goals_136;
#line 634 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));

#line 635 "unused_args.m"
                  {
#line 635 "unused_args.m"
                    transform_hlds__unused_args__set_var_used_3_p_0(transform_hlds__unused_args__Var_12, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_131_131);
                  }
#line 636 "unused_args.m"
                  {
#line 636 "unused_args.m"
                    transform_hlds__unused_args__list_case_to_list_goal_2_p_0(transform_hlds__unused_args__Cases_14, &transform_hlds__unused_args__Goals_136);
                  }
#line 637 "unused_args.m"
                  {
#line 637 "unused_args.m"
                    transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(transform_hlds__unused_args__Info_5, transform_hlds__unused_args__Goals_136, transform_hlds__unused_args__STATE_VARIABLE_VarDep_131_131, transform_hlds__unused_args__STATE_VARIABLE_VarDep_88);
#line 637 "unused_args.m"
                    return;
                  }
#line 634 "unused_args.m"
                }
#line 630 "unused_args.m"
                break;
#line 630 "unused_args.m"
              case (MR_Integer) 5:
#line 653 "unused_args.m"
                {
#line 653 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Reason_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));
#line 653 "unused_args.m"
                  MR_Word transform_hlds__unused_args__SubGoal_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));
#line 654 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_122_122;
#line 654 "unused_args.m"
                  MR_Word transform_hlds__unused_args___TermVar_30;

#line 654 "unused_args.m"
                  transform_hlds__unused_args__succeeded = ((((MR_tag((MR_Word) transform_hlds__unused_args__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 654 "unused_args.m"
                  if (transform_hlds__unused_args__succeeded)
#line 654 "unused_args.m"
                    {
#line 654 "unused_args.m"
                      transform_hlds__unused_args___TermVar_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Reason_29, (MR_Integer) 1)));
#line 654 "unused_args.m"
                      transform_hlds__unused_args__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__Reason_29, (MR_Integer) 2)));
#line 654 "unused_args.m"
                      transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__V_122_122 == (MR_Integer) 1);
#line 654 "unused_args.m"
                    }
#line 658 "unused_args.m"
                  if (transform_hlds__unused_args__succeeded)
#line 658 "unused_args.m"
                    *transform_hlds__unused_args__STATE_VARIABLE_VarDep_88 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87;
#line 658 "unused_args.m"
                  else
#line 661 "unused_args.m"
                    {
#line 661 "unused_args.m"
                      /* direct tailcall eliminated */
#line 661 "unused_args.m"
                      {
#line 661 "unused_args.m"
                        MR_Word transform_hlds__unused_args__Goal__tmp_copy_6 = transform_hlds__unused_args__SubGoal_137;

#line 661 "unused_args.m"
                        transform_hlds__unused_args__Goal_6 = transform_hlds__unused_args__Goal__tmp_copy_6;
#line 661 "unused_args.m"
                      }
#line 661 "unused_args.m"
                      continue;
#line 661 "unused_args.m"
                    }
#line 653 "unused_args.m"
                }
#line 630 "unused_args.m"
                break;
#line 630 "unused_args.m"
              case (MR_Integer) 6:
#line 645 "unused_args.m"
                {
#line 645 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Cond_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 2)));
#line 645 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Then_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 3)));
#line 645 "unused_args.m"
                  MR_Word transform_hlds__unused_args__Else_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 4)));
#line 645 "unused_args.m"
                  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_125_125;
#line 645 "unused_args.m"
                  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_126_126;
#line 645 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unused_args__GoalExpr_8, (MR_Integer) 1)));

#line 646 "unused_args.m"
                  {
#line 646 "unused_args.m"
                    transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(transform_hlds__unused_args__Info_5, transform_hlds__unused_args__Cond_25, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_125_125);
                  }
#line 647 "unused_args.m"
                  {
#line 647 "unused_args.m"
                    transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(transform_hlds__unused_args__Info_5, transform_hlds__unused_args__Then_26, transform_hlds__unused_args__STATE_VARIABLE_VarDep_125_125, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_126_126);
                  }
#line 648 "unused_args.m"
                  /* direct tailcall eliminated */
#line 648 "unused_args.m"
                  {
#line 648 "unused_args.m"
                    MR_Word transform_hlds__unused_args__Goal__tmp_copy_6 = transform_hlds__unused_args__Else_27;
#line 648 "unused_args.m"
                    MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_87 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_126_126;

#line 648 "unused_args.m"
                    transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_87 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_87;
#line 648 "unused_args.m"
                    transform_hlds__unused_args__Goal_6 = transform_hlds__unused_args__Goal__tmp_copy_6;
#line 648 "unused_args.m"
                  }
#line 648 "unused_args.m"
                  continue;
#line 645 "unused_args.m"
                }
#line 630 "unused_args.m"
                break;
#line 630 "unused_args.m"
              case (MR_Integer) 7:
#line 739 "unused_args.m"
                {
#line 741 "unused_args.m"
                  {
#line 741 "unused_args.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unused_args", (MR_String) "predicate \140transform_hlds.unused_args.unused_args_traverse_goal\'/4", (MR_String) "shorthand");
#line 741 "unused_args.m"
                    return;
                  }
#line 739 "unused_args.m"
                }
#line 630 "unused_args.m"
                break;
#line 630 "unused_args.m"
            }
#line 630 "unused_args.m"
            break;
#line 630 "unused_args.m"
        }
#line 625 "unused_args.m"
      }
#line 625 "unused_args.m"
      break;
#line 625 "unused_args.m"
    }
#line 622 "unused_args.m"
}

#line 600 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__set_var_used_3_p_0(
#line 600 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_4,
#line 600 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_6,
#line 600 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_7)
#line 600 "unused_args.m"
{
#line 603 "unused_args.m"
  {
#line 603 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 603 "unused_args.m"
    {
#line 603 "unused_args.m"
      mercury__map__delete_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, ((MR_Box) (transform_hlds__unused_args__Var_4)), transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_6, transform_hlds__unused_args__STATE_VARIABLE_VarDep_7);
#line 603 "unused_args.m"
      return;
    }
#line 603 "unused_args.m"
  }
#line 600 "unused_args.m"
}

#line 594 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__set_list_vars_used_3_p_0(
#line 594 "unused_args.m"
  MR_Word transform_hlds__unused_args__Vars_4,
#line 594 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_6,
#line 594 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_7)
#line 594 "unused_args.m"
{
#line 598 "unused_args.m"
  {
#line 598 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 598 "unused_args.m"
    {
#line 598 "unused_args.m"
      mercury__map__delete_list_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__Vars_4, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_6, transform_hlds__unused_args__STATE_VARIABLE_VarDep_7);
#line 598 "unused_args.m"
      return;
    }
#line 598 "unused_args.m"
  }
#line 594 "unused_args.m"
}

#line 581 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__add_aliases_4_p_0(
#line 581 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_5,
#line 581 "unused_args.m"
  MR_Word transform_hlds__unused_args__Aliases_6,
#line 581 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_12,
#line 581 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_13)
#line 581 "unused_args.m"
{
#line 590 "unused_args.m"
  {
#line 590 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 590 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarInf0_8;
#line 585 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv0_VarInf0_8;

#line 585 "unused_args.m"
    {
#line 585 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_12, ((MR_Box) (transform_hlds__unused_args__Var_5)), &transform_hlds__unused_args__conv0_VarInf0_8);
    }
#line 585 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 585 "unused_args.m"
      {
#line 585 "unused_args.m"
        transform_hlds__unused_args__VarInf0_8 = ((MR_Word) transform_hlds__unused_args__conv0_VarInf0_8);
#line 585 "unused_args.m"
        transform_hlds__unused_args__succeeded = MR_TRUE;
#line 585 "unused_args.m"
      }
#line 590 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 586 "unused_args.m"
      {
#line 586 "unused_args.m"
        MR_Word transform_hlds__unused_args__TypeInfo_17_17 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 586 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarDep_7;
#line 586 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarDep0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInf0_8, (MR_Integer) 0)));
#line 586 "unused_args.m"
        MR_Word transform_hlds__unused_args__ArgDep_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInf0_8, (MR_Integer) 1)));
#line 586 "unused_args.m"
        MR_Word transform_hlds__unused_args__VarInf_11;

#line 587 "unused_args.m"
        {
#line 587 "unused_args.m"
          mercury__set__insert_list_3_p_0(transform_hlds__unused_args__TypeInfo_17_17, transform_hlds__unused_args__Aliases_6, transform_hlds__unused_args__VarDep0_9, &transform_hlds__unused_args__VarDep_7);
        }
#line 588 "unused_args.m"
        {
#line 588 "unused_args.m"
          transform_hlds__unused_args__VarInf_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 588 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInf_11, 0) = ((MR_Box) (transform_hlds__unused_args__VarDep_7));
#line 588 "unused_args.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unused_args__VarInf_11, 1) = ((MR_Box) (transform_hlds__unused_args__ArgDep_10));
#line 588 "unused_args.m"
        }
#line 589 "unused_args.m"
        {
#line 589 "unused_args.m"
          mercury__map__det_update_4_p_0(transform_hlds__unused_args__TypeInfo_17_17, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, ((MR_Box) (transform_hlds__unused_args__Var_5)), ((MR_Box) (transform_hlds__unused_args__VarInf_11)), transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_12, transform_hlds__unused_args__STATE_VARIABLE_VarDep_13);
#line 589 "unused_args.m"
          return;
        }
#line 586 "unused_args.m"
      }
#line 590 "unused_args.m"
    else
#line 590 "unused_args.m"
      *transform_hlds__unused_args__STATE_VARIABLE_VarDep_13 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_12;
#line 590 "unused_args.m"
  }
#line 581 "unused_args.m"
}

#line 574 "unused_args.m"
static MR_bool MR_CALL 
transform_hlds__unused_args__local_var_is_used_2_p_0(
#line 574 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarDep_3,
#line 574 "unused_args.m"
  MR_Word transform_hlds__unused_args__Var_4)
#line 574 "unused_args.m"
{
#line 577 "unused_args.m"
  {
#line 577 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;

#line 577 "unused_args.m"
    {
#line 577 "unused_args.m"
      transform_hlds__unused_args__succeeded = mercury__map__contains_2_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, transform_hlds__unused_args__VarDep_3, ((MR_Box) (transform_hlds__unused_args__Var_4)));
    }
#line 577 "unused_args.m"
    transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 577 "unused_args.m"
    return transform_hlds__unused_args__succeeded;
#line 577 "unused_args.m"
  }
#line 574 "unused_args.m"
}

#line 561 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_output_args_4_p_0_1(
#line 561 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 561 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 561 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 561 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3)
#line 561 "unused_args.m"
{
#line 561 "unused_args.m"
  {
#line 561 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 561 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_STATE_VARIABLE_VarDep_7;

#line 561 "unused_args.m"
    {
#line 561 "unused_args.m"
      transform_hlds__unused_args__set_var_used_3_p_0(((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv0_STATE_VARIABLE_VarDep_7);
    }
#line 561 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_STATE_VARIABLE_VarDep_7));
#line 561 "unused_args.m"
  }
#line 561 "unused_args.m"
}

#line 555 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_output_args_4_p_0(
#line 555 "unused_args.m"
  MR_Word transform_hlds__unused_args__ModuleInfo_5,
#line 555 "unused_args.m"
  MR_Word transform_hlds__unused_args__ProcInfo_6,
#line 555 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_9,
#line 555 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_10)
#line 555 "unused_args.m"
{
#line 558 "unused_args.m"
  {
#line 558 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 558 "unused_args.m"
    MR_Word transform_hlds__unused_args__ChangedInstHeadVars_8;
#line 561 "unused_args.m"
    MR_Box transform_hlds__unused_args__conv1_STATE_VARIABLE_VarDep_10;

#line 559 "unused_args.m"
    {
#line 559 "unused_args.m"
      hlds__hlds_pred__proc_info_instantiated_head_vars_3_p_0(transform_hlds__unused_args__ModuleInfo_5, transform_hlds__unused_args__ProcInfo_6, &transform_hlds__unused_args__ChangedInstHeadVars_8);
    }
#line 561 "unused_args.m"
    {
#line 561 "unused_args.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[1], (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], (MR_Word) &transform_hlds__unused_args_scalar_common_2[8], transform_hlds__unused_args__ChangedInstHeadVars_8, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_9)), &transform_hlds__unused_args__conv1_STATE_VARIABLE_VarDep_10);
    }
#line 561 "unused_args.m"
    *transform_hlds__unused_args__STATE_VARIABLE_VarDep_10 = ((MR_Word) transform_hlds__unused_args__conv1_STATE_VARIABLE_VarDep_10);
#line 558 "unused_args.m"
  }
#line 555 "unused_args.m"
}

#line 545 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__tvar_to_type_info_var_3_p_0(
#line 545 "unused_args.m"
  MR_Word transform_hlds__unused_args__RttiVarMaps_4,
#line 545 "unused_args.m"
  MR_Word transform_hlds__unused_args__TVar_5,
#line 545 "unused_args.m"
  MR_Word * transform_hlds__unused_args__TypeInfoVar_6)
#line 545 "unused_args.m"
{
#line 548 "unused_args.m"
  {
#line 548 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 548 "unused_args.m"
    MR_Word transform_hlds__unused_args__Locn_7;

#line 549 "unused_args.m"
    {
#line 549 "unused_args.m"
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(transform_hlds__unused_args__RttiVarMaps_4, transform_hlds__unused_args__TVar_5, &transform_hlds__unused_args__Locn_7);
    }
#line 550 "unused_args.m"
    {
#line 550 "unused_args.m"
      hlds__hlds_rtti__type_info_locn_var_2_p_0(transform_hlds__unused_args__Locn_7, transform_hlds__unused_args__TypeInfoVar_6);
#line 550 "unused_args.m"
      return;
    }
#line 548 "unused_args.m"
  }
#line 545 "unused_args.m"
}

#line 543 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_2(
#line 543 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 543 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 543 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 543 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3)
#line 543 "unused_args.m"
{
#line 543 "unused_args.m"
  {
#line 543 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 543 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv1_STATE_VARIABLE_VarDep_11;

#line 543 "unused_args.m"
    {
#line 543 "unused_args.m"
      transform_hlds__unused_args__add_rev_arg_dep_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv1_STATE_VARIABLE_VarDep_11);
    }
#line 543 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv1_STATE_VARIABLE_VarDep_11));
#line 543 "unused_args.m"
  }
#line 543 "unused_args.m"
}

#line 542 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_1(
#line 542 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 542 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 542 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2)
#line 542 "unused_args.m"
{
#line 542 "unused_args.m"
  {
#line 542 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 542 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_TypeInfoVar_6;

#line 542 "unused_args.m"
    {
#line 542 "unused_args.m"
      transform_hlds__unused_args__tvar_to_type_info_var_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), &transform_hlds__unused_args__conv0_TypeInfoVar_6);
    }
#line 542 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv0_TypeInfoVar_6));
#line 542 "unused_args.m"
  }
#line 542 "unused_args.m"
}

#line 527 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0(
#line 527 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 527 "unused_args.m"
  MR_Word transform_hlds__unused_args__VarTypeMap_2,
#line 527 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredProcId_3,
#line 527 "unused_args.m"
  MR_Word transform_hlds__unused_args__RttiVarMaps_4,
#line 527 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_5,
#line 527 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_6)
#line 527 "unused_args.m"
{
#line 530 "unused_args.m"
  while (MR_TRUE)
#line 530 "unused_args.m"
    {
#line 530 "unused_args.m"
      /* tailcall optimized into a loop */
#line 530 "unused_args.m"
      {
#line 530 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 530 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 530 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_VarDep_6 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_5;
#line 530 "unused_args.m"
        else
#line 532 "unused_args.m"
          {
#line 532 "unused_args.m"
            MR_Word transform_hlds__unused_args__TypeInfo_23_39;
#line 532 "unused_args.m"
            MR_Word transform_hlds__unused_args__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 532 "unused_args.m"
            MR_Word transform_hlds__unused_args__Vars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 532 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_21_21;
#line 532 "unused_args.m"
            MR_Word transform_hlds__unused_args__Type_30;
#line 532 "unused_args.m"
            MR_Word transform_hlds__unused_args__TVars_31;
#line 532 "unused_args.m"
            MR_Word transform_hlds__unused_args__TypeInfoVars_32;
#line 532 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_33_33;
#line 532 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_34_34;
#line 543 "unused_args.m"
            MR_Box transform_hlds__unused_args__conv2_STATE_VARIABLE_VarDep_21_21;

#line 540 "unused_args.m"
            {
#line 540 "unused_args.m"
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__unused_args__VarTypeMap_2, transform_hlds__unused_args__Var_13, &transform_hlds__unused_args__Type_30);
            }
#line 541 "unused_args.m"
            {
#line 541 "unused_args.m"
              parse_tree__prog_type__type_vars_2_p_0(transform_hlds__unused_args__Type_30, &transform_hlds__unused_args__TVars_31);
            }
#line 542 "unused_args.m"
            {
#line 542 "unused_args.m"
              transform_hlds__unused_args__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 542 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_33_33, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_4[2]));
#line 542 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_33_33, 1) = ((MR_Box) (transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_1));
#line 542 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 542 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_33_33, 3) = ((MR_Box) (transform_hlds__unused_args__RttiVarMaps_4));
#line 542 "unused_args.m"
            }
#line 16363 "transform_hlds.unused_args.c"
            transform_hlds__unused_args__TypeInfo_23_39 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 542 "unused_args.m"
            {
#line 542 "unused_args.m"
              mercury__list__map_3_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_1[4], transform_hlds__unused_args__TypeInfo_23_39, transform_hlds__unused_args__V_33_33, transform_hlds__unused_args__TVars_31, &transform_hlds__unused_args__TypeInfoVars_32);
            }
#line 543 "unused_args.m"
            {
#line 543 "unused_args.m"
              transform_hlds__unused_args__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 543 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_34_34, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_5[1]));
#line 543 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_34_34, 1) = ((MR_Box) (transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_2));
#line 543 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 543 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_34_34, 3) = ((MR_Box) (transform_hlds__unused_args__Var_13));
#line 543 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_34_34, 4) = ((MR_Box) (transform_hlds__unused_args__PredProcId_3));
#line 543 "unused_args.m"
            }
#line 543 "unused_args.m"
            {
#line 543 "unused_args.m"
              mercury__list__foldl_4_p_0(transform_hlds__unused_args__TypeInfo_23_39, (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], transform_hlds__unused_args__V_34_34, transform_hlds__unused_args__TypeInfoVars_32, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_5)), &transform_hlds__unused_args__conv2_STATE_VARIABLE_VarDep_21_21);
            }
#line 543 "unused_args.m"
            transform_hlds__unused_args__STATE_VARIABLE_VarDep_21_21 = ((MR_Word) transform_hlds__unused_args__conv2_STATE_VARIABLE_VarDep_21_21);
#line 534 "unused_args.m"
            /* direct tailcall eliminated */
#line 534 "unused_args.m"
            {
#line 534 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__1__tmp_copy_1 = transform_hlds__unused_args__Vars_14;
#line 534 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_5 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_21_21;

#line 534 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_5 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_5;
#line 534 "unused_args.m"
              transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__HeadVar__1__tmp_copy_1;
#line 534 "unused_args.m"
            }
#line 534 "unused_args.m"
            continue;
#line 532 "unused_args.m"
          }
#line 530 "unused_args.m"
      }
#line 530 "unused_args.m"
      break;
#line 530 "unused_args.m"
    }
#line 527 "unused_args.m"
}

#line 507 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__initialise_vardep_3_p_0(
#line 507 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 507 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_2,
#line 507 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarDep_3)
#line 507 "unused_args.m"
{
#line 510 "unused_args.m"
  while (MR_TRUE)
#line 510 "unused_args.m"
    {
#line 510 "unused_args.m"
      /* tailcall optimized into a loop */
#line 510 "unused_args.m"
      {
#line 510 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 510 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 510 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_VarDep_3 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_2;
#line 510 "unused_args.m"
        else
#line 511 "unused_args.m"
          {
#line 511 "unused_args.m"
            MR_Word transform_hlds__unused_args__TypeInfo_17_17 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 511 "unused_args.m"
            MR_Word transform_hlds__unused_args__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 511 "unused_args.m"
            MR_Word transform_hlds__unused_args__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 511 "unused_args.m"
            MR_Word transform_hlds__unused_args__VDep_10;
#line 511 "unused_args.m"
            MR_Word transform_hlds__unused_args__Args_11;
#line 511 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_14_14;
#line 511 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_15_15;

#line 512 "unused_args.m"
            {
#line 512 "unused_args.m"
              mercury__set__init_1_p_0(transform_hlds__unused_args__TypeInfo_17_17, &transform_hlds__unused_args__VDep_10);
            }
#line 513 "unused_args.m"
            {
#line 513 "unused_args.m"
              mercury__set__init_1_p_0((MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0, &transform_hlds__unused_args__Args_11);
            }
#line 514 "unused_args.m"
            {
#line 514 "unused_args.m"
              transform_hlds__unused_args__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 514 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 0) = ((MR_Box) (transform_hlds__unused_args__VDep_10));
#line 514 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_14_14, 1) = ((MR_Box) (transform_hlds__unused_args__Args_11));
#line 514 "unused_args.m"
            }
#line 514 "unused_args.m"
            {
#line 514 "unused_args.m"
              mercury__map__set_4_p_0(transform_hlds__unused_args__TypeInfo_17_17, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, ((MR_Box) (transform_hlds__unused_args__Var_7)), ((MR_Box) (transform_hlds__unused_args__V_14_14)), transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_2, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_15_15);
            }
#line 515 "unused_args.m"
            /* direct tailcall eliminated */
#line 515 "unused_args.m"
            {
#line 515 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__1__tmp_copy_1 = transform_hlds__unused_args__Vars_8;
#line 515 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_2 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_15_15;

#line 515 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarDep_0_2 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_0__tmp_copy_2;
#line 515 "unused_args.m"
              transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__HeadVar__1__tmp_copy_1;
#line 515 "unused_args.m"
            }
#line 515 "unused_args.m"
            continue;
#line 511 "unused_args.m"
          }
#line 510 "unused_args.m"
      }
#line 510 "unused_args.m"
      break;
#line 510 "unused_args.m"
    }
#line 507 "unused_args.m"
}

#line 443 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_proc_args_10_p_0_1(
#line 443 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 443 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 443 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_2)
#line 443 "unused_args.m"
{
#line 443 "unused_args.m"
  {
#line 443 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 443 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_HeadVar__3_85;

#line 443 "unused_args.m"
    {
#line 443 "unused_args.m"
      transform_hlds__unused_args__IntroducedFrom__pred__setup_proc_args__443__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__unused_args__wrapper_arg_1), &transform_hlds__unused_args__conv0_HeadVar__3_85);
    }
#line 443 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_2 = ((MR_Box) (transform_hlds__unused_args__conv0_HeadVar__3_85));
#line 443 "unused_args.m"
  }
#line 443 "unused_args.m"
}

#line 408 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_proc_args_10_p_0(
#line 408 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_11,
#line 408 "unused_args.m"
  MR_Integer transform_hlds__unused_args__ProcId_12,
#line 408 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_47,
#line 408 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_48,
#line 408 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredProcs_0_49,
#line 408 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_PredProcs_50,
#line 408 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_51,
#line 408 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OptProcs_52,
#line 408 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53,
#line 408 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_54)
#line 408 "unused_args.m"
{
#line 414 "unused_args.m"
  {
#line 414 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 414 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeInfo_81_81;
#line 414 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredInfo_17;
#line 414 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcInfo_18;
#line 414 "unused_args.m"
    MR_Word transform_hlds__unused_args__Globals_19;
#line 414 "unused_args.m"
    MR_Word transform_hlds__unused_args__Intermod_21;
#line 414 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_55_55;

#line 415 "unused_args.m"
    {
#line 415 "unused_args.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53, transform_hlds__unused_args__PredId_11, transform_hlds__unused_args__ProcId_12, &transform_hlds__unused_args__PredInfo_17, &transform_hlds__unused_args__ProcInfo_18);
    }
#line 417 "unused_args.m"
    {
#line 417 "unused_args.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53, &transform_hlds__unused_args__Globals_19);
    }
#line 16601 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__TypeInfo_81_81 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[1];
#line 419 "unused_args.m"
    {
#line 419 "unused_args.m"
      mercury__map__init_1_p_0(transform_hlds__unused_args__TypeInfo_81_81, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_55_55);
    }
#line 420 "unused_args.m"
    {
#line 420 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_19, (MR_Integer) 334, &transform_hlds__unused_args__Intermod_21);
    }
#line 425 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__Intermod_21 == (MR_Integer) 1);
#line 425 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 425 "unused_args.m"
      {
#line 426 "unused_args.m"
        {
#line 426 "unused_args.m"
          transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_imported_not_external_1_p_0(transform_hlds__unused_args__PredInfo_17);
        }
#line 425 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 425 "unused_args.m"
          {
#line 427 "unused_args.m"
            {
#line 427 "unused_args.m"
              transform_hlds__unused_args__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__unused_args__PredInfo_17);
            }
#line 427 "unused_args.m"
            transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 425 "unused_args.m"
          }
#line 425 "unused_args.m"
      }
#line 467 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 429 "unused_args.m"
      {
#line 429 "unused_args.m"
        MR_Word transform_hlds__unused_args__PredModule_22;
#line 429 "unused_args.m"
        MR_Integer transform_hlds__unused_args__PredArity_23;
#line 429 "unused_args.m"
        MR_Word transform_hlds__unused_args__FuncInfo_24;
#line 429 "unused_args.m"
        MR_Word transform_hlds__unused_args__AnalysisInfo0_25;
#line 429 "unused_args.m"
        MR_Word transform_hlds__unused_args__ModuleId_26;
#line 429 "unused_args.m"
        MR_Word transform_hlds__unused_args__FuncId_27;
#line 429 "unused_args.m"
        MR_Word transform_hlds__unused_args__MaybeBestResult_28;
#line 429 "unused_args.m"
        MR_Word transform_hlds__unused_args__AnalysisInfo_39;
#line 429 "unused_args.m"
        MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65;

#line 429 "unused_args.m"
        {
#line 429 "unused_args.m"
          transform_hlds__unused_args__PredModule_22 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__unused_args__PredInfo_17);
        }
#line 430 "unused_args.m"
        {
#line 430 "unused_args.m"
          transform_hlds__unused_args__PredArity_23 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__unused_args__PredInfo_17);
        }
#line 431 "unused_args.m"
        transform_hlds__unused_args__FuncInfo_24 = (MR_Word) transform_hlds__unused_args__PredArity_23;
#line 432 "unused_args.m"
        {
#line 432 "unused_args.m"
          hlds__hlds_module__module_info_get_analysis_info_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53, &transform_hlds__unused_args__AnalysisInfo0_25);
        }
#line 433 "unused_args.m"
        {
#line 433 "unused_args.m"
          transform_hlds__mmc_analysis__module_name_func_id_from_pred_info_4_p_0(transform_hlds__unused_args__PredInfo_17, transform_hlds__unused_args__ProcId_12, &transform_hlds__unused_args__ModuleId_26, &transform_hlds__unused_args__FuncId_27);
        }
#line 436 "unused_args.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 435 "unused_args.m"
        {
#line 435 "unused_args.m"
          analysis__lookup_best_result_6_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_4[0], transform_hlds__unused_args__AnalysisInfo0_25, transform_hlds__unused_args__ModuleId_26, transform_hlds__unused_args__FuncId_27, ((MR_Box) (transform_hlds__unused_args__FuncInfo_24)), ((MR_Box) ((MR_Integer) 0)), &transform_hlds__unused_args__MaybeBestResult_28);
        }
#line 461 "unused_args.m"
        if ((transform_hlds__unused_args__MaybeBestResult_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 462 "unused_args.m"
          {
#line 464 "unused_args.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 463 "unused_args.m"
            {
#line 463 "unused_args.m"
              analysis__record_request_6_p_0((MR_Word) &transform_hlds__unused_args_scalar_common_3[0], (MR_String) "unused_args", transform_hlds__unused_args__PredModule_22, transform_hlds__unused_args__FuncId_27, ((MR_Box) ((MR_Integer) 0)), transform_hlds__unused_args__AnalysisInfo0_25, &transform_hlds__unused_args__AnalysisInfo_39);
            }
#line 462 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_VarUsage_48 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_47;
#line 462 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_OptProcs_52 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_51;
#line 462 "unused_args.m"
            transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53;
#line 462 "unused_args.m"
          }
#line 461 "unused_args.m"
        else
#line 438 "unused_args.m"
          {
#line 438 "unused_args.m"
            MR_Word transform_hlds__unused_args__BestAnswer_30;
#line 438 "unused_args.m"
            MR_Word transform_hlds__unused_args__UnusedArgs_32;
#line 438 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__MaybeBestResult_28, (MR_Integer) 0)));
#line 438 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_31_31;

#line 438 "unused_args.m"
            transform_hlds__unused_args__BestAnswer_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_60_60, (MR_Integer) 1)));
#line 438 "unused_args.m"
            transform_hlds__unused_args__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_60_60, (MR_Integer) 2)));
#line 439 "unused_args.m"
            transform_hlds__unused_args__UnusedArgs_32 = (MR_Word) transform_hlds__unused_args__BestAnswer_30;
#line 457 "unused_args.m"
            if ((transform_hlds__unused_args__UnusedArgs_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 458 "unused_args.m"
              {
#line 458 "unused_args.m"
                *transform_hlds__unused_args__STATE_VARIABLE_VarUsage_48 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_47;
#line 458 "unused_args.m"
                *transform_hlds__unused_args__STATE_VARIABLE_OptProcs_52 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_51;
#line 458 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53;
#line 458 "unused_args.m"
              }
#line 457 "unused_args.m"
            else
#line 441 "unused_args.m"
              {
#line 441 "unused_args.m"
                MR_Word transform_hlds__unused_args__VarDep_20;
#line 441 "unused_args.m"
                MR_Word transform_hlds__unused_args__HeadVars_35;
#line 441 "unused_args.m"
                MR_Word transform_hlds__unused_args__UnusedVars_36;
#line 441 "unused_args.m"
                MR_Word transform_hlds__unused_args__PredProcId_37;
#line 441 "unused_args.m"
                MR_Word transform_hlds__unused_args__OptimizeUnusedArgs_38;
#line 441 "unused_args.m"
                MR_Word transform_hlds__unused_args__V_61_61;

#line 442 "unused_args.m"
                {
#line 442 "unused_args.m"
                  hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unused_args__ProcInfo_18, &transform_hlds__unused_args__HeadVars_35);
                }
#line 443 "unused_args.m"
                {
#line 443 "unused_args.m"
                  transform_hlds__unused_args__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 443 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_61_61, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_4[1]));
#line 443 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_61_61, 1) = ((MR_Box) (transform_hlds__unused_args__setup_proc_args_10_p_0_1));
#line 443 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 443 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_61_61, 3) = ((MR_Box) (transform_hlds__unused_args__HeadVars_35));
#line 443 "unused_args.m"
                }
#line 443 "unused_args.m"
                {
#line 443 "unused_args.m"
                  mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__unused_args__TypeInfo_81_81, transform_hlds__unused_args__V_61_61, transform_hlds__unused_args__UnusedArgs_32, &transform_hlds__unused_args__UnusedVars_36);
                }
#line 445 "unused_args.m"
                {
#line 445 "unused_args.m"
                  transform_hlds__unused_args__initialise_vardep_3_p_0(transform_hlds__unused_args__UnusedVars_36, transform_hlds__unused_args__STATE_VARIABLE_VarDep_55_55, &transform_hlds__unused_args__VarDep_20);
                }
#line 446 "unused_args.m"
                {
#line 446 "unused_args.m"
                  transform_hlds__unused_args__PredProcId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 446 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredProcId_37, 0) = ((MR_Box) (transform_hlds__unused_args__PredId_11));
#line 446 "unused_args.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__unused_args__PredProcId_37, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_12));
#line 446 "unused_args.m"
                }
#line 447 "unused_args.m"
                {
#line 447 "unused_args.m"
                  mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], ((MR_Box) (transform_hlds__unused_args__PredProcId_37)), ((MR_Box) (transform_hlds__unused_args__VarDep_20)), transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_47, transform_hlds__unused_args__STATE_VARIABLE_VarUsage_48);
                }
#line 448 "unused_args.m"
                {
#line 448 "unused_args.m"
                  libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_19, (MR_Integer) 353, &transform_hlds__unused_args__OptimizeUnusedArgs_38);
                }
#line 454 "unused_args.m"
#line 454 "unused_args.m"
                switch (transform_hlds__unused_args__OptimizeUnusedArgs_38) {
#line 454 "unused_args.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 454 "unused_args.m"
                  case (MR_Integer) 0:
#line 455 "unused_args.m"
                    {
#line 455 "unused_args.m"
                      *transform_hlds__unused_args__STATE_VARIABLE_OptProcs_52 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_51;
#line 455 "unused_args.m"
                      transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53;
#line 455 "unused_args.m"
                    }
#line 454 "unused_args.m"
                    break;
#line 454 "unused_args.m"
                  case (MR_Integer) 1:
#line 452 "unused_args.m"
                    {
#line 452 "unused_args.m"
                      transform_hlds__unused_args__make_imported_unused_args_pred_info_6_p_0(transform_hlds__unused_args__PredProcId_37, transform_hlds__unused_args__UnusedArgs_32, transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_51, transform_hlds__unused_args__STATE_VARIABLE_OptProcs_52, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65);
                    }
#line 454 "unused_args.m"
                    break;
#line 454 "unused_args.m"
                }
#line 441 "unused_args.m"
              }
#line 460 "unused_args.m"
            transform_hlds__unused_args__AnalysisInfo_39 = transform_hlds__unused_args__AnalysisInfo0_25;
#line 438 "unused_args.m"
          }
#line 466 "unused_args.m"
        {
#line 466 "unused_args.m"
          hlds__hlds_module__module_info_set_analysis_info_3_p_0(transform_hlds__unused_args__AnalysisInfo_39, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_65_65, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_54);
        }
#line 429 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_PredProcs_50 = transform_hlds__unused_args__STATE_VARIABLE_PredProcs_0_49;
#line 429 "unused_args.m"
      }
#line 467 "unused_args.m"
    else
#line 481 "unused_args.m"
      {
#line 469 "unused_args.m"
        {
#line 469 "unused_args.m"
          transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__unused_args__PredInfo_17);
        }
#line 470 "unused_args.m"
        if (!(transform_hlds__unused_args__succeeded))
#line 470 "unused_args.m"
          {
#line 471 "unused_args.m"
            {
#line 471 "unused_args.m"
              MR_Integer transform_hlds__unused_args__V_93_93;

#line 471 "unused_args.m"
              {
#line 471 "unused_args.m"
                transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(transform_hlds__unused_args__PredInfo_17);
              }
#line 471 "unused_args.m"
              if (transform_hlds__unused_args__succeeded)
#line 471 "unused_args.m"
                {
#line 472 "unused_args.m"
                  {
#line 472 "unused_args.m"
                    hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&transform_hlds__unused_args__V_93_93);
                  }
#line 472 "unused_args.m"
                  transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__ProcId_12 == transform_hlds__unused_args__V_93_93);
#line 471 "unused_args.m"
                }
#line 471 "unused_args.m"
            }
#line 470 "unused_args.m"
            if (!(transform_hlds__unused_args__succeeded))
#line 476 "unused_args.m"
              {
#line 476 "unused_args.m"
                MR_Word transform_hlds__unused_args__EvalMethod_40;

#line 476 "unused_args.m"
                {
#line 476 "unused_args.m"
                  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(transform_hlds__unused_args__ProcInfo_18, &transform_hlds__unused_args__EvalMethod_40);
                }
#line 477 "unused_args.m"
                transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__EvalMethod_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 477 "unused_args.m"
                transform_hlds__unused_args__succeeded = !(transform_hlds__unused_args__succeeded);
#line 476 "unused_args.m"
              }
#line 470 "unused_args.m"
          }
#line 481 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 480 "unused_args.m"
          {
#line 480 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_PredProcs_50 = transform_hlds__unused_args__STATE_VARIABLE_PredProcs_0_49;
#line 480 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_VarUsage_48 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_47;
#line 480 "unused_args.m"
          }
#line 481 "unused_args.m"
        else
#line 482 "unused_args.m"
          {
#line 482 "unused_args.m"
            MR_Word transform_hlds__unused_args__VarTypes_41;
#line 482 "unused_args.m"
            MR_Word transform_hlds__unused_args__Vars_42;
#line 482 "unused_args.m"
            MR_Word transform_hlds__unused_args__TypeInfoLiveness_43;
#line 482 "unused_args.m"
            MR_Word transform_hlds__unused_args__Goal_45;
#line 482 "unused_args.m"
            MR_Word transform_hlds__unused_args__Info_46;
#line 482 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_67_67;
#line 482 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_68_68;
#line 482 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_70_70;
#line 482 "unused_args.m"
            MR_Word transform_hlds__unused_args__V_72_72;
#line 482 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarDep_71_78;

#line 482 "unused_args.m"
            {
#line 482 "unused_args.m"
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__unused_args__ProcInfo_18, &transform_hlds__unused_args__VarTypes_41);
            }
#line 483 "unused_args.m"
            {
#line 483 "unused_args.m"
              hlds__vartypes__vartypes_vars_2_p_0(transform_hlds__unused_args__VarTypes_41, &transform_hlds__unused_args__Vars_42);
            }
#line 484 "unused_args.m"
            {
#line 484 "unused_args.m"
              transform_hlds__unused_args__initialise_vardep_3_p_0(transform_hlds__unused_args__Vars_42, transform_hlds__unused_args__STATE_VARIABLE_VarDep_55_55, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_67_67);
            }
#line 485 "unused_args.m"
            {
#line 485 "unused_args.m"
              transform_hlds__unused_args__setup_output_args_4_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53, transform_hlds__unused_args__ProcInfo_18, transform_hlds__unused_args__STATE_VARIABLE_VarDep_67_67, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_68_68);
            }
#line 487 "unused_args.m"
            {
#line 487 "unused_args.m"
              hlds__hlds_pred__proc_interface_should_use_typeinfo_liveness_4_p_0(transform_hlds__unused_args__PredInfo_17, transform_hlds__unused_args__ProcId_12, transform_hlds__unused_args__Globals_19, &transform_hlds__unused_args__TypeInfoLiveness_43);
            }
#line 494 "unused_args.m"
#line 494 "unused_args.m"
            switch (transform_hlds__unused_args__TypeInfoLiveness_43) {
#line 494 "unused_args.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 494 "unused_args.m"
              case (MR_Integer) 0:
#line 495 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_VarDep_70_70 = transform_hlds__unused_args__STATE_VARIABLE_VarDep_68_68;
#line 494 "unused_args.m"
                break;
#line 494 "unused_args.m"
              case (MR_Integer) 1:
#line 490 "unused_args.m"
                {
#line 490 "unused_args.m"
                  MR_Word transform_hlds__unused_args__RttiVarMaps_44;
#line 490 "unused_args.m"
                  MR_Word transform_hlds__unused_args__V_69_69;

#line 491 "unused_args.m"
                  {
#line 491 "unused_args.m"
                    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__unused_args__ProcInfo_18, &transform_hlds__unused_args__RttiVarMaps_44);
                  }
#line 492 "unused_args.m"
                  {
#line 492 "unused_args.m"
                    transform_hlds__unused_args__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 492 "unused_args.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_69_69, 0) = ((MR_Box) (transform_hlds__unused_args__PredId_11));
#line 492 "unused_args.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_69_69, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_12));
#line 492 "unused_args.m"
                  }
#line 492 "unused_args.m"
                  {
#line 492 "unused_args.m"
                    transform_hlds__unused_args__setup_typeinfo_deps_6_p_0(transform_hlds__unused_args__Vars_42, transform_hlds__unused_args__VarTypes_41, transform_hlds__unused_args__V_69_69, transform_hlds__unused_args__RttiVarMaps_44, transform_hlds__unused_args__STATE_VARIABLE_VarDep_68_68, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_70_70);
                  }
#line 490 "unused_args.m"
                }
#line 494 "unused_args.m"
                break;
#line 494 "unused_args.m"
            }
#line 498 "unused_args.m"
            {
#line 498 "unused_args.m"
              hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__unused_args__ProcInfo_18, &transform_hlds__unused_args__Goal_45);
            }
#line 499 "unused_args.m"
            {
#line 499 "unused_args.m"
              transform_hlds__unused_args__Info_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 499 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_46, 0) = ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53));
#line 499 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__Info_46, 1) = ((MR_Box) (transform_hlds__unused_args__VarTypes_41));
#line 499 "unused_args.m"
            }
#line 500 "unused_args.m"
            {
#line 500 "unused_args.m"
              transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(transform_hlds__unused_args__Info_46, transform_hlds__unused_args__Goal_45, transform_hlds__unused_args__STATE_VARIABLE_VarDep_70_70, &transform_hlds__unused_args__STATE_VARIABLE_VarDep_71_78);
            }
#line 501 "unused_args.m"
            {
#line 501 "unused_args.m"
              transform_hlds__unused_args__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 501 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_72_72, 0) = ((MR_Box) (transform_hlds__unused_args__PredId_11));
#line 501 "unused_args.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_72_72, 1) = ((MR_Box) (transform_hlds__unused_args__ProcId_12));
#line 501 "unused_args.m"
            }
#line 501 "unused_args.m"
            {
#line 501 "unused_args.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], ((MR_Box) (transform_hlds__unused_args__V_72_72)), ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_VarDep_71_78)), transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_47, transform_hlds__unused_args__STATE_VARIABLE_VarUsage_48);
            }
#line 503 "unused_args.m"
            {
#line 503 "unused_args.m"
              MR_Word base;
#line 503 "unused_args.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "unused_args.m"
              *transform_hlds__unused_args__STATE_VARIABLE_PredProcs_50 = base;
#line 503 "unused_args.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unused_args__V_72_72));
#line 503 "unused_args.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_PredProcs_0_49));
#line 503 "unused_args.m"
            }
#line 482 "unused_args.m"
          }
#line 481 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_54 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_53;
#line 481 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_OptProcs_52 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_51;
#line 481 "unused_args.m"
      }
#line 414 "unused_args.m"
  }
#line 408 "unused_args.m"
}

#line 393 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_pred_args_10_p_0(
#line 393 "unused_args.m"
  MR_Word transform_hlds__unused_args__PredId_1,
#line 393 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__2_2,
#line 393 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_3,
#line 393 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_4,
#line 393 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredProcs_0_5,
#line 393 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_PredProcs_6,
#line 393 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_7,
#line 393 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OptProcs_8,
#line 393 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_9,
#line 393 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_10)
#line 393 "unused_args.m"
{
#line 398 "unused_args.m"
  while (MR_TRUE)
#line 398 "unused_args.m"
    {
#line 398 "unused_args.m"
      /* tailcall optimized into a loop */
#line 398 "unused_args.m"
      {
#line 398 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 398 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 398 "unused_args.m"
          {
#line 398 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_10 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_9;
#line 398 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_OptProcs_8 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_7;
#line 398 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_PredProcs_6 = transform_hlds__unused_args__STATE_VARIABLE_PredProcs_0_5;
#line 398 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_VarUsage_4 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_3;
#line 398 "unused_args.m"
          }
#line 398 "unused_args.m"
        else
#line 400 "unused_args.m"
          {
#line 400 "unused_args.m"
            MR_Integer transform_hlds__unused_args__ProcId_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 0)));
#line 400 "unused_args.m"
            MR_Word transform_hlds__unused_args__ProcIds_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__2_2, (MR_Integer) 1)));
#line 400 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_39_39;
#line 400 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredProcs_40_40;
#line 400 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_41_41;
#line 400 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_42_42;

#line 401 "unused_args.m"
            {
#line 401 "unused_args.m"
              transform_hlds__unused_args__setup_proc_args_10_p_0(transform_hlds__unused_args__PredId_1, transform_hlds__unused_args__ProcId_25, transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_3, &transform_hlds__unused_args__STATE_VARIABLE_VarUsage_39_39, transform_hlds__unused_args__STATE_VARIABLE_PredProcs_0_5, &transform_hlds__unused_args__STATE_VARIABLE_PredProcs_40_40, transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_7, &transform_hlds__unused_args__STATE_VARIABLE_OptProcs_41_41, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_9, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_42_42);
            }
#line 403 "unused_args.m"
            /* direct tailcall eliminated */
#line 403 "unused_args.m"
            {
#line 403 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__2__tmp_copy_2 = transform_hlds__unused_args__ProcIds_26;
#line 403 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_3 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_39_39;
#line 403 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredProcs_0__tmp_copy_5 = transform_hlds__unused_args__STATE_VARIABLE_PredProcs_40_40;
#line 403 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0__tmp_copy_7 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_41_41;
#line 403 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0__tmp_copy_9 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_42_42;

#line 403 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_9 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0__tmp_copy_9;
#line 403 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_7 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0__tmp_copy_7;
#line 403 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_PredProcs_0_5 = transform_hlds__unused_args__STATE_VARIABLE_PredProcs_0__tmp_copy_5;
#line 403 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_3 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_3;
#line 403 "unused_args.m"
              transform_hlds__unused_args__HeadVar__2_2 = transform_hlds__unused_args__HeadVar__2__tmp_copy_2;
#line 403 "unused_args.m"
            }
#line 403 "unused_args.m"
            continue;
#line 400 "unused_args.m"
          }
#line 398 "unused_args.m"
      }
#line 398 "unused_args.m"
      break;
#line 398 "unused_args.m"
    }
#line 393 "unused_args.m"
}

#line 350 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__setup_local_var_usage_9_p_0(
#line 350 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__1_1,
#line 350 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_2,
#line 350 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_VarUsage_3,
#line 350 "unused_args.m"
  MR_Word transform_hlds__unused_args__HeadVar__4_4,
#line 350 "unused_args.m"
  MR_Word * transform_hlds__unused_args__HeadVar__5_5,
#line 350 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_6,
#line 350 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_OptProcs_7,
#line 350 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_8,
#line 350 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_9)
#line 350 "unused_args.m"
{
#line 355 "unused_args.m"
  while (MR_TRUE)
#line 355 "unused_args.m"
    {
#line 355 "unused_args.m"
      /* tailcall optimized into a loop */
#line 355 "unused_args.m"
      {
#line 355 "unused_args.m"
        MR_bool transform_hlds__unused_args__succeeded;

#line 355 "unused_args.m"
        if ((transform_hlds__unused_args__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 355 "unused_args.m"
          {
#line 355 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_9 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_8;
#line 355 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_OptProcs_7 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_6;
#line 355 "unused_args.m"
            *transform_hlds__unused_args__HeadVar__5_5 = transform_hlds__unused_args__HeadVar__4_4;
#line 355 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_VarUsage_3 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_2;
#line 355 "unused_args.m"
          }
#line 355 "unused_args.m"
        else
#line 357 "unused_args.m"
          {
#line 357 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredId_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 0)));
#line 357 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__HeadVar__1_1, (MR_Integer) 1)));
#line 357 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_36_36;
#line 357 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_PredProcList_37_37;
#line 357 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_38_38;
#line 357 "unused_args.m"
            MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_39_39;
#line 357 "unused_args.m"
            MR_Word transform_hlds__unused_args__PredInfo_57;

#line 372 "unused_args.m"
            {
#line 372 "unused_args.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__unused_args__PredId_22, &transform_hlds__unused_args__PredInfo_57);
            }
#line 378 "unused_args.m"
            {
#line 378 "unused_args.m"
              transform_hlds__unused_args__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(transform_hlds__unused_args__PredInfo_57);
            }
#line 379 "unused_args.m"
            if (!(transform_hlds__unused_args__succeeded))
#line 380 "unused_args.m"
              {
#line 380 "unused_args.m"
                MR_Word transform_hlds__unused_args__Markers_58;

#line 380 "unused_args.m"
                {
#line 380 "unused_args.m"
                  hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__unused_args__PredInfo_57, &transform_hlds__unused_args__Markers_58);
                }
#line 381 "unused_args.m"
                {
#line 381 "unused_args.m"
                  transform_hlds__unused_args__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__unused_args__Markers_58, (MR_Integer) 0);
                }
#line 380 "unused_args.m"
              }
#line 385 "unused_args.m"
            if (transform_hlds__unused_args__succeeded)
#line 384 "unused_args.m"
              {
#line 384 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_39_39 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_8;
#line 384 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_OptProcs_38_38 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_6;
#line 384 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_PredProcList_37_37 = transform_hlds__unused_args__HeadVar__4_4;
#line 384 "unused_args.m"
                transform_hlds__unused_args__STATE_VARIABLE_VarUsage_36_36 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_2;
#line 384 "unused_args.m"
              }
#line 385 "unused_args.m"
            else
#line 386 "unused_args.m"
              {
#line 386 "unused_args.m"
                MR_Word transform_hlds__unused_args__ProcIds_59;

#line 386 "unused_args.m"
                {
#line 386 "unused_args.m"
                  transform_hlds__unused_args__ProcIds_59 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__unused_args__PredInfo_57);
                }
#line 387 "unused_args.m"
                {
#line 387 "unused_args.m"
                  transform_hlds__unused_args__setup_pred_args_10_p_0(transform_hlds__unused_args__PredId_22, transform_hlds__unused_args__ProcIds_59, transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_2, &transform_hlds__unused_args__STATE_VARIABLE_VarUsage_36_36, transform_hlds__unused_args__HeadVar__4_4, &transform_hlds__unused_args__STATE_VARIABLE_PredProcList_37_37, transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_6, &transform_hlds__unused_args__STATE_VARIABLE_OptProcs_38_38, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_39_39);
                }
#line 386 "unused_args.m"
              }
#line 360 "unused_args.m"
            /* direct tailcall eliminated */
#line 360 "unused_args.m"
            {
#line 360 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__1__tmp_copy_1 = transform_hlds__unused_args__PredIds_23;
#line 360 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_2 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_36_36;
#line 360 "unused_args.m"
              MR_Word transform_hlds__unused_args__HeadVar__4__tmp_copy_4 = transform_hlds__unused_args__STATE_VARIABLE_PredProcList_37_37;
#line 360 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0__tmp_copy_6 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_38_38;
#line 360 "unused_args.m"
              MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_39_39;

#line 360 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_8 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8;
#line 360 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0_6 = transform_hlds__unused_args__STATE_VARIABLE_OptProcs_0__tmp_copy_6;
#line 360 "unused_args.m"
              transform_hlds__unused_args__HeadVar__4_4 = transform_hlds__unused_args__HeadVar__4__tmp_copy_4;
#line 360 "unused_args.m"
              transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0_2 = transform_hlds__unused_args__STATE_VARIABLE_VarUsage_0__tmp_copy_2;
#line 360 "unused_args.m"
              transform_hlds__unused_args__HeadVar__1_1 = transform_hlds__unused_args__HeadVar__1__tmp_copy_1;
#line 360 "unused_args.m"
            }
#line 360 "unused_args.m"
            continue;
#line 357 "unused_args.m"
          }
#line 355 "unused_args.m"
      }
#line 355 "unused_args.m"
      break;
#line 355 "unused_args.m"
    }
#line 350 "unused_args.m"
}

#line 338 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__init_var_usage_5_p_0(
#line 338 "unused_args.m"
  MR_Word * transform_hlds__unused_args__VarUsage_6,
#line 338 "unused_args.m"
  MR_Word * transform_hlds__unused_args__PredProcList_7,
#line 338 "unused_args.m"
  MR_Word * transform_hlds__unused_args__ProcCallInfo_8,
#line 338 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_13,
#line 338 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_14)
#line 338 "unused_args.m"
{
#line 341 "unused_args.m"
  {
#line 341 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 341 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeCtorInfo_17_17 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 341 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcCallInfo0_10;
#line 341 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarUsage0_11;
#line 341 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredIds_12;

#line 342 "unused_args.m"
    {
#line 342 "unused_args.m"
      mercury__map__init_1_p_0(transform_hlds__unused_args__TypeCtorInfo_17_17, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0, &transform_hlds__unused_args__ProcCallInfo0_10);
    }
#line 343 "unused_args.m"
    {
#line 343 "unused_args.m"
      mercury__map__init_1_p_0(transform_hlds__unused_args__TypeCtorInfo_17_17, (MR_Word) &transform_hlds__unused_args_scalar_common_2[1], &transform_hlds__unused_args__VarUsage0_11);
    }
#line 344 "unused_args.m"
    {
#line 344 "unused_args.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_13, &transform_hlds__unused_args__PredIds_12);
    }
#line 345 "unused_args.m"
    {
#line 345 "unused_args.m"
      transform_hlds__unused_args__setup_local_var_usage_9_p_0(transform_hlds__unused_args__PredIds_12, transform_hlds__unused_args__VarUsage0_11, transform_hlds__unused_args__VarUsage_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__unused_args__PredProcList_7, transform_hlds__unused_args__ProcCallInfo0_10, transform_hlds__unused_args__ProcCallInfo_8, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_13, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_14);
#line 345 "unused_args.m"
      return;
    }
#line 341 "unused_args.m"
  }
#line 338 "unused_args.m"
}

#line 172 "unused_args.m"
static MR_Word MR_CALL 
transform_hlds__unused_args__get_unused_args_1_f_0(
#line 172 "unused_args.m"
  MR_Word transform_hlds__unused_args__UnusedArgs_3)
#line 172 "unused_args.m"
{
#line 174 "unused_args.m"
  {
#line 174 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 174 "unused_args.m"
    MR_Word transform_hlds__unused_args__HeadVar__2_2 = (MR_Word) transform_hlds__unused_args__UnusedArgs_3;

#line 174 "unused_args.m"
    return transform_hlds__unused_args__HeadVar__2_2;
#line 174 "unused_args.m"
  }
#line 172 "unused_args.m"
}

#line 311 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_6_p_0_3(
#line 311 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 311 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 311 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 311 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3,
#line 311 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_4,
#line 311 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_5)
#line 311 "unused_args.m"
{
#line 311 "unused_args.m"
  {
#line 311 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 311 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv5_STATE_VARIABLE_ProcCallInfo_47;
#line 311 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv4_STATE_VARIABLE_ModuleInfo_49;

#line 311 "unused_args.m"
    {
#line 311 "unused_args.m"
      transform_hlds__unused_args__unused_args_create_new_pred_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv5_STATE_VARIABLE_ProcCallInfo_47, ((MR_Word) transform_hlds__unused_args__wrapper_arg_4), &transform_hlds__unused_args__conv4_STATE_VARIABLE_ModuleInfo_49);
    }
#line 311 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv5_STATE_VARIABLE_ProcCallInfo_47));
#line 311 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_5 = ((MR_Box) (transform_hlds__unused_args__conv4_STATE_VARIABLE_ModuleInfo_49));
#line 311 "unused_args.m"
  }
#line 311 "unused_args.m"
}

#line 302 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_6_p_0_2(
#line 302 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 302 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 302 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 302 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3)
#line 302 "unused_args.m"
{
#line 302 "unused_args.m"
  {
#line 302 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 302 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv2_STATE_VARIABLE_AnalysisInfo_13;

#line 302 "unused_args.m"
    {
#line 302 "unused_args.m"
      transform_hlds__unused_args__record_intermod_dependencies_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv2_STATE_VARIABLE_AnalysisInfo_13);
    }
#line 302 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv2_STATE_VARIABLE_AnalysisInfo_13));
#line 302 "unused_args.m"
  }
#line 302 "unused_args.m"
}

#line 300 "unused_args.m"
static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_6_p_0_1(
#line 300 "unused_args.m"
  MR_Box transform_hlds__unused_args__closure_arg,
#line 300 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_1,
#line 300 "unused_args.m"
  MR_Box transform_hlds__unused_args__wrapper_arg_2,
#line 300 "unused_args.m"
  MR_Box * transform_hlds__unused_args__wrapper_arg_3)
#line 300 "unused_args.m"
{
#line 300 "unused_args.m"
  {
#line 300 "unused_args.m"
    MR_Box transform_hlds__unused_args__closure = transform_hlds__unused_args__closure_arg;
#line 300 "unused_args.m"
    MR_Word transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_13;

#line 300 "unused_args.m"
    {
#line 300 "unused_args.m"
      transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__unused_args__wrapper_arg_1), ((MR_Word) transform_hlds__unused_args__wrapper_arg_2), &transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_13);
    }
#line 300 "unused_args.m"
    *transform_hlds__unused_args__wrapper_arg_3 = ((MR_Box) (transform_hlds__unused_args__conv0_STATE_VARIABLE_AnalysisInfo_13));
#line 300 "unused_args.m"
  }
#line 300 "unused_args.m"
}

#line 59 "unused_args.m"
void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_6_p_0(
#line 59 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_38,
#line 59 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_39,
#line 59 "unused_args.m"
  MR_Word transform_hlds__unused_args__STATE_VARIABLE_Specs_0_40,
#line 59 "unused_args.m"
  MR_Word * transform_hlds__unused_args__STATE_VARIABLE_Specs_41)
#line 59 "unused_args.m"
{
#line 234 "unused_args.m"
  {
#line 234 "unused_args.m"
    MR_bool transform_hlds__unused_args__succeeded;
#line 234 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeCtorInfo_77_77;
#line 234 "unused_args.m"
    MR_Word transform_hlds__unused_args__TypeInfo_78_78;
#line 234 "unused_args.m"
    MR_Word transform_hlds__unused_args__Globals_10;
#line 234 "unused_args.m"
    MR_Word transform_hlds__unused_args__VeryVerbose_11;
#line 234 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarUsage0_12;
#line 234 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredProcs_13;
#line 234 "unused_args.m"
    MR_Word transform_hlds__unused_args__ProcCallInfo0_14;
#line 234 "unused_args.m"
    MR_Word transform_hlds__unused_args__VarUsage_15;
#line 234 "unused_args.m"
    MR_Word transform_hlds__unused_args__UnusedArgInfo0_16;
#line 234 "unused_args.m"
    MR_Word transform_hlds__unused_args__UnusedArgInfo_17;
#line 234 "unused_args.m"
    MR_Word transform_hlds__unused_args__PredProcsToFix_18;
#line 234 "unused_args.m"
    MR_Word transform_hlds__unused_args__MakeOpt_19;
#line 234 "unused_args.m"
    MR_Word transform_hlds__unused_args__IntermodAnalysis_20;
#line 234 "unused_args.m"
    MR_Word transform_hlds__unused_args__DoWarn_28;
#line 234 "unused_args.m"
    MR_Word transform_hlds__unused_args__MakeAnalysisRegistry_31;
#line 234 "unused_args.m"
    MR_Word transform_hlds__unused_args__DoFixup_36;
#line 234 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_45_45;
#line 234 "unused_args.m"
    MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_70_70;

#line 235 "unused_args.m"
    {
#line 235 "unused_args.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_38, &transform_hlds__unused_args__Globals_10);
    }
#line 236 "unused_args.m"
    {
#line 236 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_10, (MR_Integer) 46, &transform_hlds__unused_args__VeryVerbose_11);
    }
#line 237 "unused_args.m"
    {
#line 237 "unused_args.m"
      transform_hlds__unused_args__init_var_usage_5_p_0(&transform_hlds__unused_args__VarUsage0_12, &transform_hlds__unused_args__PredProcs_13, &transform_hlds__unused_args__ProcCallInfo0_14, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_0_38, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_45_45);
    }
#line 240 "unused_args.m"
    {
#line 240 "unused_args.m"
      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_117_115_101_100_95_97_114_103_115_95_112_97_115_115_95_95_91_50_93_95_48_5_p_0((MR_Integer) 0, transform_hlds__unused_args__PredProcs_13, transform_hlds__unused_args__VarUsage0_12, &transform_hlds__unused_args__VarUsage_15);
    }
#line 17611 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__TypeCtorInfo_77_77 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 17613 "transform_hlds.unused_args.c"
    transform_hlds__unused_args__TypeInfo_78_78 = (MR_Word) &transform_hlds__unused_args_scalar_common_1[0];
#line 243 "unused_args.m"
    {
#line 243 "unused_args.m"
      mercury__map__init_1_p_0(transform_hlds__unused_args__TypeCtorInfo_77_77, transform_hlds__unused_args__TypeInfo_78_78, &transform_hlds__unused_args__UnusedArgInfo0_16);
    }
#line 244 "unused_args.m"
    {
#line 244 "unused_args.m"
      transform_hlds__unused_args__get_unused_arg_info_5_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_45_45, transform_hlds__unused_args__PredProcs_13, transform_hlds__unused_args__VarUsage_15, transform_hlds__unused_args__UnusedArgInfo0_16, &transform_hlds__unused_args__UnusedArgInfo_17);
    }
#line 247 "unused_args.m"
    {
#line 247 "unused_args.m"
      mercury__map__keys_2_p_0(transform_hlds__unused_args__TypeCtorInfo_77_77, transform_hlds__unused_args__TypeInfo_78_78, transform_hlds__unused_args__UnusedArgInfo_17, &transform_hlds__unused_args__PredProcsToFix_18);
    }
#line 248 "unused_args.m"
    {
#line 248 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_10, (MR_Integer) 87, &transform_hlds__unused_args__MakeOpt_19);
    }
#line 249 "unused_args.m"
    {
#line 249 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_10, (MR_Integer) 334, &transform_hlds__unused_args__IntermodAnalysis_20);
    }
#line 275 "unused_args.m"
    {
#line 275 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_10, (MR_Integer) 10, &transform_hlds__unused_args__DoWarn_28);
    }
#line 254 "unused_args.m"
    transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__MakeOpt_19 == (MR_Integer) 1);
#line 254 "unused_args.m"
    if (transform_hlds__unused_args__succeeded)
#line 255 "unused_args.m"
      transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__IntermodAnalysis_20 == (MR_Integer) 0);
#line 17651 "transform_hlds.unused_args.c"
    if (transform_hlds__unused_args__succeeded)
#line 17653 "transform_hlds.unused_args.c"
      {
#line 17655 "transform_hlds.unused_args.c"
        MR_Word transform_hlds__unused_args__ModuleName_21;
#line 17657 "transform_hlds.unused_args.c"
        MR_String transform_hlds__unused_args__OptFileName_22;
#line 17659 "transform_hlds.unused_args.c"
        MR_Word transform_hlds__unused_args__OptFileRes_23;
#line 17661 "transform_hlds.unused_args.c"
        MR_Word transform_hlds__unused_args__WarnedPredIds0_29;

#line 257 "unused_args.m"
        {
#line 257 "unused_args.m"
          hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_45_45, &transform_hlds__unused_args__ModuleName_21);
        }
#line 258 "unused_args.m"
        {
#line 258 "unused_args.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(transform_hlds__unused_args__Globals_10, transform_hlds__unused_args__ModuleName_21, (MR_String) ".opt.tmp", (MR_Integer) 1, &transform_hlds__unused_args__OptFileName_22);
        }
#line 260 "unused_args.m"
        {
#line 260 "unused_args.m"
          mercury__io__open_append_4_p_0(transform_hlds__unused_args__OptFileName_22, &transform_hlds__unused_args__OptFileRes_23);
        }
#line 281 "unused_args.m"
        {
#line 281 "unused_args.m"
          mercury__set__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, &transform_hlds__unused_args__WarnedPredIds0_29);
        }
#line 17684 "transform_hlds.unused_args.c"
        if (((MR_tag((MR_Word) transform_hlds__unused_args__OptFileRes_23)) == (MR_mktag((MR_Integer) 1))))
#line 17686 "transform_hlds.unused_args.c"
          {
#line 17688 "transform_hlds.unused_args.c"
            MR_Word transform_hlds__unused_args__IOError_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unused_args__OptFileRes_23, (MR_Integer) 0)));
#line 17690 "transform_hlds.unused_args.c"
            MR_String transform_hlds__unused_args__IOErrorMessage_27;
#line 17692 "transform_hlds.unused_args.c"
            MR_Word transform_hlds__unused_args__V_53_53;
#line 17694 "transform_hlds.unused_args.c"
            MR_Word transform_hlds__unused_args__V_56_56;
#line 17696 "transform_hlds.unused_args.c"
            MR_Word transform_hlds__unused_args__V_57_57;
#line 17698 "transform_hlds.unused_args.c"
            MR_Word transform_hlds__unused_args__V_59_59;

#line 266 "unused_args.m"
            {
#line 266 "unused_args.m"
              mercury__io__error_message_2_p_0(transform_hlds__unused_args__IOError_26, &transform_hlds__unused_args__IOErrorMessage_27);
            }
#line 268 "unused_args.m"
            {
#line 268 "unused_args.m"
              transform_hlds__unused_args__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "unused_args.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_59_59, 0) = ((MR_Box) (transform_hlds__unused_args__IOErrorMessage_27));
#line 268 "unused_args.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 268 "unused_args.m"
            }
#line 267 "unused_args.m"
            {
#line 267 "unused_args.m"
              transform_hlds__unused_args__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "unused_args.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_57_57, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 267 "unused_args.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_57_57, 1) = ((MR_Box) (transform_hlds__unused_args__V_59_59));
#line 267 "unused_args.m"
            }
#line 267 "unused_args.m"
            {
#line 267 "unused_args.m"
              transform_hlds__unused_args__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "unused_args.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_56_56, 0) = ((MR_Box) (transform_hlds__unused_args__OptFileName_22));
#line 267 "unused_args.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_56_56, 1) = ((MR_Box) (transform_hlds__unused_args__V_57_57));
#line 267 "unused_args.m"
            }
#line 267 "unused_args.m"
            {
#line 267 "unused_args.m"
              transform_hlds__unused_args__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "unused_args.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_53_53, 0) = ((MR_Box) ((MR_String) "Cannot open \140"));
#line 267 "unused_args.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unused_args__V_53_53, 1) = ((MR_Box) (transform_hlds__unused_args__V_56_56));
#line 267 "unused_args.m"
            }
#line 267 "unused_args.m"
            {
#line 267 "unused_args.m"
              mercury__io__write_strings_3_p_0(transform_hlds__unused_args__V_53_53);
            }
#line 269 "unused_args.m"
            {
#line 269 "unused_args.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
#line 282 "unused_args.m"
            {
#line 282 "unused_args.m"
              transform_hlds__unused_args__output_warnings_and_pragmas_10_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_45_45, transform_hlds__unused_args__UnusedArgInfo_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__unused_args__DoWarn_28, transform_hlds__unused_args__PredProcsToFix_18, transform_hlds__unused_args__WarnedPredIds0_29, transform_hlds__unused_args__STATE_VARIABLE_Specs_0_40, transform_hlds__unused_args__STATE_VARIABLE_Specs_41);
            }
#line 17761 "transform_hlds.unused_args.c"
          }
#line 17763 "transform_hlds.unused_args.c"
        else
#line 17765 "transform_hlds.unused_args.c"
          {
#line 17767 "transform_hlds.unused_args.c"
            MR_Word transform_hlds__unused_args__OptFile_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unused_args__OptFileRes_23, (MR_Integer) 0)));
#line 17769 "transform_hlds.unused_args.c"
            MR_Word transform_hlds__unused_args__MaybeOptFile_110;

#line 263 "unused_args.m"
            {
#line 263 "unused_args.m"
              transform_hlds__unused_args__MaybeOptFile_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 263 "unused_args.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unused_args__MaybeOptFile_110, 0) = ((MR_Box) (transform_hlds__unused_args__OptFile_24));
#line 263 "unused_args.m"
            }
#line 282 "unused_args.m"
            {
#line 282 "unused_args.m"
              transform_hlds__unused_args__output_warnings_and_pragmas_10_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_45_45, transform_hlds__unused_args__UnusedArgInfo_17, transform_hlds__unused_args__MaybeOptFile_110, transform_hlds__unused_args__DoWarn_28, transform_hlds__unused_args__PredProcsToFix_18, transform_hlds__unused_args__WarnedPredIds0_29, transform_hlds__unused_args__STATE_VARIABLE_Specs_0_40, transform_hlds__unused_args__STATE_VARIABLE_Specs_41);
            }
#line 289 "unused_args.m"
            {
#line 289 "unused_args.m"
              mercury__io__close_output_3_p_0(transform_hlds__unused_args__OptFile_24);
            }
#line 17790 "transform_hlds.unused_args.c"
          }
#line 17792 "transform_hlds.unused_args.c"
      }
#line 17794 "transform_hlds.unused_args.c"
    else
#line 17796 "transform_hlds.unused_args.c"
      {
#line 277 "unused_args.m"
        transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__DoWarn_28 == (MR_Integer) 1);
#line 278 "unused_args.m"
        if (!(transform_hlds__unused_args__succeeded))
#line 278 "unused_args.m"
          transform_hlds__unused_args__succeeded = (transform_hlds__unused_args__MakeOpt_19 == (MR_Integer) 1);
#line 284 "unused_args.m"
        if (transform_hlds__unused_args__succeeded)
#line 281 "unused_args.m"
          {
#line 281 "unused_args.m"
            MR_Word transform_hlds__unused_args__WarnedPredIds0_96;

#line 281 "unused_args.m"
            {
#line 281 "unused_args.m"
              mercury__set__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, &transform_hlds__unused_args__WarnedPredIds0_96);
            }
#line 282 "unused_args.m"
            {
#line 282 "unused_args.m"
              transform_hlds__unused_args__output_warnings_and_pragmas_10_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_45_45, transform_hlds__unused_args__UnusedArgInfo_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__unused_args__DoWarn_28, transform_hlds__unused_args__PredProcsToFix_18, transform_hlds__unused_args__WarnedPredIds0_96, transform_hlds__unused_args__STATE_VARIABLE_Specs_0_40, transform_hlds__unused_args__STATE_VARIABLE_Specs_41);
            }
#line 281 "unused_args.m"
          }
#line 284 "unused_args.m"
        else
#line 285 "unused_args.m"
          *transform_hlds__unused_args__STATE_VARIABLE_Specs_41 = transform_hlds__unused_args__STATE_VARIABLE_Specs_0_40;
#line 17827 "transform_hlds.unused_args.c"
      }
#line 293 "unused_args.m"
    {
#line 293 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_10, (MR_Integer) 89, &transform_hlds__unused_args__MakeAnalysisRegistry_31);
    }
#line 305 "unused_args.m"
#line 305 "unused_args.m"
    switch (transform_hlds__unused_args__MakeAnalysisRegistry_31) {
#line 305 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 305 "unused_args.m"
      case (MR_Integer) 0:
#line 306 "unused_args.m"
        transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_70_70 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_45_45;
#line 305 "unused_args.m"
        break;
#line 305 "unused_args.m"
      case (MR_Integer) 1:
#line 296 "unused_args.m"
        {
#line 296 "unused_args.m"
          MR_Word transform_hlds__unused_args__TypeCtorInfo_84_84;
#line 296 "unused_args.m"
          MR_Word transform_hlds__unused_args__AnalysisInfo0_32;
#line 296 "unused_args.m"
          MR_Word transform_hlds__unused_args__PredIds_33;
#line 296 "unused_args.m"
          MR_Word transform_hlds__unused_args__AnalysisInfo1_34;
#line 296 "unused_args.m"
          MR_Word transform_hlds__unused_args__AnalysisInfo_35;
#line 296 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_68_68;
#line 296 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_69_69;
#line 299 "unused_args.m"
          MR_Box transform_hlds__unused_args__conv1_AnalysisInfo1_34;
#line 302 "unused_args.m"
          MR_Box transform_hlds__unused_args__conv3_AnalysisInfo_35;

#line 297 "unused_args.m"
          {
#line 297 "unused_args.m"
            hlds__hlds_module__module_info_get_analysis_info_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_45_45, &transform_hlds__unused_args__AnalysisInfo0_32);
          }
#line 298 "unused_args.m"
          {
#line 298 "unused_args.m"
            hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_45_45, &transform_hlds__unused_args__PredIds_33);
          }
#line 300 "unused_args.m"
          {
#line 300 "unused_args.m"
            transform_hlds__unused_args__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 300 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_68_68, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_5[0]));
#line 300 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_68_68, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_process_module_6_p_0_1));
#line 300 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 300 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_68_68, 3) = ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_45_45));
#line 300 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_68_68, 4) = ((MR_Box) (transform_hlds__unused_args__UnusedArgInfo_17));
#line 300 "unused_args.m"
          }
#line 17894 "transform_hlds.unused_args.c"
          transform_hlds__unused_args__TypeCtorInfo_84_84 = (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0;
#line 299 "unused_args.m"
          {
#line 299 "unused_args.m"
            mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__unused_args__TypeCtorInfo_84_84, transform_hlds__unused_args__V_68_68, transform_hlds__unused_args__PredIds_33, ((MR_Box) (transform_hlds__unused_args__AnalysisInfo0_32)), &transform_hlds__unused_args__conv1_AnalysisInfo1_34);
          }
#line 299 "unused_args.m"
          transform_hlds__unused_args__AnalysisInfo1_34 = ((MR_Word) transform_hlds__unused_args__conv1_AnalysisInfo1_34);
#line 302 "unused_args.m"
          {
#line 302 "unused_args.m"
            transform_hlds__unused_args__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 302 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_69_69, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_6[0]));
#line 302 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_69_69, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_process_module_6_p_0_2));
#line 302 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 302 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_69_69, 3) = ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_45_45));
#line 302 "unused_args.m"
          }
#line 302 "unused_args.m"
          {
#line 302 "unused_args.m"
            mercury__list__foldl_4_p_0(transform_hlds__unused_args__TypeCtorInfo_77_77, transform_hlds__unused_args__TypeCtorInfo_84_84, transform_hlds__unused_args__V_69_69, transform_hlds__unused_args__PredProcs_13, ((MR_Box) (transform_hlds__unused_args__AnalysisInfo1_34)), &transform_hlds__unused_args__conv3_AnalysisInfo_35);
          }
#line 302 "unused_args.m"
          transform_hlds__unused_args__AnalysisInfo_35 = ((MR_Word) transform_hlds__unused_args__conv3_AnalysisInfo_35);
#line 304 "unused_args.m"
          {
#line 304 "unused_args.m"
            hlds__hlds_module__module_info_set_analysis_info_3_p_0(transform_hlds__unused_args__AnalysisInfo_35, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_45_45, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_70_70);
          }
#line 296 "unused_args.m"
        }
#line 305 "unused_args.m"
        break;
#line 305 "unused_args.m"
    }
#line 308 "unused_args.m"
    {
#line 308 "unused_args.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unused_args__Globals_10, (MR_Integer) 353, &transform_hlds__unused_args__DoFixup_36);
    }
#line 325 "unused_args.m"
#line 325 "unused_args.m"
    switch (transform_hlds__unused_args__DoFixup_36) {
#line 325 "unused_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 325 "unused_args.m"
      case (MR_Integer) 0:
#line 326 "unused_args.m"
        *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_39 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_70_70;
#line 325 "unused_args.m"
        break;
#line 325 "unused_args.m"
      case (MR_Integer) 1:
#line 310 "unused_args.m"
        {
#line 310 "unused_args.m"
          MR_Word transform_hlds__unused_args__ProcCallInfo_37;
#line 310 "unused_args.m"
          MR_Word transform_hlds__unused_args__V_72_72;
#line 310 "unused_args.m"
          MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_73_73;
#line 310 "unused_args.m"
          MR_Word transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_74_74;
#line 311 "unused_args.m"
          MR_Box transform_hlds__unused_args__conv7_ProcCallInfo_37;
#line 311 "unused_args.m"
          MR_Box transform_hlds__unused_args__conv6_STATE_VARIABLE_ModuleInfo_73_73;

#line 311 "unused_args.m"
          {
#line 311 "unused_args.m"
            transform_hlds__unused_args__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 311 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_72_72, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_7[0]));
#line 311 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_72_72, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_process_module_6_p_0_3));
#line 311 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 311 "unused_args.m"
            MR_hl_field(MR_mktag(0), transform_hlds__unused_args__V_72_72, 3) = ((MR_Box) (transform_hlds__unused_args__UnusedArgInfo_17));
#line 311 "unused_args.m"
          }
#line 311 "unused_args.m"
          {
#line 311 "unused_args.m"
            mercury__list__foldl2_6_p_0(transform_hlds__unused_args__TypeCtorInfo_77_77, (MR_Word) &transform_hlds__unused_args_scalar_common_2[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__unused_args__V_72_72, transform_hlds__unused_args__PredProcsToFix_18, ((MR_Box) (transform_hlds__unused_args__ProcCallInfo0_14)), &transform_hlds__unused_args__conv7_ProcCallInfo_37, ((MR_Box) (transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_70_70)), &transform_hlds__unused_args__conv6_STATE_VARIABLE_ModuleInfo_73_73);
          }
#line 311 "unused_args.m"
          transform_hlds__unused_args__ProcCallInfo_37 = ((MR_Word) transform_hlds__unused_args__conv7_ProcCallInfo_37);
#line 311 "unused_args.m"
          transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_73_73 = ((MR_Word) transform_hlds__unused_args__conv6_STATE_VARIABLE_ModuleInfo_73_73);
#line 315 "unused_args.m"
          {
#line 315 "unused_args.m"
            transform_hlds__unused_args__unused_args_fixup_module_8_p_0(transform_hlds__unused_args__VarUsage_15, transform_hlds__unused_args__PredProcs_13, transform_hlds__unused_args__ProcCallInfo_37, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_73_73, &transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_74_74, transform_hlds__unused_args__VeryVerbose_11);
          }
#line 318 "unused_args.m"
          {
#line 318 "unused_args.m"
            transform_hlds__unused_args__succeeded = mercury__map__is_empty_1_p_0(transform_hlds__unused_args__TypeCtorInfo_77_77, (MR_Word) &transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0, transform_hlds__unused_args__ProcCallInfo_37);
          }
#line 320 "unused_args.m"
          if (transform_hlds__unused_args__succeeded)
#line 320 "unused_args.m"
            *transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_39 = transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_74_74;
#line 320 "unused_args.m"
          else
#line 323 "unused_args.m"
            {
#line 323 "unused_args.m"
              hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_74_74, transform_hlds__unused_args__STATE_VARIABLE_ModuleInfo_39);
#line 323 "unused_args.m"
              return;
            }
#line 310 "unused_args.m"
        }
#line 325 "unused_args.m"
        break;
#line 325 "unused_args.m"
    }
#line 234 "unused_args.m"
  }
#line 59 "unused_args.m"
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
