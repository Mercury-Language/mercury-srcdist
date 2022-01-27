/*
** Automatically generated from `ml_tailcall.m'
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


/* :- module ml_backend.ml_tailcall. */
/* :- implementation. */

/*
INIT mercury__ml_backend__ml_tailcall__init
ENDINIT
*/

#include "ml_backend.ml_tailcall.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
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
#include "counter.mih"
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
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 654 "ml_tailcall.m"
struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s {
#line 654 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_5;
#line 658 "ml_tailcall.m"
  MR_bool ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded;
#line 667 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__VarName_11;
#line 706 "ml_tailcall.m"
  jmp_buf ml_backend__ml_tailcall__check_const_3_f_0_env_0__commit_1;
#line 706 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_68_68;
#line 706 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_69;
#line 706 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_70_70;
#line 706 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_74;
#line 739 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv3_Locals_74;
#line 741 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_76;
#line 742 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv4_Defn_76;
#line 745 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_81;
#line 746 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv5_Param_81;
#line 715 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__MaybeSeqNum_30;
#line 715 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__PredLabel_35;
#line 715 "ml_tailcall.m"
  MR_Integer ml_backend__ml_tailcall__check_const_3_f_0_env_0__ProcId_36;
#line 728 "ml_tailcall.m"
  jmp_buf ml_backend__ml_tailcall__check_const_3_f_0_env_0__commit_0;
#line 728 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__TypeInfo_23_46;
#line 728 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41;
#line 728 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_42_42;
#line 728 "ml_tailcall.m"
  MR_Integer ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_43_43;
#line 728 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_44_44;
#line 728 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_49;
#line 739 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv0_Locals_49;
#line 741 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_51;
#line 742 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv1_Defn_51;
#line 745 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_56;
#line 746 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv2_Param_56;
#line 654 "ml_tailcall.m"
};

#line 623 "ml_tailcall.m"
struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s {
#line 623 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_5;
#line 627 "ml_tailcall.m"
  MR_bool ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded;
#line 702 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__VarName_21;
#line 706 "ml_tailcall.m"
  jmp_buf ml_backend__ml_tailcall__check_lval_3_f_0_env_0__commit_0;
#line 706 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__V_23_23;
#line 706 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Local_24;
#line 706 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__V_25_25;
#line 706 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_29;
#line 739 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv0_Locals_29;
#line 741 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Defn_31;
#line 742 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv1_Defn_31;
#line 745 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Param_36;
#line 746 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv2_Param_36;
#line 623 "ml_tailcall.m"
};


#line 243 "ml_backend.ml_tailcall.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_tailcall__list__pti_list_1__plain_ml_backend__ml_tailcall__type_ctor_info_tailcall_warning_0;

#line 246 "ml_backend.ml_tailcall.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0;

#line 249 "ml_backend.ml_tailcall.c"
static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_at_tail_0_0[1];

#line 252 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_at_tail_0_0;

#line 255 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_at_tail_0_1;

#line 258 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_at_tail_0_2;

#line 261 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_at_tail_0_0[2];

#line 264 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_at_tail_0_1[1];

#line 267 "ml_backend.ml_tailcall.c"
static const MR_DuPtagLayout ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_at_tail_0[2];

#line 270 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_at_tail_0[3];

#line 273 "ml_backend.ml_tailcall.c"
static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_at_tail_0[3];

#line 276 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_0;

#line 279 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_1;

#line 282 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_value_ordered_is_local_0[2];

#line 285 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_name_ordered_is_local_0[2];

#line 288 "ml_backend.ml_tailcall.c"
static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_is_local_0[2];

#line 291 "ml_backend.ml_tailcall.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_argument_0;

#line 294 "ml_backend.ml_tailcall.c"
static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_local_defns_0_0[1];

#line 297 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_0;

#line 300 "ml_backend.ml_tailcall.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 303 "ml_backend.ml_tailcall.c"
static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_local_defns_0_1[1];

#line 306 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_1;

#line 309 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_0[1];

#line 312 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_1[1];

#line 315 "ml_backend.ml_tailcall.c"
static const MR_DuPtagLayout ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_local_defns_0[2];

#line 318 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_local_defns_0[2];

#line 321 "ml_backend.ml_tailcall.c"
static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_local_defns_0[2];

#line 324 "ml_backend.ml_tailcall.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__ml_tailcall__type_ctor_info_local_defns_0;

#line 327 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_0;

#line 330 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_1;

#line 333 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_value_ordered_may_yield_dangling_stack_ref_0[2];

#line 336 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_name_ordered_may_yield_dangling_stack_ref_0[2];

#line 339 "ml_backend.ml_tailcall.c"
static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_may_yield_dangling_stack_ref_0[2];

#line 342 "ml_backend.ml_tailcall.c"
static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_tailcall_info_0_0[3];

#line 345 "ml_backend.ml_tailcall.c"
static const MR_ConstString ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_names_tailcall_info_0_0[3];

#line 348 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_tailcall_info_0_0;

#line 351 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_tailcall_info_0_0[1];

#line 354 "ml_backend.ml_tailcall.c"
static const MR_DuPtagLayout ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_tailcall_info_0[1];

#line 357 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_tailcall_info_0[1];

#line 360 "ml_backend.ml_tailcall.c"
static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_tailcall_info_0[1];

#line 363 "ml_backend.ml_tailcall.c"
static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_tailcall_warning_0_0[3];

#line 366 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_tailcall_warning_0_0;

#line 369 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_tailcall_warning_0_0[1];

#line 372 "ml_backend.ml_tailcall.c"
static const MR_DuPtagLayout ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_tailcall_warning_0[1];

#line 375 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_tailcall_warning_0[1];

#line 378 "ml_backend.ml_tailcall.c"
static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_tailcall_warning_0[1];

#line 381 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____at_tail_0_0_10001(
#line 384 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 386 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2);

#line 389 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____at_tail_0_0_10001(
#line 392 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 394 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 396 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3);

#line 399 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____is_local_0_0_10001(
#line 402 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 404 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2);

#line 407 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____is_local_0_0_10001(
#line 410 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 412 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 414 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3);

#line 417 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____local_defns_0_0_10001(
#line 420 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 422 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2);

#line 425 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____local_defns_0_0_10001(
#line 428 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 430 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 432 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3);

#line 435 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____locals_0_0_10001(
#line 438 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 440 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2);

#line 443 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____locals_0_0_10001(
#line 446 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 448 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 450 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3);

#line 453 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____may_yield_dangling_stack_ref_0_0_10001(
#line 456 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 458 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2);

#line 461 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____may_yield_dangling_stack_ref_0_0_10001(
#line 464 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 466 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 468 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3);

#line 471 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tailcall_info_0_0_10001(
#line 474 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 476 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2);

#line 479 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____tailcall_info_0_0_10001(
#line 482 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 484 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 486 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3);

#line 489 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tailcall_warning_0_0_10001(
#line 492 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 494 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2);

#line 497 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____tailcall_warning_0_0_10001(
#line 500 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 502 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 504 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3);

#line 339 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall__IntroducedFrom__pred__mark_tailcalls_in_stmt__339__1_2_p_0(
#line 339 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__1_72,
#line 339 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_87);

#line 752 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____tailcall_warning_0_0(
#line 752 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
#line 752 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
#line 752 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3);

#line 752 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tailcall_warning_0_0(
#line 752 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
#line 752 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2);

#line 150 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____tailcall_info_0_0(
#line 150 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
#line 150 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
#line 150 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3);

#line 150 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tailcall_info_0_0(
#line 150 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
#line 150 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2);

#line 556 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____may_yield_dangling_stack_ref_0_0(
#line 556 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
#line 556 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
#line 556 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3);

#line 556 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____may_yield_dangling_stack_ref_0_0(
#line 556 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_1,
#line 556 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2);

#line 143 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____locals_0_0(
#line 143 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
#line 143 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
#line 143 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3);

#line 143 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____locals_0_0(
#line 143 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
#line 143 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2);

#line 144 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____local_defns_0_0(
#line 144 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
#line 144 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
#line 144 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3);

#line 144 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____local_defns_0_0(
#line 144 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
#line 144 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2);

#line 527 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____is_local_0_0(
#line 527 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
#line 527 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
#line 527 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3);

#line 527 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____is_local_0_0(
#line 527 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_1,
#line 527 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2);

#line 129 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____at_tail_0_0(
#line 129 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
#line 129 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
#line 129 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3);

#line 129 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____at_tail_0_0(
#line 129 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
#line 129 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2);

#line 759 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__report_nontailcall_warning_4_p_0(
#line 759 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Globals_5,
#line 759 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Warning_6);

#line 706 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_10(
#line 706 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 739 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_12(
#line 739 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 706 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_13(
#line 706 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 742 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_15(
#line 742 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 741 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_14(
#line 741 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 746 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_17(
#line 746 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 745 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_16(
#line 745 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 706 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_11(
#line 706 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 706 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_18(
#line 706 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 728 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_1(
#line 728 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 739 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_3(
#line 739 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 728 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_4(
#line 728 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 742 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_6(
#line 742 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 741 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_5(
#line 741 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 746 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_8(
#line 746 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 745 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_7(
#line 745 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 728 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_2(
#line 728 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 728 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_9(
#line 728 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 654 "ml_tailcall.m"
static MR_Word MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0(
#line 654 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Const_4,
#line 654 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_5);

#line 706 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_1(
#line 706 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 739 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_3(
#line 739 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 706 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_4(
#line 706 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 742 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_6(
#line 742 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 741 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_5(
#line 741 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 746 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_8(
#line 746 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 745 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_7(
#line 745 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 706 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_2(
#line 706 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 706 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_9(
#line 706 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 623 "ml_tailcall.m"
static MR_Word MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0(
#line 623 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Lval_4,
#line 623 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_5);

#line 582 "ml_tailcall.m"
static MR_Word MR_CALL 
ml_backend__ml_tailcall__check_rval_2_f_0(
#line 582 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Rval_4,
#line 582 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_5);

#line 566 "ml_tailcall.m"
static MR_Word MR_CALL 
ml_backend__ml_tailcall__check_rvals_2_f_0(
#line 566 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
#line 566 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_2);

#line 531 "ml_tailcall.m"
static MR_Word MR_CALL 
ml_backend__ml_tailcall__lval_is_local_1_f_0(
#line 531 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Lval_3);

#line 515 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall__match_return_vals_2_p_0(
#line 515 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
#line 515 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2);

#line 485 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_default_6_p_0(
#line 485 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__TCallInfo_7,
#line 485 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Warnings_8,
#line 485 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__AtTailAfter_9,
#line 485 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_10,
#line 485 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Default0_11,
#line 485 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Default_12);

#line 474 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_case_6_p_0(
#line 474 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__TCallInfo_7,
#line 474 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Warnings_8,
#line 474 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__AtTailAfter_9,
#line 474 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_10,
#line 474 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Case0_11,
#line 474 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Case_12);

#line 461 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_cases_6_p_0(
#line 461 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__TCallInfo_1,
#line 461 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__2_2,
#line 461 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__AtTailAfter_3,
#line 461 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__4_4,
#line 461 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__5_5,
#line 461 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__6_6);

#line 391 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_call_7_p_0(
#line 391 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__TCallInfo_8,
#line 391 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Context_9,
#line 391 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Warnings_10,
#line 391 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__AtTailAfter_11,
#line 391 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_12,
#line 391 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Stmt0_13,
#line 391 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Stmt_14);

#line 339 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0_1(
#line 339 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__closure_arg,
#line 339 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1);

#line 276 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(
#line 276 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__TCallInfo_8,
#line 276 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Context_9,
#line 276 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Warnings_10,
#line 276 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__AtTailAfter0_11,
#line 276 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_12,
#line 276 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Stmt0_13,
#line 276 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Stmt_14);

#line 267 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_statement_6_p_0(
#line 267 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__TCallInfo_7,
#line 267 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Warnings_8,
#line 267 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_14,
#line 267 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_15,
#line 267 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_Statement_0_16,
#line 267 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_Statement_17);

#line 255 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_statements_6_p_0(
#line 255 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__TCallInfo_1,
#line 255 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__2_2,
#line 255 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_3,
#line 255 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_4,
#line 255 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__5_5,
#line 255 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__6_6);

#line 245 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_maybe_statement_6_p_0(
#line 245 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__TCallInfo_1,
#line 245 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__2_2,
#line 245 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_3,
#line 245 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_4,
#line 245 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__5_5,
#line 245 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__6_6);

#line 229 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_function_body_5_p_0(
#line 229 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__TCallInfo_6,
#line 229 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__AtTail_7,
#line 229 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Warnings_8,
#line 229 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Body0_9,
#line 229 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Body_10);

#line 184 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_defn_4_p_0_1(
#line 184 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__closure_arg,
#line 184 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 184 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_2,
#line 184 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_3);

#line 186 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_defn_4_p_0(
#line 186 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__ModuleName_5,
#line 186 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Defn0_6,
#line 186 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Defn_7,
#line 186 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Warnings_8);

#line 184 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_defns_4_p_0_1(
#line 184 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__closure_arg,
#line 184 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 184 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_2,
#line 184 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_3);

#line 179 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_defns_4_p_0(
#line 179 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__ModuleName_5,
#line 179 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__2_2,
#line 179 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Defns0_7,
#line 179 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Defns_8);

#line 104 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__ml_mark_tailcalls_5_p_0_2(
#line 104 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__closure_arg,
#line 104 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 104 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 104 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_3);

#line 184 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__ml_mark_tailcalls_5_p_0_1(
#line 184 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__closure_arg,
#line 184 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 184 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_2,
#line 184 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_1[14][2];

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_2[2][7];

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_3[1][1];

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_4[1][5];

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_5[1][4];




static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_1[14][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_tailcall_warning_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_local_defns_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning: recursive call is not tail recursive."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tailcall_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_tailcall_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_tailcall_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tailcall_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_tailcall_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In mode number"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of"))
  },
};

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_2[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__ml_tailcall__list__pti_list_1__plain_ml_backend__ml_tailcall__type_ctor_info_tailcall_warning_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_tailcall_warning_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_at_tail_0)),
    ((MR_Box) (&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_at_tail_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_5[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__ml_tailcall_scalar_common_4[0])),
    ((MR_Box) (ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1230 "ml_backend.ml_tailcall.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_tailcall__list__pti_list_1__plain_ml_backend__ml_tailcall__type_ctor_info_tailcall_warning_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_tailcall_warning_0
  }
};

#line 1238 "ml_backend.ml_tailcall.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

#line 1246 "ml_backend.ml_tailcall.c"
static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_at_tail_0_0[1] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0
};

#line 1251 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_at_tail_0_0 = {
  (MR_String) "at_tail",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_at_tail_0_0,
  NULL,
  NULL,
  NULL
};

#line 1266 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_at_tail_0_1 = {
  (MR_String) "not_at_tail_seen_reccall",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1281 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_at_tail_0_2 = {
  (MR_String) "not_at_tail_have_not_seen_reccall",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1296 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_at_tail_0_0[2] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_at_tail_0_1,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_at_tail_0_2
};

#line 1302 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_at_tail_0_1[1] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_at_tail_0_0
};

#line 1307 "ml_backend.ml_tailcall.c"
static const MR_DuPtagLayout ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_at_tail_0[2] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_at_tail_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_at_tail_0_1
  }
};

#line 1321 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_at_tail_0[3] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_at_tail_0_0,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_at_tail_0_2,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_at_tail_0_1
};

#line 1328 "ml_backend.ml_tailcall.c"
static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_at_tail_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1335 "ml_backend.ml_tailcall.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_at_tail_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_tailcall____Unify____at_tail_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tailcall____Compare____at_tail_0_0_10001)),
  (MR_String) "ml_backend.ml_tailcall",
  (MR_String) "at_tail",
  {     ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_at_tail_0 },
  {     ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_at_tail_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_at_tail_0
};

#line 1352 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_0 = {
  (MR_String) "is_local",
  (MR_Integer) 0
};

#line 1358 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_1 = {
  (MR_String) "is_not_local",
  (MR_Integer) 1
};

#line 1364 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_value_ordered_is_local_0[2] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_0,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_1
};

#line 1370 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_name_ordered_is_local_0[2] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_0,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_1
};

#line 1376 "ml_backend.ml_tailcall.c"
static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_is_local_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1382 "ml_backend.ml_tailcall.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_is_local_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_tailcall____Unify____is_local_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tailcall____Compare____is_local_0_0_10001)),
  (MR_String) "ml_backend.ml_tailcall",
  (MR_String) "is_local",
  {     ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_name_ordered_is_local_0 },
  {     ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_value_ordered_is_local_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_is_local_0
};

#line 1399 "ml_backend.ml_tailcall.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_argument_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0
  }
};

#line 1407 "ml_backend.ml_tailcall.c"
static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_local_defns_0_0[1] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_argument_0
};

#line 1412 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_0 = {
  (MR_String) "local_params",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_local_defns_0_0,
  NULL,
  NULL,
  NULL
};

#line 1427 "ml_backend.ml_tailcall.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 1435 "ml_backend.ml_tailcall.c"
static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_local_defns_0_1[1] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0
};

#line 1440 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_1 = {
  (MR_String) "local_defns",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_local_defns_0_1,
  NULL,
  NULL,
  NULL
};

#line 1455 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_0[1] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_0
};

#line 1460 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_1[1] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_1
};

#line 1465 "ml_backend.ml_tailcall.c"
static const MR_DuPtagLayout ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_local_defns_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_1
  }
};

#line 1479 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_local_defns_0[2] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_1,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_0
};

#line 1485 "ml_backend.ml_tailcall.c"
static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_local_defns_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1491 "ml_backend.ml_tailcall.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_local_defns_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_tailcall____Unify____local_defns_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tailcall____Compare____local_defns_0_0_10001)),
  (MR_String) "ml_backend.ml_tailcall",
  (MR_String) "local_defns",
  {     ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_local_defns_0 },
  {     ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_local_defns_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_local_defns_0
};

#line 1508 "ml_backend.ml_tailcall.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__ml_tailcall__type_ctor_info_local_defns_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_local_defns_0
  }
};

#line 1516 "ml_backend.ml_tailcall.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_locals_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_tailcall____Unify____locals_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tailcall____Compare____locals_0_0_10001)),
  (MR_String) "ml_backend.ml_tailcall",
  (MR_String) "locals",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_tailcall__list__ti_list_1ml_backend__ml_tailcall__type_ctor_info_local_defns_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1533 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_0 = {
  (MR_String) "may_yield_dangling_stack_ref",
  (MR_Integer) 0
};

#line 1539 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_1 = {
  (MR_String) "will_not_yield_dangling_stack_ref",
  (MR_Integer) 1
};

#line 1545 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_value_ordered_may_yield_dangling_stack_ref_0[2] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_0,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_1
};

#line 1551 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_name_ordered_may_yield_dangling_stack_ref_0[2] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_0,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_1
};

#line 1557 "ml_backend.ml_tailcall.c"
static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_may_yield_dangling_stack_ref_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1563 "ml_backend.ml_tailcall.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_may_yield_dangling_stack_ref_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_tailcall____Unify____may_yield_dangling_stack_ref_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tailcall____Compare____may_yield_dangling_stack_ref_0_0_10001)),
  (MR_String) "ml_backend.ml_tailcall",
  (MR_String) "may_yield_dangling_stack_ref",
  {     ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_name_ordered_may_yield_dangling_stack_ref_0 },
  {     ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_value_ordered_may_yield_dangling_stack_ref_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_may_yield_dangling_stack_ref_0
};

#line 1580 "ml_backend.ml_tailcall.c"
static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_tailcall_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_entity_name_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_tailcall__list__ti_list_1ml_backend__ml_tailcall__type_ctor_info_local_defns_0
};

#line 1587 "ml_backend.ml_tailcall.c"
static const MR_ConstString ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_names_tailcall_info_0_0[3] = {
  (MR_String) "tci_module_name",
  (MR_String) "tci_function_name",
  (MR_String) "tci_locals"
};

#line 1594 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_tailcall_info_0_0 = {
  (MR_String) "tailcall_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_tailcall_info_0_0,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_names_tailcall_info_0_0,
  NULL,
  NULL
};

#line 1609 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_tailcall_info_0_0[1] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_tailcall_info_0_0
};

#line 1614 "ml_backend.ml_tailcall.c"
static const MR_DuPtagLayout ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_tailcall_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_tailcall_info_0_0
  }
};

#line 1623 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_tailcall_info_0[1] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_tailcall_info_0_0
};

#line 1628 "ml_backend.ml_tailcall.c"
static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_tailcall_info_0[1] = {
  (MR_Integer) 0
};

#line 1633 "ml_backend.ml_tailcall.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_tailcall_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_tailcall____Unify____tailcall_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tailcall____Compare____tailcall_info_0_0_10001)),
  (MR_String) "ml_backend.ml_tailcall",
  (MR_String) "tailcall_info",
  {     ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_tailcall_info_0 },
  {     ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_tailcall_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_tailcall_info_0
};

#line 1650 "ml_backend.ml_tailcall.c"
static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_tailcall_warning_0_0[3] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_pred_label_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_context_0
};

#line 1657 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_tailcall_warning_0_0 = {
  (MR_String) "tailcall_warning",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_tailcall_warning_0_0,
  NULL,
  NULL,
  NULL
};

#line 1672 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_tailcall_warning_0_0[1] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_tailcall_warning_0_0
};

#line 1677 "ml_backend.ml_tailcall.c"
static const MR_DuPtagLayout ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_tailcall_warning_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_tailcall_warning_0_0
  }
};

#line 1686 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_tailcall_warning_0[1] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_tailcall_warning_0_0
};

#line 1691 "ml_backend.ml_tailcall.c"
static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_tailcall_warning_0[1] = {
  (MR_Integer) 0
};

#line 1696 "ml_backend.ml_tailcall.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_tailcall_warning_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_tailcall____Unify____tailcall_warning_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tailcall____Compare____tailcall_warning_0_0_10001)),
  (MR_String) "ml_backend.ml_tailcall",
  (MR_String) "tailcall_warning",
  {     ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_tailcall_warning_0 },
  {     ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_tailcall_warning_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_tailcall_warning_0
};

#line 1713 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____at_tail_0_0_10001(
#line 1716 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 1718 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2)
#line 1720 "ml_backend.ml_tailcall.c"
{
#line 1722 "ml_backend.ml_tailcall.c"
  {
#line 1724 "ml_backend.ml_tailcall.c"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 1727 "ml_backend.ml_tailcall.c"
    {
#line 1729 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____at_tail_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    }
#line 1732 "ml_backend.ml_tailcall.c"
    return ml_backend__ml_tailcall__succeeded;
#line 1734 "ml_backend.ml_tailcall.c"
  }
#line 1736 "ml_backend.ml_tailcall.c"
}

#line 1739 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____at_tail_0_0_10001(
#line 1742 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 1744 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 1746 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3)
#line 1748 "ml_backend.ml_tailcall.c"
{
#line 1750 "ml_backend.ml_tailcall.c"
  {
#line 1752 "ml_backend.ml_tailcall.c"
    MR_Word ml_backend__ml_tailcall__conv0_HeadVar__1_1;

#line 1755 "ml_backend.ml_tailcall.c"
    {
#line 1757 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall____Compare____at_tail_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    }
#line 1760 "ml_backend.ml_tailcall.c"
    *ml_backend__ml_tailcall__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tailcall__conv0_HeadVar__1_1));
#line 1762 "ml_backend.ml_tailcall.c"
  }
#line 1764 "ml_backend.ml_tailcall.c"
}

#line 1767 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____is_local_0_0_10001(
#line 1770 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 1772 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2)
#line 1774 "ml_backend.ml_tailcall.c"
{
#line 1776 "ml_backend.ml_tailcall.c"
  {
#line 1778 "ml_backend.ml_tailcall.c"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 1781 "ml_backend.ml_tailcall.c"
    {
#line 1783 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____is_local_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    }
#line 1786 "ml_backend.ml_tailcall.c"
    return ml_backend__ml_tailcall__succeeded;
#line 1788 "ml_backend.ml_tailcall.c"
  }
#line 1790 "ml_backend.ml_tailcall.c"
}

#line 1793 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____is_local_0_0_10001(
#line 1796 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 1798 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 1800 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3)
#line 1802 "ml_backend.ml_tailcall.c"
{
#line 1804 "ml_backend.ml_tailcall.c"
  {
#line 1806 "ml_backend.ml_tailcall.c"
    MR_Word ml_backend__ml_tailcall__conv0_HeadVar__1_1;

#line 1809 "ml_backend.ml_tailcall.c"
    {
#line 1811 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall____Compare____is_local_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    }
#line 1814 "ml_backend.ml_tailcall.c"
    *ml_backend__ml_tailcall__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tailcall__conv0_HeadVar__1_1));
#line 1816 "ml_backend.ml_tailcall.c"
  }
#line 1818 "ml_backend.ml_tailcall.c"
}

#line 1821 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____local_defns_0_0_10001(
#line 1824 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 1826 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2)
#line 1828 "ml_backend.ml_tailcall.c"
{
#line 1830 "ml_backend.ml_tailcall.c"
  {
#line 1832 "ml_backend.ml_tailcall.c"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 1835 "ml_backend.ml_tailcall.c"
    {
#line 1837 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____local_defns_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    }
#line 1840 "ml_backend.ml_tailcall.c"
    return ml_backend__ml_tailcall__succeeded;
#line 1842 "ml_backend.ml_tailcall.c"
  }
#line 1844 "ml_backend.ml_tailcall.c"
}

#line 1847 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____local_defns_0_0_10001(
#line 1850 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 1852 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 1854 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3)
#line 1856 "ml_backend.ml_tailcall.c"
{
#line 1858 "ml_backend.ml_tailcall.c"
  {
#line 1860 "ml_backend.ml_tailcall.c"
    MR_Word ml_backend__ml_tailcall__conv0_HeadVar__1_1;

#line 1863 "ml_backend.ml_tailcall.c"
    {
#line 1865 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall____Compare____local_defns_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    }
#line 1868 "ml_backend.ml_tailcall.c"
    *ml_backend__ml_tailcall__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tailcall__conv0_HeadVar__1_1));
#line 1870 "ml_backend.ml_tailcall.c"
  }
#line 1872 "ml_backend.ml_tailcall.c"
}

#line 1875 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____locals_0_0_10001(
#line 1878 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 1880 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2)
#line 1882 "ml_backend.ml_tailcall.c"
{
#line 1884 "ml_backend.ml_tailcall.c"
  {
#line 1886 "ml_backend.ml_tailcall.c"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 1889 "ml_backend.ml_tailcall.c"
    {
#line 1891 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____locals_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    }
#line 1894 "ml_backend.ml_tailcall.c"
    return ml_backend__ml_tailcall__succeeded;
#line 1896 "ml_backend.ml_tailcall.c"
  }
#line 1898 "ml_backend.ml_tailcall.c"
}

#line 1901 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____locals_0_0_10001(
#line 1904 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 1906 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 1908 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3)
#line 1910 "ml_backend.ml_tailcall.c"
{
#line 1912 "ml_backend.ml_tailcall.c"
  {
#line 1914 "ml_backend.ml_tailcall.c"
    MR_Word ml_backend__ml_tailcall__conv0_HeadVar__1_1;

#line 1917 "ml_backend.ml_tailcall.c"
    {
#line 1919 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall____Compare____locals_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    }
#line 1922 "ml_backend.ml_tailcall.c"
    *ml_backend__ml_tailcall__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tailcall__conv0_HeadVar__1_1));
#line 1924 "ml_backend.ml_tailcall.c"
  }
#line 1926 "ml_backend.ml_tailcall.c"
}

#line 1929 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____may_yield_dangling_stack_ref_0_0_10001(
#line 1932 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 1934 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2)
#line 1936 "ml_backend.ml_tailcall.c"
{
#line 1938 "ml_backend.ml_tailcall.c"
  {
#line 1940 "ml_backend.ml_tailcall.c"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 1943 "ml_backend.ml_tailcall.c"
    {
#line 1945 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____may_yield_dangling_stack_ref_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    }
#line 1948 "ml_backend.ml_tailcall.c"
    return ml_backend__ml_tailcall__succeeded;
#line 1950 "ml_backend.ml_tailcall.c"
  }
#line 1952 "ml_backend.ml_tailcall.c"
}

#line 1955 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____may_yield_dangling_stack_ref_0_0_10001(
#line 1958 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 1960 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 1962 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3)
#line 1964 "ml_backend.ml_tailcall.c"
{
#line 1966 "ml_backend.ml_tailcall.c"
  {
#line 1968 "ml_backend.ml_tailcall.c"
    MR_Word ml_backend__ml_tailcall__conv0_HeadVar__1_1;

#line 1971 "ml_backend.ml_tailcall.c"
    {
#line 1973 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall____Compare____may_yield_dangling_stack_ref_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    }
#line 1976 "ml_backend.ml_tailcall.c"
    *ml_backend__ml_tailcall__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tailcall__conv0_HeadVar__1_1));
#line 1978 "ml_backend.ml_tailcall.c"
  }
#line 1980 "ml_backend.ml_tailcall.c"
}

#line 1983 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tailcall_info_0_0_10001(
#line 1986 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 1988 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2)
#line 1990 "ml_backend.ml_tailcall.c"
{
#line 1992 "ml_backend.ml_tailcall.c"
  {
#line 1994 "ml_backend.ml_tailcall.c"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 1997 "ml_backend.ml_tailcall.c"
    {
#line 1999 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____tailcall_info_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    }
#line 2002 "ml_backend.ml_tailcall.c"
    return ml_backend__ml_tailcall__succeeded;
#line 2004 "ml_backend.ml_tailcall.c"
  }
#line 2006 "ml_backend.ml_tailcall.c"
}

#line 2009 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____tailcall_info_0_0_10001(
#line 2012 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 2014 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 2016 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3)
#line 2018 "ml_backend.ml_tailcall.c"
{
#line 2020 "ml_backend.ml_tailcall.c"
  {
#line 2022 "ml_backend.ml_tailcall.c"
    MR_Word ml_backend__ml_tailcall__conv0_HeadVar__1_1;

#line 2025 "ml_backend.ml_tailcall.c"
    {
#line 2027 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall____Compare____tailcall_info_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    }
#line 2030 "ml_backend.ml_tailcall.c"
    *ml_backend__ml_tailcall__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tailcall__conv0_HeadVar__1_1));
#line 2032 "ml_backend.ml_tailcall.c"
  }
#line 2034 "ml_backend.ml_tailcall.c"
}

#line 2037 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tailcall_warning_0_0_10001(
#line 2040 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 2042 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2)
#line 2044 "ml_backend.ml_tailcall.c"
{
#line 2046 "ml_backend.ml_tailcall.c"
  {
#line 2048 "ml_backend.ml_tailcall.c"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 2051 "ml_backend.ml_tailcall.c"
    {
#line 2053 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____tailcall_warning_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    }
#line 2056 "ml_backend.ml_tailcall.c"
    return ml_backend__ml_tailcall__succeeded;
#line 2058 "ml_backend.ml_tailcall.c"
  }
#line 2060 "ml_backend.ml_tailcall.c"
}

#line 2063 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____tailcall_warning_0_0_10001(
#line 2066 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 2068 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 2070 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3)
#line 2072 "ml_backend.ml_tailcall.c"
{
#line 2074 "ml_backend.ml_tailcall.c"
  {
#line 2076 "ml_backend.ml_tailcall.c"
    MR_Word ml_backend__ml_tailcall__conv0_HeadVar__1_1;

#line 2079 "ml_backend.ml_tailcall.c"
    {
#line 2081 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall____Compare____tailcall_warning_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    }
#line 2084 "ml_backend.ml_tailcall.c"
    *ml_backend__ml_tailcall__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tailcall__conv0_HeadVar__1_1));
#line 2086 "ml_backend.ml_tailcall.c"
  }
#line 2088 "ml_backend.ml_tailcall.c"
}

#line 339 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall__IntroducedFrom__pred__mark_tailcalls_in_stmt__339__1_2_p_0(
#line 339 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__1_72,
#line 339 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_87)
#line 339 "ml_tailcall.m"
{
#line 339 "ml_tailcall.m"
  {
#line 339 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 339 "ml_tailcall.m"
    {
#line 339 "ml_tailcall.m"
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____at_tail_0_0(ml_backend__ml_tailcall__HeadVar__1_72, ml_backend__ml_tailcall__HeadVar__2_87);
    }
#line 339 "ml_tailcall.m"
    return ml_backend__ml_tailcall__succeeded;
#line 339 "ml_tailcall.m"
  }
#line 339 "ml_tailcall.m"
}

#line 752 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____tailcall_warning_0_0(
#line 752 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
#line 752 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
#line 752 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3)
#line 752 "ml_tailcall.m"
{
#line 752 "ml_tailcall.m"
  {
#line 752 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 752 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__CastX_12 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;
#line 752 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__CastY_13 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__3_3;

#line 752 "ml_tailcall.m"
    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastX_12 == ml_backend__ml_tailcall__CastY_13);
#line 752 "ml_tailcall.m"
    if (ml_backend__ml_tailcall__succeeded)
#line 2141 "ml_backend.ml_tailcall.c"
      *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 0;
#line 752 "ml_tailcall.m"
    else
#line 752 "ml_tailcall.m"
      {
#line 752 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
#line 752 "ml_tailcall.m"
        MR_Integer ml_backend__ml_tailcall__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 1)));
#line 752 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 2)));
#line 752 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 0)));
#line 752 "ml_tailcall.m"
        MR_Integer ml_backend__ml_tailcall__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 1)));
#line 752 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 2)));
#line 752 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_10_10;

#line 752 "ml_tailcall.m"
        {
#line 752 "ml_tailcall.m"
          ml_backend__mlds____Compare____mlds_pred_label_0_0(&ml_backend__ml_tailcall__V_10_10, ml_backend__ml_tailcall__V_4_4, ml_backend__ml_tailcall__V_7_7);
        }
#line 2167 "ml_backend.ml_tailcall.c"
        ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_10_10 == (MR_Integer) 0);
#line 752 "ml_tailcall.m"
        ml_backend__ml_tailcall__succeeded = !(ml_backend__ml_tailcall__succeeded);
#line 752 "ml_tailcall.m"
        if (ml_backend__ml_tailcall__succeeded)
#line 752 "ml_tailcall.m"
          *ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__V_10_10;
#line 752 "ml_tailcall.m"
        else
#line 752 "ml_tailcall.m"
          {
#line 752 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__V_11_11;

#line 752 "ml_tailcall.m"
            {
#line 752 "ml_tailcall.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_tailcall__V_11_11, ml_backend__ml_tailcall__V_5_5, ml_backend__ml_tailcall__V_8_8);
            }
#line 2187 "ml_backend.ml_tailcall.c"
            ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_11_11 == (MR_Integer) 0);
#line 752 "ml_tailcall.m"
            ml_backend__ml_tailcall__succeeded = !(ml_backend__ml_tailcall__succeeded);
#line 752 "ml_tailcall.m"
            if (ml_backend__ml_tailcall__succeeded)
#line 752 "ml_tailcall.m"
              *ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__V_11_11;
#line 752 "ml_tailcall.m"
            else
#line 752 "ml_tailcall.m"
              {
#line 752 "ml_tailcall.m"
                ml_backend__mlds____Compare____mlds_context_0_0(ml_backend__ml_tailcall__HeadVar__1_1, ml_backend__ml_tailcall__V_6_6, ml_backend__ml_tailcall__V_9_9);
              }
#line 752 "ml_tailcall.m"
          }
#line 752 "ml_tailcall.m"
      }
#line 752 "ml_tailcall.m"
  }
#line 752 "ml_tailcall.m"
}

#line 752 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tailcall_warning_0_0(
#line 752 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
#line 752 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2)
#line 752 "ml_tailcall.m"
{
#line 752 "ml_tailcall.m"
  {
#line 752 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 752 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__CastX_9 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__1_1;
#line 752 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__CastY_10 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;

#line 752 "ml_tailcall.m"
    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastX_9 == ml_backend__ml_tailcall__CastY_10);
#line 752 "ml_tailcall.m"
    if (ml_backend__ml_tailcall__succeeded)
#line 752 "ml_tailcall.m"
      ml_backend__ml_tailcall__succeeded = MR_TRUE;
#line 752 "ml_tailcall.m"
    else
#line 752 "ml_tailcall.m"
      {
#line 752 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 0)));
#line 752 "ml_tailcall.m"
        MR_Integer ml_backend__ml_tailcall__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 1)));
#line 752 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 2)));
#line 752 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
#line 752 "ml_tailcall.m"
        MR_Integer ml_backend__ml_tailcall__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 1)));
#line 752 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 2)));

#line 2252 "ml_backend.ml_tailcall.c"
        {
#line 2254 "ml_backend.ml_tailcall.c"
          ml_backend__ml_tailcall__succeeded = ml_backend__mlds____Unify____mlds_pred_label_0_0(ml_backend__ml_tailcall__V_3_3, ml_backend__ml_tailcall__V_6_6);
        }
#line 752 "ml_tailcall.m"
        if (ml_backend__ml_tailcall__succeeded)
#line 752 "ml_tailcall.m"
          {
#line 2261 "ml_backend.ml_tailcall.c"
            ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_4_4 == ml_backend__ml_tailcall__V_7_7);
#line 752 "ml_tailcall.m"
            if (ml_backend__ml_tailcall__succeeded)
#line 2265 "ml_backend.ml_tailcall.c"
              {
#line 2267 "ml_backend.ml_tailcall.c"
                ml_backend__ml_tailcall__succeeded = ml_backend__mlds____Unify____mlds_context_0_0(ml_backend__ml_tailcall__V_5_5, ml_backend__ml_tailcall__V_8_8);
              }
#line 752 "ml_tailcall.m"
          }
#line 752 "ml_tailcall.m"
      }
#line 752 "ml_tailcall.m"
    return ml_backend__ml_tailcall__succeeded;
#line 752 "ml_tailcall.m"
  }
#line 752 "ml_tailcall.m"
}

#line 150 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____tailcall_info_0_0(
#line 150 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
#line 150 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
#line 150 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3)
#line 150 "ml_tailcall.m"
{
#line 150 "ml_tailcall.m"
  {
#line 150 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 150 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__CastX_12 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;
#line 150 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__CastY_13 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__3_3;

#line 150 "ml_tailcall.m"
    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastX_12 == ml_backend__ml_tailcall__CastY_13);
#line 150 "ml_tailcall.m"
    if (ml_backend__ml_tailcall__succeeded)
#line 2305 "ml_backend.ml_tailcall.c"
      *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 0;
#line 150 "ml_tailcall.m"
    else
#line 150 "ml_tailcall.m"
      {
#line 150 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
#line 150 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 1)));
#line 150 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 2)));
#line 150 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 0)));
#line 150 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 1)));
#line 150 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 2)));
#line 150 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_10_10;

#line 150 "ml_tailcall.m"
        {
#line 150 "ml_tailcall.m"
          ml_backend__mlds____Compare____mlds_module_name_0_0(&ml_backend__ml_tailcall__V_10_10, ml_backend__ml_tailcall__V_4_4, ml_backend__ml_tailcall__V_7_7);
        }
#line 2331 "ml_backend.ml_tailcall.c"
        ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_10_10 == (MR_Integer) 0);
#line 150 "ml_tailcall.m"
        ml_backend__ml_tailcall__succeeded = !(ml_backend__ml_tailcall__succeeded);
#line 150 "ml_tailcall.m"
        if (ml_backend__ml_tailcall__succeeded)
#line 150 "ml_tailcall.m"
          *ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__V_10_10;
#line 150 "ml_tailcall.m"
        else
#line 150 "ml_tailcall.m"
          {
#line 150 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__V_11_11;

#line 150 "ml_tailcall.m"
            {
#line 150 "ml_tailcall.m"
              ml_backend__mlds____Compare____mlds_entity_name_0_0(&ml_backend__ml_tailcall__V_11_11, ml_backend__ml_tailcall__V_5_5, ml_backend__ml_tailcall__V_8_8);
            }
#line 2351 "ml_backend.ml_tailcall.c"
            ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_11_11 == (MR_Integer) 0);
#line 150 "ml_tailcall.m"
            ml_backend__ml_tailcall__succeeded = !(ml_backend__ml_tailcall__succeeded);
#line 150 "ml_tailcall.m"
            if (ml_backend__ml_tailcall__succeeded)
#line 150 "ml_tailcall.m"
              *ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__V_11_11;
#line 150 "ml_tailcall.m"
            else
#line 150 "ml_tailcall.m"
              {
#line 150 "ml_tailcall.m"
                {
#line 150 "ml_tailcall.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[4], ml_backend__ml_tailcall__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tailcall__V_6_6)), ((MR_Box) (ml_backend__ml_tailcall__V_9_9)));
                }
#line 150 "ml_tailcall.m"
              }
#line 150 "ml_tailcall.m"
          }
#line 150 "ml_tailcall.m"
      }
#line 150 "ml_tailcall.m"
  }
#line 150 "ml_tailcall.m"
}

#line 150 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tailcall_info_0_0(
#line 150 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
#line 150 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2)
#line 150 "ml_tailcall.m"
{
#line 150 "ml_tailcall.m"
  {
#line 150 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 150 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__CastX_9 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__1_1;
#line 150 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__CastY_10 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;

#line 150 "ml_tailcall.m"
    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastX_9 == ml_backend__ml_tailcall__CastY_10);
#line 150 "ml_tailcall.m"
    if (ml_backend__ml_tailcall__succeeded)
#line 150 "ml_tailcall.m"
      ml_backend__ml_tailcall__succeeded = MR_TRUE;
#line 150 "ml_tailcall.m"
    else
#line 150 "ml_tailcall.m"
      {
#line 150 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__TypeInfo_13_13;
#line 150 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 0)));
#line 150 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 1)));
#line 150 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 2)));
#line 150 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
#line 150 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 1)));
#line 150 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 2)));

#line 2422 "ml_backend.ml_tailcall.c"
        {
#line 2424 "ml_backend.ml_tailcall.c"
          ml_backend__ml_tailcall__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_tailcall__V_3_3, ml_backend__ml_tailcall__V_6_6);
        }
#line 150 "ml_tailcall.m"
        if (ml_backend__ml_tailcall__succeeded)
#line 150 "ml_tailcall.m"
          {
#line 2431 "ml_backend.ml_tailcall.c"
            {
#line 2433 "ml_backend.ml_tailcall.c"
              ml_backend__ml_tailcall__succeeded = ml_backend__mlds____Unify____mlds_entity_name_0_0(ml_backend__ml_tailcall__V_4_4, ml_backend__ml_tailcall__V_7_7);
            }
#line 150 "ml_tailcall.m"
            if (ml_backend__ml_tailcall__succeeded)
#line 150 "ml_tailcall.m"
              {
#line 2440 "ml_backend.ml_tailcall.c"
                ml_backend__ml_tailcall__TypeInfo_13_13 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[4];
#line 2442 "ml_backend.ml_tailcall.c"
                {
#line 2444 "ml_backend.ml_tailcall.c"
                  ml_backend__ml_tailcall__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_tailcall__TypeInfo_13_13, ((MR_Box) (ml_backend__ml_tailcall__V_5_5)), ((MR_Box) (ml_backend__ml_tailcall__V_8_8)));
                }
#line 150 "ml_tailcall.m"
              }
#line 150 "ml_tailcall.m"
          }
#line 150 "ml_tailcall.m"
      }
#line 150 "ml_tailcall.m"
    return ml_backend__ml_tailcall__succeeded;
#line 150 "ml_tailcall.m"
  }
#line 150 "ml_tailcall.m"
}

#line 556 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____may_yield_dangling_stack_ref_0_0(
#line 556 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
#line 556 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
#line 556 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3)
#line 556 "ml_tailcall.m"
{
#line 556 "ml_tailcall.m"
  {
#line 556 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 556 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__Cast_HeadVar1_4 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;
#line 556 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__Cast_HeadVar2_5 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__3_3;

#line 556 "ml_tailcall.m"
    {
#line 556 "ml_tailcall.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_tailcall__HeadVar__1_1, ml_backend__ml_tailcall__Cast_HeadVar1_4, ml_backend__ml_tailcall__Cast_HeadVar2_5);
    }
#line 556 "ml_tailcall.m"
  }
#line 556 "ml_tailcall.m"
}

#line 556 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____may_yield_dangling_stack_ref_0_0(
#line 556 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_1,
#line 556 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2)
#line 556 "ml_tailcall.m"
{
#line 2499 "ml_backend.ml_tailcall.c"
  {
#line 2501 "ml_backend.ml_tailcall.c"
    MR_bool ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__HeadVar__2_1 == ml_backend__ml_tailcall__HeadVar__2_2);

#line 2504 "ml_backend.ml_tailcall.c"
    return ml_backend__ml_tailcall__succeeded;
#line 2506 "ml_backend.ml_tailcall.c"
  }
#line 556 "ml_tailcall.m"
}

#line 143 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____locals_0_0(
#line 143 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
#line 143 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
#line 143 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3)
#line 143 "ml_tailcall.m"
{
#line 143 "ml_tailcall.m"
  {
#line 143 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 143 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Cast_HeadVar1_4 = ml_backend__ml_tailcall__HeadVar__2_2;
#line 143 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Cast_HeadVar2_5 = ml_backend__ml_tailcall__HeadVar__3_3;

#line 143 "ml_tailcall.m"
    {
#line 143 "ml_tailcall.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[4], ml_backend__ml_tailcall__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tailcall__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_tailcall__Cast_HeadVar2_5)));
    }
#line 143 "ml_tailcall.m"
  }
#line 143 "ml_tailcall.m"
}

#line 143 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____locals_0_0(
#line 143 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
#line 143 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2)
#line 143 "ml_tailcall.m"
{
#line 143 "ml_tailcall.m"
  {
#line 143 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 143 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Cast_HeadVar1_3 = ml_backend__ml_tailcall__HeadVar__1_1;
#line 143 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Cast_HeadVar2_4 = ml_backend__ml_tailcall__HeadVar__2_2;

#line 143 "ml_tailcall.m"
    {
#line 143 "ml_tailcall.m"
      ml_backend__ml_tailcall__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[4], ((MR_Box) (ml_backend__ml_tailcall__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_tailcall__Cast_HeadVar2_4)));
    }
#line 143 "ml_tailcall.m"
    return ml_backend__ml_tailcall__succeeded;
#line 143 "ml_tailcall.m"
  }
#line 143 "ml_tailcall.m"
}

#line 144 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____local_defns_0_0(
#line 144 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
#line 144 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
#line 144 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3)
#line 144 "ml_tailcall.m"
{
#line 144 "ml_tailcall.m"
  {
#line 144 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 144 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__CastX_12 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;
#line 144 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__CastY_13 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__3_3;

#line 144 "ml_tailcall.m"
    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastX_12 == ml_backend__ml_tailcall__CastY_13);
#line 144 "ml_tailcall.m"
    if (ml_backend__ml_tailcall__succeeded)
#line 2595 "ml_backend.ml_tailcall.c"
      *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 0;
#line 144 "ml_tailcall.m"
    else
#line 144 "ml_tailcall.m"
    if (((MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 144 "ml_tailcall.m"
      {
#line 144 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));

#line 144 "ml_tailcall.m"
        if (((MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 144 "ml_tailcall.m"
          {
#line 144 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 0)));

#line 144 "ml_tailcall.m"
            {
#line 144 "ml_tailcall.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[2], ml_backend__ml_tailcall__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tailcall__V_16_16)), ((MR_Box) (ml_backend__ml_tailcall__V_11_11)));
            }
#line 144 "ml_tailcall.m"
          }
#line 144 "ml_tailcall.m"
        else
#line 2622 "ml_backend.ml_tailcall.c"
          *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 2;
#line 144 "ml_tailcall.m"
      }
#line 144 "ml_tailcall.m"
    else
#line 144 "ml_tailcall.m"
      {
#line 144 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));

#line 144 "ml_tailcall.m"
        if (((MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2635 "ml_backend.ml_tailcall.c"
          *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 1;
#line 144 "ml_tailcall.m"
        else
#line 144 "ml_tailcall.m"
          {
#line 144 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 0)));

#line 144 "ml_tailcall.m"
            {
#line 144 "ml_tailcall.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[3], ml_backend__ml_tailcall__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tailcall__V_17_17)), ((MR_Box) (ml_backend__ml_tailcall__V_5_5)));
            }
#line 144 "ml_tailcall.m"
          }
#line 144 "ml_tailcall.m"
      }
#line 144 "ml_tailcall.m"
  }
#line 144 "ml_tailcall.m"
}

#line 144 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____local_defns_0_0(
#line 144 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
#line 144 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2)
#line 144 "ml_tailcall.m"
{
#line 144 "ml_tailcall.m"
  {
#line 144 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 144 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__CastX_7 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__1_1;
#line 144 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__CastY_8 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;

#line 144 "ml_tailcall.m"
    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastX_7 == ml_backend__ml_tailcall__CastY_8);
#line 144 "ml_tailcall.m"
    if (ml_backend__ml_tailcall__succeeded)
#line 144 "ml_tailcall.m"
      ml_backend__ml_tailcall__succeeded = MR_TRUE;
#line 144 "ml_tailcall.m"
    else
#line 144 "ml_tailcall.m"
    if (((MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 144 "ml_tailcall.m"
      {
#line 144 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__TypeInfo_9_9;
#line 144 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 0)));
#line 144 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_6_6;

#line 144 "ml_tailcall.m"
        ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 144 "ml_tailcall.m"
        if (ml_backend__ml_tailcall__succeeded)
#line 144 "ml_tailcall.m"
          {
#line 144 "ml_tailcall.m"
            ml_backend__ml_tailcall__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
#line 2703 "ml_backend.ml_tailcall.c"
            ml_backend__ml_tailcall__TypeInfo_9_9 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[2];
#line 2705 "ml_backend.ml_tailcall.c"
            {
#line 2707 "ml_backend.ml_tailcall.c"
              ml_backend__ml_tailcall__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_tailcall__TypeInfo_9_9, ((MR_Box) (ml_backend__ml_tailcall__V_5_5)), ((MR_Box) (ml_backend__ml_tailcall__V_6_6)));
            }
#line 144 "ml_tailcall.m"
          }
#line 144 "ml_tailcall.m"
      }
#line 144 "ml_tailcall.m"
    else
#line 144 "ml_tailcall.m"
      {
#line 144 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__TypeInfo_10_10;
#line 144 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 0)));
#line 144 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_4_4;

#line 144 "ml_tailcall.m"
        ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 144 "ml_tailcall.m"
        if (ml_backend__ml_tailcall__succeeded)
#line 144 "ml_tailcall.m"
          {
#line 144 "ml_tailcall.m"
            ml_backend__ml_tailcall__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
#line 2733 "ml_backend.ml_tailcall.c"
            ml_backend__ml_tailcall__TypeInfo_10_10 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[3];
#line 2735 "ml_backend.ml_tailcall.c"
            {
#line 2737 "ml_backend.ml_tailcall.c"
              ml_backend__ml_tailcall__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_tailcall__TypeInfo_10_10, ((MR_Box) (ml_backend__ml_tailcall__V_3_3)), ((MR_Box) (ml_backend__ml_tailcall__V_4_4)));
            }
#line 144 "ml_tailcall.m"
          }
#line 144 "ml_tailcall.m"
      }
#line 144 "ml_tailcall.m"
    return ml_backend__ml_tailcall__succeeded;
#line 144 "ml_tailcall.m"
  }
#line 144 "ml_tailcall.m"
}

#line 527 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____is_local_0_0(
#line 527 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
#line 527 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
#line 527 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3)
#line 527 "ml_tailcall.m"
{
#line 527 "ml_tailcall.m"
  {
#line 527 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 527 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__Cast_HeadVar1_4 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;
#line 527 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__Cast_HeadVar2_5 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__3_3;

#line 527 "ml_tailcall.m"
    {
#line 527 "ml_tailcall.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_tailcall__HeadVar__1_1, ml_backend__ml_tailcall__Cast_HeadVar1_4, ml_backend__ml_tailcall__Cast_HeadVar2_5);
    }
#line 527 "ml_tailcall.m"
  }
#line 527 "ml_tailcall.m"
}

#line 527 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____is_local_0_0(
#line 527 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_1,
#line 527 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2)
#line 527 "ml_tailcall.m"
{
#line 2790 "ml_backend.ml_tailcall.c"
  {
#line 2792 "ml_backend.ml_tailcall.c"
    MR_bool ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__HeadVar__2_1 == ml_backend__ml_tailcall__HeadVar__2_2);

#line 2795 "ml_backend.ml_tailcall.c"
    return ml_backend__ml_tailcall__succeeded;
#line 2797 "ml_backend.ml_tailcall.c"
  }
#line 527 "ml_tailcall.m"
}

#line 129 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____at_tail_0_0(
#line 129 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
#line 129 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
#line 129 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3)
#line 129 "ml_tailcall.m"
{
#line 129 "ml_tailcall.m"
  {
#line 129 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 129 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__CastX_10 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;
#line 129 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__CastY_11 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__3_3;

#line 129 "ml_tailcall.m"
    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastX_10 == ml_backend__ml_tailcall__CastY_11);
#line 129 "ml_tailcall.m"
    if (ml_backend__ml_tailcall__succeeded)
#line 2826 "ml_backend.ml_tailcall.c"
      *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 0;
#line 129 "ml_tailcall.m"
    else
#line 129 "ml_tailcall.m"
#line 129 "ml_tailcall.m"
      switch (MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__2_2)) {
#line 129 "ml_tailcall.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 129 "ml_tailcall.m"
        case (MR_Integer) 0:
#line 129 "ml_tailcall.m"
#line 129 "ml_tailcall.m"
          switch (MR_unmkbody(ml_backend__ml_tailcall__HeadVar__2_2)) {
#line 129 "ml_tailcall.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 129 "ml_tailcall.m"
            case (MR_Integer) 0:
#line 129 "ml_tailcall.m"
#line 129 "ml_tailcall.m"
              switch (MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__3_3)) {
#line 129 "ml_tailcall.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 129 "ml_tailcall.m"
                case (MR_Integer) 0:
#line 129 "ml_tailcall.m"
#line 129 "ml_tailcall.m"
                  switch (MR_unmkbody(ml_backend__ml_tailcall__HeadVar__3_3)) {
#line 129 "ml_tailcall.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 129 "ml_tailcall.m"
                    case (MR_Integer) 0:
#line 129 "ml_tailcall.m"
                      *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 0;
#line 129 "ml_tailcall.m"
                      break;
#line 129 "ml_tailcall.m"
                    case (MR_Integer) 1:
#line 129 "ml_tailcall.m"
                      *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 1;
#line 129 "ml_tailcall.m"
                      break;
#line 129 "ml_tailcall.m"
                  }
#line 129 "ml_tailcall.m"
                  break;
#line 129 "ml_tailcall.m"
                case (MR_Integer) 1:
#line 2874 "ml_backend.ml_tailcall.c"
                  *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 2;
#line 129 "ml_tailcall.m"
                  break;
#line 129 "ml_tailcall.m"
              }
#line 129 "ml_tailcall.m"
              break;
#line 129 "ml_tailcall.m"
            case (MR_Integer) 1:
#line 129 "ml_tailcall.m"
#line 129 "ml_tailcall.m"
              switch (MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__3_3)) {
#line 129 "ml_tailcall.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 129 "ml_tailcall.m"
                case (MR_Integer) 0:
#line 129 "ml_tailcall.m"
#line 129 "ml_tailcall.m"
                  switch (MR_unmkbody(ml_backend__ml_tailcall__HeadVar__3_3)) {
#line 129 "ml_tailcall.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 129 "ml_tailcall.m"
                    case (MR_Integer) 0:
#line 129 "ml_tailcall.m"
                      *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 2;
#line 129 "ml_tailcall.m"
                      break;
#line 129 "ml_tailcall.m"
                    case (MR_Integer) 1:
#line 129 "ml_tailcall.m"
                      *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 0;
#line 129 "ml_tailcall.m"
                      break;
#line 129 "ml_tailcall.m"
                  }
#line 129 "ml_tailcall.m"
                  break;
#line 129 "ml_tailcall.m"
                case (MR_Integer) 1:
#line 2914 "ml_backend.ml_tailcall.c"
                  *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 2;
#line 129 "ml_tailcall.m"
                  break;
#line 129 "ml_tailcall.m"
              }
#line 129 "ml_tailcall.m"
              break;
#line 129 "ml_tailcall.m"
          }
#line 129 "ml_tailcall.m"
          break;
#line 129 "ml_tailcall.m"
        case (MR_Integer) 1:
#line 129 "ml_tailcall.m"
          {
#line 129 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));

#line 129 "ml_tailcall.m"
#line 129 "ml_tailcall.m"
            switch (MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__3_3)) {
#line 129 "ml_tailcall.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 129 "ml_tailcall.m"
              case (MR_Integer) 0:
#line 129 "ml_tailcall.m"
#line 129 "ml_tailcall.m"
                switch (MR_unmkbody(ml_backend__ml_tailcall__HeadVar__3_3)) {
#line 129 "ml_tailcall.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 129 "ml_tailcall.m"
                  case (MR_Integer) 0:
#line 2947 "ml_backend.ml_tailcall.c"
                    *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 1;
#line 129 "ml_tailcall.m"
                    break;
#line 129 "ml_tailcall.m"
                  case (MR_Integer) 1:
#line 2953 "ml_backend.ml_tailcall.c"
                    *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 1;
#line 129 "ml_tailcall.m"
                    break;
#line 129 "ml_tailcall.m"
                }
#line 129 "ml_tailcall.m"
                break;
#line 129 "ml_tailcall.m"
              case (MR_Integer) 1:
#line 129 "ml_tailcall.m"
                {
#line 129 "ml_tailcall.m"
                  MR_Word ml_backend__ml_tailcall__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 0)));

#line 129 "ml_tailcall.m"
                  {
#line 129 "ml_tailcall.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[1], ml_backend__ml_tailcall__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tailcall__V_13_13)), ((MR_Box) (ml_backend__ml_tailcall__V_5_5)));
                  }
#line 129 "ml_tailcall.m"
                }
#line 129 "ml_tailcall.m"
                break;
#line 129 "ml_tailcall.m"
            }
#line 129 "ml_tailcall.m"
          }
#line 129 "ml_tailcall.m"
          break;
#line 129 "ml_tailcall.m"
      }
#line 129 "ml_tailcall.m"
  }
#line 129 "ml_tailcall.m"
}

#line 129 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____at_tail_0_0(
#line 129 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
#line 129 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2)
#line 129 "ml_tailcall.m"
{
#line 129 "ml_tailcall.m"
  {
#line 129 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 129 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__CastX_9 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__1_1;
#line 129 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__CastY_10 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;

#line 129 "ml_tailcall.m"
    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastX_9 == ml_backend__ml_tailcall__CastY_10);
#line 129 "ml_tailcall.m"
    if (ml_backend__ml_tailcall__succeeded)
#line 129 "ml_tailcall.m"
      ml_backend__ml_tailcall__succeeded = MR_TRUE;
#line 129 "ml_tailcall.m"
    else
#line 129 "ml_tailcall.m"
#line 129 "ml_tailcall.m"
      switch (MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__1_1)) {
#line 129 "ml_tailcall.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 129 "ml_tailcall.m"
        case (MR_Integer) 0:
#line 129 "ml_tailcall.m"
#line 129 "ml_tailcall.m"
          switch (MR_unmkbody(ml_backend__ml_tailcall__HeadVar__1_1)) {
#line 129 "ml_tailcall.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 129 "ml_tailcall.m"
            case (MR_Integer) 0:
#line 129 "ml_tailcall.m"
              {
#line 129 "ml_tailcall.m"
                MR_Integer ml_backend__ml_tailcall__CastX_5 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__1_1;
#line 129 "ml_tailcall.m"
                MR_Integer ml_backend__ml_tailcall__CastY_6 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;

#line 129 "ml_tailcall.m"
                ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastY_6 == ml_backend__ml_tailcall__CastX_5);
#line 129 "ml_tailcall.m"
              }
#line 129 "ml_tailcall.m"
              break;
#line 129 "ml_tailcall.m"
            case (MR_Integer) 1:
#line 129 "ml_tailcall.m"
              {
#line 129 "ml_tailcall.m"
                MR_Integer ml_backend__ml_tailcall__CastX_7 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__1_1;
#line 129 "ml_tailcall.m"
                MR_Integer ml_backend__ml_tailcall__CastY_8 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;

#line 129 "ml_tailcall.m"
                ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastY_8 == ml_backend__ml_tailcall__CastX_7);
#line 129 "ml_tailcall.m"
              }
#line 129 "ml_tailcall.m"
              break;
#line 129 "ml_tailcall.m"
          }
#line 129 "ml_tailcall.m"
          break;
#line 129 "ml_tailcall.m"
        case (MR_Integer) 1:
#line 129 "ml_tailcall.m"
          {
#line 129 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__TypeInfo_11_11;
#line 129 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 0)));
#line 129 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__V_4_4;

#line 129 "ml_tailcall.m"
            ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 129 "ml_tailcall.m"
            if (ml_backend__ml_tailcall__succeeded)
#line 129 "ml_tailcall.m"
              {
#line 129 "ml_tailcall.m"
                ml_backend__ml_tailcall__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
#line 3081 "ml_backend.ml_tailcall.c"
                ml_backend__ml_tailcall__TypeInfo_11_11 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[1];
#line 3083 "ml_backend.ml_tailcall.c"
                {
#line 3085 "ml_backend.ml_tailcall.c"
                  ml_backend__ml_tailcall__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_tailcall__TypeInfo_11_11, ((MR_Box) (ml_backend__ml_tailcall__V_3_3)), ((MR_Box) (ml_backend__ml_tailcall__V_4_4)));
                }
#line 129 "ml_tailcall.m"
              }
#line 129 "ml_tailcall.m"
          }
#line 129 "ml_tailcall.m"
          break;
#line 129 "ml_tailcall.m"
      }
#line 129 "ml_tailcall.m"
    return ml_backend__ml_tailcall__succeeded;
#line 129 "ml_tailcall.m"
  }
#line 129 "ml_tailcall.m"
}

#line 759 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__report_nontailcall_warning_4_p_0(
#line 759 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Globals_5,
#line 759 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Warning_6)
#line 759 "ml_tailcall.m"
{
#line 762 "ml_tailcall.m"
  {
#line 762 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 762 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__PredLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Warning_6, (MR_Integer) 0)));
#line 762 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Warning_6, (MR_Integer) 1)));
#line 762 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Warning_6, (MR_Integer) 2)));

#line 777 "ml_tailcall.m"
    if (((MR_tag((MR_Word) ml_backend__ml_tailcall__PredLabel_8)) == (MR_mktag((MR_Integer) 1))))
#line 778 "ml_tailcall.m"
      {
#line 778 "ml_tailcall.m"
      }
#line 777 "ml_tailcall.m"
    else
#line 766 "ml_tailcall.m"
      {
#line 766 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__PredOrFunc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_8, (MR_Integer) 0)));
#line 766 "ml_tailcall.m"
        MR_String ml_backend__ml_tailcall__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_8, (MR_Integer) 2)));
#line 766 "ml_tailcall.m"
        MR_Integer ml_backend__ml_tailcall__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_8, (MR_Integer) 3)));
#line 766 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__SimpleCallId_17;
#line 766 "ml_tailcall.m"
        MR_Integer ml_backend__ml_tailcall__ProcNumber0_18;
#line 766 "ml_tailcall.m"
        MR_Integer ml_backend__ml_tailcall__ProcNumber_19;
#line 766 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Pieces_20;
#line 766 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Msg_21;
#line 766 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Spec_22;
#line 766 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_31_31;
#line 766 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_35_35;
#line 766 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_36_36;
#line 766 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_37_37;
#line 766 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_40_40;
#line 766 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_41_41;
#line 766 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_53_53;
#line 766 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_54_54;
#line 766 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_55_55;
#line 766 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_59_59;
#line 765 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall___MaybeModule_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_8, (MR_Integer) 1)));
#line 765 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall___CodeModel_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_8, (MR_Integer) 4)));
#line 765 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall___NonOutputFunc_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_8, (MR_Integer) 5)));
#line 776 "ml_tailcall.m"
        MR_Integer ml_backend__ml_tailcall___NumWarnings_23;
#line 776 "ml_tailcall.m"
        MR_Integer ml_backend__ml_tailcall___NumErrors_24;

#line 767 "ml_tailcall.m"
        {
#line 767 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 767 "ml_tailcall.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_31_31, 0) = ((MR_Box) (ml_backend__ml_tailcall__Name_13));
#line 767 "ml_tailcall.m"
        }
#line 767 "ml_tailcall.m"
        {
#line 767 "ml_tailcall.m"
          ml_backend__ml_tailcall__SimpleCallId_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 767 "ml_tailcall.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__SimpleCallId_17, 0) = ((MR_Box) (ml_backend__ml_tailcall__PredOrFunc_11));
#line 767 "ml_tailcall.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__SimpleCallId_17, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_31_31));
#line 767 "ml_tailcall.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__SimpleCallId_17, 2) = ((MR_Box) (ml_backend__ml_tailcall__Arity_14));
#line 767 "ml_tailcall.m"
        }
#line 768 "ml_tailcall.m"
        {
#line 768 "ml_tailcall.m"
          hlds__hlds_pred__proc_id_to_int_2_p_0(ml_backend__ml_tailcall__ProcId_9, &ml_backend__ml_tailcall__ProcNumber0_18);
        }
#line 769 "ml_tailcall.m"
        ml_backend__ml_tailcall__ProcNumber_19 = (ml_backend__ml_tailcall__ProcNumber0_18 + (MR_Integer) 1);
#line 771 "ml_tailcall.m"
        {
#line 771 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 771 "ml_tailcall.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 771 "ml_tailcall.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__V_36_36, 1) = ((MR_Box) (ml_backend__ml_tailcall__ProcNumber_19));
#line 771 "ml_tailcall.m"
        }
#line 772 "ml_tailcall.m"
        {
#line 772 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 772 "ml_tailcall.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 772 "ml_tailcall.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__V_41_41, 1) = ((MR_Box) (ml_backend__ml_tailcall__SimpleCallId_17));
#line 772 "ml_tailcall.m"
        }
#line 772 "ml_tailcall.m"
        {
#line 772 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 772 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_40_40, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_41_41));
#line 772 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_tailcall_scalar_common_1[11])));
#line 772 "ml_tailcall.m"
        }
#line 772 "ml_tailcall.m"
        {
#line 772 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 772 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_37_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tailcall_scalar_common_1[13])));
#line 772 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_37_37, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_40_40));
#line 772 "ml_tailcall.m"
        }
#line 771 "ml_tailcall.m"
        {
#line 771 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 771 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_35_35, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_36_36));
#line 771 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_35_35, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_37_37));
#line 771 "ml_tailcall.m"
        }
#line 771 "ml_tailcall.m"
        {
#line 771 "ml_tailcall.m"
          ml_backend__ml_tailcall__Pieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 771 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Pieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tailcall_scalar_common_1[12])));
#line 771 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Pieces_20, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_35_35));
#line 771 "ml_tailcall.m"
        }
#line 774 "ml_tailcall.m"
        {
#line 774 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_53_53 = ml_backend__mlds__mlds_get_prog_context_1_f_0(ml_backend__ml_tailcall__Context_10);
        }
#line 774 "ml_tailcall.m"
        {
#line 774 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 774 "ml_tailcall.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_55_55, 0) = ((MR_Box) (ml_backend__ml_tailcall__Pieces_20));
#line 774 "ml_tailcall.m"
        }
#line 774 "ml_tailcall.m"
        {
#line 774 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 774 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_54_54, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_55_55));
#line 774 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 774 "ml_tailcall.m"
        }
#line 774 "ml_tailcall.m"
        {
#line 774 "ml_tailcall.m"
          ml_backend__ml_tailcall__Msg_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 774 "ml_tailcall.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Msg_21, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_53_53));
#line 774 "ml_tailcall.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Msg_21, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_54_54));
#line 774 "ml_tailcall.m"
        }
#line 775 "ml_tailcall.m"
        {
#line 775 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_59_59, 0) = ((MR_Box) (ml_backend__ml_tailcall__Msg_21));
#line 775 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 775 "ml_tailcall.m"
        }
#line 775 "ml_tailcall.m"
        {
#line 775 "ml_tailcall.m"
          ml_backend__ml_tailcall__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 775 "ml_tailcall.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 775 "ml_tailcall.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17))));
#line 775 "ml_tailcall.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Spec_22, 2) = ((MR_Box) (ml_backend__ml_tailcall__V_59_59));
#line 775 "ml_tailcall.m"
        }
#line 776 "ml_tailcall.m"
        {
#line 776 "ml_tailcall.m"
          parse_tree__error_util__write_error_spec_8_p_0(ml_backend__ml_tailcall__Spec_22, ml_backend__ml_tailcall__Globals_5, (MR_Integer) 0, &ml_backend__ml_tailcall___NumWarnings_23, (MR_Integer) 0, &ml_backend__ml_tailcall___NumErrors_24);
        }
#line 766 "ml_tailcall.m"
      }
#line 762 "ml_tailcall.m"
  }
#line 759 "ml_tailcall.m"
}

#line 706 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_10(
#line 706 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 706 "ml_tailcall.m"
{
#line 706 "ml_tailcall.m"
  {
#line 706 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 706 "ml_tailcall.m"
    MR_builtin_longjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__commit_1, 1);
#line 706 "ml_tailcall.m"
  }
#line 706 "ml_tailcall.m"
}

#line 739 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_12(
#line 739 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 739 "ml_tailcall.m"
{
#line 739 "ml_tailcall.m"
  {
#line 739 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 739 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_74 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv3_Locals_74);
#line 739 "ml_tailcall.m"
    {
#line 739 "ml_tailcall.m"
      ml_backend__ml_tailcall__check_const_2_f_0_11(ml_backend__ml_tailcall__env_ptr);
    }
#line 739 "ml_tailcall.m"
  }
#line 739 "ml_tailcall.m"
}

#line 706 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_13(
#line 706 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 706 "ml_tailcall.m"
{
#line 706 "ml_tailcall.m"
  {
#line 706 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 707 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_69)) == (MR_mktag((MR_Integer) 1)));
#line 707 "ml_tailcall.m"
    if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
#line 707 "ml_tailcall.m"
      {
#line 707 "ml_tailcall.m"
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_69, (MR_Integer) 0)));
#line 706 "ml_tailcall.m"
        {
#line 707 "ml_tailcall.m"
          (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_68_68)) == (MR_mktag((MR_Integer) 1)));
#line 707 "ml_tailcall.m"
          if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
#line 707 "ml_tailcall.m"
            {
#line 707 "ml_tailcall.m"
              (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_70_70 = (MR_Word) MR_body(((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_68_68), (MR_Integer) 1);
#line 706 "ml_tailcall.m"
              {
#line 707 "ml_tailcall.m"
                {
#line 707 "ml_tailcall.m"
                  (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = ml_backend__mlds____Unify____mlds_var_name_0_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__VarName_11, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_70_70);
                }
#line 707 "ml_tailcall.m"
                if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
#line 707 "ml_tailcall.m"
                  {
#line 707 "ml_tailcall.m"
                    ml_backend__ml_tailcall__check_const_2_f_0_10(ml_backend__ml_tailcall__env_ptr);
                  }
#line 706 "ml_tailcall.m"
              }
#line 707 "ml_tailcall.m"
            }
#line 706 "ml_tailcall.m"
        }
#line 707 "ml_tailcall.m"
      }
#line 706 "ml_tailcall.m"
  }
#line 706 "ml_tailcall.m"
}

#line 742 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_15(
#line 742 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 742 "ml_tailcall.m"
{
#line 742 "ml_tailcall.m"
  {
#line 742 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 742 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_76 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv4_Defn_76);
#line 742 "ml_tailcall.m"
    {
#line 742 "ml_tailcall.m"
      ml_backend__ml_tailcall__check_const_2_f_0_14(ml_backend__ml_tailcall__env_ptr);
    }
#line 742 "ml_tailcall.m"
  }
#line 742 "ml_tailcall.m"
}

#line 741 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_14(
#line 741 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 741 "ml_tailcall.m"
{
#line 741 "ml_tailcall.m"
  {
#line 741 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 741 "ml_tailcall.m"
    {
#line 743 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_77_77;
#line 743 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_78_78;
#line 743 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_79_79;

#line 743 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_76, (MR_Integer) 0)));
#line 743 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_76, (MR_Integer) 1)));
#line 743 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_76, (MR_Integer) 2)));
#line 743 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_76, (MR_Integer) 3)));
#line 743 "ml_tailcall.m"
      {
#line 743 "ml_tailcall.m"
        ml_backend__ml_tailcall__check_const_2_f_0_13(ml_backend__ml_tailcall__env_ptr);
      }
#line 741 "ml_tailcall.m"
    }
#line 741 "ml_tailcall.m"
  }
#line 741 "ml_tailcall.m"
}

#line 746 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_17(
#line 746 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 746 "ml_tailcall.m"
{
#line 746 "ml_tailcall.m"
  {
#line 746 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 746 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_81 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv5_Param_81);
#line 746 "ml_tailcall.m"
    {
#line 746 "ml_tailcall.m"
      ml_backend__ml_tailcall__check_const_2_f_0_16(ml_backend__ml_tailcall__env_ptr);
    }
#line 746 "ml_tailcall.m"
  }
#line 746 "ml_tailcall.m"
}

#line 745 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_16(
#line 745 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 745 "ml_tailcall.m"
{
#line 745 "ml_tailcall.m"
  {
#line 745 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 745 "ml_tailcall.m"
    {
#line 747 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_82_82;
#line 747 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_83_83;

#line 747 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_81, (MR_Integer) 0)));
#line 747 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_81, (MR_Integer) 1)));
#line 747 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_81, (MR_Integer) 2)));
#line 747 "ml_tailcall.m"
      {
#line 747 "ml_tailcall.m"
        ml_backend__ml_tailcall__check_const_2_f_0_13(ml_backend__ml_tailcall__env_ptr);
      }
#line 745 "ml_tailcall.m"
    }
#line 745 "ml_tailcall.m"
  }
#line 745 "ml_tailcall.m"
}

#line 706 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_11(
#line 706 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 706 "ml_tailcall.m"
{
#line 706 "ml_tailcall.m"
  {
#line 706 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 744 "ml_tailcall.m"
    if (((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_74)) == (MR_mktag((MR_Integer) 1))))
#line 741 "ml_tailcall.m"
      {
#line 741 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Defns_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_74, (MR_Integer) 0)));

#line 742 "ml_tailcall.m"
        {
#line 742 "ml_tailcall.m"
          mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv4_Defn_76, ml_backend__ml_tailcall__Defns_75, ml_backend__ml_tailcall__check_const_2_f_0_15, ml_backend__ml_tailcall__env_ptr);
        }
#line 741 "ml_tailcall.m"
      }
#line 744 "ml_tailcall.m"
    else
#line 745 "ml_tailcall.m"
      {
#line 745 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Params_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_74, (MR_Integer) 0)));

#line 746 "ml_tailcall.m"
        {
#line 746 "ml_tailcall.m"
          mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv5_Param_81, ml_backend__ml_tailcall__Params_80, ml_backend__ml_tailcall__check_const_2_f_0_17, ml_backend__ml_tailcall__env_ptr);
        }
#line 745 "ml_tailcall.m"
      }
#line 706 "ml_tailcall.m"
  }
#line 706 "ml_tailcall.m"
}

#line 706 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_18(
#line 706 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 706 "ml_tailcall.m"
{
#line 706 "ml_tailcall.m"
  {
#line 706 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 706 "ml_tailcall.m"
    if (MR_builtin_setjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__commit_1) == 0)
#line 706 "ml_tailcall.m"
      {
#line 706 "ml_tailcall.m"
        {
#line 739 "ml_tailcall.m"
          {
#line 739 "ml_tailcall.m"
            mercury__list__member_2_p_1((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_local_defns_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv3_Locals_74, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_5, ml_backend__ml_tailcall__check_const_2_f_0_12, ml_backend__ml_tailcall__env_ptr);
          }
#line 706 "ml_tailcall.m"
        }
#line 706 "ml_tailcall.m"
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = MR_FALSE;
#line 706 "ml_tailcall.m"
      }
#line 706 "ml_tailcall.m"
    else
#line 706 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = MR_TRUE;
#line 706 "ml_tailcall.m"
  }
#line 706 "ml_tailcall.m"
}

#line 728 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_1(
#line 728 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 728 "ml_tailcall.m"
{
#line 728 "ml_tailcall.m"
  {
#line 728 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 728 "ml_tailcall.m"
    MR_builtin_longjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__commit_0, 1);
#line 728 "ml_tailcall.m"
  }
#line 728 "ml_tailcall.m"
}

#line 739 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_3(
#line 739 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 739 "ml_tailcall.m"
{
#line 739 "ml_tailcall.m"
  {
#line 739 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 739 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_49 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv0_Locals_49);
#line 739 "ml_tailcall.m"
    {
#line 739 "ml_tailcall.m"
      ml_backend__ml_tailcall__check_const_2_f_0_2(ml_backend__ml_tailcall__env_ptr);
    }
#line 739 "ml_tailcall.m"
  }
#line 739 "ml_tailcall.m"
}

#line 728 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_4(
#line 728 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 728 "ml_tailcall.m"
{
#line 728 "ml_tailcall.m"
  {
#line 728 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 728 "ml_tailcall.m"
    {
#line 729 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall___PredId_38;

#line 729 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41)) == (MR_mktag((MR_Integer) 2)));
#line 729 "ml_tailcall.m"
      if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
#line 729 "ml_tailcall.m"
        {
#line 729 "ml_tailcall.m"
          {
#line 729 "ml_tailcall.m"
            (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41, (MR_Integer) 0)));
#line 729 "ml_tailcall.m"
            (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41, (MR_Integer) 1)));
#line 729 "ml_tailcall.m"
            (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41, (MR_Integer) 2)));
#line 729 "ml_tailcall.m"
            ml_backend__ml_tailcall___PredId_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41, (MR_Integer) 3)));
#line 729 "ml_tailcall.m"
          }
#line 728 "ml_tailcall.m"
          {
#line 729 "ml_tailcall.m"
            {
#line 729 "ml_tailcall.m"
              (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = ml_backend__mlds____Unify____mlds_pred_label_0_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__PredLabel_35, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_42_42);
            }
#line 728 "ml_tailcall.m"
            if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
#line 728 "ml_tailcall.m"
              {
#line 729 "ml_tailcall.m"
                (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__ProcId_36 == (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_43_43);
#line 728 "ml_tailcall.m"
                if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
#line 728 "ml_tailcall.m"
                  {
#line 3740 "ml_backend.ml_tailcall.c"
                    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__TypeInfo_23_46 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[5];
#line 729 "ml_tailcall.m"
                    {
#line 729 "ml_tailcall.m"
                      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = mercury__builtin__unify_2_p_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__TypeInfo_23_46, ((MR_Box) ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__MaybeSeqNum_30)), ((MR_Box) ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_44_44)));
                    }
#line 729 "ml_tailcall.m"
                    if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
#line 729 "ml_tailcall.m"
                      {
#line 729 "ml_tailcall.m"
                        ml_backend__ml_tailcall__check_const_2_f_0_1(ml_backend__ml_tailcall__env_ptr);
                      }
#line 728 "ml_tailcall.m"
                  }
#line 728 "ml_tailcall.m"
              }
#line 728 "ml_tailcall.m"
          }
#line 729 "ml_tailcall.m"
        }
#line 728 "ml_tailcall.m"
    }
#line 728 "ml_tailcall.m"
  }
#line 728 "ml_tailcall.m"
}

#line 742 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_6(
#line 742 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 742 "ml_tailcall.m"
{
#line 742 "ml_tailcall.m"
  {
#line 742 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 742 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_51 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv1_Defn_51);
#line 742 "ml_tailcall.m"
    {
#line 742 "ml_tailcall.m"
      ml_backend__ml_tailcall__check_const_2_f_0_5(ml_backend__ml_tailcall__env_ptr);
    }
#line 742 "ml_tailcall.m"
  }
#line 742 "ml_tailcall.m"
}

#line 741 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_5(
#line 741 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 741 "ml_tailcall.m"
{
#line 741 "ml_tailcall.m"
  {
#line 741 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 741 "ml_tailcall.m"
    {
#line 743 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_52_52;
#line 743 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_53_53;
#line 743 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_54_54;

#line 743 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_51, (MR_Integer) 0)));
#line 743 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_51, (MR_Integer) 1)));
#line 743 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_51, (MR_Integer) 2)));
#line 743 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_51, (MR_Integer) 3)));
#line 743 "ml_tailcall.m"
      {
#line 743 "ml_tailcall.m"
        ml_backend__ml_tailcall__check_const_2_f_0_4(ml_backend__ml_tailcall__env_ptr);
      }
#line 741 "ml_tailcall.m"
    }
#line 741 "ml_tailcall.m"
  }
#line 741 "ml_tailcall.m"
}

#line 746 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_8(
#line 746 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 746 "ml_tailcall.m"
{
#line 746 "ml_tailcall.m"
  {
#line 746 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 746 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_56 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv2_Param_56);
#line 746 "ml_tailcall.m"
    {
#line 746 "ml_tailcall.m"
      ml_backend__ml_tailcall__check_const_2_f_0_7(ml_backend__ml_tailcall__env_ptr);
    }
#line 746 "ml_tailcall.m"
  }
#line 746 "ml_tailcall.m"
}

#line 745 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_7(
#line 745 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 745 "ml_tailcall.m"
{
#line 745 "ml_tailcall.m"
  {
#line 745 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 745 "ml_tailcall.m"
    {
#line 747 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_57_57;
#line 747 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_58_58;

#line 747 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_56, (MR_Integer) 0)));
#line 747 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_56, (MR_Integer) 1)));
#line 747 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_56, (MR_Integer) 2)));
#line 747 "ml_tailcall.m"
      {
#line 747 "ml_tailcall.m"
        ml_backend__ml_tailcall__check_const_2_f_0_4(ml_backend__ml_tailcall__env_ptr);
      }
#line 745 "ml_tailcall.m"
    }
#line 745 "ml_tailcall.m"
  }
#line 745 "ml_tailcall.m"
}

#line 728 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_2(
#line 728 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 728 "ml_tailcall.m"
{
#line 728 "ml_tailcall.m"
  {
#line 728 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 744 "ml_tailcall.m"
    if (((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_49)) == (MR_mktag((MR_Integer) 1))))
#line 741 "ml_tailcall.m"
      {
#line 741 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Defns_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_49, (MR_Integer) 0)));

#line 742 "ml_tailcall.m"
        {
#line 742 "ml_tailcall.m"
          mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv1_Defn_51, ml_backend__ml_tailcall__Defns_50, ml_backend__ml_tailcall__check_const_2_f_0_6, ml_backend__ml_tailcall__env_ptr);
        }
#line 741 "ml_tailcall.m"
      }
#line 744 "ml_tailcall.m"
    else
#line 745 "ml_tailcall.m"
      {
#line 745 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Params_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_49, (MR_Integer) 0)));

#line 746 "ml_tailcall.m"
        {
#line 746 "ml_tailcall.m"
          mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv2_Param_56, ml_backend__ml_tailcall__Params_55, ml_backend__ml_tailcall__check_const_2_f_0_8, ml_backend__ml_tailcall__env_ptr);
        }
#line 745 "ml_tailcall.m"
      }
#line 728 "ml_tailcall.m"
  }
#line 728 "ml_tailcall.m"
}

#line 728 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_9(
#line 728 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 728 "ml_tailcall.m"
{
#line 728 "ml_tailcall.m"
  {
#line 728 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 728 "ml_tailcall.m"
    if (MR_builtin_setjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__commit_0) == 0)
#line 728 "ml_tailcall.m"
      {
#line 728 "ml_tailcall.m"
        {
#line 739 "ml_tailcall.m"
          {
#line 739 "ml_tailcall.m"
            mercury__list__member_2_p_1((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_local_defns_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv0_Locals_49, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_5, ml_backend__ml_tailcall__check_const_2_f_0_3, ml_backend__ml_tailcall__env_ptr);
          }
#line 728 "ml_tailcall.m"
        }
#line 728 "ml_tailcall.m"
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = MR_FALSE;
#line 728 "ml_tailcall.m"
      }
#line 728 "ml_tailcall.m"
    else
#line 728 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = MR_TRUE;
#line 728 "ml_tailcall.m"
  }
#line 728 "ml_tailcall.m"
}

#line 654 "ml_tailcall.m"
static MR_Word MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0(
#line 654 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Const_4,
#line 654 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_5)
#line 654 "ml_tailcall.m"
{
#line 654 "ml_tailcall.m"
  {
#line 654 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s ml_backend__ml_tailcall__env;

#line 654 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_5 = ml_backend__ml_tailcall__Locals_5;
#line 658 "ml_tailcall.m"
    {
#line 658 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__MayYieldDanglingStackRef_6;

#line 658 "ml_tailcall.m"
#line 658 "ml_tailcall.m"
      switch (MR_tag((MR_Word) ml_backend__ml_tailcall__Const_4)) {
#line 658 "ml_tailcall.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 658 "ml_tailcall.m"
        case (MR_Integer) 0:
#line 691 "ml_tailcall.m"
          ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
#line 658 "ml_tailcall.m"
          break;
#line 658 "ml_tailcall.m"
        case (MR_Integer) 1:
#line 665 "ml_tailcall.m"
          {
#line 665 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__DataAddr_8 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tailcall__Const_4), (MR_Integer) 1);
#line 665 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__DataName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__DataAddr_8, (MR_Integer) 1)));
#line 666 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__DataAddr_8, (MR_Integer) 0)));

#line 667 "ml_tailcall.m"
            (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__DataName_10)) == (MR_mktag((MR_Integer) 1)));
#line 667 "ml_tailcall.m"
            if ((ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
#line 667 "ml_tailcall.m"
              {
#line 667 "ml_tailcall.m"
                (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__VarName_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tailcall__DataName_10), (MR_Integer) 1);
#line 706 "ml_tailcall.m"
                {
#line 706 "ml_tailcall.m"
                  ml_backend__ml_tailcall__check_const_2_f_0_18(&ml_backend__ml_tailcall__env);
                }
#line 668 "ml_tailcall.m"
                if ((ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
#line 671 "ml_tailcall.m"
                  ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 0;
#line 668 "ml_tailcall.m"
                else
#line 673 "ml_tailcall.m"
                  ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
#line 667 "ml_tailcall.m"
              }
#line 667 "ml_tailcall.m"
            else
#line 676 "ml_tailcall.m"
              ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
#line 665 "ml_tailcall.m"
          }
#line 658 "ml_tailcall.m"
          break;
#line 658 "ml_tailcall.m"
        case (MR_Integer) 2:
#line 691 "ml_tailcall.m"
          ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
#line 658 "ml_tailcall.m"
          break;
#line 658 "ml_tailcall.m"
        case (MR_Integer) 3:
#line 658 "ml_tailcall.m"
#line 658 "ml_tailcall.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Const_4, (MR_Integer) 0)))) {
#line 658 "ml_tailcall.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 658 "ml_tailcall.m"
            case (MR_Integer) 0:
#line 658 "ml_tailcall.m"
            case (MR_Integer) 1:
#line 658 "ml_tailcall.m"
            case (MR_Integer) 2:
#line 658 "ml_tailcall.m"
            case (MR_Integer) 3:
#line 658 "ml_tailcall.m"
            case (MR_Integer) 4:
#line 658 "ml_tailcall.m"
            case (MR_Integer) 5:
#line 658 "ml_tailcall.m"
            case (MR_Integer) 6:
#line 658 "ml_tailcall.m"
            case (MR_Integer) 8:
#line 691 "ml_tailcall.m"
              ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
#line 658 "ml_tailcall.m"
              break;
#line 658 "ml_tailcall.m"
            case (MR_Integer) 7:
#line 658 "ml_tailcall.m"
              {
#line 658 "ml_tailcall.m"
                MR_Word ml_backend__ml_tailcall__CodeAddr_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Const_4, (MR_Integer) 1)));
#line 715 "ml_tailcall.m"
                MR_Word ml_backend__ml_tailcall__QualifiedProcLabel_28;
#line 715 "ml_tailcall.m"
                MR_Word ml_backend__ml_tailcall__ProcLabel_34;
#line 725 "ml_tailcall.m"
                MR_Word ml_backend__ml_tailcall___ModuleName_32;
#line 725 "ml_tailcall.m"
                MR_Word ml_backend__ml_tailcall___QualKind_33;

#line 719 "ml_tailcall.m"
                if (((MR_tag((MR_Word) ml_backend__ml_tailcall__CodeAddr_7)) == (MR_mktag((MR_Integer) 1))))
#line 720 "ml_tailcall.m"
                  {
#line 720 "ml_tailcall.m"
                    MR_Integer ml_backend__ml_tailcall__SeqNum_31;
#line 720 "ml_tailcall.m"
                    MR_Word ml_backend__ml_tailcall___Sig_39;

#line 720 "ml_tailcall.m"
                    ml_backend__ml_tailcall__QualifiedProcLabel_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_7, (MR_Integer) 0)));
#line 720 "ml_tailcall.m"
                    ml_backend__ml_tailcall__SeqNum_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_7, (MR_Integer) 1)));
#line 720 "ml_tailcall.m"
                    ml_backend__ml_tailcall___Sig_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_7, (MR_Integer) 2)));
#line 721 "ml_tailcall.m"
                    {
#line 721 "ml_tailcall.m"
                      MR_Word base;
#line 721 "ml_tailcall.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 721 "ml_tailcall.m"
                      (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__MaybeSeqNum_30 = base;
#line 721 "ml_tailcall.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__SeqNum_31));
#line 721 "ml_tailcall.m"
                    }
#line 720 "ml_tailcall.m"
                  }
#line 719 "ml_tailcall.m"
                else
#line 717 "ml_tailcall.m"
                  {
#line 717 "ml_tailcall.m"
                    MR_Word ml_backend__ml_tailcall___Sig_29;

#line 717 "ml_tailcall.m"
                    ml_backend__ml_tailcall__QualifiedProcLabel_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__CodeAddr_7, (MR_Integer) 0)));
#line 717 "ml_tailcall.m"
                    ml_backend__ml_tailcall___Sig_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__CodeAddr_7, (MR_Integer) 1)));
#line 718 "ml_tailcall.m"
                    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__MaybeSeqNum_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 717 "ml_tailcall.m"
                  }
#line 725 "ml_tailcall.m"
                ml_backend__ml_tailcall___ModuleName_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualifiedProcLabel_28, (MR_Integer) 0)));
#line 725 "ml_tailcall.m"
                ml_backend__ml_tailcall___QualKind_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualifiedProcLabel_28, (MR_Integer) 1)));
#line 725 "ml_tailcall.m"
                ml_backend__ml_tailcall__ProcLabel_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualifiedProcLabel_28, (MR_Integer) 2)));
#line 726 "ml_tailcall.m"
                (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__PredLabel_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ProcLabel_34, (MR_Integer) 0)));
#line 726 "ml_tailcall.m"
                (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__ProcId_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ProcLabel_34, (MR_Integer) 1)));
#line 728 "ml_tailcall.m"
                {
#line 728 "ml_tailcall.m"
                  ml_backend__ml_tailcall__check_const_2_f_0_9(&ml_backend__ml_tailcall__env);
                }
#line 659 "ml_tailcall.m"
                if ((ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
#line 660 "ml_tailcall.m"
                  ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 0;
#line 659 "ml_tailcall.m"
                else
#line 662 "ml_tailcall.m"
                  ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
#line 658 "ml_tailcall.m"
              }
#line 658 "ml_tailcall.m"
              break;
#line 658 "ml_tailcall.m"
          }
#line 658 "ml_tailcall.m"
          break;
#line 658 "ml_tailcall.m"
      }
#line 658 "ml_tailcall.m"
      return ml_backend__ml_tailcall__MayYieldDanglingStackRef_6;
#line 658 "ml_tailcall.m"
    }
#line 654 "ml_tailcall.m"
  }
#line 654 "ml_tailcall.m"
}

#line 706 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_1(
#line 706 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 706 "ml_tailcall.m"
{
#line 706 "ml_tailcall.m"
  {
#line 706 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 706 "ml_tailcall.m"
    MR_builtin_longjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__commit_0, 1);
#line 706 "ml_tailcall.m"
  }
#line 706 "ml_tailcall.m"
}

#line 739 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_3(
#line 739 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 739 "ml_tailcall.m"
{
#line 739 "ml_tailcall.m"
  {
#line 739 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 739 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_29 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv0_Locals_29);
#line 739 "ml_tailcall.m"
    {
#line 739 "ml_tailcall.m"
      ml_backend__ml_tailcall__check_lval_2_f_0_2(ml_backend__ml_tailcall__env_ptr);
    }
#line 739 "ml_tailcall.m"
  }
#line 739 "ml_tailcall.m"
}

#line 706 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_4(
#line 706 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 706 "ml_tailcall.m"
{
#line 706 "ml_tailcall.m"
  {
#line 706 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 707 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Local_24)) == (MR_mktag((MR_Integer) 1)));
#line 707 "ml_tailcall.m"
    if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded)
#line 707 "ml_tailcall.m"
      {
#line 707 "ml_tailcall.m"
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Local_24, (MR_Integer) 0)));
#line 706 "ml_tailcall.m"
        {
#line 707 "ml_tailcall.m"
          (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 707 "ml_tailcall.m"
          if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded)
#line 707 "ml_tailcall.m"
            {
#line 707 "ml_tailcall.m"
              (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__V_25_25 = (MR_Word) MR_body(((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__V_23_23), (MR_Integer) 1);
#line 706 "ml_tailcall.m"
              {
#line 707 "ml_tailcall.m"
                {
#line 707 "ml_tailcall.m"
                  (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded = ml_backend__mlds____Unify____mlds_var_name_0_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__VarName_21, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__V_25_25);
                }
#line 707 "ml_tailcall.m"
                if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded)
#line 707 "ml_tailcall.m"
                  {
#line 707 "ml_tailcall.m"
                    ml_backend__ml_tailcall__check_lval_2_f_0_1(ml_backend__ml_tailcall__env_ptr);
                  }
#line 706 "ml_tailcall.m"
              }
#line 707 "ml_tailcall.m"
            }
#line 706 "ml_tailcall.m"
        }
#line 707 "ml_tailcall.m"
      }
#line 706 "ml_tailcall.m"
  }
#line 706 "ml_tailcall.m"
}

#line 742 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_6(
#line 742 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 742 "ml_tailcall.m"
{
#line 742 "ml_tailcall.m"
  {
#line 742 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 742 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Defn_31 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv1_Defn_31);
#line 742 "ml_tailcall.m"
    {
#line 742 "ml_tailcall.m"
      ml_backend__ml_tailcall__check_lval_2_f_0_5(ml_backend__ml_tailcall__env_ptr);
    }
#line 742 "ml_tailcall.m"
  }
#line 742 "ml_tailcall.m"
}

#line 741 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_5(
#line 741 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 741 "ml_tailcall.m"
{
#line 741 "ml_tailcall.m"
  {
#line 741 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 741 "ml_tailcall.m"
    {
#line 743 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_32_32;
#line 743 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_33_33;
#line 743 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_34_34;

#line 743 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Local_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Defn_31, (MR_Integer) 0)));
#line 743 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Defn_31, (MR_Integer) 1)));
#line 743 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Defn_31, (MR_Integer) 2)));
#line 743 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Defn_31, (MR_Integer) 3)));
#line 743 "ml_tailcall.m"
      {
#line 743 "ml_tailcall.m"
        ml_backend__ml_tailcall__check_lval_2_f_0_4(ml_backend__ml_tailcall__env_ptr);
      }
#line 741 "ml_tailcall.m"
    }
#line 741 "ml_tailcall.m"
  }
#line 741 "ml_tailcall.m"
}

#line 746 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_8(
#line 746 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 746 "ml_tailcall.m"
{
#line 746 "ml_tailcall.m"
  {
#line 746 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 746 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Param_36 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv2_Param_36);
#line 746 "ml_tailcall.m"
    {
#line 746 "ml_tailcall.m"
      ml_backend__ml_tailcall__check_lval_2_f_0_7(ml_backend__ml_tailcall__env_ptr);
    }
#line 746 "ml_tailcall.m"
  }
#line 746 "ml_tailcall.m"
}

#line 745 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_7(
#line 745 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 745 "ml_tailcall.m"
{
#line 745 "ml_tailcall.m"
  {
#line 745 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 745 "ml_tailcall.m"
    {
#line 747 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_37_37;
#line 747 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_38_38;

#line 747 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Local_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Param_36, (MR_Integer) 0)));
#line 747 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Param_36, (MR_Integer) 1)));
#line 747 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Param_36, (MR_Integer) 2)));
#line 747 "ml_tailcall.m"
      {
#line 747 "ml_tailcall.m"
        ml_backend__ml_tailcall__check_lval_2_f_0_4(ml_backend__ml_tailcall__env_ptr);
      }
#line 745 "ml_tailcall.m"
    }
#line 745 "ml_tailcall.m"
  }
#line 745 "ml_tailcall.m"
}

#line 706 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_2(
#line 706 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 706 "ml_tailcall.m"
{
#line 706 "ml_tailcall.m"
  {
#line 706 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 744 "ml_tailcall.m"
    if (((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_29)) == (MR_mktag((MR_Integer) 1))))
#line 741 "ml_tailcall.m"
      {
#line 741 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Defns_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_29, (MR_Integer) 0)));

#line 742 "ml_tailcall.m"
        {
#line 742 "ml_tailcall.m"
          mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv1_Defn_31, ml_backend__ml_tailcall__Defns_30, ml_backend__ml_tailcall__check_lval_2_f_0_6, ml_backend__ml_tailcall__env_ptr);
        }
#line 741 "ml_tailcall.m"
      }
#line 744 "ml_tailcall.m"
    else
#line 745 "ml_tailcall.m"
      {
#line 745 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Params_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_29, (MR_Integer) 0)));

#line 746 "ml_tailcall.m"
        {
#line 746 "ml_tailcall.m"
          mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv2_Param_36, ml_backend__ml_tailcall__Params_35, ml_backend__ml_tailcall__check_lval_2_f_0_8, ml_backend__ml_tailcall__env_ptr);
        }
#line 745 "ml_tailcall.m"
      }
#line 706 "ml_tailcall.m"
  }
#line 706 "ml_tailcall.m"
}

#line 706 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_9(
#line 706 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 706 "ml_tailcall.m"
{
#line 706 "ml_tailcall.m"
  {
#line 706 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 706 "ml_tailcall.m"
    if (MR_builtin_setjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__commit_0) == 0)
#line 706 "ml_tailcall.m"
      {
#line 706 "ml_tailcall.m"
        {
#line 739 "ml_tailcall.m"
          {
#line 739 "ml_tailcall.m"
            mercury__list__member_2_p_1((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_local_defns_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv0_Locals_29, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_5, ml_backend__ml_tailcall__check_lval_2_f_0_3, ml_backend__ml_tailcall__env_ptr);
          }
#line 706 "ml_tailcall.m"
        }
#line 706 "ml_tailcall.m"
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded = MR_FALSE;
#line 706 "ml_tailcall.m"
      }
#line 706 "ml_tailcall.m"
    else
#line 706 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded = MR_TRUE;
#line 706 "ml_tailcall.m"
  }
#line 706 "ml_tailcall.m"
}

#line 623 "ml_tailcall.m"
static MR_Word MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0(
#line 623 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Lval_4,
#line 623 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_5)
#line 623 "ml_tailcall.m"
{
#line 623 "ml_tailcall.m"
  {
#line 623 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s ml_backend__ml_tailcall__env;

#line 623 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_5 = ml_backend__ml_tailcall__Locals_5;
#line 627 "ml_tailcall.m"
    {
#line 627 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__MayYieldDanglingStackRef_6;

#line 627 "ml_tailcall.m"
#line 627 "ml_tailcall.m"
      switch (MR_tag((MR_Word) ml_backend__ml_tailcall__Lval_4)) {
#line 627 "ml_tailcall.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 627 "ml_tailcall.m"
        case (MR_Integer) 0:
#line 634 "ml_tailcall.m"
          {
#line 634 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__Rval_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 1)));
#line 634 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall___MaybeTag_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 0)));
#line 634 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall___FieldId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 2)));
#line 634 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 3)));
#line 634 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 4)));

#line 635 "ml_tailcall.m"
            {
#line 635 "ml_tailcall.m"
              ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = ml_backend__ml_tailcall__check_rval_2_f_0(ml_backend__ml_tailcall__Rval_10, (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_5);
            }
#line 634 "ml_tailcall.m"
          }
#line 627 "ml_tailcall.m"
          break;
#line 627 "ml_tailcall.m"
        case (MR_Integer) 1:
#line 627 "ml_tailcall.m"
        case (MR_Integer) 2:
#line 643 "ml_tailcall.m"
          ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
#line 627 "ml_tailcall.m"
          break;
#line 627 "ml_tailcall.m"
        case (MR_Integer) 3:
#line 627 "ml_tailcall.m"
          {
#line 627 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__Var0_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 0)));
#line 627 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 1)));
#line 704 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall___ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var0_7, (MR_Integer) 0)));
#line 704 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall___QualKind_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var0_7, (MR_Integer) 1)));

#line 704 "ml_tailcall.m"
            (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_lval_3_f_0_env_0__VarName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var0_7, (MR_Integer) 2)));
#line 706 "ml_tailcall.m"
            {
#line 706 "ml_tailcall.m"
              ml_backend__ml_tailcall__check_lval_2_f_0_9(&ml_backend__ml_tailcall__env);
            }
#line 628 "ml_tailcall.m"
            if ((ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded)
#line 629 "ml_tailcall.m"
              ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 0;
#line 628 "ml_tailcall.m"
            else
#line 631 "ml_tailcall.m"
              ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
#line 627 "ml_tailcall.m"
          }
#line 627 "ml_tailcall.m"
          break;
#line 627 "ml_tailcall.m"
      }
#line 627 "ml_tailcall.m"
      return ml_backend__ml_tailcall__MayYieldDanglingStackRef_6;
#line 627 "ml_tailcall.m"
    }
#line 623 "ml_tailcall.m"
  }
#line 623 "ml_tailcall.m"
}

#line 582 "ml_tailcall.m"
static MR_Word MR_CALL 
ml_backend__ml_tailcall__check_rval_2_f_0(
#line 582 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Rval_4,
#line 582 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_5)
#line 582 "ml_tailcall.m"
{
#line 586 "ml_tailcall.m"
  while (MR_TRUE)
#line 586 "ml_tailcall.m"
    {
#line 586 "ml_tailcall.m"
      /* tailcall optimized into a loop */
#line 586 "ml_tailcall.m"
      {
#line 586 "ml_tailcall.m"
        MR_bool ml_backend__ml_tailcall__succeeded;
#line 586 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__MayYieldDanglingStackRef_6;

#line 586 "ml_tailcall.m"
#line 586 "ml_tailcall.m"
        switch (MR_tag((MR_Word) ml_backend__ml_tailcall__Rval_4)) {
#line 586 "ml_tailcall.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 586 "ml_tailcall.m"
          case (MR_Integer) 0:
#line 617 "ml_tailcall.m"
            ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 0;
#line 586 "ml_tailcall.m"
            break;
#line 586 "ml_tailcall.m"
          case (MR_Integer) 1:
#line 588 "ml_tailcall.m"
            ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
#line 586 "ml_tailcall.m"
            break;
#line 586 "ml_tailcall.m"
          case (MR_Integer) 2:
#line 590 "ml_tailcall.m"
            {
#line 590 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__SubRval_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 1)));
#line 590 "ml_tailcall.m"
              MR_Integer ml_backend__ml_tailcall___Tag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 0)));

#line 591 "ml_tailcall.m"
              /* direct tailcall eliminated */
#line 591 "ml_tailcall.m"
              {
#line 591 "ml_tailcall.m"
                MR_Word ml_backend__ml_tailcall__Rval__tmp_copy_4 = ml_backend__ml_tailcall__SubRval_9;

#line 591 "ml_tailcall.m"
                ml_backend__ml_tailcall__Rval_4 = ml_backend__ml_tailcall__Rval__tmp_copy_4;
#line 591 "ml_tailcall.m"
              }
#line 591 "ml_tailcall.m"
              continue;
#line 590 "ml_tailcall.m"
            }
#line 586 "ml_tailcall.m"
            break;
#line 586 "ml_tailcall.m"
          case (MR_Integer) 3:
#line 586 "ml_tailcall.m"
#line 586 "ml_tailcall.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 0)))) {
#line 586 "ml_tailcall.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 586 "ml_tailcall.m"
              case (MR_Integer) 0:
#line 593 "ml_tailcall.m"
                {
#line 593 "ml_tailcall.m"
                  MR_Word ml_backend__ml_tailcall__Const_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 1)));

#line 594 "ml_tailcall.m"
                  {
#line 594 "ml_tailcall.m"
                    ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = ml_backend__ml_tailcall__check_const_2_f_0(ml_backend__ml_tailcall__Const_10, ml_backend__ml_tailcall__Locals_5);
                  }
#line 593 "ml_tailcall.m"
                }
#line 586 "ml_tailcall.m"
                break;
#line 586 "ml_tailcall.m"
              case (MR_Integer) 1:
#line 596 "ml_tailcall.m"
                {
#line 596 "ml_tailcall.m"
                  MR_Word ml_backend__ml_tailcall__XRval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 2)));
#line 596 "ml_tailcall.m"
                  MR_Word ml_backend__ml_tailcall___Op_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 1)));

#line 597 "ml_tailcall.m"
                  /* direct tailcall eliminated */
#line 597 "ml_tailcall.m"
                  {
#line 597 "ml_tailcall.m"
                    MR_Word ml_backend__ml_tailcall__Rval__tmp_copy_4 = ml_backend__ml_tailcall__XRval_12;

#line 597 "ml_tailcall.m"
                    ml_backend__ml_tailcall__Rval_4 = ml_backend__ml_tailcall__Rval__tmp_copy_4;
#line 597 "ml_tailcall.m"
                  }
#line 597 "ml_tailcall.m"
                  continue;
#line 596 "ml_tailcall.m"
                }
#line 586 "ml_tailcall.m"
                break;
#line 586 "ml_tailcall.m"
              case (MR_Integer) 2:
#line 599 "ml_tailcall.m"
                {
#line 599 "ml_tailcall.m"
                  MR_Word ml_backend__ml_tailcall__YRval_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 3)));
#line 599 "ml_tailcall.m"
                  MR_Word ml_backend__ml_tailcall__XRval_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 2)));
#line 599 "ml_tailcall.m"
                  MR_Word ml_backend__ml_tailcall___Op_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 1)));
#line 600 "ml_tailcall.m"
                  MR_Word ml_backend__ml_tailcall__V_19_19;

#line 600 "ml_tailcall.m"
                  {
#line 600 "ml_tailcall.m"
                    ml_backend__ml_tailcall__V_19_19 = ml_backend__ml_tailcall__check_rval_2_f_0(ml_backend__ml_tailcall__XRval_22, ml_backend__ml_tailcall__Locals_5);
                  }
#line 600 "ml_tailcall.m"
                  ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_19_19 == (MR_Integer) 0);
#line 600 "ml_tailcall.m"
                  if (ml_backend__ml_tailcall__succeeded)
#line 601 "ml_tailcall.m"
                    ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 0;
#line 600 "ml_tailcall.m"
                  else
#line 603 "ml_tailcall.m"
                    {
#line 603 "ml_tailcall.m"
                      /* direct tailcall eliminated */
#line 603 "ml_tailcall.m"
                      {
#line 603 "ml_tailcall.m"
                        MR_Word ml_backend__ml_tailcall__Rval__tmp_copy_4 = ml_backend__ml_tailcall__YRval_13;

#line 603 "ml_tailcall.m"
                        ml_backend__ml_tailcall__Rval_4 = ml_backend__ml_tailcall__Rval__tmp_copy_4;
#line 603 "ml_tailcall.m"
                      }
#line 603 "ml_tailcall.m"
                      continue;
#line 603 "ml_tailcall.m"
                    }
#line 599 "ml_tailcall.m"
                }
#line 586 "ml_tailcall.m"
                break;
#line 586 "ml_tailcall.m"
              case (MR_Integer) 3:
#line 606 "ml_tailcall.m"
                {
#line 606 "ml_tailcall.m"
                  MR_Word ml_backend__ml_tailcall__Lval_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 1)));

#line 609 "ml_tailcall.m"
                  {
#line 609 "ml_tailcall.m"
                    ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = ml_backend__ml_tailcall__check_lval_2_f_0(ml_backend__ml_tailcall__Lval_14, ml_backend__ml_tailcall__Locals_5);
                  }
#line 606 "ml_tailcall.m"
                }
#line 586 "ml_tailcall.m"
                break;
#line 586 "ml_tailcall.m"
              case (MR_Integer) 4:
#line 611 "ml_tailcall.m"
                {
#line 611 "ml_tailcall.m"
                  MR_Word ml_backend__ml_tailcall__RowRval_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 2)));
#line 611 "ml_tailcall.m"
                  MR_Word ml_backend__ml_tailcall___VectorCommon_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 1)));

#line 612 "ml_tailcall.m"
                  /* direct tailcall eliminated */
#line 612 "ml_tailcall.m"
                  {
#line 612 "ml_tailcall.m"
                    MR_Word ml_backend__ml_tailcall__Rval__tmp_copy_4 = ml_backend__ml_tailcall__RowRval_16;

#line 612 "ml_tailcall.m"
                    ml_backend__ml_tailcall__Rval_4 = ml_backend__ml_tailcall__Rval__tmp_copy_4;
#line 612 "ml_tailcall.m"
                  }
#line 612 "ml_tailcall.m"
                  continue;
#line 611 "ml_tailcall.m"
                }
#line 586 "ml_tailcall.m"
                break;
#line 586 "ml_tailcall.m"
              case (MR_Integer) 5:
#line 617 "ml_tailcall.m"
                ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 0;
#line 586 "ml_tailcall.m"
                break;
#line 586 "ml_tailcall.m"
            }
#line 586 "ml_tailcall.m"
            break;
#line 586 "ml_tailcall.m"
        }
#line 586 "ml_tailcall.m"
        return ml_backend__ml_tailcall__MayYieldDanglingStackRef_6;
#line 586 "ml_tailcall.m"
      }
#line 586 "ml_tailcall.m"
      break;
#line 586 "ml_tailcall.m"
    }
#line 582 "ml_tailcall.m"
}

#line 566 "ml_tailcall.m"
static MR_Word MR_CALL 
ml_backend__ml_tailcall__check_rvals_2_f_0(
#line 566 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
#line 566 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_2)
#line 566 "ml_tailcall.m"
{
#line 568 "ml_tailcall.m"
  while (MR_TRUE)
#line 568 "ml_tailcall.m"
    {
#line 568 "ml_tailcall.m"
      /* tailcall optimized into a loop */
#line 568 "ml_tailcall.m"
      {
#line 568 "ml_tailcall.m"
        MR_bool ml_backend__ml_tailcall__succeeded;
#line 568 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__HeadVar__3_3;

#line 568 "ml_tailcall.m"
        if ((ml_backend__ml_tailcall__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 568 "ml_tailcall.m"
          ml_backend__ml_tailcall__HeadVar__3_3 = (MR_Integer) 1;
#line 568 "ml_tailcall.m"
        else
#line 569 "ml_tailcall.m"
          {
#line 569 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__Rval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 0)));
#line 569 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__Rvals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 1)));
#line 570 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__V_9_9;

#line 570 "ml_tailcall.m"
            {
#line 570 "ml_tailcall.m"
              ml_backend__ml_tailcall__V_9_9 = ml_backend__ml_tailcall__check_rval_2_f_0(ml_backend__ml_tailcall__Rval_5, ml_backend__ml_tailcall__Locals_2);
            }
#line 570 "ml_tailcall.m"
            ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_9_9 == (MR_Integer) 0);
#line 570 "ml_tailcall.m"
            if (ml_backend__ml_tailcall__succeeded)
#line 571 "ml_tailcall.m"
              ml_backend__ml_tailcall__HeadVar__3_3 = (MR_Integer) 0;
#line 570 "ml_tailcall.m"
            else
#line 573 "ml_tailcall.m"
              {
#line 573 "ml_tailcall.m"
                /* direct tailcall eliminated */
#line 573 "ml_tailcall.m"
                {
#line 573 "ml_tailcall.m"
                  MR_Word ml_backend__ml_tailcall__HeadVar__1__tmp_copy_1 = ml_backend__ml_tailcall__Rvals_6;

#line 573 "ml_tailcall.m"
                  ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__HeadVar__1__tmp_copy_1;
#line 573 "ml_tailcall.m"
                }
#line 573 "ml_tailcall.m"
                continue;
#line 573 "ml_tailcall.m"
              }
#line 569 "ml_tailcall.m"
          }
#line 568 "ml_tailcall.m"
        return ml_backend__ml_tailcall__HeadVar__3_3;
#line 568 "ml_tailcall.m"
      }
#line 568 "ml_tailcall.m"
      break;
#line 568 "ml_tailcall.m"
    }
#line 566 "ml_tailcall.m"
}

#line 531 "ml_tailcall.m"
static MR_Word MR_CALL 
ml_backend__ml_tailcall__lval_is_local_1_f_0(
#line 531 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Lval_3)
#line 531 "ml_tailcall.m"
{
#line 535 "ml_tailcall.m"
  while (MR_TRUE)
#line 535 "ml_tailcall.m"
    {
#line 535 "ml_tailcall.m"
      /* tailcall optimized into a loop */
#line 535 "ml_tailcall.m"
      {
#line 535 "ml_tailcall.m"
        MR_bool ml_backend__ml_tailcall__succeeded;
#line 535 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__IsLocal_4;

#line 535 "ml_tailcall.m"
#line 535 "ml_tailcall.m"
        switch (MR_tag((MR_Word) ml_backend__ml_tailcall__Lval_3)) {
#line 535 "ml_tailcall.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 535 "ml_tailcall.m"
          case (MR_Integer) 0:
#line 540 "ml_tailcall.m"
            {
#line 540 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_3, (MR_Integer) 1)));
#line 540 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall___Tag_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_3, (MR_Integer) 0)));
#line 540 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall___Field_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_3, (MR_Integer) 2)));
#line 540 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_3, (MR_Integer) 3)));
#line 540 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_3, (MR_Integer) 4)));
#line 542 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__BaseLval_12;

#line 542 "ml_tailcall.m"
              ml_backend__ml_tailcall__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_tailcall__Rval_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 542 "ml_tailcall.m"
              if (ml_backend__ml_tailcall__succeeded)
#line 542 "ml_tailcall.m"
                {
#line 542 "ml_tailcall.m"
                  ml_backend__ml_tailcall__BaseLval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_8, (MR_Integer) 1)));
#line 543 "ml_tailcall.m"
                  /* direct tailcall eliminated */
#line 543 "ml_tailcall.m"
                  {
#line 543 "ml_tailcall.m"
                    MR_Word ml_backend__ml_tailcall__Lval__tmp_copy_3 = ml_backend__ml_tailcall__BaseLval_12;

#line 543 "ml_tailcall.m"
                    ml_backend__ml_tailcall__Lval_3 = ml_backend__ml_tailcall__Lval__tmp_copy_3;
#line 543 "ml_tailcall.m"
                  }
#line 543 "ml_tailcall.m"
                  continue;
#line 542 "ml_tailcall.m"
                }
#line 542 "ml_tailcall.m"
              else
#line 545 "ml_tailcall.m"
                ml_backend__ml_tailcall__IsLocal_4 = (MR_Integer) 1;
#line 540 "ml_tailcall.m"
            }
#line 535 "ml_tailcall.m"
            break;
#line 535 "ml_tailcall.m"
          case (MR_Integer) 1:
#line 535 "ml_tailcall.m"
          case (MR_Integer) 2:
#line 551 "ml_tailcall.m"
            ml_backend__ml_tailcall__IsLocal_4 = (MR_Integer) 1;
#line 535 "ml_tailcall.m"
            break;
#line 535 "ml_tailcall.m"
          case (MR_Integer) 3:
#line 538 "ml_tailcall.m"
            ml_backend__ml_tailcall__IsLocal_4 = (MR_Integer) 0;
#line 535 "ml_tailcall.m"
            break;
#line 535 "ml_tailcall.m"
        }
#line 535 "ml_tailcall.m"
        return ml_backend__ml_tailcall__IsLocal_4;
#line 535 "ml_tailcall.m"
      }
#line 535 "ml_tailcall.m"
      break;
#line 535 "ml_tailcall.m"
    }
#line 531 "ml_tailcall.m"
}

#line 515 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall__match_return_vals_2_p_0(
#line 515 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
#line 515 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2)
#line 515 "ml_tailcall.m"
{
#line 517 "ml_tailcall.m"
  while (MR_TRUE)
#line 517 "ml_tailcall.m"
    {
#line 517 "ml_tailcall.m"
      /* tailcall optimized into a loop */
#line 517 "ml_tailcall.m"
      {
#line 517 "ml_tailcall.m"
        MR_bool ml_backend__ml_tailcall__succeeded;

#line 517 "ml_tailcall.m"
        if ((ml_backend__ml_tailcall__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 517 "ml_tailcall.m"
          ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 517 "ml_tailcall.m"
        else
#line 518 "ml_tailcall.m"
          {
#line 518 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__Rval_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 0)));
#line 518 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__Rvals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 1)));
#line 518 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__Lval_5;
#line 518 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__Lvals_6;
#line 518 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__V_8_8;
#line 518 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__V_9_9;

#line 518 "ml_tailcall.m"
            ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 518 "ml_tailcall.m"
            if (ml_backend__ml_tailcall__succeeded)
#line 518 "ml_tailcall.m"
              {
#line 518 "ml_tailcall.m"
                ml_backend__ml_tailcall__Lval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
#line 518 "ml_tailcall.m"
                ml_backend__ml_tailcall__Lvals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 1)));
#line 524 "ml_tailcall.m"
                ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__Rval_3)) == (MR_mktag((MR_Integer) 1)));
#line 524 "ml_tailcall.m"
                if (ml_backend__ml_tailcall__succeeded)
#line 524 "ml_tailcall.m"
                  {
#line 524 "ml_tailcall.m"
                    ml_backend__ml_tailcall__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Rval_3, (MR_Integer) 0)));
#line 524 "ml_tailcall.m"
                    {
#line 524 "ml_tailcall.m"
                      ml_backend__ml_tailcall__succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(ml_backend__ml_tailcall__Lval_5, ml_backend__ml_tailcall__V_9_9);
                    }
#line 518 "ml_tailcall.m"
                    if (ml_backend__ml_tailcall__succeeded)
#line 518 "ml_tailcall.m"
                      {
#line 525 "ml_tailcall.m"
                        {
#line 525 "ml_tailcall.m"
                          ml_backend__ml_tailcall__V_8_8 = ml_backend__ml_tailcall__lval_is_local_1_f_0(ml_backend__ml_tailcall__Lval_5);
                        }
#line 525 "ml_tailcall.m"
                        ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_8_8 == (MR_Integer) 0);
#line 518 "ml_tailcall.m"
                        if (ml_backend__ml_tailcall__succeeded)
#line 520 "ml_tailcall.m"
                          {
#line 520 "ml_tailcall.m"
                            /* direct tailcall eliminated */
#line 520 "ml_tailcall.m"
                            {
#line 520 "ml_tailcall.m"
                              MR_Word ml_backend__ml_tailcall__HeadVar__1__tmp_copy_1 = ml_backend__ml_tailcall__Rvals_4;
#line 520 "ml_tailcall.m"
                              MR_Word ml_backend__ml_tailcall__HeadVar__2__tmp_copy_2 = ml_backend__ml_tailcall__Lvals_6;

#line 520 "ml_tailcall.m"
                              ml_backend__ml_tailcall__HeadVar__2_2 = ml_backend__ml_tailcall__HeadVar__2__tmp_copy_2;
#line 520 "ml_tailcall.m"
                              ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__HeadVar__1__tmp_copy_1;
#line 520 "ml_tailcall.m"
                            }
#line 520 "ml_tailcall.m"
                            continue;
#line 520 "ml_tailcall.m"
                          }
#line 518 "ml_tailcall.m"
                      }
#line 524 "ml_tailcall.m"
                  }
#line 518 "ml_tailcall.m"
              }
#line 518 "ml_tailcall.m"
          }
#line 517 "ml_tailcall.m"
        return ml_backend__ml_tailcall__succeeded;
#line 517 "ml_tailcall.m"
      }
#line 517 "ml_tailcall.m"
      break;
#line 517 "ml_tailcall.m"
    }
#line 515 "ml_tailcall.m"
}

#line 485 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_default_6_p_0(
#line 485 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__TCallInfo_7,
#line 485 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Warnings_8,
#line 485 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__AtTailAfter_9,
#line 485 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_10,
#line 485 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Default0_11,
#line 485 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Default_12)
#line 485 "ml_tailcall.m"
{
#line 494 "ml_tailcall.m"
  {
#line 494 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 494 "ml_tailcall.m"
#line 494 "ml_tailcall.m"
    switch (MR_tag((MR_Word) ml_backend__ml_tailcall__Default0_11)) {
#line 494 "ml_tailcall.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 494 "ml_tailcall.m"
      case (MR_Integer) 0:
#line 494 "ml_tailcall.m"
        {
#line 495 "ml_tailcall.m"
          *ml_backend__ml_tailcall__Warnings_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 496 "ml_tailcall.m"
          *ml_backend__ml_tailcall__AtTailBefore_10 = ml_backend__ml_tailcall__AtTailAfter_9;
#line 497 "ml_tailcall.m"
          *ml_backend__ml_tailcall__Default_12 = ml_backend__ml_tailcall__Default0_11;
#line 494 "ml_tailcall.m"
        }
#line 494 "ml_tailcall.m"
        break;
#line 494 "ml_tailcall.m"
      case (MR_Integer) 1:
#line 499 "ml_tailcall.m"
        {
#line 499 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Statement0_13 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tailcall__Default0_11), (MR_Integer) 1);
#line 499 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Statement_14;
#line 499 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Stmt0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement0_13, (MR_Integer) 0)));
#line 499 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement0_13, (MR_Integer) 1)));
#line 499 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Stmt_25;

#line 273 "ml_tailcall.m"
          {
#line 273 "ml_tailcall.m"
            ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(ml_backend__ml_tailcall__TCallInfo_7, ml_backend__ml_tailcall__Context_24, ml_backend__ml_tailcall__Warnings_8, ml_backend__ml_tailcall__AtTailAfter_9, ml_backend__ml_tailcall__AtTailBefore_10, ml_backend__ml_tailcall__Stmt0_23, &ml_backend__ml_tailcall__Stmt_25);
          }
#line 274 "ml_tailcall.m"
          {
#line 274 "ml_tailcall.m"
            ml_backend__ml_tailcall__Statement_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 274 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement_14, 0) = ((MR_Box) (ml_backend__ml_tailcall__Stmt_25));
#line 274 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement_14, 1) = ((MR_Box) (ml_backend__ml_tailcall__Context_24));
#line 274 "ml_tailcall.m"
          }
#line 502 "ml_tailcall.m"
          *ml_backend__ml_tailcall__Default_12 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_tailcall__Statement_14);
#line 499 "ml_tailcall.m"
        }
#line 494 "ml_tailcall.m"
        break;
#line 494 "ml_tailcall.m"
    }
#line 494 "ml_tailcall.m"
  }
#line 485 "ml_tailcall.m"
}

#line 474 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_case_6_p_0(
#line 474 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__TCallInfo_7,
#line 474 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Warnings_8,
#line 474 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__AtTailAfter_9,
#line 474 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_10,
#line 474 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Case0_11,
#line 474 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Case_12)
#line 474 "ml_tailcall.m"
{
#line 479 "ml_tailcall.m"
  {
#line 479 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 479 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__FirstCond_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Case0_11, (MR_Integer) 0)));
#line 479 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__LaterConds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Case0_11, (MR_Integer) 1)));
#line 479 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Statement0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Case0_11, (MR_Integer) 2)));
#line 479 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Statement_16;
#line 479 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Stmt0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement0_15, (MR_Integer) 0)));
#line 479 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Context_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement0_15, (MR_Integer) 1)));
#line 479 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Stmt_27;

#line 273 "ml_tailcall.m"
    {
#line 273 "ml_tailcall.m"
      ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(ml_backend__ml_tailcall__TCallInfo_7, ml_backend__ml_tailcall__Context_26, ml_backend__ml_tailcall__Warnings_8, ml_backend__ml_tailcall__AtTailAfter_9, ml_backend__ml_tailcall__AtTailBefore_10, ml_backend__ml_tailcall__Stmt0_25, &ml_backend__ml_tailcall__Stmt_27);
    }
#line 274 "ml_tailcall.m"
    {
#line 274 "ml_tailcall.m"
      ml_backend__ml_tailcall__Statement_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 274 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement_16, 0) = ((MR_Box) (ml_backend__ml_tailcall__Stmt_27));
#line 274 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement_16, 1) = ((MR_Box) (ml_backend__ml_tailcall__Context_26));
#line 274 "ml_tailcall.m"
    }
#line 483 "ml_tailcall.m"
    {
#line 483 "ml_tailcall.m"
      MR_Word base;
#line 483 "ml_tailcall.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 483 "ml_tailcall.m"
      *ml_backend__ml_tailcall__Case_12 = base;
#line 483 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__FirstCond_13));
#line 483 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__LaterConds_14));
#line 483 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Statement_16));
#line 483 "ml_tailcall.m"
    }
#line 479 "ml_tailcall.m"
  }
#line 474 "ml_tailcall.m"
}

#line 461 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_cases_6_p_0(
#line 461 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__TCallInfo_1,
#line 461 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__2_2,
#line 461 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__AtTailAfter_3,
#line 461 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__4_4,
#line 461 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__5_5,
#line 461 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__6_6)
#line 461 "ml_tailcall.m"
{
#line 465 "ml_tailcall.m"
  {
#line 465 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 465 "ml_tailcall.m"
    if ((ml_backend__ml_tailcall__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 465 "ml_tailcall.m"
      {
#line 465 "ml_tailcall.m"
        *ml_backend__ml_tailcall__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 465 "ml_tailcall.m"
        *ml_backend__ml_tailcall__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 465 "ml_tailcall.m"
        *ml_backend__ml_tailcall__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 465 "ml_tailcall.m"
      }
#line 465 "ml_tailcall.m"
    else
#line 468 "ml_tailcall.m"
      {
#line 468 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__CaseWarnings_10;
#line 468 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__CasesWarnings_11;
#line 468 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__AtTailBefore_13;
#line 468 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__AtTailBefores_14;
#line 468 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Case0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__5_5, (MR_Integer) 0)));
#line 468 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Cases0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__5_5, (MR_Integer) 1)));
#line 468 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Case_17;
#line 468 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Cases_18;

#line 469 "ml_tailcall.m"
        {
#line 469 "ml_tailcall.m"
          ml_backend__ml_tailcall__mark_tailcalls_in_case_6_p_0(ml_backend__ml_tailcall__TCallInfo_1, &ml_backend__ml_tailcall__CaseWarnings_10, ml_backend__ml_tailcall__AtTailAfter_3, &ml_backend__ml_tailcall__AtTailBefore_13, ml_backend__ml_tailcall__Case0_15, &ml_backend__ml_tailcall__Case_17);
        }
#line 471 "ml_tailcall.m"
        {
#line 471 "ml_tailcall.m"
          ml_backend__ml_tailcall__mark_tailcalls_in_cases_6_p_0(ml_backend__ml_tailcall__TCallInfo_1, &ml_backend__ml_tailcall__CasesWarnings_11, ml_backend__ml_tailcall__AtTailAfter_3, &ml_backend__ml_tailcall__AtTailBefores_14, ml_backend__ml_tailcall__Cases0_16, &ml_backend__ml_tailcall__Cases_18);
        }
#line 466 "ml_tailcall.m"
        {
#line 466 "ml_tailcall.m"
          *ml_backend__ml_tailcall__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_tailcall_warning_0, ml_backend__ml_tailcall__CaseWarnings_10, ml_backend__ml_tailcall__CasesWarnings_11);
        }
#line 467 "ml_tailcall.m"
        {
#line 467 "ml_tailcall.m"
          MR_Word base;
#line 467 "ml_tailcall.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "ml_tailcall.m"
          *ml_backend__ml_tailcall__HeadVar__4_4 = base;
#line 467 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__AtTailBefore_13));
#line 467 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__AtTailBefores_14));
#line 467 "ml_tailcall.m"
        }
#line 468 "ml_tailcall.m"
        {
#line 468 "ml_tailcall.m"
          MR_Word base;
#line 468 "ml_tailcall.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "ml_tailcall.m"
          *ml_backend__ml_tailcall__HeadVar__6_6 = base;
#line 468 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Case_17));
#line 468 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Cases_18));
#line 468 "ml_tailcall.m"
        }
#line 468 "ml_tailcall.m"
      }
#line 465 "ml_tailcall.m"
  }
#line 461 "ml_tailcall.m"
}

#line 391 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_call_7_p_0(
#line 391 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__TCallInfo_8,
#line 391 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Context_9,
#line 391 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Warnings_10,
#line 391 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__AtTailAfter_11,
#line 391 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_12,
#line 391 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Stmt0_13,
#line 391 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Stmt_14)
#line 391 "ml_tailcall.m"
{
#line 396 "ml_tailcall.m"
  {
#line 396 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 396 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Sig_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 1)));
#line 396 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Func_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 2)));
#line 396 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Obj_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 3)));
#line 396 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 4)));
#line 396 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__ReturnLvals_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 5)));
#line 396 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__CallKind0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 6)));
#line 396 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__ModuleName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 0)));
#line 396 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__FunctionName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 1)));
#line 396 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__QualName_23;
#line 396 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Locals_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 2)));
#line 404 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__CodeAddr_25;
#line 405 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_37_37;

#line 400 "ml_tailcall.m"
    {
#line 400 "ml_tailcall.m"
      ml_backend__ml_tailcall__QualName_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 400 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualName_23, 0) = ((MR_Box) (ml_backend__ml_tailcall__ModuleName_21));
#line 400 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualName_23, 1) = ((MR_Box) ((MR_Integer) 0));
#line 400 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualName_23, 2) = ((MR_Box) (ml_backend__ml_tailcall__FunctionName_22));
#line 400 "ml_tailcall.m"
    }
#line 405 "ml_tailcall.m"
    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CallKind0_20 == (MR_Integer) 2);
#line 405 "ml_tailcall.m"
    if (ml_backend__ml_tailcall__succeeded)
#line 405 "ml_tailcall.m"
      {
#line 406 "ml_tailcall.m"
        ml_backend__ml_tailcall__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_tailcall__Func_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Func_16, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 406 "ml_tailcall.m"
        if (ml_backend__ml_tailcall__succeeded)
#line 406 "ml_tailcall.m"
          {
#line 406 "ml_tailcall.m"
            ml_backend__ml_tailcall__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Func_16, (MR_Integer) 1)));
#line 406 "ml_tailcall.m"
            ml_backend__ml_tailcall__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_tailcall__V_37_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__V_37_37, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 406 "ml_tailcall.m"
            if (ml_backend__ml_tailcall__succeeded)
#line 406 "ml_tailcall.m"
              {
#line 406 "ml_tailcall.m"
                ml_backend__ml_tailcall__CodeAddr_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__V_37_37, (MR_Integer) 1)));
#line 407 "ml_tailcall.m"
                {
#line 407 "ml_tailcall.m"
                  ml_backend__ml_tailcall__succeeded = ml_backend__ml_util__call_is_recursive_2_p_0(ml_backend__ml_tailcall__QualName_23, ml_backend__ml_tailcall__Stmt0_13);
                }
#line 406 "ml_tailcall.m"
              }
#line 406 "ml_tailcall.m"
          }
#line 405 "ml_tailcall.m"
      }
#line 404 "ml_tailcall.m"
    if (ml_backend__ml_tailcall__succeeded)
#line 409 "ml_tailcall.m"
      {
#line 411 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__ReturnRvals_26;
#line 411 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_39_39;
#line 411 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_40_40;

#line 411 "ml_tailcall.m"
        ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__AtTailAfter_11)) == (MR_mktag((MR_Integer) 1)));
#line 411 "ml_tailcall.m"
        if (ml_backend__ml_tailcall__succeeded)
#line 411 "ml_tailcall.m"
          {
#line 411 "ml_tailcall.m"
            ml_backend__ml_tailcall__ReturnRvals_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__AtTailAfter_11, (MR_Integer) 0)));
#line 415 "ml_tailcall.m"
            {
#line 415 "ml_tailcall.m"
              ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall__match_return_vals_2_p_0(ml_backend__ml_tailcall__ReturnRvals_26, ml_backend__ml_tailcall__ReturnLvals_19);
            }
#line 411 "ml_tailcall.m"
            if (ml_backend__ml_tailcall__succeeded)
#line 411 "ml_tailcall.m"
              {
#line 579 "ml_tailcall.m"
                if ((ml_backend__ml_tailcall__Obj_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 579 "ml_tailcall.m"
                  ml_backend__ml_tailcall__succeeded = MR_TRUE;
#line 579 "ml_tailcall.m"
                else
#line 580 "ml_tailcall.m"
                  {
#line 580 "ml_tailcall.m"
                    MR_Word ml_backend__ml_tailcall__Rval_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Obj_17, (MR_Integer) 0)));
#line 580 "ml_tailcall.m"
                    MR_Word ml_backend__ml_tailcall__V_56_56;

#line 580 "ml_tailcall.m"
                    {
#line 580 "ml_tailcall.m"
                      ml_backend__ml_tailcall__V_56_56 = ml_backend__ml_tailcall__check_rval_2_f_0(ml_backend__ml_tailcall__Rval_52, ml_backend__ml_tailcall__Locals_24);
                    }
#line 419 "ml_tailcall.m"
                    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_56_56 == (MR_Integer) 1);
#line 580 "ml_tailcall.m"
                  }
#line 411 "ml_tailcall.m"
                if (ml_backend__ml_tailcall__succeeded)
#line 411 "ml_tailcall.m"
                  {
#line 420 "ml_tailcall.m"
                    {
#line 420 "ml_tailcall.m"
                      ml_backend__ml_tailcall__V_39_39 = ml_backend__ml_tailcall__check_rvals_2_f_0(ml_backend__ml_tailcall__Args_18, ml_backend__ml_tailcall__Locals_24);
                    }
#line 420 "ml_tailcall.m"
                    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_39_39 == (MR_Integer) 1);
#line 411 "ml_tailcall.m"
                    if (ml_backend__ml_tailcall__succeeded)
#line 411 "ml_tailcall.m"
                      {
#line 423 "ml_tailcall.m"
                        {
#line 423 "ml_tailcall.m"
                          ml_backend__ml_tailcall__V_40_40 = ml_backend__ml_tailcall__check_rval_2_f_0(ml_backend__ml_tailcall__Func_16, ml_backend__ml_tailcall__Locals_24);
                        }
#line 423 "ml_tailcall.m"
                        ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_40_40 == (MR_Integer) 1);
#line 411 "ml_tailcall.m"
                      }
#line 411 "ml_tailcall.m"
                  }
#line 411 "ml_tailcall.m"
              }
#line 411 "ml_tailcall.m"
          }
#line 409 "ml_tailcall.m"
        if (ml_backend__ml_tailcall__succeeded)
#line 427 "ml_tailcall.m"
          {
#line 426 "ml_tailcall.m"
            {
#line 426 "ml_tailcall.m"
              MR_Word base;
#line 426 "ml_tailcall.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 426 "ml_tailcall.m"
              *ml_backend__ml_tailcall__Stmt_14 = base;
#line 426 "ml_tailcall.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 426 "ml_tailcall.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Sig_15));
#line 426 "ml_tailcall.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Func_16));
#line 426 "ml_tailcall.m"
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__Obj_17));
#line 426 "ml_tailcall.m"
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_tailcall__Args_18));
#line 426 "ml_tailcall.m"
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_tailcall__ReturnLvals_19));
#line 426 "ml_tailcall.m"
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) ((MR_Integer) 1));
#line 426 "ml_tailcall.m"
            }
#line 428 "ml_tailcall.m"
            *ml_backend__ml_tailcall__Warnings_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ml_tailcall.m"
            *ml_backend__ml_tailcall__AtTailBefore_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 427 "ml_tailcall.m"
          }
#line 409 "ml_tailcall.m"
        else
#line 450 "ml_tailcall.m"
          {
#line 434 "ml_tailcall.m"
#line 434 "ml_tailcall.m"
            switch (MR_tag((MR_Word) ml_backend__ml_tailcall__AtTailAfter_11)) {
#line 434 "ml_tailcall.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 434 "ml_tailcall.m"
              case (MR_Integer) 0:
#line 434 "ml_tailcall.m"
#line 434 "ml_tailcall.m"
                switch (MR_unmkbody(ml_backend__ml_tailcall__AtTailAfter_11)) {
#line 434 "ml_tailcall.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 434 "ml_tailcall.m"
                  case (MR_Integer) 0:
#line 433 "ml_tailcall.m"
                    *ml_backend__ml_tailcall__Warnings_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 434 "ml_tailcall.m"
                    break;
#line 434 "ml_tailcall.m"
                  case (MR_Integer) 1:
#line 441 "ml_tailcall.m"
                    {
#line 441 "ml_tailcall.m"
                      MR_Word ml_backend__ml_tailcall__QualProcLabel_28;
#line 441 "ml_tailcall.m"
                      MR_Word ml_backend__ml_tailcall__ProcLabel_33;
#line 441 "ml_tailcall.m"
                      MR_Word ml_backend__ml_tailcall__PredLabel_34;
#line 441 "ml_tailcall.m"
                      MR_Integer ml_backend__ml_tailcall__ProcId_35;
#line 441 "ml_tailcall.m"
                      MR_Word ml_backend__ml_tailcall__V_42_42;
#line 447 "ml_tailcall.m"
                      MR_Word ml_backend__ml_tailcall__V_31_31;
#line 447 "ml_tailcall.m"
                      MR_Word ml_backend__ml_tailcall__V_32_32;

#line 444 "ml_tailcall.m"
                      if (((MR_tag((MR_Word) ml_backend__ml_tailcall__CodeAddr_25)) == (MR_mktag((MR_Integer) 1))))
#line 445 "ml_tailcall.m"
                        {
#line 445 "ml_tailcall.m"
                          MR_Integer ml_backend__ml_tailcall___SeqNum_30;
#line 445 "ml_tailcall.m"
                          MR_Word ml_backend__ml_tailcall___Sig_44;

#line 445 "ml_tailcall.m"
                          ml_backend__ml_tailcall__QualProcLabel_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_25, (MR_Integer) 0)));
#line 445 "ml_tailcall.m"
                          ml_backend__ml_tailcall___SeqNum_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_25, (MR_Integer) 1)));
#line 445 "ml_tailcall.m"
                          ml_backend__ml_tailcall___Sig_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_25, (MR_Integer) 2)));
#line 445 "ml_tailcall.m"
                        }
#line 444 "ml_tailcall.m"
                      else
#line 443 "ml_tailcall.m"
                        {
#line 443 "ml_tailcall.m"
                          MR_Word ml_backend__ml_tailcall___Sig_29;

#line 443 "ml_tailcall.m"
                          ml_backend__ml_tailcall__QualProcLabel_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__CodeAddr_25, (MR_Integer) 0)));
#line 443 "ml_tailcall.m"
                          ml_backend__ml_tailcall___Sig_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__CodeAddr_25, (MR_Integer) 1)));
#line 443 "ml_tailcall.m"
                        }
#line 447 "ml_tailcall.m"
                      ml_backend__ml_tailcall__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualProcLabel_28, (MR_Integer) 0)));
#line 447 "ml_tailcall.m"
                      ml_backend__ml_tailcall__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualProcLabel_28, (MR_Integer) 1)));
#line 447 "ml_tailcall.m"
                      ml_backend__ml_tailcall__ProcLabel_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualProcLabel_28, (MR_Integer) 2)));
#line 448 "ml_tailcall.m"
                      ml_backend__ml_tailcall__PredLabel_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ProcLabel_33, (MR_Integer) 0)));
#line 448 "ml_tailcall.m"
                      ml_backend__ml_tailcall__ProcId_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ProcLabel_33, (MR_Integer) 1)));
#line 449 "ml_tailcall.m"
                      {
#line 449 "ml_tailcall.m"
                        ml_backend__ml_tailcall__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 449 "ml_tailcall.m"
                        MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_42_42, 0) = ((MR_Box) (ml_backend__ml_tailcall__PredLabel_34));
#line 449 "ml_tailcall.m"
                        MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_42_42, 1) = ((MR_Box) (ml_backend__ml_tailcall__ProcId_35));
#line 449 "ml_tailcall.m"
                        MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_42_42, 2) = ((MR_Box) (ml_backend__ml_tailcall__Context_9));
#line 449 "ml_tailcall.m"
                      }
#line 449 "ml_tailcall.m"
                      {
#line 449 "ml_tailcall.m"
                        MR_Word base;
#line 449 "ml_tailcall.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "ml_tailcall.m"
                        *ml_backend__ml_tailcall__Warnings_10 = base;
#line 449 "ml_tailcall.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_42_42));
#line 449 "ml_tailcall.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 449 "ml_tailcall.m"
                      }
#line 441 "ml_tailcall.m"
                    }
#line 434 "ml_tailcall.m"
                    break;
#line 434 "ml_tailcall.m"
                }
#line 434 "ml_tailcall.m"
                break;
#line 434 "ml_tailcall.m"
              case (MR_Integer) 1:
#line 441 "ml_tailcall.m"
                {
#line 441 "ml_tailcall.m"
                  MR_Word ml_backend__ml_tailcall__QualProcLabel_28;
#line 441 "ml_tailcall.m"
                  MR_Word ml_backend__ml_tailcall__ProcLabel_33;
#line 441 "ml_tailcall.m"
                  MR_Word ml_backend__ml_tailcall__PredLabel_34;
#line 441 "ml_tailcall.m"
                  MR_Integer ml_backend__ml_tailcall__ProcId_35;
#line 441 "ml_tailcall.m"
                  MR_Word ml_backend__ml_tailcall__V_42_42;
#line 447 "ml_tailcall.m"
                  MR_Word ml_backend__ml_tailcall__V_31_31;
#line 447 "ml_tailcall.m"
                  MR_Word ml_backend__ml_tailcall__V_32_32;

#line 444 "ml_tailcall.m"
                  if (((MR_tag((MR_Word) ml_backend__ml_tailcall__CodeAddr_25)) == (MR_mktag((MR_Integer) 1))))
#line 445 "ml_tailcall.m"
                    {
#line 445 "ml_tailcall.m"
                      MR_Integer ml_backend__ml_tailcall___SeqNum_30;
#line 445 "ml_tailcall.m"
                      MR_Word ml_backend__ml_tailcall___Sig_44;

#line 445 "ml_tailcall.m"
                      ml_backend__ml_tailcall__QualProcLabel_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_25, (MR_Integer) 0)));
#line 445 "ml_tailcall.m"
                      ml_backend__ml_tailcall___SeqNum_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_25, (MR_Integer) 1)));
#line 445 "ml_tailcall.m"
                      ml_backend__ml_tailcall___Sig_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_25, (MR_Integer) 2)));
#line 445 "ml_tailcall.m"
                    }
#line 444 "ml_tailcall.m"
                  else
#line 443 "ml_tailcall.m"
                    {
#line 443 "ml_tailcall.m"
                      MR_Word ml_backend__ml_tailcall___Sig_29;

#line 443 "ml_tailcall.m"
                      ml_backend__ml_tailcall__QualProcLabel_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__CodeAddr_25, (MR_Integer) 0)));
#line 443 "ml_tailcall.m"
                      ml_backend__ml_tailcall___Sig_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__CodeAddr_25, (MR_Integer) 1)));
#line 443 "ml_tailcall.m"
                    }
#line 447 "ml_tailcall.m"
                  ml_backend__ml_tailcall__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualProcLabel_28, (MR_Integer) 0)));
#line 447 "ml_tailcall.m"
                  ml_backend__ml_tailcall__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualProcLabel_28, (MR_Integer) 1)));
#line 447 "ml_tailcall.m"
                  ml_backend__ml_tailcall__ProcLabel_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualProcLabel_28, (MR_Integer) 2)));
#line 448 "ml_tailcall.m"
                  ml_backend__ml_tailcall__PredLabel_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ProcLabel_33, (MR_Integer) 0)));
#line 448 "ml_tailcall.m"
                  ml_backend__ml_tailcall__ProcId_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ProcLabel_33, (MR_Integer) 1)));
#line 449 "ml_tailcall.m"
                  {
#line 449 "ml_tailcall.m"
                    ml_backend__ml_tailcall__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 449 "ml_tailcall.m"
                    MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_42_42, 0) = ((MR_Box) (ml_backend__ml_tailcall__PredLabel_34));
#line 449 "ml_tailcall.m"
                    MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_42_42, 1) = ((MR_Box) (ml_backend__ml_tailcall__ProcId_35));
#line 449 "ml_tailcall.m"
                    MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_42_42, 2) = ((MR_Box) (ml_backend__ml_tailcall__Context_9));
#line 449 "ml_tailcall.m"
                  }
#line 449 "ml_tailcall.m"
                  {
#line 449 "ml_tailcall.m"
                    MR_Word base;
#line 449 "ml_tailcall.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "ml_tailcall.m"
                    *ml_backend__ml_tailcall__Warnings_10 = base;
#line 449 "ml_tailcall.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_42_42));
#line 449 "ml_tailcall.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 449 "ml_tailcall.m"
                  }
#line 441 "ml_tailcall.m"
                }
#line 434 "ml_tailcall.m"
                break;
#line 434 "ml_tailcall.m"
            }
#line 451 "ml_tailcall.m"
            *ml_backend__ml_tailcall__Stmt_14 = ml_backend__ml_tailcall__Stmt0_13;
#line 452 "ml_tailcall.m"
            *ml_backend__ml_tailcall__AtTailBefore_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 450 "ml_tailcall.m"
          }
#line 409 "ml_tailcall.m"
      }
#line 404 "ml_tailcall.m"
    else
#line 456 "ml_tailcall.m"
      {
#line 456 "ml_tailcall.m"
        *ml_backend__ml_tailcall__Stmt_14 = ml_backend__ml_tailcall__Stmt0_13;
#line 457 "ml_tailcall.m"
        *ml_backend__ml_tailcall__Warnings_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 136 "ml_tailcall.m"
#line 136 "ml_tailcall.m"
        switch (MR_tag((MR_Word) ml_backend__ml_tailcall__AtTailAfter_11)) {
#line 136 "ml_tailcall.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 136 "ml_tailcall.m"
          case (MR_Integer) 0:
#line 136 "ml_tailcall.m"
#line 136 "ml_tailcall.m"
            switch (MR_unmkbody(ml_backend__ml_tailcall__AtTailAfter_11)) {
#line 136 "ml_tailcall.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 136 "ml_tailcall.m"
              case (MR_Integer) 0:
#line 137 "ml_tailcall.m"
                *ml_backend__ml_tailcall__AtTailBefore_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 136 "ml_tailcall.m"
                break;
#line 136 "ml_tailcall.m"
              case (MR_Integer) 1:
#line 139 "ml_tailcall.m"
                *ml_backend__ml_tailcall__AtTailBefore_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 136 "ml_tailcall.m"
                break;
#line 136 "ml_tailcall.m"
            }
#line 136 "ml_tailcall.m"
            break;
#line 136 "ml_tailcall.m"
          case (MR_Integer) 1:
#line 136 "ml_tailcall.m"
            *ml_backend__ml_tailcall__AtTailBefore_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 136 "ml_tailcall.m"
            break;
#line 136 "ml_tailcall.m"
        }
#line 456 "ml_tailcall.m"
      }
#line 396 "ml_tailcall.m"
  }
#line 391 "ml_tailcall.m"
}

#line 339 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0_1(
#line 339 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__closure_arg,
#line 339 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1)
#line 339 "ml_tailcall.m"
{
#line 339 "ml_tailcall.m"
  {
#line 339 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 339 "ml_tailcall.m"
    MR_Box ml_backend__ml_tailcall__closure = ml_backend__ml_tailcall__closure_arg;

#line 339 "ml_tailcall.m"
    {
#line 339 "ml_tailcall.m"
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall__IntroducedFrom__pred__mark_tailcalls_in_stmt__339__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1));
    }
#line 339 "ml_tailcall.m"
    return ml_backend__ml_tailcall__succeeded;
#line 339 "ml_tailcall.m"
  }
#line 339 "ml_tailcall.m"
}

#line 276 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(
#line 276 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__TCallInfo_8,
#line 276 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Context_9,
#line 276 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Warnings_10,
#line 276 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__AtTailAfter0_11,
#line 276 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_12,
#line 276 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Stmt0_13,
#line 276 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Stmt_14)
#line 276 "ml_tailcall.m"
{
#line 283 "ml_tailcall.m"
  {
#line 283 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 283 "ml_tailcall.m"
#line 283 "ml_tailcall.m"
    switch (MR_tag((MR_Word) ml_backend__ml_tailcall__Stmt0_13)) {
#line 283 "ml_tailcall.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 283 "ml_tailcall.m"
      case (MR_Integer) 0:
#line 283 "ml_tailcall.m"
        {
#line 283 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Defns0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 0)));
#line 283 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Statements0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 1)));
#line 283 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 0)));
#line 283 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__DefnsWarnings_18;
#line 283 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Defns_19;
#line 283 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Locals_20;
#line 283 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__NewTCallInfo_21;
#line 283 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__StatementsWarnings_22;
#line 283 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Statements_23;
#line 283 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__V_73_73;
#line 283 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__V_74_74;
#line 283 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__V_79_79;
#line 283 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__V_80_80;
#line 290 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 1)));
#line 290 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 2)));

#line 291 "ml_tailcall.m"
          {
#line 291 "ml_tailcall.m"
            ml_backend__ml_tailcall__mark_tailcalls_in_defns_4_p_0(ml_backend__ml_tailcall__ModuleName_17, &ml_backend__ml_tailcall__DefnsWarnings_18, ml_backend__ml_tailcall__Defns0_15, &ml_backend__ml_tailcall__Defns_19);
          }
#line 292 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 0)));
#line 292 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 1)));
#line 292 "ml_tailcall.m"
          ml_backend__ml_tailcall__Locals_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 2)));
#line 293 "ml_tailcall.m"
          {
#line 293 "ml_tailcall.m"
            ml_backend__ml_tailcall__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 293 "ml_tailcall.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_74_74, 0) = ((MR_Box) (ml_backend__ml_tailcall__Defns_19));
#line 293 "ml_tailcall.m"
          }
#line 293 "ml_tailcall.m"
          {
#line 293 "ml_tailcall.m"
            ml_backend__ml_tailcall__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "ml_tailcall.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_73_73, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_74_74));
#line 293 "ml_tailcall.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_73_73, 1) = ((MR_Box) (ml_backend__ml_tailcall__Locals_20));
#line 293 "ml_tailcall.m"
          }
#line 293 "ml_tailcall.m"
          {
#line 293 "ml_tailcall.m"
            ml_backend__ml_tailcall__NewTCallInfo_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 293 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__NewTCallInfo_21, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_79_79));
#line 293 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__NewTCallInfo_21, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_80_80));
#line 293 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__NewTCallInfo_21, 2) = ((MR_Box) (ml_backend__ml_tailcall__V_73_73));
#line 293 "ml_tailcall.m"
          }
#line 294 "ml_tailcall.m"
          {
#line 294 "ml_tailcall.m"
            ml_backend__ml_tailcall__mark_tailcalls_in_statements_6_p_0(ml_backend__ml_tailcall__NewTCallInfo_21, &ml_backend__ml_tailcall__StatementsWarnings_22, ml_backend__ml_tailcall__AtTailAfter0_11, ml_backend__ml_tailcall__AtTailBefore_12, ml_backend__ml_tailcall__Statements0_16, &ml_backend__ml_tailcall__Statements_23);
          }
#line 296 "ml_tailcall.m"
          {
#line 296 "ml_tailcall.m"
            *ml_backend__ml_tailcall__Warnings_10 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_tailcall_warning_0, ml_backend__ml_tailcall__DefnsWarnings_18, ml_backend__ml_tailcall__StatementsWarnings_22);
          }
#line 297 "ml_tailcall.m"
          {
#line 297 "ml_tailcall.m"
            MR_Word base;
#line 297 "ml_tailcall.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 297 "ml_tailcall.m"
            *ml_backend__ml_tailcall__Stmt_14 = base;
#line 297 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Defns_19));
#line 297 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Statements_23));
#line 297 "ml_tailcall.m"
          }
#line 283 "ml_tailcall.m"
        }
#line 283 "ml_tailcall.m"
        break;
#line 283 "ml_tailcall.m"
      case (MR_Integer) 1:
#line 299 "ml_tailcall.m"
        {
#line 299 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Kind_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 0)));
#line 299 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Rval_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 1)));
#line 299 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Statement0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 2)));
#line 299 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__AtTailAfter_27;
#line 299 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__AtTailBefore0_28;
#line 299 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Statement_29;

#line 136 "ml_tailcall.m"
#line 136 "ml_tailcall.m"
          switch (MR_tag((MR_Word) ml_backend__ml_tailcall__AtTailAfter0_11)) {
#line 136 "ml_tailcall.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 136 "ml_tailcall.m"
            case (MR_Integer) 0:
#line 136 "ml_tailcall.m"
#line 136 "ml_tailcall.m"
              switch (MR_unmkbody(ml_backend__ml_tailcall__AtTailAfter0_11)) {
#line 136 "ml_tailcall.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 136 "ml_tailcall.m"
                case (MR_Integer) 0:
#line 137 "ml_tailcall.m"
                  ml_backend__ml_tailcall__AtTailAfter_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 136 "ml_tailcall.m"
                  break;
#line 136 "ml_tailcall.m"
                case (MR_Integer) 1:
#line 139 "ml_tailcall.m"
                  ml_backend__ml_tailcall__AtTailAfter_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 136 "ml_tailcall.m"
                  break;
#line 136 "ml_tailcall.m"
              }
#line 136 "ml_tailcall.m"
              break;
#line 136 "ml_tailcall.m"
            case (MR_Integer) 1:
#line 136 "ml_tailcall.m"
              ml_backend__ml_tailcall__AtTailAfter_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 136 "ml_tailcall.m"
              break;
#line 136 "ml_tailcall.m"
          }
#line 303 "ml_tailcall.m"
          {
#line 303 "ml_tailcall.m"
            ml_backend__ml_tailcall__mark_tailcalls_in_statement_6_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__Warnings_10, ml_backend__ml_tailcall__AtTailAfter_27, &ml_backend__ml_tailcall__AtTailBefore0_28, ml_backend__ml_tailcall__Statement0_26, &ml_backend__ml_tailcall__Statement_29);
          }
#line 136 "ml_tailcall.m"
#line 136 "ml_tailcall.m"
          switch (MR_tag((MR_Word) ml_backend__ml_tailcall__AtTailBefore0_28)) {
#line 136 "ml_tailcall.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 136 "ml_tailcall.m"
            case (MR_Integer) 0:
#line 136 "ml_tailcall.m"
#line 136 "ml_tailcall.m"
              switch (MR_unmkbody(ml_backend__ml_tailcall__AtTailBefore0_28)) {
#line 136 "ml_tailcall.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 136 "ml_tailcall.m"
                case (MR_Integer) 0:
#line 137 "ml_tailcall.m"
                  *ml_backend__ml_tailcall__AtTailBefore_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 136 "ml_tailcall.m"
                  break;
#line 136 "ml_tailcall.m"
                case (MR_Integer) 1:
#line 139 "ml_tailcall.m"
                  *ml_backend__ml_tailcall__AtTailBefore_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 136 "ml_tailcall.m"
                  break;
#line 136 "ml_tailcall.m"
              }
#line 136 "ml_tailcall.m"
              break;
#line 136 "ml_tailcall.m"
            case (MR_Integer) 1:
#line 136 "ml_tailcall.m"
              *ml_backend__ml_tailcall__AtTailBefore_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 136 "ml_tailcall.m"
              break;
#line 136 "ml_tailcall.m"
          }
#line 307 "ml_tailcall.m"
          {
#line 307 "ml_tailcall.m"
            MR_Word base;
#line 307 "ml_tailcall.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 307 "ml_tailcall.m"
            *ml_backend__ml_tailcall__Stmt_14 = base;
#line 307 "ml_tailcall.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Kind_24));
#line 307 "ml_tailcall.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Rval_25));
#line 307 "ml_tailcall.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Statement_29));
#line 307 "ml_tailcall.m"
          }
#line 299 "ml_tailcall.m"
        }
#line 283 "ml_tailcall.m"
        break;
#line 283 "ml_tailcall.m"
      case (MR_Integer) 2:
#line 309 "ml_tailcall.m"
        {
#line 309 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Cond_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 0)));
#line 309 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Then0_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 1)));
#line 309 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__MaybeElse0_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 2)));
#line 309 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__ThenWarnings_33;
#line 309 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__AtTailBeforeThen_34;
#line 309 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Then_35;
#line 309 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__ElseWarnings_36;
#line 309 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__AtTailBeforeElse_37;
#line 309 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__MaybeElse_38;

#line 312 "ml_tailcall.m"
          {
#line 312 "ml_tailcall.m"
            ml_backend__ml_tailcall__mark_tailcalls_in_statement_6_p_0(ml_backend__ml_tailcall__TCallInfo_8, &ml_backend__ml_tailcall__ThenWarnings_33, ml_backend__ml_tailcall__AtTailAfter0_11, &ml_backend__ml_tailcall__AtTailBeforeThen_34, ml_backend__ml_tailcall__Then0_31, &ml_backend__ml_tailcall__Then_35);
          }
#line 314 "ml_tailcall.m"
          {
#line 314 "ml_tailcall.m"
            ml_backend__ml_tailcall__mark_tailcalls_in_maybe_statement_6_p_0(ml_backend__ml_tailcall__TCallInfo_8, &ml_backend__ml_tailcall__ElseWarnings_36, ml_backend__ml_tailcall__AtTailAfter0_11, &ml_backend__ml_tailcall__AtTailBeforeElse_37, ml_backend__ml_tailcall__MaybeElse0_32, &ml_backend__ml_tailcall__MaybeElse_38);
          }
#line 316 "ml_tailcall.m"
          {
#line 316 "ml_tailcall.m"
            *ml_backend__ml_tailcall__Warnings_10 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_tailcall_warning_0, ml_backend__ml_tailcall__ThenWarnings_33, ml_backend__ml_tailcall__ElseWarnings_36);
          }
#line 318 "ml_tailcall.m"
          ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__AtTailBeforeThen_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 319 "ml_tailcall.m"
          if (!(ml_backend__ml_tailcall__succeeded))
#line 319 "ml_tailcall.m"
            ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__AtTailBeforeElse_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 317 "ml_tailcall.m"
          if (ml_backend__ml_tailcall__succeeded)
#line 322 "ml_tailcall.m"
            *ml_backend__ml_tailcall__AtTailBefore_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 317 "ml_tailcall.m"
          else
#line 324 "ml_tailcall.m"
            *ml_backend__ml_tailcall__AtTailBefore_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 326 "ml_tailcall.m"
          {
#line 326 "ml_tailcall.m"
            MR_Word base;
#line 326 "ml_tailcall.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 326 "ml_tailcall.m"
            *ml_backend__ml_tailcall__Stmt_14 = base;
#line 326 "ml_tailcall.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Cond_30));
#line 326 "ml_tailcall.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Then_35));
#line 326 "ml_tailcall.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__MaybeElse_38));
#line 326 "ml_tailcall.m"
          }
#line 309 "ml_tailcall.m"
        }
#line 283 "ml_tailcall.m"
        break;
#line 283 "ml_tailcall.m"
      case (MR_Integer) 3:
#line 283 "ml_tailcall.m"
#line 283 "ml_tailcall.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 0)))) {
#line 283 "ml_tailcall.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 283 "ml_tailcall.m"
          case (MR_Integer) 0:
#line 328 "ml_tailcall.m"
            {
#line 328 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Type_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 1)));
#line 328 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Val_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 2)));
#line 328 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Range_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 3)));
#line 328 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Cases0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 4)));
#line 328 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Default0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 5)));
#line 328 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__CasesWarnings_44;
#line 328 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__AtTailBeforeCases_45;
#line 328 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Cases_46;
#line 328 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__DefaultWarnings_47;
#line 328 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__AtTailBeforeDefault_48;
#line 328 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Default_49;

#line 331 "ml_tailcall.m"
              {
#line 331 "ml_tailcall.m"
                ml_backend__ml_tailcall__mark_tailcalls_in_cases_6_p_0(ml_backend__ml_tailcall__TCallInfo_8, &ml_backend__ml_tailcall__CasesWarnings_44, ml_backend__ml_tailcall__AtTailAfter0_11, &ml_backend__ml_tailcall__AtTailBeforeCases_45, ml_backend__ml_tailcall__Cases0_42, &ml_backend__ml_tailcall__Cases_46);
              }
#line 333 "ml_tailcall.m"
              {
#line 333 "ml_tailcall.m"
                ml_backend__ml_tailcall__mark_tailcalls_in_default_6_p_0(ml_backend__ml_tailcall__TCallInfo_8, &ml_backend__ml_tailcall__DefaultWarnings_47, ml_backend__ml_tailcall__AtTailAfter0_11, &ml_backend__ml_tailcall__AtTailBeforeDefault_48, ml_backend__ml_tailcall__Default0_43, &ml_backend__ml_tailcall__Default_49);
              }
#line 335 "ml_tailcall.m"
              {
#line 335 "ml_tailcall.m"
                *ml_backend__ml_tailcall__Warnings_10 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_tailcall_warning_0, ml_backend__ml_tailcall__CasesWarnings_44, ml_backend__ml_tailcall__DefaultWarnings_47);
              }
#line 339 "ml_tailcall.m"
              {
#line 339 "ml_tailcall.m"
                MR_Word ml_backend__ml_tailcall__V_50_50;
#line 339 "ml_tailcall.m"
                MR_Box ml_backend__ml_tailcall__conv0_V_50_50;

#line 339 "ml_tailcall.m"
                {
#line 339 "ml_tailcall.m"
                  ml_backend__ml_tailcall__succeeded = mercury__list__find_first_match_3_p_0((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_at_tail_0, (MR_Word) &ml_backend__ml_tailcall_scalar_common_5[0], ml_backend__ml_tailcall__AtTailBeforeCases_45, &ml_backend__ml_tailcall__conv0_V_50_50);
                }
#line 339 "ml_tailcall.m"
                if (ml_backend__ml_tailcall__succeeded)
#line 339 "ml_tailcall.m"
                  {
#line 339 "ml_tailcall.m"
                    ml_backend__ml_tailcall__V_50_50 = ((MR_Word) ml_backend__ml_tailcall__conv0_V_50_50);
#line 339 "ml_tailcall.m"
                    ml_backend__ml_tailcall__succeeded = MR_TRUE;
#line 339 "ml_tailcall.m"
                  }
#line 339 "ml_tailcall.m"
              }
#line 341 "ml_tailcall.m"
              if (!(ml_backend__ml_tailcall__succeeded))
#line 342 "ml_tailcall.m"
                ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__AtTailBeforeDefault_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 336 "ml_tailcall.m"
              if (ml_backend__ml_tailcall__succeeded)
#line 345 "ml_tailcall.m"
                *ml_backend__ml_tailcall__AtTailBefore_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 336 "ml_tailcall.m"
              else
#line 347 "ml_tailcall.m"
                *ml_backend__ml_tailcall__AtTailBefore_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 349 "ml_tailcall.m"
              {
#line 349 "ml_tailcall.m"
                MR_Word base;
#line 349 "ml_tailcall.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 349 "ml_tailcall.m"
                *ml_backend__ml_tailcall__Stmt_14 = base;
#line 349 "ml_tailcall.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 349 "ml_tailcall.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Type_39));
#line 349 "ml_tailcall.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Val_40));
#line 349 "ml_tailcall.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__Range_41));
#line 349 "ml_tailcall.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_tailcall__Cases_46));
#line 349 "ml_tailcall.m"
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_tailcall__Default_49));
#line 349 "ml_tailcall.m"
              }
#line 328 "ml_tailcall.m"
            }
#line 283 "ml_tailcall.m"
            break;
#line 283 "ml_tailcall.m"
          case (MR_Integer) 1:
#line 376 "ml_tailcall.m"
            {
#line 377 "ml_tailcall.m"
              *ml_backend__ml_tailcall__Warnings_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 378 "ml_tailcall.m"
              *ml_backend__ml_tailcall__AtTailBefore_12 = ml_backend__ml_tailcall__AtTailAfter0_11;
#line 379 "ml_tailcall.m"
              *ml_backend__ml_tailcall__Stmt_14 = ml_backend__ml_tailcall__Stmt0_13;
#line 376 "ml_tailcall.m"
            }
#line 283 "ml_tailcall.m"
            break;
#line 283 "ml_tailcall.m"
          case (MR_Integer) 2:
#line 283 "ml_tailcall.m"
          case (MR_Integer) 3:
#line 283 "ml_tailcall.m"
          case (MR_Integer) 7:
#line 283 "ml_tailcall.m"
          case (MR_Integer) 8:
#line 371 "ml_tailcall.m"
            {
#line 372 "ml_tailcall.m"
              *ml_backend__ml_tailcall__Warnings_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 136 "ml_tailcall.m"
#line 136 "ml_tailcall.m"
              switch (MR_tag((MR_Word) ml_backend__ml_tailcall__AtTailAfter0_11)) {
#line 136 "ml_tailcall.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 136 "ml_tailcall.m"
                case (MR_Integer) 0:
#line 136 "ml_tailcall.m"
#line 136 "ml_tailcall.m"
                  switch (MR_unmkbody(ml_backend__ml_tailcall__AtTailAfter0_11)) {
#line 136 "ml_tailcall.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 136 "ml_tailcall.m"
                    case (MR_Integer) 0:
#line 137 "ml_tailcall.m"
                      *ml_backend__ml_tailcall__AtTailBefore_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 136 "ml_tailcall.m"
                      break;
#line 136 "ml_tailcall.m"
                    case (MR_Integer) 1:
#line 139 "ml_tailcall.m"
                      *ml_backend__ml_tailcall__AtTailBefore_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 136 "ml_tailcall.m"
                      break;
#line 136 "ml_tailcall.m"
                  }
#line 136 "ml_tailcall.m"
                  break;
#line 136 "ml_tailcall.m"
                case (MR_Integer) 1:
#line 136 "ml_tailcall.m"
                  *ml_backend__ml_tailcall__AtTailBefore_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 136 "ml_tailcall.m"
                  break;
#line 136 "ml_tailcall.m"
              }
#line 374 "ml_tailcall.m"
              *ml_backend__ml_tailcall__Stmt_14 = ml_backend__ml_tailcall__Stmt0_13;
#line 371 "ml_tailcall.m"
            }
#line 283 "ml_tailcall.m"
            break;
#line 283 "ml_tailcall.m"
          case (MR_Integer) 4:
#line 352 "ml_tailcall.m"
            {
#line 352 "ml_tailcall.m"
              ml_backend__ml_tailcall__mark_tailcalls_in_stmt_call_7_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__Context_9, ml_backend__ml_tailcall__Warnings_10, ml_backend__ml_tailcall__AtTailAfter0_11, ml_backend__ml_tailcall__AtTailBefore_12, ml_backend__ml_tailcall__Stmt0_13, ml_backend__ml_tailcall__Stmt_14);
            }
#line 283 "ml_tailcall.m"
            break;
#line 283 "ml_tailcall.m"
          case (MR_Integer) 5:
#line 381 "ml_tailcall.m"
            {
#line 381 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__ReturnVals_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 1)));

#line 383 "ml_tailcall.m"
              *ml_backend__ml_tailcall__Warnings_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 384 "ml_tailcall.m"
              {
#line 384 "ml_tailcall.m"
                MR_Word base;
#line 384 "ml_tailcall.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 384 "ml_tailcall.m"
                *ml_backend__ml_tailcall__AtTailBefore_12 = base;
#line 384 "ml_tailcall.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__ReturnVals_70));
#line 384 "ml_tailcall.m"
              }
#line 385 "ml_tailcall.m"
              *ml_backend__ml_tailcall__Stmt_14 = ml_backend__ml_tailcall__Stmt0_13;
#line 381 "ml_tailcall.m"
            }
#line 283 "ml_tailcall.m"
            break;
#line 283 "ml_tailcall.m"
          case (MR_Integer) 6:
#line 355 "ml_tailcall.m"
            {
#line 355 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Ref_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 1)));
#line 355 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Handler0_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 3)));
#line 355 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__TryWarnings_59;
#line 355 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__HandlerWarnings_61;
#line 355 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Handler_63;
#line 355 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Statement0_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 2)));
#line 355 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Statement_76;
#line 359 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__V_60_60;
#line 361 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__V_62_62;

#line 359 "ml_tailcall.m"
              {
#line 359 "ml_tailcall.m"
                ml_backend__ml_tailcall__mark_tailcalls_in_statement_6_p_0(ml_backend__ml_tailcall__TCallInfo_8, &ml_backend__ml_tailcall__TryWarnings_59, ml_backend__ml_tailcall__AtTailAfter0_11, &ml_backend__ml_tailcall__V_60_60, ml_backend__ml_tailcall__Statement0_75, &ml_backend__ml_tailcall__Statement_76);
              }
#line 361 "ml_tailcall.m"
              {
#line 361 "ml_tailcall.m"
                ml_backend__ml_tailcall__mark_tailcalls_in_statement_6_p_0(ml_backend__ml_tailcall__TCallInfo_8, &ml_backend__ml_tailcall__HandlerWarnings_61, ml_backend__ml_tailcall__AtTailAfter0_11, &ml_backend__ml_tailcall__V_62_62, ml_backend__ml_tailcall__Handler0_58, &ml_backend__ml_tailcall__Handler_63);
              }
#line 363 "ml_tailcall.m"
              {
#line 363 "ml_tailcall.m"
                *ml_backend__ml_tailcall__Warnings_10 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_tailcall_warning_0, ml_backend__ml_tailcall__TryWarnings_59, ml_backend__ml_tailcall__HandlerWarnings_61);
              }
#line 364 "ml_tailcall.m"
              *ml_backend__ml_tailcall__AtTailBefore_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 365 "ml_tailcall.m"
              {
#line 365 "ml_tailcall.m"
                MR_Word base;
#line 365 "ml_tailcall.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 365 "ml_tailcall.m"
                *ml_backend__ml_tailcall__Stmt_14 = base;
#line 365 "ml_tailcall.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 365 "ml_tailcall.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Ref_57));
#line 365 "ml_tailcall.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Statement_76));
#line 365 "ml_tailcall.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__Handler_63));
#line 365 "ml_tailcall.m"
              }
#line 355 "ml_tailcall.m"
            }
#line 283 "ml_tailcall.m"
            break;
#line 283 "ml_tailcall.m"
        }
#line 283 "ml_tailcall.m"
        break;
#line 283 "ml_tailcall.m"
    }
#line 283 "ml_tailcall.m"
  }
#line 276 "ml_tailcall.m"
}

#line 267 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_statement_6_p_0(
#line 267 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__TCallInfo_7,
#line 267 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Warnings_8,
#line 267 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_14,
#line 267 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_15,
#line 267 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_Statement_0_16,
#line 267 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_Statement_17)
#line 267 "ml_tailcall.m"
{
#line 271 "ml_tailcall.m"
  {
#line 271 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 271 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Stmt0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_Statement_0_16, (MR_Integer) 0)));
#line 271 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_Statement_0_16, (MR_Integer) 1)));
#line 271 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Stmt_13;

#line 273 "ml_tailcall.m"
    {
#line 273 "ml_tailcall.m"
      ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(ml_backend__ml_tailcall__TCallInfo_7, ml_backend__ml_tailcall__Context_12, ml_backend__ml_tailcall__Warnings_8, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_14, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_15, ml_backend__ml_tailcall__Stmt0_11, &ml_backend__ml_tailcall__Stmt_13);
    }
#line 274 "ml_tailcall.m"
    {
#line 274 "ml_tailcall.m"
      MR_Word base;
#line 274 "ml_tailcall.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 274 "ml_tailcall.m"
      *ml_backend__ml_tailcall__STATE_VARIABLE_Statement_17 = base;
#line 274 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Stmt_13));
#line 274 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Context_12));
#line 274 "ml_tailcall.m"
    }
#line 271 "ml_tailcall.m"
  }
#line 267 "ml_tailcall.m"
}

#line 255 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_statements_6_p_0(
#line 255 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__TCallInfo_1,
#line 255 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__2_2,
#line 255 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_3,
#line 255 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_4,
#line 255 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__5_5,
#line 255 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__6_6)
#line 255 "ml_tailcall.m"
{
#line 259 "ml_tailcall.m"
  {
#line 259 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 259 "ml_tailcall.m"
    if ((ml_backend__ml_tailcall__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 259 "ml_tailcall.m"
      {
#line 259 "ml_tailcall.m"
        *ml_backend__ml_tailcall__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 259 "ml_tailcall.m"
        *ml_backend__ml_tailcall__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 259 "ml_tailcall.m"
        *ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_4 = ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_3;
#line 259 "ml_tailcall.m"
      }
#line 259 "ml_tailcall.m"
    else
#line 261 "ml_tailcall.m"
      {
#line 261 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__FirstWarnings_12;
#line 261 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__RestWarnings_13;
#line 261 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__First0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__5_5, (MR_Integer) 0)));
#line 261 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Rest0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__5_5, (MR_Integer) 1)));
#line 261 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__First_17;
#line 261 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Rest_18;
#line 261 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_21_21;

#line 262 "ml_tailcall.m"
        {
#line 262 "ml_tailcall.m"
          ml_backend__ml_tailcall__mark_tailcalls_in_statements_6_p_0(ml_backend__ml_tailcall__TCallInfo_1, &ml_backend__ml_tailcall__RestWarnings_13, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_3, &ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_21_21, ml_backend__ml_tailcall__Rest0_16, &ml_backend__ml_tailcall__Rest_18);
        }
#line 264 "ml_tailcall.m"
        {
#line 264 "ml_tailcall.m"
          ml_backend__ml_tailcall__mark_tailcalls_in_statement_6_p_0(ml_backend__ml_tailcall__TCallInfo_1, &ml_backend__ml_tailcall__FirstWarnings_12, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_21_21, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_4, ml_backend__ml_tailcall__First0_15, &ml_backend__ml_tailcall__First_17);
        }
#line 260 "ml_tailcall.m"
        {
#line 260 "ml_tailcall.m"
          *ml_backend__ml_tailcall__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_tailcall_warning_0, ml_backend__ml_tailcall__FirstWarnings_12, ml_backend__ml_tailcall__RestWarnings_13);
        }
#line 261 "ml_tailcall.m"
        {
#line 261 "ml_tailcall.m"
          MR_Word base;
#line 261 "ml_tailcall.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "ml_tailcall.m"
          *ml_backend__ml_tailcall__HeadVar__6_6 = base;
#line 261 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__First_17));
#line 261 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Rest_18));
#line 261 "ml_tailcall.m"
        }
#line 261 "ml_tailcall.m"
      }
#line 259 "ml_tailcall.m"
  }
#line 255 "ml_tailcall.m"
}

#line 245 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_maybe_statement_6_p_0(
#line 245 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__TCallInfo_1,
#line 245 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__2_2,
#line 245 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_3,
#line 245 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_4,
#line 245 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__5_5,
#line 245 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__6_6)
#line 245 "ml_tailcall.m"
{
#line 249 "ml_tailcall.m"
  {
#line 249 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 249 "ml_tailcall.m"
    if ((ml_backend__ml_tailcall__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 249 "ml_tailcall.m"
      {
#line 249 "ml_tailcall.m"
        *ml_backend__ml_tailcall__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 249 "ml_tailcall.m"
        *ml_backend__ml_tailcall__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 249 "ml_tailcall.m"
        *ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_4 = ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_3;
#line 249 "ml_tailcall.m"
      }
#line 249 "ml_tailcall.m"
    else
#line 251 "ml_tailcall.m"
      {
#line 251 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Statement0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__5_5, (MR_Integer) 0)));
#line 251 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Statement_15;

#line 252 "ml_tailcall.m"
        {
#line 252 "ml_tailcall.m"
          ml_backend__ml_tailcall__mark_tailcalls_in_statement_6_p_0(ml_backend__ml_tailcall__TCallInfo_1, ml_backend__ml_tailcall__HeadVar__2_2, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_3, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_4, ml_backend__ml_tailcall__Statement0_14, &ml_backend__ml_tailcall__Statement_15);
        }
#line 251 "ml_tailcall.m"
        {
#line 251 "ml_tailcall.m"
          MR_Word base;
#line 251 "ml_tailcall.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 251 "ml_tailcall.m"
          *ml_backend__ml_tailcall__HeadVar__6_6 = base;
#line 251 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Statement_15));
#line 251 "ml_tailcall.m"
        }
#line 251 "ml_tailcall.m"
      }
#line 249 "ml_tailcall.m"
  }
#line 245 "ml_tailcall.m"
}

#line 229 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_function_body_5_p_0(
#line 229 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__TCallInfo_6,
#line 229 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__AtTail_7,
#line 229 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Warnings_8,
#line 229 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Body0_9,
#line 229 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Body_10)
#line 229 "ml_tailcall.m"
{
#line 235 "ml_tailcall.m"
  {
#line 235 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 235 "ml_tailcall.m"
    if ((ml_backend__ml_tailcall__Body0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 235 "ml_tailcall.m"
      {
#line 236 "ml_tailcall.m"
        *ml_backend__ml_tailcall__Warnings_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 237 "ml_tailcall.m"
        *ml_backend__ml_tailcall__Body_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 235 "ml_tailcall.m"
      }
#line 235 "ml_tailcall.m"
    else
#line 239 "ml_tailcall.m"
      {
#line 239 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Statement0_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tailcall__Body0_9), (MR_Integer) 1);
#line 239 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Statement_13;
#line 240 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_12_12;

#line 240 "ml_tailcall.m"
        {
#line 240 "ml_tailcall.m"
          ml_backend__ml_tailcall__mark_tailcalls_in_statement_6_p_0(ml_backend__ml_tailcall__TCallInfo_6, ml_backend__ml_tailcall__Warnings_8, ml_backend__ml_tailcall__AtTail_7, &ml_backend__ml_tailcall__V_12_12, ml_backend__ml_tailcall__Statement0_11, &ml_backend__ml_tailcall__Statement_13);
        }
#line 242 "ml_tailcall.m"
        *ml_backend__ml_tailcall__Body_10 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_tailcall__Statement_13);
#line 239 "ml_tailcall.m"
      }
#line 235 "ml_tailcall.m"
  }
#line 229 "ml_tailcall.m"
}

#line 184 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_defn_4_p_0_1(
#line 184 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__closure_arg,
#line 184 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 184 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_2,
#line 184 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_3)
#line 184 "ml_tailcall.m"
{
#line 184 "ml_tailcall.m"
  {
#line 184 "ml_tailcall.m"
    MR_Box ml_backend__ml_tailcall__closure = ml_backend__ml_tailcall__closure_arg;
#line 184 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__conv1_Defn_7;
#line 184 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__conv0_Warnings_8;

#line 184 "ml_tailcall.m"
    {
#line 184 "ml_tailcall.m"
      ml_backend__ml_tailcall__mark_tailcalls_in_defn_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), &ml_backend__ml_tailcall__conv1_Defn_7, &ml_backend__ml_tailcall__conv0_Warnings_8);
    }
#line 184 "ml_tailcall.m"
    *ml_backend__ml_tailcall__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_tailcall__conv1_Defn_7));
#line 184 "ml_tailcall.m"
    *ml_backend__ml_tailcall__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_tailcall__conv0_Warnings_8));
#line 184 "ml_tailcall.m"
  }
#line 184 "ml_tailcall.m"
}

#line 186 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_defn_4_p_0(
#line 186 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__ModuleName_5,
#line 186 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Defn0_6,
#line 186 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Defn_7,
#line 186 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Warnings_8)
#line 186 "ml_tailcall.m"
{
#line 189 "ml_tailcall.m"
  {
#line 189 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 189 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Defn0_6, (MR_Integer) 0)));
#line 189 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Defn0_6, (MR_Integer) 1)));
#line 189 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Flags_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Defn0_6, (MR_Integer) 2)));
#line 189 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__DefnBody0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Defn0_6, (MR_Integer) 3)));

#line 210 "ml_tailcall.m"
#line 210 "ml_tailcall.m"
    switch (MR_tag((MR_Word) ml_backend__ml_tailcall__DefnBody0_12)) {
#line 210 "ml_tailcall.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 210 "ml_tailcall.m"
      case (MR_Integer) 0:
#line 215 "ml_tailcall.m"
        {
#line 215 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__TypeCtorInfo_14_57;
#line 215 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__TypeCtorInfo_14_68;
#line 215 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__ClassDefn0_30 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tailcall__DefnBody0_12), (MR_Integer) 0);
#line 215 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Kind_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn0_30, (MR_Integer) 0)));
#line 215 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Imports_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn0_30, (MR_Integer) 1)));
#line 215 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__BaseClasses_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn0_30, (MR_Integer) 2)));
#line 215 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Implements_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn0_30, (MR_Integer) 3)));
#line 215 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__TypeParams_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn0_30, (MR_Integer) 4)));
#line 215 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__CtorDefns0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn0_30, (MR_Integer) 5)));
#line 215 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__MemberDefns0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn0_30, (MR_Integer) 6)));
#line 215 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__CtorWarnings_38;
#line 215 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__CtorDefns_39;
#line 215 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__MemberWarnings_40;
#line 215 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__MemberDefns_41;
#line 215 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__ClassDefn_42;
#line 215 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__DefnBody_46;
#line 215 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Warnings_51;
#line 215 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__V_52_52;
#line 215 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Warnings_62;

#line 184 "ml_tailcall.m"
          {
#line 184 "ml_tailcall.m"
            ml_backend__ml_tailcall__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 184 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_52_52, 0) = ((MR_Box) (&ml_backend__ml_tailcall_scalar_common_2[0]));
#line 184 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_52_52, 1) = ((MR_Box) (ml_backend__ml_tailcall__mark_tailcalls_in_defn_4_p_0_1));
#line 184 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 184 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_52_52, 3) = ((MR_Box) (ml_backend__ml_tailcall__ModuleName_5));
#line 184 "ml_tailcall.m"
          }
#line 6874 "ml_backend.ml_tailcall.c"
          ml_backend__ml_tailcall__TypeCtorInfo_14_57 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 184 "ml_tailcall.m"
          {
#line 184 "ml_tailcall.m"
            mercury__list__map2_4_p_0(ml_backend__ml_tailcall__TypeCtorInfo_14_57, ml_backend__ml_tailcall__TypeCtorInfo_14_57, (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[0], ml_backend__ml_tailcall__V_52_52, ml_backend__ml_tailcall__CtorDefns0_36, &ml_backend__ml_tailcall__CtorDefns_39, &ml_backend__ml_tailcall__Warnings_51);
          }
#line 183 "ml_tailcall.m"
          {
#line 183 "ml_tailcall.m"
            ml_backend__ml_tailcall__CtorWarnings_38 = mercury__list__condense_1_f_0((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_tailcall_warning_0, ml_backend__ml_tailcall__Warnings_51);
          }
#line 6886 "ml_backend.ml_tailcall.c"
          ml_backend__ml_tailcall__TypeCtorInfo_14_68 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 184 "ml_tailcall.m"
          {
#line 184 "ml_tailcall.m"
            mercury__list__map2_4_p_0(ml_backend__ml_tailcall__TypeCtorInfo_14_68, ml_backend__ml_tailcall__TypeCtorInfo_14_68, (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[0], ml_backend__ml_tailcall__V_52_52, ml_backend__ml_tailcall__MemberDefns0_37, &ml_backend__ml_tailcall__MemberDefns_41, &ml_backend__ml_tailcall__Warnings_62);
          }
#line 183 "ml_tailcall.m"
          {
#line 183 "ml_tailcall.m"
            ml_backend__ml_tailcall__MemberWarnings_40 = mercury__list__condense_1_f_0((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_tailcall_warning_0, ml_backend__ml_tailcall__Warnings_62);
          }
#line 222 "ml_tailcall.m"
          {
#line 222 "ml_tailcall.m"
            *ml_backend__ml_tailcall__Warnings_8 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_tailcall_warning_0, ml_backend__ml_tailcall__CtorWarnings_38, ml_backend__ml_tailcall__MemberWarnings_40);
          }
#line 223 "ml_tailcall.m"
          {
#line 223 "ml_tailcall.m"
            ml_backend__ml_tailcall__ClassDefn_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 223 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_42, 0) = ((MR_Box) (ml_backend__ml_tailcall__Kind_31));
#line 223 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_42, 1) = ((MR_Box) (ml_backend__ml_tailcall__Imports_32));
#line 223 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_42, 2) = ((MR_Box) (ml_backend__ml_tailcall__BaseClasses_33));
#line 223 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_42, 3) = ((MR_Box) (ml_backend__ml_tailcall__Implements_34));
#line 223 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_42, 4) = ((MR_Box) (ml_backend__ml_tailcall__TypeParams_35));
#line 223 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_42, 5) = ((MR_Box) (ml_backend__ml_tailcall__CtorDefns_39));
#line 223 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_42, 6) = ((MR_Box) (ml_backend__ml_tailcall__MemberDefns_41));
#line 223 "ml_tailcall.m"
          }
#line 225 "ml_tailcall.m"
          ml_backend__ml_tailcall__DefnBody_46 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_tailcall__ClassDefn_42);
#line 226 "ml_tailcall.m"
          {
#line 226 "ml_tailcall.m"
            MR_Word base;
#line 226 "ml_tailcall.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 226 "ml_tailcall.m"
            *ml_backend__ml_tailcall__Defn_7 = base;
#line 226 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Name_9));
#line 226 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Context_10));
#line 226 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Flags_11));
#line 226 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__DefnBody_46));
#line 226 "ml_tailcall.m"
          }
#line 215 "ml_tailcall.m"
        }
#line 210 "ml_tailcall.m"
        break;
#line 210 "ml_tailcall.m"
      case (MR_Integer) 1:
#line 211 "ml_tailcall.m"
        {
#line 212 "ml_tailcall.m"
          *ml_backend__ml_tailcall__Defn_7 = ml_backend__ml_tailcall__Defn0_6;
#line 213 "ml_tailcall.m"
          *ml_backend__ml_tailcall__Warnings_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 211 "ml_tailcall.m"
        }
#line 210 "ml_tailcall.m"
        break;
#line 210 "ml_tailcall.m"
      case (MR_Integer) 2:
#line 193 "ml_tailcall.m"
        {
#line 193 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__PredProcId_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody0_12, (MR_Integer) 0)));
#line 193 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Params_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody0_12, (MR_Integer) 1)));
#line 193 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__FuncBody0_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody0_12, (MR_Integer) 2)));
#line 193 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Attributes_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody0_12, (MR_Integer) 3)));
#line 193 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__EnvVarNames_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody0_12, (MR_Integer) 4)));
#line 193 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Params_14, (MR_Integer) 0)));
#line 193 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__RetTypes_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Params_14, (MR_Integer) 1)));
#line 193 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Locals_20;
#line 193 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__AtTail_21;
#line 193 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__TCallInfo_24;
#line 193 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__FuncBody_25;
#line 193 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__DefnBody_26;
#line 193 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__V_43_43;

#line 196 "ml_tailcall.m"
          {
#line 196 "ml_tailcall.m"
            ml_backend__ml_tailcall__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 196 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_43_43, 0) = ((MR_Box) (ml_backend__ml_tailcall__Args_18));
#line 196 "ml_tailcall.m"
          }
#line 196 "ml_tailcall.m"
          {
#line 196 "ml_tailcall.m"
            ml_backend__ml_tailcall__Locals_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "ml_tailcall.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Locals_20, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_43_43));
#line 196 "ml_tailcall.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Locals_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 196 "ml_tailcall.m"
          }
#line 200 "ml_tailcall.m"
          if ((ml_backend__ml_tailcall__RetTypes_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 198 "ml_tailcall.m"
            {
#line 199 "ml_tailcall.m"
              ml_backend__ml_tailcall__AtTail_21 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_tailcall_scalar_common_3[0]);
#line 198 "ml_tailcall.m"
            }
#line 200 "ml_tailcall.m"
          else
#line 202 "ml_tailcall.m"
            ml_backend__ml_tailcall__AtTail_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 204 "ml_tailcall.m"
          {
#line 204 "ml_tailcall.m"
            ml_backend__ml_tailcall__TCallInfo_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 204 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_24, 0) = ((MR_Box) (ml_backend__ml_tailcall__ModuleName_5));
#line 204 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_24, 1) = ((MR_Box) (ml_backend__ml_tailcall__Name_9));
#line 204 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_24, 2) = ((MR_Box) (ml_backend__ml_tailcall__Locals_20));
#line 204 "ml_tailcall.m"
          }
#line 205 "ml_tailcall.m"
          {
#line 205 "ml_tailcall.m"
            ml_backend__ml_tailcall__mark_tailcalls_in_function_body_5_p_0(ml_backend__ml_tailcall__TCallInfo_24, ml_backend__ml_tailcall__AtTail_21, ml_backend__ml_tailcall__Warnings_8, ml_backend__ml_tailcall__FuncBody0_15, &ml_backend__ml_tailcall__FuncBody_25);
          }
#line 207 "ml_tailcall.m"
          {
#line 207 "ml_tailcall.m"
            ml_backend__ml_tailcall__DefnBody_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 207 "ml_tailcall.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_26, 0) = ((MR_Box) (ml_backend__ml_tailcall__PredProcId_13));
#line 207 "ml_tailcall.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_26, 1) = ((MR_Box) (ml_backend__ml_tailcall__Params_14));
#line 207 "ml_tailcall.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_26, 2) = ((MR_Box) (ml_backend__ml_tailcall__FuncBody_25));
#line 207 "ml_tailcall.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_26, 3) = ((MR_Box) (ml_backend__ml_tailcall__Attributes_16));
#line 207 "ml_tailcall.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_26, 4) = ((MR_Box) (ml_backend__ml_tailcall__EnvVarNames_17));
#line 207 "ml_tailcall.m"
          }
#line 209 "ml_tailcall.m"
          {
#line 209 "ml_tailcall.m"
            MR_Word base;
#line 209 "ml_tailcall.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 209 "ml_tailcall.m"
            *ml_backend__ml_tailcall__Defn_7 = base;
#line 209 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Name_9));
#line 209 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Context_10));
#line 209 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Flags_11));
#line 209 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__DefnBody_26));
#line 209 "ml_tailcall.m"
          }
#line 193 "ml_tailcall.m"
        }
#line 210 "ml_tailcall.m"
        break;
#line 210 "ml_tailcall.m"
    }
#line 189 "ml_tailcall.m"
  }
#line 186 "ml_tailcall.m"
}

#line 184 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_defns_4_p_0_1(
#line 184 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__closure_arg,
#line 184 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 184 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_2,
#line 184 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_3)
#line 184 "ml_tailcall.m"
{
#line 184 "ml_tailcall.m"
  {
#line 184 "ml_tailcall.m"
    MR_Box ml_backend__ml_tailcall__closure = ml_backend__ml_tailcall__closure_arg;
#line 184 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__conv1_Defn_7;
#line 184 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__conv0_Warnings_8;

#line 184 "ml_tailcall.m"
    {
#line 184 "ml_tailcall.m"
      ml_backend__ml_tailcall__mark_tailcalls_in_defn_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), &ml_backend__ml_tailcall__conv1_Defn_7, &ml_backend__ml_tailcall__conv0_Warnings_8);
    }
#line 184 "ml_tailcall.m"
    *ml_backend__ml_tailcall__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_tailcall__conv1_Defn_7));
#line 184 "ml_tailcall.m"
    *ml_backend__ml_tailcall__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_tailcall__conv0_Warnings_8));
#line 184 "ml_tailcall.m"
  }
#line 184 "ml_tailcall.m"
}

#line 179 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_defns_4_p_0(
#line 179 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__ModuleName_5,
#line 179 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__2_2,
#line 179 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Defns0_7,
#line 179 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Defns_8)
#line 179 "ml_tailcall.m"
{
#line 183 "ml_tailcall.m"
  {
#line 183 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 183 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__TypeCtorInfo_14_14;
#line 183 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Warnings_6;
#line 183 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_9_9;

#line 184 "ml_tailcall.m"
    {
#line 184 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 184 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_9_9, 0) = ((MR_Box) (&ml_backend__ml_tailcall_scalar_common_2[0]));
#line 184 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_9_9, 1) = ((MR_Box) (ml_backend__ml_tailcall__mark_tailcalls_in_defns_4_p_0_1));
#line 184 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 184 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_9_9, 3) = ((MR_Box) (ml_backend__ml_tailcall__ModuleName_5));
#line 184 "ml_tailcall.m"
    }
#line 7156 "ml_backend.ml_tailcall.c"
    ml_backend__ml_tailcall__TypeCtorInfo_14_14 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 184 "ml_tailcall.m"
    {
#line 184 "ml_tailcall.m"
      mercury__list__map2_4_p_0(ml_backend__ml_tailcall__TypeCtorInfo_14_14, ml_backend__ml_tailcall__TypeCtorInfo_14_14, (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[0], ml_backend__ml_tailcall__V_9_9, ml_backend__ml_tailcall__Defns0_7, ml_backend__ml_tailcall__Defns_8, &ml_backend__ml_tailcall__Warnings_6);
    }
#line 183 "ml_tailcall.m"
    {
#line 183 "ml_tailcall.m"
      *ml_backend__ml_tailcall__HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_tailcall_warning_0, ml_backend__ml_tailcall__Warnings_6);
    }
#line 183 "ml_tailcall.m"
  }
#line 179 "ml_tailcall.m"
}

#line 104 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__ml_mark_tailcalls_5_p_0_2(
#line 104 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__closure_arg,
#line 104 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 104 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 104 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_3)
#line 104 "ml_tailcall.m"
{
#line 104 "ml_tailcall.m"
  {
#line 104 "ml_tailcall.m"
    MR_Box ml_backend__ml_tailcall__closure = ml_backend__ml_tailcall__closure_arg;

#line 104 "ml_tailcall.m"
    {
#line 104 "ml_tailcall.m"
      ml_backend__ml_tailcall__report_nontailcall_warning_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1));
    }
#line 104 "ml_tailcall.m"
  }
#line 104 "ml_tailcall.m"
}

#line 184 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__ml_mark_tailcalls_5_p_0_1(
#line 184 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__closure_arg,
#line 184 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 184 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_2,
#line 184 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_3)
#line 184 "ml_tailcall.m"
{
#line 184 "ml_tailcall.m"
  {
#line 184 "ml_tailcall.m"
    MR_Box ml_backend__ml_tailcall__closure = ml_backend__ml_tailcall__closure_arg;
#line 184 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__conv1_Defn_7;
#line 184 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__conv0_Warnings_8;

#line 184 "ml_tailcall.m"
    {
#line 184 "ml_tailcall.m"
      ml_backend__ml_tailcall__mark_tailcalls_in_defn_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), &ml_backend__ml_tailcall__conv1_Defn_7, &ml_backend__ml_tailcall__conv0_Warnings_8);
    }
#line 184 "ml_tailcall.m"
    *ml_backend__ml_tailcall__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_tailcall__conv1_Defn_7));
#line 184 "ml_tailcall.m"
    *ml_backend__ml_tailcall__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_tailcall__conv0_Warnings_8));
#line 184 "ml_tailcall.m"
  }
#line 184 "ml_tailcall.m"
}

#line 68 "ml_tailcall.m"
void MR_CALL 
ml_backend__ml_tailcall__ml_mark_tailcalls_5_p_0(
#line 68 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Globals_6,
#line 68 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_14,
#line 68 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_15)
#line 68 "ml_tailcall.m"
{
#line 95 "ml_tailcall.m"
  {
#line 95 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 95 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__TypeCtorInfo_14_59;
#line 95 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Defns0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_14, (MR_Integer) 4)));
#line 95 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__ModuleName_10;
#line 95 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Warnings_11;
#line 95 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Defns_12;
#line 95 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__WarnTailCalls_13;
#line 95 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_14, (MR_Integer) 0)));
#line 95 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Warnings_53;
#line 95 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_54_54;
#line 96 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_14, (MR_Integer) 1)));
#line 96 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_14, (MR_Integer) 2)));
#line 96 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_14, (MR_Integer) 3)));
#line 96 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_14, (MR_Integer) 5)));
#line 96 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_14, (MR_Integer) 6)));
#line 96 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_14, (MR_Integer) 7)));
#line 99 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_37_37;
#line 99 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_38_38;
#line 99 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_39_39;
#line 99 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_40_40;
#line 99 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_42_42;
#line 99 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_43_43;
#line 99 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_44_44;
#line 99 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_41_41;

#line 97 "ml_tailcall.m"
    {
#line 97 "ml_tailcall.m"
      ml_backend__ml_tailcall__ModuleName_10 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_tailcall__V_23_23);
    }
#line 184 "ml_tailcall.m"
    {
#line 184 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 184 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_54_54, 0) = ((MR_Box) (&ml_backend__ml_tailcall_scalar_common_2[0]));
#line 184 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_54_54, 1) = ((MR_Box) (ml_backend__ml_tailcall__ml_mark_tailcalls_5_p_0_1));
#line 184 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 184 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_54_54, 3) = ((MR_Box) (ml_backend__ml_tailcall__ModuleName_10));
#line 184 "ml_tailcall.m"
    }
#line 7318 "ml_backend.ml_tailcall.c"
    ml_backend__ml_tailcall__TypeCtorInfo_14_59 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 184 "ml_tailcall.m"
    {
#line 184 "ml_tailcall.m"
      mercury__list__map2_4_p_0(ml_backend__ml_tailcall__TypeCtorInfo_14_59, ml_backend__ml_tailcall__TypeCtorInfo_14_59, (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[0], ml_backend__ml_tailcall__V_54_54, ml_backend__ml_tailcall__Defns0_9, &ml_backend__ml_tailcall__Defns_12, &ml_backend__ml_tailcall__Warnings_53);
    }
#line 183 "ml_tailcall.m"
    {
#line 183 "ml_tailcall.m"
      ml_backend__ml_tailcall__Warnings_11 = mercury__list__condense_1_f_0((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_tailcall_warning_0, ml_backend__ml_tailcall__Warnings_53);
    }
#line 99 "ml_tailcall.m"
    ml_backend__ml_tailcall__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_14, (MR_Integer) 0)));
#line 99 "ml_tailcall.m"
    ml_backend__ml_tailcall__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_14, (MR_Integer) 1)));
#line 99 "ml_tailcall.m"
    ml_backend__ml_tailcall__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_14, (MR_Integer) 2)));
#line 99 "ml_tailcall.m"
    ml_backend__ml_tailcall__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_14, (MR_Integer) 3)));
#line 99 "ml_tailcall.m"
    ml_backend__ml_tailcall__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_14, (MR_Integer) 4)));
#line 99 "ml_tailcall.m"
    ml_backend__ml_tailcall__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_14, (MR_Integer) 5)));
#line 99 "ml_tailcall.m"
    ml_backend__ml_tailcall__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_14, (MR_Integer) 6)));
#line 99 "ml_tailcall.m"
    ml_backend__ml_tailcall__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_14, (MR_Integer) 7)));
#line 99 "ml_tailcall.m"
    {
#line 99 "ml_tailcall.m"
      MR_Word base;
#line 99 "ml_tailcall.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 99 "ml_tailcall.m"
      *ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_15 = base;
#line 99 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_37_37));
#line 99 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_38_38));
#line 99 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__V_39_39));
#line 99 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__V_40_40));
#line 99 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_tailcall__Defns_12));
#line 99 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_tailcall__V_42_42));
#line 99 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_tailcall__V_43_43));
#line 99 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_tailcall__V_44_44));
#line 99 "ml_tailcall.m"
    }
#line 100 "ml_tailcall.m"
    {
#line 100 "ml_tailcall.m"
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_tailcall__Globals_6, (MR_Integer) 26, &ml_backend__ml_tailcall__WarnTailCalls_13);
    }
#line 105 "ml_tailcall.m"
#line 105 "ml_tailcall.m"
    switch (ml_backend__ml_tailcall__WarnTailCalls_13) {
#line 105 "ml_tailcall.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 105 "ml_tailcall.m"
      case (MR_Integer) 0:
#line 106 "ml_tailcall.m"
        {
#line 106 "ml_tailcall.m"
        }
#line 105 "ml_tailcall.m"
        break;
#line 105 "ml_tailcall.m"
      case (MR_Integer) 1:
#line 103 "ml_tailcall.m"
        {
#line 103 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__V_21_21;
#line 104 "ml_tailcall.m"
          MR_Box ml_backend__ml_tailcall__conv2_STATE_VARIABLE_IO_17;

#line 104 "ml_tailcall.m"
          {
#line 104 "ml_tailcall.m"
            ml_backend__ml_tailcall__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 104 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_21_21, 0) = ((MR_Box) (&ml_backend__ml_tailcall_scalar_common_2[1]));
#line 104 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_21_21, 1) = ((MR_Box) (ml_backend__ml_tailcall__ml_mark_tailcalls_5_p_0_2));
#line 104 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 104 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_21_21, 3) = ((MR_Box) (ml_backend__ml_tailcall__Globals_6));
#line 104 "ml_tailcall.m"
          }
#line 104 "ml_tailcall.m"
          {
#line 104 "ml_tailcall.m"
            mercury__list__foldl_4_p_2((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_tailcall_warning_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__ml_tailcall__V_21_21, ml_backend__ml_tailcall__Warnings_11, ((MR_Box) ((MR_Integer) 0)), &ml_backend__ml_tailcall__conv2_STATE_VARIABLE_IO_17);
          }
#line 103 "ml_tailcall.m"
        }
#line 105 "ml_tailcall.m"
        break;
#line 105 "ml_tailcall.m"
    }
#line 95 "ml_tailcall.m"
  }
#line 68 "ml_tailcall.m"
}

void mercury__ml_backend__ml_tailcall__init(void)
{
}

void mercury__ml_backend__ml_tailcall__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_at_tail_0);
	MR_register_type_ctor_info(&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_is_local_0);
	MR_register_type_ctor_info(&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_local_defns_0);
	MR_register_type_ctor_info(&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_locals_0);
	MR_register_type_ctor_info(&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_may_yield_dangling_stack_ref_0);
	MR_register_type_ctor_info(&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_tailcall_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_tailcall_warning_0);
}

void mercury__ml_backend__ml_tailcall__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.ml_tailcall. */
