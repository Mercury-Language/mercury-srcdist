/*
** Automatically generated from `ml_tailcall.m'
** by the Mercury compiler,
** version 2015-10-27
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
#include "solutions.mih"
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



#line 626 "ml_tailcall.m"
struct ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0_s {
#line 626 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__ModuleName_4;
#line 626 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Warning_6;
#line 626 "ml_tailcall.m"
  MR_Cont ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__cont;
#line 626 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__cont_env_ptr;
#line 629 "ml_tailcall.m"
  MR_bool ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded;
#line 629 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Name_7;
#line 622 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Defn_28;
#line 623 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__conv0_Defn_28;
#line 622 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Defn_33;
#line 623 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__conv1_Defn_33;
#line 633 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__TypeInfo_37_67;
#line 633 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__SubStatement_39;
#line 633 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__SubStmt_40;
#line 633 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Context_41;
#line 633 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Func_43;
#line 633 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__CallKind_47;
#line 633 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__CodeAddr_48;
#line 633 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__QualProcLabel_49;
#line 633 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__MaybeSeqNum_51;
#line 633 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__ProcLabel_53;
#line 633 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__PredLabel_54;
#line 633 "ml_tailcall.m"
  MR_Integer ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__ProcId_55;
#line 633 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_57_57;
#line 633 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_58_58;
#line 633 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_61_61;
#line 633 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_62_62;
#line 633 "ml_tailcall.m"
  MR_Integer ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_63_63;
#line 633 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_64_64;
#line 626 "ml_tailcall.m"
};

#line 611 "ml_tailcall.m"
struct ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0_s {
#line 611 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__Warning_4;
#line 611 "ml_tailcall.m"
  MR_Cont ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__cont;
#line 611 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__cont_env_ptr;
#line 613 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__MLDS_ModuleName_13;
#line 613 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__Defn_17;
#line 623 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__conv0_Defn_17;
#line 611 "ml_tailcall.m"
};

#line 502 "ml_tailcall.m"
struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s {
#line 502 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_5;
#line 506 "ml_tailcall.m"
  MR_bool ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded;
#line 523 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__VarName_11;
#line 554 "ml_tailcall.m"
  jmp_buf ml_backend__ml_tailcall__check_const_3_f_0_env_0__commit_1;
#line 554 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_68_68;
#line 554 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_69;
#line 554 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_70_70;
#line 554 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_74;
#line 587 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv3_Locals_74;
#line 589 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_76;
#line 590 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv4_Defn_76;
#line 593 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_81;
#line 594 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv5_Param_81;
#line 563 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__MaybeSeqNum_30;
#line 563 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__PredLabel_35;
#line 563 "ml_tailcall.m"
  MR_Integer ml_backend__ml_tailcall__check_const_3_f_0_env_0__ProcId_36;
#line 576 "ml_tailcall.m"
  jmp_buf ml_backend__ml_tailcall__check_const_3_f_0_env_0__commit_0;
#line 576 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__TypeInfo_23_46;
#line 576 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41;
#line 576 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_42_42;
#line 576 "ml_tailcall.m"
  MR_Integer ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_43_43;
#line 576 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_44_44;
#line 576 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_49;
#line 587 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv0_Locals_49;
#line 589 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_51;
#line 590 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv1_Defn_51;
#line 593 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_56;
#line 594 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv2_Param_56;
#line 502 "ml_tailcall.m"
};

#line 471 "ml_tailcall.m"
struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s {
#line 471 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_5;
#line 475 "ml_tailcall.m"
  MR_bool ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded;
#line 550 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__VarName_21;
#line 554 "ml_tailcall.m"
  jmp_buf ml_backend__ml_tailcall__check_lval_3_f_0_env_0__commit_0;
#line 554 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__V_23_23;
#line 554 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Local_24;
#line 554 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__V_25_25;
#line 554 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_29;
#line 587 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv0_Locals_29;
#line 589 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Defn_31;
#line 590 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv1_Defn_31;
#line 593 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Param_36;
#line 594 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv2_Param_36;
#line 471 "ml_tailcall.m"
};

#line 601 "ml_tailcall.m"
struct ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0_s {
#line 601 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0__wrapper_arg_1;
#line 601 "ml_tailcall.m"
  MR_Cont ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0__cont;
#line 601 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0__cont_env_ptr;
#line 601 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0__conv0_Warning_4;
#line 601 "ml_tailcall.m"
};


#line 333 "ml_backend.ml_tailcall.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0;

#line 336 "ml_backend.ml_tailcall.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__maybe__ti_maybe_1list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0;

#line 339 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_0;

#line 342 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_1;

#line 345 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_value_ordered_is_local_0[2];

#line 348 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_name_ordered_is_local_0[2];

#line 351 "ml_backend.ml_tailcall.c"
static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_is_local_0[2];

#line 354 "ml_backend.ml_tailcall.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_argument_0;

#line 357 "ml_backend.ml_tailcall.c"
static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_local_defns_0_0[1];

#line 360 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_0;

#line 363 "ml_backend.ml_tailcall.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 366 "ml_backend.ml_tailcall.c"
static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_local_defns_0_1[1];

#line 369 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_1;

#line 372 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_0[1];

#line 375 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_1[1];

#line 378 "ml_backend.ml_tailcall.c"
static const MR_DuPtagLayout ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_local_defns_0[2];

#line 381 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_local_defns_0[2];

#line 384 "ml_backend.ml_tailcall.c"
static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_local_defns_0[2];

#line 387 "ml_backend.ml_tailcall.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__ml_tailcall__type_ctor_info_local_defns_0;

#line 390 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_0;

#line 393 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_1;

#line 396 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_value_ordered_may_yield_dangling_stack_ref_0[2];

#line 399 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_name_ordered_may_yield_dangling_stack_ref_0[2];

#line 402 "ml_backend.ml_tailcall.c"
static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_may_yield_dangling_stack_ref_0[2];

#line 405 "ml_backend.ml_tailcall.c"
static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_tailcall_warning_0_0[3];

#line 408 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_tailcall_warning_0_0;

#line 411 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_tailcall_warning_0_0[1];

#line 414 "ml_backend.ml_tailcall.c"
static const MR_DuPtagLayout ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_tailcall_warning_0[1];

#line 417 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_tailcall_warning_0[1];

#line 420 "ml_backend.ml_tailcall.c"
static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_tailcall_warning_0[1];

#line 423 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____at_tail_0_0_10001(
#line 426 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 428 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2);

#line 431 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____at_tail_0_0_10001(
#line 434 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 436 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 438 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3);

#line 441 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____is_local_0_0_10001(
#line 444 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 446 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2);

#line 449 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____is_local_0_0_10001(
#line 452 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 454 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 456 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3);

#line 459 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____local_defns_0_0_10001(
#line 462 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 464 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2);

#line 467 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____local_defns_0_0_10001(
#line 470 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 472 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 474 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3);

#line 477 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____locals_0_0_10001(
#line 480 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 482 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2);

#line 485 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____locals_0_0_10001(
#line 488 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 490 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 492 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3);

#line 495 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____may_yield_dangling_stack_ref_0_0_10001(
#line 498 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 500 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2);

#line 503 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____may_yield_dangling_stack_ref_0_0_10001(
#line 506 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 508 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 510 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3);

#line 513 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tailcall_warning_0_0_10001(
#line 516 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 518 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2);

#line 521 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____tailcall_warning_0_0_10001(
#line 524 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 526 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 528 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3);

#line 604 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____tailcall_warning_0_0(
#line 604 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
#line 604 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
#line 604 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3);

#line 604 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tailcall_warning_0_0(
#line 604 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
#line 604 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2);

#line 404 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____may_yield_dangling_stack_ref_0_0(
#line 404 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
#line 404 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
#line 404 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3);

#line 404 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____may_yield_dangling_stack_ref_0_0(
#line 404 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_1,
#line 404 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2);

#line 108 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____locals_0_0(
#line 108 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
#line 108 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
#line 108 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3);

#line 108 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____locals_0_0(
#line 108 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
#line 108 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2);

#line 109 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____local_defns_0_0(
#line 109 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
#line 109 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
#line 109 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3);

#line 109 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____local_defns_0_0(
#line 109 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
#line 109 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2);

#line 375 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____is_local_0_0(
#line 375 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
#line 375 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
#line 375 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3);

#line 375 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____is_local_0_0(
#line 375 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_1,
#line 375 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2);

#line 104 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____at_tail_0_0(
#line 104 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
#line 104 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
#line 104 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3);

#line 104 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____at_tail_0_0(
#line 104 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
#line 104 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2);

#line 669 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__report_nontailcall_warning_4_p_0(
#line 669 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Globals_5,
#line 669 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Warning_6);

#line 623 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_2(
#line 623 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 622 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_1(
#line 622 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 623 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_4(
#line 623 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 622 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_3(
#line 622 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 633 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_5(
#line 633 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 626 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0(
#line 626 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__ModuleName_4,
#line 626 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Defn_5,
#line 626 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Warning_6,
#line 626 "ml_tailcall.m"
  MR_Cont ml_backend__ml_tailcall__cont,
#line 626 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__cont_env_ptr);

#line 623 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_2(
#line 623 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 613 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_1(
#line 613 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 611 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0(
#line 611 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__MLDS_3,
#line 611 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Warning_4,
#line 611 "ml_tailcall.m"
  MR_Cont ml_backend__ml_tailcall__cont,
#line 611 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__cont_env_ptr);

#line 554 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_10(
#line 554 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 587 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_12(
#line 587 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 554 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_13(
#line 554 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 590 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_15(
#line 590 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 589 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_14(
#line 589 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 594 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_17(
#line 594 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 593 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_16(
#line 593 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 554 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_11(
#line 554 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 554 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_18(
#line 554 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 576 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_1(
#line 576 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 587 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_3(
#line 587 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 576 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_4(
#line 576 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 590 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_6(
#line 590 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 589 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_5(
#line 589 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 594 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_8(
#line 594 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 593 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_7(
#line 593 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 576 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_2(
#line 576 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 576 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_9(
#line 576 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 502 "ml_tailcall.m"
static MR_Word MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0(
#line 502 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Const_4,
#line 502 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_5);

#line 554 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_1(
#line 554 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 587 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_3(
#line 587 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 554 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_4(
#line 554 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 590 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_6(
#line 590 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 589 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_5(
#line 589 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 594 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_8(
#line 594 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 593 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_7(
#line 593 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 554 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_2(
#line 554 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 554 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_9(
#line 554 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 471 "ml_tailcall.m"
static MR_Word MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0(
#line 471 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Lval_4,
#line 471 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_5);

#line 430 "ml_tailcall.m"
static MR_Word MR_CALL 
ml_backend__ml_tailcall__check_rval_2_f_0(
#line 430 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Rval_4,
#line 430 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_5);

#line 414 "ml_tailcall.m"
static MR_Word MR_CALL 
ml_backend__ml_tailcall__check_rvals_2_f_0(
#line 414 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
#line 414 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_2);

#line 379 "ml_tailcall.m"
static MR_Word MR_CALL 
ml_backend__ml_tailcall__lval_is_local_1_f_0(
#line 379 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Lval_3);

#line 363 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall__match_return_vals_2_p_0(
#line 363 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
#line 363 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2);

#line 338 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_default_4_p_0(
#line 338 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__AtTail_5,
#line 338 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_6,
#line 338 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Default0_7,
#line 338 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Default_8);

#line 330 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_case_4_p_0(
#line 330 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__AtTail_5,
#line 330 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_6,
#line 330 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Case0_7,
#line 330 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Case_8);

#line 322 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_cases_4_p_0(
#line 322 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__AtTail_1,
#line 322 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_2,
#line 322 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3,
#line 322 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__4_4);

#line 137 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_p_0_1(
#line 137 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__closure_arg,
#line 137 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 137 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_2);

#line 236 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_p_0(
#line 236 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__AtTail_5,
#line 236 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_6,
#line 236 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Stmt0_7,
#line 236 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Stmt_8);

#line 228 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_statement_4_p_0(
#line 228 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__AtTail_5,
#line 228 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_6,
#line 228 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Statement0_7,
#line 228 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Statement_8);

#line 202 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_statements_4_p_0(
#line 202 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__AtTail_1,
#line 202 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_2,
#line 202 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3,
#line 202 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__4_4);

#line 175 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_function_body_4_p_0(
#line 175 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__AtTail_5,
#line 175 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_6,
#line 175 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Body0_7,
#line 175 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Body_8);

#line 137 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_p_0_2(
#line 137 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__closure_arg,
#line 137 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 137 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_2);

#line 137 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_p_0_1(
#line 137 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__closure_arg,
#line 137 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 137 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_2);

#line 139 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_p_0(
#line 139 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Defn0_3,
#line 139 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Defn_4);

#line 602 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_3(
#line 602 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__closure_arg,
#line 602 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 602 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 602 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_3);

#line 601 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_1(
#line 601 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 601 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2(
#line 601 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__closure_arg,
#line 601 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 601 "ml_tailcall.m"
  MR_Cont ml_backend__ml_tailcall__cont,
#line 601 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__cont_env_ptr);

#line 137 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__ml_mark_tailcalls_4_p_0_1(
#line 137 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__closure_arg,
#line 137 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 137 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_2);


static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_1[14][2];

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_2[2][5];

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_3[4][3];

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_4[1][7];

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_5[1][1];




static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_1[14][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ml_backend__ml_tailcall_scalar_common_1[0]))
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

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_2[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_0)),
    ((MR_Box) (&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_tailcall_warning_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_3[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__ml_tailcall_scalar_common_2[0])),
    ((MR_Box) (ml_backend__ml_tailcall__ml_mark_tailcalls_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__ml_tailcall_scalar_common_2[0])),
    ((MR_Box) (ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_tailcall_scalar_common_2[0])),
    ((MR_Box) (ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_tailcall_scalar_common_2[0])),
    ((MR_Box) (ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_4[1][7] = {
  /* row 0 */
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

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1247 "ml_backend.ml_tailcall.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

#line 1255 "ml_backend.ml_tailcall.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__maybe__ti_maybe_1list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

#line 1263 "ml_backend.ml_tailcall.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_at_tail_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_tailcall____Unify____at_tail_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tailcall____Compare____at_tail_0_0_10001)),
  (MR_String) "ml_backend.ml_tailcall",
  (MR_String) "at_tail",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_tailcall__maybe__ti_maybe_1list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1280 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_0 = {
  (MR_String) "is_local",
  (MR_Integer) 0
};

#line 1286 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_1 = {
  (MR_String) "is_not_local",
  (MR_Integer) 1
};

#line 1292 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_value_ordered_is_local_0[2] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_0,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_1
};

#line 1298 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_name_ordered_is_local_0[2] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_0,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_1
};

#line 1304 "ml_backend.ml_tailcall.c"
static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_is_local_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1310 "ml_backend.ml_tailcall.c"
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

#line 1327 "ml_backend.ml_tailcall.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_argument_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0
  }
};

#line 1335 "ml_backend.ml_tailcall.c"
static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_local_defns_0_0[1] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_argument_0
};

#line 1340 "ml_backend.ml_tailcall.c"
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

#line 1355 "ml_backend.ml_tailcall.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 1363 "ml_backend.ml_tailcall.c"
static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_local_defns_0_1[1] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0
};

#line 1368 "ml_backend.ml_tailcall.c"
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

#line 1383 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_0[1] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_0
};

#line 1388 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_1[1] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_1
};

#line 1393 "ml_backend.ml_tailcall.c"
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

#line 1407 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_local_defns_0[2] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_1,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_0
};

#line 1413 "ml_backend.ml_tailcall.c"
static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_local_defns_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1419 "ml_backend.ml_tailcall.c"
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

#line 1436 "ml_backend.ml_tailcall.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__ml_tailcall__type_ctor_info_local_defns_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_local_defns_0
  }
};

#line 1444 "ml_backend.ml_tailcall.c"
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

#line 1461 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_0 = {
  (MR_String) "may_yield_dangling_stack_ref",
  (MR_Integer) 0
};

#line 1467 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_1 = {
  (MR_String) "will_not_yield_dangling_stack_ref",
  (MR_Integer) 1
};

#line 1473 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_value_ordered_may_yield_dangling_stack_ref_0[2] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_0,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_1
};

#line 1479 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_name_ordered_may_yield_dangling_stack_ref_0[2] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_0,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_1
};

#line 1485 "ml_backend.ml_tailcall.c"
static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_may_yield_dangling_stack_ref_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1491 "ml_backend.ml_tailcall.c"
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

#line 1508 "ml_backend.ml_tailcall.c"
static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_tailcall_warning_0_0[3] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_pred_label_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_context_0
};

#line 1515 "ml_backend.ml_tailcall.c"
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

#line 1530 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_tailcall_warning_0_0[1] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_tailcall_warning_0_0
};

#line 1535 "ml_backend.ml_tailcall.c"
static const MR_DuPtagLayout ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_tailcall_warning_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_tailcall_warning_0_0
  }
};

#line 1544 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_tailcall_warning_0[1] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_tailcall_warning_0_0
};

#line 1549 "ml_backend.ml_tailcall.c"
static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_tailcall_warning_0[1] = {
  (MR_Integer) 0
};

#line 1554 "ml_backend.ml_tailcall.c"
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

#line 1571 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____at_tail_0_0_10001(
#line 1574 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 1576 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2)
#line 1578 "ml_backend.ml_tailcall.c"
{
#line 1580 "ml_backend.ml_tailcall.c"
  {
#line 1582 "ml_backend.ml_tailcall.c"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 1585 "ml_backend.ml_tailcall.c"
    {
#line 1587 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____at_tail_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    }
#line 1590 "ml_backend.ml_tailcall.c"
    return ml_backend__ml_tailcall__succeeded;
#line 1592 "ml_backend.ml_tailcall.c"
  }
#line 1594 "ml_backend.ml_tailcall.c"
}

#line 1597 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____at_tail_0_0_10001(
#line 1600 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 1602 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 1604 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3)
#line 1606 "ml_backend.ml_tailcall.c"
{
#line 1608 "ml_backend.ml_tailcall.c"
  {
#line 1610 "ml_backend.ml_tailcall.c"
    MR_Word ml_backend__ml_tailcall__conv0_HeadVar__1_1;

#line 1613 "ml_backend.ml_tailcall.c"
    {
#line 1615 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall____Compare____at_tail_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    }
#line 1618 "ml_backend.ml_tailcall.c"
    *ml_backend__ml_tailcall__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tailcall__conv0_HeadVar__1_1));
#line 1620 "ml_backend.ml_tailcall.c"
  }
#line 1622 "ml_backend.ml_tailcall.c"
}

#line 1625 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____is_local_0_0_10001(
#line 1628 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 1630 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2)
#line 1632 "ml_backend.ml_tailcall.c"
{
#line 1634 "ml_backend.ml_tailcall.c"
  {
#line 1636 "ml_backend.ml_tailcall.c"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 1639 "ml_backend.ml_tailcall.c"
    {
#line 1641 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____is_local_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    }
#line 1644 "ml_backend.ml_tailcall.c"
    return ml_backend__ml_tailcall__succeeded;
#line 1646 "ml_backend.ml_tailcall.c"
  }
#line 1648 "ml_backend.ml_tailcall.c"
}

#line 1651 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____is_local_0_0_10001(
#line 1654 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 1656 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 1658 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3)
#line 1660 "ml_backend.ml_tailcall.c"
{
#line 1662 "ml_backend.ml_tailcall.c"
  {
#line 1664 "ml_backend.ml_tailcall.c"
    MR_Word ml_backend__ml_tailcall__conv0_HeadVar__1_1;

#line 1667 "ml_backend.ml_tailcall.c"
    {
#line 1669 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall____Compare____is_local_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    }
#line 1672 "ml_backend.ml_tailcall.c"
    *ml_backend__ml_tailcall__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tailcall__conv0_HeadVar__1_1));
#line 1674 "ml_backend.ml_tailcall.c"
  }
#line 1676 "ml_backend.ml_tailcall.c"
}

#line 1679 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____local_defns_0_0_10001(
#line 1682 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 1684 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2)
#line 1686 "ml_backend.ml_tailcall.c"
{
#line 1688 "ml_backend.ml_tailcall.c"
  {
#line 1690 "ml_backend.ml_tailcall.c"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 1693 "ml_backend.ml_tailcall.c"
    {
#line 1695 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____local_defns_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    }
#line 1698 "ml_backend.ml_tailcall.c"
    return ml_backend__ml_tailcall__succeeded;
#line 1700 "ml_backend.ml_tailcall.c"
  }
#line 1702 "ml_backend.ml_tailcall.c"
}

#line 1705 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____local_defns_0_0_10001(
#line 1708 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 1710 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 1712 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3)
#line 1714 "ml_backend.ml_tailcall.c"
{
#line 1716 "ml_backend.ml_tailcall.c"
  {
#line 1718 "ml_backend.ml_tailcall.c"
    MR_Word ml_backend__ml_tailcall__conv0_HeadVar__1_1;

#line 1721 "ml_backend.ml_tailcall.c"
    {
#line 1723 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall____Compare____local_defns_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    }
#line 1726 "ml_backend.ml_tailcall.c"
    *ml_backend__ml_tailcall__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tailcall__conv0_HeadVar__1_1));
#line 1728 "ml_backend.ml_tailcall.c"
  }
#line 1730 "ml_backend.ml_tailcall.c"
}

#line 1733 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____locals_0_0_10001(
#line 1736 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 1738 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2)
#line 1740 "ml_backend.ml_tailcall.c"
{
#line 1742 "ml_backend.ml_tailcall.c"
  {
#line 1744 "ml_backend.ml_tailcall.c"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 1747 "ml_backend.ml_tailcall.c"
    {
#line 1749 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____locals_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    }
#line 1752 "ml_backend.ml_tailcall.c"
    return ml_backend__ml_tailcall__succeeded;
#line 1754 "ml_backend.ml_tailcall.c"
  }
#line 1756 "ml_backend.ml_tailcall.c"
}

#line 1759 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____locals_0_0_10001(
#line 1762 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 1764 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 1766 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3)
#line 1768 "ml_backend.ml_tailcall.c"
{
#line 1770 "ml_backend.ml_tailcall.c"
  {
#line 1772 "ml_backend.ml_tailcall.c"
    MR_Word ml_backend__ml_tailcall__conv0_HeadVar__1_1;

#line 1775 "ml_backend.ml_tailcall.c"
    {
#line 1777 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall____Compare____locals_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    }
#line 1780 "ml_backend.ml_tailcall.c"
    *ml_backend__ml_tailcall__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tailcall__conv0_HeadVar__1_1));
#line 1782 "ml_backend.ml_tailcall.c"
  }
#line 1784 "ml_backend.ml_tailcall.c"
}

#line 1787 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____may_yield_dangling_stack_ref_0_0_10001(
#line 1790 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 1792 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2)
#line 1794 "ml_backend.ml_tailcall.c"
{
#line 1796 "ml_backend.ml_tailcall.c"
  {
#line 1798 "ml_backend.ml_tailcall.c"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 1801 "ml_backend.ml_tailcall.c"
    {
#line 1803 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____may_yield_dangling_stack_ref_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    }
#line 1806 "ml_backend.ml_tailcall.c"
    return ml_backend__ml_tailcall__succeeded;
#line 1808 "ml_backend.ml_tailcall.c"
  }
#line 1810 "ml_backend.ml_tailcall.c"
}

#line 1813 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____may_yield_dangling_stack_ref_0_0_10001(
#line 1816 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 1818 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 1820 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3)
#line 1822 "ml_backend.ml_tailcall.c"
{
#line 1824 "ml_backend.ml_tailcall.c"
  {
#line 1826 "ml_backend.ml_tailcall.c"
    MR_Word ml_backend__ml_tailcall__conv0_HeadVar__1_1;

#line 1829 "ml_backend.ml_tailcall.c"
    {
#line 1831 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall____Compare____may_yield_dangling_stack_ref_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    }
#line 1834 "ml_backend.ml_tailcall.c"
    *ml_backend__ml_tailcall__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tailcall__conv0_HeadVar__1_1));
#line 1836 "ml_backend.ml_tailcall.c"
  }
#line 1838 "ml_backend.ml_tailcall.c"
}

#line 1841 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tailcall_warning_0_0_10001(
#line 1844 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 1846 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2)
#line 1848 "ml_backend.ml_tailcall.c"
{
#line 1850 "ml_backend.ml_tailcall.c"
  {
#line 1852 "ml_backend.ml_tailcall.c"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 1855 "ml_backend.ml_tailcall.c"
    {
#line 1857 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____tailcall_warning_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    }
#line 1860 "ml_backend.ml_tailcall.c"
    return ml_backend__ml_tailcall__succeeded;
#line 1862 "ml_backend.ml_tailcall.c"
  }
#line 1864 "ml_backend.ml_tailcall.c"
}

#line 1867 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____tailcall_warning_0_0_10001(
#line 1870 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 1872 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 1874 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3)
#line 1876 "ml_backend.ml_tailcall.c"
{
#line 1878 "ml_backend.ml_tailcall.c"
  {
#line 1880 "ml_backend.ml_tailcall.c"
    MR_Word ml_backend__ml_tailcall__conv0_HeadVar__1_1;

#line 1883 "ml_backend.ml_tailcall.c"
    {
#line 1885 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall____Compare____tailcall_warning_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    }
#line 1888 "ml_backend.ml_tailcall.c"
    *ml_backend__ml_tailcall__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tailcall__conv0_HeadVar__1_1));
#line 1890 "ml_backend.ml_tailcall.c"
  }
#line 1892 "ml_backend.ml_tailcall.c"
}

#line 604 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____tailcall_warning_0_0(
#line 604 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
#line 604 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
#line 604 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3)
#line 604 "ml_tailcall.m"
{
#line 604 "ml_tailcall.m"
  {
#line 604 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 604 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__CastX_12 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;
#line 604 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__CastY_13 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__3_3;

#line 604 "ml_tailcall.m"
    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastX_12 == ml_backend__ml_tailcall__CastY_13);
#line 604 "ml_tailcall.m"
    if (ml_backend__ml_tailcall__succeeded)
#line 1919 "ml_backend.ml_tailcall.c"
      *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 0;
#line 604 "ml_tailcall.m"
    else
#line 604 "ml_tailcall.m"
      {
#line 604 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
#line 604 "ml_tailcall.m"
        MR_Integer ml_backend__ml_tailcall__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 1)));
#line 604 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 2)));
#line 604 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 0)));
#line 604 "ml_tailcall.m"
        MR_Integer ml_backend__ml_tailcall__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 1)));
#line 604 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 2)));
#line 604 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_10_10;

#line 604 "ml_tailcall.m"
        {
#line 604 "ml_tailcall.m"
          ml_backend__mlds____Compare____mlds_pred_label_0_0(&ml_backend__ml_tailcall__V_10_10, ml_backend__ml_tailcall__V_4_4, ml_backend__ml_tailcall__V_7_7);
        }
#line 1945 "ml_backend.ml_tailcall.c"
        ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_10_10 == (MR_Integer) 0);
#line 604 "ml_tailcall.m"
        ml_backend__ml_tailcall__succeeded = !(ml_backend__ml_tailcall__succeeded);
#line 604 "ml_tailcall.m"
        if (ml_backend__ml_tailcall__succeeded)
#line 604 "ml_tailcall.m"
          *ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__V_10_10;
#line 604 "ml_tailcall.m"
        else
#line 604 "ml_tailcall.m"
          {
#line 604 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__V_11_11;

#line 604 "ml_tailcall.m"
            {
#line 604 "ml_tailcall.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_tailcall__V_11_11, ml_backend__ml_tailcall__V_5_5, ml_backend__ml_tailcall__V_8_8);
            }
#line 1965 "ml_backend.ml_tailcall.c"
            ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_11_11 == (MR_Integer) 0);
#line 604 "ml_tailcall.m"
            ml_backend__ml_tailcall__succeeded = !(ml_backend__ml_tailcall__succeeded);
#line 604 "ml_tailcall.m"
            if (ml_backend__ml_tailcall__succeeded)
#line 604 "ml_tailcall.m"
              *ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__V_11_11;
#line 604 "ml_tailcall.m"
            else
#line 604 "ml_tailcall.m"
              {
#line 604 "ml_tailcall.m"
                ml_backend__mlds____Compare____mlds_context_0_0(ml_backend__ml_tailcall__HeadVar__1_1, ml_backend__ml_tailcall__V_6_6, ml_backend__ml_tailcall__V_9_9);
#line 604 "ml_tailcall.m"
                return;
              }
#line 604 "ml_tailcall.m"
          }
#line 604 "ml_tailcall.m"
      }
#line 604 "ml_tailcall.m"
  }
#line 604 "ml_tailcall.m"
}

#line 604 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tailcall_warning_0_0(
#line 604 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
#line 604 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2)
#line 604 "ml_tailcall.m"
{
#line 604 "ml_tailcall.m"
  {
#line 604 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 604 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__CastX_9 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__1_1;
#line 604 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__CastY_10 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;

#line 604 "ml_tailcall.m"
    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastX_9 == ml_backend__ml_tailcall__CastY_10);
#line 604 "ml_tailcall.m"
    if (ml_backend__ml_tailcall__succeeded)
#line 604 "ml_tailcall.m"
      ml_backend__ml_tailcall__succeeded = MR_TRUE;
#line 604 "ml_tailcall.m"
    else
#line 604 "ml_tailcall.m"
      {
#line 604 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 0)));
#line 604 "ml_tailcall.m"
        MR_Integer ml_backend__ml_tailcall__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 1)));
#line 604 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 2)));
#line 604 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
#line 604 "ml_tailcall.m"
        MR_Integer ml_backend__ml_tailcall__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 1)));
#line 604 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 2)));

#line 2032 "ml_backend.ml_tailcall.c"
        {
#line 2034 "ml_backend.ml_tailcall.c"
          ml_backend__ml_tailcall__succeeded = ml_backend__mlds____Unify____mlds_pred_label_0_0(ml_backend__ml_tailcall__V_3_3, ml_backend__ml_tailcall__V_6_6);
        }
#line 604 "ml_tailcall.m"
        if (ml_backend__ml_tailcall__succeeded)
#line 604 "ml_tailcall.m"
          {
#line 2041 "ml_backend.ml_tailcall.c"
            ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_4_4 == ml_backend__ml_tailcall__V_7_7);
#line 604 "ml_tailcall.m"
            if (ml_backend__ml_tailcall__succeeded)
#line 2045 "ml_backend.ml_tailcall.c"
              {
#line 2047 "ml_backend.ml_tailcall.c"
                return ml_backend__ml_tailcall__succeeded = ml_backend__mlds____Unify____mlds_context_0_0(ml_backend__ml_tailcall__V_5_5, ml_backend__ml_tailcall__V_8_8);
              }
#line 604 "ml_tailcall.m"
          }
#line 604 "ml_tailcall.m"
      }
#line 604 "ml_tailcall.m"
    return ml_backend__ml_tailcall__succeeded;
#line 604 "ml_tailcall.m"
  }
#line 604 "ml_tailcall.m"
}

#line 404 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____may_yield_dangling_stack_ref_0_0(
#line 404 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
#line 404 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
#line 404 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3)
#line 404 "ml_tailcall.m"
{
#line 404 "ml_tailcall.m"
  {
#line 404 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 404 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__Cast_HeadVar1_4 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;
#line 404 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__Cast_HeadVar2_5 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__3_3;

#line 404 "ml_tailcall.m"
    {
#line 404 "ml_tailcall.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_tailcall__HeadVar__1_1, ml_backend__ml_tailcall__Cast_HeadVar1_4, ml_backend__ml_tailcall__Cast_HeadVar2_5);
#line 404 "ml_tailcall.m"
      return;
    }
#line 404 "ml_tailcall.m"
  }
#line 404 "ml_tailcall.m"
}

#line 404 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____may_yield_dangling_stack_ref_0_0(
#line 404 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_1,
#line 404 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2)
#line 404 "ml_tailcall.m"
{
#line 2102 "ml_backend.ml_tailcall.c"
  {
#line 2104 "ml_backend.ml_tailcall.c"
    MR_bool ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__HeadVar__2_1 == ml_backend__ml_tailcall__HeadVar__2_2);

#line 2107 "ml_backend.ml_tailcall.c"
    return ml_backend__ml_tailcall__succeeded;
#line 2109 "ml_backend.ml_tailcall.c"
  }
#line 404 "ml_tailcall.m"
}

#line 108 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____locals_0_0(
#line 108 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
#line 108 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
#line 108 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3)
#line 108 "ml_tailcall.m"
{
#line 108 "ml_tailcall.m"
  {
#line 108 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 108 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Cast_HeadVar1_4 = ml_backend__ml_tailcall__HeadVar__2_2;
#line 108 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Cast_HeadVar2_5 = ml_backend__ml_tailcall__HeadVar__3_3;

#line 108 "ml_tailcall.m"
    {
#line 108 "ml_tailcall.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[4], ml_backend__ml_tailcall__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tailcall__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_tailcall__Cast_HeadVar2_5)));
#line 108 "ml_tailcall.m"
      return;
    }
#line 108 "ml_tailcall.m"
  }
#line 108 "ml_tailcall.m"
}

#line 108 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____locals_0_0(
#line 108 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
#line 108 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2)
#line 108 "ml_tailcall.m"
{
#line 108 "ml_tailcall.m"
  {
#line 108 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 108 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Cast_HeadVar1_3 = ml_backend__ml_tailcall__HeadVar__1_1;
#line 108 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Cast_HeadVar2_4 = ml_backend__ml_tailcall__HeadVar__2_2;

#line 108 "ml_tailcall.m"
    {
#line 108 "ml_tailcall.m"
      return ml_backend__ml_tailcall__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[4], ((MR_Box) (ml_backend__ml_tailcall__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_tailcall__Cast_HeadVar2_4)));
    }
#line 108 "ml_tailcall.m"
    return ml_backend__ml_tailcall__succeeded;
#line 108 "ml_tailcall.m"
  }
#line 108 "ml_tailcall.m"
}

#line 109 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____local_defns_0_0(
#line 109 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
#line 109 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
#line 109 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3)
#line 109 "ml_tailcall.m"
{
#line 109 "ml_tailcall.m"
  {
#line 109 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 109 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__CastX_12 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;
#line 109 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__CastY_13 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__3_3;

#line 109 "ml_tailcall.m"
    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastX_12 == ml_backend__ml_tailcall__CastY_13);
#line 109 "ml_tailcall.m"
    if (ml_backend__ml_tailcall__succeeded)
#line 2200 "ml_backend.ml_tailcall.c"
      *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 0;
#line 109 "ml_tailcall.m"
    else
#line 109 "ml_tailcall.m"
    if (((MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 109 "ml_tailcall.m"
      {
#line 109 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));

#line 109 "ml_tailcall.m"
        if (((MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 109 "ml_tailcall.m"
          {
#line 109 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 0)));

#line 109 "ml_tailcall.m"
            {
#line 109 "ml_tailcall.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[2], ml_backend__ml_tailcall__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tailcall__V_16_16)), ((MR_Box) (ml_backend__ml_tailcall__V_11_11)));
#line 109 "ml_tailcall.m"
              return;
            }
#line 109 "ml_tailcall.m"
          }
#line 109 "ml_tailcall.m"
        else
#line 2229 "ml_backend.ml_tailcall.c"
          *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 2;
#line 109 "ml_tailcall.m"
      }
#line 109 "ml_tailcall.m"
    else
#line 109 "ml_tailcall.m"
      {
#line 109 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));

#line 109 "ml_tailcall.m"
        if (((MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2242 "ml_backend.ml_tailcall.c"
          *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 1;
#line 109 "ml_tailcall.m"
        else
#line 109 "ml_tailcall.m"
          {
#line 109 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 0)));

#line 109 "ml_tailcall.m"
            {
#line 109 "ml_tailcall.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[3], ml_backend__ml_tailcall__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tailcall__V_17_17)), ((MR_Box) (ml_backend__ml_tailcall__V_5_5)));
#line 109 "ml_tailcall.m"
              return;
            }
#line 109 "ml_tailcall.m"
          }
#line 109 "ml_tailcall.m"
      }
#line 109 "ml_tailcall.m"
  }
#line 109 "ml_tailcall.m"
}

#line 109 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____local_defns_0_0(
#line 109 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
#line 109 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2)
#line 109 "ml_tailcall.m"
{
#line 109 "ml_tailcall.m"
  {
#line 109 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 109 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__CastX_7 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__1_1;
#line 109 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__CastY_8 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;

#line 109 "ml_tailcall.m"
    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastX_7 == ml_backend__ml_tailcall__CastY_8);
#line 109 "ml_tailcall.m"
    if (ml_backend__ml_tailcall__succeeded)
#line 109 "ml_tailcall.m"
      ml_backend__ml_tailcall__succeeded = MR_TRUE;
#line 109 "ml_tailcall.m"
    else
#line 109 "ml_tailcall.m"
    if (((MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 109 "ml_tailcall.m"
      {
#line 109 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__TypeInfo_9_9;
#line 109 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 0)));
#line 109 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_6_6;

#line 109 "ml_tailcall.m"
        ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 109 "ml_tailcall.m"
        if (ml_backend__ml_tailcall__succeeded)
#line 109 "ml_tailcall.m"
          {
#line 109 "ml_tailcall.m"
            ml_backend__ml_tailcall__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
#line 2312 "ml_backend.ml_tailcall.c"
            ml_backend__ml_tailcall__TypeInfo_9_9 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[2];
#line 2314 "ml_backend.ml_tailcall.c"
            {
#line 2316 "ml_backend.ml_tailcall.c"
              return ml_backend__ml_tailcall__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_tailcall__TypeInfo_9_9, ((MR_Box) (ml_backend__ml_tailcall__V_5_5)), ((MR_Box) (ml_backend__ml_tailcall__V_6_6)));
            }
#line 109 "ml_tailcall.m"
          }
#line 109 "ml_tailcall.m"
      }
#line 109 "ml_tailcall.m"
    else
#line 109 "ml_tailcall.m"
      {
#line 109 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__TypeInfo_10_10;
#line 109 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 0)));
#line 109 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_4_4;

#line 109 "ml_tailcall.m"
        ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 109 "ml_tailcall.m"
        if (ml_backend__ml_tailcall__succeeded)
#line 109 "ml_tailcall.m"
          {
#line 109 "ml_tailcall.m"
            ml_backend__ml_tailcall__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
#line 2342 "ml_backend.ml_tailcall.c"
            ml_backend__ml_tailcall__TypeInfo_10_10 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[3];
#line 2344 "ml_backend.ml_tailcall.c"
            {
#line 2346 "ml_backend.ml_tailcall.c"
              return ml_backend__ml_tailcall__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_tailcall__TypeInfo_10_10, ((MR_Box) (ml_backend__ml_tailcall__V_3_3)), ((MR_Box) (ml_backend__ml_tailcall__V_4_4)));
            }
#line 109 "ml_tailcall.m"
          }
#line 109 "ml_tailcall.m"
      }
#line 109 "ml_tailcall.m"
    return ml_backend__ml_tailcall__succeeded;
#line 109 "ml_tailcall.m"
  }
#line 109 "ml_tailcall.m"
}

#line 375 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____is_local_0_0(
#line 375 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
#line 375 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
#line 375 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3)
#line 375 "ml_tailcall.m"
{
#line 375 "ml_tailcall.m"
  {
#line 375 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 375 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__Cast_HeadVar1_4 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;
#line 375 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__Cast_HeadVar2_5 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__3_3;

#line 375 "ml_tailcall.m"
    {
#line 375 "ml_tailcall.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_tailcall__HeadVar__1_1, ml_backend__ml_tailcall__Cast_HeadVar1_4, ml_backend__ml_tailcall__Cast_HeadVar2_5);
#line 375 "ml_tailcall.m"
      return;
    }
#line 375 "ml_tailcall.m"
  }
#line 375 "ml_tailcall.m"
}

#line 375 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____is_local_0_0(
#line 375 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_1,
#line 375 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2)
#line 375 "ml_tailcall.m"
{
#line 2401 "ml_backend.ml_tailcall.c"
  {
#line 2403 "ml_backend.ml_tailcall.c"
    MR_bool ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__HeadVar__2_1 == ml_backend__ml_tailcall__HeadVar__2_2);

#line 2406 "ml_backend.ml_tailcall.c"
    return ml_backend__ml_tailcall__succeeded;
#line 2408 "ml_backend.ml_tailcall.c"
  }
#line 375 "ml_tailcall.m"
}

#line 104 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____at_tail_0_0(
#line 104 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
#line 104 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
#line 104 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3)
#line 104 "ml_tailcall.m"
{
#line 104 "ml_tailcall.m"
  {
#line 104 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 104 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Cast_HeadVar1_4 = ml_backend__ml_tailcall__HeadVar__2_2;
#line 104 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Cast_HeadVar2_5 = ml_backend__ml_tailcall__HeadVar__3_3;

#line 104 "ml_tailcall.m"
    {
#line 104 "ml_tailcall.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[1], ml_backend__ml_tailcall__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tailcall__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_tailcall__Cast_HeadVar2_5)));
#line 104 "ml_tailcall.m"
      return;
    }
#line 104 "ml_tailcall.m"
  }
#line 104 "ml_tailcall.m"
}

#line 104 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____at_tail_0_0(
#line 104 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
#line 104 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2)
#line 104 "ml_tailcall.m"
{
#line 104 "ml_tailcall.m"
  {
#line 104 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 104 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Cast_HeadVar1_3 = ml_backend__ml_tailcall__HeadVar__1_1;
#line 104 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Cast_HeadVar2_4 = ml_backend__ml_tailcall__HeadVar__2_2;

#line 104 "ml_tailcall.m"
    {
#line 104 "ml_tailcall.m"
      return ml_backend__ml_tailcall__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[1], ((MR_Box) (ml_backend__ml_tailcall__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_tailcall__Cast_HeadVar2_4)));
    }
#line 104 "ml_tailcall.m"
    return ml_backend__ml_tailcall__succeeded;
#line 104 "ml_tailcall.m"
  }
#line 104 "ml_tailcall.m"
}

#line 669 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__report_nontailcall_warning_4_p_0(
#line 669 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Globals_5,
#line 669 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Warning_6)
#line 669 "ml_tailcall.m"
{
#line 672 "ml_tailcall.m"
  {
#line 672 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 672 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__PredLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Warning_6, (MR_Integer) 0)));
#line 672 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Warning_6, (MR_Integer) 1)));
#line 672 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Warning_6, (MR_Integer) 2)));

#line 687 "ml_tailcall.m"
    if (((MR_tag((MR_Word) ml_backend__ml_tailcall__PredLabel_8)) == (MR_mktag((MR_Integer) 1))))
#line 688 "ml_tailcall.m"
      {
#line 688 "ml_tailcall.m"
      }
#line 687 "ml_tailcall.m"
    else
#line 676 "ml_tailcall.m"
      {
#line 676 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__PredOrFunc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_8, (MR_Integer) 0)));
#line 676 "ml_tailcall.m"
        MR_String ml_backend__ml_tailcall__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_8, (MR_Integer) 2)));
#line 676 "ml_tailcall.m"
        MR_Integer ml_backend__ml_tailcall__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_8, (MR_Integer) 3)));
#line 676 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__SimpleCallId_17;
#line 676 "ml_tailcall.m"
        MR_Integer ml_backend__ml_tailcall__ProcNumber0_18;
#line 676 "ml_tailcall.m"
        MR_Integer ml_backend__ml_tailcall__ProcNumber_19;
#line 676 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Pieces_20;
#line 676 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Msg_21;
#line 676 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Spec_22;
#line 676 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_31_31;
#line 676 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_35_35;
#line 676 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_36_36;
#line 676 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_37_37;
#line 676 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_40_40;
#line 676 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_41_41;
#line 676 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_53_53;
#line 676 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_54_54;
#line 676 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_55_55;
#line 676 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_59_59;
#line 675 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall___MaybeModule_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_8, (MR_Integer) 1)));
#line 675 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall___CodeModel_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_8, (MR_Integer) 4)));
#line 675 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall___NonOutputFunc_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_8, (MR_Integer) 5)));
#line 686 "ml_tailcall.m"
        MR_Integer ml_backend__ml_tailcall___NumWarnings_23;
#line 686 "ml_tailcall.m"
        MR_Integer ml_backend__ml_tailcall___NumErrors_24;

#line 677 "ml_tailcall.m"
        {
#line 677 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 677 "ml_tailcall.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_31_31, 0) = ((MR_Box) (ml_backend__ml_tailcall__Name_13));
#line 677 "ml_tailcall.m"
        }
#line 677 "ml_tailcall.m"
        {
#line 677 "ml_tailcall.m"
          ml_backend__ml_tailcall__SimpleCallId_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 677 "ml_tailcall.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__SimpleCallId_17, 0) = ((MR_Box) (ml_backend__ml_tailcall__PredOrFunc_11));
#line 677 "ml_tailcall.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__SimpleCallId_17, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_31_31));
#line 677 "ml_tailcall.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__SimpleCallId_17, 2) = ((MR_Box) (ml_backend__ml_tailcall__Arity_14));
#line 677 "ml_tailcall.m"
        }
#line 678 "ml_tailcall.m"
        {
#line 678 "ml_tailcall.m"
          hlds__hlds_pred__proc_id_to_int_2_p_0(ml_backend__ml_tailcall__ProcId_9, &ml_backend__ml_tailcall__ProcNumber0_18);
        }
#line 679 "ml_tailcall.m"
        ml_backend__ml_tailcall__ProcNumber_19 = (ml_backend__ml_tailcall__ProcNumber0_18 + (MR_Integer) 1);
#line 681 "ml_tailcall.m"
        {
#line 681 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 681 "ml_tailcall.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 681 "ml_tailcall.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__V_36_36, 1) = ((MR_Box) (ml_backend__ml_tailcall__ProcNumber_19));
#line 681 "ml_tailcall.m"
        }
#line 682 "ml_tailcall.m"
        {
#line 682 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "ml_tailcall.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 682 "ml_tailcall.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__V_41_41, 1) = ((MR_Box) (ml_backend__ml_tailcall__SimpleCallId_17));
#line 682 "ml_tailcall.m"
        }
#line 682 "ml_tailcall.m"
        {
#line 682 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_40_40, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_41_41));
#line 682 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_tailcall_scalar_common_1[11])));
#line 682 "ml_tailcall.m"
        }
#line 682 "ml_tailcall.m"
        {
#line 682 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_37_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tailcall_scalar_common_1[13])));
#line 682 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_37_37, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_40_40));
#line 682 "ml_tailcall.m"
        }
#line 681 "ml_tailcall.m"
        {
#line 681 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 681 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_35_35, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_36_36));
#line 681 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_35_35, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_37_37));
#line 681 "ml_tailcall.m"
        }
#line 681 "ml_tailcall.m"
        {
#line 681 "ml_tailcall.m"
          ml_backend__ml_tailcall__Pieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 681 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Pieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tailcall_scalar_common_1[12])));
#line 681 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Pieces_20, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_35_35));
#line 681 "ml_tailcall.m"
        }
#line 684 "ml_tailcall.m"
        {
#line 684 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_53_53 = ml_backend__mlds__mlds_get_prog_context_1_f_0(ml_backend__ml_tailcall__Context_10);
        }
#line 684 "ml_tailcall.m"
        {
#line 684 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 684 "ml_tailcall.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_55_55, 0) = ((MR_Box) (ml_backend__ml_tailcall__Pieces_20));
#line 684 "ml_tailcall.m"
        }
#line 684 "ml_tailcall.m"
        {
#line 684 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 684 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_54_54, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_55_55));
#line 684 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 684 "ml_tailcall.m"
        }
#line 684 "ml_tailcall.m"
        {
#line 684 "ml_tailcall.m"
          ml_backend__ml_tailcall__Msg_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 684 "ml_tailcall.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Msg_21, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_53_53));
#line 684 "ml_tailcall.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Msg_21, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_54_54));
#line 684 "ml_tailcall.m"
        }
#line 685 "ml_tailcall.m"
        {
#line 685 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_59_59, 0) = ((MR_Box) (ml_backend__ml_tailcall__Msg_21));
#line 685 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 685 "ml_tailcall.m"
        }
#line 685 "ml_tailcall.m"
        {
#line 685 "ml_tailcall.m"
          ml_backend__ml_tailcall__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 685 "ml_tailcall.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 685 "ml_tailcall.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17))));
#line 685 "ml_tailcall.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Spec_22, 2) = ((MR_Box) (ml_backend__ml_tailcall__V_59_59));
#line 685 "ml_tailcall.m"
        }
#line 686 "ml_tailcall.m"
        {
#line 686 "ml_tailcall.m"
          parse_tree__error_util__write_error_spec_8_p_0(ml_backend__ml_tailcall__Spec_22, ml_backend__ml_tailcall__Globals_5, (MR_Integer) 0, &ml_backend__ml_tailcall___NumWarnings_23, (MR_Integer) 0, &ml_backend__ml_tailcall___NumErrors_24);
        }
#line 676 "ml_tailcall.m"
      }
#line 672 "ml_tailcall.m"
  }
#line 669 "ml_tailcall.m"
}

#line 623 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_2(
#line 623 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 623 "ml_tailcall.m"
{
#line 623 "ml_tailcall.m"
  {
#line 623 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 623 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Defn_28 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__conv0_Defn_28);
#line 623 "ml_tailcall.m"
    {
#line 623 "ml_tailcall.m"
      ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_1(ml_backend__ml_tailcall__env_ptr);
#line 623 "ml_tailcall.m"
      return;
    }
#line 623 "ml_tailcall.m"
  }
#line 623 "ml_tailcall.m"
}

#line 622 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_1(
#line 622 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 622 "ml_tailcall.m"
{
#line 622 "ml_tailcall.m"
  {
#line 622 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 624 "ml_tailcall.m"
    {
#line 624 "ml_tailcall.m"
      ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__ModuleName_4, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Defn_28, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Warning_6, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__cont, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__cont_env_ptr);
#line 624 "ml_tailcall.m"
      return;
    }
#line 622 "ml_tailcall.m"
  }
#line 622 "ml_tailcall.m"
}

#line 623 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_4(
#line 623 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 623 "ml_tailcall.m"
{
#line 623 "ml_tailcall.m"
  {
#line 623 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 623 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Defn_33 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__conv1_Defn_33);
#line 623 "ml_tailcall.m"
    {
#line 623 "ml_tailcall.m"
      ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_3(ml_backend__ml_tailcall__env_ptr);
#line 623 "ml_tailcall.m"
      return;
    }
#line 623 "ml_tailcall.m"
  }
#line 623 "ml_tailcall.m"
}

#line 622 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_3(
#line 622 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 622 "ml_tailcall.m"
{
#line 622 "ml_tailcall.m"
  {
#line 622 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 624 "ml_tailcall.m"
    {
#line 624 "ml_tailcall.m"
      ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__ModuleName_4, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Defn_33, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Warning_6, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__cont, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__cont_env_ptr);
#line 624 "ml_tailcall.m"
      return;
    }
#line 622 "ml_tailcall.m"
  }
#line 622 "ml_tailcall.m"
}

#line 633 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_5(
#line 633 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 633 "ml_tailcall.m"
{
#line 633 "ml_tailcall.m"
  {
#line 633 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 633 "ml_tailcall.m"
    {
#line 652 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall___CallSig_42;
#line 652 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall___This_44;
#line 652 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall___Args_45;
#line 652 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall___RetVals_46;
#line 665 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall___PredId_56;

#line 651 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__SubStmt_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__SubStatement_39, (MR_Integer) 0)));
#line 651 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Context_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__SubStatement_39, (MR_Integer) 1)));
#line 652 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__SubStmt_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__SubStmt_40, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 652 "ml_tailcall.m"
      if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded)
#line 652 "ml_tailcall.m"
        {
#line 652 "ml_tailcall.m"
          {
#line 652 "ml_tailcall.m"
            ml_backend__ml_tailcall___CallSig_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__SubStmt_40, (MR_Integer) 1)));
#line 652 "ml_tailcall.m"
            (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Func_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__SubStmt_40, (MR_Integer) 2)));
#line 652 "ml_tailcall.m"
            ml_backend__ml_tailcall___This_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__SubStmt_40, (MR_Integer) 3)));
#line 652 "ml_tailcall.m"
            ml_backend__ml_tailcall___Args_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__SubStmt_40, (MR_Integer) 4)));
#line 652 "ml_tailcall.m"
            ml_backend__ml_tailcall___RetVals_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__SubStmt_40, (MR_Integer) 5)));
#line 652 "ml_tailcall.m"
            (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__CallKind_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__SubStmt_40, (MR_Integer) 6)));
#line 652 "ml_tailcall.m"
          }
#line 633 "ml_tailcall.m"
          {
#line 653 "ml_tailcall.m"
            (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded = ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__CallKind_47 == (MR_Integer) 2);
#line 633 "ml_tailcall.m"
            if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded)
#line 633 "ml_tailcall.m"
              {
#line 655 "ml_tailcall.m"
                (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Func_43)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Func_43, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 655 "ml_tailcall.m"
                if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded)
#line 655 "ml_tailcall.m"
                  {
#line 655 "ml_tailcall.m"
                    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Func_43, (MR_Integer) 1)));
#line 633 "ml_tailcall.m"
                    {
#line 655 "ml_tailcall.m"
                      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_57_57)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_57_57, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 655 "ml_tailcall.m"
                      if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded)
#line 655 "ml_tailcall.m"
                        {
#line 655 "ml_tailcall.m"
                          (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__CodeAddr_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_57_57, (MR_Integer) 1)));
#line 633 "ml_tailcall.m"
                          {
#line 659 "ml_tailcall.m"
                            if (((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__CodeAddr_48)) == (MR_mktag((MR_Integer) 1))))
#line 660 "ml_tailcall.m"
                              {
#line 660 "ml_tailcall.m"
                                MR_Integer ml_backend__ml_tailcall__SeqNum_52;
#line 660 "ml_tailcall.m"
                                MR_Word ml_backend__ml_tailcall___Sig_59;

#line 660 "ml_tailcall.m"
                                (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__QualProcLabel_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__CodeAddr_48, (MR_Integer) 0)));
#line 660 "ml_tailcall.m"
                                ml_backend__ml_tailcall__SeqNum_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__CodeAddr_48, (MR_Integer) 1)));
#line 660 "ml_tailcall.m"
                                ml_backend__ml_tailcall___Sig_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__CodeAddr_48, (MR_Integer) 2)));
#line 661 "ml_tailcall.m"
                                {
#line 661 "ml_tailcall.m"
                                  MR_Word base;
#line 661 "ml_tailcall.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 661 "ml_tailcall.m"
                                  (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__MaybeSeqNum_51 = base;
#line 661 "ml_tailcall.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__SeqNum_52));
#line 661 "ml_tailcall.m"
                                }
#line 660 "ml_tailcall.m"
                              }
#line 659 "ml_tailcall.m"
                            else
#line 657 "ml_tailcall.m"
                              {
#line 657 "ml_tailcall.m"
                                MR_Word ml_backend__ml_tailcall___Sig_50;

#line 657 "ml_tailcall.m"
                                (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__QualProcLabel_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__CodeAddr_48, (MR_Integer) 0)));
#line 657 "ml_tailcall.m"
                                ml_backend__ml_tailcall___Sig_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__CodeAddr_48, (MR_Integer) 1)));
#line 658 "ml_tailcall.m"
                                (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__MaybeSeqNum_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 657 "ml_tailcall.m"
                              }
#line 664 "ml_tailcall.m"
                            (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__QualProcLabel_49, (MR_Integer) 0)));
#line 664 "ml_tailcall.m"
                            (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__QualProcLabel_49, (MR_Integer) 1)));
#line 664 "ml_tailcall.m"
                            (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__ProcLabel_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__QualProcLabel_49, (MR_Integer) 2)));
#line 664 "ml_tailcall.m"
                            {
#line 664 "ml_tailcall.m"
                              (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__ModuleName_4, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_61_61);
                            }
#line 633 "ml_tailcall.m"
                            if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded)
#line 633 "ml_tailcall.m"
                              {
#line 664 "ml_tailcall.m"
                                (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded = ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_58_58 == (MR_Integer) 0);
#line 633 "ml_tailcall.m"
                                if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded)
#line 633 "ml_tailcall.m"
                                  {
#line 663 "ml_tailcall.m"
                                    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__PredLabel_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__ProcLabel_53, (MR_Integer) 0)));
#line 663 "ml_tailcall.m"
                                    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__ProcId_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__ProcLabel_53, (MR_Integer) 1)));
#line 665 "ml_tailcall.m"
                                    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Name_7)) == (MR_mktag((MR_Integer) 2)));
#line 665 "ml_tailcall.m"
                                    if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded)
#line 665 "ml_tailcall.m"
                                      {
#line 665 "ml_tailcall.m"
                                        {
#line 665 "ml_tailcall.m"
                                          (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Name_7, (MR_Integer) 0)));
#line 665 "ml_tailcall.m"
                                          (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Name_7, (MR_Integer) 1)));
#line 665 "ml_tailcall.m"
                                          (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Name_7, (MR_Integer) 2)));
#line 665 "ml_tailcall.m"
                                          ml_backend__ml_tailcall___PredId_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Name_7, (MR_Integer) 3)));
#line 665 "ml_tailcall.m"
                                        }
#line 633 "ml_tailcall.m"
                                        {
#line 665 "ml_tailcall.m"
                                          {
#line 665 "ml_tailcall.m"
                                            (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded = ml_backend__mlds____Unify____mlds_pred_label_0_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__PredLabel_54, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_62_62);
                                          }
#line 633 "ml_tailcall.m"
                                          if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded)
#line 633 "ml_tailcall.m"
                                            {
#line 665 "ml_tailcall.m"
                                              (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded = ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__ProcId_55 == (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_63_63);
#line 633 "ml_tailcall.m"
                                              if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded)
#line 633 "ml_tailcall.m"
                                                {
#line 2991 "ml_backend.ml_tailcall.c"
                                                  (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__TypeInfo_37_67 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[5];
#line 665 "ml_tailcall.m"
                                                  {
#line 665 "ml_tailcall.m"
                                                    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__TypeInfo_37_67, ((MR_Box) ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__MaybeSeqNum_51)), ((MR_Box) ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_64_64)));
                                                  }
#line 633 "ml_tailcall.m"
                                                  if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded)
#line 633 "ml_tailcall.m"
                                                    {
#line 667 "ml_tailcall.m"
                                                      {
#line 667 "ml_tailcall.m"
                                                        MR_Word base;
#line 667 "ml_tailcall.m"
                                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 667 "ml_tailcall.m"
                                                        *((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Warning_6) = base;
#line 667 "ml_tailcall.m"
                                                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__PredLabel_54));
#line 667 "ml_tailcall.m"
                                                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__ProcId_55));
#line 667 "ml_tailcall.m"
                                                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Context_41));
#line 667 "ml_tailcall.m"
                                                      }
#line 667 "ml_tailcall.m"
                                                      {
#line 667 "ml_tailcall.m"
                                                        ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__cont)((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__cont_env_ptr);
#line 667 "ml_tailcall.m"
                                                        return;
                                                      }
#line 633 "ml_tailcall.m"
                                                    }
#line 633 "ml_tailcall.m"
                                                }
#line 633 "ml_tailcall.m"
                                            }
#line 633 "ml_tailcall.m"
                                        }
#line 665 "ml_tailcall.m"
                                      }
#line 633 "ml_tailcall.m"
                                  }
#line 633 "ml_tailcall.m"
                              }
#line 633 "ml_tailcall.m"
                          }
#line 655 "ml_tailcall.m"
                        }
#line 633 "ml_tailcall.m"
                    }
#line 655 "ml_tailcall.m"
                  }
#line 633 "ml_tailcall.m"
              }
#line 633 "ml_tailcall.m"
          }
#line 652 "ml_tailcall.m"
        }
#line 633 "ml_tailcall.m"
    }
#line 633 "ml_tailcall.m"
  }
#line 633 "ml_tailcall.m"
}

#line 626 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0(
#line 626 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__ModuleName_4,
#line 626 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Defn_5,
#line 626 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Warning_6,
#line 626 "ml_tailcall.m"
  MR_Cont ml_backend__ml_tailcall__cont,
#line 626 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__cont_env_ptr)
#line 626 "ml_tailcall.m"
{
#line 626 "ml_tailcall.m"
  {
#line 626 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0_s ml_backend__ml_tailcall__env;

#line 626 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__ModuleName_4 = ml_backend__ml_tailcall__ModuleName_4;
#line 626 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Warning_6 = ml_backend__ml_tailcall__Warning_6;
#line 626 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__cont = ml_backend__ml_tailcall__cont;
#line 626 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__cont_env_ptr = ml_backend__ml_tailcall__cont_env_ptr;
#line 629 "ml_tailcall.m"
    {
#line 629 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__DefnBody_10;
#line 630 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall___Context_8;
#line 630 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall___Flags_9;

#line 630 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Defn_5, (MR_Integer) 0)));
#line 630 "ml_tailcall.m"
      ml_backend__ml_tailcall___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Defn_5, (MR_Integer) 1)));
#line 630 "ml_tailcall.m"
      ml_backend__ml_tailcall___Flags_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Defn_5, (MR_Integer) 2)));
#line 630 "ml_tailcall.m"
      ml_backend__ml_tailcall__DefnBody_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Defn_5, (MR_Integer) 3)));
#line 636 "ml_tailcall.m"
      if (((MR_tag((MR_Word) ml_backend__ml_tailcall__DefnBody_10)) == (MR_mktag((MR_Integer) 0))))
#line 637 "ml_tailcall.m"
        {
#line 637 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__ClassDefn_17 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tailcall__DefnBody_10), (MR_Integer) 0);
#line 637 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__CtorDefns_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_17, (MR_Integer) 5)));
#line 637 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__MemberDefns_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_17, (MR_Integer) 6)));
#line 638 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall___Kind_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_17, (MR_Integer) 0)));
#line 638 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall___Imports_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_17, (MR_Integer) 1)));
#line 638 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall___BaseClasses_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_17, (MR_Integer) 2)));
#line 638 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall___Implements_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_17, (MR_Integer) 3)));
#line 638 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall___TypeParams_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_17, (MR_Integer) 4)));

#line 623 "ml_tailcall.m"
          {
#line 623 "ml_tailcall.m"
            mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, &(ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__conv0_Defn_28, ml_backend__ml_tailcall__CtorDefns_23, ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_2, &ml_backend__ml_tailcall__env);
          }
#line 623 "ml_tailcall.m"
          {
#line 623 "ml_tailcall.m"
            mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, &(ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__conv1_Defn_33, ml_backend__ml_tailcall__MemberDefns_24, ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_4, &ml_backend__ml_tailcall__env);
          }
#line 637 "ml_tailcall.m"
        }
#line 636 "ml_tailcall.m"
      else
#line 636 "ml_tailcall.m"
      if (((MR_tag((MR_Word) ml_backend__ml_tailcall__DefnBody_10)) == (MR_mktag((MR_Integer) 2))))
#line 633 "ml_tailcall.m"
        {
#line 633 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__FuncBody_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_10, (MR_Integer) 2)));
#line 633 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Body_16;
#line 632 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall___PredProcId_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_10, (MR_Integer) 0)));
#line 632 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall___Params_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_10, (MR_Integer) 1)));
#line 632 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall___Attributes_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_10, (MR_Integer) 3)));
#line 632 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall___EnvVarNames_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_10, (MR_Integer) 4)));

#line 634 "ml_tailcall.m"
          (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__FuncBody_13)) == (MR_mktag((MR_Integer) 1)));
#line 634 "ml_tailcall.m"
          if ((ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded)
#line 634 "ml_tailcall.m"
            {
#line 634 "ml_tailcall.m"
              ml_backend__ml_tailcall__Body_16 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tailcall__FuncBody_13), (MR_Integer) 1);
#line 650 "ml_tailcall.m"
              {
#line 650 "ml_tailcall.m"
                ml_backend__ml_util__statement_contains_statement_2_p_0(ml_backend__ml_tailcall__Body_16, &(ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__SubStatement_39, ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_5, &ml_backend__ml_tailcall__env);
              }
#line 634 "ml_tailcall.m"
            }
#line 633 "ml_tailcall.m"
        }
#line 636 "ml_tailcall.m"
      else
#line 636 "ml_tailcall.m"
        {
#line 636 "ml_tailcall.m"
        }
#line 629 "ml_tailcall.m"
    }
#line 626 "ml_tailcall.m"
  }
#line 626 "ml_tailcall.m"
}

#line 623 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_2(
#line 623 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 623 "ml_tailcall.m"
{
#line 623 "ml_tailcall.m"
  {
#line 623 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 623 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__Defn_17 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__conv0_Defn_17);
#line 623 "ml_tailcall.m"
    {
#line 623 "ml_tailcall.m"
      ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_1(ml_backend__ml_tailcall__env_ptr);
#line 623 "ml_tailcall.m"
      return;
    }
#line 623 "ml_tailcall.m"
  }
#line 623 "ml_tailcall.m"
}

#line 613 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_1(
#line 613 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 613 "ml_tailcall.m"
{
#line 613 "ml_tailcall.m"
  {
#line 613 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 624 "ml_tailcall.m"
    {
#line 624 "ml_tailcall.m"
      ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__MLDS_ModuleName_13, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__Defn_17, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__Warning_4, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__cont, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__cont_env_ptr);
#line 624 "ml_tailcall.m"
      return;
    }
#line 613 "ml_tailcall.m"
  }
#line 613 "ml_tailcall.m"
}

#line 611 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0(
#line 611 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__MLDS_3,
#line 611 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Warning_4,
#line 611 "ml_tailcall.m"
  MR_Cont ml_backend__ml_tailcall__cont,
#line 611 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__cont_env_ptr)
#line 611 "ml_tailcall.m"
{
#line 611 "ml_tailcall.m"
  {
#line 611 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0_s ml_backend__ml_tailcall__env;

#line 611 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__Warning_4 = ml_backend__ml_tailcall__Warning_4;
#line 611 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__cont = ml_backend__ml_tailcall__cont;
#line 611 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__cont_env_ptr = ml_backend__ml_tailcall__cont_env_ptr;
#line 613 "ml_tailcall.m"
    {
#line 613 "ml_tailcall.m"
      MR_bool ml_backend__ml_tailcall__succeeded;
#line 613 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__ModuleName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__MLDS_3, (MR_Integer) 0)));
#line 613 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__Defns_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__MLDS_3, (MR_Integer) 4)));
#line 614 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall___ForeignCode_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__MLDS_3, (MR_Integer) 1)));
#line 614 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall___Imports_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__MLDS_3, (MR_Integer) 2)));
#line 614 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall___GlobalData_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__MLDS_3, (MR_Integer) 3)));
#line 614 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall___InitPreds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__MLDS_3, (MR_Integer) 5)));
#line 614 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall___FinalPreds_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__MLDS_3, (MR_Integer) 6)));
#line 614 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall___ExportedEnums_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__MLDS_3, (MR_Integer) 7)));

#line 616 "ml_tailcall.m"
      {
#line 616 "ml_tailcall.m"
        (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__MLDS_ModuleName_13 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_tailcall__ModuleName_5);
      }
#line 623 "ml_tailcall.m"
      {
#line 623 "ml_tailcall.m"
        mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, &(ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__conv0_Defn_17, ml_backend__ml_tailcall__Defns_9, ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_2, &ml_backend__ml_tailcall__env);
      }
#line 613 "ml_tailcall.m"
    }
#line 611 "ml_tailcall.m"
  }
#line 611 "ml_tailcall.m"
}

#line 554 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_10(
#line 554 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 554 "ml_tailcall.m"
{
#line 554 "ml_tailcall.m"
  {
#line 554 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 554 "ml_tailcall.m"
    MR_builtin_longjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__commit_1, 1);
#line 554 "ml_tailcall.m"
  }
#line 554 "ml_tailcall.m"
}

#line 587 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_12(
#line 587 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 587 "ml_tailcall.m"
{
#line 587 "ml_tailcall.m"
  {
#line 587 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 587 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_74 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv3_Locals_74);
#line 587 "ml_tailcall.m"
    {
#line 587 "ml_tailcall.m"
      ml_backend__ml_tailcall__check_const_2_f_0_11(ml_backend__ml_tailcall__env_ptr);
#line 587 "ml_tailcall.m"
      return;
    }
#line 587 "ml_tailcall.m"
  }
#line 587 "ml_tailcall.m"
}

#line 554 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_13(
#line 554 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 554 "ml_tailcall.m"
{
#line 554 "ml_tailcall.m"
  {
#line 554 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 555 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_69)) == (MR_mktag((MR_Integer) 1)));
#line 555 "ml_tailcall.m"
    if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
#line 555 "ml_tailcall.m"
      {
#line 555 "ml_tailcall.m"
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_69, (MR_Integer) 0)));
#line 554 "ml_tailcall.m"
        {
#line 555 "ml_tailcall.m"
          (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_68_68)) == (MR_mktag((MR_Integer) 1)));
#line 555 "ml_tailcall.m"
          if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
#line 555 "ml_tailcall.m"
            {
#line 555 "ml_tailcall.m"
              (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_70_70 = (MR_Word) MR_body(((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_68_68), (MR_Integer) 1);
#line 554 "ml_tailcall.m"
              {
#line 555 "ml_tailcall.m"
                {
#line 555 "ml_tailcall.m"
                  (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = ml_backend__mlds____Unify____mlds_var_name_0_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__VarName_11, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_70_70);
                }
#line 555 "ml_tailcall.m"
                if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
#line 555 "ml_tailcall.m"
                  {
#line 555 "ml_tailcall.m"
                    ml_backend__ml_tailcall__check_const_2_f_0_10(ml_backend__ml_tailcall__env_ptr);
#line 555 "ml_tailcall.m"
                    return;
                  }
#line 554 "ml_tailcall.m"
              }
#line 555 "ml_tailcall.m"
            }
#line 554 "ml_tailcall.m"
        }
#line 555 "ml_tailcall.m"
      }
#line 554 "ml_tailcall.m"
  }
#line 554 "ml_tailcall.m"
}

#line 590 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_15(
#line 590 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 590 "ml_tailcall.m"
{
#line 590 "ml_tailcall.m"
  {
#line 590 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 590 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_76 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv4_Defn_76);
#line 590 "ml_tailcall.m"
    {
#line 590 "ml_tailcall.m"
      ml_backend__ml_tailcall__check_const_2_f_0_14(ml_backend__ml_tailcall__env_ptr);
#line 590 "ml_tailcall.m"
      return;
    }
#line 590 "ml_tailcall.m"
  }
#line 590 "ml_tailcall.m"
}

#line 589 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_14(
#line 589 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 589 "ml_tailcall.m"
{
#line 589 "ml_tailcall.m"
  {
#line 589 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 589 "ml_tailcall.m"
    {
#line 591 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_77_77;
#line 591 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_78_78;
#line 591 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_79_79;

#line 591 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_76, (MR_Integer) 0)));
#line 591 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_76, (MR_Integer) 1)));
#line 591 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_76, (MR_Integer) 2)));
#line 591 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_76, (MR_Integer) 3)));
#line 591 "ml_tailcall.m"
      {
#line 591 "ml_tailcall.m"
        ml_backend__ml_tailcall__check_const_2_f_0_13(ml_backend__ml_tailcall__env_ptr);
#line 591 "ml_tailcall.m"
        return;
      }
#line 589 "ml_tailcall.m"
    }
#line 589 "ml_tailcall.m"
  }
#line 589 "ml_tailcall.m"
}

#line 594 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_17(
#line 594 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 594 "ml_tailcall.m"
{
#line 594 "ml_tailcall.m"
  {
#line 594 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 594 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_81 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv5_Param_81);
#line 594 "ml_tailcall.m"
    {
#line 594 "ml_tailcall.m"
      ml_backend__ml_tailcall__check_const_2_f_0_16(ml_backend__ml_tailcall__env_ptr);
#line 594 "ml_tailcall.m"
      return;
    }
#line 594 "ml_tailcall.m"
  }
#line 594 "ml_tailcall.m"
}

#line 593 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_16(
#line 593 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 593 "ml_tailcall.m"
{
#line 593 "ml_tailcall.m"
  {
#line 593 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 593 "ml_tailcall.m"
    {
#line 595 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_82_82;
#line 595 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_83_83;

#line 595 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_81, (MR_Integer) 0)));
#line 595 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_81, (MR_Integer) 1)));
#line 595 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_81, (MR_Integer) 2)));
#line 595 "ml_tailcall.m"
      {
#line 595 "ml_tailcall.m"
        ml_backend__ml_tailcall__check_const_2_f_0_13(ml_backend__ml_tailcall__env_ptr);
#line 595 "ml_tailcall.m"
        return;
      }
#line 593 "ml_tailcall.m"
    }
#line 593 "ml_tailcall.m"
  }
#line 593 "ml_tailcall.m"
}

#line 554 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_11(
#line 554 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 554 "ml_tailcall.m"
{
#line 554 "ml_tailcall.m"
  {
#line 554 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 592 "ml_tailcall.m"
    if (((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_74)) == (MR_mktag((MR_Integer) 1))))
#line 589 "ml_tailcall.m"
      {
#line 589 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Defns_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_74, (MR_Integer) 0)));

#line 590 "ml_tailcall.m"
        {
#line 590 "ml_tailcall.m"
          mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv4_Defn_76, ml_backend__ml_tailcall__Defns_75, ml_backend__ml_tailcall__check_const_2_f_0_15, ml_backend__ml_tailcall__env_ptr);
        }
#line 589 "ml_tailcall.m"
      }
#line 592 "ml_tailcall.m"
    else
#line 593 "ml_tailcall.m"
      {
#line 593 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Params_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_74, (MR_Integer) 0)));

#line 594 "ml_tailcall.m"
        {
#line 594 "ml_tailcall.m"
          mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv5_Param_81, ml_backend__ml_tailcall__Params_80, ml_backend__ml_tailcall__check_const_2_f_0_17, ml_backend__ml_tailcall__env_ptr);
        }
#line 593 "ml_tailcall.m"
      }
#line 554 "ml_tailcall.m"
  }
#line 554 "ml_tailcall.m"
}

#line 554 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_18(
#line 554 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 554 "ml_tailcall.m"
{
#line 554 "ml_tailcall.m"
  {
#line 554 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 554 "ml_tailcall.m"
    if (MR_builtin_setjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__commit_1) == 0)
#line 554 "ml_tailcall.m"
      {
#line 554 "ml_tailcall.m"
        {
#line 587 "ml_tailcall.m"
          {
#line 587 "ml_tailcall.m"
            mercury__list__member_2_p_1((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_local_defns_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv3_Locals_74, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_5, ml_backend__ml_tailcall__check_const_2_f_0_12, ml_backend__ml_tailcall__env_ptr);
          }
#line 554 "ml_tailcall.m"
        }
#line 554 "ml_tailcall.m"
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = MR_FALSE;
#line 554 "ml_tailcall.m"
      }
#line 554 "ml_tailcall.m"
    else
#line 554 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = MR_TRUE;
#line 554 "ml_tailcall.m"
  }
#line 554 "ml_tailcall.m"
}

#line 576 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_1(
#line 576 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 576 "ml_tailcall.m"
{
#line 576 "ml_tailcall.m"
  {
#line 576 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 576 "ml_tailcall.m"
    MR_builtin_longjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__commit_0, 1);
#line 576 "ml_tailcall.m"
  }
#line 576 "ml_tailcall.m"
}

#line 587 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_3(
#line 587 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 587 "ml_tailcall.m"
{
#line 587 "ml_tailcall.m"
  {
#line 587 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 587 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_49 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv0_Locals_49);
#line 587 "ml_tailcall.m"
    {
#line 587 "ml_tailcall.m"
      ml_backend__ml_tailcall__check_const_2_f_0_2(ml_backend__ml_tailcall__env_ptr);
#line 587 "ml_tailcall.m"
      return;
    }
#line 587 "ml_tailcall.m"
  }
#line 587 "ml_tailcall.m"
}

#line 576 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_4(
#line 576 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 576 "ml_tailcall.m"
{
#line 576 "ml_tailcall.m"
  {
#line 576 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 576 "ml_tailcall.m"
    {
#line 577 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall___PredId_38;

#line 577 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41)) == (MR_mktag((MR_Integer) 2)));
#line 577 "ml_tailcall.m"
      if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
#line 577 "ml_tailcall.m"
        {
#line 577 "ml_tailcall.m"
          {
#line 577 "ml_tailcall.m"
            (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41, (MR_Integer) 0)));
#line 577 "ml_tailcall.m"
            (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41, (MR_Integer) 1)));
#line 577 "ml_tailcall.m"
            (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41, (MR_Integer) 2)));
#line 577 "ml_tailcall.m"
            ml_backend__ml_tailcall___PredId_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41, (MR_Integer) 3)));
#line 577 "ml_tailcall.m"
          }
#line 576 "ml_tailcall.m"
          {
#line 577 "ml_tailcall.m"
            {
#line 577 "ml_tailcall.m"
              (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = ml_backend__mlds____Unify____mlds_pred_label_0_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__PredLabel_35, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_42_42);
            }
#line 576 "ml_tailcall.m"
            if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
#line 576 "ml_tailcall.m"
              {
#line 577 "ml_tailcall.m"
                (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__ProcId_36 == (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_43_43);
#line 576 "ml_tailcall.m"
                if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
#line 576 "ml_tailcall.m"
                  {
#line 3717 "ml_backend.ml_tailcall.c"
                    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__TypeInfo_23_46 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[5];
#line 577 "ml_tailcall.m"
                    {
#line 577 "ml_tailcall.m"
                      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = mercury__builtin__unify_2_p_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__TypeInfo_23_46, ((MR_Box) ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__MaybeSeqNum_30)), ((MR_Box) ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_44_44)));
                    }
#line 577 "ml_tailcall.m"
                    if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
#line 577 "ml_tailcall.m"
                      {
#line 577 "ml_tailcall.m"
                        ml_backend__ml_tailcall__check_const_2_f_0_1(ml_backend__ml_tailcall__env_ptr);
#line 577 "ml_tailcall.m"
                        return;
                      }
#line 576 "ml_tailcall.m"
                  }
#line 576 "ml_tailcall.m"
              }
#line 576 "ml_tailcall.m"
          }
#line 577 "ml_tailcall.m"
        }
#line 576 "ml_tailcall.m"
    }
#line 576 "ml_tailcall.m"
  }
#line 576 "ml_tailcall.m"
}

#line 590 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_6(
#line 590 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 590 "ml_tailcall.m"
{
#line 590 "ml_tailcall.m"
  {
#line 590 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 590 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_51 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv1_Defn_51);
#line 590 "ml_tailcall.m"
    {
#line 590 "ml_tailcall.m"
      ml_backend__ml_tailcall__check_const_2_f_0_5(ml_backend__ml_tailcall__env_ptr);
#line 590 "ml_tailcall.m"
      return;
    }
#line 590 "ml_tailcall.m"
  }
#line 590 "ml_tailcall.m"
}

#line 589 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_5(
#line 589 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 589 "ml_tailcall.m"
{
#line 589 "ml_tailcall.m"
  {
#line 589 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 589 "ml_tailcall.m"
    {
#line 591 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_52_52;
#line 591 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_53_53;
#line 591 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_54_54;

#line 591 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_51, (MR_Integer) 0)));
#line 591 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_51, (MR_Integer) 1)));
#line 591 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_51, (MR_Integer) 2)));
#line 591 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_51, (MR_Integer) 3)));
#line 591 "ml_tailcall.m"
      {
#line 591 "ml_tailcall.m"
        ml_backend__ml_tailcall__check_const_2_f_0_4(ml_backend__ml_tailcall__env_ptr);
#line 591 "ml_tailcall.m"
        return;
      }
#line 589 "ml_tailcall.m"
    }
#line 589 "ml_tailcall.m"
  }
#line 589 "ml_tailcall.m"
}

#line 594 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_8(
#line 594 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 594 "ml_tailcall.m"
{
#line 594 "ml_tailcall.m"
  {
#line 594 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 594 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_56 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv2_Param_56);
#line 594 "ml_tailcall.m"
    {
#line 594 "ml_tailcall.m"
      ml_backend__ml_tailcall__check_const_2_f_0_7(ml_backend__ml_tailcall__env_ptr);
#line 594 "ml_tailcall.m"
      return;
    }
#line 594 "ml_tailcall.m"
  }
#line 594 "ml_tailcall.m"
}

#line 593 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_7(
#line 593 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 593 "ml_tailcall.m"
{
#line 593 "ml_tailcall.m"
  {
#line 593 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 593 "ml_tailcall.m"
    {
#line 595 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_57_57;
#line 595 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_58_58;

#line 595 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_56, (MR_Integer) 0)));
#line 595 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_56, (MR_Integer) 1)));
#line 595 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_56, (MR_Integer) 2)));
#line 595 "ml_tailcall.m"
      {
#line 595 "ml_tailcall.m"
        ml_backend__ml_tailcall__check_const_2_f_0_4(ml_backend__ml_tailcall__env_ptr);
#line 595 "ml_tailcall.m"
        return;
      }
#line 593 "ml_tailcall.m"
    }
#line 593 "ml_tailcall.m"
  }
#line 593 "ml_tailcall.m"
}

#line 576 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_2(
#line 576 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 576 "ml_tailcall.m"
{
#line 576 "ml_tailcall.m"
  {
#line 576 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 592 "ml_tailcall.m"
    if (((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_49)) == (MR_mktag((MR_Integer) 1))))
#line 589 "ml_tailcall.m"
      {
#line 589 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Defns_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_49, (MR_Integer) 0)));

#line 590 "ml_tailcall.m"
        {
#line 590 "ml_tailcall.m"
          mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv1_Defn_51, ml_backend__ml_tailcall__Defns_50, ml_backend__ml_tailcall__check_const_2_f_0_6, ml_backend__ml_tailcall__env_ptr);
        }
#line 589 "ml_tailcall.m"
      }
#line 592 "ml_tailcall.m"
    else
#line 593 "ml_tailcall.m"
      {
#line 593 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Params_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_49, (MR_Integer) 0)));

#line 594 "ml_tailcall.m"
        {
#line 594 "ml_tailcall.m"
          mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv2_Param_56, ml_backend__ml_tailcall__Params_55, ml_backend__ml_tailcall__check_const_2_f_0_8, ml_backend__ml_tailcall__env_ptr);
        }
#line 593 "ml_tailcall.m"
      }
#line 576 "ml_tailcall.m"
  }
#line 576 "ml_tailcall.m"
}

#line 576 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_9(
#line 576 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 576 "ml_tailcall.m"
{
#line 576 "ml_tailcall.m"
  {
#line 576 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 576 "ml_tailcall.m"
    if (MR_builtin_setjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__commit_0) == 0)
#line 576 "ml_tailcall.m"
      {
#line 576 "ml_tailcall.m"
        {
#line 587 "ml_tailcall.m"
          {
#line 587 "ml_tailcall.m"
            mercury__list__member_2_p_1((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_local_defns_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv0_Locals_49, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_5, ml_backend__ml_tailcall__check_const_2_f_0_3, ml_backend__ml_tailcall__env_ptr);
          }
#line 576 "ml_tailcall.m"
        }
#line 576 "ml_tailcall.m"
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = MR_FALSE;
#line 576 "ml_tailcall.m"
      }
#line 576 "ml_tailcall.m"
    else
#line 576 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = MR_TRUE;
#line 576 "ml_tailcall.m"
  }
#line 576 "ml_tailcall.m"
}

#line 502 "ml_tailcall.m"
static MR_Word MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0(
#line 502 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Const_4,
#line 502 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_5)
#line 502 "ml_tailcall.m"
{
#line 502 "ml_tailcall.m"
  {
#line 502 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s ml_backend__ml_tailcall__env;

#line 502 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_5 = ml_backend__ml_tailcall__Locals_5;
#line 506 "ml_tailcall.m"
    {
#line 506 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__MayYieldDanglingStackRef_6;

#line 506 "ml_tailcall.m"
#line 506 "ml_tailcall.m"
      switch (MR_tag((MR_Word) ml_backend__ml_tailcall__Const_4)) {
#line 506 "ml_tailcall.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 506 "ml_tailcall.m"
        case (MR_Integer) 0:
#line 539 "ml_tailcall.m"
          ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
#line 506 "ml_tailcall.m"
          break;
#line 506 "ml_tailcall.m"
        case (MR_Integer) 1:
#line 513 "ml_tailcall.m"
          {
#line 513 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__DataAddr_8 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tailcall__Const_4), (MR_Integer) 1);
#line 513 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__DataName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__DataAddr_8, (MR_Integer) 1)));
#line 514 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__DataAddr_8, (MR_Integer) 0)));

#line 515 "ml_tailcall.m"
            (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__DataName_10)) == (MR_mktag((MR_Integer) 1)));
#line 515 "ml_tailcall.m"
            if ((ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
#line 515 "ml_tailcall.m"
              {
#line 515 "ml_tailcall.m"
                (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__VarName_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tailcall__DataName_10), (MR_Integer) 1);
#line 554 "ml_tailcall.m"
                {
#line 554 "ml_tailcall.m"
                  ml_backend__ml_tailcall__check_const_2_f_0_18(&ml_backend__ml_tailcall__env);
                }
#line 520 "ml_tailcall.m"
                if ((ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
#line 519 "ml_tailcall.m"
                  ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 0;
#line 520 "ml_tailcall.m"
                else
#line 521 "ml_tailcall.m"
                  ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
#line 515 "ml_tailcall.m"
              }
#line 515 "ml_tailcall.m"
            else
#line 524 "ml_tailcall.m"
              ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
#line 513 "ml_tailcall.m"
          }
#line 506 "ml_tailcall.m"
          break;
#line 506 "ml_tailcall.m"
        case (MR_Integer) 2:
#line 539 "ml_tailcall.m"
          ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
#line 506 "ml_tailcall.m"
          break;
#line 506 "ml_tailcall.m"
        case (MR_Integer) 3:
#line 506 "ml_tailcall.m"
#line 506 "ml_tailcall.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Const_4, (MR_Integer) 0)))) {
#line 506 "ml_tailcall.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 506 "ml_tailcall.m"
            case (MR_Integer) 0:
#line 506 "ml_tailcall.m"
            case (MR_Integer) 1:
#line 506 "ml_tailcall.m"
            case (MR_Integer) 2:
#line 506 "ml_tailcall.m"
            case (MR_Integer) 3:
#line 506 "ml_tailcall.m"
            case (MR_Integer) 4:
#line 506 "ml_tailcall.m"
            case (MR_Integer) 5:
#line 506 "ml_tailcall.m"
            case (MR_Integer) 6:
#line 506 "ml_tailcall.m"
            case (MR_Integer) 8:
#line 539 "ml_tailcall.m"
              ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
#line 506 "ml_tailcall.m"
              break;
#line 506 "ml_tailcall.m"
            case (MR_Integer) 7:
#line 506 "ml_tailcall.m"
              {
#line 506 "ml_tailcall.m"
                MR_Word ml_backend__ml_tailcall__CodeAddr_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Const_4, (MR_Integer) 1)));
#line 563 "ml_tailcall.m"
                MR_Word ml_backend__ml_tailcall__QualifiedProcLabel_28;
#line 563 "ml_tailcall.m"
                MR_Word ml_backend__ml_tailcall__ProcLabel_34;
#line 573 "ml_tailcall.m"
                MR_Word ml_backend__ml_tailcall___ModuleName_32;
#line 573 "ml_tailcall.m"
                MR_Word ml_backend__ml_tailcall___QualKind_33;

#line 567 "ml_tailcall.m"
                if (((MR_tag((MR_Word) ml_backend__ml_tailcall__CodeAddr_7)) == (MR_mktag((MR_Integer) 1))))
#line 568 "ml_tailcall.m"
                  {
#line 568 "ml_tailcall.m"
                    MR_Integer ml_backend__ml_tailcall__SeqNum_31;
#line 568 "ml_tailcall.m"
                    MR_Word ml_backend__ml_tailcall___Sig_39;

#line 568 "ml_tailcall.m"
                    ml_backend__ml_tailcall__QualifiedProcLabel_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_7, (MR_Integer) 0)));
#line 568 "ml_tailcall.m"
                    ml_backend__ml_tailcall__SeqNum_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_7, (MR_Integer) 1)));
#line 568 "ml_tailcall.m"
                    ml_backend__ml_tailcall___Sig_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_7, (MR_Integer) 2)));
#line 569 "ml_tailcall.m"
                    {
#line 569 "ml_tailcall.m"
                      MR_Word base;
#line 569 "ml_tailcall.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 569 "ml_tailcall.m"
                      (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__MaybeSeqNum_30 = base;
#line 569 "ml_tailcall.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__SeqNum_31));
#line 569 "ml_tailcall.m"
                    }
#line 568 "ml_tailcall.m"
                  }
#line 567 "ml_tailcall.m"
                else
#line 565 "ml_tailcall.m"
                  {
#line 565 "ml_tailcall.m"
                    MR_Word ml_backend__ml_tailcall___Sig_29;

#line 565 "ml_tailcall.m"
                    ml_backend__ml_tailcall__QualifiedProcLabel_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__CodeAddr_7, (MR_Integer) 0)));
#line 565 "ml_tailcall.m"
                    ml_backend__ml_tailcall___Sig_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__CodeAddr_7, (MR_Integer) 1)));
#line 566 "ml_tailcall.m"
                    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__MaybeSeqNum_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 565 "ml_tailcall.m"
                  }
#line 573 "ml_tailcall.m"
                ml_backend__ml_tailcall___ModuleName_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualifiedProcLabel_28, (MR_Integer) 0)));
#line 573 "ml_tailcall.m"
                ml_backend__ml_tailcall___QualKind_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualifiedProcLabel_28, (MR_Integer) 1)));
#line 573 "ml_tailcall.m"
                ml_backend__ml_tailcall__ProcLabel_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualifiedProcLabel_28, (MR_Integer) 2)));
#line 574 "ml_tailcall.m"
                (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__PredLabel_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ProcLabel_34, (MR_Integer) 0)));
#line 574 "ml_tailcall.m"
                (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__ProcId_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ProcLabel_34, (MR_Integer) 1)));
#line 576 "ml_tailcall.m"
                {
#line 576 "ml_tailcall.m"
                  ml_backend__ml_tailcall__check_const_2_f_0_9(&ml_backend__ml_tailcall__env);
                }
#line 509 "ml_tailcall.m"
                if ((ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
#line 508 "ml_tailcall.m"
                  ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 0;
#line 509 "ml_tailcall.m"
                else
#line 510 "ml_tailcall.m"
                  ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
#line 506 "ml_tailcall.m"
              }
#line 506 "ml_tailcall.m"
              break;
#line 506 "ml_tailcall.m"
          }
#line 506 "ml_tailcall.m"
          break;
#line 506 "ml_tailcall.m"
      }
#line 506 "ml_tailcall.m"
      return ml_backend__ml_tailcall__MayYieldDanglingStackRef_6;
#line 506 "ml_tailcall.m"
    }
#line 502 "ml_tailcall.m"
  }
#line 502 "ml_tailcall.m"
}

#line 554 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_1(
#line 554 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 554 "ml_tailcall.m"
{
#line 554 "ml_tailcall.m"
  {
#line 554 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 554 "ml_tailcall.m"
    MR_builtin_longjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__commit_0, 1);
#line 554 "ml_tailcall.m"
  }
#line 554 "ml_tailcall.m"
}

#line 587 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_3(
#line 587 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 587 "ml_tailcall.m"
{
#line 587 "ml_tailcall.m"
  {
#line 587 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 587 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_29 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv0_Locals_29);
#line 587 "ml_tailcall.m"
    {
#line 587 "ml_tailcall.m"
      ml_backend__ml_tailcall__check_lval_2_f_0_2(ml_backend__ml_tailcall__env_ptr);
#line 587 "ml_tailcall.m"
      return;
    }
#line 587 "ml_tailcall.m"
  }
#line 587 "ml_tailcall.m"
}

#line 554 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_4(
#line 554 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 554 "ml_tailcall.m"
{
#line 554 "ml_tailcall.m"
  {
#line 554 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 555 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Local_24)) == (MR_mktag((MR_Integer) 1)));
#line 555 "ml_tailcall.m"
    if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded)
#line 555 "ml_tailcall.m"
      {
#line 555 "ml_tailcall.m"
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Local_24, (MR_Integer) 0)));
#line 554 "ml_tailcall.m"
        {
#line 555 "ml_tailcall.m"
          (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 555 "ml_tailcall.m"
          if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded)
#line 555 "ml_tailcall.m"
            {
#line 555 "ml_tailcall.m"
              (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__V_25_25 = (MR_Word) MR_body(((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__V_23_23), (MR_Integer) 1);
#line 554 "ml_tailcall.m"
              {
#line 555 "ml_tailcall.m"
                {
#line 555 "ml_tailcall.m"
                  (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded = ml_backend__mlds____Unify____mlds_var_name_0_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__VarName_21, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__V_25_25);
                }
#line 555 "ml_tailcall.m"
                if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded)
#line 555 "ml_tailcall.m"
                  {
#line 555 "ml_tailcall.m"
                    ml_backend__ml_tailcall__check_lval_2_f_0_1(ml_backend__ml_tailcall__env_ptr);
#line 555 "ml_tailcall.m"
                    return;
                  }
#line 554 "ml_tailcall.m"
              }
#line 555 "ml_tailcall.m"
            }
#line 554 "ml_tailcall.m"
        }
#line 555 "ml_tailcall.m"
      }
#line 554 "ml_tailcall.m"
  }
#line 554 "ml_tailcall.m"
}

#line 590 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_6(
#line 590 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 590 "ml_tailcall.m"
{
#line 590 "ml_tailcall.m"
  {
#line 590 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 590 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Defn_31 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv1_Defn_31);
#line 590 "ml_tailcall.m"
    {
#line 590 "ml_tailcall.m"
      ml_backend__ml_tailcall__check_lval_2_f_0_5(ml_backend__ml_tailcall__env_ptr);
#line 590 "ml_tailcall.m"
      return;
    }
#line 590 "ml_tailcall.m"
  }
#line 590 "ml_tailcall.m"
}

#line 589 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_5(
#line 589 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 589 "ml_tailcall.m"
{
#line 589 "ml_tailcall.m"
  {
#line 589 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 589 "ml_tailcall.m"
    {
#line 591 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_32_32;
#line 591 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_33_33;
#line 591 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_34_34;

#line 591 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Local_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Defn_31, (MR_Integer) 0)));
#line 591 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Defn_31, (MR_Integer) 1)));
#line 591 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Defn_31, (MR_Integer) 2)));
#line 591 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Defn_31, (MR_Integer) 3)));
#line 591 "ml_tailcall.m"
      {
#line 591 "ml_tailcall.m"
        ml_backend__ml_tailcall__check_lval_2_f_0_4(ml_backend__ml_tailcall__env_ptr);
#line 591 "ml_tailcall.m"
        return;
      }
#line 589 "ml_tailcall.m"
    }
#line 589 "ml_tailcall.m"
  }
#line 589 "ml_tailcall.m"
}

#line 594 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_8(
#line 594 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 594 "ml_tailcall.m"
{
#line 594 "ml_tailcall.m"
  {
#line 594 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 594 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Param_36 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv2_Param_36);
#line 594 "ml_tailcall.m"
    {
#line 594 "ml_tailcall.m"
      ml_backend__ml_tailcall__check_lval_2_f_0_7(ml_backend__ml_tailcall__env_ptr);
#line 594 "ml_tailcall.m"
      return;
    }
#line 594 "ml_tailcall.m"
  }
#line 594 "ml_tailcall.m"
}

#line 593 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_7(
#line 593 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 593 "ml_tailcall.m"
{
#line 593 "ml_tailcall.m"
  {
#line 593 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 593 "ml_tailcall.m"
    {
#line 595 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_37_37;
#line 595 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_38_38;

#line 595 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Local_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Param_36, (MR_Integer) 0)));
#line 595 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Param_36, (MR_Integer) 1)));
#line 595 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Param_36, (MR_Integer) 2)));
#line 595 "ml_tailcall.m"
      {
#line 595 "ml_tailcall.m"
        ml_backend__ml_tailcall__check_lval_2_f_0_4(ml_backend__ml_tailcall__env_ptr);
#line 595 "ml_tailcall.m"
        return;
      }
#line 593 "ml_tailcall.m"
    }
#line 593 "ml_tailcall.m"
  }
#line 593 "ml_tailcall.m"
}

#line 554 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_2(
#line 554 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 554 "ml_tailcall.m"
{
#line 554 "ml_tailcall.m"
  {
#line 554 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 592 "ml_tailcall.m"
    if (((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_29)) == (MR_mktag((MR_Integer) 1))))
#line 589 "ml_tailcall.m"
      {
#line 589 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Defns_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_29, (MR_Integer) 0)));

#line 590 "ml_tailcall.m"
        {
#line 590 "ml_tailcall.m"
          mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv1_Defn_31, ml_backend__ml_tailcall__Defns_30, ml_backend__ml_tailcall__check_lval_2_f_0_6, ml_backend__ml_tailcall__env_ptr);
        }
#line 589 "ml_tailcall.m"
      }
#line 592 "ml_tailcall.m"
    else
#line 593 "ml_tailcall.m"
      {
#line 593 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Params_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_29, (MR_Integer) 0)));

#line 594 "ml_tailcall.m"
        {
#line 594 "ml_tailcall.m"
          mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv2_Param_36, ml_backend__ml_tailcall__Params_35, ml_backend__ml_tailcall__check_lval_2_f_0_8, ml_backend__ml_tailcall__env_ptr);
        }
#line 593 "ml_tailcall.m"
      }
#line 554 "ml_tailcall.m"
  }
#line 554 "ml_tailcall.m"
}

#line 554 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_9(
#line 554 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 554 "ml_tailcall.m"
{
#line 554 "ml_tailcall.m"
  {
#line 554 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 554 "ml_tailcall.m"
    if (MR_builtin_setjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__commit_0) == 0)
#line 554 "ml_tailcall.m"
      {
#line 554 "ml_tailcall.m"
        {
#line 587 "ml_tailcall.m"
          {
#line 587 "ml_tailcall.m"
            mercury__list__member_2_p_1((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_local_defns_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv0_Locals_29, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_5, ml_backend__ml_tailcall__check_lval_2_f_0_3, ml_backend__ml_tailcall__env_ptr);
          }
#line 554 "ml_tailcall.m"
        }
#line 554 "ml_tailcall.m"
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded = MR_FALSE;
#line 554 "ml_tailcall.m"
      }
#line 554 "ml_tailcall.m"
    else
#line 554 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded = MR_TRUE;
#line 554 "ml_tailcall.m"
  }
#line 554 "ml_tailcall.m"
}

#line 471 "ml_tailcall.m"
static MR_Word MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0(
#line 471 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Lval_4,
#line 471 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_5)
#line 471 "ml_tailcall.m"
{
#line 471 "ml_tailcall.m"
  {
#line 471 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s ml_backend__ml_tailcall__env;

#line 471 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_5 = ml_backend__ml_tailcall__Locals_5;
#line 475 "ml_tailcall.m"
    {
#line 475 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__MayYieldDanglingStackRef_6;

#line 475 "ml_tailcall.m"
#line 475 "ml_tailcall.m"
      switch (MR_tag((MR_Word) ml_backend__ml_tailcall__Lval_4)) {
#line 475 "ml_tailcall.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 475 "ml_tailcall.m"
        case (MR_Integer) 0:
#line 482 "ml_tailcall.m"
          {
#line 482 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__Rval_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 1)));
#line 482 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall___MaybeTag_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 0)));
#line 482 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall___FieldId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 2)));
#line 482 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 3)));
#line 482 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 4)));

#line 483 "ml_tailcall.m"
            {
#line 483 "ml_tailcall.m"
              return ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = ml_backend__ml_tailcall__check_rval_2_f_0(ml_backend__ml_tailcall__Rval_10, (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_5);
            }
#line 482 "ml_tailcall.m"
          }
#line 475 "ml_tailcall.m"
          break;
#line 475 "ml_tailcall.m"
        case (MR_Integer) 1:
#line 475 "ml_tailcall.m"
        case (MR_Integer) 2:
#line 491 "ml_tailcall.m"
          ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
#line 475 "ml_tailcall.m"
          break;
#line 475 "ml_tailcall.m"
        case (MR_Integer) 3:
#line 475 "ml_tailcall.m"
          {
#line 475 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__Var0_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 0)));
#line 475 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 1)));
#line 552 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall___ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var0_7, (MR_Integer) 0)));
#line 552 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall___QualKind_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var0_7, (MR_Integer) 1)));

#line 552 "ml_tailcall.m"
            (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_lval_3_f_0_env_0__VarName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var0_7, (MR_Integer) 2)));
#line 554 "ml_tailcall.m"
            {
#line 554 "ml_tailcall.m"
              ml_backend__ml_tailcall__check_lval_2_f_0_9(&ml_backend__ml_tailcall__env);
            }
#line 478 "ml_tailcall.m"
            if ((ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded)
#line 477 "ml_tailcall.m"
              ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 0;
#line 478 "ml_tailcall.m"
            else
#line 479 "ml_tailcall.m"
              ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
#line 475 "ml_tailcall.m"
          }
#line 475 "ml_tailcall.m"
          break;
#line 475 "ml_tailcall.m"
      }
#line 475 "ml_tailcall.m"
      return ml_backend__ml_tailcall__MayYieldDanglingStackRef_6;
#line 475 "ml_tailcall.m"
    }
#line 471 "ml_tailcall.m"
  }
#line 471 "ml_tailcall.m"
}

#line 430 "ml_tailcall.m"
static MR_Word MR_CALL 
ml_backend__ml_tailcall__check_rval_2_f_0(
#line 430 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Rval_4,
#line 430 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_5)
#line 430 "ml_tailcall.m"
{
#line 434 "ml_tailcall.m"
  while (MR_TRUE)
#line 434 "ml_tailcall.m"
    {
#line 434 "ml_tailcall.m"
      /* tailcall optimized into a loop */
#line 434 "ml_tailcall.m"
      {
#line 434 "ml_tailcall.m"
        MR_bool ml_backend__ml_tailcall__succeeded;
#line 434 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__MayYieldDanglingStackRef_6;

#line 434 "ml_tailcall.m"
#line 434 "ml_tailcall.m"
        switch (MR_tag((MR_Word) ml_backend__ml_tailcall__Rval_4)) {
#line 434 "ml_tailcall.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 434 "ml_tailcall.m"
          case (MR_Integer) 0:
#line 465 "ml_tailcall.m"
            ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 0;
#line 434 "ml_tailcall.m"
            break;
#line 434 "ml_tailcall.m"
          case (MR_Integer) 1:
#line 436 "ml_tailcall.m"
            ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
#line 434 "ml_tailcall.m"
            break;
#line 434 "ml_tailcall.m"
          case (MR_Integer) 2:
#line 438 "ml_tailcall.m"
            {
#line 438 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__SubRval_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 1)));
#line 438 "ml_tailcall.m"
              MR_Integer ml_backend__ml_tailcall___Tag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 0)));

#line 439 "ml_tailcall.m"
              /* direct tailcall eliminated */
#line 439 "ml_tailcall.m"
              {
#line 439 "ml_tailcall.m"
                MR_Word ml_backend__ml_tailcall__Rval__tmp_copy_4 = ml_backend__ml_tailcall__SubRval_9;

#line 439 "ml_tailcall.m"
                ml_backend__ml_tailcall__Rval_4 = ml_backend__ml_tailcall__Rval__tmp_copy_4;
#line 439 "ml_tailcall.m"
              }
#line 439 "ml_tailcall.m"
              continue;
#line 438 "ml_tailcall.m"
            }
#line 434 "ml_tailcall.m"
            break;
#line 434 "ml_tailcall.m"
          case (MR_Integer) 3:
#line 434 "ml_tailcall.m"
#line 434 "ml_tailcall.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 0)))) {
#line 434 "ml_tailcall.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 434 "ml_tailcall.m"
              case (MR_Integer) 0:
#line 441 "ml_tailcall.m"
                {
#line 441 "ml_tailcall.m"
                  MR_Word ml_backend__ml_tailcall__Const_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 1)));

#line 442 "ml_tailcall.m"
                  {
#line 442 "ml_tailcall.m"
                    return ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = ml_backend__ml_tailcall__check_const_2_f_0(ml_backend__ml_tailcall__Const_10, ml_backend__ml_tailcall__Locals_5);
                  }
#line 441 "ml_tailcall.m"
                }
#line 434 "ml_tailcall.m"
                break;
#line 434 "ml_tailcall.m"
              case (MR_Integer) 1:
#line 444 "ml_tailcall.m"
                {
#line 444 "ml_tailcall.m"
                  MR_Word ml_backend__ml_tailcall__XRval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 2)));
#line 444 "ml_tailcall.m"
                  MR_Word ml_backend__ml_tailcall___Op_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 1)));

#line 445 "ml_tailcall.m"
                  /* direct tailcall eliminated */
#line 445 "ml_tailcall.m"
                  {
#line 445 "ml_tailcall.m"
                    MR_Word ml_backend__ml_tailcall__Rval__tmp_copy_4 = ml_backend__ml_tailcall__XRval_12;

#line 445 "ml_tailcall.m"
                    ml_backend__ml_tailcall__Rval_4 = ml_backend__ml_tailcall__Rval__tmp_copy_4;
#line 445 "ml_tailcall.m"
                  }
#line 445 "ml_tailcall.m"
                  continue;
#line 444 "ml_tailcall.m"
                }
#line 434 "ml_tailcall.m"
                break;
#line 434 "ml_tailcall.m"
              case (MR_Integer) 2:
#line 447 "ml_tailcall.m"
                {
#line 447 "ml_tailcall.m"
                  MR_Word ml_backend__ml_tailcall__YRval_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 3)));
#line 447 "ml_tailcall.m"
                  MR_Word ml_backend__ml_tailcall__XRval_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 2)));
#line 447 "ml_tailcall.m"
                  MR_Word ml_backend__ml_tailcall___Op_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 1)));
#line 448 "ml_tailcall.m"
                  MR_Word ml_backend__ml_tailcall__V_19_19;

#line 448 "ml_tailcall.m"
                  {
#line 448 "ml_tailcall.m"
                    ml_backend__ml_tailcall__V_19_19 = ml_backend__ml_tailcall__check_rval_2_f_0(ml_backend__ml_tailcall__XRval_22, ml_backend__ml_tailcall__Locals_5);
                  }
#line 448 "ml_tailcall.m"
                  ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_19_19 == (MR_Integer) 0);
#line 450 "ml_tailcall.m"
                  if (ml_backend__ml_tailcall__succeeded)
#line 449 "ml_tailcall.m"
                    ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 0;
#line 450 "ml_tailcall.m"
                  else
#line 451 "ml_tailcall.m"
                    {
#line 451 "ml_tailcall.m"
                      /* direct tailcall eliminated */
#line 451 "ml_tailcall.m"
                      {
#line 451 "ml_tailcall.m"
                        MR_Word ml_backend__ml_tailcall__Rval__tmp_copy_4 = ml_backend__ml_tailcall__YRval_13;

#line 451 "ml_tailcall.m"
                        ml_backend__ml_tailcall__Rval_4 = ml_backend__ml_tailcall__Rval__tmp_copy_4;
#line 451 "ml_tailcall.m"
                      }
#line 451 "ml_tailcall.m"
                      continue;
#line 451 "ml_tailcall.m"
                    }
#line 447 "ml_tailcall.m"
                }
#line 434 "ml_tailcall.m"
                break;
#line 434 "ml_tailcall.m"
              case (MR_Integer) 3:
#line 454 "ml_tailcall.m"
                {
#line 454 "ml_tailcall.m"
                  MR_Word ml_backend__ml_tailcall__Lval_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 1)));

#line 457 "ml_tailcall.m"
                  {
#line 457 "ml_tailcall.m"
                    return ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = ml_backend__ml_tailcall__check_lval_2_f_0(ml_backend__ml_tailcall__Lval_14, ml_backend__ml_tailcall__Locals_5);
                  }
#line 454 "ml_tailcall.m"
                }
#line 434 "ml_tailcall.m"
                break;
#line 434 "ml_tailcall.m"
              case (MR_Integer) 4:
#line 459 "ml_tailcall.m"
                {
#line 459 "ml_tailcall.m"
                  MR_Word ml_backend__ml_tailcall__RowRval_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 2)));
#line 459 "ml_tailcall.m"
                  MR_Word ml_backend__ml_tailcall___VectorCommon_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 1)));

#line 460 "ml_tailcall.m"
                  /* direct tailcall eliminated */
#line 460 "ml_tailcall.m"
                  {
#line 460 "ml_tailcall.m"
                    MR_Word ml_backend__ml_tailcall__Rval__tmp_copy_4 = ml_backend__ml_tailcall__RowRval_16;

#line 460 "ml_tailcall.m"
                    ml_backend__ml_tailcall__Rval_4 = ml_backend__ml_tailcall__Rval__tmp_copy_4;
#line 460 "ml_tailcall.m"
                  }
#line 460 "ml_tailcall.m"
                  continue;
#line 459 "ml_tailcall.m"
                }
#line 434 "ml_tailcall.m"
                break;
#line 434 "ml_tailcall.m"
              case (MR_Integer) 5:
#line 465 "ml_tailcall.m"
                ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 0;
#line 434 "ml_tailcall.m"
                break;
#line 434 "ml_tailcall.m"
            }
#line 434 "ml_tailcall.m"
            break;
#line 434 "ml_tailcall.m"
        }
#line 434 "ml_tailcall.m"
        return ml_backend__ml_tailcall__MayYieldDanglingStackRef_6;
#line 434 "ml_tailcall.m"
      }
#line 434 "ml_tailcall.m"
      break;
#line 434 "ml_tailcall.m"
    }
#line 430 "ml_tailcall.m"
}

#line 414 "ml_tailcall.m"
static MR_Word MR_CALL 
ml_backend__ml_tailcall__check_rvals_2_f_0(
#line 414 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
#line 414 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_2)
#line 414 "ml_tailcall.m"
{
#line 416 "ml_tailcall.m"
  while (MR_TRUE)
#line 416 "ml_tailcall.m"
    {
#line 416 "ml_tailcall.m"
      /* tailcall optimized into a loop */
#line 416 "ml_tailcall.m"
      {
#line 416 "ml_tailcall.m"
        MR_bool ml_backend__ml_tailcall__succeeded;
#line 416 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__HeadVar__3_3;

#line 416 "ml_tailcall.m"
        if ((ml_backend__ml_tailcall__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 416 "ml_tailcall.m"
          ml_backend__ml_tailcall__HeadVar__3_3 = (MR_Integer) 1;
#line 416 "ml_tailcall.m"
        else
#line 417 "ml_tailcall.m"
          {
#line 417 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__Rval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 0)));
#line 417 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__Rvals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 1)));
#line 418 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__V_9_9;

#line 418 "ml_tailcall.m"
            {
#line 418 "ml_tailcall.m"
              ml_backend__ml_tailcall__V_9_9 = ml_backend__ml_tailcall__check_rval_2_f_0(ml_backend__ml_tailcall__Rval_5, ml_backend__ml_tailcall__Locals_2);
            }
#line 418 "ml_tailcall.m"
            ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_9_9 == (MR_Integer) 0);
#line 420 "ml_tailcall.m"
            if (ml_backend__ml_tailcall__succeeded)
#line 419 "ml_tailcall.m"
              ml_backend__ml_tailcall__HeadVar__3_3 = (MR_Integer) 0;
#line 420 "ml_tailcall.m"
            else
#line 421 "ml_tailcall.m"
              {
#line 421 "ml_tailcall.m"
                /* direct tailcall eliminated */
#line 421 "ml_tailcall.m"
                {
#line 421 "ml_tailcall.m"
                  MR_Word ml_backend__ml_tailcall__HeadVar__1__tmp_copy_1 = ml_backend__ml_tailcall__Rvals_6;

#line 421 "ml_tailcall.m"
                  ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__HeadVar__1__tmp_copy_1;
#line 421 "ml_tailcall.m"
                }
#line 421 "ml_tailcall.m"
                continue;
#line 421 "ml_tailcall.m"
              }
#line 417 "ml_tailcall.m"
          }
#line 416 "ml_tailcall.m"
        return ml_backend__ml_tailcall__HeadVar__3_3;
#line 416 "ml_tailcall.m"
      }
#line 416 "ml_tailcall.m"
      break;
#line 416 "ml_tailcall.m"
    }
#line 414 "ml_tailcall.m"
}

#line 379 "ml_tailcall.m"
static MR_Word MR_CALL 
ml_backend__ml_tailcall__lval_is_local_1_f_0(
#line 379 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Lval_3)
#line 379 "ml_tailcall.m"
{
#line 383 "ml_tailcall.m"
  while (MR_TRUE)
#line 383 "ml_tailcall.m"
    {
#line 383 "ml_tailcall.m"
      /* tailcall optimized into a loop */
#line 383 "ml_tailcall.m"
      {
#line 383 "ml_tailcall.m"
        MR_bool ml_backend__ml_tailcall__succeeded;
#line 383 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__IsLocal_4;

#line 383 "ml_tailcall.m"
#line 383 "ml_tailcall.m"
        switch (MR_tag((MR_Word) ml_backend__ml_tailcall__Lval_3)) {
#line 383 "ml_tailcall.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 383 "ml_tailcall.m"
          case (MR_Integer) 0:
#line 388 "ml_tailcall.m"
            {
#line 388 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_3, (MR_Integer) 1)));
#line 388 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall___Tag_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_3, (MR_Integer) 0)));
#line 388 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall___Field_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_3, (MR_Integer) 2)));
#line 388 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_3, (MR_Integer) 3)));
#line 388 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_3, (MR_Integer) 4)));
#line 392 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__BaseLval_12;

#line 390 "ml_tailcall.m"
              ml_backend__ml_tailcall__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_tailcall__Rval_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 390 "ml_tailcall.m"
              if (ml_backend__ml_tailcall__succeeded)
#line 390 "ml_tailcall.m"
                {
#line 390 "ml_tailcall.m"
                  ml_backend__ml_tailcall__BaseLval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_8, (MR_Integer) 1)));
#line 391 "ml_tailcall.m"
                  /* direct tailcall eliminated */
#line 391 "ml_tailcall.m"
                  {
#line 391 "ml_tailcall.m"
                    MR_Word ml_backend__ml_tailcall__Lval__tmp_copy_3 = ml_backend__ml_tailcall__BaseLval_12;

#line 391 "ml_tailcall.m"
                    ml_backend__ml_tailcall__Lval_3 = ml_backend__ml_tailcall__Lval__tmp_copy_3;
#line 391 "ml_tailcall.m"
                  }
#line 391 "ml_tailcall.m"
                  continue;
#line 390 "ml_tailcall.m"
                }
#line 390 "ml_tailcall.m"
              else
#line 393 "ml_tailcall.m"
                ml_backend__ml_tailcall__IsLocal_4 = (MR_Integer) 1;
#line 388 "ml_tailcall.m"
            }
#line 383 "ml_tailcall.m"
            break;
#line 383 "ml_tailcall.m"
          case (MR_Integer) 1:
#line 383 "ml_tailcall.m"
          case (MR_Integer) 2:
#line 399 "ml_tailcall.m"
            ml_backend__ml_tailcall__IsLocal_4 = (MR_Integer) 1;
#line 383 "ml_tailcall.m"
            break;
#line 383 "ml_tailcall.m"
          case (MR_Integer) 3:
#line 386 "ml_tailcall.m"
            ml_backend__ml_tailcall__IsLocal_4 = (MR_Integer) 0;
#line 383 "ml_tailcall.m"
            break;
#line 383 "ml_tailcall.m"
        }
#line 383 "ml_tailcall.m"
        return ml_backend__ml_tailcall__IsLocal_4;
#line 383 "ml_tailcall.m"
      }
#line 383 "ml_tailcall.m"
      break;
#line 383 "ml_tailcall.m"
    }
#line 379 "ml_tailcall.m"
}

#line 363 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall__match_return_vals_2_p_0(
#line 363 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
#line 363 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2)
#line 363 "ml_tailcall.m"
{
#line 365 "ml_tailcall.m"
  while (MR_TRUE)
#line 365 "ml_tailcall.m"
    {
#line 365 "ml_tailcall.m"
      /* tailcall optimized into a loop */
#line 365 "ml_tailcall.m"
      {
#line 365 "ml_tailcall.m"
        MR_bool ml_backend__ml_tailcall__succeeded;

#line 365 "ml_tailcall.m"
        if ((ml_backend__ml_tailcall__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 365 "ml_tailcall.m"
          ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 365 "ml_tailcall.m"
        else
#line 366 "ml_tailcall.m"
          {
#line 366 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__Rval_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 0)));
#line 366 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__Rvals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 1)));
#line 366 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__Lval_5;
#line 366 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__Lvals_6;
#line 366 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__V_8_8;
#line 366 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__V_9_9;

#line 366 "ml_tailcall.m"
            ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 366 "ml_tailcall.m"
            if (ml_backend__ml_tailcall__succeeded)
#line 366 "ml_tailcall.m"
              {
#line 366 "ml_tailcall.m"
                ml_backend__ml_tailcall__Lval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
#line 366 "ml_tailcall.m"
                ml_backend__ml_tailcall__Lvals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 1)));
#line 372 "ml_tailcall.m"
                ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__Rval_3)) == (MR_mktag((MR_Integer) 1)));
#line 372 "ml_tailcall.m"
                if (ml_backend__ml_tailcall__succeeded)
#line 372 "ml_tailcall.m"
                  {
#line 372 "ml_tailcall.m"
                    ml_backend__ml_tailcall__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Rval_3, (MR_Integer) 0)));
#line 372 "ml_tailcall.m"
                    {
#line 372 "ml_tailcall.m"
                      ml_backend__ml_tailcall__succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(ml_backend__ml_tailcall__Lval_5, ml_backend__ml_tailcall__V_9_9);
                    }
#line 366 "ml_tailcall.m"
                    if (ml_backend__ml_tailcall__succeeded)
#line 366 "ml_tailcall.m"
                      {
#line 373 "ml_tailcall.m"
                        {
#line 373 "ml_tailcall.m"
                          ml_backend__ml_tailcall__V_8_8 = ml_backend__ml_tailcall__lval_is_local_1_f_0(ml_backend__ml_tailcall__Lval_5);
                        }
#line 373 "ml_tailcall.m"
                        ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_8_8 == (MR_Integer) 0);
#line 366 "ml_tailcall.m"
                        if (ml_backend__ml_tailcall__succeeded)
#line 368 "ml_tailcall.m"
                          {
#line 368 "ml_tailcall.m"
                            /* direct tailcall eliminated */
#line 368 "ml_tailcall.m"
                            {
#line 368 "ml_tailcall.m"
                              MR_Word ml_backend__ml_tailcall__HeadVar__1__tmp_copy_1 = ml_backend__ml_tailcall__Rvals_4;
#line 368 "ml_tailcall.m"
                              MR_Word ml_backend__ml_tailcall__HeadVar__2__tmp_copy_2 = ml_backend__ml_tailcall__Lvals_6;

#line 368 "ml_tailcall.m"
                              ml_backend__ml_tailcall__HeadVar__2_2 = ml_backend__ml_tailcall__HeadVar__2__tmp_copy_2;
#line 368 "ml_tailcall.m"
                              ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__HeadVar__1__tmp_copy_1;
#line 368 "ml_tailcall.m"
                            }
#line 368 "ml_tailcall.m"
                            continue;
#line 368 "ml_tailcall.m"
                          }
#line 366 "ml_tailcall.m"
                      }
#line 372 "ml_tailcall.m"
                  }
#line 366 "ml_tailcall.m"
              }
#line 366 "ml_tailcall.m"
          }
#line 365 "ml_tailcall.m"
        return ml_backend__ml_tailcall__succeeded;
#line 365 "ml_tailcall.m"
      }
#line 365 "ml_tailcall.m"
      break;
#line 365 "ml_tailcall.m"
    }
#line 363 "ml_tailcall.m"
}

#line 338 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_default_4_p_0(
#line 338 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__AtTail_5,
#line 338 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_6,
#line 338 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Default0_7,
#line 338 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Default_8)
#line 338 "ml_tailcall.m"
{
#line 345 "ml_tailcall.m"
  {
#line 345 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 345 "ml_tailcall.m"
#line 345 "ml_tailcall.m"
    switch (MR_tag((MR_Word) ml_backend__ml_tailcall__Default0_7)) {
#line 345 "ml_tailcall.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 345 "ml_tailcall.m"
      case (MR_Integer) 0:
#line 346 "ml_tailcall.m"
        *ml_backend__ml_tailcall__Default_8 = ml_backend__ml_tailcall__Default0_7;
#line 345 "ml_tailcall.m"
        break;
#line 345 "ml_tailcall.m"
      case (MR_Integer) 1:
#line 348 "ml_tailcall.m"
        {
#line 348 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Statement0_9 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tailcall__Default0_7), (MR_Integer) 1);
#line 348 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Statement_10;
#line 348 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Stmt0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement0_9, (MR_Integer) 0)));
#line 348 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement0_9, (MR_Integer) 1)));
#line 348 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Stmt_17;

#line 233 "ml_tailcall.m"
          {
#line 233 "ml_tailcall.m"
            ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_p_0(ml_backend__ml_tailcall__AtTail_5, ml_backend__ml_tailcall__Locals_6, ml_backend__ml_tailcall__Stmt0_15, &ml_backend__ml_tailcall__Stmt_17);
          }
#line 234 "ml_tailcall.m"
          {
#line 234 "ml_tailcall.m"
            ml_backend__ml_tailcall__Statement_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 234 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement_10, 0) = ((MR_Box) (ml_backend__ml_tailcall__Stmt_17));
#line 234 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement_10, 1) = ((MR_Box) (ml_backend__ml_tailcall__Context_16));
#line 234 "ml_tailcall.m"
          }
#line 350 "ml_tailcall.m"
          *ml_backend__ml_tailcall__Default_8 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_tailcall__Statement_10);
#line 348 "ml_tailcall.m"
        }
#line 345 "ml_tailcall.m"
        break;
#line 345 "ml_tailcall.m"
    }
#line 345 "ml_tailcall.m"
  }
#line 338 "ml_tailcall.m"
}

#line 330 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_case_4_p_0(
#line 330 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__AtTail_5,
#line 330 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_6,
#line 330 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Case0_7,
#line 330 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Case_8)
#line 330 "ml_tailcall.m"
{
#line 333 "ml_tailcall.m"
  {
#line 333 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 333 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__FirstCond_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Case0_7, (MR_Integer) 0)));
#line 333 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__LaterConds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Case0_7, (MR_Integer) 1)));
#line 333 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Statement0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Case0_7, (MR_Integer) 2)));
#line 333 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Statement_12;
#line 333 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Stmt0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement0_11, (MR_Integer) 0)));
#line 333 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement0_11, (MR_Integer) 1)));
#line 333 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Stmt_19;

#line 233 "ml_tailcall.m"
    {
#line 233 "ml_tailcall.m"
      ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_p_0(ml_backend__ml_tailcall__AtTail_5, ml_backend__ml_tailcall__Locals_6, ml_backend__ml_tailcall__Stmt0_17, &ml_backend__ml_tailcall__Stmt_19);
    }
#line 234 "ml_tailcall.m"
    {
#line 234 "ml_tailcall.m"
      ml_backend__ml_tailcall__Statement_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 234 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement_12, 0) = ((MR_Box) (ml_backend__ml_tailcall__Stmt_19));
#line 234 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement_12, 1) = ((MR_Box) (ml_backend__ml_tailcall__Context_18));
#line 234 "ml_tailcall.m"
    }
#line 336 "ml_tailcall.m"
    {
#line 336 "ml_tailcall.m"
      MR_Word base;
#line 336 "ml_tailcall.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 336 "ml_tailcall.m"
      *ml_backend__ml_tailcall__Case_8 = base;
#line 336 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__FirstCond_9));
#line 336 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__LaterConds_10));
#line 336 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Statement_12));
#line 336 "ml_tailcall.m"
    }
#line 333 "ml_tailcall.m"
  }
#line 330 "ml_tailcall.m"
}

#line 322 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_cases_4_p_0(
#line 322 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__AtTail_1,
#line 322 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_2,
#line 322 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3,
#line 322 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__4_4)
#line 322 "ml_tailcall.m"
{
#line 325 "ml_tailcall.m"
  {
#line 325 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 325 "ml_tailcall.m"
    if ((ml_backend__ml_tailcall__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 325 "ml_tailcall.m"
      *ml_backend__ml_tailcall__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 325 "ml_tailcall.m"
    else
#line 326 "ml_tailcall.m"
      {
#line 326 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Case0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 0)));
#line 326 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Cases0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 1)));
#line 326 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Case_11;
#line 326 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Cases_12;

#line 327 "ml_tailcall.m"
        {
#line 327 "ml_tailcall.m"
          ml_backend__ml_tailcall__mark_tailcalls_in_case_4_p_0(ml_backend__ml_tailcall__AtTail_1, ml_backend__ml_tailcall__Locals_2, ml_backend__ml_tailcall__Case0_9, &ml_backend__ml_tailcall__Case_11);
        }
#line 328 "ml_tailcall.m"
        {
#line 328 "ml_tailcall.m"
          ml_backend__ml_tailcall__mark_tailcalls_in_cases_4_p_0(ml_backend__ml_tailcall__AtTail_1, ml_backend__ml_tailcall__Locals_2, ml_backend__ml_tailcall__Cases0_10, &ml_backend__ml_tailcall__Cases_12);
        }
#line 326 "ml_tailcall.m"
        {
#line 326 "ml_tailcall.m"
          MR_Word base;
#line 326 "ml_tailcall.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "ml_tailcall.m"
          *ml_backend__ml_tailcall__HeadVar__4_4 = base;
#line 326 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Case_11));
#line 326 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Cases_12));
#line 326 "ml_tailcall.m"
        }
#line 326 "ml_tailcall.m"
      }
#line 325 "ml_tailcall.m"
  }
#line 322 "ml_tailcall.m"
}

#line 137 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_p_0_1(
#line 137 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__closure_arg,
#line 137 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 137 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_2)
#line 137 "ml_tailcall.m"
{
#line 137 "ml_tailcall.m"
  {
#line 137 "ml_tailcall.m"
    MR_Box ml_backend__ml_tailcall__closure = ml_backend__ml_tailcall__closure_arg;
#line 137 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__conv0_Defn_4;

#line 137 "ml_tailcall.m"
    {
#line 137 "ml_tailcall.m"
      ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_p_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), &ml_backend__ml_tailcall__conv0_Defn_4);
    }
#line 137 "ml_tailcall.m"
    *ml_backend__ml_tailcall__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_tailcall__conv0_Defn_4));
#line 137 "ml_tailcall.m"
  }
#line 137 "ml_tailcall.m"
}

#line 236 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_p_0(
#line 236 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__AtTail_5,
#line 236 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_6,
#line 236 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Stmt0_7,
#line 236 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Stmt_8)
#line 236 "ml_tailcall.m"
{
#line 247 "ml_tailcall.m"
  {
#line 247 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 247 "ml_tailcall.m"
#line 247 "ml_tailcall.m"
    switch (MR_tag((MR_Word) ml_backend__ml_tailcall__Stmt0_7)) {
#line 247 "ml_tailcall.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 247 "ml_tailcall.m"
      case (MR_Integer) 0:
#line 247 "ml_tailcall.m"
        {
#line 247 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__TypeCtorInfo_8_60 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 247 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Defns0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Stmt0_7, (MR_Integer) 0)));
#line 247 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Statements0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Stmt0_7, (MR_Integer) 1)));
#line 247 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Defns_11;
#line 247 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__NewLocals_12;
#line 247 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Statements_13;
#line 247 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__V_52_52;

#line 137 "ml_tailcall.m"
          {
#line 137 "ml_tailcall.m"
            mercury__list__map_3_p_0(ml_backend__ml_tailcall__TypeCtorInfo_8_60, ml_backend__ml_tailcall__TypeCtorInfo_8_60, (MR_Word) &ml_backend__ml_tailcall_scalar_common_3[3], ml_backend__ml_tailcall__Defns0_9, &ml_backend__ml_tailcall__Defns_11);
          }
#line 249 "ml_tailcall.m"
          {
#line 249 "ml_tailcall.m"
            ml_backend__ml_tailcall__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 249 "ml_tailcall.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_52_52, 0) = ((MR_Box) (ml_backend__ml_tailcall__Defns_11));
#line 249 "ml_tailcall.m"
          }
#line 249 "ml_tailcall.m"
          {
#line 249 "ml_tailcall.m"
            ml_backend__ml_tailcall__NewLocals_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "ml_tailcall.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__NewLocals_12, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_52_52));
#line 249 "ml_tailcall.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__NewLocals_12, 1) = ((MR_Box) (ml_backend__ml_tailcall__Locals_6));
#line 249 "ml_tailcall.m"
          }
#line 250 "ml_tailcall.m"
          {
#line 250 "ml_tailcall.m"
            ml_backend__ml_tailcall__mark_tailcalls_in_statements_4_p_0(ml_backend__ml_tailcall__AtTail_5, ml_backend__ml_tailcall__NewLocals_12, ml_backend__ml_tailcall__Statements0_10, &ml_backend__ml_tailcall__Statements_13);
          }
#line 252 "ml_tailcall.m"
          {
#line 252 "ml_tailcall.m"
            MR_Word base;
#line 252 "ml_tailcall.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 252 "ml_tailcall.m"
            *ml_backend__ml_tailcall__Stmt_8 = base;
#line 252 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Defns_11));
#line 252 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Statements_13));
#line 252 "ml_tailcall.m"
          }
#line 247 "ml_tailcall.m"
        }
#line 247 "ml_tailcall.m"
        break;
#line 247 "ml_tailcall.m"
      case (MR_Integer) 1:
#line 256 "ml_tailcall.m"
        {
#line 256 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Kind_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Stmt0_7, (MR_Integer) 0)));
#line 256 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Rval_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Stmt0_7, (MR_Integer) 1)));
#line 256 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Statement0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Stmt0_7, (MR_Integer) 2)));
#line 256 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Statement_17;

#line 257 "ml_tailcall.m"
          {
#line 257 "ml_tailcall.m"
            ml_backend__ml_tailcall__mark_tailcalls_in_statement_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_tailcall__Locals_6, ml_backend__ml_tailcall__Statement0_16, &ml_backend__ml_tailcall__Statement_17);
          }
#line 258 "ml_tailcall.m"
          {
#line 258 "ml_tailcall.m"
            MR_Word base;
#line 258 "ml_tailcall.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 258 "ml_tailcall.m"
            *ml_backend__ml_tailcall__Stmt_8 = base;
#line 258 "ml_tailcall.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Kind_14));
#line 258 "ml_tailcall.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Rval_15));
#line 258 "ml_tailcall.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Statement_17));
#line 258 "ml_tailcall.m"
          }
#line 256 "ml_tailcall.m"
        }
#line 247 "ml_tailcall.m"
        break;
#line 247 "ml_tailcall.m"
      case (MR_Integer) 2:
#line 262 "ml_tailcall.m"
        {
#line 262 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Cond_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__Stmt0_7, (MR_Integer) 0)));
#line 262 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Then0_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__Stmt0_7, (MR_Integer) 1)));
#line 262 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__MaybeElse0_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__Stmt0_7, (MR_Integer) 2)));
#line 262 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Then_21;
#line 262 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__MaybeElse_22;
#line 262 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Stmt0_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Then0_19, (MR_Integer) 0)));
#line 262 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Context_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Then0_19, (MR_Integer) 1)));
#line 262 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Stmt_70;

#line 233 "ml_tailcall.m"
          {
#line 233 "ml_tailcall.m"
            ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_p_0(ml_backend__ml_tailcall__AtTail_5, ml_backend__ml_tailcall__Locals_6, ml_backend__ml_tailcall__Stmt0_68, &ml_backend__ml_tailcall__Stmt_70);
          }
#line 234 "ml_tailcall.m"
          {
#line 234 "ml_tailcall.m"
            ml_backend__ml_tailcall__Then_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 234 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Then_21, 0) = ((MR_Box) (ml_backend__ml_tailcall__Stmt_70));
#line 234 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Then_21, 1) = ((MR_Box) (ml_backend__ml_tailcall__Context_69));
#line 234 "ml_tailcall.m"
          }
#line 194 "ml_tailcall.m"
          if ((ml_backend__ml_tailcall__MaybeElse0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 195 "ml_tailcall.m"
            ml_backend__ml_tailcall__MaybeElse_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 194 "ml_tailcall.m"
          else
#line 197 "ml_tailcall.m"
            {
#line 197 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Statement0_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__MaybeElse0_20, (MR_Integer) 0)));
#line 197 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Statement_76;

#line 198 "ml_tailcall.m"
              {
#line 198 "ml_tailcall.m"
                ml_backend__ml_tailcall__mark_tailcalls_in_statement_4_p_0(ml_backend__ml_tailcall__AtTail_5, ml_backend__ml_tailcall__Locals_6, ml_backend__ml_tailcall__Statement0_75, &ml_backend__ml_tailcall__Statement_76);
              }
#line 199 "ml_tailcall.m"
              {
#line 199 "ml_tailcall.m"
                ml_backend__ml_tailcall__MaybeElse_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 199 "ml_tailcall.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__MaybeElse_22, 0) = ((MR_Box) (ml_backend__ml_tailcall__Statement_76));
#line 199 "ml_tailcall.m"
              }
#line 197 "ml_tailcall.m"
            }
#line 266 "ml_tailcall.m"
          {
#line 266 "ml_tailcall.m"
            MR_Word base;
#line 266 "ml_tailcall.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 266 "ml_tailcall.m"
            *ml_backend__ml_tailcall__Stmt_8 = base;
#line 266 "ml_tailcall.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Cond_18));
#line 266 "ml_tailcall.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Then_21));
#line 266 "ml_tailcall.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__MaybeElse_22));
#line 266 "ml_tailcall.m"
          }
#line 262 "ml_tailcall.m"
        }
#line 247 "ml_tailcall.m"
        break;
#line 247 "ml_tailcall.m"
      case (MR_Integer) 3:
#line 247 "ml_tailcall.m"
#line 247 "ml_tailcall.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_7, (MR_Integer) 0)))) {
#line 247 "ml_tailcall.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 247 "ml_tailcall.m"
          case (MR_Integer) 0:
#line 270 "ml_tailcall.m"
            {
#line 270 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_7, (MR_Integer) 1)));
#line 270 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Val_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_7, (MR_Integer) 2)));
#line 270 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Range_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_7, (MR_Integer) 3)));
#line 270 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Cases0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_7, (MR_Integer) 4)));
#line 270 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Default0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_7, (MR_Integer) 5)));
#line 270 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Cases_28;
#line 270 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Default_29;

#line 271 "ml_tailcall.m"
              {
#line 271 "ml_tailcall.m"
                ml_backend__ml_tailcall__mark_tailcalls_in_cases_4_p_0(ml_backend__ml_tailcall__AtTail_5, ml_backend__ml_tailcall__Locals_6, ml_backend__ml_tailcall__Cases0_26, &ml_backend__ml_tailcall__Cases_28);
              }
#line 272 "ml_tailcall.m"
              {
#line 272 "ml_tailcall.m"
                ml_backend__ml_tailcall__mark_tailcalls_in_default_4_p_0(ml_backend__ml_tailcall__AtTail_5, ml_backend__ml_tailcall__Locals_6, ml_backend__ml_tailcall__Default0_27, &ml_backend__ml_tailcall__Default_29);
              }
#line 273 "ml_tailcall.m"
              {
#line 273 "ml_tailcall.m"
                MR_Word base;
#line 273 "ml_tailcall.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 273 "ml_tailcall.m"
                *ml_backend__ml_tailcall__Stmt_8 = base;
#line 273 "ml_tailcall.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 273 "ml_tailcall.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Type_23));
#line 273 "ml_tailcall.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Val_24));
#line 273 "ml_tailcall.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__Range_25));
#line 273 "ml_tailcall.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_tailcall__Cases_28));
#line 273 "ml_tailcall.m"
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_tailcall__Default_29));
#line 273 "ml_tailcall.m"
              }
#line 270 "ml_tailcall.m"
            }
#line 247 "ml_tailcall.m"
            break;
#line 247 "ml_tailcall.m"
          case (MR_Integer) 1:
#line 247 "ml_tailcall.m"
          case (MR_Integer) 2:
#line 247 "ml_tailcall.m"
          case (MR_Integer) 3:
#line 247 "ml_tailcall.m"
          case (MR_Integer) 5:
#line 247 "ml_tailcall.m"
          case (MR_Integer) 7:
#line 247 "ml_tailcall.m"
          case (MR_Integer) 8:
#line 319 "ml_tailcall.m"
            *ml_backend__ml_tailcall__Stmt_8 = ml_backend__ml_tailcall__Stmt0_7;
#line 247 "ml_tailcall.m"
            break;
#line 247 "ml_tailcall.m"
          case (MR_Integer) 4:
#line 275 "ml_tailcall.m"
            {
#line 275 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Sig_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_7, (MR_Integer) 1)));
#line 275 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Func_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_7, (MR_Integer) 2)));
#line 275 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Obj_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_7, (MR_Integer) 3)));
#line 275 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Args_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_7, (MR_Integer) 4)));
#line 275 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__ReturnLvals_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_7, (MR_Integer) 5)));
#line 275 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__CallKind0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_7, (MR_Integer) 6)));
#line 279 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__ReturnRvals_36;
#line 279 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__V_49_49;
#line 279 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__V_50_50;

#line 279 "ml_tailcall.m"
              ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CallKind0_35 == (MR_Integer) 2);
#line 279 "ml_tailcall.m"
              if (ml_backend__ml_tailcall__succeeded)
#line 279 "ml_tailcall.m"
                {
#line 282 "ml_tailcall.m"
                  ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__AtTail_5)) == (MR_mktag((MR_Integer) 1)));
#line 282 "ml_tailcall.m"
                  if (ml_backend__ml_tailcall__succeeded)
#line 282 "ml_tailcall.m"
                    {
#line 282 "ml_tailcall.m"
                      ml_backend__ml_tailcall__ReturnRvals_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__AtTail_5, (MR_Integer) 0)));
#line 286 "ml_tailcall.m"
                      {
#line 286 "ml_tailcall.m"
                        ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall__match_return_vals_2_p_0(ml_backend__ml_tailcall__ReturnRvals_36, ml_backend__ml_tailcall__ReturnLvals_34);
                      }
#line 279 "ml_tailcall.m"
                      if (ml_backend__ml_tailcall__succeeded)
#line 279 "ml_tailcall.m"
                        {
#line 427 "ml_tailcall.m"
                          if ((ml_backend__ml_tailcall__Obj_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 427 "ml_tailcall.m"
                            ml_backend__ml_tailcall__succeeded = MR_TRUE;
#line 427 "ml_tailcall.m"
                          else
#line 428 "ml_tailcall.m"
                            {
#line 428 "ml_tailcall.m"
                              MR_Word ml_backend__ml_tailcall__Rval_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Obj_32, (MR_Integer) 0)));
#line 428 "ml_tailcall.m"
                              MR_Word ml_backend__ml_tailcall__V_92_92;

#line 428 "ml_tailcall.m"
                              {
#line 428 "ml_tailcall.m"
                                ml_backend__ml_tailcall__V_92_92 = ml_backend__ml_tailcall__check_rval_2_f_0(ml_backend__ml_tailcall__Rval_62, ml_backend__ml_tailcall__Locals_6);
                              }
#line 290 "ml_tailcall.m"
                              ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_92_92 == (MR_Integer) 1);
#line 428 "ml_tailcall.m"
                            }
#line 279 "ml_tailcall.m"
                          if (ml_backend__ml_tailcall__succeeded)
#line 279 "ml_tailcall.m"
                            {
#line 291 "ml_tailcall.m"
                              {
#line 291 "ml_tailcall.m"
                                ml_backend__ml_tailcall__V_49_49 = ml_backend__ml_tailcall__check_rvals_2_f_0(ml_backend__ml_tailcall__Args_33, ml_backend__ml_tailcall__Locals_6);
                              }
#line 291 "ml_tailcall.m"
                              ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_49_49 == (MR_Integer) 1);
#line 279 "ml_tailcall.m"
                              if (ml_backend__ml_tailcall__succeeded)
#line 279 "ml_tailcall.m"
                                {
#line 294 "ml_tailcall.m"
                                  {
#line 294 "ml_tailcall.m"
                                    ml_backend__ml_tailcall__V_50_50 = ml_backend__ml_tailcall__check_rval_2_f_0(ml_backend__ml_tailcall__Func_31, ml_backend__ml_tailcall__Locals_6);
                                  }
#line 294 "ml_tailcall.m"
                                  ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_50_50 == (MR_Integer) 1);
#line 279 "ml_tailcall.m"
                                }
#line 279 "ml_tailcall.m"
                            }
#line 279 "ml_tailcall.m"
                        }
#line 282 "ml_tailcall.m"
                    }
#line 279 "ml_tailcall.m"
                }
#line 299 "ml_tailcall.m"
              if (ml_backend__ml_tailcall__succeeded)
#line 297 "ml_tailcall.m"
                {
#line 298 "ml_tailcall.m"
                  {
#line 298 "ml_tailcall.m"
                    MR_Word base;
#line 298 "ml_tailcall.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 298 "ml_tailcall.m"
                    *ml_backend__ml_tailcall__Stmt_8 = base;
#line 298 "ml_tailcall.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 298 "ml_tailcall.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Sig_30));
#line 298 "ml_tailcall.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Func_31));
#line 298 "ml_tailcall.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__Obj_32));
#line 298 "ml_tailcall.m"
                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_tailcall__Args_33));
#line 298 "ml_tailcall.m"
                    MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_tailcall__ReturnLvals_34));
#line 298 "ml_tailcall.m"
                    MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) ((MR_Integer) 1));
#line 298 "ml_tailcall.m"
                  }
#line 297 "ml_tailcall.m"
                }
#line 299 "ml_tailcall.m"
              else
#line 301 "ml_tailcall.m"
                *ml_backend__ml_tailcall__Stmt_8 = ml_backend__ml_tailcall__Stmt0_7;
#line 275 "ml_tailcall.m"
            }
#line 247 "ml_tailcall.m"
            break;
#line 247 "ml_tailcall.m"
          case (MR_Integer) 6:
#line 304 "ml_tailcall.m"
            {
#line 304 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Ref_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_7, (MR_Integer) 1)));
#line 304 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Handler0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_7, (MR_Integer) 3)));
#line 304 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Handler_40;
#line 304 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Statement0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_7, (MR_Integer) 2)));
#line 304 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Statement_54;
#line 304 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Stmt0_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement0_53, (MR_Integer) 0)));
#line 304 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Context_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement0_53, (MR_Integer) 1)));
#line 304 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Stmt_83;
#line 304 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Stmt0_88;
#line 304 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Context_89;
#line 304 "ml_tailcall.m"
              MR_Word ml_backend__ml_tailcall__Stmt_90;

#line 233 "ml_tailcall.m"
              {
#line 233 "ml_tailcall.m"
                ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_p_0(ml_backend__ml_tailcall__AtTail_5, ml_backend__ml_tailcall__Locals_6, ml_backend__ml_tailcall__Stmt0_81, &ml_backend__ml_tailcall__Stmt_83);
              }
#line 234 "ml_tailcall.m"
              {
#line 234 "ml_tailcall.m"
                ml_backend__ml_tailcall__Statement_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 234 "ml_tailcall.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement_54, 0) = ((MR_Box) (ml_backend__ml_tailcall__Stmt_83));
#line 234 "ml_tailcall.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement_54, 1) = ((MR_Box) (ml_backend__ml_tailcall__Context_82));
#line 234 "ml_tailcall.m"
              }
#line 232 "ml_tailcall.m"
              ml_backend__ml_tailcall__Stmt0_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Handler0_39, (MR_Integer) 0)));
#line 232 "ml_tailcall.m"
              ml_backend__ml_tailcall__Context_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Handler0_39, (MR_Integer) 1)));
#line 233 "ml_tailcall.m"
              {
#line 233 "ml_tailcall.m"
                ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_p_0(ml_backend__ml_tailcall__AtTail_5, ml_backend__ml_tailcall__Locals_6, ml_backend__ml_tailcall__Stmt0_88, &ml_backend__ml_tailcall__Stmt_90);
              }
#line 234 "ml_tailcall.m"
              {
#line 234 "ml_tailcall.m"
                ml_backend__ml_tailcall__Handler_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 234 "ml_tailcall.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Handler_40, 0) = ((MR_Box) (ml_backend__ml_tailcall__Stmt_90));
#line 234 "ml_tailcall.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Handler_40, 1) = ((MR_Box) (ml_backend__ml_tailcall__Context_89));
#line 234 "ml_tailcall.m"
              }
#line 310 "ml_tailcall.m"
              {
#line 310 "ml_tailcall.m"
                MR_Word base;
#line 310 "ml_tailcall.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 310 "ml_tailcall.m"
                *ml_backend__ml_tailcall__Stmt_8 = base;
#line 310 "ml_tailcall.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 310 "ml_tailcall.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Ref_38));
#line 310 "ml_tailcall.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Statement_54));
#line 310 "ml_tailcall.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__Handler_40));
#line 310 "ml_tailcall.m"
              }
#line 304 "ml_tailcall.m"
            }
#line 247 "ml_tailcall.m"
            break;
#line 247 "ml_tailcall.m"
        }
#line 247 "ml_tailcall.m"
        break;
#line 247 "ml_tailcall.m"
    }
#line 247 "ml_tailcall.m"
  }
#line 236 "ml_tailcall.m"
}

#line 228 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_statement_4_p_0(
#line 228 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__AtTail_5,
#line 228 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_6,
#line 228 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Statement0_7,
#line 228 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Statement_8)
#line 228 "ml_tailcall.m"
{
#line 231 "ml_tailcall.m"
  {
#line 231 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 231 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Stmt0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement0_7, (MR_Integer) 0)));
#line 231 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement0_7, (MR_Integer) 1)));
#line 231 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Stmt_11;

#line 233 "ml_tailcall.m"
    {
#line 233 "ml_tailcall.m"
      ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_p_0(ml_backend__ml_tailcall__AtTail_5, ml_backend__ml_tailcall__Locals_6, ml_backend__ml_tailcall__Stmt0_9, &ml_backend__ml_tailcall__Stmt_11);
    }
#line 234 "ml_tailcall.m"
    {
#line 234 "ml_tailcall.m"
      MR_Word base;
#line 234 "ml_tailcall.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 234 "ml_tailcall.m"
      *ml_backend__ml_tailcall__Statement_8 = base;
#line 234 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Stmt_11));
#line 234 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Context_10));
#line 234 "ml_tailcall.m"
    }
#line 231 "ml_tailcall.m"
  }
#line 228 "ml_tailcall.m"
}

#line 202 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_statements_4_p_0(
#line 202 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__AtTail_1,
#line 202 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_2,
#line 202 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3,
#line 202 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__4_4)
#line 202 "ml_tailcall.m"
{
#line 205 "ml_tailcall.m"
  {
#line 205 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 205 "ml_tailcall.m"
    if ((ml_backend__ml_tailcall__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 205 "ml_tailcall.m"
      *ml_backend__ml_tailcall__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 205 "ml_tailcall.m"
    else
#line 207 "ml_tailcall.m"
      {
#line 207 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__First0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 0)));
#line 207 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Rest0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 1)));
#line 207 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__First_11;
#line 207 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Rest_12;
#line 207 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__FirstAtTail_13;

#line 214 "ml_tailcall.m"
        {
#line 214 "ml_tailcall.m"
          ml_backend__ml_tailcall__mark_tailcalls_in_statements_4_p_0(ml_backend__ml_tailcall__AtTail_1, ml_backend__ml_tailcall__Locals_2, ml_backend__ml_tailcall__Rest0_10, &ml_backend__ml_tailcall__Rest_12);
        }
#line 218 "ml_tailcall.m"
        if ((ml_backend__ml_tailcall__Rest_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 217 "ml_tailcall.m"
          ml_backend__ml_tailcall__FirstAtTail_13 = ml_backend__ml_tailcall__AtTail_1;
#line 218 "ml_tailcall.m"
        else
#line 219 "ml_tailcall.m"
          {
#line 219 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__FirstRest_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Rest_12, (MR_Integer) 0)));
#line 219 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Rest_12, (MR_Integer) 1)));
#line 222 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__ReturnVals_16;
#line 220 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__FirstRest_14, (MR_Integer) 0)));
#line 220 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__FirstRest_14, (MR_Integer) 1)));

#line 220 "ml_tailcall.m"
            ml_backend__ml_tailcall__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_tailcall__V_18_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__V_18_18, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 220 "ml_tailcall.m"
            if (ml_backend__ml_tailcall__succeeded)
#line 220 "ml_tailcall.m"
              {
#line 220 "ml_tailcall.m"
                ml_backend__ml_tailcall__ReturnVals_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__V_18_18, (MR_Integer) 1)));
#line 221 "ml_tailcall.m"
                {
#line 221 "ml_tailcall.m"
                  ml_backend__ml_tailcall__FirstAtTail_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 221 "ml_tailcall.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__FirstAtTail_13, 0) = ((MR_Box) (ml_backend__ml_tailcall__ReturnVals_16));
#line 221 "ml_tailcall.m"
                }
#line 220 "ml_tailcall.m"
              }
#line 220 "ml_tailcall.m"
            else
#line 223 "ml_tailcall.m"
              ml_backend__ml_tailcall__FirstAtTail_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 219 "ml_tailcall.m"
          }
#line 226 "ml_tailcall.m"
        {
#line 226 "ml_tailcall.m"
          ml_backend__ml_tailcall__mark_tailcalls_in_statement_4_p_0(ml_backend__ml_tailcall__FirstAtTail_13, ml_backend__ml_tailcall__Locals_2, ml_backend__ml_tailcall__First0_9, &ml_backend__ml_tailcall__First_11);
        }
#line 207 "ml_tailcall.m"
        {
#line 207 "ml_tailcall.m"
          MR_Word base;
#line 207 "ml_tailcall.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 207 "ml_tailcall.m"
          *ml_backend__ml_tailcall__HeadVar__4_4 = base;
#line 207 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__First_11));
#line 207 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Rest_12));
#line 207 "ml_tailcall.m"
        }
#line 207 "ml_tailcall.m"
      }
#line 205 "ml_tailcall.m"
  }
#line 202 "ml_tailcall.m"
}

#line 175 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_function_body_4_p_0(
#line 175 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__AtTail_5,
#line 175 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_6,
#line 175 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Body0_7,
#line 175 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Body_8)
#line 175 "ml_tailcall.m"
{
#line 180 "ml_tailcall.m"
  {
#line 180 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 180 "ml_tailcall.m"
    if ((ml_backend__ml_tailcall__Body0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 181 "ml_tailcall.m"
      *ml_backend__ml_tailcall__Body_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 180 "ml_tailcall.m"
    else
#line 183 "ml_tailcall.m"
      {
#line 183 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Statement0_9 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tailcall__Body0_7), (MR_Integer) 1);
#line 183 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Statement_10;

#line 184 "ml_tailcall.m"
        {
#line 184 "ml_tailcall.m"
          ml_backend__ml_tailcall__mark_tailcalls_in_statement_4_p_0(ml_backend__ml_tailcall__AtTail_5, ml_backend__ml_tailcall__Locals_6, ml_backend__ml_tailcall__Statement0_9, &ml_backend__ml_tailcall__Statement_10);
        }
#line 185 "ml_tailcall.m"
        *ml_backend__ml_tailcall__Body_8 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_tailcall__Statement_10);
#line 183 "ml_tailcall.m"
      }
#line 180 "ml_tailcall.m"
  }
#line 175 "ml_tailcall.m"
}

#line 137 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_p_0_2(
#line 137 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__closure_arg,
#line 137 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 137 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_2)
#line 137 "ml_tailcall.m"
{
#line 137 "ml_tailcall.m"
  {
#line 137 "ml_tailcall.m"
    MR_Box ml_backend__ml_tailcall__closure = ml_backend__ml_tailcall__closure_arg;
#line 137 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__conv1_Defn_4;

#line 137 "ml_tailcall.m"
    {
#line 137 "ml_tailcall.m"
      ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_p_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), &ml_backend__ml_tailcall__conv1_Defn_4);
    }
#line 137 "ml_tailcall.m"
    *ml_backend__ml_tailcall__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_tailcall__conv1_Defn_4));
#line 137 "ml_tailcall.m"
  }
#line 137 "ml_tailcall.m"
}

#line 137 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_p_0_1(
#line 137 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__closure_arg,
#line 137 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 137 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_2)
#line 137 "ml_tailcall.m"
{
#line 137 "ml_tailcall.m"
  {
#line 137 "ml_tailcall.m"
    MR_Box ml_backend__ml_tailcall__closure = ml_backend__ml_tailcall__closure_arg;
#line 137 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__conv0_Defn_4;

#line 137 "ml_tailcall.m"
    {
#line 137 "ml_tailcall.m"
      ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_p_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), &ml_backend__ml_tailcall__conv0_Defn_4);
    }
#line 137 "ml_tailcall.m"
    *ml_backend__ml_tailcall__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_tailcall__conv0_Defn_4));
#line 137 "ml_tailcall.m"
  }
#line 137 "ml_tailcall.m"
}

#line 139 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_p_0(
#line 139 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Defn0_3,
#line 139 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Defn_4)
#line 139 "ml_tailcall.m"
{
#line 141 "ml_tailcall.m"
  {
#line 141 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 141 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Defn0_3, (MR_Integer) 0)));
#line 141 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Defn0_3, (MR_Integer) 1)));
#line 141 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Flags_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Defn0_3, (MR_Integer) 2)));
#line 141 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__DefnBody0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Defn0_3, (MR_Integer) 3)));

#line 160 "ml_tailcall.m"
#line 160 "ml_tailcall.m"
    switch (MR_tag((MR_Word) ml_backend__ml_tailcall__DefnBody0_8)) {
#line 160 "ml_tailcall.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 160 "ml_tailcall.m"
      case (MR_Integer) 0:
#line 164 "ml_tailcall.m"
        {
#line 164 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__TypeCtorInfo_8_45 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 164 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__TypeCtorInfo_8_51;
#line 164 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__ClassDefn0_25 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tailcall__DefnBody0_8), (MR_Integer) 0);
#line 164 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Kind_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn0_25, (MR_Integer) 0)));
#line 164 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Imports_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn0_25, (MR_Integer) 1)));
#line 164 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__BaseClasses_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn0_25, (MR_Integer) 2)));
#line 164 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Implements_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn0_25, (MR_Integer) 3)));
#line 164 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__TypeParams_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn0_25, (MR_Integer) 4)));
#line 164 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__CtorDefns0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn0_25, (MR_Integer) 5)));
#line 164 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__MemberDefns0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn0_25, (MR_Integer) 6)));
#line 164 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__CtorDefns_33;
#line 164 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__MemberDefns_34;
#line 164 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__ClassDefn_35;
#line 164 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__DefnBody_39;

#line 137 "ml_tailcall.m"
          {
#line 137 "ml_tailcall.m"
            mercury__list__map_3_p_0(ml_backend__ml_tailcall__TypeCtorInfo_8_45, ml_backend__ml_tailcall__TypeCtorInfo_8_45, (MR_Word) &ml_backend__ml_tailcall_scalar_common_3[1], ml_backend__ml_tailcall__CtorDefns0_31, &ml_backend__ml_tailcall__CtorDefns_33);
          }
#line 6203 "ml_backend.ml_tailcall.c"
          ml_backend__ml_tailcall__TypeCtorInfo_8_51 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 137 "ml_tailcall.m"
          {
#line 137 "ml_tailcall.m"
            mercury__list__map_3_p_0(ml_backend__ml_tailcall__TypeCtorInfo_8_51, ml_backend__ml_tailcall__TypeCtorInfo_8_51, (MR_Word) &ml_backend__ml_tailcall_scalar_common_3[2], ml_backend__ml_tailcall__MemberDefns0_32, &ml_backend__ml_tailcall__MemberDefns_34);
          }
#line 169 "ml_tailcall.m"
          {
#line 169 "ml_tailcall.m"
            ml_backend__ml_tailcall__ClassDefn_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 169 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_35, 0) = ((MR_Box) (ml_backend__ml_tailcall__Kind_26));
#line 169 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_35, 1) = ((MR_Box) (ml_backend__ml_tailcall__Imports_27));
#line 169 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_35, 2) = ((MR_Box) (ml_backend__ml_tailcall__BaseClasses_28));
#line 169 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_35, 3) = ((MR_Box) (ml_backend__ml_tailcall__Implements_29));
#line 169 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_35, 4) = ((MR_Box) (ml_backend__ml_tailcall__TypeParams_30));
#line 169 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_35, 5) = ((MR_Box) (ml_backend__ml_tailcall__CtorDefns_33));
#line 169 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_35, 6) = ((MR_Box) (ml_backend__ml_tailcall__MemberDefns_34));
#line 169 "ml_tailcall.m"
          }
#line 171 "ml_tailcall.m"
          ml_backend__ml_tailcall__DefnBody_39 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_tailcall__ClassDefn_35);
#line 172 "ml_tailcall.m"
          {
#line 172 "ml_tailcall.m"
            MR_Word base;
#line 172 "ml_tailcall.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 172 "ml_tailcall.m"
            *ml_backend__ml_tailcall__Defn_4 = base;
#line 172 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Name_5));
#line 172 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Context_6));
#line 172 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Flags_7));
#line 172 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__DefnBody_39));
#line 172 "ml_tailcall.m"
          }
#line 164 "ml_tailcall.m"
        }
#line 160 "ml_tailcall.m"
        break;
#line 160 "ml_tailcall.m"
      case (MR_Integer) 1:
#line 162 "ml_tailcall.m"
        *ml_backend__ml_tailcall__Defn_4 = ml_backend__ml_tailcall__Defn0_3;
#line 160 "ml_tailcall.m"
        break;
#line 160 "ml_tailcall.m"
      case (MR_Integer) 2:
#line 145 "ml_tailcall.m"
        {
#line 145 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__PredProcId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody0_8, (MR_Integer) 0)));
#line 145 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Params_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody0_8, (MR_Integer) 1)));
#line 145 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__FuncBody0_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody0_8, (MR_Integer) 2)));
#line 145 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Attributes_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody0_8, (MR_Integer) 3)));
#line 145 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__EnvVarNames_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody0_8, (MR_Integer) 4)));
#line 145 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Params_10, (MR_Integer) 0)));
#line 145 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__RetTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Params_10, (MR_Integer) 1)));
#line 145 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__Locals_16;
#line 145 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__AtTail_17;
#line 145 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__FuncBody_20;
#line 145 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__DefnBody_21;
#line 145 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__V_36_36;

#line 148 "ml_tailcall.m"
          {
#line 148 "ml_tailcall.m"
            ml_backend__ml_tailcall__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 148 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_36_36, 0) = ((MR_Box) (ml_backend__ml_tailcall__Args_14));
#line 148 "ml_tailcall.m"
          }
#line 148 "ml_tailcall.m"
          {
#line 148 "ml_tailcall.m"
            ml_backend__ml_tailcall__Locals_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "ml_tailcall.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Locals_16, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_36_36));
#line 148 "ml_tailcall.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Locals_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 148 "ml_tailcall.m"
          }
#line 152 "ml_tailcall.m"
          if ((ml_backend__ml_tailcall__RetTypes_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 150 "ml_tailcall.m"
            {
#line 151 "ml_tailcall.m"
              ml_backend__ml_tailcall__AtTail_17 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_tailcall_scalar_common_5[0]);
#line 150 "ml_tailcall.m"
            }
#line 152 "ml_tailcall.m"
          else
#line 154 "ml_tailcall.m"
            ml_backend__ml_tailcall__AtTail_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 156 "ml_tailcall.m"
          {
#line 156 "ml_tailcall.m"
            ml_backend__ml_tailcall__mark_tailcalls_in_function_body_4_p_0(ml_backend__ml_tailcall__AtTail_17, ml_backend__ml_tailcall__Locals_16, ml_backend__ml_tailcall__FuncBody0_11, &ml_backend__ml_tailcall__FuncBody_20);
          }
#line 157 "ml_tailcall.m"
          {
#line 157 "ml_tailcall.m"
            ml_backend__ml_tailcall__DefnBody_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 157 "ml_tailcall.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_21, 0) = ((MR_Box) (ml_backend__ml_tailcall__PredProcId_9));
#line 157 "ml_tailcall.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_21, 1) = ((MR_Box) (ml_backend__ml_tailcall__Params_10));
#line 157 "ml_tailcall.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_21, 2) = ((MR_Box) (ml_backend__ml_tailcall__FuncBody_20));
#line 157 "ml_tailcall.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_21, 3) = ((MR_Box) (ml_backend__ml_tailcall__Attributes_12));
#line 157 "ml_tailcall.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_21, 4) = ((MR_Box) (ml_backend__ml_tailcall__EnvVarNames_13));
#line 157 "ml_tailcall.m"
          }
#line 159 "ml_tailcall.m"
          {
#line 159 "ml_tailcall.m"
            MR_Word base;
#line 159 "ml_tailcall.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 159 "ml_tailcall.m"
            *ml_backend__ml_tailcall__Defn_4 = base;
#line 159 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Name_5));
#line 159 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Context_6));
#line 159 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Flags_7));
#line 159 "ml_tailcall.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__DefnBody_21));
#line 159 "ml_tailcall.m"
          }
#line 145 "ml_tailcall.m"
        }
#line 160 "ml_tailcall.m"
        break;
#line 160 "ml_tailcall.m"
    }
#line 141 "ml_tailcall.m"
  }
#line 139 "ml_tailcall.m"
}

#line 602 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_3(
#line 602 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__closure_arg,
#line 602 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 602 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 602 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_3)
#line 602 "ml_tailcall.m"
{
#line 602 "ml_tailcall.m"
  {
#line 602 "ml_tailcall.m"
    MR_Box ml_backend__ml_tailcall__closure = ml_backend__ml_tailcall__closure_arg;

#line 602 "ml_tailcall.m"
    {
#line 602 "ml_tailcall.m"
      ml_backend__ml_tailcall__report_nontailcall_warning_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1));
#line 602 "ml_tailcall.m"
      return;
    }
#line 602 "ml_tailcall.m"
  }
#line 602 "ml_tailcall.m"
}

#line 601 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_1(
#line 601 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 601 "ml_tailcall.m"
{
#line 601 "ml_tailcall.m"
  {
#line 601 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 601 "ml_tailcall.m"
    *((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0__conv0_Warning_4));
#line 601 "ml_tailcall.m"
    {
#line 601 "ml_tailcall.m"
      ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0__cont)((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0__cont_env_ptr);
#line 601 "ml_tailcall.m"
      return;
    }
#line 601 "ml_tailcall.m"
  }
#line 601 "ml_tailcall.m"
}

#line 601 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2(
#line 601 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__closure_arg,
#line 601 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 601 "ml_tailcall.m"
  MR_Cont ml_backend__ml_tailcall__cont,
#line 601 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__cont_env_ptr)
#line 601 "ml_tailcall.m"
{
#line 601 "ml_tailcall.m"
  {
#line 601 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0_s ml_backend__ml_tailcall__env;

#line 601 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0__wrapper_arg_1 = ml_backend__ml_tailcall__wrapper_arg_1;
#line 601 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0__cont = ml_backend__ml_tailcall__cont;
#line 601 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0__cont_env_ptr = ml_backend__ml_tailcall__cont_env_ptr;
#line 601 "ml_tailcall.m"
    {
#line 601 "ml_tailcall.m"
      MR_Box ml_backend__ml_tailcall__closure = ml_backend__ml_tailcall__closure_arg;

#line 601 "ml_tailcall.m"
      {
#line 601 "ml_tailcall.m"
        ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 3))), &(ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0__conv0_Warning_4, ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_1, &ml_backend__ml_tailcall__env);
      }
#line 601 "ml_tailcall.m"
    }
#line 601 "ml_tailcall.m"
  }
#line 601 "ml_tailcall.m"
}

#line 73 "ml_tailcall.m"
void MR_CALL 
ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0(
#line 73 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Globals_5,
#line 73 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__MLDS_6)
#line 73 "ml_tailcall.m"
{
#line 600 "ml_tailcall.m"
  {
#line 600 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 600 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__TypeCtorInfo_15_15;
#line 600 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Warnings_8;
#line 600 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_11_11;
#line 600 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_12_12;
#line 602 "ml_tailcall.m"
    MR_Box ml_backend__ml_tailcall__conv1_STATE_VARIABLE_IO_10;

#line 601 "ml_tailcall.m"
    {
#line 601 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 601 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_11_11, 0) = ((MR_Box) (&ml_backend__ml_tailcall_scalar_common_2[1]));
#line 601 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_11_11, 1) = ((MR_Box) (ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2));
#line 601 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 601 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_11_11, 3) = ((MR_Box) (ml_backend__ml_tailcall__MLDS_6));
#line 601 "ml_tailcall.m"
    }
#line 6504 "ml_backend.ml_tailcall.c"
    ml_backend__ml_tailcall__TypeCtorInfo_15_15 = (MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_tailcall_warning_0;
#line 601 "ml_tailcall.m"
    {
#line 601 "ml_tailcall.m"
      mercury__solutions__solutions_2_p_1(ml_backend__ml_tailcall__TypeCtorInfo_15_15, ml_backend__ml_tailcall__V_11_11, &ml_backend__ml_tailcall__Warnings_8);
    }
#line 602 "ml_tailcall.m"
    {
#line 602 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 602 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_12_12, 0) = ((MR_Box) (&ml_backend__ml_tailcall_scalar_common_4[0]));
#line 602 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_12_12, 1) = ((MR_Box) (ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_3));
#line 602 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 602 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_12_12, 3) = ((MR_Box) (ml_backend__ml_tailcall__Globals_5));
#line 602 "ml_tailcall.m"
    }
#line 602 "ml_tailcall.m"
    {
#line 602 "ml_tailcall.m"
      mercury__list__foldl_4_p_2(ml_backend__ml_tailcall__TypeCtorInfo_15_15, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__ml_tailcall__V_12_12, ml_backend__ml_tailcall__Warnings_8, ((MR_Box) ((MR_Integer) 0)), &ml_backend__ml_tailcall__conv1_STATE_VARIABLE_IO_10);
    }
#line 600 "ml_tailcall.m"
  }
#line 73 "ml_tailcall.m"
}

#line 137 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__ml_mark_tailcalls_4_p_0_1(
#line 137 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__closure_arg,
#line 137 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 137 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_2)
#line 137 "ml_tailcall.m"
{
#line 137 "ml_tailcall.m"
  {
#line 137 "ml_tailcall.m"
    MR_Box ml_backend__ml_tailcall__closure = ml_backend__ml_tailcall__closure_arg;
#line 137 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__conv0_Defn_4;

#line 137 "ml_tailcall.m"
    {
#line 137 "ml_tailcall.m"
      ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_p_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), &ml_backend__ml_tailcall__conv0_Defn_4);
    }
#line 137 "ml_tailcall.m"
    *ml_backend__ml_tailcall__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_tailcall__conv0_Defn_4));
#line 137 "ml_tailcall.m"
  }
#line 137 "ml_tailcall.m"
}

#line 68 "ml_tailcall.m"
void MR_CALL 
ml_backend__ml_tailcall__ml_mark_tailcalls_4_p_0(
#line 68 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_9,
#line 68 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_10)
#line 68 "ml_tailcall.m"
{
#line 93 "ml_tailcall.m"
  {
#line 93 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 93 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__TypeCtorInfo_8_34 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 93 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Defns0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 4)));
#line 93 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Defns_8;
#line 94 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 0)));
#line 94 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 1)));
#line 94 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 2)));
#line 94 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 3)));
#line 94 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 5)));
#line 94 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 6)));
#line 94 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 7)));
#line 96 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_21_21;
#line 96 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_22_22;
#line 96 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_23_23;
#line 96 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_24_24;
#line 96 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_26_26;
#line 96 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_27_27;
#line 96 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_28_28;
#line 96 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_25_25;

#line 137 "ml_tailcall.m"
    {
#line 137 "ml_tailcall.m"
      mercury__list__map_3_p_0(ml_backend__ml_tailcall__TypeCtorInfo_8_34, ml_backend__ml_tailcall__TypeCtorInfo_8_34, (MR_Word) &ml_backend__ml_tailcall_scalar_common_3[0], ml_backend__ml_tailcall__Defns0_7, &ml_backend__ml_tailcall__Defns_8);
    }
#line 96 "ml_tailcall.m"
    ml_backend__ml_tailcall__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 0)));
#line 96 "ml_tailcall.m"
    ml_backend__ml_tailcall__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 1)));
#line 96 "ml_tailcall.m"
    ml_backend__ml_tailcall__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 2)));
#line 96 "ml_tailcall.m"
    ml_backend__ml_tailcall__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 3)));
#line 96 "ml_tailcall.m"
    ml_backend__ml_tailcall__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 4)));
#line 96 "ml_tailcall.m"
    ml_backend__ml_tailcall__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 5)));
#line 96 "ml_tailcall.m"
    ml_backend__ml_tailcall__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 6)));
#line 96 "ml_tailcall.m"
    ml_backend__ml_tailcall__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 7)));
#line 96 "ml_tailcall.m"
    {
#line 96 "ml_tailcall.m"
      MR_Word base;
#line 96 "ml_tailcall.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 96 "ml_tailcall.m"
      *ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_10 = base;
#line 96 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_21_21));
#line 96 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_22_22));
#line 96 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__V_23_23));
#line 96 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__V_24_24));
#line 96 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_tailcall__Defns_8));
#line 96 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_tailcall__V_26_26));
#line 96 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_tailcall__V_27_27));
#line 96 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_tailcall__V_28_28));
#line 96 "ml_tailcall.m"
    }
#line 93 "ml_tailcall.m"
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
	MR_register_type_ctor_info(&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_tailcall_warning_0);
}

void mercury__ml_backend__ml_tailcall__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.ml_tailcall. */
