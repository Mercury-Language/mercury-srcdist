/*
** Automatically generated from `ml_tailcall.m'
** by the Mercury compiler,
** version rotd-2015-02-04
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
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
#include "ml_backend.mih"
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
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 624 "ml_tailcall.m"
struct ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0_s {
#line 624 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__ModuleName_4;
#line 624 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Warning_6;
#line 624 "ml_tailcall.m"
  MR_Cont ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__cont;
#line 624 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__cont_env_ptr;
#line 627 "ml_tailcall.m"
  MR_bool ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded;
#line 627 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Name_7;
#line 620 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Defn_28;
#line 621 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__conv0_Defn_28;
#line 620 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Defn_33;
#line 621 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__conv1_Defn_33;
#line 631 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__TypeInfo_38_68;
#line 631 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__SubStatement_39;
#line 631 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__SubStmt_40;
#line 631 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Context_41;
#line 631 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Func_43;
#line 631 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__CallKind_47;
#line 631 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__CodeAddr_48;
#line 631 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__QualProcLabel_49;
#line 631 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__MaybeSeqNum_51;
#line 631 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__ProcLabel_53;
#line 631 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__PredLabel_54;
#line 631 "ml_tailcall.m"
  MR_Integer ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__ProcId_55;
#line 631 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_57_57;
#line 631 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_58_58;
#line 631 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_61_61;
#line 631 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_62_62;
#line 631 "ml_tailcall.m"
  MR_Integer ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_63_63;
#line 631 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_64_64;
#line 624 "ml_tailcall.m"
};

#line 609 "ml_tailcall.m"
struct ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0_s {
#line 609 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__Warning_4;
#line 609 "ml_tailcall.m"
  MR_Cont ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__cont;
#line 609 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__cont_env_ptr;
#line 611 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__MLDS_ModuleName_13;
#line 611 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__Defn_17;
#line 621 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__conv0_Defn_17;
#line 609 "ml_tailcall.m"
};

#line 502 "ml_tailcall.m"
struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s {
#line 502 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_5;
#line 506 "ml_tailcall.m"
  MR_bool ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded;
#line 521 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__VarName_11;
#line 552 "ml_tailcall.m"
  jmp_buf ml_backend__ml_tailcall__check_const_3_f_0_env_0__commit_0;
#line 552 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_69_69;
#line 552 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_70;
#line 552 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_71_71;
#line 552 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_75;
#line 585 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv0_Locals_75;
#line 587 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_77;
#line 588 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv1_Defn_77;
#line 591 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_82;
#line 592 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv2_Param_82;
#line 561 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__MaybeSeqNum_30;
#line 561 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__PredLabel_35;
#line 561 "ml_tailcall.m"
  MR_Integer ml_backend__ml_tailcall__check_const_3_f_0_env_0__ProcId_36;
#line 574 "ml_tailcall.m"
  jmp_buf ml_backend__ml_tailcall__check_const_3_f_0_env_0__commit_1;
#line 574 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__TypeInfo_24_47;
#line 574 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41;
#line 574 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_42_42;
#line 574 "ml_tailcall.m"
  MR_Integer ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_43_43;
#line 574 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_44_44;
#line 574 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_50;
#line 585 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv3_Locals_50;
#line 587 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_52;
#line 588 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv4_Defn_52;
#line 591 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_57;
#line 592 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv5_Param_57;
#line 502 "ml_tailcall.m"
};

#line 471 "ml_tailcall.m"
struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s {
#line 471 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_5;
#line 475 "ml_tailcall.m"
  MR_bool ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded;
#line 548 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__VarName_21;
#line 552 "ml_tailcall.m"
  jmp_buf ml_backend__ml_tailcall__check_lval_3_f_0_env_0__commit_0;
#line 552 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__V_23_23;
#line 552 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Local_24;
#line 552 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__V_25_25;
#line 552 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_29;
#line 585 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv0_Locals_29;
#line 587 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Defn_31;
#line 588 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv1_Defn_31;
#line 591 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Param_36;
#line 592 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv2_Param_36;
#line 471 "ml_tailcall.m"
};

#line 599 "ml_tailcall.m"
struct ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0_s {
#line 599 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0__wrapper_arg_1;
#line 599 "ml_tailcall.m"
  MR_Cont ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0__cont;
#line 599 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0__cont_env_ptr;
#line 599 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0__conv0_Warning_4;
#line 599 "ml_tailcall.m"
};


#line 328 "ml_backend.ml_tailcall.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0;

#line 331 "ml_backend.ml_tailcall.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__maybe__ti_maybe_1list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0;

#line 334 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_0;

#line 337 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_1;

#line 340 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_value_ordered_is_local_0[2];

#line 343 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_name_ordered_is_local_0[2];

#line 346 "ml_backend.ml_tailcall.c"
static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_is_local_0[2];

#line 349 "ml_backend.ml_tailcall.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_argument_0;

#line 352 "ml_backend.ml_tailcall.c"
static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_local_defns_0_0[1];

#line 355 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_0;

#line 358 "ml_backend.ml_tailcall.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 361 "ml_backend.ml_tailcall.c"
static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_local_defns_0_1[1];

#line 364 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_1;

#line 367 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_0[1];

#line 370 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_1[1];

#line 373 "ml_backend.ml_tailcall.c"
static const MR_DuPtagLayout ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_local_defns_0[2];

#line 376 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_local_defns_0[2];

#line 379 "ml_backend.ml_tailcall.c"
static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_local_defns_0[2];

#line 382 "ml_backend.ml_tailcall.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__ml_tailcall__type_ctor_info_local_defns_0;

#line 385 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_0;

#line 388 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_1;

#line 391 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_value_ordered_may_yield_dangling_stack_ref_0[2];

#line 394 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_name_ordered_may_yield_dangling_stack_ref_0[2];

#line 397 "ml_backend.ml_tailcall.c"
static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_may_yield_dangling_stack_ref_0[2];

#line 400 "ml_backend.ml_tailcall.c"
static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_tailcall_warning_0_0[3];

#line 403 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_tailcall_warning_0_0;

#line 406 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_tailcall_warning_0_0[1];

#line 409 "ml_backend.ml_tailcall.c"
static const MR_DuPtagLayout ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_tailcall_warning_0[1];

#line 412 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_tailcall_warning_0[1];

#line 415 "ml_backend.ml_tailcall.c"
static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_tailcall_warning_0[1];

#line 418 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____at_tail_0_0_10001(
#line 421 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 423 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2);

#line 426 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____at_tail_0_0_10001(
#line 429 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 431 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 433 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3);

#line 436 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____is_local_0_0_10001(
#line 439 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 441 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2);

#line 444 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____is_local_0_0_10001(
#line 447 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 449 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 451 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3);

#line 454 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____local_defns_0_0_10001(
#line 457 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 459 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2);

#line 462 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____local_defns_0_0_10001(
#line 465 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 467 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 469 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3);

#line 472 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____locals_0_0_10001(
#line 475 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 477 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2);

#line 480 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____locals_0_0_10001(
#line 483 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 485 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 487 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3);

#line 490 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____may_yield_dangling_stack_ref_0_0_10001(
#line 493 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 495 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2);

#line 498 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____may_yield_dangling_stack_ref_0_0_10001(
#line 501 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 503 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 505 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3);

#line 508 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tailcall_warning_0_0_10001(
#line 511 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 513 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2);

#line 516 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____tailcall_warning_0_0_10001(
#line 519 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 521 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 523 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3);

#line 602 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____tailcall_warning_0_0(
#line 602 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
#line 602 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
#line 602 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3);

#line 602 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tailcall_warning_0_0(
#line 602 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
#line 602 "ml_tailcall.m"
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

#line 667 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__report_nontailcall_warning_4_p_0(
#line 667 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Globals_5,
#line 667 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Warning_6);

#line 621 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_2(
#line 621 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 620 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_1(
#line 620 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 621 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_4(
#line 621 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 620 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_3(
#line 620 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 631 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_5(
#line 631 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 624 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0(
#line 624 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__ModuleName_4,
#line 624 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Defn_5,
#line 624 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Warning_6,
#line 624 "ml_tailcall.m"
  MR_Cont ml_backend__ml_tailcall__cont,
#line 624 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__cont_env_ptr);

#line 621 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_2(
#line 621 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 611 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_1(
#line 611 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 609 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0(
#line 609 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__MLDS_3,
#line 609 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Warning_4,
#line 609 "ml_tailcall.m"
  MR_Cont ml_backend__ml_tailcall__cont,
#line 609 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__cont_env_ptr);

#line 552 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_1(
#line 552 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 585 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_3(
#line 585 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 552 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_4(
#line 552 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 588 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_6(
#line 588 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 587 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_5(
#line 587 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 592 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_8(
#line 592 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 591 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_7(
#line 591 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 552 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_2(
#line 552 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 552 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_9(
#line 552 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 574 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_10(
#line 574 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 585 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_12(
#line 585 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 574 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_13(
#line 574 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 588 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_15(
#line 588 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 587 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_14(
#line 587 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 592 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_17(
#line 592 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 591 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_16(
#line 591 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 574 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_11(
#line 574 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 574 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_18(
#line 574 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 502 "ml_tailcall.m"
static MR_Word MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0(
#line 502 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Const_4,
#line 502 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Locals_5);

#line 552 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_1(
#line 552 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 585 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_3(
#line 585 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 552 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_4(
#line 552 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 588 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_6(
#line 588 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 587 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_5(
#line 587 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 592 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_8(
#line 592 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 591 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_7(
#line 591 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 552 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_2(
#line 552 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 552 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_9(
#line 552 "ml_tailcall.m"
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

#line 600 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_3(
#line 600 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__closure_arg,
#line 600 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 600 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 600 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_3);

#line 599 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_1(
#line 599 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg);

#line 599 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2(
#line 599 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__closure_arg,
#line 599 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 599 "ml_tailcall.m"
  MR_Cont ml_backend__ml_tailcall__cont,
#line 599 "ml_tailcall.m"
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tailcall_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_tailcall_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In mode number"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 1250 "ml_backend.ml_tailcall.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

#line 1258 "ml_backend.ml_tailcall.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__maybe__ti_maybe_1list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

#line 1266 "ml_backend.ml_tailcall.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_at_tail_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_tailcall____Unify____at_tail_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tailcall____Compare____at_tail_0_0_10001)),
  (MR_String) "ml_backend.ml_tailcall",
  (MR_String) "at_tail",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_tailcall__maybe__ti_maybe_1list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1287 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_0 = {
  (MR_String) "is_local",
  (MR_Integer) 0
};

#line 1293 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_1 = {
  (MR_String) "is_not_local",
  (MR_Integer) 1
};

#line 1299 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_value_ordered_is_local_0[2] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_0,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_1
};

#line 1305 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_name_ordered_is_local_0[2] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_0,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_1
};

#line 1311 "ml_backend.ml_tailcall.c"
static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_is_local_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1317 "ml_backend.ml_tailcall.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_is_local_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_tailcall____Unify____is_local_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tailcall____Compare____is_local_0_0_10001)),
  (MR_String) "ml_backend.ml_tailcall",
  (MR_String) "is_local",
  {
    ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_name_ordered_is_local_0
  },
  {
    ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_value_ordered_is_local_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_is_local_0
};

#line 1338 "ml_backend.ml_tailcall.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_argument_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0
  }
};

#line 1346 "ml_backend.ml_tailcall.c"
static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_local_defns_0_0[1] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_argument_0
};

#line 1351 "ml_backend.ml_tailcall.c"
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

#line 1366 "ml_backend.ml_tailcall.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 1374 "ml_backend.ml_tailcall.c"
static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_local_defns_0_1[1] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0
};

#line 1379 "ml_backend.ml_tailcall.c"
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

#line 1394 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_0[1] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_0
};

#line 1399 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_1[1] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_1
};

#line 1404 "ml_backend.ml_tailcall.c"
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

#line 1418 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_local_defns_0[2] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_1,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_0
};

#line 1424 "ml_backend.ml_tailcall.c"
static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_local_defns_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1430 "ml_backend.ml_tailcall.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_local_defns_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_tailcall____Unify____local_defns_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tailcall____Compare____local_defns_0_0_10001)),
  (MR_String) "ml_backend.ml_tailcall",
  (MR_String) "local_defns",
  {
    ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_local_defns_0
  },
  {
    ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_local_defns_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_local_defns_0
};

#line 1451 "ml_backend.ml_tailcall.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__ml_tailcall__type_ctor_info_local_defns_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_local_defns_0
  }
};

#line 1459 "ml_backend.ml_tailcall.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_locals_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_tailcall____Unify____locals_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tailcall____Compare____locals_0_0_10001)),
  (MR_String) "ml_backend.ml_tailcall",
  (MR_String) "locals",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_tailcall__list__ti_list_1ml_backend__ml_tailcall__type_ctor_info_local_defns_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1480 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_0 = {
  (MR_String) "may_yield_dangling_stack_ref",
  (MR_Integer) 0
};

#line 1486 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_1 = {
  (MR_String) "will_not_yield_dangling_stack_ref",
  (MR_Integer) 1
};

#line 1492 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_value_ordered_may_yield_dangling_stack_ref_0[2] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_0,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_1
};

#line 1498 "ml_backend.ml_tailcall.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_name_ordered_may_yield_dangling_stack_ref_0[2] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_0,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_1
};

#line 1504 "ml_backend.ml_tailcall.c"
static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_may_yield_dangling_stack_ref_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1510 "ml_backend.ml_tailcall.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_may_yield_dangling_stack_ref_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_tailcall____Unify____may_yield_dangling_stack_ref_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tailcall____Compare____may_yield_dangling_stack_ref_0_0_10001)),
  (MR_String) "ml_backend.ml_tailcall",
  (MR_String) "may_yield_dangling_stack_ref",
  {
    ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_name_ordered_may_yield_dangling_stack_ref_0
  },
  {
    ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_value_ordered_may_yield_dangling_stack_ref_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_may_yield_dangling_stack_ref_0
};

#line 1531 "ml_backend.ml_tailcall.c"
static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_tailcall_warning_0_0[3] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_pred_label_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_context_0
};

#line 1538 "ml_backend.ml_tailcall.c"
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

#line 1553 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_tailcall_warning_0_0[1] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_tailcall_warning_0_0
};

#line 1558 "ml_backend.ml_tailcall.c"
static const MR_DuPtagLayout ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_tailcall_warning_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_tailcall_warning_0_0
  }
};

#line 1567 "ml_backend.ml_tailcall.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_tailcall_warning_0[1] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_tailcall_warning_0_0
};

#line 1572 "ml_backend.ml_tailcall.c"
static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_tailcall_warning_0[1] = {
  (MR_Integer) 0
};

#line 1577 "ml_backend.ml_tailcall.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_tailcall_warning_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_tailcall____Unify____tailcall_warning_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tailcall____Compare____tailcall_warning_0_0_10001)),
  (MR_String) "ml_backend.ml_tailcall",
  (MR_String) "tailcall_warning",
  {
    ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_tailcall_warning_0
  },
  {
    ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_tailcall_warning_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_tailcall_warning_0
};

#line 1598 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____at_tail_0_0_10001(
#line 1601 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 1603 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2)
#line 1605 "ml_backend.ml_tailcall.c"
{
#line 1607 "ml_backend.ml_tailcall.c"
  {
#line 1609 "ml_backend.ml_tailcall.c"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 1612 "ml_backend.ml_tailcall.c"
    {
#line 1614 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____at_tail_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    }
#line 1617 "ml_backend.ml_tailcall.c"
    return ml_backend__ml_tailcall__succeeded;
#line 1619 "ml_backend.ml_tailcall.c"
  }
#line 1621 "ml_backend.ml_tailcall.c"
}

#line 1624 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____at_tail_0_0_10001(
#line 1627 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 1629 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 1631 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3)
#line 1633 "ml_backend.ml_tailcall.c"
{
#line 1635 "ml_backend.ml_tailcall.c"
  {
#line 1637 "ml_backend.ml_tailcall.c"
    MR_Word ml_backend__ml_tailcall__conv0_HeadVar__1_1;

#line 1640 "ml_backend.ml_tailcall.c"
    {
#line 1642 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall____Compare____at_tail_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    }
#line 1645 "ml_backend.ml_tailcall.c"
    *ml_backend__ml_tailcall__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tailcall__conv0_HeadVar__1_1));
#line 1647 "ml_backend.ml_tailcall.c"
  }
#line 1649 "ml_backend.ml_tailcall.c"
}

#line 1652 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____is_local_0_0_10001(
#line 1655 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 1657 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2)
#line 1659 "ml_backend.ml_tailcall.c"
{
#line 1661 "ml_backend.ml_tailcall.c"
  {
#line 1663 "ml_backend.ml_tailcall.c"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 1666 "ml_backend.ml_tailcall.c"
    {
#line 1668 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____is_local_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    }
#line 1671 "ml_backend.ml_tailcall.c"
    return ml_backend__ml_tailcall__succeeded;
#line 1673 "ml_backend.ml_tailcall.c"
  }
#line 1675 "ml_backend.ml_tailcall.c"
}

#line 1678 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____is_local_0_0_10001(
#line 1681 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 1683 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 1685 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3)
#line 1687 "ml_backend.ml_tailcall.c"
{
#line 1689 "ml_backend.ml_tailcall.c"
  {
#line 1691 "ml_backend.ml_tailcall.c"
    MR_Word ml_backend__ml_tailcall__conv0_HeadVar__1_1;

#line 1694 "ml_backend.ml_tailcall.c"
    {
#line 1696 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall____Compare____is_local_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    }
#line 1699 "ml_backend.ml_tailcall.c"
    *ml_backend__ml_tailcall__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tailcall__conv0_HeadVar__1_1));
#line 1701 "ml_backend.ml_tailcall.c"
  }
#line 1703 "ml_backend.ml_tailcall.c"
}

#line 1706 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____local_defns_0_0_10001(
#line 1709 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 1711 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2)
#line 1713 "ml_backend.ml_tailcall.c"
{
#line 1715 "ml_backend.ml_tailcall.c"
  {
#line 1717 "ml_backend.ml_tailcall.c"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 1720 "ml_backend.ml_tailcall.c"
    {
#line 1722 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____local_defns_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    }
#line 1725 "ml_backend.ml_tailcall.c"
    return ml_backend__ml_tailcall__succeeded;
#line 1727 "ml_backend.ml_tailcall.c"
  }
#line 1729 "ml_backend.ml_tailcall.c"
}

#line 1732 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____local_defns_0_0_10001(
#line 1735 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 1737 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 1739 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3)
#line 1741 "ml_backend.ml_tailcall.c"
{
#line 1743 "ml_backend.ml_tailcall.c"
  {
#line 1745 "ml_backend.ml_tailcall.c"
    MR_Word ml_backend__ml_tailcall__conv0_HeadVar__1_1;

#line 1748 "ml_backend.ml_tailcall.c"
    {
#line 1750 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall____Compare____local_defns_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    }
#line 1753 "ml_backend.ml_tailcall.c"
    *ml_backend__ml_tailcall__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tailcall__conv0_HeadVar__1_1));
#line 1755 "ml_backend.ml_tailcall.c"
  }
#line 1757 "ml_backend.ml_tailcall.c"
}

#line 1760 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____locals_0_0_10001(
#line 1763 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 1765 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2)
#line 1767 "ml_backend.ml_tailcall.c"
{
#line 1769 "ml_backend.ml_tailcall.c"
  {
#line 1771 "ml_backend.ml_tailcall.c"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 1774 "ml_backend.ml_tailcall.c"
    {
#line 1776 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____locals_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    }
#line 1779 "ml_backend.ml_tailcall.c"
    return ml_backend__ml_tailcall__succeeded;
#line 1781 "ml_backend.ml_tailcall.c"
  }
#line 1783 "ml_backend.ml_tailcall.c"
}

#line 1786 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____locals_0_0_10001(
#line 1789 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 1791 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 1793 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3)
#line 1795 "ml_backend.ml_tailcall.c"
{
#line 1797 "ml_backend.ml_tailcall.c"
  {
#line 1799 "ml_backend.ml_tailcall.c"
    MR_Word ml_backend__ml_tailcall__conv0_HeadVar__1_1;

#line 1802 "ml_backend.ml_tailcall.c"
    {
#line 1804 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall____Compare____locals_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    }
#line 1807 "ml_backend.ml_tailcall.c"
    *ml_backend__ml_tailcall__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tailcall__conv0_HeadVar__1_1));
#line 1809 "ml_backend.ml_tailcall.c"
  }
#line 1811 "ml_backend.ml_tailcall.c"
}

#line 1814 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____may_yield_dangling_stack_ref_0_0_10001(
#line 1817 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 1819 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2)
#line 1821 "ml_backend.ml_tailcall.c"
{
#line 1823 "ml_backend.ml_tailcall.c"
  {
#line 1825 "ml_backend.ml_tailcall.c"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 1828 "ml_backend.ml_tailcall.c"
    {
#line 1830 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____may_yield_dangling_stack_ref_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    }
#line 1833 "ml_backend.ml_tailcall.c"
    return ml_backend__ml_tailcall__succeeded;
#line 1835 "ml_backend.ml_tailcall.c"
  }
#line 1837 "ml_backend.ml_tailcall.c"
}

#line 1840 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____may_yield_dangling_stack_ref_0_0_10001(
#line 1843 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 1845 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 1847 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3)
#line 1849 "ml_backend.ml_tailcall.c"
{
#line 1851 "ml_backend.ml_tailcall.c"
  {
#line 1853 "ml_backend.ml_tailcall.c"
    MR_Word ml_backend__ml_tailcall__conv0_HeadVar__1_1;

#line 1856 "ml_backend.ml_tailcall.c"
    {
#line 1858 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall____Compare____may_yield_dangling_stack_ref_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    }
#line 1861 "ml_backend.ml_tailcall.c"
    *ml_backend__ml_tailcall__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tailcall__conv0_HeadVar__1_1));
#line 1863 "ml_backend.ml_tailcall.c"
  }
#line 1865 "ml_backend.ml_tailcall.c"
}

#line 1868 "ml_backend.ml_tailcall.c"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tailcall_warning_0_0_10001(
#line 1871 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 1873 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2)
#line 1875 "ml_backend.ml_tailcall.c"
{
#line 1877 "ml_backend.ml_tailcall.c"
  {
#line 1879 "ml_backend.ml_tailcall.c"
    MR_bool ml_backend__ml_tailcall__succeeded;

#line 1882 "ml_backend.ml_tailcall.c"
    {
#line 1884 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____tailcall_warning_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    }
#line 1887 "ml_backend.ml_tailcall.c"
    return ml_backend__ml_tailcall__succeeded;
#line 1889 "ml_backend.ml_tailcall.c"
  }
#line 1891 "ml_backend.ml_tailcall.c"
}

#line 1894 "ml_backend.ml_tailcall.c"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____tailcall_warning_0_0_10001(
#line 1897 "ml_backend.ml_tailcall.c"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 1899 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 1901 "ml_backend.ml_tailcall.c"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3)
#line 1903 "ml_backend.ml_tailcall.c"
{
#line 1905 "ml_backend.ml_tailcall.c"
  {
#line 1907 "ml_backend.ml_tailcall.c"
    MR_Word ml_backend__ml_tailcall__conv0_HeadVar__1_1;

#line 1910 "ml_backend.ml_tailcall.c"
    {
#line 1912 "ml_backend.ml_tailcall.c"
      ml_backend__ml_tailcall____Compare____tailcall_warning_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    }
#line 1915 "ml_backend.ml_tailcall.c"
    *ml_backend__ml_tailcall__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tailcall__conv0_HeadVar__1_1));
#line 1917 "ml_backend.ml_tailcall.c"
  }
#line 1919 "ml_backend.ml_tailcall.c"
}

#line 602 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall____Compare____tailcall_warning_0_0(
#line 602 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
#line 602 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
#line 602 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3)
#line 602 "ml_tailcall.m"
{
#line 602 "ml_tailcall.m"
  {
#line 602 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 602 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__CastX_12 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;
#line 602 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__CastY_13 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__3_3;

#line 602 "ml_tailcall.m"
    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastX_12 == ml_backend__ml_tailcall__CastY_13);
#line 602 "ml_tailcall.m"
    if (ml_backend__ml_tailcall__succeeded)
#line 1946 "ml_backend.ml_tailcall.c"
      *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 0;
#line 602 "ml_tailcall.m"
    else
#line 602 "ml_tailcall.m"
      {
#line 602 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
#line 602 "ml_tailcall.m"
        MR_Integer ml_backend__ml_tailcall__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 1)));
#line 602 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 2)));
#line 602 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 0)));
#line 602 "ml_tailcall.m"
        MR_Integer ml_backend__ml_tailcall__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 1)));
#line 602 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 2)));
#line 602 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_10_10;

#line 602 "ml_tailcall.m"
        {
#line 602 "ml_tailcall.m"
          ml_backend__mlds____Compare____mlds_pred_label_0_0(&ml_backend__ml_tailcall__V_10_10, ml_backend__ml_tailcall__V_4_4, ml_backend__ml_tailcall__V_7_7);
        }
#line 1972 "ml_backend.ml_tailcall.c"
        ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_10_10 == (MR_Integer) 0);
#line 602 "ml_tailcall.m"
        ml_backend__ml_tailcall__succeeded = !(ml_backend__ml_tailcall__succeeded);
#line 602 "ml_tailcall.m"
        if (ml_backend__ml_tailcall__succeeded)
#line 602 "ml_tailcall.m"
          *ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__V_10_10;
#line 602 "ml_tailcall.m"
        else
#line 602 "ml_tailcall.m"
          {
#line 602 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__V_11_11;

#line 602 "ml_tailcall.m"
            {
#line 602 "ml_tailcall.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_tailcall__V_11_11, ml_backend__ml_tailcall__V_5_5, ml_backend__ml_tailcall__V_8_8);
            }
#line 1992 "ml_backend.ml_tailcall.c"
            ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_11_11 == (MR_Integer) 0);
#line 602 "ml_tailcall.m"
            ml_backend__ml_tailcall__succeeded = !(ml_backend__ml_tailcall__succeeded);
#line 602 "ml_tailcall.m"
            if (ml_backend__ml_tailcall__succeeded)
#line 602 "ml_tailcall.m"
              *ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__V_11_11;
#line 602 "ml_tailcall.m"
            else
#line 602 "ml_tailcall.m"
              {
#line 602 "ml_tailcall.m"
                ml_backend__mlds____Compare____mlds_context_0_0(ml_backend__ml_tailcall__HeadVar__1_1, ml_backend__ml_tailcall__V_6_6, ml_backend__ml_tailcall__V_9_9);
#line 602 "ml_tailcall.m"
                return;
              }
#line 602 "ml_tailcall.m"
          }
#line 602 "ml_tailcall.m"
      }
#line 602 "ml_tailcall.m"
  }
#line 602 "ml_tailcall.m"
}

#line 602 "ml_tailcall.m"
static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tailcall_warning_0_0(
#line 602 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
#line 602 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2)
#line 602 "ml_tailcall.m"
{
#line 602 "ml_tailcall.m"
  {
#line 602 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 602 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__CastX_9 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__1_1;
#line 602 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__CastY_10 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;

#line 602 "ml_tailcall.m"
    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastX_9 == ml_backend__ml_tailcall__CastY_10);
#line 602 "ml_tailcall.m"
    if (ml_backend__ml_tailcall__succeeded)
#line 602 "ml_tailcall.m"
      ml_backend__ml_tailcall__succeeded = MR_TRUE;
#line 602 "ml_tailcall.m"
    else
#line 602 "ml_tailcall.m"
      {
#line 602 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 0)));
#line 602 "ml_tailcall.m"
        MR_Integer ml_backend__ml_tailcall__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 1)));
#line 602 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 2)));
#line 602 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
#line 602 "ml_tailcall.m"
        MR_Integer ml_backend__ml_tailcall__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 1)));
#line 602 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 2)));

#line 2059 "ml_backend.ml_tailcall.c"
        {
#line 2061 "ml_backend.ml_tailcall.c"
          ml_backend__ml_tailcall__succeeded = ml_backend__mlds____Unify____mlds_pred_label_0_0(ml_backend__ml_tailcall__V_3_3, ml_backend__ml_tailcall__V_6_6);
        }
#line 602 "ml_tailcall.m"
        if (ml_backend__ml_tailcall__succeeded)
#line 602 "ml_tailcall.m"
          {
#line 2068 "ml_backend.ml_tailcall.c"
            ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_4_4 == ml_backend__ml_tailcall__V_7_7);
#line 602 "ml_tailcall.m"
            if (ml_backend__ml_tailcall__succeeded)
#line 2072 "ml_backend.ml_tailcall.c"
              {
#line 2074 "ml_backend.ml_tailcall.c"
                return ml_backend__ml_tailcall__succeeded = ml_backend__mlds____Unify____mlds_context_0_0(ml_backend__ml_tailcall__V_5_5, ml_backend__ml_tailcall__V_8_8);
              }
#line 602 "ml_tailcall.m"
          }
#line 602 "ml_tailcall.m"
      }
#line 602 "ml_tailcall.m"
    return ml_backend__ml_tailcall__succeeded;
#line 602 "ml_tailcall.m"
  }
#line 602 "ml_tailcall.m"
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
#line 2129 "ml_backend.ml_tailcall.c"
  {
#line 2131 "ml_backend.ml_tailcall.c"
    MR_bool ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__HeadVar__2_1 == ml_backend__ml_tailcall__HeadVar__2_2);

#line 2134 "ml_backend.ml_tailcall.c"
    return ml_backend__ml_tailcall__succeeded;
#line 2136 "ml_backend.ml_tailcall.c"
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
#line 2227 "ml_backend.ml_tailcall.c"
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
#line 2256 "ml_backend.ml_tailcall.c"
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
#line 2269 "ml_backend.ml_tailcall.c"
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
#line 2339 "ml_backend.ml_tailcall.c"
              ml_backend__ml_tailcall__TypeInfo_9_9 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[2];
#line 2341 "ml_backend.ml_tailcall.c"
              {
#line 2343 "ml_backend.ml_tailcall.c"
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
#line 2369 "ml_backend.ml_tailcall.c"
              ml_backend__ml_tailcall__TypeInfo_10_10 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[3];
#line 2371 "ml_backend.ml_tailcall.c"
              {
#line 2373 "ml_backend.ml_tailcall.c"
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
#line 2428 "ml_backend.ml_tailcall.c"
  {
#line 2430 "ml_backend.ml_tailcall.c"
    MR_bool ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__HeadVar__2_1 == ml_backend__ml_tailcall__HeadVar__2_2);

#line 2433 "ml_backend.ml_tailcall.c"
    return ml_backend__ml_tailcall__succeeded;
#line 2435 "ml_backend.ml_tailcall.c"
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

#line 667 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__report_nontailcall_warning_4_p_0(
#line 667 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Globals_5,
#line 667 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Warning_6)
#line 667 "ml_tailcall.m"
{
#line 670 "ml_tailcall.m"
  {
#line 670 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 670 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__PredLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Warning_6, (MR_Integer) 0)));
#line 670 "ml_tailcall.m"
    MR_Integer ml_backend__ml_tailcall__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Warning_6, (MR_Integer) 1)));
#line 670 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Warning_6, (MR_Integer) 2)));

#line 685 "ml_tailcall.m"
    if (((MR_tag((MR_Word) ml_backend__ml_tailcall__PredLabel_8)) == (MR_mktag((MR_Integer) 1))))
#line 686 "ml_tailcall.m"
      {
#line 686 "ml_tailcall.m"
      }
#line 685 "ml_tailcall.m"
    else
#line 674 "ml_tailcall.m"
      {
#line 674 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__PredOrFunc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_8, (MR_Integer) 0)));
#line 674 "ml_tailcall.m"
        MR_String ml_backend__ml_tailcall__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_8, (MR_Integer) 2)));
#line 674 "ml_tailcall.m"
        MR_Integer ml_backend__ml_tailcall__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_8, (MR_Integer) 3)));
#line 674 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__SimpleCallId_17;
#line 674 "ml_tailcall.m"
        MR_Integer ml_backend__ml_tailcall__ProcNumber0_18;
#line 674 "ml_tailcall.m"
        MR_Integer ml_backend__ml_tailcall__ProcNumber_19;
#line 674 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Pieces_20;
#line 674 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Msg_21;
#line 674 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Spec_22;
#line 674 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_31_31;
#line 674 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_35_35;
#line 674 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_36_36;
#line 674 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_37_37;
#line 674 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_40_40;
#line 674 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_41_41;
#line 674 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_53_53;
#line 674 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_54_54;
#line 674 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_55_55;
#line 674 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__V_59_59;
#line 673 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall___MaybeModule_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_8, (MR_Integer) 1)));
#line 673 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall___CodeModel_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_8, (MR_Integer) 4)));
#line 673 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall___NonOutputFunc_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_8, (MR_Integer) 5)));
#line 684 "ml_tailcall.m"
        MR_Integer ml_backend__ml_tailcall___NumWarnings_23;
#line 684 "ml_tailcall.m"
        MR_Integer ml_backend__ml_tailcall___NumErrors_24;

#line 675 "ml_tailcall.m"
        {
#line 675 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 675 "ml_tailcall.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_31_31, 0) = ((MR_Box) (ml_backend__ml_tailcall__Name_13));
#line 675 "ml_tailcall.m"
        }
#line 675 "ml_tailcall.m"
        {
#line 675 "ml_tailcall.m"
          ml_backend__ml_tailcall__SimpleCallId_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 675 "ml_tailcall.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__SimpleCallId_17, 0) = ((MR_Box) (ml_backend__ml_tailcall__PredOrFunc_11));
#line 675 "ml_tailcall.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__SimpleCallId_17, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_31_31));
#line 675 "ml_tailcall.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__SimpleCallId_17, 2) = ((MR_Box) (ml_backend__ml_tailcall__Arity_14));
#line 675 "ml_tailcall.m"
        }
#line 676 "ml_tailcall.m"
        {
#line 676 "ml_tailcall.m"
          hlds__hlds_pred__proc_id_to_int_2_p_0(ml_backend__ml_tailcall__ProcId_9, &ml_backend__ml_tailcall__ProcNumber0_18);
        }
#line 677 "ml_tailcall.m"
        ml_backend__ml_tailcall__ProcNumber_19 = (ml_backend__ml_tailcall__ProcNumber0_18 + (MR_Integer) 1);
#line 679 "ml_tailcall.m"
        {
#line 679 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 679 "ml_tailcall.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 679 "ml_tailcall.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__V_36_36, 1) = ((MR_Box) (ml_backend__ml_tailcall__ProcNumber_19));
#line 679 "ml_tailcall.m"
        }
#line 680 "ml_tailcall.m"
        {
#line 680 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 680 "ml_tailcall.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 680 "ml_tailcall.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__V_41_41, 1) = ((MR_Box) (ml_backend__ml_tailcall__SimpleCallId_17));
#line 680 "ml_tailcall.m"
        }
#line 680 "ml_tailcall.m"
        {
#line 680 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 680 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_40_40, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_41_41));
#line 680 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_tailcall_scalar_common_1[11])));
#line 680 "ml_tailcall.m"
        }
#line 680 "ml_tailcall.m"
        {
#line 680 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 680 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_37_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tailcall_scalar_common_1[13])));
#line 680 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_37_37, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_40_40));
#line 680 "ml_tailcall.m"
        }
#line 679 "ml_tailcall.m"
        {
#line 679 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 679 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_35_35, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_36_36));
#line 679 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_35_35, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_37_37));
#line 679 "ml_tailcall.m"
        }
#line 679 "ml_tailcall.m"
        {
#line 679 "ml_tailcall.m"
          ml_backend__ml_tailcall__Pieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 679 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Pieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tailcall_scalar_common_1[12])));
#line 679 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Pieces_20, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_35_35));
#line 679 "ml_tailcall.m"
        }
#line 682 "ml_tailcall.m"
        {
#line 682 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_53_53 = ml_backend__mlds__mlds_get_prog_context_1_f_0(ml_backend__ml_tailcall__Context_10);
        }
#line 682 "ml_tailcall.m"
        {
#line 682 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 682 "ml_tailcall.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_55_55, 0) = ((MR_Box) (ml_backend__ml_tailcall__Pieces_20));
#line 682 "ml_tailcall.m"
        }
#line 682 "ml_tailcall.m"
        {
#line 682 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_54_54, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_55_55));
#line 682 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 682 "ml_tailcall.m"
        }
#line 682 "ml_tailcall.m"
        {
#line 682 "ml_tailcall.m"
          ml_backend__ml_tailcall__Msg_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 682 "ml_tailcall.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Msg_21, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_53_53));
#line 682 "ml_tailcall.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Msg_21, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_54_54));
#line 682 "ml_tailcall.m"
        }
#line 683 "ml_tailcall.m"
        {
#line 683 "ml_tailcall.m"
          ml_backend__ml_tailcall__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_59_59, 0) = ((MR_Box) (ml_backend__ml_tailcall__Msg_21));
#line 683 "ml_tailcall.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 683 "ml_tailcall.m"
        }
#line 683 "ml_tailcall.m"
        {
#line 683 "ml_tailcall.m"
          ml_backend__ml_tailcall__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 683 "ml_tailcall.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 683 "ml_tailcall.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14))));
#line 683 "ml_tailcall.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Spec_22, 2) = ((MR_Box) (ml_backend__ml_tailcall__V_59_59));
#line 683 "ml_tailcall.m"
        }
#line 684 "ml_tailcall.m"
        {
#line 684 "ml_tailcall.m"
          parse_tree__error_util__write_error_spec_8_p_0(ml_backend__ml_tailcall__Spec_22, ml_backend__ml_tailcall__Globals_5, (MR_Integer) 0, &ml_backend__ml_tailcall___NumWarnings_23, (MR_Integer) 0, &ml_backend__ml_tailcall___NumErrors_24);
        }
#line 674 "ml_tailcall.m"
      }
#line 670 "ml_tailcall.m"
  }
#line 667 "ml_tailcall.m"
}

#line 621 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_2(
#line 621 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 621 "ml_tailcall.m"
{
#line 621 "ml_tailcall.m"
  {
#line 621 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 621 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Defn_28 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__conv0_Defn_28);
#line 621 "ml_tailcall.m"
    {
#line 621 "ml_tailcall.m"
      ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_1(ml_backend__ml_tailcall__env_ptr);
#line 621 "ml_tailcall.m"
      return;
    }
#line 621 "ml_tailcall.m"
  }
#line 621 "ml_tailcall.m"
}

#line 620 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_1(
#line 620 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 620 "ml_tailcall.m"
{
#line 620 "ml_tailcall.m"
  {
#line 620 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 622 "ml_tailcall.m"
    {
#line 622 "ml_tailcall.m"
      ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__ModuleName_4, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Defn_28, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Warning_6, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__cont, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__cont_env_ptr);
#line 622 "ml_tailcall.m"
      return;
    }
#line 620 "ml_tailcall.m"
  }
#line 620 "ml_tailcall.m"
}

#line 621 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_4(
#line 621 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 621 "ml_tailcall.m"
{
#line 621 "ml_tailcall.m"
  {
#line 621 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 621 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Defn_33 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__conv1_Defn_33);
#line 621 "ml_tailcall.m"
    {
#line 621 "ml_tailcall.m"
      ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_3(ml_backend__ml_tailcall__env_ptr);
#line 621 "ml_tailcall.m"
      return;
    }
#line 621 "ml_tailcall.m"
  }
#line 621 "ml_tailcall.m"
}

#line 620 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_3(
#line 620 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 620 "ml_tailcall.m"
{
#line 620 "ml_tailcall.m"
  {
#line 620 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 622 "ml_tailcall.m"
    {
#line 622 "ml_tailcall.m"
      ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__ModuleName_4, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Defn_33, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Warning_6, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__cont, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__cont_env_ptr);
#line 622 "ml_tailcall.m"
      return;
    }
#line 620 "ml_tailcall.m"
  }
#line 620 "ml_tailcall.m"
}

#line 631 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_5(
#line 631 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 631 "ml_tailcall.m"
{
#line 631 "ml_tailcall.m"
  {
#line 631 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 631 "ml_tailcall.m"
    {
#line 650 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall___CallSig_42;
#line 650 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall___This_44;
#line 650 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall___Args_45;
#line 650 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall___RetVals_46;
#line 663 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall___PredId_56;

#line 649 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__SubStmt_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__SubStatement_39, (MR_Integer) 0)));
#line 649 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Context_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__SubStatement_39, (MR_Integer) 1)));
#line 650 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__SubStmt_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__SubStmt_40, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 650 "ml_tailcall.m"
      if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded)
#line 650 "ml_tailcall.m"
        {
#line 650 "ml_tailcall.m"
          {
#line 650 "ml_tailcall.m"
            ml_backend__ml_tailcall___CallSig_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__SubStmt_40, (MR_Integer) 1)));
#line 650 "ml_tailcall.m"
            (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Func_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__SubStmt_40, (MR_Integer) 2)));
#line 650 "ml_tailcall.m"
            ml_backend__ml_tailcall___This_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__SubStmt_40, (MR_Integer) 3)));
#line 650 "ml_tailcall.m"
            ml_backend__ml_tailcall___Args_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__SubStmt_40, (MR_Integer) 4)));
#line 650 "ml_tailcall.m"
            ml_backend__ml_tailcall___RetVals_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__SubStmt_40, (MR_Integer) 5)));
#line 650 "ml_tailcall.m"
            (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__CallKind_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__SubStmt_40, (MR_Integer) 6)));
#line 650 "ml_tailcall.m"
          }
#line 631 "ml_tailcall.m"
          {
#line 651 "ml_tailcall.m"
            (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded = ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__CallKind_47 == (MR_Integer) 2);
#line 631 "ml_tailcall.m"
            if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded)
#line 631 "ml_tailcall.m"
              {
#line 653 "ml_tailcall.m"
                (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Func_43)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Func_43, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 653 "ml_tailcall.m"
                if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded)
#line 653 "ml_tailcall.m"
                  {
#line 653 "ml_tailcall.m"
                    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Func_43, (MR_Integer) 1)));
#line 631 "ml_tailcall.m"
                    {
#line 653 "ml_tailcall.m"
                      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_57_57)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_57_57, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 653 "ml_tailcall.m"
                      if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded)
#line 653 "ml_tailcall.m"
                        {
#line 653 "ml_tailcall.m"
                          (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__CodeAddr_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_57_57, (MR_Integer) 1)));
#line 631 "ml_tailcall.m"
                          {
#line 657 "ml_tailcall.m"
                            if (((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__CodeAddr_48)) == (MR_mktag((MR_Integer) 1))))
#line 658 "ml_tailcall.m"
                              {
#line 658 "ml_tailcall.m"
                                MR_Integer ml_backend__ml_tailcall__SeqNum_52;
#line 658 "ml_tailcall.m"
                                MR_Word ml_backend__ml_tailcall___Sig_59;

#line 658 "ml_tailcall.m"
                                (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__QualProcLabel_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__CodeAddr_48, (MR_Integer) 0)));
#line 658 "ml_tailcall.m"
                                ml_backend__ml_tailcall__SeqNum_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__CodeAddr_48, (MR_Integer) 1)));
#line 658 "ml_tailcall.m"
                                ml_backend__ml_tailcall___Sig_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__CodeAddr_48, (MR_Integer) 2)));
#line 659 "ml_tailcall.m"
                                {
#line 659 "ml_tailcall.m"
                                  MR_Word base;
#line 659 "ml_tailcall.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 659 "ml_tailcall.m"
                                  (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__MaybeSeqNum_51 = base;
#line 659 "ml_tailcall.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__SeqNum_52));
#line 659 "ml_tailcall.m"
                                }
#line 658 "ml_tailcall.m"
                              }
#line 657 "ml_tailcall.m"
                            else
#line 655 "ml_tailcall.m"
                              {
#line 655 "ml_tailcall.m"
                                MR_Word ml_backend__ml_tailcall___Sig_50;

#line 655 "ml_tailcall.m"
                                (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__QualProcLabel_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__CodeAddr_48, (MR_Integer) 0)));
#line 655 "ml_tailcall.m"
                                ml_backend__ml_tailcall___Sig_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__CodeAddr_48, (MR_Integer) 1)));
#line 656 "ml_tailcall.m"
                                (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__MaybeSeqNum_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 655 "ml_tailcall.m"
                              }
#line 662 "ml_tailcall.m"
                            (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__QualProcLabel_49, (MR_Integer) 0)));
#line 662 "ml_tailcall.m"
                            (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__QualProcLabel_49, (MR_Integer) 1)));
#line 662 "ml_tailcall.m"
                            (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__ProcLabel_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__QualProcLabel_49, (MR_Integer) 2)));
#line 662 "ml_tailcall.m"
                            {
#line 662 "ml_tailcall.m"
                              (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__ModuleName_4, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_61_61);
                            }
#line 631 "ml_tailcall.m"
                            if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded)
#line 631 "ml_tailcall.m"
                              {
#line 662 "ml_tailcall.m"
                                (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded = ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_58_58 == (MR_Integer) 0);
#line 631 "ml_tailcall.m"
                                if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded)
#line 631 "ml_tailcall.m"
                                  {
#line 661 "ml_tailcall.m"
                                    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__PredLabel_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__ProcLabel_53, (MR_Integer) 0)));
#line 661 "ml_tailcall.m"
                                    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__ProcId_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__ProcLabel_53, (MR_Integer) 1)));
#line 663 "ml_tailcall.m"
                                    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Name_7)) == (MR_mktag((MR_Integer) 2)));
#line 663 "ml_tailcall.m"
                                    if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded)
#line 663 "ml_tailcall.m"
                                      {
#line 663 "ml_tailcall.m"
                                        {
#line 663 "ml_tailcall.m"
                                          (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Name_7, (MR_Integer) 0)));
#line 663 "ml_tailcall.m"
                                          (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Name_7, (MR_Integer) 1)));
#line 663 "ml_tailcall.m"
                                          (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Name_7, (MR_Integer) 2)));
#line 663 "ml_tailcall.m"
                                          ml_backend__ml_tailcall___PredId_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Name_7, (MR_Integer) 3)));
#line 663 "ml_tailcall.m"
                                        }
#line 631 "ml_tailcall.m"
                                        {
#line 663 "ml_tailcall.m"
                                          {
#line 663 "ml_tailcall.m"
                                            (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded = ml_backend__mlds____Unify____mlds_pred_label_0_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__PredLabel_54, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_62_62);
                                          }
#line 631 "ml_tailcall.m"
                                          if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded)
#line 631 "ml_tailcall.m"
                                            {
#line 663 "ml_tailcall.m"
                                              (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded = ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__ProcId_55 == (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_63_63);
#line 631 "ml_tailcall.m"
                                              if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded)
#line 631 "ml_tailcall.m"
                                                {
#line 3018 "ml_backend.ml_tailcall.c"
                                                  (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__TypeInfo_38_68 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[5];
#line 663 "ml_tailcall.m"
                                                  {
#line 663 "ml_tailcall.m"
                                                    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__TypeInfo_38_68, ((MR_Box) ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__MaybeSeqNum_51)), ((MR_Box) ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__V_64_64)));
                                                  }
#line 631 "ml_tailcall.m"
                                                  if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded)
#line 631 "ml_tailcall.m"
                                                    {
#line 665 "ml_tailcall.m"
                                                      {
#line 665 "ml_tailcall.m"
                                                        MR_Word base;
#line 665 "ml_tailcall.m"
                                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 665 "ml_tailcall.m"
                                                        *((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Warning_6) = base;
#line 665 "ml_tailcall.m"
                                                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__PredLabel_54));
#line 665 "ml_tailcall.m"
                                                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__ProcId_55));
#line 665 "ml_tailcall.m"
                                                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Context_41));
#line 665 "ml_tailcall.m"
                                                      }
#line 665 "ml_tailcall.m"
                                                      {
#line 665 "ml_tailcall.m"
                                                        ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__cont)((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__cont_env_ptr);
#line 665 "ml_tailcall.m"
                                                        return;
                                                      }
#line 631 "ml_tailcall.m"
                                                    }
#line 631 "ml_tailcall.m"
                                                }
#line 631 "ml_tailcall.m"
                                            }
#line 631 "ml_tailcall.m"
                                        }
#line 663 "ml_tailcall.m"
                                      }
#line 631 "ml_tailcall.m"
                                  }
#line 631 "ml_tailcall.m"
                              }
#line 631 "ml_tailcall.m"
                          }
#line 653 "ml_tailcall.m"
                        }
#line 631 "ml_tailcall.m"
                    }
#line 653 "ml_tailcall.m"
                  }
#line 631 "ml_tailcall.m"
              }
#line 631 "ml_tailcall.m"
          }
#line 650 "ml_tailcall.m"
        }
#line 631 "ml_tailcall.m"
    }
#line 631 "ml_tailcall.m"
  }
#line 631 "ml_tailcall.m"
}

#line 624 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0(
#line 624 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__ModuleName_4,
#line 624 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__Defn_5,
#line 624 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Warning_6,
#line 624 "ml_tailcall.m"
  MR_Cont ml_backend__ml_tailcall__cont,
#line 624 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__cont_env_ptr)
#line 624 "ml_tailcall.m"
{
#line 624 "ml_tailcall.m"
  {
#line 624 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0_s ml_backend__ml_tailcall__env;

#line 624 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__ModuleName_4 = ml_backend__ml_tailcall__ModuleName_4;
#line 624 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Warning_6 = ml_backend__ml_tailcall__Warning_6;
#line 624 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__cont = ml_backend__ml_tailcall__cont;
#line 624 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__cont_env_ptr = ml_backend__ml_tailcall__cont_env_ptr;
#line 627 "ml_tailcall.m"
    {
#line 627 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__DefnBody_10;
#line 628 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall___Context_8;
#line 628 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall___Flags_9;

#line 628 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Defn_5, (MR_Integer) 0)));
#line 628 "ml_tailcall.m"
      ml_backend__ml_tailcall___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Defn_5, (MR_Integer) 1)));
#line 628 "ml_tailcall.m"
      ml_backend__ml_tailcall___Flags_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Defn_5, (MR_Integer) 2)));
#line 628 "ml_tailcall.m"
      ml_backend__ml_tailcall__DefnBody_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Defn_5, (MR_Integer) 3)));
#line 634 "ml_tailcall.m"
      if (((MR_tag((MR_Word) ml_backend__ml_tailcall__DefnBody_10)) == (MR_mktag((MR_Integer) 0))))
#line 635 "ml_tailcall.m"
        {
#line 635 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__ClassDefn_17 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tailcall__DefnBody_10), (MR_Integer) 0);
#line 635 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__CtorDefns_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_17, (MR_Integer) 5)));
#line 635 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall__MemberDefns_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_17, (MR_Integer) 6)));
#line 636 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall___Kind_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_17, (MR_Integer) 0)));
#line 636 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall___Imports_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_17, (MR_Integer) 1)));
#line 636 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall___BaseClasses_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_17, (MR_Integer) 2)));
#line 636 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall___Implements_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_17, (MR_Integer) 3)));
#line 636 "ml_tailcall.m"
          MR_Word ml_backend__ml_tailcall___TypeParams_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_17, (MR_Integer) 4)));

#line 621 "ml_tailcall.m"
          {
#line 621 "ml_tailcall.m"
            mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, &(ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__conv0_Defn_28, ml_backend__ml_tailcall__CtorDefns_23, ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_2, &ml_backend__ml_tailcall__env);
          }
#line 621 "ml_tailcall.m"
          {
#line 621 "ml_tailcall.m"
            mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, &(ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__conv1_Defn_33, ml_backend__ml_tailcall__MemberDefns_24, ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_4, &ml_backend__ml_tailcall__env);
          }
#line 635 "ml_tailcall.m"
        }
#line 634 "ml_tailcall.m"
      else
#line 634 "ml_tailcall.m"
        if (((MR_tag((MR_Word) ml_backend__ml_tailcall__DefnBody_10)) == (MR_mktag((MR_Integer) 2))))
#line 631 "ml_tailcall.m"
          {
#line 631 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__FuncBody_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_10, (MR_Integer) 2)));
#line 631 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__Body_16;
#line 630 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall___PredProcId_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_10, (MR_Integer) 0)));
#line 630 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall___Params_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_10, (MR_Integer) 1)));
#line 630 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall___Attributes_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_10, (MR_Integer) 3)));
#line 630 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall___EnvVarNames_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_10, (MR_Integer) 4)));

#line 632 "ml_tailcall.m"
            (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__FuncBody_13)) == (MR_mktag((MR_Integer) 1)));
#line 632 "ml_tailcall.m"
            if ((ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__succeeded)
#line 632 "ml_tailcall.m"
              {
#line 632 "ml_tailcall.m"
                ml_backend__ml_tailcall__Body_16 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tailcall__FuncBody_13), (MR_Integer) 1);
#line 648 "ml_tailcall.m"
                {
#line 648 "ml_tailcall.m"
                  ml_backend__ml_util__statement_contains_statement_2_p_0(ml_backend__ml_tailcall__Body_16, &(ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_env_0__SubStatement_39, ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0_5, &ml_backend__ml_tailcall__env);
                }
#line 632 "ml_tailcall.m"
              }
#line 631 "ml_tailcall.m"
          }
#line 634 "ml_tailcall.m"
        else
#line 634 "ml_tailcall.m"
          {
#line 634 "ml_tailcall.m"
          }
#line 627 "ml_tailcall.m"
    }
#line 624 "ml_tailcall.m"
  }
#line 624 "ml_tailcall.m"
}

#line 621 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_2(
#line 621 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 621 "ml_tailcall.m"
{
#line 621 "ml_tailcall.m"
  {
#line 621 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 621 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__Defn_17 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__conv0_Defn_17);
#line 621 "ml_tailcall.m"
    {
#line 621 "ml_tailcall.m"
      ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_1(ml_backend__ml_tailcall__env_ptr);
#line 621 "ml_tailcall.m"
      return;
    }
#line 621 "ml_tailcall.m"
  }
#line 621 "ml_tailcall.m"
}

#line 611 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_1(
#line 611 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 611 "ml_tailcall.m"
{
#line 611 "ml_tailcall.m"
  {
#line 611 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 622 "ml_tailcall.m"
    {
#line 622 "ml_tailcall.m"
      ml_backend__ml_tailcall__nontailcall_in_defn_3_p_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__MLDS_ModuleName_13, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__Defn_17, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__Warning_4, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__cont, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__cont_env_ptr);
#line 622 "ml_tailcall.m"
      return;
    }
#line 611 "ml_tailcall.m"
  }
#line 611 "ml_tailcall.m"
}

#line 609 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0(
#line 609 "ml_tailcall.m"
  MR_Word ml_backend__ml_tailcall__MLDS_3,
#line 609 "ml_tailcall.m"
  MR_Word * ml_backend__ml_tailcall__Warning_4,
#line 609 "ml_tailcall.m"
  MR_Cont ml_backend__ml_tailcall__cont,
#line 609 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__cont_env_ptr)
#line 609 "ml_tailcall.m"
{
#line 609 "ml_tailcall.m"
  {
#line 609 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0_s ml_backend__ml_tailcall__env;

#line 609 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__Warning_4 = ml_backend__ml_tailcall__Warning_4;
#line 609 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__cont = ml_backend__ml_tailcall__cont;
#line 609 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__cont_env_ptr = ml_backend__ml_tailcall__cont_env_ptr;
#line 611 "ml_tailcall.m"
    {
#line 611 "ml_tailcall.m"
      MR_bool ml_backend__ml_tailcall__succeeded;
#line 611 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__ModuleName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__MLDS_3, (MR_Integer) 0)));
#line 611 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__Defns_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__MLDS_3, (MR_Integer) 4)));
#line 612 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall___ForeignCode_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__MLDS_3, (MR_Integer) 1)));
#line 612 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall___Imports_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__MLDS_3, (MR_Integer) 2)));
#line 612 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall___GlobalData_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__MLDS_3, (MR_Integer) 3)));
#line 612 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall___InitPreds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__MLDS_3, (MR_Integer) 5)));
#line 612 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall___FinalPreds_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__MLDS_3, (MR_Integer) 6)));
#line 612 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall___ExportedEnums_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__MLDS_3, (MR_Integer) 7)));

#line 614 "ml_tailcall.m"
      {
#line 614 "ml_tailcall.m"
        (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__MLDS_ModuleName_13 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_tailcall__ModuleName_5);
      }
#line 621 "ml_tailcall.m"
      {
#line 621 "ml_tailcall.m"
        mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, &(ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_env_0__conv0_Defn_17, ml_backend__ml_tailcall__Defns_9, ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0_2, &ml_backend__ml_tailcall__env);
      }
#line 611 "ml_tailcall.m"
    }
#line 609 "ml_tailcall.m"
  }
#line 609 "ml_tailcall.m"
}

#line 552 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_1(
#line 552 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 552 "ml_tailcall.m"
{
#line 552 "ml_tailcall.m"
  {
#line 552 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 552 "ml_tailcall.m"
    MR_builtin_longjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__commit_0, 1);
#line 552 "ml_tailcall.m"
  }
#line 552 "ml_tailcall.m"
}

#line 585 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_3(
#line 585 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 585 "ml_tailcall.m"
{
#line 585 "ml_tailcall.m"
  {
#line 585 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 585 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_75 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv0_Locals_75);
#line 585 "ml_tailcall.m"
    {
#line 585 "ml_tailcall.m"
      ml_backend__ml_tailcall__check_const_2_f_0_2(ml_backend__ml_tailcall__env_ptr);
#line 585 "ml_tailcall.m"
      return;
    }
#line 585 "ml_tailcall.m"
  }
#line 585 "ml_tailcall.m"
}

#line 552 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_4(
#line 552 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 552 "ml_tailcall.m"
{
#line 552 "ml_tailcall.m"
  {
#line 552 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 553 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_70)) == (MR_mktag((MR_Integer) 1)));
#line 553 "ml_tailcall.m"
    if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
#line 553 "ml_tailcall.m"
      {
#line 553 "ml_tailcall.m"
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_70, (MR_Integer) 0)));
#line 552 "ml_tailcall.m"
        {
#line 553 "ml_tailcall.m"
          (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_69_69)) == (MR_mktag((MR_Integer) 1)));
#line 553 "ml_tailcall.m"
          if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
#line 553 "ml_tailcall.m"
            {
#line 553 "ml_tailcall.m"
              (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_71_71 = (MR_Word) MR_body(((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_69_69), (MR_Integer) 1);
#line 552 "ml_tailcall.m"
              {
#line 553 "ml_tailcall.m"
                {
#line 553 "ml_tailcall.m"
                  (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = ml_backend__mlds____Unify____mlds_var_name_0_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__VarName_11, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_71_71);
                }
#line 553 "ml_tailcall.m"
                if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
#line 553 "ml_tailcall.m"
                  {
#line 553 "ml_tailcall.m"
                    ml_backend__ml_tailcall__check_const_2_f_0_1(ml_backend__ml_tailcall__env_ptr);
#line 553 "ml_tailcall.m"
                    return;
                  }
#line 552 "ml_tailcall.m"
              }
#line 553 "ml_tailcall.m"
            }
#line 552 "ml_tailcall.m"
        }
#line 553 "ml_tailcall.m"
      }
#line 552 "ml_tailcall.m"
  }
#line 552 "ml_tailcall.m"
}

#line 588 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_6(
#line 588 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 588 "ml_tailcall.m"
{
#line 588 "ml_tailcall.m"
  {
#line 588 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 588 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_77 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv1_Defn_77);
#line 588 "ml_tailcall.m"
    {
#line 588 "ml_tailcall.m"
      ml_backend__ml_tailcall__check_const_2_f_0_5(ml_backend__ml_tailcall__env_ptr);
#line 588 "ml_tailcall.m"
      return;
    }
#line 588 "ml_tailcall.m"
  }
#line 588 "ml_tailcall.m"
}

#line 587 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_5(
#line 587 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 587 "ml_tailcall.m"
{
#line 587 "ml_tailcall.m"
  {
#line 587 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 587 "ml_tailcall.m"
    {
#line 589 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_78_78;
#line 589 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_79_79;
#line 589 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_80_80;

#line 589 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_77, (MR_Integer) 0)));
#line 589 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_77, (MR_Integer) 1)));
#line 589 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_77, (MR_Integer) 2)));
#line 589 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_77, (MR_Integer) 3)));
#line 589 "ml_tailcall.m"
      {
#line 589 "ml_tailcall.m"
        ml_backend__ml_tailcall__check_const_2_f_0_4(ml_backend__ml_tailcall__env_ptr);
#line 589 "ml_tailcall.m"
        return;
      }
#line 587 "ml_tailcall.m"
    }
#line 587 "ml_tailcall.m"
  }
#line 587 "ml_tailcall.m"
}

#line 592 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_8(
#line 592 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 592 "ml_tailcall.m"
{
#line 592 "ml_tailcall.m"
  {
#line 592 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 592 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_82 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv2_Param_82);
#line 592 "ml_tailcall.m"
    {
#line 592 "ml_tailcall.m"
      ml_backend__ml_tailcall__check_const_2_f_0_7(ml_backend__ml_tailcall__env_ptr);
#line 592 "ml_tailcall.m"
      return;
    }
#line 592 "ml_tailcall.m"
  }
#line 592 "ml_tailcall.m"
}

#line 591 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_7(
#line 591 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 591 "ml_tailcall.m"
{
#line 591 "ml_tailcall.m"
  {
#line 591 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 591 "ml_tailcall.m"
    {
#line 593 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_83_83;
#line 593 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_84_84;

#line 593 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_82, (MR_Integer) 0)));
#line 593 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_82, (MR_Integer) 1)));
#line 593 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_82, (MR_Integer) 2)));
#line 593 "ml_tailcall.m"
      {
#line 593 "ml_tailcall.m"
        ml_backend__ml_tailcall__check_const_2_f_0_4(ml_backend__ml_tailcall__env_ptr);
#line 593 "ml_tailcall.m"
        return;
      }
#line 591 "ml_tailcall.m"
    }
#line 591 "ml_tailcall.m"
  }
#line 591 "ml_tailcall.m"
}

#line 552 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_2(
#line 552 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 552 "ml_tailcall.m"
{
#line 552 "ml_tailcall.m"
  {
#line 552 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 590 "ml_tailcall.m"
    if (((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_75)) == (MR_mktag((MR_Integer) 1))))
#line 587 "ml_tailcall.m"
      {
#line 587 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Defns_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_75, (MR_Integer) 0)));

#line 588 "ml_tailcall.m"
        {
#line 588 "ml_tailcall.m"
          mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv1_Defn_77, ml_backend__ml_tailcall__Defns_76, ml_backend__ml_tailcall__check_const_2_f_0_6, ml_backend__ml_tailcall__env_ptr);
        }
#line 587 "ml_tailcall.m"
      }
#line 590 "ml_tailcall.m"
    else
#line 591 "ml_tailcall.m"
      {
#line 591 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Params_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_75, (MR_Integer) 0)));

#line 592 "ml_tailcall.m"
        {
#line 592 "ml_tailcall.m"
          mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv2_Param_82, ml_backend__ml_tailcall__Params_81, ml_backend__ml_tailcall__check_const_2_f_0_8, ml_backend__ml_tailcall__env_ptr);
        }
#line 591 "ml_tailcall.m"
      }
#line 552 "ml_tailcall.m"
  }
#line 552 "ml_tailcall.m"
}

#line 552 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_9(
#line 552 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 552 "ml_tailcall.m"
{
#line 552 "ml_tailcall.m"
  {
#line 552 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 552 "ml_tailcall.m"
    if (MR_builtin_setjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__commit_0) == 0)
#line 552 "ml_tailcall.m"
      {
#line 552 "ml_tailcall.m"
        {
#line 585 "ml_tailcall.m"
          {
#line 585 "ml_tailcall.m"
            mercury__list__member_2_p_1((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_local_defns_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv0_Locals_75, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_5, ml_backend__ml_tailcall__check_const_2_f_0_3, ml_backend__ml_tailcall__env_ptr);
          }
#line 552 "ml_tailcall.m"
        }
#line 552 "ml_tailcall.m"
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = MR_FALSE;
#line 552 "ml_tailcall.m"
      }
#line 552 "ml_tailcall.m"
    else
#line 552 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = MR_TRUE;
#line 552 "ml_tailcall.m"
  }
#line 552 "ml_tailcall.m"
}

#line 574 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_10(
#line 574 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 574 "ml_tailcall.m"
{
#line 574 "ml_tailcall.m"
  {
#line 574 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 574 "ml_tailcall.m"
    MR_builtin_longjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__commit_1, 1);
#line 574 "ml_tailcall.m"
  }
#line 574 "ml_tailcall.m"
}

#line 585 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_12(
#line 585 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 585 "ml_tailcall.m"
{
#line 585 "ml_tailcall.m"
  {
#line 585 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 585 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_50 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv3_Locals_50);
#line 585 "ml_tailcall.m"
    {
#line 585 "ml_tailcall.m"
      ml_backend__ml_tailcall__check_const_2_f_0_11(ml_backend__ml_tailcall__env_ptr);
#line 585 "ml_tailcall.m"
      return;
    }
#line 585 "ml_tailcall.m"
  }
#line 585 "ml_tailcall.m"
}

#line 574 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_13(
#line 574 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 574 "ml_tailcall.m"
{
#line 574 "ml_tailcall.m"
  {
#line 574 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 574 "ml_tailcall.m"
    {
#line 575 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall___PredId_38;

#line 575 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41)) == (MR_mktag((MR_Integer) 2)));
#line 575 "ml_tailcall.m"
      if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
#line 575 "ml_tailcall.m"
        {
#line 575 "ml_tailcall.m"
          {
#line 575 "ml_tailcall.m"
            (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41, (MR_Integer) 0)));
#line 575 "ml_tailcall.m"
            (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41, (MR_Integer) 1)));
#line 575 "ml_tailcall.m"
            (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41, (MR_Integer) 2)));
#line 575 "ml_tailcall.m"
            ml_backend__ml_tailcall___PredId_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41, (MR_Integer) 3)));
#line 575 "ml_tailcall.m"
          }
#line 574 "ml_tailcall.m"
          {
#line 575 "ml_tailcall.m"
            {
#line 575 "ml_tailcall.m"
              (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = ml_backend__mlds____Unify____mlds_pred_label_0_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__PredLabel_35, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_42_42);
            }
#line 574 "ml_tailcall.m"
            if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
#line 574 "ml_tailcall.m"
              {
#line 575 "ml_tailcall.m"
                (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__ProcId_36 == (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_43_43);
#line 574 "ml_tailcall.m"
                if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
#line 574 "ml_tailcall.m"
                  {
#line 3744 "ml_backend.ml_tailcall.c"
                    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__TypeInfo_24_47 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[5];
#line 575 "ml_tailcall.m"
                    {
#line 575 "ml_tailcall.m"
                      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = mercury__builtin__unify_2_p_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__TypeInfo_24_47, ((MR_Box) ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__MaybeSeqNum_30)), ((MR_Box) ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_44_44)));
                    }
#line 575 "ml_tailcall.m"
                    if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
#line 575 "ml_tailcall.m"
                      {
#line 575 "ml_tailcall.m"
                        ml_backend__ml_tailcall__check_const_2_f_0_10(ml_backend__ml_tailcall__env_ptr);
#line 575 "ml_tailcall.m"
                        return;
                      }
#line 574 "ml_tailcall.m"
                  }
#line 574 "ml_tailcall.m"
              }
#line 574 "ml_tailcall.m"
          }
#line 575 "ml_tailcall.m"
        }
#line 574 "ml_tailcall.m"
    }
#line 574 "ml_tailcall.m"
  }
#line 574 "ml_tailcall.m"
}

#line 588 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_15(
#line 588 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 588 "ml_tailcall.m"
{
#line 588 "ml_tailcall.m"
  {
#line 588 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 588 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_52 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv4_Defn_52);
#line 588 "ml_tailcall.m"
    {
#line 588 "ml_tailcall.m"
      ml_backend__ml_tailcall__check_const_2_f_0_14(ml_backend__ml_tailcall__env_ptr);
#line 588 "ml_tailcall.m"
      return;
    }
#line 588 "ml_tailcall.m"
  }
#line 588 "ml_tailcall.m"
}

#line 587 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_14(
#line 587 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 587 "ml_tailcall.m"
{
#line 587 "ml_tailcall.m"
  {
#line 587 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 587 "ml_tailcall.m"
    {
#line 589 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_53_53;
#line 589 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_54_54;
#line 589 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_55_55;

#line 589 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_52, (MR_Integer) 0)));
#line 589 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_52, (MR_Integer) 1)));
#line 589 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_52, (MR_Integer) 2)));
#line 589 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_52, (MR_Integer) 3)));
#line 589 "ml_tailcall.m"
      {
#line 589 "ml_tailcall.m"
        ml_backend__ml_tailcall__check_const_2_f_0_13(ml_backend__ml_tailcall__env_ptr);
#line 589 "ml_tailcall.m"
        return;
      }
#line 587 "ml_tailcall.m"
    }
#line 587 "ml_tailcall.m"
  }
#line 587 "ml_tailcall.m"
}

#line 592 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_17(
#line 592 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 592 "ml_tailcall.m"
{
#line 592 "ml_tailcall.m"
  {
#line 592 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 592 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_57 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv5_Param_57);
#line 592 "ml_tailcall.m"
    {
#line 592 "ml_tailcall.m"
      ml_backend__ml_tailcall__check_const_2_f_0_16(ml_backend__ml_tailcall__env_ptr);
#line 592 "ml_tailcall.m"
      return;
    }
#line 592 "ml_tailcall.m"
  }
#line 592 "ml_tailcall.m"
}

#line 591 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_16(
#line 591 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 591 "ml_tailcall.m"
{
#line 591 "ml_tailcall.m"
  {
#line 591 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 591 "ml_tailcall.m"
    {
#line 593 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_58_58;
#line 593 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_59_59;

#line 593 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_57, (MR_Integer) 0)));
#line 593 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_57, (MR_Integer) 1)));
#line 593 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_57, (MR_Integer) 2)));
#line 593 "ml_tailcall.m"
      {
#line 593 "ml_tailcall.m"
        ml_backend__ml_tailcall__check_const_2_f_0_13(ml_backend__ml_tailcall__env_ptr);
#line 593 "ml_tailcall.m"
        return;
      }
#line 591 "ml_tailcall.m"
    }
#line 591 "ml_tailcall.m"
  }
#line 591 "ml_tailcall.m"
}

#line 574 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_11(
#line 574 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 574 "ml_tailcall.m"
{
#line 574 "ml_tailcall.m"
  {
#line 574 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 590 "ml_tailcall.m"
    if (((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_50)) == (MR_mktag((MR_Integer) 1))))
#line 587 "ml_tailcall.m"
      {
#line 587 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Defns_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_50, (MR_Integer) 0)));

#line 588 "ml_tailcall.m"
        {
#line 588 "ml_tailcall.m"
          mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv4_Defn_52, ml_backend__ml_tailcall__Defns_51, ml_backend__ml_tailcall__check_const_2_f_0_15, ml_backend__ml_tailcall__env_ptr);
        }
#line 587 "ml_tailcall.m"
      }
#line 590 "ml_tailcall.m"
    else
#line 591 "ml_tailcall.m"
      {
#line 591 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Params_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_50, (MR_Integer) 0)));

#line 592 "ml_tailcall.m"
        {
#line 592 "ml_tailcall.m"
          mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv5_Param_57, ml_backend__ml_tailcall__Params_56, ml_backend__ml_tailcall__check_const_2_f_0_17, ml_backend__ml_tailcall__env_ptr);
        }
#line 591 "ml_tailcall.m"
      }
#line 574 "ml_tailcall.m"
  }
#line 574 "ml_tailcall.m"
}

#line 574 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_18(
#line 574 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 574 "ml_tailcall.m"
{
#line 574 "ml_tailcall.m"
  {
#line 574 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 574 "ml_tailcall.m"
    if (MR_builtin_setjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__commit_1) == 0)
#line 574 "ml_tailcall.m"
      {
#line 574 "ml_tailcall.m"
        {
#line 585 "ml_tailcall.m"
          {
#line 585 "ml_tailcall.m"
            mercury__list__member_2_p_1((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_local_defns_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv3_Locals_50, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_5, ml_backend__ml_tailcall__check_const_2_f_0_12, ml_backend__ml_tailcall__env_ptr);
          }
#line 574 "ml_tailcall.m"
        }
#line 574 "ml_tailcall.m"
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = MR_FALSE;
#line 574 "ml_tailcall.m"
      }
#line 574 "ml_tailcall.m"
    else
#line 574 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = MR_TRUE;
#line 574 "ml_tailcall.m"
  }
#line 574 "ml_tailcall.m"
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
      if (((MR_tag((MR_Word) ml_backend__ml_tailcall__Const_4)) == (MR_mktag((MR_Integer) 1))))
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
#line 552 "ml_tailcall.m"
              {
#line 552 "ml_tailcall.m"
                ml_backend__ml_tailcall__check_const_2_f_0_9(&ml_backend__ml_tailcall__env);
              }
#line 518 "ml_tailcall.m"
              if ((ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
#line 517 "ml_tailcall.m"
                ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 0;
#line 518 "ml_tailcall.m"
              else
#line 519 "ml_tailcall.m"
                ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
#line 515 "ml_tailcall.m"
            }
#line 515 "ml_tailcall.m"
          else
#line 522 "ml_tailcall.m"
            ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
#line 513 "ml_tailcall.m"
        }
#line 506 "ml_tailcall.m"
      else
#line 506 "ml_tailcall.m"
        if (((((MR_tag((MR_Word) ml_backend__ml_tailcall__Const_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Const_4, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 506 "ml_tailcall.m"
          {
#line 506 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__CodeAddr_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Const_4, (MR_Integer) 1)));
#line 561 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__QualifiedProcLabel_28;
#line 561 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__ProcLabel_34;
#line 571 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall___ModuleName_32;
#line 571 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall___QualKind_33;

#line 565 "ml_tailcall.m"
            if (((MR_tag((MR_Word) ml_backend__ml_tailcall__CodeAddr_7)) == (MR_mktag((MR_Integer) 1))))
#line 566 "ml_tailcall.m"
              {
#line 566 "ml_tailcall.m"
                MR_Integer ml_backend__ml_tailcall__SeqNum_31;
#line 566 "ml_tailcall.m"
                MR_Word ml_backend__ml_tailcall___Sig_39;

#line 566 "ml_tailcall.m"
                ml_backend__ml_tailcall__QualifiedProcLabel_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_7, (MR_Integer) 0)));
#line 566 "ml_tailcall.m"
                ml_backend__ml_tailcall__SeqNum_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_7, (MR_Integer) 1)));
#line 566 "ml_tailcall.m"
                ml_backend__ml_tailcall___Sig_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_7, (MR_Integer) 2)));
#line 567 "ml_tailcall.m"
                {
#line 567 "ml_tailcall.m"
                  MR_Word base;
#line 567 "ml_tailcall.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 567 "ml_tailcall.m"
                  (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__MaybeSeqNum_30 = base;
#line 567 "ml_tailcall.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__SeqNum_31));
#line 567 "ml_tailcall.m"
                }
#line 566 "ml_tailcall.m"
              }
#line 565 "ml_tailcall.m"
            else
#line 563 "ml_tailcall.m"
              {
#line 563 "ml_tailcall.m"
                MR_Word ml_backend__ml_tailcall___Sig_29;

#line 563 "ml_tailcall.m"
                ml_backend__ml_tailcall__QualifiedProcLabel_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__CodeAddr_7, (MR_Integer) 0)));
#line 563 "ml_tailcall.m"
                ml_backend__ml_tailcall___Sig_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__CodeAddr_7, (MR_Integer) 1)));
#line 564 "ml_tailcall.m"
                (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__MaybeSeqNum_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 563 "ml_tailcall.m"
              }
#line 571 "ml_tailcall.m"
            ml_backend__ml_tailcall___ModuleName_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualifiedProcLabel_28, (MR_Integer) 0)));
#line 571 "ml_tailcall.m"
            ml_backend__ml_tailcall___QualKind_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualifiedProcLabel_28, (MR_Integer) 1)));
#line 571 "ml_tailcall.m"
            ml_backend__ml_tailcall__ProcLabel_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualifiedProcLabel_28, (MR_Integer) 2)));
#line 572 "ml_tailcall.m"
            (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__PredLabel_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ProcLabel_34, (MR_Integer) 0)));
#line 572 "ml_tailcall.m"
            (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__ProcId_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ProcLabel_34, (MR_Integer) 1)));
#line 574 "ml_tailcall.m"
            {
#line 574 "ml_tailcall.m"
              ml_backend__ml_tailcall__check_const_2_f_0_18(&ml_backend__ml_tailcall__env);
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
        else
#line 537 "ml_tailcall.m"
          ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
#line 506 "ml_tailcall.m"
      return ml_backend__ml_tailcall__MayYieldDanglingStackRef_6;
#line 506 "ml_tailcall.m"
    }
#line 502 "ml_tailcall.m"
  }
#line 502 "ml_tailcall.m"
}

#line 552 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_1(
#line 552 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 552 "ml_tailcall.m"
{
#line 552 "ml_tailcall.m"
  {
#line 552 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 552 "ml_tailcall.m"
    MR_builtin_longjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__commit_0, 1);
#line 552 "ml_tailcall.m"
  }
#line 552 "ml_tailcall.m"
}

#line 585 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_3(
#line 585 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 585 "ml_tailcall.m"
{
#line 585 "ml_tailcall.m"
  {
#line 585 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 585 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_29 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv0_Locals_29);
#line 585 "ml_tailcall.m"
    {
#line 585 "ml_tailcall.m"
      ml_backend__ml_tailcall__check_lval_2_f_0_2(ml_backend__ml_tailcall__env_ptr);
#line 585 "ml_tailcall.m"
      return;
    }
#line 585 "ml_tailcall.m"
  }
#line 585 "ml_tailcall.m"
}

#line 552 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_4(
#line 552 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 552 "ml_tailcall.m"
{
#line 552 "ml_tailcall.m"
  {
#line 552 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 553 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Local_24)) == (MR_mktag((MR_Integer) 1)));
#line 553 "ml_tailcall.m"
    if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded)
#line 553 "ml_tailcall.m"
      {
#line 553 "ml_tailcall.m"
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Local_24, (MR_Integer) 0)));
#line 552 "ml_tailcall.m"
        {
#line 553 "ml_tailcall.m"
          (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 553 "ml_tailcall.m"
          if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded)
#line 553 "ml_tailcall.m"
            {
#line 553 "ml_tailcall.m"
              (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__V_25_25 = (MR_Word) MR_body(((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__V_23_23), (MR_Integer) 1);
#line 552 "ml_tailcall.m"
              {
#line 553 "ml_tailcall.m"
                {
#line 553 "ml_tailcall.m"
                  (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded = ml_backend__mlds____Unify____mlds_var_name_0_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__VarName_21, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__V_25_25);
                }
#line 553 "ml_tailcall.m"
                if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded)
#line 553 "ml_tailcall.m"
                  {
#line 553 "ml_tailcall.m"
                    ml_backend__ml_tailcall__check_lval_2_f_0_1(ml_backend__ml_tailcall__env_ptr);
#line 553 "ml_tailcall.m"
                    return;
                  }
#line 552 "ml_tailcall.m"
              }
#line 553 "ml_tailcall.m"
            }
#line 552 "ml_tailcall.m"
        }
#line 553 "ml_tailcall.m"
      }
#line 552 "ml_tailcall.m"
  }
#line 552 "ml_tailcall.m"
}

#line 588 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_6(
#line 588 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 588 "ml_tailcall.m"
{
#line 588 "ml_tailcall.m"
  {
#line 588 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 588 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Defn_31 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv1_Defn_31);
#line 588 "ml_tailcall.m"
    {
#line 588 "ml_tailcall.m"
      ml_backend__ml_tailcall__check_lval_2_f_0_5(ml_backend__ml_tailcall__env_ptr);
#line 588 "ml_tailcall.m"
      return;
    }
#line 588 "ml_tailcall.m"
  }
#line 588 "ml_tailcall.m"
}

#line 587 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_5(
#line 587 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 587 "ml_tailcall.m"
{
#line 587 "ml_tailcall.m"
  {
#line 587 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 587 "ml_tailcall.m"
    {
#line 589 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_32_32;
#line 589 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_33_33;
#line 589 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_34_34;

#line 589 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Local_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Defn_31, (MR_Integer) 0)));
#line 589 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Defn_31, (MR_Integer) 1)));
#line 589 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Defn_31, (MR_Integer) 2)));
#line 589 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Defn_31, (MR_Integer) 3)));
#line 589 "ml_tailcall.m"
      {
#line 589 "ml_tailcall.m"
        ml_backend__ml_tailcall__check_lval_2_f_0_4(ml_backend__ml_tailcall__env_ptr);
#line 589 "ml_tailcall.m"
        return;
      }
#line 587 "ml_tailcall.m"
    }
#line 587 "ml_tailcall.m"
  }
#line 587 "ml_tailcall.m"
}

#line 592 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_8(
#line 592 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 592 "ml_tailcall.m"
{
#line 592 "ml_tailcall.m"
  {
#line 592 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 592 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Param_36 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv2_Param_36);
#line 592 "ml_tailcall.m"
    {
#line 592 "ml_tailcall.m"
      ml_backend__ml_tailcall__check_lval_2_f_0_7(ml_backend__ml_tailcall__env_ptr);
#line 592 "ml_tailcall.m"
      return;
    }
#line 592 "ml_tailcall.m"
  }
#line 592 "ml_tailcall.m"
}

#line 591 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_7(
#line 591 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 591 "ml_tailcall.m"
{
#line 591 "ml_tailcall.m"
  {
#line 591 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 591 "ml_tailcall.m"
    {
#line 593 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_37_37;
#line 593 "ml_tailcall.m"
      MR_Word ml_backend__ml_tailcall__V_38_38;

#line 593 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Local_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Param_36, (MR_Integer) 0)));
#line 593 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Param_36, (MR_Integer) 1)));
#line 593 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Param_36, (MR_Integer) 2)));
#line 593 "ml_tailcall.m"
      {
#line 593 "ml_tailcall.m"
        ml_backend__ml_tailcall__check_lval_2_f_0_4(ml_backend__ml_tailcall__env_ptr);
#line 593 "ml_tailcall.m"
        return;
      }
#line 591 "ml_tailcall.m"
    }
#line 591 "ml_tailcall.m"
  }
#line 591 "ml_tailcall.m"
}

#line 552 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_2(
#line 552 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 552 "ml_tailcall.m"
{
#line 552 "ml_tailcall.m"
  {
#line 552 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 590 "ml_tailcall.m"
    if (((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_29)) == (MR_mktag((MR_Integer) 1))))
#line 587 "ml_tailcall.m"
      {
#line 587 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Defns_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_29, (MR_Integer) 0)));

#line 588 "ml_tailcall.m"
        {
#line 588 "ml_tailcall.m"
          mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv1_Defn_31, ml_backend__ml_tailcall__Defns_30, ml_backend__ml_tailcall__check_lval_2_f_0_6, ml_backend__ml_tailcall__env_ptr);
        }
#line 587 "ml_tailcall.m"
      }
#line 590 "ml_tailcall.m"
    else
#line 591 "ml_tailcall.m"
      {
#line 591 "ml_tailcall.m"
        MR_Word ml_backend__ml_tailcall__Params_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_29, (MR_Integer) 0)));

#line 592 "ml_tailcall.m"
        {
#line 592 "ml_tailcall.m"
          mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv2_Param_36, ml_backend__ml_tailcall__Params_35, ml_backend__ml_tailcall__check_lval_2_f_0_8, ml_backend__ml_tailcall__env_ptr);
        }
#line 591 "ml_tailcall.m"
      }
#line 552 "ml_tailcall.m"
  }
#line 552 "ml_tailcall.m"
}

#line 552 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_9(
#line 552 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 552 "ml_tailcall.m"
{
#line 552 "ml_tailcall.m"
  {
#line 552 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 552 "ml_tailcall.m"
    if (MR_builtin_setjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__commit_0) == 0)
#line 552 "ml_tailcall.m"
      {
#line 552 "ml_tailcall.m"
        {
#line 585 "ml_tailcall.m"
          {
#line 585 "ml_tailcall.m"
            mercury__list__member_2_p_1((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_local_defns_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv0_Locals_29, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_5, ml_backend__ml_tailcall__check_lval_2_f_0_3, ml_backend__ml_tailcall__env_ptr);
          }
#line 552 "ml_tailcall.m"
        }
#line 552 "ml_tailcall.m"
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded = MR_FALSE;
#line 552 "ml_tailcall.m"
      }
#line 552 "ml_tailcall.m"
    else
#line 552 "ml_tailcall.m"
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded = MR_TRUE;
#line 552 "ml_tailcall.m"
  }
#line 552 "ml_tailcall.m"
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
      if (((MR_tag((MR_Word) ml_backend__ml_tailcall__Lval_4)) == (MR_mktag((MR_Integer) 0))))
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
      else
#line 475 "ml_tailcall.m"
        if (((MR_tag((MR_Word) ml_backend__ml_tailcall__Lval_4)) == (MR_mktag((MR_Integer) 3))))
#line 475 "ml_tailcall.m"
          {
#line 475 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__Var0_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 0)));
#line 475 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 1)));
#line 550 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall___ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var0_7, (MR_Integer) 0)));
#line 550 "ml_tailcall.m"
            MR_Word ml_backend__ml_tailcall___QualKind_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var0_7, (MR_Integer) 1)));

#line 550 "ml_tailcall.m"
            (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_lval_3_f_0_env_0__VarName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var0_7, (MR_Integer) 2)));
#line 552 "ml_tailcall.m"
            {
#line 552 "ml_tailcall.m"
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
        else
#line 491 "ml_tailcall.m"
          ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
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
        if (((MR_tag((MR_Word) ml_backend__ml_tailcall__Rval_4)) == (MR_mktag((MR_Integer) 1))))
#line 436 "ml_tailcall.m"
          ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
#line 434 "ml_tailcall.m"
        else
#line 434 "ml_tailcall.m"
          if (((MR_tag((MR_Word) ml_backend__ml_tailcall__Rval_4)) == (MR_mktag((MR_Integer) 2))))
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
          else
#line 434 "ml_tailcall.m"
            if (((((MR_tag((MR_Word) ml_backend__ml_tailcall__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
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
            else
#line 434 "ml_tailcall.m"
              if (((((MR_tag((MR_Word) ml_backend__ml_tailcall__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
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
              else
#line 434 "ml_tailcall.m"
                if (((((MR_tag((MR_Word) ml_backend__ml_tailcall__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
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
                else
#line 434 "ml_tailcall.m"
                  if (((((MR_tag((MR_Word) ml_backend__ml_tailcall__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
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
                  else
#line 434 "ml_tailcall.m"
                    if (((((MR_tag((MR_Word) ml_backend__ml_tailcall__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
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
                    else
#line 465 "ml_tailcall.m"
                      ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 0;
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
        if (((MR_tag((MR_Word) ml_backend__ml_tailcall__Lval_3)) == (MR_mktag((MR_Integer) 0))))
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
        else
#line 383 "ml_tailcall.m"
          if (((MR_tag((MR_Word) ml_backend__ml_tailcall__Lval_3)) == (MR_mktag((MR_Integer) 3))))
#line 386 "ml_tailcall.m"
            ml_backend__ml_tailcall__IsLocal_4 = (MR_Integer) 0;
#line 383 "ml_tailcall.m"
          else
#line 399 "ml_tailcall.m"
            ml_backend__ml_tailcall__IsLocal_4 = (MR_Integer) 1;
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
    if (((MR_tag((MR_Word) ml_backend__ml_tailcall__Default0_7)) == (MR_mktag((MR_Integer) 1))))
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
    else
#line 346 "ml_tailcall.m"
      *ml_backend__ml_tailcall__Default_8 = ml_backend__ml_tailcall__Default0_7;
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
    if (((MR_tag((MR_Word) ml_backend__ml_tailcall__Stmt0_7)) == (MR_mktag((MR_Integer) 0))))
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
    else
#line 247 "ml_tailcall.m"
      if (((MR_tag((MR_Word) ml_backend__ml_tailcall__Stmt0_7)) == (MR_mktag((MR_Integer) 2))))
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
      else
#line 247 "ml_tailcall.m"
        if (((MR_tag((MR_Word) ml_backend__ml_tailcall__Stmt0_7)) == (MR_mktag((MR_Integer) 1))))
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
        else
#line 247 "ml_tailcall.m"
          if (((((MR_tag((MR_Word) ml_backend__ml_tailcall__Stmt0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
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
          else
#line 247 "ml_tailcall.m"
            if (((((MR_tag((MR_Word) ml_backend__ml_tailcall__Stmt0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
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
            else
#line 247 "ml_tailcall.m"
              if (((((MR_tag((MR_Word) ml_backend__ml_tailcall__Stmt0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
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
              else
#line 319 "ml_tailcall.m"
                *ml_backend__ml_tailcall__Stmt_8 = ml_backend__ml_tailcall__Stmt0_7;
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
    if (((MR_tag((MR_Word) ml_backend__ml_tailcall__DefnBody0_8)) == (MR_mktag((MR_Integer) 0))))
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
#line 6080 "ml_backend.ml_tailcall.c"
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
    else
#line 160 "ml_tailcall.m"
      if (((MR_tag((MR_Word) ml_backend__ml_tailcall__DefnBody0_8)) == (MR_mktag((MR_Integer) 1))))
#line 162 "ml_tailcall.m"
        *ml_backend__ml_tailcall__Defn_4 = ml_backend__ml_tailcall__Defn0_3;
#line 160 "ml_tailcall.m"
      else
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
#line 141 "ml_tailcall.m"
  }
#line 139 "ml_tailcall.m"
}

#line 600 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_3(
#line 600 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__closure_arg,
#line 600 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
#line 600 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
#line 600 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_3)
#line 600 "ml_tailcall.m"
{
#line 600 "ml_tailcall.m"
  {
#line 600 "ml_tailcall.m"
    MR_Box ml_backend__ml_tailcall__closure = ml_backend__ml_tailcall__closure_arg;

#line 600 "ml_tailcall.m"
    {
#line 600 "ml_tailcall.m"
      ml_backend__ml_tailcall__report_nontailcall_warning_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1));
#line 600 "ml_tailcall.m"
      return;
    }
#line 600 "ml_tailcall.m"
  }
#line 600 "ml_tailcall.m"
}

#line 599 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_1(
#line 599 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__env_ptr_arg)
#line 599 "ml_tailcall.m"
{
#line 599 "ml_tailcall.m"
  {
#line 599 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

#line 599 "ml_tailcall.m"
    *((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0__conv0_Warning_4));
#line 599 "ml_tailcall.m"
    {
#line 599 "ml_tailcall.m"
      ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0__cont)((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0__cont_env_ptr);
#line 599 "ml_tailcall.m"
      return;
    }
#line 599 "ml_tailcall.m"
  }
#line 599 "ml_tailcall.m"
}

#line 599 "ml_tailcall.m"
static void MR_CALL 
ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2(
#line 599 "ml_tailcall.m"
  MR_Box ml_backend__ml_tailcall__closure_arg,
#line 599 "ml_tailcall.m"
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
#line 599 "ml_tailcall.m"
  MR_Cont ml_backend__ml_tailcall__cont,
#line 599 "ml_tailcall.m"
  void * ml_backend__ml_tailcall__cont_env_ptr)
#line 599 "ml_tailcall.m"
{
#line 599 "ml_tailcall.m"
  {
#line 599 "ml_tailcall.m"
    struct ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0_s ml_backend__ml_tailcall__env;

#line 599 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0__wrapper_arg_1 = ml_backend__ml_tailcall__wrapper_arg_1;
#line 599 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0__cont = ml_backend__ml_tailcall__cont;
#line 599 "ml_tailcall.m"
    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0__cont_env_ptr = ml_backend__ml_tailcall__cont_env_ptr;
#line 599 "ml_tailcall.m"
    {
#line 599 "ml_tailcall.m"
      MR_Box ml_backend__ml_tailcall__closure = ml_backend__ml_tailcall__closure_arg;

#line 599 "ml_tailcall.m"
      {
#line 599 "ml_tailcall.m"
        ml_backend__ml_tailcall__nontailcall_in_mlds_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 3))), &(ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2_env_0__conv0_Warning_4, ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_1, &ml_backend__ml_tailcall__env);
      }
#line 599 "ml_tailcall.m"
    }
#line 599 "ml_tailcall.m"
  }
#line 599 "ml_tailcall.m"
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
#line 598 "ml_tailcall.m"
  {
#line 598 "ml_tailcall.m"
    MR_bool ml_backend__ml_tailcall__succeeded;
#line 598 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__TypeCtorInfo_15_15;
#line 598 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__Warnings_8;
#line 598 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_11_11;
#line 598 "ml_tailcall.m"
    MR_Word ml_backend__ml_tailcall__V_12_12;
#line 600 "ml_tailcall.m"
    MR_Box ml_backend__ml_tailcall__conv1_STATE_VARIABLE_IO_10;

#line 599 "ml_tailcall.m"
    {
#line 599 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 599 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_11_11, 0) = ((MR_Box) (&ml_backend__ml_tailcall_scalar_common_2[1]));
#line 599 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_11_11, 1) = ((MR_Box) (ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_2));
#line 599 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 599 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_11_11, 3) = ((MR_Box) (ml_backend__ml_tailcall__MLDS_6));
#line 599 "ml_tailcall.m"
    }
#line 6375 "ml_backend.ml_tailcall.c"
    ml_backend__ml_tailcall__TypeCtorInfo_15_15 = (MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_tailcall_warning_0;
#line 599 "ml_tailcall.m"
    {
#line 599 "ml_tailcall.m"
      mercury__solutions__solutions_2_p_1(ml_backend__ml_tailcall__TypeCtorInfo_15_15, ml_backend__ml_tailcall__V_11_11, &ml_backend__ml_tailcall__Warnings_8);
    }
#line 600 "ml_tailcall.m"
    {
#line 600 "ml_tailcall.m"
      ml_backend__ml_tailcall__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 600 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_12_12, 0) = ((MR_Box) (&ml_backend__ml_tailcall_scalar_common_4[0]));
#line 600 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_12_12, 1) = ((MR_Box) (ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0_3));
#line 600 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 600 "ml_tailcall.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_12_12, 3) = ((MR_Box) (ml_backend__ml_tailcall__Globals_5));
#line 600 "ml_tailcall.m"
    }
#line 600 "ml_tailcall.m"
    {
#line 600 "ml_tailcall.m"
      mercury__list__foldl_4_p_2(ml_backend__ml_tailcall__TypeCtorInfo_15_15, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__ml_tailcall__V_12_12, ml_backend__ml_tailcall__Warnings_8, ((MR_Box) ((MR_Integer) 0)), &ml_backend__ml_tailcall__conv1_STATE_VARIABLE_IO_10);
    }
#line 598 "ml_tailcall.m"
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
