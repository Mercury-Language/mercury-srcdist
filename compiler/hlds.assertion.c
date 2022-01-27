/*
** Automatically generated from `assertion.m'
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


/* :- module hlds.assertion. */
/* :- implementation. */

/*
INIT mercury__hlds__assertion__init
ENDINIT
*/

#include "hlds.assertion.mih"


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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
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



#line 306 "assertion.m"
struct hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_0_s {
#line 306 "assertion.m"
  MR_Box * hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__wrapper_arg_1;
#line 306 "assertion.m"
  MR_Cont hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__cont;
#line 306 "assertion.m"
  void * hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__cont_env_ptr;
#line 306 "assertion.m"
  MR_Word hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__conv0_HeadVar__5_5;
#line 306 "assertion.m"
};

#line 407 "assertion.m"
struct hlds__assertion__predicate_call_2_p_0_env_0_s {
#line 407 "assertion.m"
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__PredId_4;
#line 410 "assertion.m"
  MR_bool hlds__assertion__predicate_call_2_p_0_env_0__succeeded;
#line 410 "assertion.m"
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__Goals_5;
#line 411 "assertion.m"
  jmp_buf hlds__assertion__predicate_call_2_p_0_env_0__commit_0;
#line 411 "assertion.m"
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__TypeCtorInfo_40_40;
#line 411 "assertion.m"
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__TypeInfo_45_45;
#line 411 "assertion.m"
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__Call_7;
#line 411 "assertion.m"
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__Unifications_14;
#line 411 "assertion.m"
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__P_15;
#line 411 "assertion.m"
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__V_34_34;
#line 411 "assertion.m"
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__V_37_37;
#line 411 "assertion.m"
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__V_41_41;
#line 411 "assertion.m"
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__V_42_42;
#line 411 "assertion.m"
  MR_Box hlds__assertion__predicate_call_2_p_0_env_0__conv0_Call_7;
#line 407 "assertion.m"
};

#line 312 "assertion.m"
struct hlds__assertion__update_5_p_0_env_0_s {
#line 312 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__QCalls_7;
#line 312 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__UniversiallyQuantifiedVars_8;
#line 312 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__CallVars_9;
#line 312 "assertion.m"
  MR_Word * hlds__assertion__update_5_p_0_env_0__HeadVar__5_5;
#line 312 "assertion.m"
  MR_Cont hlds__assertion__update_5_p_0_env_0__cont;
#line 312 "assertion.m"
  void * hlds__assertion__update_5_p_0_env_0__cont_env_ptr;
#line 316 "assertion.m"
  MR_bool hlds__assertion__update_5_p_0_env_0__succeeded;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_61_61;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_62_62;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_63_63;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_76_76;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_77_77;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_78_78;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_79_79;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_80_80;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_81_81;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_82_82;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_84_84;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_86_86;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__StateA_10;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__StateB_11;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__LHSCalls_12;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__RHSCalls_13;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__PredId_14;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__SA_15;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__PairsL_16;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__Vs_17;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__SB_18;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__PairsR_19;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__Pairs0_21;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__Pairs_24;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__S0_25;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__S_26;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__AssocList_27;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_31_31;
#line 316 "assertion.m"
  MR_Integer hlds__assertion__update_5_p_0_env_0__V_33_33;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_34_34;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_35_35;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_36_36;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_37_37;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_38_38;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_39_39;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_40_40;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_41_41;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_42_42;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_43_43;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_44_44;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_46_46;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_47_47;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_48_48;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_49_49;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_51_51;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_52_52;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_64_64;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_65_65;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_66_66;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_67_67;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_68_68;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_69_69;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_70_70;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_71_71;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_72_72;
#line 316 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_73_73;
#line 260 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeCtorInfo_13_95;
#line 263 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeCtorInfo_14_96;
#line 312 "assertion.m"
};

#line 257 "assertion.m"
struct hlds__assertion__reorder_4_p_0_env_0_s {
#line 257 "assertion.m"
  MR_Word hlds__assertion__reorder_4_p_0_env_0__QCalls_2;
#line 257 "assertion.m"
  MR_Word * hlds__assertion__reorder_4_p_0_env_0__LHSCalls_3;
#line 257 "assertion.m"
  MR_Word * hlds__assertion__reorder_4_p_0_env_0__RHSCalls_4;
#line 257 "assertion.m"
  MR_Cont hlds__assertion__reorder_4_p_0_env_0__cont;
#line 257 "assertion.m"
  void * hlds__assertion__reorder_4_p_0_env_0__cont_env_ptr;
#line 260 "assertion.m"
  MR_Word hlds__assertion__reorder_4_p_0_env_0__TypeCtorInfo_13_13;
#line 263 "assertion.m"
  MR_Word hlds__assertion__reorder_4_p_0_env_0__TypeCtorInfo_14_14;
#line 257 "assertion.m"
};

#line 224 "assertion.m"
struct hlds__assertion__associative_5_p_0_env_0_s {
#line 224 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__PCalls_6;
#line 224 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__QCalls_7;
#line 224 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__UniversiallyQuantifiedVars_8;
#line 224 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__CallVars_9;
#line 224 "assertion.m"
  MR_Word * hlds__assertion__associative_5_p_0_env_0__HeadVar__5_5;
#line 229 "assertion.m"
  MR_bool hlds__assertion__associative_5_p_0_env_0__succeeded;
#line 229 "assertion.m"
  jmp_buf hlds__assertion__associative_5_p_0_env_0__commit_0;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_71_71;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_72_72;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_73_73;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_88_88;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_89_89;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_90_90;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_91_91;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_92_92;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_93_93;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_94_94;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_95_95;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_96_96;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_98_98;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_100_100;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_102_102;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__CallVarA_10;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__CallVarB_11;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__OutputVar_12;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__LHSCalls_13;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__RHSCalls_14;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__PredId_15;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__AB_16;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__PairsL_17;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__Vs_18;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__BC_19;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__PairsR_20;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__Pairs_22;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__A_23;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__B_24;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__C_25;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__ABC_26;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__AssocList_27;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_33_33;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_34_34;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_35_35;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_36_36;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_37_37;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_38_38;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_39_39;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_40_40;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_41_41;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_42_42;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_43_43;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_44_44;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_45_45;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_46_46;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_47_47;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_48_48;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_50_50;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_51_51;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_52_52;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_53_53;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_55_55;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_56_56;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_57_57;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_58_58;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_60_60;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_61_61;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_74_74;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_75_75;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_76_76;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_77_77;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_78_78;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_79_79;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_80_80;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_81_81;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_82_82;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_83_83;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_84_84;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_85_85;
#line 229 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_86_86;
#line 224 "assertion.m"
};

#line 124 "assertion.m"
struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s {
#line 124 "assertion.m"
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__PredId_8;
#line 377 "assertion.m"
  MR_bool hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded;
#line 410 "assertion.m"
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Goals_32;
#line 411 "assertion.m"
  jmp_buf hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__commit_0;
#line 411 "assertion.m"
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeCtorInfo_40_67;
#line 411 "assertion.m"
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeInfo_45_72;
#line 411 "assertion.m"
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Call_34;
#line 411 "assertion.m"
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Unifications_41;
#line 411 "assertion.m"
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__P_42;
#line 411 "assertion.m"
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_61_61;
#line 411 "assertion.m"
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_64_64;
#line 411 "assertion.m"
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_68_68;
#line 411 "assertion.m"
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_69_69;
#line 411 "assertion.m"
  MR_Box hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__conv0_Call_34;
#line 124 "assertion.m"
};


#line 536 "hlds.assertion.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 539 "hlds.assertion.c"
static const MR_FA_TypeInfo_Struct1 hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 542 "hlds.assertion.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__assertion__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 545 "hlds.assertion.c"
static const MR_FA_TypeInfo_Struct2 hlds__assertion__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 548 "hlds.assertion.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__assertion__pair__pti_pair_2__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 551 "hlds.assertion.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 554 "hlds.assertion.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 557 "hlds.assertion.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 560 "hlds.assertion.c"
static const MR_FA_TypeInfo_Struct2 hlds__assertion__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 563 "hlds.assertion.c"
static MR_bool MR_CALL 
hlds__assertion____Unify____subst_0_0_10001(
#line 566 "hlds.assertion.c"
  MR_Box hlds__assertion__wrapper_arg_1,
#line 568 "hlds.assertion.c"
  MR_Box hlds__assertion__wrapper_arg_2);

#line 571 "hlds.assertion.c"
static void MR_CALL 
hlds__assertion____Compare____subst_0_0_10001(
#line 574 "hlds.assertion.c"
  MR_Box * hlds__assertion__wrapper_arg_1,
#line 576 "hlds.assertion.c"
  MR_Box hlds__assertion__wrapper_arg_2,
#line 578 "hlds.assertion.c"
  MR_Box hlds__assertion__wrapper_arg_3);

#line 306 "assertion.m"
static void MR_CALL 
hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0_1(
#line 306 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 306 "assertion.m"
static void MR_CALL 
hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0_2(
#line 306 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 306 "assertion.m"
  MR_Box * hlds__assertion__wrapper_arg_1,
#line 306 "assertion.m"
  MR_Cont hlds__assertion__cont,
#line 306 "assertion.m"
  void * hlds__assertion__cont_env_ptr);

#line 415 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__predicate_call__415__1_1_p_0(
#line 415 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_35);

#line 337 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__update__337__1_2_p_0(
#line 337 "assertion.m"
  MR_Word hlds__assertion__SA_15,
#line 337 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_50);

#line 335 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__update__335__1_2_p_0(
#line 335 "assertion.m"
  MR_Word hlds__assertion__S0_25,
#line 335 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_45);

#line 324 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__update__324__1_1_p_0(
#line 324 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_32);

#line 288 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__process_one_side__288__1_1_p_0(
#line 288 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_17);

#line 250 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__associative__250__1_2_p_0(
#line 250 "assertion.m"
  MR_Word hlds__assertion__B_24,
#line 250 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_59);

#line 248 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__associative__248__1_2_p_0(
#line 248 "assertion.m"
  MR_Word hlds__assertion__A_23,
#line 248 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_54);

#line 246 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__associative__246__1_2_p_0(
#line 246 "assertion.m"
  MR_Word hlds__assertion__AB_16,
#line 246 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_49);

#line 150 "assertion.m"
static void MR_CALL 
hlds__assertion____Compare____subst_0_0(
#line 150 "assertion.m"
  MR_Word * hlds__assertion__HeadVar__1_1,
#line 150 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2,
#line 150 "assertion.m"
  MR_Word hlds__assertion__HeadVar__3_3);

#line 150 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion____Unify____subst_0_0(
#line 150 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 150 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2);

#line 775 "assertion.m"
static void MR_CALL 
hlds__assertion__normalise_goals_2_p_0(
#line 775 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 775 "assertion.m"
  MR_Word * hlds__assertion__HeadVar__2_2);

#line 766 "assertion.m"
static void MR_CALL 
hlds__assertion__normalise_cases_2_p_0(
#line 766 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 766 "assertion.m"
  MR_Word * hlds__assertion__HeadVar__2_2);

#line 758 "assertion.m"
static void MR_CALL 
hlds__assertion__normalise_conj_2_p_0(
#line 758 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 758 "assertion.m"
  MR_Word * hlds__assertion__HeadVar__2_2);

#line 692 "assertion.m"
static void MR_CALL 
hlds__assertion__normalise_goal_expr_2_p_0(
#line 692 "assertion.m"
  MR_Word hlds__assertion__GoalExpr0_3,
#line 692 "assertion.m"
  MR_Word * hlds__assertion__GoalExpr_4);

#line 674 "assertion.m"
static void MR_CALL 
hlds__assertion__update_pred_info_4_p_0(
#line 674 "assertion.m"
  MR_Integer hlds__assertion__AssertId_5,
#line 674 "assertion.m"
  MR_Word hlds__assertion__PredId_6,
#line 674 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Module_0_12,
#line 674 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Module_13);

#line 642 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_goals_cases_4_p_0(
#line 642 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 642 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2,
#line 642 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
#line 642 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4);

#line 634 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_goals_list_4_p_0(
#line 634 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 634 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2,
#line 634 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
#line 634 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4);

#line 617 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_unification_4_p_0(
#line 617 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 617 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2,
#line 617 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
#line 617 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4);

#line 609 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_vars_4_p_0(
#line 609 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 609 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2,
#line 609 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
#line 609 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4);

#line 599 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_var_4_p_0(
#line 599 "assertion.m"
  MR_Word hlds__assertion__VA_5,
#line 599 "assertion.m"
  MR_Word hlds__assertion__VB_6,
#line 599 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_9,
#line 599 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_10);

#line 590 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_goals_shorthand_4_p_0(
#line 590 "assertion.m"
  MR_Word hlds__assertion__ShortHandA_5,
#line 590 "assertion.m"
  MR_Word hlds__assertion__ShortHandB_6,
#line 590 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_12,
#line 590 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_13);

#line 579 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_reason_4_p_0(
#line 579 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 579 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2,
#line 579 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
#line 579 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4);

#line 571 "assertion.m"
static MR_Box MR_CALL 
hlds__assertion__equal_goal_exprs_4_p_0_2(
#line 571 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 571 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1);

#line 570 "assertion.m"
static MR_Box MR_CALL 
hlds__assertion__equal_goal_exprs_4_p_0_1(
#line 570 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 570 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1);

#line 514 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_goal_exprs_4_p_0(
#line 514 "assertion.m"
  MR_Word hlds__assertion__GoalExprA_5,
#line 514 "assertion.m"
  MR_Word hlds__assertion__GoalExprB_6,
#line 514 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_68,
#line 514 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_69);

#line 506 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_goals_4_p_0(
#line 506 "assertion.m"
  MR_Word hlds__assertion__GoalA_5,
#line 506 "assertion.m"
  MR_Word hlds__assertion__GoalB_6,
#line 506 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_12,
#line 506 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_13);

#line 485 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__goal_is_equivalence_3_p_0(
#line 485 "assertion.m"
  MR_Word hlds__assertion__Goal_4,
#line 485 "assertion.m"
  MR_Word * hlds__assertion__P_5,
#line 485 "assertion.m"
  MR_Word * hlds__assertion__Q_6);

#line 414 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__predicate_call_2_p_0_5(
#line 414 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 414 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1);

#line 411 "assertion.m"
static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_1(
#line 411 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 411 "assertion.m"
static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_3(
#line 411 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 411 "assertion.m"
static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_4(
#line 411 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 411 "assertion.m"
static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_2(
#line 411 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 411 "assertion.m"
static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_6(
#line 411 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 407 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__predicate_call_2_p_0(
#line 407 "assertion.m"
  MR_Word hlds__assertion__Goal_3,
#line 407 "assertion.m"
  MR_Word hlds__assertion__PredId_4);

#line 351 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__process_two_linked_calls_6_p_0(
#line 351 "assertion.m"
  MR_Word hlds__assertion__Goals_7,
#line 351 "assertion.m"
  MR_Word hlds__assertion__UniversiallyQuantifiedVars_8,
#line 351 "assertion.m"
  MR_Word * hlds__assertion__PredId_9,
#line 351 "assertion.m"
  MR_Word * hlds__assertion__LinkingVar_10,
#line 351 "assertion.m"
  MR_Word * hlds__assertion__Vars_11,
#line 351 "assertion.m"
  MR_Word * hlds__assertion__VarsA_12);

#line 337 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__update_5_p_0_7(
#line 337 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 337 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1);

#line 335 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__update_5_p_0_6(
#line 335 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 335 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1);

#line 324 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__update_5_p_0_4(
#line 324 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 324 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1);

#line 316 "assertion.m"
static void MR_CALL 
hlds__assertion__update_5_p_0_5(
#line 316 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 316 "assertion.m"
static void MR_CALL 
hlds__assertion__update_5_p_0_1(
#line 316 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 260 "assertion.m"
static void MR_CALL 
hlds__assertion__update_5_p_0_2(
#line 260 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 263 "assertion.m"
static void MR_CALL 
hlds__assertion__update_5_p_0_3(
#line 263 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 312 "assertion.m"
static void MR_CALL 
hlds__assertion__update_5_p_0(
#line 312 "assertion.m"
  MR_Word hlds__assertion__PCalls_6,
#line 312 "assertion.m"
  MR_Word hlds__assertion__QCalls_7,
#line 312 "assertion.m"
  MR_Word hlds__assertion__UniversiallyQuantifiedVars_8,
#line 312 "assertion.m"
  MR_Word hlds__assertion__CallVars_9,
#line 312 "assertion.m"
  MR_Word * hlds__assertion__HeadVar__5_5,
#line 312 "assertion.m"
  MR_Cont hlds__assertion__cont,
#line 312 "assertion.m"
  void * hlds__assertion__cont_env_ptr);

#line 288 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__process_one_side_6_p_0_1(
#line 288 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 288 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1);

#line 278 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__process_one_side_6_p_0(
#line 278 "assertion.m"
  MR_Word hlds__assertion__Goals_7,
#line 278 "assertion.m"
  MR_Word hlds__assertion__UniversiallyQuantifiedVars_8,
#line 278 "assertion.m"
  MR_Word * hlds__assertion__PredId_9,
#line 278 "assertion.m"
  MR_Word * hlds__assertion__LinkingVar_10,
#line 278 "assertion.m"
  MR_Word * hlds__assertion__Vars_11,
#line 278 "assertion.m"
  MR_Word * hlds__assertion__VarsA_12);

#line 260 "assertion.m"
static void MR_CALL 
hlds__assertion__reorder_4_p_0_1(
#line 260 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 263 "assertion.m"
static void MR_CALL 
hlds__assertion__reorder_4_p_0_2(
#line 263 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 257 "assertion.m"
static void MR_CALL 
hlds__assertion__reorder_4_p_0(
#line 257 "assertion.m"
  MR_Word hlds__assertion__PCalls_1,
#line 257 "assertion.m"
  MR_Word hlds__assertion__QCalls_2,
#line 257 "assertion.m"
  MR_Word * hlds__assertion__LHSCalls_3,
#line 257 "assertion.m"
  MR_Word * hlds__assertion__RHSCalls_4,
#line 257 "assertion.m"
  MR_Cont hlds__assertion__cont,
#line 257 "assertion.m"
  void * hlds__assertion__cont_env_ptr);

#line 250 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__associative_5_p_0_6(
#line 250 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 250 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1);

#line 248 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__associative_5_p_0_5(
#line 248 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 248 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1);

#line 246 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__associative_5_p_0_4(
#line 246 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 246 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1);

#line 229 "assertion.m"
static void MR_CALL 
hlds__assertion__associative_5_p_0_1(
#line 229 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 229 "assertion.m"
static void MR_CALL 
hlds__assertion__associative_5_p_0_3(
#line 229 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 229 "assertion.m"
static void MR_CALL 
hlds__assertion__associative_5_p_0_2(
#line 229 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 229 "assertion.m"
static void MR_CALL 
hlds__assertion__associative_5_p_0_7(
#line 229 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 224 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__associative_5_p_0(
#line 224 "assertion.m"
  MR_Word hlds__assertion__PCalls_6,
#line 224 "assertion.m"
  MR_Word hlds__assertion__QCalls_7,
#line 224 "assertion.m"
  MR_Word hlds__assertion__UniversiallyQuantifiedVars_8,
#line 224 "assertion.m"
  MR_Word hlds__assertion__CallVars_9,
#line 224 "assertion.m"
  MR_Word * hlds__assertion__HeadVar__5_5);

#line 182 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__commutative_var_ordering_2_6_p_0(
#line 182 "assertion.m"
  MR_Word hlds__assertion__VarP_7,
#line 182 "assertion.m"
  MR_Word hlds__assertion__VarQ_8,
#line 182 "assertion.m"
  MR_Word hlds__assertion__HeadVar__3_3,
#line 182 "assertion.m"
  MR_Word hlds__assertion__HeadVar__4_4,
#line 182 "assertion.m"
  MR_Word hlds__assertion__HeadVar__5_5,
#line 182 "assertion.m"
  MR_Word * hlds__assertion__CallVarB_15);

#line 171 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__commutative_var_ordering_4_p_0(
#line 171 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 171 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2,
#line 171 "assertion.m"
  MR_Word hlds__assertion__HeadVar__3_3,
#line 171 "assertion.m"
  MR_Word * hlds__assertion__CommutativeVars_11);

#line 414 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_5(
#line 414 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 414 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1);

#line 411 "assertion.m"
static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_1(
#line 411 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 411 "assertion.m"
static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_3(
#line 411 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 411 "assertion.m"
static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_4(
#line 411 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 411 "assertion.m"
static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_2(
#line 411 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 411 "assertion.m"
static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_6(
#line 411 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 665 "assertion.m"
static void MR_CALL 
hlds__assertion__record_preds_used_in_4_p_0_1(
#line 665 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 665 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1,
#line 665 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_2,
#line 665 "assertion.m"
  MR_Box * hlds__assertion__wrapper_arg_3);


static /* final */ const MR_Box hlds__assertion_scalar_common_1[7][2];

static /* final */ const MR_Box hlds__assertion_scalar_common_2[9][3];

static /* final */ const MR_Box hlds__assertion_scalar_common_3[1][7];

static /* final */ const MR_Box hlds__assertion_scalar_common_4[3][4];

static /* final */ const MR_Box hlds__assertion_scalar_common_5[2][5];

static /* final */ const MR_Box hlds__assertion_scalar_common_6[1][8];




static /* final */ const MR_Box hlds__assertion_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__assertion_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__assertion_scalar_common_2[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__assertion_scalar_common_2[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};

static /* final */ const MR_Box hlds__assertion_scalar_common_2[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__assertion_scalar_common_1[0])),
    ((MR_Box) (&hlds__assertion_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__assertion_scalar_common_2[0])),
    ((MR_Box) (&hlds__assertion_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__assertion_scalar_common_1[0])),
    ((MR_Box) (&hlds__assertion_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__assertion_scalar_common_4[0])),
    ((MR_Box) (hlds__assertion__is_construction_equivalence_assertion_4_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__assertion_scalar_common_4[1])),
    ((MR_Box) (hlds__assertion__process_one_side_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__assertion_scalar_common_4[2])),
    ((MR_Box) (hlds__assertion__update_5_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__assertion_scalar_common_4[0])),
    ((MR_Box) (hlds__assertion__predicate_call_2_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__assertion_scalar_common_5[1])),
    ((MR_Box) (hlds__assertion__equal_goal_exprs_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__assertion_scalar_common_5[1])),
    ((MR_Box) (hlds__assertion__equal_goal_exprs_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__assertion_scalar_common_3[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box hlds__assertion_scalar_common_4[3][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__assertion__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__assertion__pair__pti_pair_2__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__assertion_scalar_common_5[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__assertion__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__assertion__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__assertion__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__assertion_scalar_common_6[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__assertion__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__assertion__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__assertion__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__assertion__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__assertion__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1363 "hlds.assertion.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1371 "hlds.assertion.c"
static const MR_FA_TypeInfo_Struct1 hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1379 "hlds.assertion.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__assertion__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1388 "hlds.assertion.c"
static const MR_FA_TypeInfo_Struct2 hlds__assertion__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1397 "hlds.assertion.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__assertion__pair__pti_pair_2__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__assertion__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__assertion__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1406 "hlds.assertion.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1414 "hlds.assertion.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1422 "hlds.assertion.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1430 "hlds.assertion.c"
static const MR_FA_TypeInfo_Struct2 hlds__assertion__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1439 "hlds.assertion.c"
const MR_TypeCtorInfo_Struct hlds__assertion__hlds__assertion__type_ctor_info_subst_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__assertion____Unify____subst_0_0_10001)),
  ((MR_Box) (hlds__assertion____Compare____subst_0_0_10001)),
  (MR_String) "hlds.assertion",
  (MR_String) "subst",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__assertion__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1456 "hlds.assertion.c"
static MR_bool MR_CALL 
hlds__assertion____Unify____subst_0_0_10001(
#line 1459 "hlds.assertion.c"
  MR_Box hlds__assertion__wrapper_arg_1,
#line 1461 "hlds.assertion.c"
  MR_Box hlds__assertion__wrapper_arg_2)
#line 1463 "hlds.assertion.c"
{
#line 1465 "hlds.assertion.c"
  {
#line 1467 "hlds.assertion.c"
    MR_bool hlds__assertion__succeeded;

#line 1470 "hlds.assertion.c"
    {
#line 1472 "hlds.assertion.c"
      hlds__assertion__succeeded = hlds__assertion____Unify____subst_0_0(((MR_Word) hlds__assertion__wrapper_arg_1), ((MR_Word) hlds__assertion__wrapper_arg_2));
    }
#line 1475 "hlds.assertion.c"
    return hlds__assertion__succeeded;
#line 1477 "hlds.assertion.c"
  }
#line 1479 "hlds.assertion.c"
}

#line 1482 "hlds.assertion.c"
static void MR_CALL 
hlds__assertion____Compare____subst_0_0_10001(
#line 1485 "hlds.assertion.c"
  MR_Box * hlds__assertion__wrapper_arg_1,
#line 1487 "hlds.assertion.c"
  MR_Box hlds__assertion__wrapper_arg_2,
#line 1489 "hlds.assertion.c"
  MR_Box hlds__assertion__wrapper_arg_3)
#line 1491 "hlds.assertion.c"
{
#line 1493 "hlds.assertion.c"
  {
#line 1495 "hlds.assertion.c"
    MR_Word hlds__assertion__conv0_HeadVar__1_1;

#line 1498 "hlds.assertion.c"
    {
#line 1500 "hlds.assertion.c"
      hlds__assertion____Compare____subst_0_0(&hlds__assertion__conv0_HeadVar__1_1, ((MR_Word) hlds__assertion__wrapper_arg_2), ((MR_Word) hlds__assertion__wrapper_arg_3));
    }
#line 1503 "hlds.assertion.c"
    *hlds__assertion__wrapper_arg_1 = ((MR_Box) (hlds__assertion__conv0_HeadVar__1_1));
#line 1505 "hlds.assertion.c"
  }
#line 1507 "hlds.assertion.c"
}

#line 306 "assertion.m"
static void MR_CALL 
hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0_1(
#line 306 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 306 "assertion.m"
{
#line 306 "assertion.m"
  {
#line 306 "assertion.m"
    struct hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_0_s *) hlds__assertion__env_ptr_arg;

#line 306 "assertion.m"
    *((hlds__assertion__env_ptr)->hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__wrapper_arg_1) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__conv0_HeadVar__5_5));
#line 306 "assertion.m"
    {
#line 306 "assertion.m"
      ((hlds__assertion__env_ptr)->hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__cont)((hlds__assertion__env_ptr)->hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__cont_env_ptr);
    }
#line 306 "assertion.m"
  }
#line 306 "assertion.m"
}

#line 306 "assertion.m"
static void MR_CALL 
hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0_2(
#line 306 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 306 "assertion.m"
  MR_Box * hlds__assertion__wrapper_arg_1,
#line 306 "assertion.m"
  MR_Cont hlds__assertion__cont,
#line 306 "assertion.m"
  void * hlds__assertion__cont_env_ptr)
#line 306 "assertion.m"
{
#line 306 "assertion.m"
  {
#line 306 "assertion.m"
    struct hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_0_s hlds__assertion__env;

#line 306 "assertion.m"
    (hlds__assertion__env).hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__wrapper_arg_1 = hlds__assertion__wrapper_arg_1;
#line 306 "assertion.m"
    (hlds__assertion__env).hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__cont = hlds__assertion__cont;
#line 306 "assertion.m"
    (hlds__assertion__env).hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__cont_env_ptr = hlds__assertion__cont_env_ptr;
#line 306 "assertion.m"
    {
#line 306 "assertion.m"
      MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

#line 306 "assertion.m"
      {
#line 306 "assertion.m"
        hlds__assertion__update_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 6))), &(hlds__assertion__env).hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__conv0_HeadVar__5_5, hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0_1, &hlds__assertion__env);
      }
#line 306 "assertion.m"
    }
#line 306 "assertion.m"
  }
#line 306 "assertion.m"
}

#line 111 "assertion.m"
MR_bool MR_CALL 
hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0(
#line 111 "assertion.m"
  MR_Word hlds__assertion__Module_6,
#line 111 "assertion.m"
  MR_Integer hlds__assertion__AssertId_7,
#line 111 "assertion.m"
  MR_Word hlds__assertion__CallVars_9,
#line 111 "assertion.m"
  MR_Word * hlds__assertion__HeadVar__5_5)
#line 111 "assertion.m"
{
#line 298 "assertion.m"
  {
#line 298 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 298 "assertion.m"
    MR_Word hlds__assertion__TypeInfo_26_26;
#line 298 "assertion.m"
    MR_Word hlds__assertion__GoalInfo_13;
#line 298 "assertion.m"
    MR_Word hlds__assertion__P_14;
#line 298 "assertion.m"
    MR_Word hlds__assertion__Q_15;
#line 298 "assertion.m"
    MR_Word hlds__assertion__UniversiallyQuantifiedVars_16;
#line 298 "assertion.m"
    MR_Word hlds__assertion__PCalls_17;
#line 298 "assertion.m"
    MR_Word hlds__assertion__QCalls_18;
#line 298 "assertion.m"
    MR_Word hlds__assertion__V_20_20;
#line 298 "assertion.m"
    MR_Word hlds__assertion__V_22_22;
#line 298 "assertion.m"
    MR_Word hlds__assertion__V_23_23;
#line 298 "assertion.m"
    MR_Word hlds__assertion__Goal_29;
#line 298 "assertion.m"
    MR_Word hlds__assertion__V_31_31;
#line 298 "assertion.m"
    MR_Word hlds__assertion__V_32_32;
#line 298 "assertion.m"
    MR_Word hlds__assertion__GoalExpr0_35;
#line 298 "assertion.m"
    MR_Word hlds__assertion__Goal_42;
#line 298 "assertion.m"
    MR_Word hlds__assertion__V_44_44;
#line 298 "assertion.m"
    MR_Word hlds__assertion__V_45_45;
#line 298 "assertion.m"
    MR_Word hlds__assertion__GoalExpr0_48;
#line 299 "assertion.m"
    MR_Word hlds__assertion__GoalExpr_12;
#line 437 "assertion.m"
    MR_Word hlds__assertion___Context_36;
#line 438 "assertion.m"
    MR_Word hlds__assertion__Goal1_38;
#line 439 "assertion.m"
    MR_Word hlds__assertion__Reason_37;
#line 440 "assertion.m"
    MR_Word hlds__assertion__V_39_39;
#line 432 "assertion.m"
    MR_Word hlds__assertion__V_30_30;
#line 437 "assertion.m"
    MR_Word hlds__assertion___Context_49;
#line 438 "assertion.m"
    MR_Word hlds__assertion__Goal1_51;
#line 439 "assertion.m"
    MR_Word hlds__assertion__Reason_50;
#line 440 "assertion.m"
    MR_Word hlds__assertion__V_52_52;
#line 432 "assertion.m"
    MR_Word hlds__assertion__V_43_43;
#line 307 "assertion.m"
    MR_Word hlds__assertion__V_19_19;

#line 299 "assertion.m"
    {
#line 299 "assertion.m"
      hlds__assertion__assert_id_goal_3_p_0(hlds__assertion__Module_6, hlds__assertion__AssertId_7, &hlds__assertion__V_20_20);
    }
#line 299 "assertion.m"
    hlds__assertion__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_20_20, (MR_Integer) 0)));
#line 299 "assertion.m"
    hlds__assertion__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_20_20, (MR_Integer) 1)));
#line 300 "assertion.m"
    {
#line 300 "assertion.m"
      hlds__assertion__succeeded = hlds__assertion__goal_is_equivalence_3_p_0(hlds__assertion__V_20_20, &hlds__assertion__P_14, &hlds__assertion__Q_15);
    }
#line 298 "assertion.m"
    if (hlds__assertion__succeeded)
#line 298 "assertion.m"
      {
#line 301 "assertion.m"
        {
#line 301 "assertion.m"
          hlds__assertion__UniversiallyQuantifiedVars_16 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__assertion__GoalInfo_13);
        }
#line 437 "assertion.m"
        hlds__assertion__GoalExpr0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_14, (MR_Integer) 0)));
#line 437 "assertion.m"
        hlds__assertion___Context_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_14, (MR_Integer) 1)));
#line 439 "assertion.m"
        hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExpr0_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_35, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 439 "assertion.m"
        if (hlds__assertion__succeeded)
#line 439 "assertion.m"
          {
#line 439 "assertion.m"
            hlds__assertion__Reason_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_35, (MR_Integer) 1)));
#line 439 "assertion.m"
            hlds__assertion__Goal1_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_35, (MR_Integer) 2)));
#line 440 "assertion.m"
            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Reason_37)) == (MR_mktag((MR_Integer) 0)));
#line 440 "assertion.m"
            if (hlds__assertion__succeeded)
#line 440 "assertion.m"
              hlds__assertion__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Reason_37, (MR_Integer) 0)));
#line 439 "assertion.m"
          }
#line 438 "assertion.m"
        if (hlds__assertion__succeeded)
#line 442 "assertion.m"
          hlds__assertion__Goal_29 = hlds__assertion__Goal1_38;
#line 438 "assertion.m"
        else
#line 444 "assertion.m"
          hlds__assertion__Goal_29 = hlds__assertion__P_14;
#line 432 "assertion.m"
        hlds__assertion__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_29, (MR_Integer) 0)));
#line 432 "assertion.m"
        hlds__assertion__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_29, (MR_Integer) 1)));
#line 432 "assertion.m"
        hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_31_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_31_31, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 432 "assertion.m"
        if (hlds__assertion__succeeded)
#line 432 "assertion.m"
          {
#line 432 "assertion.m"
            hlds__assertion__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_31_31, (MR_Integer) 1)));
#line 432 "assertion.m"
            hlds__assertion__PCalls_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_31_31, (MR_Integer) 2)));
#line 432 "assertion.m"
            hlds__assertion__succeeded = (hlds__assertion__V_32_32 == (MR_Integer) 0);
#line 298 "assertion.m"
            if (hlds__assertion__succeeded)
#line 298 "assertion.m"
              {
#line 437 "assertion.m"
                hlds__assertion__GoalExpr0_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_15, (MR_Integer) 0)));
#line 437 "assertion.m"
                hlds__assertion___Context_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_15, (MR_Integer) 1)));
#line 439 "assertion.m"
                hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExpr0_48)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_48, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 439 "assertion.m"
                if (hlds__assertion__succeeded)
#line 439 "assertion.m"
                  {
#line 439 "assertion.m"
                    hlds__assertion__Reason_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_48, (MR_Integer) 1)));
#line 439 "assertion.m"
                    hlds__assertion__Goal1_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_48, (MR_Integer) 2)));
#line 440 "assertion.m"
                    hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Reason_50)) == (MR_mktag((MR_Integer) 0)));
#line 440 "assertion.m"
                    if (hlds__assertion__succeeded)
#line 440 "assertion.m"
                      hlds__assertion__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Reason_50, (MR_Integer) 0)));
#line 439 "assertion.m"
                  }
#line 438 "assertion.m"
                if (hlds__assertion__succeeded)
#line 442 "assertion.m"
                  hlds__assertion__Goal_42 = hlds__assertion__Goal1_51;
#line 438 "assertion.m"
                else
#line 444 "assertion.m"
                  hlds__assertion__Goal_42 = hlds__assertion__Q_15;
#line 432 "assertion.m"
                hlds__assertion__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_42, (MR_Integer) 0)));
#line 432 "assertion.m"
                hlds__assertion__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_42, (MR_Integer) 1)));
#line 432 "assertion.m"
                hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_44_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_44_44, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 432 "assertion.m"
                if (hlds__assertion__succeeded)
#line 432 "assertion.m"
                  {
#line 432 "assertion.m"
                    hlds__assertion__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_44_44, (MR_Integer) 1)));
#line 432 "assertion.m"
                    hlds__assertion__QCalls_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_44_44, (MR_Integer) 2)));
#line 432 "assertion.m"
                    hlds__assertion__succeeded = (hlds__assertion__V_45_45 == (MR_Integer) 0);
#line 298 "assertion.m"
                    if (hlds__assertion__succeeded)
#line 298 "assertion.m"
                      {
#line 1776 "hlds.assertion.c"
                        hlds__assertion__TypeInfo_26_26 = (MR_Word) &hlds__assertion_scalar_common_2[0];
#line 306 "assertion.m"
                        {
#line 306 "assertion.m"
                          hlds__assertion__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 306 "assertion.m"
                          MR_hl_field(MR_mktag(0), hlds__assertion__V_22_22, 0) = ((MR_Box) (&hlds__assertion_scalar_common_6[0]));
#line 306 "assertion.m"
                          MR_hl_field(MR_mktag(0), hlds__assertion__V_22_22, 1) = ((MR_Box) (hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0_2));
#line 306 "assertion.m"
                          MR_hl_field(MR_mktag(0), hlds__assertion__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 306 "assertion.m"
                          MR_hl_field(MR_mktag(0), hlds__assertion__V_22_22, 3) = ((MR_Box) (hlds__assertion__PCalls_17));
#line 306 "assertion.m"
                          MR_hl_field(MR_mktag(0), hlds__assertion__V_22_22, 4) = ((MR_Box) (hlds__assertion__QCalls_18));
#line 306 "assertion.m"
                          MR_hl_field(MR_mktag(0), hlds__assertion__V_22_22, 5) = ((MR_Box) (hlds__assertion__UniversiallyQuantifiedVars_16));
#line 306 "assertion.m"
                          MR_hl_field(MR_mktag(0), hlds__assertion__V_22_22, 6) = ((MR_Box) (hlds__assertion__CallVars_9));
#line 306 "assertion.m"
                        }
#line 305 "assertion.m"
                        {
#line 305 "assertion.m"
                          mercury__solutions__solutions_2_p_1(hlds__assertion__TypeInfo_26_26, hlds__assertion__V_22_22, &hlds__assertion__V_23_23);
                        }
#line 307 "assertion.m"
                        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 307 "assertion.m"
                        if (hlds__assertion__succeeded)
#line 307 "assertion.m"
                          {
#line 307 "assertion.m"
                            *hlds__assertion__HeadVar__5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_23_23, (MR_Integer) 0)));
#line 307 "assertion.m"
                            hlds__assertion__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_23_23, (MR_Integer) 1)));
#line 307 "assertion.m"
                          }
#line 298 "assertion.m"
                      }
#line 432 "assertion.m"
                  }
#line 298 "assertion.m"
              }
#line 432 "assertion.m"
          }
#line 298 "assertion.m"
      }
#line 298 "assertion.m"
    return hlds__assertion__succeeded;
#line 298 "assertion.m"
  }
#line 111 "assertion.m"
}

#line 415 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__predicate_call__415__1_1_p_0(
#line 415 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_35)
#line 415 "assertion.m"
{
#line 415 "assertion.m"
  {
#line 415 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 416 "assertion.m"
    MR_Word hlds__assertion__UnifyRhs_18;
#line 416 "assertion.m"
    MR_Word hlds__assertion__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_35, (MR_Integer) 0)));
#line 416 "assertion.m"
    MR_Word hlds__assertion__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_35, (MR_Integer) 1)));
#line 416 "assertion.m"
    MR_Word hlds__assertion__V_17_17;
#line 416 "assertion.m"
    MR_Word hlds__assertion__V_19_19;
#line 416 "assertion.m"
    MR_Word hlds__assertion__V_20_20;
#line 416 "assertion.m"
    MR_Word hlds__assertion__V_21_21;
#line 417 "assertion.m"
    MR_Word hlds__assertion__V_23_23;
#line 417 "assertion.m"
    MR_Word hlds__assertion__V_24_24;
#line 417 "assertion.m"
    MR_Word hlds__assertion__V_25_25;

#line 416 "assertion.m"
    hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 416 "assertion.m"
    if (hlds__assertion__succeeded)
#line 416 "assertion.m"
      {
#line 416 "assertion.m"
        hlds__assertion__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_36_36, (MR_Integer) 0)));
#line 416 "assertion.m"
        hlds__assertion__UnifyRhs_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_36_36, (MR_Integer) 1)));
#line 416 "assertion.m"
        hlds__assertion__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_36_36, (MR_Integer) 2)));
#line 416 "assertion.m"
        hlds__assertion__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_36_36, (MR_Integer) 3)));
#line 416 "assertion.m"
        hlds__assertion__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_36_36, (MR_Integer) 4)));
#line 417 "assertion.m"
        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__UnifyRhs_18)) == (MR_mktag((MR_Integer) 1)));
#line 417 "assertion.m"
        if (hlds__assertion__succeeded)
#line 417 "assertion.m"
          {
#line 417 "assertion.m"
            hlds__assertion__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRhs_18, (MR_Integer) 0)));
#line 417 "assertion.m"
            hlds__assertion__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRhs_18, (MR_Integer) 1)));
#line 417 "assertion.m"
            hlds__assertion__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRhs_18, (MR_Integer) 2)));
#line 417 "assertion.m"
          }
#line 416 "assertion.m"
      }
#line 415 "assertion.m"
    hlds__assertion__succeeded = !(hlds__assertion__succeeded);
#line 415 "assertion.m"
    return hlds__assertion__succeeded;
#line 415 "assertion.m"
  }
#line 415 "assertion.m"
}

#line 337 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__update__337__1_2_p_0(
#line 337 "assertion.m"
  MR_Word hlds__assertion__SA_15,
#line 337 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_50)
#line 337 "assertion.m"
{
#line 337 "assertion.m"
  {
#line 337 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 337 "assertion.m"
    MR_Word hlds__assertion__X_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_50, (MR_Integer) 0)));
#line 337 "assertion.m"
    MR_Word hlds__assertion___Y_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_50, (MR_Integer) 1)));

#line 337 "assertion.m"
    {
#line 337 "assertion.m"
      hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__X_59)), ((MR_Box) (hlds__assertion__SA_15)));
    }
#line 337 "assertion.m"
    return hlds__assertion__succeeded;
#line 337 "assertion.m"
  }
#line 337 "assertion.m"
}

#line 335 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__update__335__1_2_p_0(
#line 335 "assertion.m"
  MR_Word hlds__assertion__S0_25,
#line 335 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_45)
#line 335 "assertion.m"
{
#line 335 "assertion.m"
  {
#line 335 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 335 "assertion.m"
    MR_Word hlds__assertion__X_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_45, (MR_Integer) 0)));
#line 335 "assertion.m"
    MR_Word hlds__assertion___Y_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_45, (MR_Integer) 1)));

#line 335 "assertion.m"
    {
#line 335 "assertion.m"
      hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__X_56)), ((MR_Box) (hlds__assertion__S0_25)));
    }
#line 335 "assertion.m"
    return hlds__assertion__succeeded;
#line 335 "assertion.m"
  }
#line 335 "assertion.m"
}

#line 324 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__update__324__1_1_p_0(
#line 324 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_32)
#line 324 "assertion.m"
{
#line 324 "assertion.m"
  {
#line 324 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 324 "assertion.m"
    MR_Word hlds__assertion__X_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_32, (MR_Integer) 0)));
#line 324 "assertion.m"
    MR_Word hlds__assertion__Y_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_32, (MR_Integer) 1)));

#line 324 "assertion.m"
    {
#line 324 "assertion.m"
      hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_2[0], ((MR_Box) (hlds__assertion__X_53)), ((MR_Box) (hlds__assertion__Y_54)));
    }
#line 324 "assertion.m"
    hlds__assertion__succeeded = !(hlds__assertion__succeeded);
#line 324 "assertion.m"
    return hlds__assertion__succeeded;
#line 324 "assertion.m"
  }
#line 324 "assertion.m"
}

#line 288 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__process_one_side__288__1_1_p_0(
#line 288 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_17)
#line 288 "assertion.m"
{
#line 288 "assertion.m"
  {
#line 288 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 288 "assertion.m"
    MR_Word hlds__assertion__X_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_17, (MR_Integer) 0)));
#line 288 "assertion.m"
    MR_Word hlds__assertion__Y_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_17, (MR_Integer) 1)));

#line 288 "assertion.m"
    {
#line 288 "assertion.m"
      hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__X_19)), ((MR_Box) (hlds__assertion__Y_20)));
    }
#line 288 "assertion.m"
    hlds__assertion__succeeded = !(hlds__assertion__succeeded);
#line 288 "assertion.m"
    return hlds__assertion__succeeded;
#line 288 "assertion.m"
  }
#line 288 "assertion.m"
}

#line 250 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__associative__250__1_2_p_0(
#line 250 "assertion.m"
  MR_Word hlds__assertion__B_24,
#line 250 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_59)
#line 250 "assertion.m"
{
#line 250 "assertion.m"
  {
#line 250 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 250 "assertion.m"
    MR_Word hlds__assertion__X_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_59, (MR_Integer) 0)));
#line 250 "assertion.m"
    MR_Word hlds__assertion___Y_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_59, (MR_Integer) 1)));

#line 250 "assertion.m"
    {
#line 250 "assertion.m"
      hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__X_69)), ((MR_Box) (hlds__assertion__B_24)));
    }
#line 250 "assertion.m"
    return hlds__assertion__succeeded;
#line 250 "assertion.m"
  }
#line 250 "assertion.m"
}

#line 248 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__associative__248__1_2_p_0(
#line 248 "assertion.m"
  MR_Word hlds__assertion__A_23,
#line 248 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_54)
#line 248 "assertion.m"
{
#line 248 "assertion.m"
  {
#line 248 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 248 "assertion.m"
    MR_Word hlds__assertion__X_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_54, (MR_Integer) 0)));
#line 248 "assertion.m"
    MR_Word hlds__assertion___Y_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_54, (MR_Integer) 1)));

#line 248 "assertion.m"
    {
#line 248 "assertion.m"
      hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__X_66)), ((MR_Box) (hlds__assertion__A_23)));
    }
#line 248 "assertion.m"
    return hlds__assertion__succeeded;
#line 248 "assertion.m"
  }
#line 248 "assertion.m"
}

#line 246 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__associative__246__1_2_p_0(
#line 246 "assertion.m"
  MR_Word hlds__assertion__AB_16,
#line 246 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_49)
#line 246 "assertion.m"
{
#line 246 "assertion.m"
  {
#line 246 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 246 "assertion.m"
    MR_Word hlds__assertion__X_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_49, (MR_Integer) 0)));
#line 246 "assertion.m"
    MR_Word hlds__assertion___Y_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_49, (MR_Integer) 1)));

#line 246 "assertion.m"
    {
#line 246 "assertion.m"
      hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__X_63)), ((MR_Box) (hlds__assertion__AB_16)));
    }
#line 246 "assertion.m"
    return hlds__assertion__succeeded;
#line 246 "assertion.m"
  }
#line 246 "assertion.m"
}

#line 150 "assertion.m"
static void MR_CALL 
hlds__assertion____Compare____subst_0_0(
#line 150 "assertion.m"
  MR_Word * hlds__assertion__HeadVar__1_1,
#line 150 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2,
#line 150 "assertion.m"
  MR_Word hlds__assertion__HeadVar__3_3)
#line 150 "assertion.m"
{
#line 150 "assertion.m"
  {
#line 150 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 150 "assertion.m"
    MR_Word hlds__assertion__Cast_HeadVar1_4 = hlds__assertion__HeadVar__2_2;
#line 150 "assertion.m"
    MR_Word hlds__assertion__Cast_HeadVar2_5 = hlds__assertion__HeadVar__3_3;

#line 150 "assertion.m"
    {
#line 150 "assertion.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__assertion_scalar_common_2[2], hlds__assertion__HeadVar__1_1, ((MR_Box) (hlds__assertion__Cast_HeadVar1_4)), ((MR_Box) (hlds__assertion__Cast_HeadVar2_5)));
    }
#line 150 "assertion.m"
  }
#line 150 "assertion.m"
}

#line 150 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion____Unify____subst_0_0(
#line 150 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 150 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2)
#line 150 "assertion.m"
{
#line 150 "assertion.m"
  {
#line 150 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 150 "assertion.m"
    MR_Word hlds__assertion__Cast_HeadVar1_3 = hlds__assertion__HeadVar__1_1;
#line 150 "assertion.m"
    MR_Word hlds__assertion__Cast_HeadVar2_4 = hlds__assertion__HeadVar__2_2;

#line 150 "assertion.m"
    {
#line 150 "assertion.m"
      hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_2[2], ((MR_Box) (hlds__assertion__Cast_HeadVar1_3)), ((MR_Box) (hlds__assertion__Cast_HeadVar2_4)));
    }
#line 150 "assertion.m"
    return hlds__assertion__succeeded;
#line 150 "assertion.m"
  }
#line 150 "assertion.m"
}

#line 775 "assertion.m"
static void MR_CALL 
hlds__assertion__normalise_goals_2_p_0(
#line 775 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 775 "assertion.m"
  MR_Word * hlds__assertion__HeadVar__2_2)
#line 775 "assertion.m"
{
#line 777 "assertion.m"
  {
#line 777 "assertion.m"
    MR_bool hlds__assertion__succeeded;

#line 777 "assertion.m"
    if ((hlds__assertion__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 777 "assertion.m"
      *hlds__assertion__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 777 "assertion.m"
    else
#line 778 "assertion.m"
      {
#line 778 "assertion.m"
        MR_Word hlds__assertion__Goal0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
#line 778 "assertion.m"
        MR_Word hlds__assertion__Goals0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
#line 778 "assertion.m"
        MR_Word hlds__assertion__Goal_5;
#line 778 "assertion.m"
        MR_Word hlds__assertion__Goals_6;
#line 778 "assertion.m"
        MR_Word hlds__assertion__GoalExpr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal0_3, (MR_Integer) 0)));
#line 778 "assertion.m"
        MR_Word hlds__assertion__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal0_3, (MR_Integer) 1)));
#line 778 "assertion.m"
        MR_Word hlds__assertion__GoalExpr_11;

#line 689 "assertion.m"
        {
#line 689 "assertion.m"
          hlds__assertion__normalise_goal_expr_2_p_0(hlds__assertion__GoalExpr0_9, &hlds__assertion__GoalExpr_11);
        }
#line 690 "assertion.m"
        {
#line 690 "assertion.m"
          hlds__assertion__Goal_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 690 "assertion.m"
          MR_hl_field(MR_mktag(0), hlds__assertion__Goal_5, 0) = ((MR_Box) (hlds__assertion__GoalExpr_11));
#line 690 "assertion.m"
          MR_hl_field(MR_mktag(0), hlds__assertion__Goal_5, 1) = ((MR_Box) (hlds__assertion__GoalInfo_10));
#line 690 "assertion.m"
        }
#line 780 "assertion.m"
        {
#line 780 "assertion.m"
          hlds__assertion__normalise_goals_2_p_0(hlds__assertion__Goals0_4, &hlds__assertion__Goals_6);
        }
#line 778 "assertion.m"
        {
#line 778 "assertion.m"
          MR_Word base;
#line 778 "assertion.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "assertion.m"
          *hlds__assertion__HeadVar__2_2 = base;
#line 778 "assertion.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__assertion__Goal_5));
#line 778 "assertion.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__assertion__Goals_6));
#line 778 "assertion.m"
        }
#line 778 "assertion.m"
      }
#line 777 "assertion.m"
  }
#line 775 "assertion.m"
}

#line 766 "assertion.m"
static void MR_CALL 
hlds__assertion__normalise_cases_2_p_0(
#line 766 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 766 "assertion.m"
  MR_Word * hlds__assertion__HeadVar__2_2)
#line 766 "assertion.m"
{
#line 768 "assertion.m"
  {
#line 768 "assertion.m"
    MR_bool hlds__assertion__succeeded;

#line 768 "assertion.m"
    if ((hlds__assertion__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 768 "assertion.m"
      *hlds__assertion__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 768 "assertion.m"
    else
#line 769 "assertion.m"
      {
#line 769 "assertion.m"
        MR_Word hlds__assertion__Case0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
#line 769 "assertion.m"
        MR_Word hlds__assertion__Cases0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
#line 769 "assertion.m"
        MR_Word hlds__assertion__Case_5;
#line 769 "assertion.m"
        MR_Word hlds__assertion__Cases_6;
#line 769 "assertion.m"
        MR_Word hlds__assertion__MainConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Case0_3, (MR_Integer) 0)));
#line 769 "assertion.m"
        MR_Word hlds__assertion__OtherConsIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Case0_3, (MR_Integer) 1)));
#line 769 "assertion.m"
        MR_Word hlds__assertion__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Case0_3, (MR_Integer) 2)));
#line 769 "assertion.m"
        MR_Word hlds__assertion__Goal_10;
#line 769 "assertion.m"
        MR_Word hlds__assertion__GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal0_9, (MR_Integer) 0)));
#line 769 "assertion.m"
        MR_Word hlds__assertion__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal0_9, (MR_Integer) 1)));
#line 769 "assertion.m"
        MR_Word hlds__assertion__GoalExpr_15;

#line 689 "assertion.m"
        {
#line 689 "assertion.m"
          hlds__assertion__normalise_goal_expr_2_p_0(hlds__assertion__GoalExpr0_13, &hlds__assertion__GoalExpr_15);
        }
#line 690 "assertion.m"
        {
#line 690 "assertion.m"
          hlds__assertion__Goal_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 690 "assertion.m"
          MR_hl_field(MR_mktag(0), hlds__assertion__Goal_10, 0) = ((MR_Box) (hlds__assertion__GoalExpr_15));
#line 690 "assertion.m"
          MR_hl_field(MR_mktag(0), hlds__assertion__Goal_10, 1) = ((MR_Box) (hlds__assertion__GoalInfo_14));
#line 690 "assertion.m"
        }
#line 772 "assertion.m"
        {
#line 772 "assertion.m"
          hlds__assertion__Case_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 772 "assertion.m"
          MR_hl_field(MR_mktag(0), hlds__assertion__Case_5, 0) = ((MR_Box) (hlds__assertion__MainConsId_7));
#line 772 "assertion.m"
          MR_hl_field(MR_mktag(0), hlds__assertion__Case_5, 1) = ((MR_Box) (hlds__assertion__OtherConsIds_8));
#line 772 "assertion.m"
          MR_hl_field(MR_mktag(0), hlds__assertion__Case_5, 2) = ((MR_Box) (hlds__assertion__Goal_10));
#line 772 "assertion.m"
        }
#line 773 "assertion.m"
        {
#line 773 "assertion.m"
          hlds__assertion__normalise_cases_2_p_0(hlds__assertion__Cases0_4, &hlds__assertion__Cases_6);
        }
#line 769 "assertion.m"
        {
#line 769 "assertion.m"
          MR_Word base;
#line 769 "assertion.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "assertion.m"
          *hlds__assertion__HeadVar__2_2 = base;
#line 769 "assertion.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__assertion__Case_5));
#line 769 "assertion.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__assertion__Cases_6));
#line 769 "assertion.m"
        }
#line 769 "assertion.m"
      }
#line 768 "assertion.m"
  }
#line 766 "assertion.m"
}

#line 758 "assertion.m"
static void MR_CALL 
hlds__assertion__normalise_conj_2_p_0(
#line 758 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 758 "assertion.m"
  MR_Word * hlds__assertion__HeadVar__2_2)
#line 758 "assertion.m"
{
#line 760 "assertion.m"
  {
#line 760 "assertion.m"
    MR_bool hlds__assertion__succeeded;

#line 760 "assertion.m"
    if ((hlds__assertion__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 760 "assertion.m"
      *hlds__assertion__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 760 "assertion.m"
    else
#line 761 "assertion.m"
      {
#line 761 "assertion.m"
        MR_Word hlds__assertion__Goal0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
#line 761 "assertion.m"
        MR_Word hlds__assertion__Goals0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
#line 761 "assertion.m"
        MR_Word hlds__assertion__ConjGoals_6;
#line 761 "assertion.m"
        MR_Word hlds__assertion__Goals1_7;

#line 762 "assertion.m"
        {
#line 762 "assertion.m"
          hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__assertion__Goal0_3, &hlds__assertion__ConjGoals_6);
        }
#line 763 "assertion.m"
        {
#line 763 "assertion.m"
          hlds__assertion__normalise_conj_2_p_0(hlds__assertion__Goals0_4, &hlds__assertion__Goals1_7);
        }
#line 764 "assertion.m"
        {
#line 764 "assertion.m"
          mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__assertion__ConjGoals_6, hlds__assertion__Goals1_7, hlds__assertion__HeadVar__2_2);
        }
#line 761 "assertion.m"
      }
#line 760 "assertion.m"
  }
#line 758 "assertion.m"
}

#line 692 "assertion.m"
static void MR_CALL 
hlds__assertion__normalise_goal_expr_2_p_0(
#line 692 "assertion.m"
  MR_Word hlds__assertion__GoalExpr0_3,
#line 692 "assertion.m"
  MR_Word * hlds__assertion__GoalExpr_4)
#line 692 "assertion.m"
{
#line 700 "assertion.m"
  {
#line 700 "assertion.m"
    MR_bool hlds__assertion__succeeded;

#line 700 "assertion.m"
#line 700 "assertion.m"
    switch (MR_tag((MR_Word) hlds__assertion__GoalExpr0_3)) {
#line 700 "assertion.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 700 "assertion.m"
      case (MR_Integer) 0:
#line 721 "assertion.m"
        {
#line 721 "assertion.m"
          MR_Word hlds__assertion__SubGoal0_35 = (MR_Word) MR_body(((MR_Word) hlds__assertion__GoalExpr0_3), (MR_Integer) 0);
#line 721 "assertion.m"
          MR_Word hlds__assertion__SubGoal_36;
#line 721 "assertion.m"
          MR_Word hlds__assertion__GoalExpr0_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__SubGoal0_35, (MR_Integer) 0)));
#line 721 "assertion.m"
          MR_Word hlds__assertion__GoalInfo_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__SubGoal0_35, (MR_Integer) 1)));
#line 721 "assertion.m"
          MR_Word hlds__assertion__GoalExpr_93;

#line 689 "assertion.m"
          {
#line 689 "assertion.m"
            hlds__assertion__normalise_goal_expr_2_p_0(hlds__assertion__GoalExpr0_91, &hlds__assertion__GoalExpr_93);
          }
#line 690 "assertion.m"
          {
#line 690 "assertion.m"
            hlds__assertion__SubGoal_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 690 "assertion.m"
            MR_hl_field(MR_mktag(0), hlds__assertion__SubGoal_36, 0) = ((MR_Box) (hlds__assertion__GoalExpr_93));
#line 690 "assertion.m"
            MR_hl_field(MR_mktag(0), hlds__assertion__SubGoal_36, 1) = ((MR_Box) (hlds__assertion__GoalInfo_92));
#line 690 "assertion.m"
          }
#line 723 "assertion.m"
          *hlds__assertion__GoalExpr_4 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__assertion__SubGoal_36);
#line 721 "assertion.m"
        }
#line 700 "assertion.m"
        break;
#line 700 "assertion.m"
      case (MR_Integer) 1:
#line 700 "assertion.m"
      case (MR_Integer) 2:
#line 701 "assertion.m"
        *hlds__assertion__GoalExpr_4 = hlds__assertion__GoalExpr0_3;
#line 700 "assertion.m"
        break;
#line 700 "assertion.m"
      case (MR_Integer) 3:
#line 700 "assertion.m"
#line 700 "assertion.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 0)))) {
#line 700 "assertion.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 700 "assertion.m"
          case (MR_Integer) 0:
#line 700 "assertion.m"
          case (MR_Integer) 1:
#line 701 "assertion.m"
            *hlds__assertion__GoalExpr_4 = hlds__assertion__GoalExpr0_3;
#line 700 "assertion.m"
            break;
#line 700 "assertion.m"
          case (MR_Integer) 2:
#line 703 "assertion.m"
            {
#line 703 "assertion.m"
              MR_Word hlds__assertion__ConjType_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 1)));
#line 703 "assertion.m"
              MR_Word hlds__assertion__Goals0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 2)));
#line 703 "assertion.m"
              MR_Word hlds__assertion__Goals_30;

#line 707 "assertion.m"
#line 707 "assertion.m"
              switch (hlds__assertion__ConjType_28) {
#line 707 "assertion.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 707 "assertion.m"
                case (MR_Integer) 1:
#line 709 "assertion.m"
                  {
#line 709 "assertion.m"
                    hlds__assertion__normalise_goals_2_p_0(hlds__assertion__Goals0_29, &hlds__assertion__Goals_30);
                  }
#line 707 "assertion.m"
                  break;
#line 707 "assertion.m"
                case (MR_Integer) 0:
#line 706 "assertion.m"
                  {
#line 706 "assertion.m"
                    hlds__assertion__normalise_conj_2_p_0(hlds__assertion__Goals0_29, &hlds__assertion__Goals_30);
                  }
#line 707 "assertion.m"
                  break;
#line 707 "assertion.m"
              }
#line 711 "assertion.m"
              {
#line 711 "assertion.m"
                MR_Word base;
#line 711 "assertion.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 711 "assertion.m"
                *hlds__assertion__GoalExpr_4 = base;
#line 711 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 711 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__assertion__ConjType_28));
#line 711 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__assertion__Goals_30));
#line 711 "assertion.m"
              }
#line 703 "assertion.m"
            }
#line 700 "assertion.m"
            break;
#line 700 "assertion.m"
          case (MR_Integer) 3:
#line 717 "assertion.m"
            {
#line 717 "assertion.m"
              MR_Word hlds__assertion__Goals0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 1)));
#line 717 "assertion.m"
              MR_Word hlds__assertion__Goals_62;

#line 718 "assertion.m"
              {
#line 718 "assertion.m"
                hlds__assertion__normalise_goals_2_p_0(hlds__assertion__Goals0_61, &hlds__assertion__Goals_62);
              }
#line 719 "assertion.m"
              {
#line 719 "assertion.m"
                MR_Word base;
#line 719 "assertion.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "assertion.m"
                *hlds__assertion__GoalExpr_4 = base;
#line 719 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 719 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__assertion__Goals_62));
#line 719 "assertion.m"
              }
#line 717 "assertion.m"
            }
#line 700 "assertion.m"
            break;
#line 700 "assertion.m"
          case (MR_Integer) 4:
#line 713 "assertion.m"
            {
#line 713 "assertion.m"
              MR_Word hlds__assertion__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 1)));
#line 713 "assertion.m"
              MR_Word hlds__assertion__CanFail_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 2)));
#line 713 "assertion.m"
              MR_Word hlds__assertion__Cases0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 3)));
#line 713 "assertion.m"
              MR_Word hlds__assertion__Cases_34;

#line 714 "assertion.m"
              {
#line 714 "assertion.m"
                hlds__assertion__normalise_cases_2_p_0(hlds__assertion__Cases0_33, &hlds__assertion__Cases_34);
              }
#line 715 "assertion.m"
              {
#line 715 "assertion.m"
                MR_Word base;
#line 715 "assertion.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 715 "assertion.m"
                *hlds__assertion__GoalExpr_4 = base;
#line 715 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 715 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__assertion__Var_31));
#line 715 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__assertion__CanFail_32));
#line 715 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (hlds__assertion__Cases_34));
#line 715 "assertion.m"
              }
#line 713 "assertion.m"
            }
#line 700 "assertion.m"
            break;
#line 700 "assertion.m"
          case (MR_Integer) 5:
#line 725 "assertion.m"
            {
#line 725 "assertion.m"
              MR_Word hlds__assertion__Reason_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 1)));
#line 725 "assertion.m"
              MR_Word hlds__assertion__SubGoal0_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 2)));
#line 725 "assertion.m"
              MR_Word hlds__assertion__SubGoal_64;
#line 725 "assertion.m"
              MR_Word hlds__assertion__GoalExpr0_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__SubGoal0_63, (MR_Integer) 0)));
#line 725 "assertion.m"
              MR_Word hlds__assertion__GoalInfo_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__SubGoal0_63, (MR_Integer) 1)));
#line 725 "assertion.m"
              MR_Word hlds__assertion__GoalExpr_98;

#line 689 "assertion.m"
              {
#line 689 "assertion.m"
                hlds__assertion__normalise_goal_expr_2_p_0(hlds__assertion__GoalExpr0_96, &hlds__assertion__GoalExpr_98);
              }
#line 690 "assertion.m"
              {
#line 690 "assertion.m"
                hlds__assertion__SubGoal_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 690 "assertion.m"
                MR_hl_field(MR_mktag(0), hlds__assertion__SubGoal_64, 0) = ((MR_Box) (hlds__assertion__GoalExpr_98));
#line 690 "assertion.m"
                MR_hl_field(MR_mktag(0), hlds__assertion__SubGoal_64, 1) = ((MR_Box) (hlds__assertion__GoalInfo_97));
#line 690 "assertion.m"
              }
#line 727 "assertion.m"
              {
#line 727 "assertion.m"
                MR_Word base;
#line 727 "assertion.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 727 "assertion.m"
                *hlds__assertion__GoalExpr_4 = base;
#line 727 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 727 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__assertion__Reason_37));
#line 727 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__assertion__SubGoal_64));
#line 727 "assertion.m"
              }
#line 725 "assertion.m"
            }
#line 700 "assertion.m"
            break;
#line 700 "assertion.m"
          case (MR_Integer) 6:
#line 729 "assertion.m"
            {
#line 729 "assertion.m"
              MR_Word hlds__assertion__Vars_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 1)));
#line 729 "assertion.m"
              MR_Word hlds__assertion__Cond0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 2)));
#line 729 "assertion.m"
              MR_Word hlds__assertion__Then0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 3)));
#line 729 "assertion.m"
              MR_Word hlds__assertion__Else0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 4)));
#line 729 "assertion.m"
              MR_Word hlds__assertion__Cond_42;
#line 729 "assertion.m"
              MR_Word hlds__assertion__Then_43;
#line 729 "assertion.m"
              MR_Word hlds__assertion__Else_44;
#line 729 "assertion.m"
              MR_Word hlds__assertion__GoalExpr0_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Cond0_39, (MR_Integer) 0)));
#line 729 "assertion.m"
              MR_Word hlds__assertion__GoalInfo_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Cond0_39, (MR_Integer) 1)));
#line 729 "assertion.m"
              MR_Word hlds__assertion__GoalExpr_78;
#line 729 "assertion.m"
              MR_Word hlds__assertion__GoalExpr0_81;
#line 729 "assertion.m"
              MR_Word hlds__assertion__GoalInfo_82;
#line 729 "assertion.m"
              MR_Word hlds__assertion__GoalExpr_83;
#line 729 "assertion.m"
              MR_Word hlds__assertion__GoalExpr0_86;
#line 729 "assertion.m"
              MR_Word hlds__assertion__GoalInfo_87;
#line 729 "assertion.m"
              MR_Word hlds__assertion__GoalExpr_88;

#line 689 "assertion.m"
              {
#line 689 "assertion.m"
                hlds__assertion__normalise_goal_expr_2_p_0(hlds__assertion__GoalExpr0_76, &hlds__assertion__GoalExpr_78);
              }
#line 690 "assertion.m"
              {
#line 690 "assertion.m"
                hlds__assertion__Cond_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 690 "assertion.m"
                MR_hl_field(MR_mktag(0), hlds__assertion__Cond_42, 0) = ((MR_Box) (hlds__assertion__GoalExpr_78));
#line 690 "assertion.m"
                MR_hl_field(MR_mktag(0), hlds__assertion__Cond_42, 1) = ((MR_Box) (hlds__assertion__GoalInfo_77));
#line 690 "assertion.m"
              }
#line 688 "assertion.m"
              hlds__assertion__GoalExpr0_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Then0_40, (MR_Integer) 0)));
#line 688 "assertion.m"
              hlds__assertion__GoalInfo_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Then0_40, (MR_Integer) 1)));
#line 689 "assertion.m"
              {
#line 689 "assertion.m"
                hlds__assertion__normalise_goal_expr_2_p_0(hlds__assertion__GoalExpr0_81, &hlds__assertion__GoalExpr_83);
              }
#line 690 "assertion.m"
              {
#line 690 "assertion.m"
                hlds__assertion__Then_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 690 "assertion.m"
                MR_hl_field(MR_mktag(0), hlds__assertion__Then_43, 0) = ((MR_Box) (hlds__assertion__GoalExpr_83));
#line 690 "assertion.m"
                MR_hl_field(MR_mktag(0), hlds__assertion__Then_43, 1) = ((MR_Box) (hlds__assertion__GoalInfo_82));
#line 690 "assertion.m"
              }
#line 688 "assertion.m"
              hlds__assertion__GoalExpr0_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Else0_41, (MR_Integer) 0)));
#line 688 "assertion.m"
              hlds__assertion__GoalInfo_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Else0_41, (MR_Integer) 1)));
#line 689 "assertion.m"
              {
#line 689 "assertion.m"
                hlds__assertion__normalise_goal_expr_2_p_0(hlds__assertion__GoalExpr0_86, &hlds__assertion__GoalExpr_88);
              }
#line 690 "assertion.m"
              {
#line 690 "assertion.m"
                hlds__assertion__Else_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 690 "assertion.m"
                MR_hl_field(MR_mktag(0), hlds__assertion__Else_44, 0) = ((MR_Box) (hlds__assertion__GoalExpr_88));
#line 690 "assertion.m"
                MR_hl_field(MR_mktag(0), hlds__assertion__Else_44, 1) = ((MR_Box) (hlds__assertion__GoalInfo_87));
#line 690 "assertion.m"
              }
#line 733 "assertion.m"
              {
#line 733 "assertion.m"
                MR_Word base;
#line 733 "assertion.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 733 "assertion.m"
                *hlds__assertion__GoalExpr_4 = base;
#line 733 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 733 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__assertion__Vars_38));
#line 733 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__assertion__Cond_42));
#line 733 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (hlds__assertion__Then_43));
#line 733 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (hlds__assertion__Else_44));
#line 733 "assertion.m"
              }
#line 729 "assertion.m"
            }
#line 700 "assertion.m"
            break;
#line 700 "assertion.m"
          case (MR_Integer) 7:
#line 735 "assertion.m"
            {
#line 735 "assertion.m"
              MR_Word hlds__assertion__ShortHand0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 1)));
#line 735 "assertion.m"
              MR_Word hlds__assertion__ShortHand_54;

#line 743 "assertion.m"
#line 743 "assertion.m"
              switch (MR_tag((MR_Word) hlds__assertion__ShortHand0_45)) {
#line 743 "assertion.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 743 "assertion.m"
                case (MR_Integer) 0:
#line 748 "assertion.m"
                  {
#line 748 "assertion.m"
                    MR_Word hlds__assertion__LHS0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__ShortHand0_45, (MR_Integer) 0)));
#line 748 "assertion.m"
                    MR_Word hlds__assertion__RHS0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__ShortHand0_45, (MR_Integer) 1)));
#line 748 "assertion.m"
                    MR_Word hlds__assertion__LHS_59;
#line 748 "assertion.m"
                    MR_Word hlds__assertion__RHS_60;

#line 749 "assertion.m"
                    {
#line 749 "assertion.m"
                      hlds__assertion__normalise_goal_2_p_0(hlds__assertion__LHS0_57, &hlds__assertion__LHS_59);
                    }
#line 750 "assertion.m"
                    {
#line 750 "assertion.m"
                      hlds__assertion__normalise_goal_2_p_0(hlds__assertion__RHS0_58, &hlds__assertion__RHS_60);
                    }
#line 751 "assertion.m"
                    {
#line 751 "assertion.m"
                      hlds__assertion__ShortHand_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 751 "assertion.m"
                      MR_hl_field(MR_mktag(0), hlds__assertion__ShortHand_54, 0) = ((MR_Box) (hlds__assertion__LHS_59));
#line 751 "assertion.m"
                      MR_hl_field(MR_mktag(0), hlds__assertion__ShortHand_54, 1) = ((MR_Box) (hlds__assertion__RHS_60));
#line 751 "assertion.m"
                    }
#line 748 "assertion.m"
                  }
#line 743 "assertion.m"
                  break;
#line 743 "assertion.m"
                case (MR_Integer) 1:
#line 738 "assertion.m"
                  {
#line 738 "assertion.m"
                    MR_Word hlds__assertion__GoalType_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand0_45, (MR_Integer) 0)));
#line 738 "assertion.m"
                    MR_Word hlds__assertion__Outer_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand0_45, (MR_Integer) 1)));
#line 738 "assertion.m"
                    MR_Word hlds__assertion__Inner_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand0_45, (MR_Integer) 2)));
#line 738 "assertion.m"
                    MR_Word hlds__assertion__MainGoal0_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand0_45, (MR_Integer) 4)));
#line 738 "assertion.m"
                    MR_Word hlds__assertion__OrElseAlternatives0_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand0_45, (MR_Integer) 5)));
#line 738 "assertion.m"
                    MR_Word hlds__assertion__OrElseInners_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand0_45, (MR_Integer) 6)));
#line 738 "assertion.m"
                    MR_Word hlds__assertion__MainGoal_52;
#line 738 "assertion.m"
                    MR_Word hlds__assertion__OrElseAlternatives_53;
#line 738 "assertion.m"
                    MR_Word hlds__assertion__Vars_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand0_45, (MR_Integer) 3)));

#line 739 "assertion.m"
                    {
#line 739 "assertion.m"
                      hlds__assertion__normalise_goal_2_p_0(hlds__assertion__MainGoal0_49, &hlds__assertion__MainGoal_52);
                    }
#line 740 "assertion.m"
                    {
#line 740 "assertion.m"
                      hlds__assertion__normalise_goals_2_p_0(hlds__assertion__OrElseAlternatives0_50, &hlds__assertion__OrElseAlternatives_53);
                    }
#line 741 "assertion.m"
                    {
#line 741 "assertion.m"
                      hlds__assertion__ShortHand_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 741 "assertion.m"
                      MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand_54, 0) = ((MR_Box) (hlds__assertion__GoalType_46));
#line 741 "assertion.m"
                      MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand_54, 1) = ((MR_Box) (hlds__assertion__Outer_47));
#line 741 "assertion.m"
                      MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand_54, 2) = ((MR_Box) (hlds__assertion__Inner_48));
#line 741 "assertion.m"
                      MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand_54, 3) = ((MR_Box) (hlds__assertion__Vars_65));
#line 741 "assertion.m"
                      MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand_54, 4) = ((MR_Box) (hlds__assertion__MainGoal_52));
#line 741 "assertion.m"
                      MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand_54, 5) = ((MR_Box) (hlds__assertion__OrElseAlternatives_53));
#line 741 "assertion.m"
                      MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand_54, 6) = ((MR_Box) (hlds__assertion__OrElseInners_51));
#line 741 "assertion.m"
                    }
#line 738 "assertion.m"
                  }
#line 743 "assertion.m"
                  break;
#line 743 "assertion.m"
                case (MR_Integer) 2:
#line 744 "assertion.m"
                  {
#line 744 "assertion.m"
                    MR_Word hlds__assertion__MaybeIO_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__ShortHand0_45, (MR_Integer) 0)));
#line 744 "assertion.m"
                    MR_Word hlds__assertion__ResultVar_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__ShortHand0_45, (MR_Integer) 1)));
#line 744 "assertion.m"
                    MR_Word hlds__assertion__SubGoal0_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__ShortHand0_45, (MR_Integer) 2)));
#line 744 "assertion.m"
                    MR_Word hlds__assertion__SubGoal_67;

#line 745 "assertion.m"
                    {
#line 745 "assertion.m"
                      hlds__assertion__normalise_goal_2_p_0(hlds__assertion__SubGoal0_66, &hlds__assertion__SubGoal_67);
                    }
#line 746 "assertion.m"
                    {
#line 746 "assertion.m"
                      hlds__assertion__ShortHand_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 746 "assertion.m"
                      MR_hl_field(MR_mktag(2), hlds__assertion__ShortHand_54, 0) = ((MR_Box) (hlds__assertion__MaybeIO_55));
#line 746 "assertion.m"
                      MR_hl_field(MR_mktag(2), hlds__assertion__ShortHand_54, 1) = ((MR_Box) (hlds__assertion__ResultVar_56));
#line 746 "assertion.m"
                      MR_hl_field(MR_mktag(2), hlds__assertion__ShortHand_54, 2) = ((MR_Box) (hlds__assertion__SubGoal_67));
#line 746 "assertion.m"
                    }
#line 744 "assertion.m"
                  }
#line 743 "assertion.m"
                  break;
#line 743 "assertion.m"
              }
#line 753 "assertion.m"
              {
#line 753 "assertion.m"
                MR_Word base;
#line 753 "assertion.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 753 "assertion.m"
                *hlds__assertion__GoalExpr_4 = base;
#line 753 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 753 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__assertion__ShortHand_54));
#line 753 "assertion.m"
              }
#line 735 "assertion.m"
            }
#line 700 "assertion.m"
            break;
#line 700 "assertion.m"
        }
#line 700 "assertion.m"
        break;
#line 700 "assertion.m"
    }
#line 700 "assertion.m"
  }
#line 692 "assertion.m"
}

#line 674 "assertion.m"
static void MR_CALL 
hlds__assertion__update_pred_info_4_p_0(
#line 674 "assertion.m"
  MR_Integer hlds__assertion__AssertId_5,
#line 674 "assertion.m"
  MR_Word hlds__assertion__PredId_6,
#line 674 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Module_0_12,
#line 674 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Module_13)
#line 674 "assertion.m"
{
#line 677 "assertion.m"
  {
#line 677 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 677 "assertion.m"
    MR_Word hlds__assertion__PredInfo0_8;
#line 677 "assertion.m"
    MR_Word hlds__assertion__Assertions0_9;
#line 677 "assertion.m"
    MR_Word hlds__assertion__Assertions_10;
#line 677 "assertion.m"
    MR_Word hlds__assertion__PredInfo_11;

#line 678 "assertion.m"
    {
#line 678 "assertion.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__assertion__STATE_VARIABLE_Module_0_12, hlds__assertion__PredId_6, &hlds__assertion__PredInfo0_8);
    }
#line 679 "assertion.m"
    {
#line 679 "assertion.m"
      hlds__hlds_pred__pred_info_get_assertions_2_p_0(hlds__assertion__PredInfo0_8, &hlds__assertion__Assertions0_9);
    }
#line 680 "assertion.m"
    {
#line 680 "assertion.m"
      mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (hlds__assertion__AssertId_5)), hlds__assertion__Assertions0_9, &hlds__assertion__Assertions_10);
    }
#line 681 "assertion.m"
    {
#line 681 "assertion.m"
      hlds__hlds_pred__pred_info_set_assertions_3_p_0(hlds__assertion__Assertions_10, hlds__assertion__PredInfo0_8, &hlds__assertion__PredInfo_11);
    }
#line 682 "assertion.m"
    {
#line 682 "assertion.m"
      hlds__hlds_module__module_info_set_pred_info_4_p_0(hlds__assertion__PredId_6, hlds__assertion__PredInfo_11, hlds__assertion__STATE_VARIABLE_Module_0_12, hlds__assertion__STATE_VARIABLE_Module_13);
    }
#line 677 "assertion.m"
  }
#line 674 "assertion.m"
}

#line 642 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_goals_cases_4_p_0(
#line 642 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 642 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2,
#line 642 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
#line 642 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4)
#line 642 "assertion.m"
{
#line 645 "assertion.m"
  while (MR_TRUE)
#line 645 "assertion.m"
    {
#line 645 "assertion.m"
      /* tailcall optimized into a loop */
#line 645 "assertion.m"
      {
#line 645 "assertion.m"
        MR_bool hlds__assertion__succeeded;

#line 645 "assertion.m"
        if ((hlds__assertion__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 645 "assertion.m"
          {
#line 645 "assertion.m"
            hlds__assertion__succeeded = (hlds__assertion__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 645 "assertion.m"
            if (hlds__assertion__succeeded)
#line 645 "assertion.m"
              {
#line 645 "assertion.m"
                *hlds__assertion__STATE_VARIABLE_Subst_4 = hlds__assertion__STATE_VARIABLE_Subst_0_3;
#line 645 "assertion.m"
                hlds__assertion__succeeded = MR_TRUE;
#line 645 "assertion.m"
              }
#line 645 "assertion.m"
          }
#line 645 "assertion.m"
        else
#line 646 "assertion.m"
          {
#line 646 "assertion.m"
            MR_Word hlds__assertion__TypeCtorInfo_26_26;
#line 646 "assertion.m"
            MR_Word hlds__assertion__TypeInfo_28_28;
#line 646 "assertion.m"
            MR_Word hlds__assertion__CaseA_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
#line 646 "assertion.m"
            MR_Word hlds__assertion__CaseAs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
#line 646 "assertion.m"
            MR_Word hlds__assertion__CaseB_10;
#line 646 "assertion.m"
            MR_Word hlds__assertion__CaseBs_11;
#line 646 "assertion.m"
            MR_Word hlds__assertion__MainConsIdA_13;
#line 646 "assertion.m"
            MR_Word hlds__assertion__OtherConsIdsA_14;
#line 646 "assertion.m"
            MR_Word hlds__assertion__GoalA_15;
#line 646 "assertion.m"
            MR_Word hlds__assertion__MainConsIdB_16;
#line 646 "assertion.m"
            MR_Word hlds__assertion__OtherConsIdsB_17;
#line 646 "assertion.m"
            MR_Word hlds__assertion__GoalB_18;
#line 646 "assertion.m"
            MR_Word hlds__assertion__SortedConsIds_19;
#line 646 "assertion.m"
            MR_Word hlds__assertion__V_22_22;
#line 646 "assertion.m"
            MR_Word hlds__assertion__V_23_23;
#line 646 "assertion.m"
            MR_Word hlds__assertion__STATE_VARIABLE_Subst_24_24;
#line 646 "assertion.m"
            MR_Word hlds__assertion__V_27_27;
#line 646 "assertion.m"
            MR_Word hlds__assertion__GoalExprA_34;
#line 646 "assertion.m"
            MR_Word hlds__assertion__GoalExprB_36;
#line 510 "assertion.m"
            MR_Word hlds__assertion___GoalInfoA_35;
#line 511 "assertion.m"
            MR_Word hlds__assertion___GoalInfoB_37;

#line 646 "assertion.m"
            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 646 "assertion.m"
            if (hlds__assertion__succeeded)
#line 646 "assertion.m"
              {
#line 646 "assertion.m"
                hlds__assertion__CaseB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)));
#line 646 "assertion.m"
                hlds__assertion__CaseBs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 1)));
#line 647 "assertion.m"
                hlds__assertion__MainConsIdA_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__CaseA_8, (MR_Integer) 0)));
#line 647 "assertion.m"
                hlds__assertion__OtherConsIdsA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__CaseA_8, (MR_Integer) 1)));
#line 647 "assertion.m"
                hlds__assertion__GoalA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__CaseA_8, (MR_Integer) 2)));
#line 648 "assertion.m"
                hlds__assertion__MainConsIdB_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__CaseB_10, (MR_Integer) 0)));
#line 648 "assertion.m"
                hlds__assertion__OtherConsIdsB_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__CaseB_10, (MR_Integer) 1)));
#line 648 "assertion.m"
                hlds__assertion__GoalB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__CaseB_10, (MR_Integer) 2)));
#line 3116 "hlds.assertion.c"
                hlds__assertion__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 649 "assertion.m"
                {
#line 649 "assertion.m"
                  hlds__assertion__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 649 "assertion.m"
                  MR_hl_field(MR_mktag(1), hlds__assertion__V_22_22, 0) = ((MR_Box) (hlds__assertion__MainConsIdA_13));
#line 649 "assertion.m"
                  MR_hl_field(MR_mktag(1), hlds__assertion__V_22_22, 1) = ((MR_Box) (hlds__assertion__OtherConsIdsA_14));
#line 649 "assertion.m"
                }
#line 649 "assertion.m"
                {
#line 649 "assertion.m"
                  mercury__list__sort_2_p_0(hlds__assertion__TypeCtorInfo_26_26, hlds__assertion__V_22_22, &hlds__assertion__SortedConsIds_19);
                }
#line 650 "assertion.m"
                {
#line 650 "assertion.m"
                  hlds__assertion__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 650 "assertion.m"
                  MR_hl_field(MR_mktag(1), hlds__assertion__V_23_23, 0) = ((MR_Box) (hlds__assertion__MainConsIdB_16));
#line 650 "assertion.m"
                  MR_hl_field(MR_mktag(1), hlds__assertion__V_23_23, 1) = ((MR_Box) (hlds__assertion__OtherConsIdsB_17));
#line 650 "assertion.m"
                }
#line 650 "assertion.m"
                {
#line 650 "assertion.m"
                  mercury__list__sort_2_p_0(hlds__assertion__TypeCtorInfo_26_26, hlds__assertion__V_23_23, &hlds__assertion__V_27_27);
                }
#line 3148 "hlds.assertion.c"
                hlds__assertion__TypeInfo_28_28 = (MR_Word) &hlds__assertion_scalar_common_1[6];
#line 650 "assertion.m"
                {
#line 650 "assertion.m"
                  hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_28_28, ((MR_Box) (hlds__assertion__SortedConsIds_19)), ((MR_Box) (hlds__assertion__V_27_27)));
                }
#line 646 "assertion.m"
                if (hlds__assertion__succeeded)
#line 646 "assertion.m"
                  {
#line 510 "assertion.m"
                    hlds__assertion__GoalExprA_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalA_15, (MR_Integer) 0)));
#line 510 "assertion.m"
                    hlds__assertion___GoalInfoA_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalA_15, (MR_Integer) 1)));
#line 511 "assertion.m"
                    hlds__assertion__GoalExprB_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalB_18, (MR_Integer) 0)));
#line 511 "assertion.m"
                    hlds__assertion___GoalInfoB_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalB_18, (MR_Integer) 1)));
#line 512 "assertion.m"
                    {
#line 512 "assertion.m"
                      hlds__assertion__succeeded = hlds__assertion__equal_goal_exprs_4_p_0(hlds__assertion__GoalExprA_34, hlds__assertion__GoalExprB_36, hlds__assertion__STATE_VARIABLE_Subst_0_3, &hlds__assertion__STATE_VARIABLE_Subst_24_24);
                    }
#line 646 "assertion.m"
                    if (hlds__assertion__succeeded)
#line 652 "assertion.m"
                      {
#line 652 "assertion.m"
                        /* direct tailcall eliminated */
#line 652 "assertion.m"
                        {
#line 652 "assertion.m"
                          MR_Word hlds__assertion__HeadVar__1__tmp_copy_1 = hlds__assertion__CaseAs_9;
#line 652 "assertion.m"
                          MR_Word hlds__assertion__HeadVar__2__tmp_copy_2 = hlds__assertion__CaseBs_11;
#line 652 "assertion.m"
                          MR_Word hlds__assertion__STATE_VARIABLE_Subst_0__tmp_copy_3 = hlds__assertion__STATE_VARIABLE_Subst_24_24;

#line 652 "assertion.m"
                          hlds__assertion__STATE_VARIABLE_Subst_0_3 = hlds__assertion__STATE_VARIABLE_Subst_0__tmp_copy_3;
#line 652 "assertion.m"
                          hlds__assertion__HeadVar__2_2 = hlds__assertion__HeadVar__2__tmp_copy_2;
#line 652 "assertion.m"
                          hlds__assertion__HeadVar__1_1 = hlds__assertion__HeadVar__1__tmp_copy_1;
#line 652 "assertion.m"
                        }
#line 652 "assertion.m"
                        continue;
#line 652 "assertion.m"
                      }
#line 646 "assertion.m"
                  }
#line 646 "assertion.m"
              }
#line 646 "assertion.m"
          }
#line 645 "assertion.m"
        return hlds__assertion__succeeded;
#line 645 "assertion.m"
      }
#line 645 "assertion.m"
      break;
#line 645 "assertion.m"
    }
#line 642 "assertion.m"
}

#line 634 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_goals_list_4_p_0(
#line 634 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 634 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2,
#line 634 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
#line 634 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4)
#line 634 "assertion.m"
{
#line 637 "assertion.m"
  while (MR_TRUE)
#line 637 "assertion.m"
    {
#line 637 "assertion.m"
      /* tailcall optimized into a loop */
#line 637 "assertion.m"
      {
#line 637 "assertion.m"
        MR_bool hlds__assertion__succeeded;

#line 637 "assertion.m"
        if ((hlds__assertion__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 637 "assertion.m"
          {
#line 637 "assertion.m"
            hlds__assertion__succeeded = (hlds__assertion__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 637 "assertion.m"
            if (hlds__assertion__succeeded)
#line 637 "assertion.m"
              {
#line 637 "assertion.m"
                *hlds__assertion__STATE_VARIABLE_Subst_4 = hlds__assertion__STATE_VARIABLE_Subst_0_3;
#line 637 "assertion.m"
                hlds__assertion__succeeded = MR_TRUE;
#line 637 "assertion.m"
              }
#line 637 "assertion.m"
          }
#line 637 "assertion.m"
        else
#line 638 "assertion.m"
          {
#line 638 "assertion.m"
            MR_Word hlds__assertion__GoalA_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
#line 638 "assertion.m"
            MR_Word hlds__assertion__GoalAs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
#line 638 "assertion.m"
            MR_Word hlds__assertion__GoalB_10;
#line 638 "assertion.m"
            MR_Word hlds__assertion__GoalBs_11;
#line 638 "assertion.m"
            MR_Word hlds__assertion__STATE_VARIABLE_Subst_15_15;
#line 638 "assertion.m"
            MR_Word hlds__assertion__GoalExprA_22;
#line 638 "assertion.m"
            MR_Word hlds__assertion__GoalExprB_24;
#line 510 "assertion.m"
            MR_Word hlds__assertion___GoalInfoA_23;
#line 511 "assertion.m"
            MR_Word hlds__assertion___GoalInfoB_25;

#line 638 "assertion.m"
            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 638 "assertion.m"
            if (hlds__assertion__succeeded)
#line 638 "assertion.m"
              {
#line 638 "assertion.m"
                hlds__assertion__GoalB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)));
#line 638 "assertion.m"
                hlds__assertion__GoalBs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 1)));
#line 510 "assertion.m"
                hlds__assertion__GoalExprA_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalA_8, (MR_Integer) 0)));
#line 510 "assertion.m"
                hlds__assertion___GoalInfoA_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalA_8, (MR_Integer) 1)));
#line 511 "assertion.m"
                hlds__assertion__GoalExprB_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalB_10, (MR_Integer) 0)));
#line 511 "assertion.m"
                hlds__assertion___GoalInfoB_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalB_10, (MR_Integer) 1)));
#line 512 "assertion.m"
                {
#line 512 "assertion.m"
                  hlds__assertion__succeeded = hlds__assertion__equal_goal_exprs_4_p_0(hlds__assertion__GoalExprA_22, hlds__assertion__GoalExprB_24, hlds__assertion__STATE_VARIABLE_Subst_0_3, &hlds__assertion__STATE_VARIABLE_Subst_15_15);
                }
#line 638 "assertion.m"
                if (hlds__assertion__succeeded)
#line 640 "assertion.m"
                  {
#line 640 "assertion.m"
                    /* direct tailcall eliminated */
#line 640 "assertion.m"
                    {
#line 640 "assertion.m"
                      MR_Word hlds__assertion__HeadVar__1__tmp_copy_1 = hlds__assertion__GoalAs_9;
#line 640 "assertion.m"
                      MR_Word hlds__assertion__HeadVar__2__tmp_copy_2 = hlds__assertion__GoalBs_11;
#line 640 "assertion.m"
                      MR_Word hlds__assertion__STATE_VARIABLE_Subst_0__tmp_copy_3 = hlds__assertion__STATE_VARIABLE_Subst_15_15;

#line 640 "assertion.m"
                      hlds__assertion__STATE_VARIABLE_Subst_0_3 = hlds__assertion__STATE_VARIABLE_Subst_0__tmp_copy_3;
#line 640 "assertion.m"
                      hlds__assertion__HeadVar__2_2 = hlds__assertion__HeadVar__2__tmp_copy_2;
#line 640 "assertion.m"
                      hlds__assertion__HeadVar__1_1 = hlds__assertion__HeadVar__1__tmp_copy_1;
#line 640 "assertion.m"
                    }
#line 640 "assertion.m"
                    continue;
#line 640 "assertion.m"
                  }
#line 638 "assertion.m"
              }
#line 638 "assertion.m"
          }
#line 637 "assertion.m"
        return hlds__assertion__succeeded;
#line 637 "assertion.m"
      }
#line 637 "assertion.m"
      break;
#line 637 "assertion.m"
    }
#line 634 "assertion.m"
}

#line 617 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_unification_4_p_0(
#line 617 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 617 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2,
#line 617 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
#line 617 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4)
#line 617 "assertion.m"
{
#line 620 "assertion.m"
  {
#line 620 "assertion.m"
    MR_bool hlds__assertion__succeeded;

#line 620 "assertion.m"
#line 620 "assertion.m"
    switch (MR_tag((MR_Word) hlds__assertion__HeadVar__1_1)) {
#line 620 "assertion.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 620 "assertion.m"
      case (MR_Integer) 0:
#line 620 "assertion.m"
        {
#line 620 "assertion.m"
          MR_Word hlds__assertion__VA_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
#line 620 "assertion.m"
          MR_Word hlds__assertion__VB_68;
#line 621 "assertion.m"
          MR_Word hlds__assertion__VAs_67;
#line 621 "assertion.m"
          MR_Word hlds__assertion__VBs_69;
#line 603 "assertion.m"
          MR_Word hlds__assertion__SubstVA_80;
#line 603 "assertion.m"
          MR_Word hlds__assertion__TypeInfo_12_82;
#line 603 "assertion.m"
          MR_Box hlds__assertion__conv0_SubstVA_80;

#line 620 "assertion.m"
          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 620 "assertion.m"
          if (hlds__assertion__succeeded)
#line 620 "assertion.m"
            {
#line 620 "assertion.m"
              hlds__assertion__VB_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)));
#line 621 "assertion.m"
              hlds__assertion__VAs_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 621 "assertion.m"
              hlds__assertion__VBs_69 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3400 "hlds.assertion.c"
              hlds__assertion__TypeInfo_12_82 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 603 "assertion.m"
              {
#line 603 "assertion.m"
                hlds__assertion__succeeded = mercury__map__search_3_p_0(hlds__assertion__TypeInfo_12_82, hlds__assertion__TypeInfo_12_82, hlds__assertion__STATE_VARIABLE_Subst_0_3, ((MR_Box) (hlds__assertion__VA_66)), &hlds__assertion__conv0_SubstVA_80);
              }
#line 603 "assertion.m"
              if (hlds__assertion__succeeded)
#line 603 "assertion.m"
                {
#line 603 "assertion.m"
                  hlds__assertion__SubstVA_80 = ((MR_Word) hlds__assertion__conv0_SubstVA_80);
#line 603 "assertion.m"
                  hlds__assertion__succeeded = MR_TRUE;
#line 603 "assertion.m"
                }
#line 603 "assertion.m"
              if (hlds__assertion__succeeded)
#line 604 "assertion.m"
                {
#line 604 "assertion.m"
                  {
#line 604 "assertion.m"
                    hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__SubstVA_80)), ((MR_Box) (hlds__assertion__VB_68)));
                  }
#line 604 "assertion.m"
                  if (hlds__assertion__succeeded)
#line 604 "assertion.m"
                    {
#line 604 "assertion.m"
                      *hlds__assertion__STATE_VARIABLE_Subst_4 = hlds__assertion__STATE_VARIABLE_Subst_0_3;
#line 604 "assertion.m"
                      hlds__assertion__succeeded = MR_TRUE;
#line 604 "assertion.m"
                    }
#line 604 "assertion.m"
                }
#line 603 "assertion.m"
              else
#line 606 "assertion.m"
                {
#line 606 "assertion.m"
                  MR_Word hlds__assertion__TypeInfo_13_83 = (MR_Word) &hlds__assertion_scalar_common_1[0];

#line 606 "assertion.m"
                  {
#line 606 "assertion.m"
                    hlds__assertion__succeeded = mercury__map__insert_4_p_0(hlds__assertion__TypeInfo_13_83, hlds__assertion__TypeInfo_13_83, ((MR_Box) (hlds__assertion__VA_66)), ((MR_Box) (hlds__assertion__VB_68)), hlds__assertion__STATE_VARIABLE_Subst_0_3, hlds__assertion__STATE_VARIABLE_Subst_4);
                  }
#line 606 "assertion.m"
                }
#line 620 "assertion.m"
            }
#line 620 "assertion.m"
        }
#line 620 "assertion.m"
        break;
#line 620 "assertion.m"
      case (MR_Integer) 1:
#line 623 "assertion.m"
        {
#line 623 "assertion.m"
          MR_Word hlds__assertion__ConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
#line 623 "assertion.m"
          MR_Word hlds__assertion__E_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
#line 623 "assertion.m"
          MR_Word hlds__assertion__VarsA_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 2)));
#line 623 "assertion.m"
          MR_Word hlds__assertion__VarsB_18;
#line 623 "assertion.m"
          MR_Word hlds__assertion__V_43_43;
#line 623 "assertion.m"
          MR_Word hlds__assertion__V_44_44;

#line 622 "assertion.m"
          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 622 "assertion.m"
          if (hlds__assertion__succeeded)
#line 622 "assertion.m"
            {
#line 622 "assertion.m"
              hlds__assertion__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)));
#line 622 "assertion.m"
              hlds__assertion__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 1)));
#line 622 "assertion.m"
              hlds__assertion__VarsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 2)));
#line 622 "assertion.m"
              {
#line 622 "assertion.m"
                hlds__assertion__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(hlds__assertion__ConsId_15, hlds__assertion__V_43_43);
              }
#line 623 "assertion.m"
              if (hlds__assertion__succeeded)
#line 623 "assertion.m"
                {
#line 622 "assertion.m"
                  hlds__assertion__succeeded = (hlds__assertion__E_16 == hlds__assertion__V_44_44);
#line 623 "assertion.m"
                  if (hlds__assertion__succeeded)
#line 624 "assertion.m"
                    {
#line 624 "assertion.m"
                      hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__VarsA_17, hlds__assertion__VarsB_18, hlds__assertion__STATE_VARIABLE_Subst_0_3, hlds__assertion__STATE_VARIABLE_Subst_4);
                    }
#line 623 "assertion.m"
                }
#line 622 "assertion.m"
            }
#line 623 "assertion.m"
        }
#line 620 "assertion.m"
        break;
#line 620 "assertion.m"
      case (MR_Integer) 2:
#line 625 "assertion.m"
        {
#line 625 "assertion.m"
          MR_Word hlds__assertion__TypeInfo_52_52;
#line 625 "assertion.m"
          MR_Word hlds__assertion__Purity_26 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 625 "assertion.m"
          MR_Word hlds__assertion__Groundness_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 625 "assertion.m"
          MR_Word hlds__assertion__PredOrFunc_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 625 "assertion.m"
          MR_Word hlds__assertion__NLVarsA_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__1_1, (MR_Integer) 2)));
#line 625 "assertion.m"
          MR_Word hlds__assertion__LVarsA_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__1_1, (MR_Integer) 3)));
#line 625 "assertion.m"
          MR_Word hlds__assertion__Modes_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__1_1, (MR_Integer) 4)));
#line 625 "assertion.m"
          MR_Word hlds__assertion__Det_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__1_1, (MR_Integer) 5)));
#line 625 "assertion.m"
          MR_Word hlds__assertion__GoalA_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__1_1, (MR_Integer) 6)));
#line 625 "assertion.m"
          MR_Word hlds__assertion__NLVarsB_35;
#line 625 "assertion.m"
          MR_Word hlds__assertion__LVarsB_36;
#line 625 "assertion.m"
          MR_Word hlds__assertion__GoalB_37;
#line 625 "assertion.m"
          MR_Word hlds__assertion__STATE_VARIABLE_Subst_40_40;
#line 625 "assertion.m"
          MR_Word hlds__assertion__STATE_VARIABLE_Subst_41_41;
#line 625 "assertion.m"
          MR_Word hlds__assertion__V_45_45;
#line 625 "assertion.m"
          MR_Word hlds__assertion__V_46_46;
#line 625 "assertion.m"
          MR_Word hlds__assertion__V_47_47;
#line 625 "assertion.m"
          MR_Word hlds__assertion__V_49_49;
#line 625 "assertion.m"
          MR_Word hlds__assertion__V_50_50;
#line 625 "assertion.m"
          MR_Word hlds__assertion__GoalExprA_58;
#line 625 "assertion.m"
          MR_Word hlds__assertion__GoalExprB_60;
#line 510 "assertion.m"
          MR_Word hlds__assertion___GoalInfoA_59;
#line 511 "assertion.m"
          MR_Word hlds__assertion___GoalInfoB_61;

#line 628 "assertion.m"
          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 628 "assertion.m"
          if (hlds__assertion__succeeded)
#line 628 "assertion.m"
            {
#line 628 "assertion.m"
              hlds__assertion__V_45_45 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 628 "assertion.m"
              hlds__assertion__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 628 "assertion.m"
              hlds__assertion__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 628 "assertion.m"
              hlds__assertion__NLVarsB_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__2_2, (MR_Integer) 2)));
#line 628 "assertion.m"
              hlds__assertion__LVarsB_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__2_2, (MR_Integer) 3)));
#line 628 "assertion.m"
              hlds__assertion__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__2_2, (MR_Integer) 4)));
#line 628 "assertion.m"
              hlds__assertion__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__2_2, (MR_Integer) 5)));
#line 628 "assertion.m"
              hlds__assertion__GoalB_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__2_2, (MR_Integer) 6)));
#line 628 "assertion.m"
              hlds__assertion__succeeded = (hlds__assertion__Purity_26 == hlds__assertion__V_45_45);
#line 625 "assertion.m"
              if (hlds__assertion__succeeded)
#line 625 "assertion.m"
                {
#line 628 "assertion.m"
                  hlds__assertion__succeeded = (hlds__assertion__Groundness_27 == hlds__assertion__V_46_46);
#line 625 "assertion.m"
                  if (hlds__assertion__succeeded)
#line 625 "assertion.m"
                    {
#line 628 "assertion.m"
                      hlds__assertion__succeeded = (hlds__assertion__PredOrFunc_28 == hlds__assertion__V_47_47);
#line 625 "assertion.m"
                      if (hlds__assertion__succeeded)
#line 625 "assertion.m"
                        {
#line 628 "assertion.m"
                          hlds__assertion__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);
#line 625 "assertion.m"
                          if (hlds__assertion__succeeded)
#line 625 "assertion.m"
                            {
#line 3610 "hlds.assertion.c"
                              hlds__assertion__TypeInfo_52_52 = (MR_Word) &hlds__assertion_scalar_common_1[5];
#line 628 "assertion.m"
                              {
#line 628 "assertion.m"
                                hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_52_52, ((MR_Box) (hlds__assertion__Modes_32)), ((MR_Box) (hlds__assertion__V_49_49)));
                              }
#line 625 "assertion.m"
                              if (hlds__assertion__succeeded)
#line 625 "assertion.m"
                                {
#line 628 "assertion.m"
                                  hlds__assertion__succeeded = (hlds__assertion__Det_33 == hlds__assertion__V_50_50);
#line 625 "assertion.m"
                                  if (hlds__assertion__succeeded)
#line 625 "assertion.m"
                                    {
#line 630 "assertion.m"
                                      {
#line 630 "assertion.m"
                                        hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__NLVarsA_30, hlds__assertion__NLVarsB_35, hlds__assertion__STATE_VARIABLE_Subst_0_3, &hlds__assertion__STATE_VARIABLE_Subst_40_40);
                                      }
#line 625 "assertion.m"
                                      if (hlds__assertion__succeeded)
#line 625 "assertion.m"
                                        {
#line 631 "assertion.m"
                                          {
#line 631 "assertion.m"
                                            hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__LVarsA_31, hlds__assertion__LVarsB_36, hlds__assertion__STATE_VARIABLE_Subst_40_40, &hlds__assertion__STATE_VARIABLE_Subst_41_41);
                                          }
#line 625 "assertion.m"
                                          if (hlds__assertion__succeeded)
#line 625 "assertion.m"
                                            {
#line 510 "assertion.m"
                                              hlds__assertion__GoalExprA_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalA_34, (MR_Integer) 0)));
#line 510 "assertion.m"
                                              hlds__assertion___GoalInfoA_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalA_34, (MR_Integer) 1)));
#line 511 "assertion.m"
                                              hlds__assertion__GoalExprB_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalB_37, (MR_Integer) 0)));
#line 511 "assertion.m"
                                              hlds__assertion___GoalInfoB_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalB_37, (MR_Integer) 1)));
#line 512 "assertion.m"
                                              {
#line 512 "assertion.m"
                                                hlds__assertion__succeeded = hlds__assertion__equal_goal_exprs_4_p_0(hlds__assertion__GoalExprA_58, hlds__assertion__GoalExprB_60, hlds__assertion__STATE_VARIABLE_Subst_41_41, hlds__assertion__STATE_VARIABLE_Subst_4);
                                              }
#line 625 "assertion.m"
                                            }
#line 625 "assertion.m"
                                        }
#line 625 "assertion.m"
                                    }
#line 625 "assertion.m"
                                }
#line 625 "assertion.m"
                            }
#line 625 "assertion.m"
                        }
#line 625 "assertion.m"
                    }
#line 625 "assertion.m"
                }
#line 628 "assertion.m"
            }
#line 625 "assertion.m"
        }
#line 620 "assertion.m"
        break;
#line 620 "assertion.m"
    }
#line 620 "assertion.m"
    return hlds__assertion__succeeded;
#line 620 "assertion.m"
  }
#line 617 "assertion.m"
}

#line 609 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_vars_4_p_0(
#line 609 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 609 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2,
#line 609 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
#line 609 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4)
#line 609 "assertion.m"
{
#line 612 "assertion.m"
  while (MR_TRUE)
#line 612 "assertion.m"
    {
#line 612 "assertion.m"
      /* tailcall optimized into a loop */
#line 612 "assertion.m"
      {
#line 612 "assertion.m"
        MR_bool hlds__assertion__succeeded;

#line 612 "assertion.m"
        if ((hlds__assertion__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 612 "assertion.m"
          {
#line 612 "assertion.m"
            hlds__assertion__succeeded = (hlds__assertion__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 612 "assertion.m"
            if (hlds__assertion__succeeded)
#line 612 "assertion.m"
              {
#line 612 "assertion.m"
                *hlds__assertion__STATE_VARIABLE_Subst_4 = hlds__assertion__STATE_VARIABLE_Subst_0_3;
#line 612 "assertion.m"
                hlds__assertion__succeeded = MR_TRUE;
#line 612 "assertion.m"
              }
#line 612 "assertion.m"
          }
#line 612 "assertion.m"
        else
#line 613 "assertion.m"
          {
#line 613 "assertion.m"
            MR_Word hlds__assertion__VA_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
#line 613 "assertion.m"
            MR_Word hlds__assertion__VAs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
#line 613 "assertion.m"
            MR_Word hlds__assertion__VB_10;
#line 613 "assertion.m"
            MR_Word hlds__assertion__VBs_11;
#line 613 "assertion.m"
            MR_Word hlds__assertion__STATE_VARIABLE_Subst_15_15;
#line 603 "assertion.m"
            MR_Word hlds__assertion__SubstVA_22;
#line 603 "assertion.m"
            MR_Word hlds__assertion__TypeInfo_12_24;
#line 603 "assertion.m"
            MR_Box hlds__assertion__conv0_SubstVA_22;

#line 613 "assertion.m"
            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 613 "assertion.m"
            if (hlds__assertion__succeeded)
#line 613 "assertion.m"
              {
#line 613 "assertion.m"
                hlds__assertion__VB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)));
#line 613 "assertion.m"
                hlds__assertion__VBs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 1)));
#line 3762 "hlds.assertion.c"
                hlds__assertion__TypeInfo_12_24 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 603 "assertion.m"
                {
#line 603 "assertion.m"
                  hlds__assertion__succeeded = mercury__map__search_3_p_0(hlds__assertion__TypeInfo_12_24, hlds__assertion__TypeInfo_12_24, hlds__assertion__STATE_VARIABLE_Subst_0_3, ((MR_Box) (hlds__assertion__VA_8)), &hlds__assertion__conv0_SubstVA_22);
                }
#line 603 "assertion.m"
                if (hlds__assertion__succeeded)
#line 603 "assertion.m"
                  {
#line 603 "assertion.m"
                    hlds__assertion__SubstVA_22 = ((MR_Word) hlds__assertion__conv0_SubstVA_22);
#line 603 "assertion.m"
                    hlds__assertion__succeeded = MR_TRUE;
#line 603 "assertion.m"
                  }
#line 603 "assertion.m"
                if (hlds__assertion__succeeded)
#line 604 "assertion.m"
                  {
#line 604 "assertion.m"
                    {
#line 604 "assertion.m"
                      hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__SubstVA_22)), ((MR_Box) (hlds__assertion__VB_10)));
                    }
#line 604 "assertion.m"
                    if (hlds__assertion__succeeded)
#line 604 "assertion.m"
                      {
#line 604 "assertion.m"
                        hlds__assertion__STATE_VARIABLE_Subst_15_15 = hlds__assertion__STATE_VARIABLE_Subst_0_3;
#line 604 "assertion.m"
                        hlds__assertion__succeeded = MR_TRUE;
#line 604 "assertion.m"
                      }
#line 604 "assertion.m"
                  }
#line 603 "assertion.m"
                else
#line 606 "assertion.m"
                  {
#line 606 "assertion.m"
                    MR_Word hlds__assertion__TypeInfo_13_25 = (MR_Word) &hlds__assertion_scalar_common_1[0];

#line 606 "assertion.m"
                    {
#line 606 "assertion.m"
                      hlds__assertion__succeeded = mercury__map__insert_4_p_0(hlds__assertion__TypeInfo_13_25, hlds__assertion__TypeInfo_13_25, ((MR_Box) (hlds__assertion__VA_8)), ((MR_Box) (hlds__assertion__VB_10)), hlds__assertion__STATE_VARIABLE_Subst_0_3, &hlds__assertion__STATE_VARIABLE_Subst_15_15);
                    }
#line 606 "assertion.m"
                  }
#line 613 "assertion.m"
                if (hlds__assertion__succeeded)
#line 615 "assertion.m"
                  {
#line 615 "assertion.m"
                    /* direct tailcall eliminated */
#line 615 "assertion.m"
                    {
#line 615 "assertion.m"
                      MR_Word hlds__assertion__HeadVar__1__tmp_copy_1 = hlds__assertion__VAs_9;
#line 615 "assertion.m"
                      MR_Word hlds__assertion__HeadVar__2__tmp_copy_2 = hlds__assertion__VBs_11;
#line 615 "assertion.m"
                      MR_Word hlds__assertion__STATE_VARIABLE_Subst_0__tmp_copy_3 = hlds__assertion__STATE_VARIABLE_Subst_15_15;

#line 615 "assertion.m"
                      hlds__assertion__STATE_VARIABLE_Subst_0_3 = hlds__assertion__STATE_VARIABLE_Subst_0__tmp_copy_3;
#line 615 "assertion.m"
                      hlds__assertion__HeadVar__2_2 = hlds__assertion__HeadVar__2__tmp_copy_2;
#line 615 "assertion.m"
                      hlds__assertion__HeadVar__1_1 = hlds__assertion__HeadVar__1__tmp_copy_1;
#line 615 "assertion.m"
                    }
#line 615 "assertion.m"
                    continue;
#line 615 "assertion.m"
                  }
#line 613 "assertion.m"
              }
#line 613 "assertion.m"
          }
#line 612 "assertion.m"
        return hlds__assertion__succeeded;
#line 612 "assertion.m"
      }
#line 612 "assertion.m"
      break;
#line 612 "assertion.m"
    }
#line 609 "assertion.m"
}

#line 599 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_var_4_p_0(
#line 599 "assertion.m"
  MR_Word hlds__assertion__VA_5,
#line 599 "assertion.m"
  MR_Word hlds__assertion__VB_6,
#line 599 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_9,
#line 599 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_10)
#line 599 "assertion.m"
{
#line 603 "assertion.m"
  {
#line 603 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 603 "assertion.m"
    MR_Word hlds__assertion__SubstVA_8;
#line 603 "assertion.m"
    MR_Word hlds__assertion__TypeInfo_12_12 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 603 "assertion.m"
    MR_Box hlds__assertion__conv0_SubstVA_8;

#line 603 "assertion.m"
    {
#line 603 "assertion.m"
      hlds__assertion__succeeded = mercury__map__search_3_p_0(hlds__assertion__TypeInfo_12_12, hlds__assertion__TypeInfo_12_12, hlds__assertion__STATE_VARIABLE_Subst_0_9, ((MR_Box) (hlds__assertion__VA_5)), &hlds__assertion__conv0_SubstVA_8);
    }
#line 603 "assertion.m"
    if (hlds__assertion__succeeded)
#line 603 "assertion.m"
      {
#line 603 "assertion.m"
        hlds__assertion__SubstVA_8 = ((MR_Word) hlds__assertion__conv0_SubstVA_8);
#line 603 "assertion.m"
        hlds__assertion__succeeded = MR_TRUE;
#line 603 "assertion.m"
      }
#line 603 "assertion.m"
    if (hlds__assertion__succeeded)
#line 604 "assertion.m"
      {
#line 604 "assertion.m"
        {
#line 604 "assertion.m"
          hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__SubstVA_8)), ((MR_Box) (hlds__assertion__VB_6)));
        }
#line 604 "assertion.m"
        if (hlds__assertion__succeeded)
#line 604 "assertion.m"
          {
#line 604 "assertion.m"
            *hlds__assertion__STATE_VARIABLE_Subst_10 = hlds__assertion__STATE_VARIABLE_Subst_0_9;
#line 604 "assertion.m"
            hlds__assertion__succeeded = MR_TRUE;
#line 604 "assertion.m"
          }
#line 604 "assertion.m"
      }
#line 603 "assertion.m"
    else
#line 606 "assertion.m"
      {
#line 606 "assertion.m"
        MR_Word hlds__assertion__TypeInfo_13_13 = (MR_Word) &hlds__assertion_scalar_common_1[0];

#line 606 "assertion.m"
        {
#line 606 "assertion.m"
          hlds__assertion__succeeded = mercury__map__insert_4_p_0(hlds__assertion__TypeInfo_13_13, hlds__assertion__TypeInfo_13_13, ((MR_Box) (hlds__assertion__VA_5)), ((MR_Box) (hlds__assertion__VB_6)), hlds__assertion__STATE_VARIABLE_Subst_0_9, hlds__assertion__STATE_VARIABLE_Subst_10);
        }
#line 606 "assertion.m"
      }
#line 603 "assertion.m"
    return hlds__assertion__succeeded;
#line 603 "assertion.m"
  }
#line 599 "assertion.m"
}

#line 590 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_goals_shorthand_4_p_0(
#line 590 "assertion.m"
  MR_Word hlds__assertion__ShortHandA_5,
#line 590 "assertion.m"
  MR_Word hlds__assertion__ShortHandB_6,
#line 590 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_12,
#line 590 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_13)
#line 590 "assertion.m"
{
#line 593 "assertion.m"
  {
#line 593 "assertion.m"
    MR_bool hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__ShortHandA_5)) == (MR_mktag((MR_Integer) 0)));
#line 593 "assertion.m"
    MR_Word hlds__assertion__LeftGoalA_8;
#line 593 "assertion.m"
    MR_Word hlds__assertion__RightGoalA_9;
#line 593 "assertion.m"
    MR_Word hlds__assertion__LeftGoalB_10;
#line 593 "assertion.m"
    MR_Word hlds__assertion__RightGoalB_11;
#line 593 "assertion.m"
    MR_Word hlds__assertion__STATE_VARIABLE_Subst_14_14;
#line 593 "assertion.m"
    MR_Word hlds__assertion__GoalExprA_21;
#line 593 "assertion.m"
    MR_Word hlds__assertion__GoalExprB_23;
#line 593 "assertion.m"
    MR_Word hlds__assertion__GoalExprA_31;
#line 593 "assertion.m"
    MR_Word hlds__assertion__GoalExprB_33;
#line 510 "assertion.m"
    MR_Word hlds__assertion___GoalInfoA_22;
#line 511 "assertion.m"
    MR_Word hlds__assertion___GoalInfoB_24;
#line 510 "assertion.m"
    MR_Word hlds__assertion___GoalInfoA_32;
#line 511 "assertion.m"
    MR_Word hlds__assertion___GoalInfoB_34;

#line 594 "assertion.m"
    if (hlds__assertion__succeeded)
#line 594 "assertion.m"
      {
#line 594 "assertion.m"
        hlds__assertion__LeftGoalA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__ShortHandA_5, (MR_Integer) 0)));
#line 594 "assertion.m"
        hlds__assertion__RightGoalA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__ShortHandA_5, (MR_Integer) 1)));
#line 595 "assertion.m"
        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__ShortHandB_6)) == (MR_mktag((MR_Integer) 0)));
#line 595 "assertion.m"
        if (hlds__assertion__succeeded)
#line 595 "assertion.m"
          {
#line 595 "assertion.m"
            hlds__assertion__LeftGoalB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__ShortHandB_6, (MR_Integer) 0)));
#line 595 "assertion.m"
            hlds__assertion__RightGoalB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__ShortHandB_6, (MR_Integer) 1)));
#line 510 "assertion.m"
            hlds__assertion__GoalExprA_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LeftGoalA_8, (MR_Integer) 0)));
#line 510 "assertion.m"
            hlds__assertion___GoalInfoA_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LeftGoalA_8, (MR_Integer) 1)));
#line 511 "assertion.m"
            hlds__assertion__GoalExprB_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LeftGoalB_10, (MR_Integer) 0)));
#line 511 "assertion.m"
            hlds__assertion___GoalInfoB_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LeftGoalB_10, (MR_Integer) 1)));
#line 512 "assertion.m"
            {
#line 512 "assertion.m"
              hlds__assertion__succeeded = hlds__assertion__equal_goal_exprs_4_p_0(hlds__assertion__GoalExprA_21, hlds__assertion__GoalExprB_23, hlds__assertion__STATE_VARIABLE_Subst_0_12, &hlds__assertion__STATE_VARIABLE_Subst_14_14);
            }
#line 593 "assertion.m"
            if (hlds__assertion__succeeded)
#line 593 "assertion.m"
              {
#line 510 "assertion.m"
                hlds__assertion__GoalExprA_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__RightGoalA_9, (MR_Integer) 0)));
#line 510 "assertion.m"
                hlds__assertion___GoalInfoA_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__RightGoalA_9, (MR_Integer) 1)));
#line 511 "assertion.m"
                hlds__assertion__GoalExprB_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__RightGoalB_11, (MR_Integer) 0)));
#line 511 "assertion.m"
                hlds__assertion___GoalInfoB_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__RightGoalB_11, (MR_Integer) 1)));
#line 512 "assertion.m"
                {
#line 512 "assertion.m"
                  hlds__assertion__succeeded = hlds__assertion__equal_goal_exprs_4_p_0(hlds__assertion__GoalExprA_31, hlds__assertion__GoalExprB_33, hlds__assertion__STATE_VARIABLE_Subst_14_14, hlds__assertion__STATE_VARIABLE_Subst_13);
                }
#line 593 "assertion.m"
              }
#line 595 "assertion.m"
          }
#line 594 "assertion.m"
      }
#line 593 "assertion.m"
    return hlds__assertion__succeeded;
#line 593 "assertion.m"
  }
#line 590 "assertion.m"
}

#line 579 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_reason_4_p_0(
#line 579 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 579 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2,
#line 579 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
#line 579 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4)
#line 579 "assertion.m"
{
#line 582 "assertion.m"
  {
#line 582 "assertion.m"
    MR_bool hlds__assertion__succeeded;

#line 582 "assertion.m"
#line 582 "assertion.m"
    switch (MR_tag((MR_Word) hlds__assertion__HeadVar__1_1)) {
#line 582 "assertion.m"
      default:
#line 582 "assertion.m"
        hlds__assertion__succeeded = MR_FALSE;
#line 582 "assertion.m"
        break;
#line 582 "assertion.m"
      case (MR_Integer) 0:
#line 582 "assertion.m"
        {
#line 582 "assertion.m"
          MR_Word hlds__assertion__VarsA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
#line 582 "assertion.m"
          MR_Word hlds__assertion__VarsB_6;

#line 582 "assertion.m"
          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 582 "assertion.m"
          if (hlds__assertion__succeeded)
#line 582 "assertion.m"
            {
#line 582 "assertion.m"
              hlds__assertion__VarsB_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)));
#line 583 "assertion.m"
              {
#line 583 "assertion.m"
                hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__VarsA_5, hlds__assertion__VarsB_6, hlds__assertion__STATE_VARIABLE_Subst_0_3, hlds__assertion__STATE_VARIABLE_Subst_4);
              }
#line 582 "assertion.m"
            }
#line 582 "assertion.m"
        }
#line 582 "assertion.m"
        break;
#line 582 "assertion.m"
      case (MR_Integer) 3:
#line 582 "assertion.m"
#line 582 "assertion.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)))) {
#line 582 "assertion.m"
          default:
#line 582 "assertion.m"
            hlds__assertion__succeeded = MR_FALSE;
#line 582 "assertion.m"
            break;
#line 582 "assertion.m"
          case (MR_Integer) 3:
#line 585 "assertion.m"
            {
#line 585 "assertion.m"
              MR_Word hlds__assertion__ForcePruning_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
#line 585 "assertion.m"
              MR_Word hlds__assertion__V_27_27;

#line 585 "assertion.m"
              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 585 "assertion.m"
              if (hlds__assertion__succeeded)
#line 585 "assertion.m"
                {
#line 585 "assertion.m"
                  hlds__assertion__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__2_2, (MR_Integer) 1)));
#line 585 "assertion.m"
                  hlds__assertion__succeeded = (hlds__assertion__ForcePruning_15 == hlds__assertion__V_27_27);
#line 585 "assertion.m"
                  if (hlds__assertion__succeeded)
#line 585 "assertion.m"
                    {
#line 585 "assertion.m"
                      *hlds__assertion__STATE_VARIABLE_Subst_4 = hlds__assertion__STATE_VARIABLE_Subst_0_3;
#line 585 "assertion.m"
                      hlds__assertion__succeeded = MR_TRUE;
#line 585 "assertion.m"
                    }
#line 585 "assertion.m"
                }
#line 585 "assertion.m"
            }
#line 582 "assertion.m"
            break;
#line 582 "assertion.m"
          case (MR_Integer) 4:
#line 584 "assertion.m"
            {
#line 584 "assertion.m"
              MR_Word hlds__assertion__Removable_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
#line 584 "assertion.m"
              MR_Word hlds__assertion__V_26_26;

#line 584 "assertion.m"
              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 584 "assertion.m"
              if (hlds__assertion__succeeded)
#line 584 "assertion.m"
                {
#line 584 "assertion.m"
                  hlds__assertion__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__2_2, (MR_Integer) 1)));
#line 584 "assertion.m"
                  hlds__assertion__succeeded = (hlds__assertion__Removable_11 == hlds__assertion__V_26_26);
#line 584 "assertion.m"
                  if (hlds__assertion__succeeded)
#line 584 "assertion.m"
                    {
#line 584 "assertion.m"
                      *hlds__assertion__STATE_VARIABLE_Subst_4 = hlds__assertion__STATE_VARIABLE_Subst_0_3;
#line 584 "assertion.m"
                      hlds__assertion__succeeded = MR_TRUE;
#line 584 "assertion.m"
                    }
#line 584 "assertion.m"
                }
#line 584 "assertion.m"
            }
#line 582 "assertion.m"
            break;
#line 582 "assertion.m"
          case (MR_Integer) 5:
#line 587 "assertion.m"
            {
#line 587 "assertion.m"
              MR_Word hlds__assertion__VarA_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
#line 587 "assertion.m"
              MR_Word hlds__assertion__Kind_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__1_1, (MR_Integer) 2)));
#line 587 "assertion.m"
              MR_Word hlds__assertion__VarB_21;
#line 587 "assertion.m"
              MR_Word hlds__assertion__V_28_28;
#line 603 "assertion.m"
              MR_Word hlds__assertion__SubstVA_34;
#line 603 "assertion.m"
              MR_Word hlds__assertion__TypeInfo_12_36;
#line 603 "assertion.m"
              MR_Box hlds__assertion__conv0_SubstVA_34;

#line 586 "assertion.m"
              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 586 "assertion.m"
              if (hlds__assertion__succeeded)
#line 586 "assertion.m"
                {
#line 586 "assertion.m"
                  hlds__assertion__VarB_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__2_2, (MR_Integer) 1)));
#line 586 "assertion.m"
                  hlds__assertion__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__2_2, (MR_Integer) 2)));
#line 586 "assertion.m"
                  hlds__assertion__succeeded = (hlds__assertion__Kind_20 == hlds__assertion__V_28_28);
#line 587 "assertion.m"
                  if (hlds__assertion__succeeded)
#line 587 "assertion.m"
                    {
#line 4213 "hlds.assertion.c"
                      hlds__assertion__TypeInfo_12_36 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 603 "assertion.m"
                      {
#line 603 "assertion.m"
                        hlds__assertion__succeeded = mercury__map__search_3_p_0(hlds__assertion__TypeInfo_12_36, hlds__assertion__TypeInfo_12_36, hlds__assertion__STATE_VARIABLE_Subst_0_3, ((MR_Box) (hlds__assertion__VarA_19)), &hlds__assertion__conv0_SubstVA_34);
                      }
#line 603 "assertion.m"
                      if (hlds__assertion__succeeded)
#line 603 "assertion.m"
                        {
#line 603 "assertion.m"
                          hlds__assertion__SubstVA_34 = ((MR_Word) hlds__assertion__conv0_SubstVA_34);
#line 603 "assertion.m"
                          hlds__assertion__succeeded = MR_TRUE;
#line 603 "assertion.m"
                        }
#line 603 "assertion.m"
                      if (hlds__assertion__succeeded)
#line 604 "assertion.m"
                        {
#line 604 "assertion.m"
                          {
#line 604 "assertion.m"
                            hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__SubstVA_34)), ((MR_Box) (hlds__assertion__VarB_21)));
                          }
#line 604 "assertion.m"
                          if (hlds__assertion__succeeded)
#line 604 "assertion.m"
                            {
#line 604 "assertion.m"
                              *hlds__assertion__STATE_VARIABLE_Subst_4 = hlds__assertion__STATE_VARIABLE_Subst_0_3;
#line 604 "assertion.m"
                              hlds__assertion__succeeded = MR_TRUE;
#line 604 "assertion.m"
                            }
#line 604 "assertion.m"
                        }
#line 603 "assertion.m"
                      else
#line 606 "assertion.m"
                        {
#line 606 "assertion.m"
                          MR_Word hlds__assertion__TypeInfo_13_37 = (MR_Word) &hlds__assertion_scalar_common_1[0];

#line 606 "assertion.m"
                          {
#line 606 "assertion.m"
                            hlds__assertion__succeeded = mercury__map__insert_4_p_0(hlds__assertion__TypeInfo_13_37, hlds__assertion__TypeInfo_13_37, ((MR_Box) (hlds__assertion__VarA_19)), ((MR_Box) (hlds__assertion__VarB_21)), hlds__assertion__STATE_VARIABLE_Subst_0_3, hlds__assertion__STATE_VARIABLE_Subst_4);
                          }
#line 606 "assertion.m"
                        }
#line 587 "assertion.m"
                    }
#line 586 "assertion.m"
                }
#line 587 "assertion.m"
            }
#line 582 "assertion.m"
            break;
#line 582 "assertion.m"
        }
#line 582 "assertion.m"
        break;
#line 582 "assertion.m"
    }
#line 582 "assertion.m"
    return hlds__assertion__succeeded;
#line 582 "assertion.m"
  }
#line 579 "assertion.m"
}

#line 571 "assertion.m"
static MR_Box MR_CALL 
hlds__assertion__equal_goal_exprs_4_p_0_2(
#line 571 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 571 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1)
#line 571 "assertion.m"
{
#line 571 "assertion.m"
  {
#line 571 "assertion.m"
    MR_Box hlds__assertion__wrapper_arg_2;
#line 571 "assertion.m"
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;
#line 571 "assertion.m"
    MR_Word hlds__assertion__conv1_HeadVar__2_2;

#line 571 "assertion.m"
    {
#line 571 "assertion.m"
      hlds__assertion__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__assertion__wrapper_arg_1));
    }
#line 571 "assertion.m"
    hlds__assertion__wrapper_arg_2 = ((MR_Box) (hlds__assertion__conv1_HeadVar__2_2));
#line 571 "assertion.m"
    return hlds__assertion__wrapper_arg_2;
#line 571 "assertion.m"
  }
#line 571 "assertion.m"
}

#line 570 "assertion.m"
static MR_Box MR_CALL 
hlds__assertion__equal_goal_exprs_4_p_0_1(
#line 570 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 570 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1)
#line 570 "assertion.m"
{
#line 570 "assertion.m"
  {
#line 570 "assertion.m"
    MR_Box hlds__assertion__wrapper_arg_2;
#line 570 "assertion.m"
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;
#line 570 "assertion.m"
    MR_Word hlds__assertion__conv0_HeadVar__2_2;

#line 570 "assertion.m"
    {
#line 570 "assertion.m"
      hlds__assertion__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__assertion__wrapper_arg_1));
    }
#line 570 "assertion.m"
    hlds__assertion__wrapper_arg_2 = ((MR_Box) (hlds__assertion__conv0_HeadVar__2_2));
#line 570 "assertion.m"
    return hlds__assertion__wrapper_arg_2;
#line 570 "assertion.m"
  }
#line 570 "assertion.m"
}

#line 514 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_goal_exprs_4_p_0(
#line 514 "assertion.m"
  MR_Word hlds__assertion__GoalExprA_5,
#line 514 "assertion.m"
  MR_Word hlds__assertion__GoalExprB_6,
#line 514 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_68,
#line 514 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_69)
#line 514 "assertion.m"
{
#line 519 "assertion.m"
  {
#line 519 "assertion.m"
    MR_bool hlds__assertion__succeeded;

#line 519 "assertion.m"
#line 519 "assertion.m"
    switch (MR_tag((MR_Word) hlds__assertion__GoalExprA_5)) {
#line 519 "assertion.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 519 "assertion.m"
      case (MR_Integer) 0:
#line 544 "assertion.m"
        {
#line 544 "assertion.m"
          MR_Word hlds__assertion__SubGoalA_43 = (MR_Word) MR_body(((MR_Word) hlds__assertion__GoalExprA_5), (MR_Integer) 0);
#line 544 "assertion.m"
          MR_Word hlds__assertion__SubGoalB_44;

#line 545 "assertion.m"
          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 0)));
#line 545 "assertion.m"
          if (hlds__assertion__succeeded)
#line 545 "assertion.m"
            {
#line 545 "assertion.m"
              hlds__assertion__SubGoalB_44 = (MR_Word) MR_body(((MR_Word) hlds__assertion__GoalExprB_6), (MR_Integer) 0);
#line 546 "assertion.m"
              {
#line 546 "assertion.m"
                hlds__assertion__succeeded = hlds__assertion__equal_goals_4_p_0(hlds__assertion__SubGoalA_43, hlds__assertion__SubGoalB_44, hlds__assertion__STATE_VARIABLE_Subst_0_68, hlds__assertion__STATE_VARIABLE_Subst_69);
              }
#line 545 "assertion.m"
            }
#line 544 "assertion.m"
        }
#line 519 "assertion.m"
        break;
#line 519 "assertion.m"
      case (MR_Integer) 1:
#line 535 "assertion.m"
        {
#line 535 "assertion.m"
          MR_Word hlds__assertion__VarA_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprA_5, (MR_Integer) 0)));
#line 535 "assertion.m"
          MR_Word hlds__assertion__RHSA_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprA_5, (MR_Integer) 1)));
#line 535 "assertion.m"
          MR_Word hlds__assertion__VarB_38;
#line 535 "assertion.m"
          MR_Word hlds__assertion__RHSB_39;
#line 535 "assertion.m"
          MR_Word hlds__assertion__STATE_VARIABLE_Subst_82_82;
#line 535 "assertion.m"
          MR_Word hlds__assertion__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprA_5, (MR_Integer) 2)));
#line 535 "assertion.m"
          MR_Word hlds__assertion__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprA_5, (MR_Integer) 3)));
#line 535 "assertion.m"
          MR_Word hlds__assertion__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprA_5, (MR_Integer) 4)));
#line 536 "assertion.m"
          MR_Word hlds__assertion__V_40_40;
#line 536 "assertion.m"
          MR_Word hlds__assertion__V_41_41;
#line 536 "assertion.m"
          MR_Word hlds__assertion__V_42_42;

#line 536 "assertion.m"
          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 1)));
#line 536 "assertion.m"
          if (hlds__assertion__succeeded)
#line 536 "assertion.m"
            {
#line 536 "assertion.m"
              hlds__assertion__VarB_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprB_6, (MR_Integer) 0)));
#line 536 "assertion.m"
              hlds__assertion__RHSB_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprB_6, (MR_Integer) 1)));
#line 536 "assertion.m"
              hlds__assertion__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprB_6, (MR_Integer) 2)));
#line 536 "assertion.m"
              hlds__assertion__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprB_6, (MR_Integer) 3)));
#line 536 "assertion.m"
              hlds__assertion__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprB_6, (MR_Integer) 4)));
#line 537 "assertion.m"
              {
#line 537 "assertion.m"
                hlds__assertion__succeeded = hlds__assertion__equal_var_4_p_0(hlds__assertion__VarA_33, hlds__assertion__VarB_38, hlds__assertion__STATE_VARIABLE_Subst_0_68, &hlds__assertion__STATE_VARIABLE_Subst_82_82);
              }
#line 535 "assertion.m"
              if (hlds__assertion__succeeded)
#line 538 "assertion.m"
                {
#line 538 "assertion.m"
                  hlds__assertion__succeeded = hlds__assertion__equal_unification_4_p_0(hlds__assertion__RHSA_34, hlds__assertion__RHSB_39, hlds__assertion__STATE_VARIABLE_Subst_82_82, hlds__assertion__STATE_VARIABLE_Subst_69);
                }
#line 536 "assertion.m"
            }
#line 535 "assertion.m"
        }
#line 519 "assertion.m"
        break;
#line 519 "assertion.m"
      case (MR_Integer) 2:
#line 523 "assertion.m"
        {
#line 523 "assertion.m"
          MR_Word hlds__assertion__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprA_5, (MR_Integer) 0)));
#line 523 "assertion.m"
          MR_Word hlds__assertion__ArgVarsA_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprA_5, (MR_Integer) 2)));
#line 523 "assertion.m"
          MR_Word hlds__assertion__ArgVarsB_18;
#line 523 "assertion.m"
          MR_Word hlds__assertion__V_104_104;
#line 523 "assertion.m"
          MR_Integer hlds__assertion__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprA_5, (MR_Integer) 1)));
#line 523 "assertion.m"
          MR_Word hlds__assertion__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprA_5, (MR_Integer) 3)));
#line 523 "assertion.m"
          MR_Word hlds__assertion__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprA_5, (MR_Integer) 4)));
#line 523 "assertion.m"
          MR_Word hlds__assertion__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprA_5, (MR_Integer) 5)));
#line 524 "assertion.m"
          MR_Integer hlds__assertion__V_17_17;
#line 524 "assertion.m"
          MR_Word hlds__assertion__V_19_19;
#line 524 "assertion.m"
          MR_Word hlds__assertion__V_20_20;
#line 524 "assertion.m"
          MR_Word hlds__assertion__V_21_21;

#line 524 "assertion.m"
          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 2)));
#line 524 "assertion.m"
          if (hlds__assertion__succeeded)
#line 524 "assertion.m"
            {
#line 524 "assertion.m"
              hlds__assertion__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprB_6, (MR_Integer) 0)));
#line 524 "assertion.m"
              hlds__assertion__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprB_6, (MR_Integer) 1)));
#line 524 "assertion.m"
              hlds__assertion__ArgVarsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprB_6, (MR_Integer) 2)));
#line 524 "assertion.m"
              hlds__assertion__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprB_6, (MR_Integer) 3)));
#line 524 "assertion.m"
              hlds__assertion__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprB_6, (MR_Integer) 4)));
#line 524 "assertion.m"
              hlds__assertion__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprB_6, (MR_Integer) 5)));
#line 524 "assertion.m"
              {
#line 524 "assertion.m"
                hlds__assertion__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__assertion__PredId_11, hlds__assertion__V_104_104);
              }
#line 523 "assertion.m"
              if (hlds__assertion__succeeded)
#line 525 "assertion.m"
                {
#line 525 "assertion.m"
                  hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__ArgVarsA_13, hlds__assertion__ArgVarsB_18, hlds__assertion__STATE_VARIABLE_Subst_0_68, hlds__assertion__STATE_VARIABLE_Subst_69);
                }
#line 524 "assertion.m"
            }
#line 523 "assertion.m"
        }
#line 519 "assertion.m"
        break;
#line 519 "assertion.m"
      case (MR_Integer) 3:
#line 519 "assertion.m"
#line 519 "assertion.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 0)))) {
#line 519 "assertion.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 519 "assertion.m"
          case (MR_Integer) 0:
#line 527 "assertion.m"
            {
#line 527 "assertion.m"
              MR_Word hlds__assertion__CallDetails_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 1)));
#line 527 "assertion.m"
              MR_Word hlds__assertion__ArgVarsA_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 2)));
#line 527 "assertion.m"
              MR_Word hlds__assertion__ArgVarsB_89;
#line 527 "assertion.m"
              MR_Word hlds__assertion__V_105_105;
#line 527 "assertion.m"
              MR_Word hlds__assertion__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 3)));
#line 527 "assertion.m"
              MR_Word hlds__assertion__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 4)));
#line 527 "assertion.m"
              MR_Word hlds__assertion__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 5)));
#line 528 "assertion.m"
              MR_Word hlds__assertion__V_26_26;
#line 528 "assertion.m"
              MR_Word hlds__assertion__V_27_27;
#line 528 "assertion.m"
              MR_Word hlds__assertion__V_28_28;

#line 528 "assertion.m"
              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 528 "assertion.m"
              if (hlds__assertion__succeeded)
#line 528 "assertion.m"
                {
#line 528 "assertion.m"
                  hlds__assertion__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 1)));
#line 528 "assertion.m"
                  hlds__assertion__ArgVarsB_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 2)));
#line 528 "assertion.m"
                  hlds__assertion__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 3)));
#line 528 "assertion.m"
                  hlds__assertion__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 4)));
#line 528 "assertion.m"
                  hlds__assertion__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 5)));
#line 528 "assertion.m"
                  {
#line 528 "assertion.m"
                    hlds__assertion__succeeded = hlds__hlds_goal____Unify____generic_call_0_0(hlds__assertion__CallDetails_22, hlds__assertion__V_105_105);
                  }
#line 527 "assertion.m"
                  if (hlds__assertion__succeeded)
#line 529 "assertion.m"
                    {
#line 529 "assertion.m"
                      hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__ArgVarsA_88, hlds__assertion__ArgVarsB_89, hlds__assertion__STATE_VARIABLE_Subst_0_68, hlds__assertion__STATE_VARIABLE_Subst_69);
                    }
#line 528 "assertion.m"
                }
#line 527 "assertion.m"
            }
#line 519 "assertion.m"
            break;
#line 519 "assertion.m"
          case (MR_Integer) 1:
#line 561 "assertion.m"
            {
#line 561 "assertion.m"
              MR_Word hlds__assertion__TypeCtorInfo_97_97;
#line 561 "assertion.m"
              MR_Word hlds__assertion__TypeInfo_98_98;
#line 561 "assertion.m"
              MR_Word hlds__assertion__Attributes_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 1)));
#line 561 "assertion.m"
              MR_Word hlds__assertion__ArgsA_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 4)));
#line 561 "assertion.m"
              MR_Word hlds__assertion__ExtraA_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 5)));
#line 561 "assertion.m"
              MR_Word hlds__assertion__MaybeTraceA_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 6)));
#line 561 "assertion.m"
              MR_Word hlds__assertion__ArgsB_62;
#line 561 "assertion.m"
              MR_Word hlds__assertion__ExtraB_63;
#line 561 "assertion.m"
              MR_Word hlds__assertion__MaybeTraceB_64;
#line 561 "assertion.m"
              MR_Word hlds__assertion__V_71_71;
#line 561 "assertion.m"
              MR_Word hlds__assertion__V_72_72;
#line 561 "assertion.m"
              MR_Word hlds__assertion__PredId_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 2)));
#line 561 "assertion.m"
              MR_Word hlds__assertion__VarsA_95;
#line 561 "assertion.m"
              MR_Word hlds__assertion__VarsB_96;
#line 561 "assertion.m"
              MR_Word hlds__assertion__V_108_108;
#line 561 "assertion.m"
              MR_Word hlds__assertion__V_109_109;
#line 560 "assertion.m"
              MR_Integer hlds__assertion__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 3)));
#line 560 "assertion.m"
              MR_Word hlds__assertion__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 7)));
#line 562 "assertion.m"
              MR_Integer hlds__assertion__V_61_61;
#line 562 "assertion.m"
              MR_Word hlds__assertion__V_65_65;

#line 562 "assertion.m"
              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 562 "assertion.m"
              if (hlds__assertion__succeeded)
#line 562 "assertion.m"
                {
#line 562 "assertion.m"
                  hlds__assertion__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 1)));
#line 562 "assertion.m"
                  hlds__assertion__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 2)));
#line 562 "assertion.m"
                  hlds__assertion__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 3)));
#line 562 "assertion.m"
                  hlds__assertion__ArgsB_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 4)));
#line 562 "assertion.m"
                  hlds__assertion__ExtraB_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 5)));
#line 562 "assertion.m"
                  hlds__assertion__MaybeTraceB_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 6)));
#line 562 "assertion.m"
                  hlds__assertion__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 7)));
#line 562 "assertion.m"
                  {
#line 562 "assertion.m"
                    hlds__assertion__succeeded = parse_tree__prog_data____Unify____pragma_foreign_proc_attributes_0_0(hlds__assertion__Attributes_55, hlds__assertion__V_108_108);
                  }
#line 561 "assertion.m"
                  if (hlds__assertion__succeeded)
#line 561 "assertion.m"
                    {
#line 562 "assertion.m"
                      {
#line 562 "assertion.m"
                        hlds__assertion__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__assertion__PredId_94, hlds__assertion__V_109_109);
                      }
#line 561 "assertion.m"
                      if (hlds__assertion__succeeded)
#line 561 "assertion.m"
                        {
#line 566 "assertion.m"
                          hlds__assertion__succeeded = (hlds__assertion__ExtraA_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 561 "assertion.m"
                          if (hlds__assertion__succeeded)
#line 561 "assertion.m"
                            {
#line 567 "assertion.m"
                              hlds__assertion__succeeded = (hlds__assertion__ExtraB_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 561 "assertion.m"
                              if (hlds__assertion__succeeded)
#line 561 "assertion.m"
                                {
#line 568 "assertion.m"
                                  hlds__assertion__succeeded = (hlds__assertion__MaybeTraceA_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 561 "assertion.m"
                                  if (hlds__assertion__succeeded)
#line 561 "assertion.m"
                                    {
#line 569 "assertion.m"
                                      hlds__assertion__succeeded = (hlds__assertion__MaybeTraceB_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 561 "assertion.m"
                                      if (hlds__assertion__succeeded)
#line 561 "assertion.m"
                                        {
#line 4700 "hlds.assertion.c"
                                          hlds__assertion__TypeCtorInfo_97_97 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 4702 "hlds.assertion.c"
                                          hlds__assertion__TypeInfo_98_98 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 570 "assertion.m"
                                          hlds__assertion__V_71_71 = (MR_Word) &hlds__assertion_scalar_common_2[7];
#line 570 "assertion.m"
                                          {
#line 570 "assertion.m"
                                            hlds__assertion__VarsA_95 = mercury__list__map_2_f_0(hlds__assertion__TypeCtorInfo_97_97, hlds__assertion__TypeInfo_98_98, hlds__assertion__V_71_71, hlds__assertion__ArgsA_57);
                                          }
#line 571 "assertion.m"
                                          hlds__assertion__V_72_72 = (MR_Word) &hlds__assertion_scalar_common_2[8];
#line 571 "assertion.m"
                                          {
#line 571 "assertion.m"
                                            hlds__assertion__VarsB_96 = mercury__list__map_2_f_0(hlds__assertion__TypeCtorInfo_97_97, hlds__assertion__TypeInfo_98_98, hlds__assertion__V_72_72, hlds__assertion__ArgsB_62);
                                          }
#line 572 "assertion.m"
                                          {
#line 572 "assertion.m"
                                            hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__VarsA_95, hlds__assertion__VarsB_96, hlds__assertion__STATE_VARIABLE_Subst_0_68, hlds__assertion__STATE_VARIABLE_Subst_69);
                                          }
#line 561 "assertion.m"
                                        }
#line 561 "assertion.m"
                                    }
#line 561 "assertion.m"
                                }
#line 561 "assertion.m"
                            }
#line 561 "assertion.m"
                        }
#line 561 "assertion.m"
                    }
#line 562 "assertion.m"
                }
#line 561 "assertion.m"
            }
#line 519 "assertion.m"
            break;
#line 519 "assertion.m"
          case (MR_Integer) 2:
#line 519 "assertion.m"
            {
#line 519 "assertion.m"
              MR_Word hlds__assertion__ConjType_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 1)));
#line 519 "assertion.m"
              MR_Word hlds__assertion__GoalsA_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 2)));
#line 519 "assertion.m"
              MR_Word hlds__assertion__GoalsB_10;
#line 519 "assertion.m"
              MR_Word hlds__assertion__V_103_103;

#line 520 "assertion.m"
              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 520 "assertion.m"
              if (hlds__assertion__succeeded)
#line 520 "assertion.m"
                {
#line 520 "assertion.m"
                  hlds__assertion__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 1)));
#line 520 "assertion.m"
                  hlds__assertion__GoalsB_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 2)));
#line 520 "assertion.m"
                  hlds__assertion__succeeded = (hlds__assertion__ConjType_8 == hlds__assertion__V_103_103);
#line 519 "assertion.m"
                  if (hlds__assertion__succeeded)
#line 521 "assertion.m"
                    {
#line 521 "assertion.m"
                      hlds__assertion__succeeded = hlds__assertion__equal_goals_list_4_p_0(hlds__assertion__GoalsA_9, hlds__assertion__GoalsB_10, hlds__assertion__STATE_VARIABLE_Subst_0_68, hlds__assertion__STATE_VARIABLE_Subst_69);
                    }
#line 520 "assertion.m"
                }
#line 519 "assertion.m"
            }
#line 519 "assertion.m"
            break;
#line 519 "assertion.m"
          case (MR_Integer) 3:
#line 540 "assertion.m"
            {
#line 540 "assertion.m"
              MR_Word hlds__assertion__GoalsA_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 1)));
#line 540 "assertion.m"
              MR_Word hlds__assertion__GoalsB_91;

#line 541 "assertion.m"
              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 541 "assertion.m"
              if (hlds__assertion__succeeded)
#line 541 "assertion.m"
                {
#line 541 "assertion.m"
                  hlds__assertion__GoalsB_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 1)));
#line 542 "assertion.m"
                  {
#line 542 "assertion.m"
                    hlds__assertion__succeeded = hlds__assertion__equal_goals_list_4_p_0(hlds__assertion__GoalsA_90, hlds__assertion__GoalsB_91, hlds__assertion__STATE_VARIABLE_Subst_0_68, hlds__assertion__STATE_VARIABLE_Subst_69);
                  }
#line 541 "assertion.m"
                }
#line 540 "assertion.m"
            }
#line 519 "assertion.m"
            break;
#line 519 "assertion.m"
          case (MR_Integer) 4:
#line 531 "assertion.m"
            {
#line 531 "assertion.m"
              MR_Word hlds__assertion__TypeInfo_114_114;
#line 531 "assertion.m"
              MR_Word hlds__assertion__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 1)));
#line 531 "assertion.m"
              MR_Word hlds__assertion__CanFail_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 2)));
#line 531 "assertion.m"
              MR_Word hlds__assertion__CasesA_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 3)));
#line 531 "assertion.m"
              MR_Word hlds__assertion__CasesB_32;
#line 531 "assertion.m"
              MR_Word hlds__assertion__V_106_106;
#line 531 "assertion.m"
              MR_Word hlds__assertion__V_107_107;

#line 532 "assertion.m"
              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 532 "assertion.m"
              if (hlds__assertion__succeeded)
#line 532 "assertion.m"
                {
#line 532 "assertion.m"
                  hlds__assertion__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 1)));
#line 532 "assertion.m"
                  hlds__assertion__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 2)));
#line 532 "assertion.m"
                  hlds__assertion__CasesB_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 3)));
#line 4838 "hlds.assertion.c"
                  hlds__assertion__TypeInfo_114_114 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 532 "assertion.m"
                  {
#line 532 "assertion.m"
                    hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_114_114, ((MR_Box) (hlds__assertion__Var_29)), ((MR_Box) (hlds__assertion__V_106_106)));
                  }
#line 531 "assertion.m"
                  if (hlds__assertion__succeeded)
#line 531 "assertion.m"
                    {
#line 532 "assertion.m"
                      hlds__assertion__succeeded = (hlds__assertion__CanFail_30 == hlds__assertion__V_107_107);
#line 531 "assertion.m"
                      if (hlds__assertion__succeeded)
#line 533 "assertion.m"
                        {
#line 533 "assertion.m"
                          hlds__assertion__succeeded = hlds__assertion__equal_goals_cases_4_p_0(hlds__assertion__CasesA_31, hlds__assertion__CasesB_32, hlds__assertion__STATE_VARIABLE_Subst_0_68, hlds__assertion__STATE_VARIABLE_Subst_69);
                        }
#line 531 "assertion.m"
                    }
#line 532 "assertion.m"
                }
#line 531 "assertion.m"
            }
#line 519 "assertion.m"
            break;
#line 519 "assertion.m"
          case (MR_Integer) 5:
#line 548 "assertion.m"
            {
#line 548 "assertion.m"
              MR_Word hlds__assertion__ReasonA_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 1)));
#line 548 "assertion.m"
              MR_Word hlds__assertion__ReasonB_46;
#line 548 "assertion.m"
              MR_Word hlds__assertion__STATE_VARIABLE_Subst_78_78;
#line 548 "assertion.m"
              MR_Word hlds__assertion__SubGoalA_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 2)));
#line 548 "assertion.m"
              MR_Word hlds__assertion__SubGoalB_93;

#line 549 "assertion.m"
              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 549 "assertion.m"
              if (hlds__assertion__succeeded)
#line 549 "assertion.m"
                {
#line 549 "assertion.m"
                  hlds__assertion__ReasonB_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 1)));
#line 549 "assertion.m"
                  hlds__assertion__SubGoalB_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 2)));
#line 550 "assertion.m"
                  {
#line 550 "assertion.m"
                    hlds__assertion__succeeded = hlds__assertion__equal_reason_4_p_0(hlds__assertion__ReasonA_45, hlds__assertion__ReasonB_46, hlds__assertion__STATE_VARIABLE_Subst_0_68, &hlds__assertion__STATE_VARIABLE_Subst_78_78);
                  }
#line 548 "assertion.m"
                  if (hlds__assertion__succeeded)
#line 551 "assertion.m"
                    {
#line 551 "assertion.m"
                      hlds__assertion__succeeded = hlds__assertion__equal_goals_4_p_0(hlds__assertion__SubGoalA_92, hlds__assertion__SubGoalB_93, hlds__assertion__STATE_VARIABLE_Subst_78_78, hlds__assertion__STATE_VARIABLE_Subst_69);
                    }
#line 549 "assertion.m"
                }
#line 548 "assertion.m"
            }
#line 519 "assertion.m"
            break;
#line 519 "assertion.m"
          case (MR_Integer) 6:
#line 553 "assertion.m"
            {
#line 553 "assertion.m"
              MR_Word hlds__assertion__VarsA_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 1)));
#line 553 "assertion.m"
              MR_Word hlds__assertion__CondA_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 2)));
#line 553 "assertion.m"
              MR_Word hlds__assertion__ThenA_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 3)));
#line 553 "assertion.m"
              MR_Word hlds__assertion__ElseA_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 4)));
#line 553 "assertion.m"
              MR_Word hlds__assertion__VarsB_51;
#line 553 "assertion.m"
              MR_Word hlds__assertion__CondB_52;
#line 553 "assertion.m"
              MR_Word hlds__assertion__ThenB_53;
#line 553 "assertion.m"
              MR_Word hlds__assertion__ElseB_54;
#line 553 "assertion.m"
              MR_Word hlds__assertion__STATE_VARIABLE_Subst_74_74;
#line 553 "assertion.m"
              MR_Word hlds__assertion__STATE_VARIABLE_Subst_75_75;
#line 553 "assertion.m"
              MR_Word hlds__assertion__STATE_VARIABLE_Subst_76_76;

#line 554 "assertion.m"
              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 554 "assertion.m"
              if (hlds__assertion__succeeded)
#line 554 "assertion.m"
                {
#line 554 "assertion.m"
                  hlds__assertion__VarsB_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 1)));
#line 554 "assertion.m"
                  hlds__assertion__CondB_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 2)));
#line 554 "assertion.m"
                  hlds__assertion__ThenB_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 3)));
#line 554 "assertion.m"
                  hlds__assertion__ElseB_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 4)));
#line 555 "assertion.m"
                  {
#line 555 "assertion.m"
                    hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__VarsA_47, hlds__assertion__VarsB_51, hlds__assertion__STATE_VARIABLE_Subst_0_68, &hlds__assertion__STATE_VARIABLE_Subst_74_74);
                  }
#line 553 "assertion.m"
                  if (hlds__assertion__succeeded)
#line 553 "assertion.m"
                    {
#line 556 "assertion.m"
                      {
#line 556 "assertion.m"
                        hlds__assertion__succeeded = hlds__assertion__equal_goals_4_p_0(hlds__assertion__CondA_48, hlds__assertion__CondB_52, hlds__assertion__STATE_VARIABLE_Subst_74_74, &hlds__assertion__STATE_VARIABLE_Subst_75_75);
                      }
#line 553 "assertion.m"
                      if (hlds__assertion__succeeded)
#line 553 "assertion.m"
                        {
#line 557 "assertion.m"
                          {
#line 557 "assertion.m"
                            hlds__assertion__succeeded = hlds__assertion__equal_goals_4_p_0(hlds__assertion__ThenA_49, hlds__assertion__ThenB_53, hlds__assertion__STATE_VARIABLE_Subst_75_75, &hlds__assertion__STATE_VARIABLE_Subst_76_76);
                          }
#line 553 "assertion.m"
                          if (hlds__assertion__succeeded)
#line 558 "assertion.m"
                            {
#line 558 "assertion.m"
                              hlds__assertion__succeeded = hlds__assertion__equal_goals_4_p_0(hlds__assertion__ElseA_50, hlds__assertion__ElseB_54, hlds__assertion__STATE_VARIABLE_Subst_76_76, hlds__assertion__STATE_VARIABLE_Subst_69);
                            }
#line 553 "assertion.m"
                        }
#line 553 "assertion.m"
                    }
#line 554 "assertion.m"
                }
#line 553 "assertion.m"
            }
#line 519 "assertion.m"
            break;
#line 519 "assertion.m"
          case (MR_Integer) 7:
#line 574 "assertion.m"
            {
#line 574 "assertion.m"
              MR_Word hlds__assertion__ShortHandA_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 1)));
#line 574 "assertion.m"
              MR_Word hlds__assertion__ShortHandB_67;

#line 575 "assertion.m"
              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 575 "assertion.m"
              if (hlds__assertion__succeeded)
#line 575 "assertion.m"
                {
#line 575 "assertion.m"
                  hlds__assertion__ShortHandB_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 1)));
#line 576 "assertion.m"
                  {
#line 576 "assertion.m"
                    hlds__assertion__succeeded = hlds__assertion__equal_goals_shorthand_4_p_0(hlds__assertion__ShortHandA_66, hlds__assertion__ShortHandB_67, hlds__assertion__STATE_VARIABLE_Subst_0_68, hlds__assertion__STATE_VARIABLE_Subst_69);
                  }
#line 575 "assertion.m"
                }
#line 574 "assertion.m"
            }
#line 519 "assertion.m"
            break;
#line 519 "assertion.m"
        }
#line 519 "assertion.m"
        break;
#line 519 "assertion.m"
    }
#line 519 "assertion.m"
    return hlds__assertion__succeeded;
#line 519 "assertion.m"
  }
#line 514 "assertion.m"
}

#line 506 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_goals_4_p_0(
#line 506 "assertion.m"
  MR_Word hlds__assertion__GoalA_5,
#line 506 "assertion.m"
  MR_Word hlds__assertion__GoalB_6,
#line 506 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_12,
#line 506 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_13)
#line 506 "assertion.m"
{
#line 509 "assertion.m"
  {
#line 509 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 509 "assertion.m"
    MR_Word hlds__assertion__GoalExprA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalA_5, (MR_Integer) 0)));
#line 509 "assertion.m"
    MR_Word hlds__assertion__GoalExprB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalB_6, (MR_Integer) 0)));
#line 510 "assertion.m"
    MR_Word hlds__assertion___GoalInfoA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalA_5, (MR_Integer) 1)));
#line 511 "assertion.m"
    MR_Word hlds__assertion___GoalInfoB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalB_6, (MR_Integer) 1)));

#line 512 "assertion.m"
    {
#line 512 "assertion.m"
      hlds__assertion__succeeded = hlds__assertion__equal_goal_exprs_4_p_0(hlds__assertion__GoalExprA_8, hlds__assertion__GoalExprB_10, hlds__assertion__STATE_VARIABLE_Subst_0_12, hlds__assertion__STATE_VARIABLE_Subst_13);
    }
#line 509 "assertion.m"
    return hlds__assertion__succeeded;
#line 509 "assertion.m"
  }
#line 506 "assertion.m"
}

#line 485 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__goal_is_equivalence_3_p_0(
#line 485 "assertion.m"
  MR_Word hlds__assertion__Goal_4,
#line 485 "assertion.m"
  MR_Word * hlds__assertion__P_5,
#line 485 "assertion.m"
  MR_Word * hlds__assertion__Q_6)
#line 485 "assertion.m"
{
#line 488 "assertion.m"
  {
#line 488 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 488 "assertion.m"
    MR_Word hlds__assertion__TypeInfo_22_22;
#line 488 "assertion.m"
    MR_Word hlds__assertion__TypeCtorInfo_24_43;
#line 488 "assertion.m"
    MR_Word hlds__assertion__TypeCtorInfo_24_64;
#line 488 "assertion.m"
    MR_Word hlds__assertion__A_7;
#line 488 "assertion.m"
    MR_Word hlds__assertion__B_8;
#line 488 "assertion.m"
    MR_Word hlds__assertion__Subst_10;
#line 488 "assertion.m"
    MR_Word hlds__assertion__QB_13;
#line 488 "assertion.m"
    MR_Word hlds__assertion__PB_14;
#line 488 "assertion.m"
    MR_Word hlds__assertion__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_4, (MR_Integer) 0)));
#line 488 "assertion.m"
    MR_Word hlds__assertion__V_18_18;
#line 488 "assertion.m"
    MR_Word hlds__assertion__V_19_19;
#line 488 "assertion.m"
    MR_Word hlds__assertion__V_20_20;
#line 488 "assertion.m"
    MR_Word hlds__assertion__V_21_21;
#line 488 "assertion.m"
    MR_Word hlds__assertion__GoalList_26;
#line 488 "assertion.m"
    MR_Word hlds__assertion__GI_28;
#line 488 "assertion.m"
    MR_Word hlds__assertion__NotQ_29;
#line 488 "assertion.m"
    MR_Word hlds__assertion__Ps_30;
#line 488 "assertion.m"
    MR_Word hlds__assertion__V_33_33;
#line 488 "assertion.m"
    MR_Word hlds__assertion__V_34_34;
#line 488 "assertion.m"
    MR_Word hlds__assertion__V_35_35;
#line 488 "assertion.m"
    MR_Word hlds__assertion__V_36_36;
#line 488 "assertion.m"
    MR_Word hlds__assertion__V_37_37;
#line 488 "assertion.m"
    MR_Word hlds__assertion__V_42_42;
#line 488 "assertion.m"
    MR_Word hlds__assertion__GoalList_47;
#line 488 "assertion.m"
    MR_Word hlds__assertion__GI_49;
#line 488 "assertion.m"
    MR_Word hlds__assertion__NotQ_50;
#line 488 "assertion.m"
    MR_Word hlds__assertion__Ps_51;
#line 488 "assertion.m"
    MR_Word hlds__assertion__V_54_54;
#line 488 "assertion.m"
    MR_Word hlds__assertion__V_55_55;
#line 488 "assertion.m"
    MR_Word hlds__assertion__V_56_56;
#line 488 "assertion.m"
    MR_Word hlds__assertion__V_57_57;
#line 488 "assertion.m"
    MR_Word hlds__assertion__V_58_58;
#line 488 "assertion.m"
    MR_Word hlds__assertion__V_63_63;
#line 488 "assertion.m"
    MR_Word hlds__assertion__GoalExprA_70;
#line 488 "assertion.m"
    MR_Word hlds__assertion__GoalExprB_72;
#line 488 "assertion.m"
    MR_Word hlds__assertion__GoalExprA_80;
#line 488 "assertion.m"
    MR_Word hlds__assertion__GoalExprB_82;
#line 490 "assertion.m"
    MR_Word hlds__assertion___GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_4, (MR_Integer) 1)));
#line 476 "assertion.m"
    MR_Word hlds__assertion__V_27_27;
#line 478 "assertion.m"
    MR_Word hlds__assertion__P0_31;
#line 478 "assertion.m"
    MR_Word hlds__assertion__V_38_38;
#line 483 "assertion.m"
    MR_Word hlds__assertion__V_32_32;
#line 476 "assertion.m"
    MR_Word hlds__assertion__V_48_48;
#line 478 "assertion.m"
    MR_Word hlds__assertion__P0_52;
#line 478 "assertion.m"
    MR_Word hlds__assertion__V_59_59;
#line 483 "assertion.m"
    MR_Word hlds__assertion__V_53_53;
#line 510 "assertion.m"
    MR_Word hlds__assertion___GoalInfoA_71;
#line 511 "assertion.m"
    MR_Word hlds__assertion___GoalInfoB_73;
#line 512 "assertion.m"
    MR_Word hlds__assertion__V_15_15;
#line 510 "assertion.m"
    MR_Word hlds__assertion___GoalInfoA_81;
#line 511 "assertion.m"
    MR_Word hlds__assertion___GoalInfoB_83;
#line 512 "assertion.m"
    MR_Word hlds__assertion__V_16_16;

#line 490 "assertion.m"
    hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_17_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_17_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 490 "assertion.m"
    if (hlds__assertion__succeeded)
#line 490 "assertion.m"
      {
#line 490 "assertion.m"
        hlds__assertion__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_17_17, (MR_Integer) 1)));
#line 490 "assertion.m"
        hlds__assertion__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_17_17, (MR_Integer) 2)));
#line 490 "assertion.m"
        hlds__assertion__succeeded = (hlds__assertion__V_18_18 == (MR_Integer) 0);
#line 488 "assertion.m"
        if (hlds__assertion__succeeded)
#line 488 "assertion.m"
          {
#line 490 "assertion.m"
            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 490 "assertion.m"
            if (hlds__assertion__succeeded)
#line 490 "assertion.m"
              {
#line 490 "assertion.m"
                hlds__assertion__A_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_19_19, (MR_Integer) 0)));
#line 490 "assertion.m"
                hlds__assertion__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_19_19, (MR_Integer) 1)));
#line 490 "assertion.m"
                hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 490 "assertion.m"
                if (hlds__assertion__succeeded)
#line 490 "assertion.m"
                  {
#line 490 "assertion.m"
                    hlds__assertion__B_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_20_20, (MR_Integer) 0)));
#line 490 "assertion.m"
                    hlds__assertion__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_20_20, (MR_Integer) 1)));
#line 490 "assertion.m"
                    hlds__assertion__succeeded = (hlds__assertion__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 488 "assertion.m"
                    if (hlds__assertion__succeeded)
#line 488 "assertion.m"
                      {
#line 5231 "hlds.assertion.c"
                        hlds__assertion__TypeInfo_22_22 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 491 "assertion.m"
                        {
#line 491 "assertion.m"
                          mercury__map__init_1_p_0(hlds__assertion__TypeInfo_22_22, hlds__assertion__TypeInfo_22_22, &hlds__assertion__Subst_10);
                        }
#line 476 "assertion.m"
                        hlds__assertion__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__A_7, (MR_Integer) 0)));
#line 476 "assertion.m"
                        hlds__assertion__GI_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__A_7, (MR_Integer) 1)));
#line 476 "assertion.m"
                        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_33_33)) == (MR_mktag((MR_Integer) 0)));
#line 476 "assertion.m"
                        if (hlds__assertion__succeeded)
#line 476 "assertion.m"
                          {
#line 476 "assertion.m"
                            hlds__assertion__V_34_34 = (MR_Word) MR_body(((MR_Word) hlds__assertion__V_33_33), (MR_Integer) 0);
#line 476 "assertion.m"
                            hlds__assertion__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_34_34, (MR_Integer) 0)));
#line 476 "assertion.m"
                            hlds__assertion__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_34_34, (MR_Integer) 1)));
#line 476 "assertion.m"
                            hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_35_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_35_35, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 476 "assertion.m"
                            if (hlds__assertion__succeeded)
#line 476 "assertion.m"
                              {
#line 476 "assertion.m"
                                hlds__assertion__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_35_35, (MR_Integer) 1)));
#line 476 "assertion.m"
                                hlds__assertion__GoalList_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_35_35, (MR_Integer) 2)));
#line 476 "assertion.m"
                                hlds__assertion__succeeded = (hlds__assertion__V_36_36 == (MR_Integer) 0);
#line 488 "assertion.m"
                                if (hlds__assertion__succeeded)
#line 488 "assertion.m"
                                  {
#line 5270 "hlds.assertion.c"
                                    hlds__assertion__TypeCtorInfo_24_43 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 477 "assertion.m"
                                    {
#line 477 "assertion.m"
                                      hlds__assertion__V_37_37 = mercury__list__reverse_1_f_0(hlds__assertion__TypeCtorInfo_24_43, hlds__assertion__GoalList_26);
                                    }
#line 477 "assertion.m"
                                    hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_37_37)) == (MR_mktag((MR_Integer) 1)));
#line 477 "assertion.m"
                                    if (hlds__assertion__succeeded)
#line 477 "assertion.m"
                                      {
#line 477 "assertion.m"
                                        hlds__assertion__NotQ_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_37_37, (MR_Integer) 0)));
#line 477 "assertion.m"
                                        hlds__assertion__Ps_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_37_37, (MR_Integer) 1)));
#line 478 "assertion.m"
                                        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Ps_30)) == (MR_mktag((MR_Integer) 1)));
#line 478 "assertion.m"
                                        if (hlds__assertion__succeeded)
#line 478 "assertion.m"
                                          {
#line 478 "assertion.m"
                                            hlds__assertion__P0_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Ps_30, (MR_Integer) 0)));
#line 478 "assertion.m"
                                            hlds__assertion__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Ps_30, (MR_Integer) 1)));
#line 478 "assertion.m"
                                            hlds__assertion__succeeded = (hlds__assertion__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 478 "assertion.m"
                                          }
#line 478 "assertion.m"
                                        if (hlds__assertion__succeeded)
#line 479 "assertion.m"
                                          *hlds__assertion__P_5 = hlds__assertion__P0_31;
#line 478 "assertion.m"
                                        else
#line 481 "assertion.m"
                                          {
#line 481 "assertion.m"
                                            MR_Word hlds__assertion__V_39_39;
#line 481 "assertion.m"
                                            MR_Word hlds__assertion__V_41_41;

#line 481 "assertion.m"
                                            {
#line 481 "assertion.m"
                                              hlds__assertion__V_41_41 = mercury__list__reverse_1_f_0(hlds__assertion__TypeCtorInfo_24_43, hlds__assertion__Ps_30);
                                            }
#line 481 "assertion.m"
                                            {
#line 481 "assertion.m"
                                              hlds__assertion__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 481 "assertion.m"
                                              MR_hl_field(MR_mktag(3), hlds__assertion__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 481 "assertion.m"
                                              MR_hl_field(MR_mktag(3), hlds__assertion__V_39_39, 1) = ((MR_Box) ((MR_Integer) 0));
#line 481 "assertion.m"
                                              MR_hl_field(MR_mktag(3), hlds__assertion__V_39_39, 2) = ((MR_Box) (hlds__assertion__V_41_41));
#line 481 "assertion.m"
                                            }
#line 481 "assertion.m"
                                            {
#line 481 "assertion.m"
                                              MR_Word base;
#line 481 "assertion.m"
                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 481 "assertion.m"
                                              *hlds__assertion__P_5 = base;
#line 481 "assertion.m"
                                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__assertion__V_39_39));
#line 481 "assertion.m"
                                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__GI_28));
#line 481 "assertion.m"
                                            }
#line 481 "assertion.m"
                                          }
#line 483 "assertion.m"
                                        hlds__assertion__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__NotQ_29, (MR_Integer) 0)));
#line 483 "assertion.m"
                                        hlds__assertion__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__NotQ_29, (MR_Integer) 1)));
#line 483 "assertion.m"
                                        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_42_42)) == (MR_mktag((MR_Integer) 0)));
#line 483 "assertion.m"
                                        if (hlds__assertion__succeeded)
#line 483 "assertion.m"
                                          {
#line 483 "assertion.m"
                                            *hlds__assertion__Q_6 = (MR_Word) MR_body(((MR_Word) hlds__assertion__V_42_42), (MR_Integer) 0);
#line 476 "assertion.m"
                                            hlds__assertion__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__B_8, (MR_Integer) 0)));
#line 476 "assertion.m"
                                            hlds__assertion__GI_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__B_8, (MR_Integer) 1)));
#line 476 "assertion.m"
                                            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_54_54)) == (MR_mktag((MR_Integer) 0)));
#line 476 "assertion.m"
                                            if (hlds__assertion__succeeded)
#line 476 "assertion.m"
                                              {
#line 476 "assertion.m"
                                                hlds__assertion__V_55_55 = (MR_Word) MR_body(((MR_Word) hlds__assertion__V_54_54), (MR_Integer) 0);
#line 476 "assertion.m"
                                                hlds__assertion__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_55_55, (MR_Integer) 0)));
#line 476 "assertion.m"
                                                hlds__assertion__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_55_55, (MR_Integer) 1)));
#line 476 "assertion.m"
                                                hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_56_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_56_56, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 476 "assertion.m"
                                                if (hlds__assertion__succeeded)
#line 476 "assertion.m"
                                                  {
#line 476 "assertion.m"
                                                    hlds__assertion__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_56_56, (MR_Integer) 1)));
#line 476 "assertion.m"
                                                    hlds__assertion__GoalList_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_56_56, (MR_Integer) 2)));
#line 476 "assertion.m"
                                                    hlds__assertion__succeeded = (hlds__assertion__V_57_57 == (MR_Integer) 0);
#line 488 "assertion.m"
                                                    if (hlds__assertion__succeeded)
#line 488 "assertion.m"
                                                      {
#line 5391 "hlds.assertion.c"
                                                        hlds__assertion__TypeCtorInfo_24_64 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 477 "assertion.m"
                                                        {
#line 477 "assertion.m"
                                                          hlds__assertion__V_58_58 = mercury__list__reverse_1_f_0(hlds__assertion__TypeCtorInfo_24_64, hlds__assertion__GoalList_47);
                                                        }
#line 477 "assertion.m"
                                                        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_58_58)) == (MR_mktag((MR_Integer) 1)));
#line 477 "assertion.m"
                                                        if (hlds__assertion__succeeded)
#line 477 "assertion.m"
                                                          {
#line 477 "assertion.m"
                                                            hlds__assertion__NotQ_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_58_58, (MR_Integer) 0)));
#line 477 "assertion.m"
                                                            hlds__assertion__Ps_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_58_58, (MR_Integer) 1)));
#line 478 "assertion.m"
                                                            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Ps_51)) == (MR_mktag((MR_Integer) 1)));
#line 478 "assertion.m"
                                                            if (hlds__assertion__succeeded)
#line 478 "assertion.m"
                                                              {
#line 478 "assertion.m"
                                                                hlds__assertion__P0_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Ps_51, (MR_Integer) 0)));
#line 478 "assertion.m"
                                                                hlds__assertion__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Ps_51, (MR_Integer) 1)));
#line 478 "assertion.m"
                                                                hlds__assertion__succeeded = (hlds__assertion__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 478 "assertion.m"
                                                              }
#line 478 "assertion.m"
                                                            if (hlds__assertion__succeeded)
#line 479 "assertion.m"
                                                              hlds__assertion__QB_13 = hlds__assertion__P0_52;
#line 478 "assertion.m"
                                                            else
#line 481 "assertion.m"
                                                              {
#line 481 "assertion.m"
                                                                MR_Word hlds__assertion__V_60_60;
#line 481 "assertion.m"
                                                                MR_Word hlds__assertion__V_62_62;

#line 481 "assertion.m"
                                                                {
#line 481 "assertion.m"
                                                                  hlds__assertion__V_62_62 = mercury__list__reverse_1_f_0(hlds__assertion__TypeCtorInfo_24_64, hlds__assertion__Ps_51);
                                                                }
#line 481 "assertion.m"
                                                                {
#line 481 "assertion.m"
                                                                  hlds__assertion__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 481 "assertion.m"
                                                                  MR_hl_field(MR_mktag(3), hlds__assertion__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 481 "assertion.m"
                                                                  MR_hl_field(MR_mktag(3), hlds__assertion__V_60_60, 1) = ((MR_Box) ((MR_Integer) 0));
#line 481 "assertion.m"
                                                                  MR_hl_field(MR_mktag(3), hlds__assertion__V_60_60, 2) = ((MR_Box) (hlds__assertion__V_62_62));
#line 481 "assertion.m"
                                                                }
#line 481 "assertion.m"
                                                                {
#line 481 "assertion.m"
                                                                  hlds__assertion__QB_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 481 "assertion.m"
                                                                  MR_hl_field(MR_mktag(0), hlds__assertion__QB_13, 0) = ((MR_Box) (hlds__assertion__V_60_60));
#line 481 "assertion.m"
                                                                  MR_hl_field(MR_mktag(0), hlds__assertion__QB_13, 1) = ((MR_Box) (hlds__assertion__GI_49));
#line 481 "assertion.m"
                                                                }
#line 481 "assertion.m"
                                                              }
#line 483 "assertion.m"
                                                            hlds__assertion__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__NotQ_50, (MR_Integer) 0)));
#line 483 "assertion.m"
                                                            hlds__assertion__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__NotQ_50, (MR_Integer) 1)));
#line 483 "assertion.m"
                                                            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_63_63)) == (MR_mktag((MR_Integer) 0)));
#line 483 "assertion.m"
                                                            if (hlds__assertion__succeeded)
#line 483 "assertion.m"
                                                              {
#line 483 "assertion.m"
                                                                hlds__assertion__PB_14 = (MR_Word) MR_body(((MR_Word) hlds__assertion__V_63_63), (MR_Integer) 0);
#line 510 "assertion.m"
                                                                hlds__assertion__GoalExprA_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), *hlds__assertion__P_5, (MR_Integer) 0)));
#line 510 "assertion.m"
                                                                hlds__assertion___GoalInfoA_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), *hlds__assertion__P_5, (MR_Integer) 1)));
#line 511 "assertion.m"
                                                                hlds__assertion__GoalExprB_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__PB_14, (MR_Integer) 0)));
#line 511 "assertion.m"
                                                                hlds__assertion___GoalInfoB_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__PB_14, (MR_Integer) 1)));
#line 512 "assertion.m"
                                                                {
#line 512 "assertion.m"
                                                                  hlds__assertion__succeeded = hlds__assertion__equal_goal_exprs_4_p_0(hlds__assertion__GoalExprA_70, hlds__assertion__GoalExprB_72, hlds__assertion__Subst_10, &hlds__assertion__V_15_15);
                                                                }
#line 488 "assertion.m"
                                                                if (hlds__assertion__succeeded)
#line 488 "assertion.m"
                                                                  {
#line 510 "assertion.m"
                                                                    hlds__assertion__GoalExprA_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), *hlds__assertion__Q_6, (MR_Integer) 0)));
#line 510 "assertion.m"
                                                                    hlds__assertion___GoalInfoA_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), *hlds__assertion__Q_6, (MR_Integer) 1)));
#line 511 "assertion.m"
                                                                    hlds__assertion__GoalExprB_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__QB_13, (MR_Integer) 0)));
#line 511 "assertion.m"
                                                                    hlds__assertion___GoalInfoB_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__QB_13, (MR_Integer) 1)));
#line 512 "assertion.m"
                                                                    {
#line 512 "assertion.m"
                                                                      hlds__assertion__succeeded = hlds__assertion__equal_goal_exprs_4_p_0(hlds__assertion__GoalExprA_80, hlds__assertion__GoalExprB_82, hlds__assertion__Subst_10, &hlds__assertion__V_16_16);
                                                                    }
#line 488 "assertion.m"
                                                                  }
#line 483 "assertion.m"
                                                              }
#line 477 "assertion.m"
                                                          }
#line 488 "assertion.m"
                                                      }
#line 476 "assertion.m"
                                                  }
#line 476 "assertion.m"
                                              }
#line 483 "assertion.m"
                                          }
#line 477 "assertion.m"
                                      }
#line 488 "assertion.m"
                                  }
#line 476 "assertion.m"
                              }
#line 476 "assertion.m"
                          }
#line 488 "assertion.m"
                      }
#line 490 "assertion.m"
                  }
#line 490 "assertion.m"
              }
#line 488 "assertion.m"
          }
#line 490 "assertion.m"
      }
#line 488 "assertion.m"
    return hlds__assertion__succeeded;
#line 488 "assertion.m"
  }
#line 485 "assertion.m"
}

#line 414 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__predicate_call_2_p_0_5(
#line 414 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 414 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1)
#line 414 "assertion.m"
{
#line 414 "assertion.m"
  {
#line 414 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 414 "assertion.m"
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

#line 414 "assertion.m"
    {
#line 414 "assertion.m"
      hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__predicate_call__415__1_1_p_0(((MR_Word) hlds__assertion__wrapper_arg_1));
    }
#line 414 "assertion.m"
    return hlds__assertion__succeeded;
#line 414 "assertion.m"
  }
#line 414 "assertion.m"
}

#line 411 "assertion.m"
static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_1(
#line 411 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 411 "assertion.m"
{
#line 411 "assertion.m"
  {
#line 411 "assertion.m"
    struct hlds__assertion__predicate_call_2_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__predicate_call_2_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 411 "assertion.m"
    MR_builtin_longjmp((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__commit_0, 1);
#line 411 "assertion.m"
  }
#line 411 "assertion.m"
}

#line 411 "assertion.m"
static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_3(
#line 411 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 411 "assertion.m"
{
#line 411 "assertion.m"
  {
#line 411 "assertion.m"
    struct hlds__assertion__predicate_call_2_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__predicate_call_2_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 411 "assertion.m"
    (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Call_7 = ((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__conv0_Call_7);
#line 411 "assertion.m"
    {
#line 411 "assertion.m"
      hlds__assertion__predicate_call_2_p_0_2(hlds__assertion__env_ptr);
    }
#line 411 "assertion.m"
  }
#line 411 "assertion.m"
}

#line 411 "assertion.m"
static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_4(
#line 411 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 411 "assertion.m"
{
#line 411 "assertion.m"
  {
#line 411 "assertion.m"
    struct hlds__assertion__predicate_call_2_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__predicate_call_2_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 414 "assertion.m"
    (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__P_15 = (MR_Word) &hlds__assertion_scalar_common_2[6];
#line 420 "assertion.m"
    (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_37_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 420 "assertion.m"
    {
#line 420 "assertion.m"
      mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__TypeCtorInfo_40_40, (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__P_15, (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Unifications_14, &(hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_42_42);
    }
#line 5637 "hlds.assertion.c"
    (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__TypeInfo_45_45 = (MR_Word) &hlds__assertion_scalar_common_1[4];
#line 420 "assertion.m"
    {
#line 420 "assertion.m"
      (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__TypeInfo_45_45, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_37_37)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_42_42)));
    }
#line 420 "assertion.m"
    if ((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded)
#line 420 "assertion.m"
      {
#line 420 "assertion.m"
        hlds__assertion__predicate_call_2_p_0_1(hlds__assertion__env_ptr);
      }
#line 411 "assertion.m"
  }
#line 411 "assertion.m"
}

#line 411 "assertion.m"
static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_2(
#line 411 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 411 "assertion.m"
{
#line 411 "assertion.m"
  {
#line 411 "assertion.m"
    struct hlds__assertion__predicate_call_2_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__predicate_call_2_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 411 "assertion.m"
    {
#line 412 "assertion.m"
      MR_Word hlds__assertion__V_13_13;
#line 412 "assertion.m"
      MR_Integer hlds__assertion__V_8_8;
#line 412 "assertion.m"
      MR_Word hlds__assertion__V_9_9;
#line 412 "assertion.m"
      MR_Word hlds__assertion__V_10_10;
#line 412 "assertion.m"
      MR_Word hlds__assertion__V_11_11;
#line 412 "assertion.m"
      MR_Word hlds__assertion__V_12_12;

#line 412 "assertion.m"
      (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Call_7, (MR_Integer) 0)));
#line 412 "assertion.m"
      hlds__assertion__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Call_7, (MR_Integer) 1)));
#line 412 "assertion.m"
      (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_34_34)) == (MR_mktag((MR_Integer) 2)));
#line 412 "assertion.m"
      if ((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded)
#line 412 "assertion.m"
        {
#line 412 "assertion.m"
          {
#line 412 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_34_34, (MR_Integer) 0)));
#line 412 "assertion.m"
            hlds__assertion__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_34_34, (MR_Integer) 1)));
#line 412 "assertion.m"
            hlds__assertion__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_34_34, (MR_Integer) 2)));
#line 412 "assertion.m"
            hlds__assertion__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_34_34, (MR_Integer) 3)));
#line 412 "assertion.m"
            hlds__assertion__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_34_34, (MR_Integer) 4)));
#line 412 "assertion.m"
            hlds__assertion__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_34_34, (MR_Integer) 5)));
#line 412 "assertion.m"
          }
#line 411 "assertion.m"
          {
#line 412 "assertion.m"
            {
#line 412 "assertion.m"
              (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__PredId_4, (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_41_41);
            }
#line 411 "assertion.m"
            if ((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded)
#line 413 "assertion.m"
              {
#line 413 "assertion.m"
                mercury__list__delete_3_p_1((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__TypeCtorInfo_40_40, (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Goals_5, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Call_7)), &(hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Unifications_14, hlds__assertion__predicate_call_2_p_0_4, hlds__assertion__env_ptr);
              }
#line 411 "assertion.m"
          }
#line 412 "assertion.m"
        }
#line 411 "assertion.m"
    }
#line 411 "assertion.m"
  }
#line 411 "assertion.m"
}

#line 411 "assertion.m"
static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_6(
#line 411 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 411 "assertion.m"
{
#line 411 "assertion.m"
  {
#line 411 "assertion.m"
    struct hlds__assertion__predicate_call_2_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__predicate_call_2_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 411 "assertion.m"
    if (MR_builtin_setjmp((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__commit_0) == 0)
#line 411 "assertion.m"
      {
#line 5750 "hlds.assertion.c"
        (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 411 "assertion.m"
        {
#line 411 "assertion.m"
          mercury__list__member_2_p_1((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__TypeCtorInfo_40_40, &(hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__conv0_Call_7, (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Goals_5, hlds__assertion__predicate_call_2_p_0_3, hlds__assertion__env_ptr);
        }
#line 411 "assertion.m"
        (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded = MR_FALSE;
#line 411 "assertion.m"
      }
#line 411 "assertion.m"
    else
#line 411 "assertion.m"
      (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded = MR_TRUE;
#line 411 "assertion.m"
  }
#line 411 "assertion.m"
}

#line 407 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__predicate_call_2_p_0(
#line 407 "assertion.m"
  MR_Word hlds__assertion__Goal_3,
#line 407 "assertion.m"
  MR_Word hlds__assertion__PredId_4)
#line 407 "assertion.m"
{
#line 407 "assertion.m"
  {
#line 407 "assertion.m"
    struct hlds__assertion__predicate_call_2_p_0_env_0_s hlds__assertion__env;

#line 407 "assertion.m"
    (hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__PredId_4 = hlds__assertion__PredId_4;
#line 410 "assertion.m"
    {
#line 410 "assertion.m"
      MR_Word hlds__assertion__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_3, (MR_Integer) 0)));
#line 410 "assertion.m"
      MR_Word hlds__assertion__V_33_33;
#line 410 "assertion.m"
      MR_Word hlds__assertion__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_3, (MR_Integer) 1)));

#line 410 "assertion.m"
      (hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_32_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_32_32, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 410 "assertion.m"
      if ((hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded)
#line 410 "assertion.m"
        {
#line 410 "assertion.m"
          hlds__assertion__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_32_32, (MR_Integer) 1)));
#line 410 "assertion.m"
          (hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__Goals_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_32_32, (MR_Integer) 2)));
#line 410 "assertion.m"
          (hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded = (hlds__assertion__V_33_33 == (MR_Integer) 0);
#line 410 "assertion.m"
        }
#line 410 "assertion.m"
      if ((hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded)
#line 411 "assertion.m"
        {
#line 411 "assertion.m"
          {
#line 411 "assertion.m"
            hlds__assertion__predicate_call_2_p_0_6(&hlds__assertion__env);
          }
#line 411 "assertion.m"
        }
#line 410 "assertion.m"
      else
#line 422 "assertion.m"
        {
#line 422 "assertion.m"
          MR_Word hlds__assertion__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_3, (MR_Integer) 0)));
#line 422 "assertion.m"
          MR_Word hlds__assertion__V_43_43;
#line 422 "assertion.m"
          MR_Word hlds__assertion__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_3, (MR_Integer) 1)));
#line 422 "assertion.m"
          MR_Integer hlds__assertion__V_26_26;
#line 422 "assertion.m"
          MR_Word hlds__assertion__V_27_27;
#line 422 "assertion.m"
          MR_Word hlds__assertion__V_28_28;
#line 422 "assertion.m"
          MR_Word hlds__assertion__V_29_29;
#line 422 "assertion.m"
          MR_Word hlds__assertion__V_30_30;

#line 422 "assertion.m"
          (hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_38_38)) == (MR_mktag((MR_Integer) 2)));
#line 422 "assertion.m"
          if ((hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded)
#line 422 "assertion.m"
            {
#line 422 "assertion.m"
              hlds__assertion__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_38_38, (MR_Integer) 0)));
#line 422 "assertion.m"
              hlds__assertion__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__V_38_38, (MR_Integer) 1)));
#line 422 "assertion.m"
              hlds__assertion__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_38_38, (MR_Integer) 2)));
#line 422 "assertion.m"
              hlds__assertion__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_38_38, (MR_Integer) 3)));
#line 422 "assertion.m"
              hlds__assertion__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_38_38, (MR_Integer) 4)));
#line 422 "assertion.m"
              hlds__assertion__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_38_38, (MR_Integer) 5)));
#line 422 "assertion.m"
              {
#line 422 "assertion.m"
                (hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__PredId_4, hlds__assertion__V_43_43);
              }
#line 422 "assertion.m"
            }
#line 422 "assertion.m"
        }
#line 410 "assertion.m"
      return (hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded;
#line 410 "assertion.m"
    }
#line 407 "assertion.m"
  }
#line 407 "assertion.m"
}

#line 351 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__process_two_linked_calls_6_p_0(
#line 351 "assertion.m"
  MR_Word hlds__assertion__Goals_7,
#line 351 "assertion.m"
  MR_Word hlds__assertion__UniversiallyQuantifiedVars_8,
#line 351 "assertion.m"
  MR_Word * hlds__assertion__PredId_9,
#line 351 "assertion.m"
  MR_Word * hlds__assertion__LinkingVar_10,
#line 351 "assertion.m"
  MR_Word * hlds__assertion__Vars_11,
#line 351 "assertion.m"
  MR_Word * hlds__assertion__VarsA_12)
#line 351 "assertion.m"
{
#line 356 "assertion.m"
  {
#line 356 "assertion.m"
    MR_bool hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Goals_7)) == (MR_mktag((MR_Integer) 1)));
#line 356 "assertion.m"
    MR_Word hlds__assertion__TypeCtorInfo_34_34;
#line 356 "assertion.m"
    MR_Word hlds__assertion__TypeInfo_35_35;
#line 356 "assertion.m"
    MR_Word hlds__assertion__VarsB_19;
#line 356 "assertion.m"
    MR_Word hlds__assertion__SetVarsA_24;
#line 356 "assertion.m"
    MR_Word hlds__assertion__SetVarsB_25;
#line 356 "assertion.m"
    MR_Word hlds__assertion__CommonVars_26;
#line 356 "assertion.m"
    MR_Word hlds__assertion__V_27_27;
#line 356 "assertion.m"
    MR_Word hlds__assertion__V_28_28;
#line 356 "assertion.m"
    MR_Word hlds__assertion__V_29_29;
#line 356 "assertion.m"
    MR_Word hlds__assertion__V_30_30;
#line 356 "assertion.m"
    MR_Word hlds__assertion__V_31_31;
#line 356 "assertion.m"
    MR_Word hlds__assertion__V_32_32;
#line 356 "assertion.m"
    MR_Word hlds__assertion__V_33_33;
#line 356 "assertion.m"
    MR_Word hlds__assertion__V_36_36;
#line 358 "assertion.m"
    MR_Word hlds__assertion__V_17_17;
#line 358 "assertion.m"
    MR_Integer hlds__assertion__V_13_13;
#line 358 "assertion.m"
    MR_Word hlds__assertion__V_14_14;
#line 358 "assertion.m"
    MR_Word hlds__assertion__V_15_15;
#line 358 "assertion.m"
    MR_Word hlds__assertion__V_16_16;
#line 359 "assertion.m"
    MR_Word hlds__assertion__V_23_23;
#line 359 "assertion.m"
    MR_Integer hlds__assertion__V_18_18;
#line 359 "assertion.m"
    MR_Word hlds__assertion__V_20_20;
#line 359 "assertion.m"
    MR_Word hlds__assertion__V_21_21;
#line 359 "assertion.m"
    MR_Word hlds__assertion__V_22_22;

#line 358 "assertion.m"
    if (hlds__assertion__succeeded)
#line 358 "assertion.m"
      {
#line 358 "assertion.m"
        hlds__assertion__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Goals_7, (MR_Integer) 0)));
#line 358 "assertion.m"
        hlds__assertion__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Goals_7, (MR_Integer) 1)));
#line 358 "assertion.m"
        hlds__assertion__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_27_27, (MR_Integer) 0)));
#line 358 "assertion.m"
        hlds__assertion__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_27_27, (MR_Integer) 1)));
#line 358 "assertion.m"
        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_28_28)) == (MR_mktag((MR_Integer) 2)));
#line 358 "assertion.m"
        if (hlds__assertion__succeeded)
#line 358 "assertion.m"
          {
#line 358 "assertion.m"
            *hlds__assertion__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_28_28, (MR_Integer) 0)));
#line 358 "assertion.m"
            hlds__assertion__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__V_28_28, (MR_Integer) 1)));
#line 358 "assertion.m"
            *hlds__assertion__VarsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_28_28, (MR_Integer) 2)));
#line 358 "assertion.m"
            hlds__assertion__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_28_28, (MR_Integer) 3)));
#line 358 "assertion.m"
            hlds__assertion__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_28_28, (MR_Integer) 4)));
#line 358 "assertion.m"
            hlds__assertion__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_28_28, (MR_Integer) 5)));
#line 360 "assertion.m"
            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 360 "assertion.m"
            if (hlds__assertion__succeeded)
#line 360 "assertion.m"
              {
#line 360 "assertion.m"
                hlds__assertion__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_29_29, (MR_Integer) 0)));
#line 360 "assertion.m"
                hlds__assertion__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_29_29, (MR_Integer) 1)));
#line 359 "assertion.m"
                hlds__assertion__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_30_30, (MR_Integer) 0)));
#line 359 "assertion.m"
                hlds__assertion__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_30_30, (MR_Integer) 1)));
#line 359 "assertion.m"
                hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_31_31)) == (MR_mktag((MR_Integer) 2)));
#line 359 "assertion.m"
                if (hlds__assertion__succeeded)
#line 359 "assertion.m"
                  {
#line 359 "assertion.m"
                    hlds__assertion__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_31_31, (MR_Integer) 0)));
#line 359 "assertion.m"
                    hlds__assertion__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__V_31_31, (MR_Integer) 1)));
#line 359 "assertion.m"
                    hlds__assertion__VarsB_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_31_31, (MR_Integer) 2)));
#line 359 "assertion.m"
                    hlds__assertion__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_31_31, (MR_Integer) 3)));
#line 359 "assertion.m"
                    hlds__assertion__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_31_31, (MR_Integer) 4)));
#line 359 "assertion.m"
                    hlds__assertion__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_31_31, (MR_Integer) 5)));
#line 359 "assertion.m"
                    {
#line 359 "assertion.m"
                      hlds__assertion__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(*hlds__assertion__PredId_9, hlds__assertion__V_36_36);
                    }
#line 356 "assertion.m"
                    if (hlds__assertion__succeeded)
#line 356 "assertion.m"
                      {
#line 360 "assertion.m"
                        hlds__assertion__succeeded = (hlds__assertion__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 356 "assertion.m"
                        if (hlds__assertion__succeeded)
#line 356 "assertion.m"
                          {
#line 6024 "hlds.assertion.c"
                            hlds__assertion__TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 364 "assertion.m"
                            {
#line 364 "assertion.m"
                              hlds__assertion__SetVarsA_24 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__assertion__TypeCtorInfo_34_34, *hlds__assertion__VarsA_12);
                            }
#line 365 "assertion.m"
                            {
#line 365 "assertion.m"
                              hlds__assertion__SetVarsB_25 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__assertion__TypeCtorInfo_34_34, hlds__assertion__VarsB_19);
                            }
#line 366 "assertion.m"
                            {
#line 366 "assertion.m"
                              hlds__assertion__CommonVars_26 = parse_tree__set_of_var__intersect_2_f_0(hlds__assertion__TypeCtorInfo_34_34, hlds__assertion__SetVarsA_24, hlds__assertion__SetVarsB_25);
                            }
#line 368 "assertion.m"
                            {
#line 368 "assertion.m"
                              hlds__assertion__V_33_33 = parse_tree__set_of_var__difference_2_f_0(hlds__assertion__TypeCtorInfo_34_34, hlds__assertion__CommonVars_26, hlds__assertion__UniversiallyQuantifiedVars_8);
                            }
#line 367 "assertion.m"
                            {
#line 367 "assertion.m"
                              hlds__assertion__succeeded = parse_tree__set_of_var__is_singleton_2_p_0(hlds__assertion__TypeCtorInfo_34_34, hlds__assertion__V_33_33, hlds__assertion__LinkingVar_10);
                            }
#line 356 "assertion.m"
                            if (hlds__assertion__succeeded)
#line 356 "assertion.m"
                              {
#line 6055 "hlds.assertion.c"
                                hlds__assertion__TypeInfo_35_35 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 372 "assertion.m"
                                {
#line 372 "assertion.m"
                                  mercury__assoc_list__from_corresponding_lists_3_p_0(hlds__assertion__TypeInfo_35_35, hlds__assertion__TypeInfo_35_35, *hlds__assertion__VarsA_12, hlds__assertion__VarsB_19, hlds__assertion__Vars_11);
                                }
#line 372 "assertion.m"
                                hlds__assertion__succeeded = MR_TRUE;
#line 356 "assertion.m"
                              }
#line 356 "assertion.m"
                          }
#line 356 "assertion.m"
                      }
#line 359 "assertion.m"
                  }
#line 360 "assertion.m"
              }
#line 358 "assertion.m"
          }
#line 358 "assertion.m"
      }
#line 356 "assertion.m"
    return hlds__assertion__succeeded;
#line 356 "assertion.m"
  }
#line 351 "assertion.m"
}

#line 337 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__update_5_p_0_7(
#line 337 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 337 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1)
#line 337 "assertion.m"
{
#line 337 "assertion.m"
  {
#line 337 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 337 "assertion.m"
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

#line 337 "assertion.m"
    {
#line 337 "assertion.m"
      hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__update__337__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 3))), ((MR_Word) hlds__assertion__wrapper_arg_1));
    }
#line 337 "assertion.m"
    return hlds__assertion__succeeded;
#line 337 "assertion.m"
  }
#line 337 "assertion.m"
}

#line 335 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__update_5_p_0_6(
#line 335 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 335 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1)
#line 335 "assertion.m"
{
#line 335 "assertion.m"
  {
#line 335 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 335 "assertion.m"
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

#line 335 "assertion.m"
    {
#line 335 "assertion.m"
      hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__update__335__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 3))), ((MR_Word) hlds__assertion__wrapper_arg_1));
    }
#line 335 "assertion.m"
    return hlds__assertion__succeeded;
#line 335 "assertion.m"
  }
#line 335 "assertion.m"
}

#line 324 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__update_5_p_0_4(
#line 324 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 324 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1)
#line 324 "assertion.m"
{
#line 324 "assertion.m"
  {
#line 324 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 324 "assertion.m"
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

#line 324 "assertion.m"
    {
#line 324 "assertion.m"
      hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__update__324__1_1_p_0(((MR_Word) hlds__assertion__wrapper_arg_1));
    }
#line 324 "assertion.m"
    return hlds__assertion__succeeded;
#line 324 "assertion.m"
  }
#line 324 "assertion.m"
}

#line 316 "assertion.m"
static void MR_CALL 
hlds__assertion__update_5_p_0_5(
#line 316 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 316 "assertion.m"
{
#line 316 "assertion.m"
  {
#line 316 "assertion.m"
    struct hlds__assertion__update_5_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__update_5_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 316 "assertion.m"
    {
#line 336 "assertion.m"
      MR_Word hlds__assertion___S0_29;
#line 338 "assertion.m"
      MR_Word hlds__assertion___SA_30;

#line 332 "assertion.m"
      (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 332 "assertion.m"
      if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 332 "assertion.m"
        {
#line 332 "assertion.m"
          {
#line 332 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_34_34, (MR_Integer) 0)));
#line 332 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_34_34, (MR_Integer) 1)));
#line 332 "assertion.m"
          }
#line 316 "assertion.m"
          {
#line 332 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_35_35, (MR_Integer) 0)));
#line 332 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_35_35, (MR_Integer) 1)));
#line 332 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__S0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_36_36, (MR_Integer) 0)));
#line 332 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_36_36, (MR_Integer) 1)));
#line 6212 "hlds.assertion.c"
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_76_76 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 332 "assertion.m"
            {
#line 332 "assertion.m"
              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_76_76, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__SA_15)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_65_65)));
            }
#line 316 "assertion.m"
            if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 316 "assertion.m"
              {
#line 332 "assertion.m"
                (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_37_37, (MR_Integer) 0)));
#line 332 "assertion.m"
                (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_37_37, (MR_Integer) 1)));
#line 6227 "hlds.assertion.c"
                (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_77_77 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 332 "assertion.m"
                {
#line 332 "assertion.m"
                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_77_77, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__SB_18)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_66_66)));
                }
#line 316 "assertion.m"
                if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 316 "assertion.m"
                  {
#line 6238 "hlds.assertion.c"
                    (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_78_78 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 332 "assertion.m"
                    {
#line 332 "assertion.m"
                      (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_78_78, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__S0_25)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_67_67)));
                    }
#line 316 "assertion.m"
                    if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 316 "assertion.m"
                      {
#line 332 "assertion.m"
                        (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 332 "assertion.m"
                        if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 332 "assertion.m"
                          {
#line 332 "assertion.m"
                            {
#line 332 "assertion.m"
                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_38_38, (MR_Integer) 0)));
#line 332 "assertion.m"
                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_38_38, (MR_Integer) 1)));
#line 332 "assertion.m"
                            }
#line 316 "assertion.m"
                            {
#line 6265 "hlds.assertion.c"
                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_79_79 = (MR_Word) &hlds__assertion_scalar_common_1[2];
#line 332 "assertion.m"
                              {
#line 332 "assertion.m"
                                (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_79_79, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_42_42)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_68_68)));
                              }
#line 316 "assertion.m"
                              if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 316 "assertion.m"
                                {
#line 332 "assertion.m"
                                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_39_39, (MR_Integer) 0)));
#line 332 "assertion.m"
                                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_39_39, (MR_Integer) 1)));
#line 332 "assertion.m"
                                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_40_40, (MR_Integer) 0)));
#line 332 "assertion.m"
                                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__S_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_40_40, (MR_Integer) 1)));
#line 6284 "hlds.assertion.c"
                                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_80_80 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 332 "assertion.m"
                                  {
#line 332 "assertion.m"
                                    (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_80_80, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__SA_15)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_69_69)));
                                  }
#line 316 "assertion.m"
                                  if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 316 "assertion.m"
                                    {
#line 332 "assertion.m"
                                      (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_41_41, (MR_Integer) 0)));
#line 332 "assertion.m"
                                      (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_41_41, (MR_Integer) 1)));
#line 6299 "hlds.assertion.c"
                                      (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_81_81 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 332 "assertion.m"
                                      {
#line 332 "assertion.m"
                                        (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_81_81, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__S_26)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_70_70)));
                                      }
#line 316 "assertion.m"
                                      if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 316 "assertion.m"
                                        {
#line 6310 "hlds.assertion.c"
                                          (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_82_82 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 332 "assertion.m"
                                          {
#line 332 "assertion.m"
                                            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_82_82, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__SB_18)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_71_71)));
                                          }
#line 316 "assertion.m"
                                          if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 316 "assertion.m"
                                            {
#line 6321 "hlds.assertion.c"
                                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_63_63 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 334 "assertion.m"
                                              {
#line 334 "assertion.m"
                                                mercury__assoc_list__from_corresponding_lists_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_63_63, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_63_63, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Vs_17, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__CallVars_9, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__AssocList_27);
                                              }
#line 336 "assertion.m"
                                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_47_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 335 "assertion.m"
                                              {
#line 335 "assertion.m"
                                                MR_Word base;
#line 335 "assertion.m"
                                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 335 "assertion.m"
                                                (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_43_43 = base;
#line 335 "assertion.m"
                                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&hlds__assertion_scalar_common_5[0]));
#line 335 "assertion.m"
                                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__update_5_p_0_6));
#line 335 "assertion.m"
                                                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 335 "assertion.m"
                                                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__S0_25));
#line 335 "assertion.m"
                                              }
#line 335 "assertion.m"
                                              {
#line 335 "assertion.m"
                                                mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_61_61, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_43_43, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__AssocList_27, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_44_44);
                                              }
#line 336 "assertion.m"
                                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_44_44)) == (MR_mktag((MR_Integer) 1)));
#line 336 "assertion.m"
                                              if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 336 "assertion.m"
                                                {
#line 336 "assertion.m"
                                                  {
#line 336 "assertion.m"
                                                    (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_44_44, (MR_Integer) 0)));
#line 336 "assertion.m"
                                                    (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_44_44, (MR_Integer) 1)));
#line 336 "assertion.m"
                                                  }
#line 316 "assertion.m"
                                                  {
#line 6369 "hlds.assertion.c"
                                                    (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_84_84 = (MR_Word) &hlds__assertion_scalar_common_1[3];
#line 336 "assertion.m"
                                                    {
#line 336 "assertion.m"
                                                      (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_84_84, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_47_47)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_72_72)));
                                                    }
#line 316 "assertion.m"
                                                    if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 316 "assertion.m"
                                                      {
#line 336 "assertion.m"
                                                        hlds__assertion___S0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_46_46, (MR_Integer) 0)));
#line 336 "assertion.m"
                                                        (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__StateA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_46_46, (MR_Integer) 1)));
#line 338 "assertion.m"
                                                        (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_52_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 337 "assertion.m"
                                                        {
#line 337 "assertion.m"
                                                          MR_Word base;
#line 337 "assertion.m"
                                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 337 "assertion.m"
                                                          (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_48_48 = base;
#line 337 "assertion.m"
                                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&hlds__assertion_scalar_common_5[0]));
#line 337 "assertion.m"
                                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__update_5_p_0_7));
#line 337 "assertion.m"
                                                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 337 "assertion.m"
                                                          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__SA_15));
#line 337 "assertion.m"
                                                        }
#line 337 "assertion.m"
                                                        {
#line 337 "assertion.m"
                                                          mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_61_61, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_48_48, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__AssocList_27, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_49_49);
                                                        }
#line 338 "assertion.m"
                                                        (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_49_49)) == (MR_mktag((MR_Integer) 1)));
#line 338 "assertion.m"
                                                        if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 338 "assertion.m"
                                                          {
#line 338 "assertion.m"
                                                            {
#line 338 "assertion.m"
                                                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_49_49, (MR_Integer) 0)));
#line 338 "assertion.m"
                                                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_49_49, (MR_Integer) 1)));
#line 338 "assertion.m"
                                                            }
#line 316 "assertion.m"
                                                            {
#line 6425 "hlds.assertion.c"
                                                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_86_86 = (MR_Word) &hlds__assertion_scalar_common_1[3];
#line 338 "assertion.m"
                                                              {
#line 338 "assertion.m"
                                                                (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_86_86, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_52_52)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_73_73)));
                                                              }
#line 316 "assertion.m"
                                                              if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 316 "assertion.m"
                                                                {
#line 338 "assertion.m"
                                                                  hlds__assertion___SA_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_51_51, (MR_Integer) 0)));
#line 338 "assertion.m"
                                                                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__StateB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_51_51, (MR_Integer) 1)));
#line 316 "assertion.m"
                                                                  {
#line 316 "assertion.m"
                                                                    MR_Word base;
#line 316 "assertion.m"
                                                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 316 "assertion.m"
                                                                    *((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__HeadVar__5_5) = base;
#line 316 "assertion.m"
                                                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__StateA_10));
#line 316 "assertion.m"
                                                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__StateB_11));
#line 316 "assertion.m"
                                                                  }
#line 316 "assertion.m"
                                                                  {
#line 316 "assertion.m"
                                                                    ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__cont)((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__cont_env_ptr);
                                                                  }
#line 316 "assertion.m"
                                                                }
#line 316 "assertion.m"
                                                            }
#line 338 "assertion.m"
                                                          }
#line 316 "assertion.m"
                                                      }
#line 316 "assertion.m"
                                                  }
#line 336 "assertion.m"
                                                }
#line 316 "assertion.m"
                                            }
#line 316 "assertion.m"
                                        }
#line 316 "assertion.m"
                                    }
#line 316 "assertion.m"
                                }
#line 316 "assertion.m"
                            }
#line 332 "assertion.m"
                          }
#line 316 "assertion.m"
                      }
#line 316 "assertion.m"
                  }
#line 316 "assertion.m"
              }
#line 316 "assertion.m"
          }
#line 332 "assertion.m"
        }
#line 316 "assertion.m"
    }
#line 316 "assertion.m"
  }
#line 316 "assertion.m"
}

#line 316 "assertion.m"
static void MR_CALL 
hlds__assertion__update_5_p_0_1(
#line 316 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 316 "assertion.m"
{
#line 316 "assertion.m"
  {
#line 316 "assertion.m"
    struct hlds__assertion__update_5_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__update_5_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 316 "assertion.m"
    {
#line 320 "assertion.m"
      MR_Word hlds__assertion__V_20_20;

#line 318 "assertion.m"
      {
#line 318 "assertion.m"
        (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = hlds__assertion__process_two_linked_calls_6_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__LHSCalls_12, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__UniversiallyQuantifiedVars_8, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__PredId_14, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__SA_15, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__PairsL_16, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Vs_17);
      }
#line 316 "assertion.m"
      if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 316 "assertion.m"
        {
#line 320 "assertion.m"
          {
#line 320 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = hlds__assertion__process_two_linked_calls_6_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__RHSCalls_13, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__UniversiallyQuantifiedVars_8, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_64_64, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__SB_18, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__PairsR_19, &hlds__assertion__V_20_20);
          }
#line 316 "assertion.m"
          if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 316 "assertion.m"
            {
#line 320 "assertion.m"
              {
#line 320 "assertion.m"
                (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__PredId_14, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_64_64);
              }
#line 316 "assertion.m"
              if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 316 "assertion.m"
                {
#line 6544 "hlds.assertion.c"
                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_61_61 = (MR_Word) &hlds__assertion_scalar_common_2[0];
#line 323 "assertion.m"
                  {
#line 323 "assertion.m"
                    mercury__assoc_list__from_corresponding_lists_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_61_61, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_61_61, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__PairsL_16, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__PairsR_19, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Pairs0_21);
                  }
#line 324 "assertion.m"
                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_31_31 = (MR_Word) &hlds__assertion_scalar_common_2[5];
#line 6553 "hlds.assertion.c"
                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_62_62 = (MR_Word) &hlds__assertion_scalar_common_2[1];
#line 324 "assertion.m"
                  {
#line 324 "assertion.m"
                    mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_62_62, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_31_31, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Pairs0_21, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Pairs_24);
                  }
#line 325 "assertion.m"
                  {
#line 325 "assertion.m"
                    (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_33_33 = mercury__list__length_1_f_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_62_62, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Pairs_24);
                  }
#line 325 "assertion.m"
                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_33_33 == (MR_Integer) 2);
#line 316 "assertion.m"
                  if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 316 "assertion.m"
                    {
#line 332 "assertion.m"
                      (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 332 "assertion.m"
                      {
#line 332 "assertion.m"
                        mercury__list__perm_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_62_62, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Pairs_24, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_34_34, hlds__assertion__update_5_p_0_5, hlds__assertion__env_ptr);
                      }
#line 316 "assertion.m"
                    }
#line 316 "assertion.m"
                }
#line 316 "assertion.m"
            }
#line 316 "assertion.m"
        }
#line 316 "assertion.m"
    }
#line 316 "assertion.m"
  }
#line 316 "assertion.m"
}

#line 260 "assertion.m"
static void MR_CALL 
hlds__assertion__update_5_p_0_2(
#line 260 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 260 "assertion.m"
{
#line 260 "assertion.m"
  {
#line 260 "assertion.m"
    struct hlds__assertion__update_5_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__update_5_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 262 "assertion.m"
    {
#line 262 "assertion.m"
      mercury__list__perm_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeCtorInfo_13_95, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__QCalls_7, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__RHSCalls_13, hlds__assertion__update_5_p_0_1, hlds__assertion__env_ptr);
    }
#line 260 "assertion.m"
  }
#line 260 "assertion.m"
}

#line 263 "assertion.m"
static void MR_CALL 
hlds__assertion__update_5_p_0_3(
#line 263 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 263 "assertion.m"
{
#line 263 "assertion.m"
  {
#line 263 "assertion.m"
    struct hlds__assertion__update_5_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__update_5_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 265 "assertion.m"
    {
#line 265 "assertion.m"
      mercury__list__perm_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeCtorInfo_14_96, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__QCalls_7, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__LHSCalls_12, hlds__assertion__update_5_p_0_1, hlds__assertion__env_ptr);
    }
#line 263 "assertion.m"
  }
#line 263 "assertion.m"
}

#line 312 "assertion.m"
static void MR_CALL 
hlds__assertion__update_5_p_0(
#line 312 "assertion.m"
  MR_Word hlds__assertion__PCalls_6,
#line 312 "assertion.m"
  MR_Word hlds__assertion__QCalls_7,
#line 312 "assertion.m"
  MR_Word hlds__assertion__UniversiallyQuantifiedVars_8,
#line 312 "assertion.m"
  MR_Word hlds__assertion__CallVars_9,
#line 312 "assertion.m"
  MR_Word * hlds__assertion__HeadVar__5_5,
#line 312 "assertion.m"
  MR_Cont hlds__assertion__cont,
#line 312 "assertion.m"
  void * hlds__assertion__cont_env_ptr)
#line 312 "assertion.m"
{
#line 312 "assertion.m"
  {
#line 312 "assertion.m"
    struct hlds__assertion__update_5_p_0_env_0_s hlds__assertion__env;

#line 312 "assertion.m"
    (hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__QCalls_7 = hlds__assertion__QCalls_7;
#line 312 "assertion.m"
    (hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__UniversiallyQuantifiedVars_8 = hlds__assertion__UniversiallyQuantifiedVars_8;
#line 312 "assertion.m"
    (hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__CallVars_9 = hlds__assertion__CallVars_9;
#line 312 "assertion.m"
    (hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__HeadVar__5_5 = hlds__assertion__HeadVar__5_5;
#line 312 "assertion.m"
    (hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__cont = hlds__assertion__cont;
#line 312 "assertion.m"
    (hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__cont_env_ptr = hlds__assertion__cont_env_ptr;
#line 260 "assertion.m"
    {
#line 6675 "hlds.assertion.c"
      (hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__TypeCtorInfo_13_95 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 261 "assertion.m"
      {
#line 261 "assertion.m"
        mercury__list__perm_2_p_0((hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__TypeCtorInfo_13_95, hlds__assertion__PCalls_6, &(hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__LHSCalls_12, hlds__assertion__update_5_p_0_2, &hlds__assertion__env);
      }
#line 260 "assertion.m"
    }
#line 263 "assertion.m"
    {
#line 6686 "hlds.assertion.c"
      (hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__TypeCtorInfo_14_96 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 264 "assertion.m"
      {
#line 264 "assertion.m"
        mercury__list__perm_2_p_0((hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__TypeCtorInfo_14_96, hlds__assertion__PCalls_6, &(hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__RHSCalls_13, hlds__assertion__update_5_p_0_3, &hlds__assertion__env);
      }
#line 263 "assertion.m"
    }
#line 312 "assertion.m"
  }
#line 312 "assertion.m"
}

#line 288 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__process_one_side_6_p_0_1(
#line 288 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 288 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1)
#line 288 "assertion.m"
{
#line 288 "assertion.m"
  {
#line 288 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 288 "assertion.m"
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

#line 288 "assertion.m"
    {
#line 288 "assertion.m"
      hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__process_one_side__288__1_1_p_0(((MR_Word) hlds__assertion__wrapper_arg_1));
    }
#line 288 "assertion.m"
    return hlds__assertion__succeeded;
#line 288 "assertion.m"
  }
#line 288 "assertion.m"
}

#line 278 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__process_one_side_6_p_0(
#line 278 "assertion.m"
  MR_Word hlds__assertion__Goals_7,
#line 278 "assertion.m"
  MR_Word hlds__assertion__UniversiallyQuantifiedVars_8,
#line 278 "assertion.m"
  MR_Word * hlds__assertion__PredId_9,
#line 278 "assertion.m"
  MR_Word * hlds__assertion__LinkingVar_10,
#line 278 "assertion.m"
  MR_Word * hlds__assertion__Vars_11,
#line 278 "assertion.m"
  MR_Word * hlds__assertion__VarsA_12)
#line 278 "assertion.m"
{
#line 282 "assertion.m"
  {
#line 282 "assertion.m"
    MR_bool hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Goals_7)) == (MR_mktag((MR_Integer) 1)));
#line 282 "assertion.m"
    MR_Word hlds__assertion__TypeInfo_21_21;
#line 282 "assertion.m"
    MR_Word hlds__assertion__TypeCtorInfo_34_51;
#line 282 "assertion.m"
    MR_Word hlds__assertion__TypeInfo_35_52;
#line 282 "assertion.m"
    MR_Word hlds__assertion__Vars0_13;
#line 282 "assertion.m"
    MR_Word hlds__assertion__V_16_16;
#line 282 "assertion.m"
    MR_Integer hlds__assertion__V_18_18;
#line 282 "assertion.m"
    MR_Integer hlds__assertion__V_22_22;
#line 282 "assertion.m"
    MR_Word hlds__assertion__VarsB_36;
#line 282 "assertion.m"
    MR_Word hlds__assertion__SetVarsA_41;
#line 282 "assertion.m"
    MR_Word hlds__assertion__SetVarsB_42;
#line 282 "assertion.m"
    MR_Word hlds__assertion__CommonVars_43;
#line 282 "assertion.m"
    MR_Word hlds__assertion__V_44_44;
#line 282 "assertion.m"
    MR_Word hlds__assertion__V_45_45;
#line 282 "assertion.m"
    MR_Word hlds__assertion__V_46_46;
#line 282 "assertion.m"
    MR_Word hlds__assertion__V_47_47;
#line 282 "assertion.m"
    MR_Word hlds__assertion__V_48_48;
#line 282 "assertion.m"
    MR_Word hlds__assertion__V_49_49;
#line 282 "assertion.m"
    MR_Word hlds__assertion__V_50_50;
#line 282 "assertion.m"
    MR_Word hlds__assertion__V_53_53;
#line 358 "assertion.m"
    MR_Word hlds__assertion__V_34_34;
#line 358 "assertion.m"
    MR_Integer hlds__assertion__V_30_30;
#line 358 "assertion.m"
    MR_Word hlds__assertion__V_31_31;
#line 358 "assertion.m"
    MR_Word hlds__assertion__V_32_32;
#line 358 "assertion.m"
    MR_Word hlds__assertion__V_33_33;
#line 359 "assertion.m"
    MR_Word hlds__assertion__V_40_40;
#line 359 "assertion.m"
    MR_Integer hlds__assertion__V_35_35;
#line 359 "assertion.m"
    MR_Word hlds__assertion__V_37_37;
#line 359 "assertion.m"
    MR_Word hlds__assertion__V_38_38;
#line 359 "assertion.m"
    MR_Word hlds__assertion__V_39_39;

#line 358 "assertion.m"
    if (hlds__assertion__succeeded)
#line 358 "assertion.m"
      {
#line 358 "assertion.m"
        hlds__assertion__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Goals_7, (MR_Integer) 0)));
#line 358 "assertion.m"
        hlds__assertion__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Goals_7, (MR_Integer) 1)));
#line 358 "assertion.m"
        hlds__assertion__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_44_44, (MR_Integer) 0)));
#line 358 "assertion.m"
        hlds__assertion__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_44_44, (MR_Integer) 1)));
#line 358 "assertion.m"
        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_45_45)) == (MR_mktag((MR_Integer) 2)));
#line 358 "assertion.m"
        if (hlds__assertion__succeeded)
#line 358 "assertion.m"
          {
#line 358 "assertion.m"
            *hlds__assertion__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_45_45, (MR_Integer) 0)));
#line 358 "assertion.m"
            hlds__assertion__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__V_45_45, (MR_Integer) 1)));
#line 358 "assertion.m"
            *hlds__assertion__VarsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_45_45, (MR_Integer) 2)));
#line 358 "assertion.m"
            hlds__assertion__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_45_45, (MR_Integer) 3)));
#line 358 "assertion.m"
            hlds__assertion__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_45_45, (MR_Integer) 4)));
#line 358 "assertion.m"
            hlds__assertion__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_45_45, (MR_Integer) 5)));
#line 360 "assertion.m"
            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 360 "assertion.m"
            if (hlds__assertion__succeeded)
#line 360 "assertion.m"
              {
#line 360 "assertion.m"
                hlds__assertion__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_46_46, (MR_Integer) 0)));
#line 360 "assertion.m"
                hlds__assertion__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_46_46, (MR_Integer) 1)));
#line 359 "assertion.m"
                hlds__assertion__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_47_47, (MR_Integer) 0)));
#line 359 "assertion.m"
                hlds__assertion__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_47_47, (MR_Integer) 1)));
#line 359 "assertion.m"
                hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_48_48)) == (MR_mktag((MR_Integer) 2)));
#line 359 "assertion.m"
                if (hlds__assertion__succeeded)
#line 359 "assertion.m"
                  {
#line 359 "assertion.m"
                    hlds__assertion__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_48_48, (MR_Integer) 0)));
#line 359 "assertion.m"
                    hlds__assertion__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__V_48_48, (MR_Integer) 1)));
#line 359 "assertion.m"
                    hlds__assertion__VarsB_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_48_48, (MR_Integer) 2)));
#line 359 "assertion.m"
                    hlds__assertion__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_48_48, (MR_Integer) 3)));
#line 359 "assertion.m"
                    hlds__assertion__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_48_48, (MR_Integer) 4)));
#line 359 "assertion.m"
                    hlds__assertion__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_48_48, (MR_Integer) 5)));
#line 359 "assertion.m"
                    {
#line 359 "assertion.m"
                      hlds__assertion__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(*hlds__assertion__PredId_9, hlds__assertion__V_53_53);
                    }
#line 282 "assertion.m"
                    if (hlds__assertion__succeeded)
#line 282 "assertion.m"
                      {
#line 360 "assertion.m"
                        hlds__assertion__succeeded = (hlds__assertion__V_49_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 282 "assertion.m"
                        if (hlds__assertion__succeeded)
#line 282 "assertion.m"
                          {
#line 6885 "hlds.assertion.c"
                            hlds__assertion__TypeCtorInfo_34_51 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 364 "assertion.m"
                            {
#line 364 "assertion.m"
                              hlds__assertion__SetVarsA_41 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__assertion__TypeCtorInfo_34_51, *hlds__assertion__VarsA_12);
                            }
#line 365 "assertion.m"
                            {
#line 365 "assertion.m"
                              hlds__assertion__SetVarsB_42 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__assertion__TypeCtorInfo_34_51, hlds__assertion__VarsB_36);
                            }
#line 366 "assertion.m"
                            {
#line 366 "assertion.m"
                              hlds__assertion__CommonVars_43 = parse_tree__set_of_var__intersect_2_f_0(hlds__assertion__TypeCtorInfo_34_51, hlds__assertion__SetVarsA_41, hlds__assertion__SetVarsB_42);
                            }
#line 368 "assertion.m"
                            {
#line 368 "assertion.m"
                              hlds__assertion__V_50_50 = parse_tree__set_of_var__difference_2_f_0(hlds__assertion__TypeCtorInfo_34_51, hlds__assertion__CommonVars_43, hlds__assertion__UniversiallyQuantifiedVars_8);
                            }
#line 367 "assertion.m"
                            {
#line 367 "assertion.m"
                              hlds__assertion__succeeded = parse_tree__set_of_var__is_singleton_2_p_0(hlds__assertion__TypeCtorInfo_34_51, hlds__assertion__V_50_50, hlds__assertion__LinkingVar_10);
                            }
#line 282 "assertion.m"
                            if (hlds__assertion__succeeded)
#line 282 "assertion.m"
                              {
#line 6916 "hlds.assertion.c"
                                hlds__assertion__TypeInfo_35_52 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 372 "assertion.m"
                                {
#line 372 "assertion.m"
                                  mercury__assoc_list__from_corresponding_lists_3_p_0(hlds__assertion__TypeInfo_35_52, hlds__assertion__TypeInfo_35_52, *hlds__assertion__VarsA_12, hlds__assertion__VarsB_36, &hlds__assertion__Vars0_13);
                                }
#line 288 "assertion.m"
                                hlds__assertion__V_16_16 = (MR_Word) &hlds__assertion_scalar_common_2[4];
#line 6925 "hlds.assertion.c"
                                hlds__assertion__TypeInfo_21_21 = (MR_Word) &hlds__assertion_scalar_common_2[0];
#line 288 "assertion.m"
                                {
#line 288 "assertion.m"
                                  mercury__list__filter_3_p_0(hlds__assertion__TypeInfo_21_21, hlds__assertion__V_16_16, hlds__assertion__Vars0_13, hlds__assertion__Vars_11);
                                }
#line 293 "assertion.m"
                                hlds__assertion__V_18_18 = (MR_Integer) 3;
#line 289 "assertion.m"
                                {
#line 289 "assertion.m"
                                  mercury__list__length_2_p_0(hlds__assertion__TypeInfo_21_21, *hlds__assertion__Vars_11, &hlds__assertion__V_22_22);
                                }
#line 289 "assertion.m"
                                hlds__assertion__succeeded = (hlds__assertion__V_18_18 == hlds__assertion__V_22_22);
#line 282 "assertion.m"
                              }
#line 282 "assertion.m"
                          }
#line 282 "assertion.m"
                      }
#line 359 "assertion.m"
                  }
#line 360 "assertion.m"
              }
#line 358 "assertion.m"
          }
#line 358 "assertion.m"
      }
#line 282 "assertion.m"
    return hlds__assertion__succeeded;
#line 282 "assertion.m"
  }
#line 278 "assertion.m"
}

#line 260 "assertion.m"
static void MR_CALL 
hlds__assertion__reorder_4_p_0_1(
#line 260 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 260 "assertion.m"
{
#line 260 "assertion.m"
  {
#line 260 "assertion.m"
    struct hlds__assertion__reorder_4_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__reorder_4_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 262 "assertion.m"
    {
#line 262 "assertion.m"
      mercury__list__perm_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__TypeCtorInfo_13_13, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__QCalls_2, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__RHSCalls_4, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__cont, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__cont_env_ptr);
    }
#line 260 "assertion.m"
  }
#line 260 "assertion.m"
}

#line 263 "assertion.m"
static void MR_CALL 
hlds__assertion__reorder_4_p_0_2(
#line 263 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 263 "assertion.m"
{
#line 263 "assertion.m"
  {
#line 263 "assertion.m"
    struct hlds__assertion__reorder_4_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__reorder_4_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 265 "assertion.m"
    {
#line 265 "assertion.m"
      mercury__list__perm_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__TypeCtorInfo_14_14, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__QCalls_2, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__LHSCalls_3, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__cont, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__cont_env_ptr);
    }
#line 263 "assertion.m"
  }
#line 263 "assertion.m"
}

#line 257 "assertion.m"
static void MR_CALL 
hlds__assertion__reorder_4_p_0(
#line 257 "assertion.m"
  MR_Word hlds__assertion__PCalls_1,
#line 257 "assertion.m"
  MR_Word hlds__assertion__QCalls_2,
#line 257 "assertion.m"
  MR_Word * hlds__assertion__LHSCalls_3,
#line 257 "assertion.m"
  MR_Word * hlds__assertion__RHSCalls_4,
#line 257 "assertion.m"
  MR_Cont hlds__assertion__cont,
#line 257 "assertion.m"
  void * hlds__assertion__cont_env_ptr)
#line 257 "assertion.m"
{
#line 257 "assertion.m"
  {
#line 257 "assertion.m"
    struct hlds__assertion__reorder_4_p_0_env_0_s hlds__assertion__env;

#line 257 "assertion.m"
    (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__QCalls_2 = hlds__assertion__QCalls_2;
#line 257 "assertion.m"
    (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__LHSCalls_3 = hlds__assertion__LHSCalls_3;
#line 257 "assertion.m"
    (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__RHSCalls_4 = hlds__assertion__RHSCalls_4;
#line 257 "assertion.m"
    (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__cont = hlds__assertion__cont;
#line 257 "assertion.m"
    (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__cont_env_ptr = hlds__assertion__cont_env_ptr;
#line 260 "assertion.m"
    {
#line 260 "assertion.m"
      MR_bool hlds__assertion__succeeded;

#line 7043 "hlds.assertion.c"
      (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 261 "assertion.m"
      {
#line 261 "assertion.m"
        mercury__list__perm_2_p_0((hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__TypeCtorInfo_13_13, hlds__assertion__PCalls_1, (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__LHSCalls_3, hlds__assertion__reorder_4_p_0_1, &hlds__assertion__env);
      }
#line 7050 "hlds.assertion.c"
      (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 264 "assertion.m"
      {
#line 264 "assertion.m"
        mercury__list__perm_2_p_0((hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__TypeCtorInfo_14_14, hlds__assertion__PCalls_1, (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__RHSCalls_4, hlds__assertion__reorder_4_p_0_2, &hlds__assertion__env);
      }
#line 260 "assertion.m"
    }
#line 257 "assertion.m"
  }
#line 257 "assertion.m"
}

#line 250 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__associative_5_p_0_6(
#line 250 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 250 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1)
#line 250 "assertion.m"
{
#line 250 "assertion.m"
  {
#line 250 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 250 "assertion.m"
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

#line 250 "assertion.m"
    {
#line 250 "assertion.m"
      hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__associative__250__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 3))), ((MR_Word) hlds__assertion__wrapper_arg_1));
    }
#line 250 "assertion.m"
    return hlds__assertion__succeeded;
#line 250 "assertion.m"
  }
#line 250 "assertion.m"
}

#line 248 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__associative_5_p_0_5(
#line 248 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 248 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1)
#line 248 "assertion.m"
{
#line 248 "assertion.m"
  {
#line 248 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 248 "assertion.m"
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

#line 248 "assertion.m"
    {
#line 248 "assertion.m"
      hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__associative__248__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 3))), ((MR_Word) hlds__assertion__wrapper_arg_1));
    }
#line 248 "assertion.m"
    return hlds__assertion__succeeded;
#line 248 "assertion.m"
  }
#line 248 "assertion.m"
}

#line 246 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__associative_5_p_0_4(
#line 246 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 246 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1)
#line 246 "assertion.m"
{
#line 246 "assertion.m"
  {
#line 246 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 246 "assertion.m"
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

#line 246 "assertion.m"
    {
#line 246 "assertion.m"
      hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__associative__246__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 3))), ((MR_Word) hlds__assertion__wrapper_arg_1));
    }
#line 246 "assertion.m"
    return hlds__assertion__succeeded;
#line 246 "assertion.m"
  }
#line 246 "assertion.m"
}

#line 229 "assertion.m"
static void MR_CALL 
hlds__assertion__associative_5_p_0_1(
#line 229 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 229 "assertion.m"
{
#line 229 "assertion.m"
  {
#line 229 "assertion.m"
    struct hlds__assertion__associative_5_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__associative_5_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 229 "assertion.m"
    MR_builtin_longjmp((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__commit_0, 1);
#line 229 "assertion.m"
  }
#line 229 "assertion.m"
}

#line 229 "assertion.m"
static void MR_CALL 
hlds__assertion__associative_5_p_0_3(
#line 229 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 229 "assertion.m"
{
#line 229 "assertion.m"
  {
#line 229 "assertion.m"
    struct hlds__assertion__associative_5_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__associative_5_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 229 "assertion.m"
    {
#line 247 "assertion.m"
      MR_Word hlds__assertion___AB_30;
#line 249 "assertion.m"
      MR_Word hlds__assertion___A_31;
#line 251 "assertion.m"
      MR_Word hlds__assertion___B_32;

#line 242 "assertion.m"
      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 242 "assertion.m"
      if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 242 "assertion.m"
        {
#line 242 "assertion.m"
          {
#line 242 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_34_34, (MR_Integer) 0)));
#line 242 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_34_34, (MR_Integer) 1)));
#line 242 "assertion.m"
          }
#line 229 "assertion.m"
          {
#line 242 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_35_35, (MR_Integer) 0)));
#line 242 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_35_35, (MR_Integer) 1)));
#line 242 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__A_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_36_36, (MR_Integer) 0)));
#line 242 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_36_36, (MR_Integer) 1)));
#line 7212 "hlds.assertion.c"
            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_88_88 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 242 "assertion.m"
            {
#line 242 "assertion.m"
              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_88_88, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AB_16)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_75_75)));
            }
#line 229 "assertion.m"
            if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 229 "assertion.m"
              {
#line 242 "assertion.m"
                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__B_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_37_37, (MR_Integer) 0)));
#line 242 "assertion.m"
                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_37_37, (MR_Integer) 1)));
#line 7227 "hlds.assertion.c"
                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_89_89 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 242 "assertion.m"
                {
#line 242 "assertion.m"
                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_89_89, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__A_23)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_76_76)));
                }
#line 229 "assertion.m"
                if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 229 "assertion.m"
                  {
#line 242 "assertion.m"
                    (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 242 "assertion.m"
                    if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 242 "assertion.m"
                      {
#line 242 "assertion.m"
                        {
#line 242 "assertion.m"
                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_38_38, (MR_Integer) 0)));
#line 242 "assertion.m"
                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_38_38, (MR_Integer) 1)));
#line 242 "assertion.m"
                        }
#line 229 "assertion.m"
                        {
#line 242 "assertion.m"
                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_39_39, (MR_Integer) 0)));
#line 242 "assertion.m"
                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_39_39, (MR_Integer) 1)));
#line 242 "assertion.m"
                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_40_40, (MR_Integer) 0)));
#line 242 "assertion.m"
                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__C_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_40_40, (MR_Integer) 1)));
#line 7262 "hlds.assertion.c"
                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_90_90 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 242 "assertion.m"
                          {
#line 242 "assertion.m"
                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_90_90, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__B_24)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_77_77)));
                          }
#line 229 "assertion.m"
                          if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 229 "assertion.m"
                            {
#line 242 "assertion.m"
                              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_41_41, (MR_Integer) 0)));
#line 242 "assertion.m"
                              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_41_41, (MR_Integer) 1)));
#line 7277 "hlds.assertion.c"
                              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_91_91 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 242 "assertion.m"
                              {
#line 242 "assertion.m"
                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_91_91, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__C_25)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_78_78)));
                              }
#line 229 "assertion.m"
                              if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 229 "assertion.m"
                                {
#line 7288 "hlds.assertion.c"
                                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_92_92 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 242 "assertion.m"
                                  {
#line 242 "assertion.m"
                                    (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_92_92, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__BC_19)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_79_79)));
                                  }
#line 229 "assertion.m"
                                  if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 229 "assertion.m"
                                    {
#line 243 "assertion.m"
                                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 243 "assertion.m"
                                      if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 243 "assertion.m"
                                        {
#line 243 "assertion.m"
                                          {
#line 243 "assertion.m"
                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_42_42, (MR_Integer) 0)));
#line 243 "assertion.m"
                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_42_42, (MR_Integer) 1)));
#line 243 "assertion.m"
                                          }
#line 229 "assertion.m"
                                          {
#line 7315 "hlds.assertion.c"
                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_93_93 = (MR_Word) &hlds__assertion_scalar_common_1[2];
#line 243 "assertion.m"
                                            {
#line 243 "assertion.m"
                                              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_93_93, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_46_46)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_80_80)));
                                            }
#line 229 "assertion.m"
                                            if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 229 "assertion.m"
                                              {
#line 243 "assertion.m"
                                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_43_43, (MR_Integer) 0)));
#line 243 "assertion.m"
                                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_43_43, (MR_Integer) 1)));
#line 243 "assertion.m"
                                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_44_44, (MR_Integer) 0)));
#line 243 "assertion.m"
                                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__ABC_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_44_44, (MR_Integer) 1)));
#line 7334 "hlds.assertion.c"
                                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_94_94 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 243 "assertion.m"
                                                {
#line 243 "assertion.m"
                                                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_94_94, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AB_16)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_81_81)));
                                                }
#line 229 "assertion.m"
                                                if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 229 "assertion.m"
                                                  {
#line 243 "assertion.m"
                                                    (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_45_45, (MR_Integer) 0)));
#line 243 "assertion.m"
                                                    (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_45_45, (MR_Integer) 1)));
#line 7349 "hlds.assertion.c"
                                                    (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_95_95 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 243 "assertion.m"
                                                    {
#line 243 "assertion.m"
                                                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_95_95, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__BC_19)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_82_82)));
                                                    }
#line 229 "assertion.m"
                                                    if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 229 "assertion.m"
                                                      {
#line 7360 "hlds.assertion.c"
                                                        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_96_96 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 243 "assertion.m"
                                                        {
#line 243 "assertion.m"
                                                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_96_96, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__ABC_26)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_83_83)));
                                                        }
#line 229 "assertion.m"
                                                        if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 229 "assertion.m"
                                                          {
#line 7371 "hlds.assertion.c"
                                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_73_73 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 245 "assertion.m"
                                                            {
#line 245 "assertion.m"
                                                              mercury__assoc_list__from_corresponding_lists_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_73_73, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_73_73, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Vs_18, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__CallVars_9, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AssocList_27);
                                                            }
#line 247 "assertion.m"
                                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 246 "assertion.m"
                                                            {
#line 246 "assertion.m"
                                                              MR_Word base;
#line 246 "assertion.m"
                                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 246 "assertion.m"
                                                              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_47_47 = base;
#line 246 "assertion.m"
                                                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&hlds__assertion_scalar_common_5[0]));
#line 246 "assertion.m"
                                                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__associative_5_p_0_4));
#line 246 "assertion.m"
                                                              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 246 "assertion.m"
                                                              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AB_16));
#line 246 "assertion.m"
                                                            }
#line 246 "assertion.m"
                                                            {
#line 246 "assertion.m"
                                                              mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_71_71, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_47_47, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AssocList_27, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_48_48);
                                                            }
#line 247 "assertion.m"
                                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_48_48)) == (MR_mktag((MR_Integer) 1)));
#line 247 "assertion.m"
                                                            if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 247 "assertion.m"
                                                              {
#line 247 "assertion.m"
                                                                {
#line 247 "assertion.m"
                                                                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_48_48, (MR_Integer) 0)));
#line 247 "assertion.m"
                                                                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_48_48, (MR_Integer) 1)));
#line 247 "assertion.m"
                                                                }
#line 229 "assertion.m"
                                                                {
#line 7419 "hlds.assertion.c"
                                                                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_98_98 = (MR_Word) &hlds__assertion_scalar_common_1[3];
#line 247 "assertion.m"
                                                                  {
#line 247 "assertion.m"
                                                                    (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_98_98, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_51_51)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_84_84)));
                                                                  }
#line 229 "assertion.m"
                                                                  if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 229 "assertion.m"
                                                                    {
#line 247 "assertion.m"
                                                                      hlds__assertion___AB_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_50_50, (MR_Integer) 0)));
#line 247 "assertion.m"
                                                                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__OutputVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_50_50, (MR_Integer) 1)));
#line 249 "assertion.m"
                                                                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_56_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 248 "assertion.m"
                                                                      {
#line 248 "assertion.m"
                                                                        MR_Word base;
#line 248 "assertion.m"
                                                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 248 "assertion.m"
                                                                        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_52_52 = base;
#line 248 "assertion.m"
                                                                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&hlds__assertion_scalar_common_5[0]));
#line 248 "assertion.m"
                                                                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__associative_5_p_0_5));
#line 248 "assertion.m"
                                                                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 248 "assertion.m"
                                                                        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__A_23));
#line 248 "assertion.m"
                                                                      }
#line 248 "assertion.m"
                                                                      {
#line 248 "assertion.m"
                                                                        mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_71_71, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_52_52, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AssocList_27, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_53_53);
                                                                      }
#line 249 "assertion.m"
                                                                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_53_53)) == (MR_mktag((MR_Integer) 1)));
#line 249 "assertion.m"
                                                                      if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 249 "assertion.m"
                                                                        {
#line 249 "assertion.m"
                                                                          {
#line 249 "assertion.m"
                                                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_53_53, (MR_Integer) 0)));
#line 249 "assertion.m"
                                                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_53_53, (MR_Integer) 1)));
#line 249 "assertion.m"
                                                                          }
#line 229 "assertion.m"
                                                                          {
#line 7475 "hlds.assertion.c"
                                                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_100_100 = (MR_Word) &hlds__assertion_scalar_common_1[3];
#line 249 "assertion.m"
                                                                            {
#line 249 "assertion.m"
                                                                              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_100_100, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_56_56)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_85_85)));
                                                                            }
#line 229 "assertion.m"
                                                                            if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 229 "assertion.m"
                                                                              {
#line 249 "assertion.m"
                                                                                hlds__assertion___A_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_55_55, (MR_Integer) 0)));
#line 249 "assertion.m"
                                                                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__CallVarA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_55_55, (MR_Integer) 1)));
#line 251 "assertion.m"
                                                                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_61_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 250 "assertion.m"
                                                                                {
#line 250 "assertion.m"
                                                                                  MR_Word base;
#line 250 "assertion.m"
                                                                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 250 "assertion.m"
                                                                                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_57_57 = base;
#line 250 "assertion.m"
                                                                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&hlds__assertion_scalar_common_5[0]));
#line 250 "assertion.m"
                                                                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__associative_5_p_0_6));
#line 250 "assertion.m"
                                                                                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 250 "assertion.m"
                                                                                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__B_24));
#line 250 "assertion.m"
                                                                                }
#line 250 "assertion.m"
                                                                                {
#line 250 "assertion.m"
                                                                                  mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_71_71, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_57_57, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AssocList_27, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_58_58);
                                                                                }
#line 251 "assertion.m"
                                                                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_58_58)) == (MR_mktag((MR_Integer) 1)));
#line 251 "assertion.m"
                                                                                if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 251 "assertion.m"
                                                                                  {
#line 251 "assertion.m"
                                                                                    {
#line 251 "assertion.m"
                                                                                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_58_58, (MR_Integer) 0)));
#line 251 "assertion.m"
                                                                                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_58_58, (MR_Integer) 1)));
#line 251 "assertion.m"
                                                                                    }
#line 229 "assertion.m"
                                                                                    {
#line 7531 "hlds.assertion.c"
                                                                                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_102_102 = (MR_Word) &hlds__assertion_scalar_common_1[3];
#line 251 "assertion.m"
                                                                                      {
#line 251 "assertion.m"
                                                                                        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_102_102, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_61_61)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_86_86)));
                                                                                      }
#line 229 "assertion.m"
                                                                                      if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 229 "assertion.m"
                                                                                        {
#line 251 "assertion.m"
                                                                                          hlds__assertion___B_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_60_60, (MR_Integer) 0)));
#line 251 "assertion.m"
                                                                                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__CallVarB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_60_60, (MR_Integer) 1)));
#line 229 "assertion.m"
                                                                                          {
#line 229 "assertion.m"
                                                                                            MR_Word base;
#line 229 "assertion.m"
                                                                                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 229 "assertion.m"
                                                                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_33_33 = base;
#line 229 "assertion.m"
                                                                                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__CallVarA_10));
#line 229 "assertion.m"
                                                                                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__CallVarB_11));
#line 229 "assertion.m"
                                                                                          }
#line 229 "assertion.m"
                                                                                          {
#line 229 "assertion.m"
                                                                                            MR_Word base;
#line 229 "assertion.m"
                                                                                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 229 "assertion.m"
                                                                                            *((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__HeadVar__5_5) = base;
#line 229 "assertion.m"
                                                                                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_33_33));
#line 229 "assertion.m"
                                                                                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__OutputVar_12));
#line 229 "assertion.m"
                                                                                          }
#line 229 "assertion.m"
                                                                                          {
#line 229 "assertion.m"
                                                                                            hlds__assertion__associative_5_p_0_1(hlds__assertion__env_ptr);
                                                                                          }
#line 229 "assertion.m"
                                                                                        }
#line 229 "assertion.m"
                                                                                    }
#line 251 "assertion.m"
                                                                                  }
#line 229 "assertion.m"
                                                                              }
#line 229 "assertion.m"
                                                                          }
#line 249 "assertion.m"
                                                                        }
#line 229 "assertion.m"
                                                                    }
#line 229 "assertion.m"
                                                                }
#line 247 "assertion.m"
                                                              }
#line 229 "assertion.m"
                                                          }
#line 229 "assertion.m"
                                                      }
#line 229 "assertion.m"
                                                  }
#line 229 "assertion.m"
                                              }
#line 229 "assertion.m"
                                          }
#line 243 "assertion.m"
                                        }
#line 229 "assertion.m"
                                    }
#line 229 "assertion.m"
                                }
#line 229 "assertion.m"
                            }
#line 229 "assertion.m"
                        }
#line 242 "assertion.m"
                      }
#line 229 "assertion.m"
                  }
#line 229 "assertion.m"
              }
#line 229 "assertion.m"
          }
#line 242 "assertion.m"
        }
#line 229 "assertion.m"
    }
#line 229 "assertion.m"
  }
#line 229 "assertion.m"
}

#line 229 "assertion.m"
static void MR_CALL 
hlds__assertion__associative_5_p_0_2(
#line 229 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 229 "assertion.m"
{
#line 229 "assertion.m"
  {
#line 229 "assertion.m"
    struct hlds__assertion__associative_5_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__associative_5_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 229 "assertion.m"
    {
#line 233 "assertion.m"
      MR_Word hlds__assertion__V_21_21;

#line 231 "assertion.m"
      {
#line 231 "assertion.m"
        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = hlds__assertion__process_one_side_6_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__LHSCalls_13, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__UniversiallyQuantifiedVars_8, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__PredId_15, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AB_16, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__PairsL_17, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Vs_18);
      }
#line 229 "assertion.m"
      if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 229 "assertion.m"
        {
#line 233 "assertion.m"
          {
#line 233 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = hlds__assertion__process_one_side_6_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__RHSCalls_14, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__UniversiallyQuantifiedVars_8, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_74_74, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__BC_19, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__PairsR_20, &hlds__assertion__V_21_21);
          }
#line 229 "assertion.m"
          if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 229 "assertion.m"
            {
#line 233 "assertion.m"
              {
#line 233 "assertion.m"
                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__PredId_15, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_74_74);
              }
#line 229 "assertion.m"
              if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 229 "assertion.m"
                {
#line 7678 "hlds.assertion.c"
                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_71_71 = (MR_Word) &hlds__assertion_scalar_common_2[0];
#line 241 "assertion.m"
                  {
#line 241 "assertion.m"
                    mercury__assoc_list__from_corresponding_lists_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_71_71, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_71_71, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__PairsL_17, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__PairsR_20, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Pairs_22);
                  }
#line 243 "assertion.m"
                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 7687 "hlds.assertion.c"
                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_72_72 = (MR_Word) &hlds__assertion_scalar_common_2[1];
#line 242 "assertion.m"
                  {
#line 242 "assertion.m"
                    mercury__list__perm_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_72_72, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Pairs_22, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_34_34, hlds__assertion__associative_5_p_0_3, hlds__assertion__env_ptr);
                  }
#line 229 "assertion.m"
                }
#line 229 "assertion.m"
            }
#line 229 "assertion.m"
        }
#line 229 "assertion.m"
    }
#line 229 "assertion.m"
  }
#line 229 "assertion.m"
}

#line 229 "assertion.m"
static void MR_CALL 
hlds__assertion__associative_5_p_0_7(
#line 229 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 229 "assertion.m"
{
#line 229 "assertion.m"
  {
#line 229 "assertion.m"
    struct hlds__assertion__associative_5_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__associative_5_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 229 "assertion.m"
    if (MR_builtin_setjmp((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__commit_0) == 0)
#line 229 "assertion.m"
      {
#line 230 "assertion.m"
        {
#line 230 "assertion.m"
          hlds__assertion__reorder_4_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__PCalls_6, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__QCalls_7, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__LHSCalls_13, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__RHSCalls_14, hlds__assertion__associative_5_p_0_2, hlds__assertion__env_ptr);
        }
#line 229 "assertion.m"
        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = MR_FALSE;
#line 229 "assertion.m"
      }
#line 229 "assertion.m"
    else
#line 229 "assertion.m"
      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = MR_TRUE;
#line 229 "assertion.m"
  }
#line 229 "assertion.m"
}

#line 224 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__associative_5_p_0(
#line 224 "assertion.m"
  MR_Word hlds__assertion__PCalls_6,
#line 224 "assertion.m"
  MR_Word hlds__assertion__QCalls_7,
#line 224 "assertion.m"
  MR_Word hlds__assertion__UniversiallyQuantifiedVars_8,
#line 224 "assertion.m"
  MR_Word hlds__assertion__CallVars_9,
#line 224 "assertion.m"
  MR_Word * hlds__assertion__HeadVar__5_5)
#line 224 "assertion.m"
{
#line 224 "assertion.m"
  {
#line 224 "assertion.m"
    struct hlds__assertion__associative_5_p_0_env_0_s hlds__assertion__env;

#line 224 "assertion.m"
    (hlds__assertion__env).hlds__assertion__associative_5_p_0_env_0__PCalls_6 = hlds__assertion__PCalls_6;
#line 224 "assertion.m"
    (hlds__assertion__env).hlds__assertion__associative_5_p_0_env_0__QCalls_7 = hlds__assertion__QCalls_7;
#line 224 "assertion.m"
    (hlds__assertion__env).hlds__assertion__associative_5_p_0_env_0__UniversiallyQuantifiedVars_8 = hlds__assertion__UniversiallyQuantifiedVars_8;
#line 224 "assertion.m"
    (hlds__assertion__env).hlds__assertion__associative_5_p_0_env_0__CallVars_9 = hlds__assertion__CallVars_9;
#line 224 "assertion.m"
    (hlds__assertion__env).hlds__assertion__associative_5_p_0_env_0__HeadVar__5_5 = hlds__assertion__HeadVar__5_5;
#line 229 "assertion.m"
    {
#line 229 "assertion.m"
      hlds__assertion__associative_5_p_0_7(&hlds__assertion__env);
    }
#line 229 "assertion.m"
    return (hlds__assertion__env).hlds__assertion__associative_5_p_0_env_0__succeeded;
#line 224 "assertion.m"
  }
#line 224 "assertion.m"
}

#line 182 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__commutative_var_ordering_2_6_p_0(
#line 182 "assertion.m"
  MR_Word hlds__assertion__VarP_7,
#line 182 "assertion.m"
  MR_Word hlds__assertion__VarQ_8,
#line 182 "assertion.m"
  MR_Word hlds__assertion__HeadVar__3_3,
#line 182 "assertion.m"
  MR_Word hlds__assertion__HeadVar__4_4,
#line 182 "assertion.m"
  MR_Word hlds__assertion__HeadVar__5_5,
#line 182 "assertion.m"
  MR_Word * hlds__assertion__CallVarB_15)
#line 182 "assertion.m"
{
#line 187 "assertion.m"
  while (MR_TRUE)
#line 187 "assertion.m"
    {
#line 187 "assertion.m"
      /* tailcall optimized into a loop */
#line 187 "assertion.m"
      {
#line 187 "assertion.m"
        MR_bool hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 187 "assertion.m"
        MR_Word hlds__assertion__P_9;
#line 187 "assertion.m"
        MR_Word hlds__assertion__Ps_10;
#line 187 "assertion.m"
        MR_Word hlds__assertion__Q_11;
#line 187 "assertion.m"
        MR_Word hlds__assertion__Qs_12;
#line 187 "assertion.m"
        MR_Word hlds__assertion__V_13;
#line 187 "assertion.m"
        MR_Word hlds__assertion__Vs_14;
#line 188 "assertion.m"
        MR_Word hlds__assertion__TypeInfo_16_16;

#line 186 "assertion.m"
        if (hlds__assertion__succeeded)
#line 186 "assertion.m"
          {
#line 186 "assertion.m"
            hlds__assertion__P_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__3_3, (MR_Integer) 0)));
#line 186 "assertion.m"
            hlds__assertion__Ps_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__3_3, (MR_Integer) 1)));
#line 186 "assertion.m"
            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 186 "assertion.m"
            if (hlds__assertion__succeeded)
#line 186 "assertion.m"
              {
#line 186 "assertion.m"
                hlds__assertion__Q_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__4_4, (MR_Integer) 0)));
#line 186 "assertion.m"
                hlds__assertion__Qs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__4_4, (MR_Integer) 1)));
#line 186 "assertion.m"
                hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__5_5)) == (MR_mktag((MR_Integer) 1)));
#line 186 "assertion.m"
                if (hlds__assertion__succeeded)
#line 186 "assertion.m"
                  {
#line 186 "assertion.m"
                    hlds__assertion__V_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__5_5, (MR_Integer) 0)));
#line 186 "assertion.m"
                    hlds__assertion__Vs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__5_5, (MR_Integer) 1)));
#line 7853 "hlds.assertion.c"
                    hlds__assertion__TypeInfo_16_16 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 188 "assertion.m"
                    {
#line 188 "assertion.m"
                      hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_16_16, ((MR_Box) (hlds__assertion__P_9)), ((MR_Box) (hlds__assertion__Q_11)));
                    }
#line 188 "assertion.m"
                    if (hlds__assertion__succeeded)
#line 189 "assertion.m"
                      {
#line 189 "assertion.m"
                        /* direct tailcall eliminated */
#line 189 "assertion.m"
                        {
#line 189 "assertion.m"
                          MR_Word hlds__assertion__HeadVar__3__tmp_copy_3 = hlds__assertion__Ps_10;
#line 189 "assertion.m"
                          MR_Word hlds__assertion__HeadVar__4__tmp_copy_4 = hlds__assertion__Qs_12;
#line 189 "assertion.m"
                          MR_Word hlds__assertion__HeadVar__5__tmp_copy_5 = hlds__assertion__Vs_14;

#line 189 "assertion.m"
                          hlds__assertion__HeadVar__5_5 = hlds__assertion__HeadVar__5__tmp_copy_5;
#line 189 "assertion.m"
                          hlds__assertion__HeadVar__4_4 = hlds__assertion__HeadVar__4__tmp_copy_4;
#line 189 "assertion.m"
                          hlds__assertion__HeadVar__3_3 = hlds__assertion__HeadVar__3__tmp_copy_3;
#line 189 "assertion.m"
                        }
#line 189 "assertion.m"
                        continue;
#line 189 "assertion.m"
                      }
#line 188 "assertion.m"
                    else
#line 191 "assertion.m"
                      {
#line 191 "assertion.m"
                        MR_Word hlds__assertion__TypeInfo_18_18;
#line 191 "assertion.m"
                        MR_Word hlds__assertion__TypeInfo_19_19;

#line 191 "assertion.m"
                        *hlds__assertion__CallVarB_15 = hlds__assertion__V_13;
#line 192 "assertion.m"
                        {
#line 192 "assertion.m"
                          hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__P_9)), ((MR_Box) (hlds__assertion__VarQ_8)));
                        }
#line 191 "assertion.m"
                        if (hlds__assertion__succeeded)
#line 191 "assertion.m"
                          {
#line 7907 "hlds.assertion.c"
                            hlds__assertion__TypeInfo_18_18 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 193 "assertion.m"
                            {
#line 193 "assertion.m"
                              hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_18_18, ((MR_Box) (hlds__assertion__Q_11)), ((MR_Box) (hlds__assertion__VarP_7)));
                            }
#line 191 "assertion.m"
                            if (hlds__assertion__succeeded)
#line 191 "assertion.m"
                              {
#line 7918 "hlds.assertion.c"
                                hlds__assertion__TypeInfo_19_19 = (MR_Word) &hlds__assertion_scalar_common_1[1];
#line 194 "assertion.m"
                                {
#line 194 "assertion.m"
                                  hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_19_19, ((MR_Box) (hlds__assertion__Ps_10)), ((MR_Box) (hlds__assertion__Qs_12)));
                                }
#line 191 "assertion.m"
                              }
#line 191 "assertion.m"
                          }
#line 191 "assertion.m"
                      }
#line 186 "assertion.m"
                  }
#line 186 "assertion.m"
              }
#line 186 "assertion.m"
          }
#line 187 "assertion.m"
        return hlds__assertion__succeeded;
#line 187 "assertion.m"
      }
#line 187 "assertion.m"
      break;
#line 187 "assertion.m"
    }
#line 182 "assertion.m"
}

#line 171 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__commutative_var_ordering_4_p_0(
#line 171 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 171 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2,
#line 171 "assertion.m"
  MR_Word hlds__assertion__HeadVar__3_3,
#line 171 "assertion.m"
  MR_Word * hlds__assertion__CommutativeVars_11)
#line 171 "assertion.m"
{
#line 174 "assertion.m"
  while (MR_TRUE)
#line 174 "assertion.m"
    {
#line 174 "assertion.m"
      /* tailcall optimized into a loop */
#line 174 "assertion.m"
      {
#line 174 "assertion.m"
        MR_bool hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 174 "assertion.m"
        MR_Word hlds__assertion__P_5;
#line 174 "assertion.m"
        MR_Word hlds__assertion__Ps_6;
#line 174 "assertion.m"
        MR_Word hlds__assertion__Q_7;
#line 174 "assertion.m"
        MR_Word hlds__assertion__Qs_8;
#line 174 "assertion.m"
        MR_Word hlds__assertion__V_9;
#line 174 "assertion.m"
        MR_Word hlds__assertion__Vs_10;
#line 175 "assertion.m"
        MR_Word hlds__assertion__TypeInfo_13_13;

#line 174 "assertion.m"
        if (hlds__assertion__succeeded)
#line 174 "assertion.m"
          {
#line 174 "assertion.m"
            hlds__assertion__P_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
#line 174 "assertion.m"
            hlds__assertion__Ps_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
#line 174 "assertion.m"
            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 174 "assertion.m"
            if (hlds__assertion__succeeded)
#line 174 "assertion.m"
              {
#line 174 "assertion.m"
                hlds__assertion__Q_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)));
#line 174 "assertion.m"
                hlds__assertion__Qs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 1)));
#line 174 "assertion.m"
                hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 174 "assertion.m"
                if (hlds__assertion__succeeded)
#line 174 "assertion.m"
                  {
#line 174 "assertion.m"
                    hlds__assertion__V_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__3_3, (MR_Integer) 0)));
#line 174 "assertion.m"
                    hlds__assertion__Vs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__3_3, (MR_Integer) 1)));
#line 8014 "hlds.assertion.c"
                    hlds__assertion__TypeInfo_13_13 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 175 "assertion.m"
                    {
#line 175 "assertion.m"
                      hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_13_13, ((MR_Box) (hlds__assertion__P_5)), ((MR_Box) (hlds__assertion__Q_7)));
                    }
#line 175 "assertion.m"
                    if (hlds__assertion__succeeded)
#line 176 "assertion.m"
                      {
#line 176 "assertion.m"
                        /* direct tailcall eliminated */
#line 176 "assertion.m"
                        {
#line 176 "assertion.m"
                          MR_Word hlds__assertion__HeadVar__1__tmp_copy_1 = hlds__assertion__Ps_6;
#line 176 "assertion.m"
                          MR_Word hlds__assertion__HeadVar__2__tmp_copy_2 = hlds__assertion__Qs_8;
#line 176 "assertion.m"
                          MR_Word hlds__assertion__HeadVar__3__tmp_copy_3 = hlds__assertion__Vs_10;

#line 176 "assertion.m"
                          hlds__assertion__HeadVar__3_3 = hlds__assertion__HeadVar__3__tmp_copy_3;
#line 176 "assertion.m"
                          hlds__assertion__HeadVar__2_2 = hlds__assertion__HeadVar__2__tmp_copy_2;
#line 176 "assertion.m"
                          hlds__assertion__HeadVar__1_1 = hlds__assertion__HeadVar__1__tmp_copy_1;
#line 176 "assertion.m"
                        }
#line 176 "assertion.m"
                        continue;
#line 176 "assertion.m"
                      }
#line 175 "assertion.m"
                    else
#line 178 "assertion.m"
                      {
#line 178 "assertion.m"
                        MR_Word hlds__assertion__CallVarB_12;

#line 178 "assertion.m"
                        {
#line 178 "assertion.m"
                          hlds__assertion__succeeded = hlds__assertion__commutative_var_ordering_2_6_p_0(hlds__assertion__P_5, hlds__assertion__Q_7, hlds__assertion__Ps_6, hlds__assertion__Qs_8, hlds__assertion__Vs_10, &hlds__assertion__CallVarB_12);
                        }
#line 178 "assertion.m"
                        if (hlds__assertion__succeeded)
#line 178 "assertion.m"
                          {
#line 179 "assertion.m"
                            {
#line 179 "assertion.m"
                              MR_Word base;
#line 179 "assertion.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 179 "assertion.m"
                              *hlds__assertion__CommutativeVars_11 = base;
#line 179 "assertion.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__assertion__V_9));
#line 179 "assertion.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__CallVarB_12));
#line 179 "assertion.m"
                            }
#line 179 "assertion.m"
                            hlds__assertion__succeeded = MR_TRUE;
#line 178 "assertion.m"
                          }
#line 178 "assertion.m"
                      }
#line 174 "assertion.m"
                  }
#line 174 "assertion.m"
              }
#line 174 "assertion.m"
          }
#line 174 "assertion.m"
        return hlds__assertion__succeeded;
#line 174 "assertion.m"
      }
#line 174 "assertion.m"
      break;
#line 174 "assertion.m"
    }
#line 171 "assertion.m"
}

#line 130 "assertion.m"
void MR_CALL 
hlds__assertion__normalise_goal_2_p_0(
#line 130 "assertion.m"
  MR_Word hlds__assertion__Goal0_3,
#line 130 "assertion.m"
  MR_Word * hlds__assertion__Goal_4)
#line 130 "assertion.m"
{
#line 687 "assertion.m"
  {
#line 687 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 687 "assertion.m"
    MR_Word hlds__assertion__GoalExpr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal0_3, (MR_Integer) 0)));
#line 687 "assertion.m"
    MR_Word hlds__assertion__GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal0_3, (MR_Integer) 1)));
#line 687 "assertion.m"
    MR_Word hlds__assertion__GoalExpr_7;

#line 689 "assertion.m"
    {
#line 689 "assertion.m"
      hlds__assertion__normalise_goal_expr_2_p_0(hlds__assertion__GoalExpr0_5, &hlds__assertion__GoalExpr_7);
    }
#line 690 "assertion.m"
    {
#line 690 "assertion.m"
      MR_Word base;
#line 690 "assertion.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 690 "assertion.m"
      *hlds__assertion__Goal_4 = base;
#line 690 "assertion.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__assertion__GoalExpr_7));
#line 690 "assertion.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__GoalInfo_6));
#line 690 "assertion.m"
    }
#line 687 "assertion.m"
  }
#line 130 "assertion.m"
}

#line 414 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_5(
#line 414 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 414 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1)
#line 414 "assertion.m"
{
#line 414 "assertion.m"
  {
#line 414 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 414 "assertion.m"
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

#line 414 "assertion.m"
    {
#line 414 "assertion.m"
      hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__predicate_call__415__1_1_p_0(((MR_Word) hlds__assertion__wrapper_arg_1));
    }
#line 414 "assertion.m"
    return hlds__assertion__succeeded;
#line 414 "assertion.m"
  }
#line 414 "assertion.m"
}

#line 411 "assertion.m"
static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_1(
#line 411 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 411 "assertion.m"
{
#line 411 "assertion.m"
  {
#line 411 "assertion.m"
    struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 411 "assertion.m"
    MR_builtin_longjmp((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__commit_0, 1);
#line 411 "assertion.m"
  }
#line 411 "assertion.m"
}

#line 411 "assertion.m"
static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_3(
#line 411 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 411 "assertion.m"
{
#line 411 "assertion.m"
  {
#line 411 "assertion.m"
    struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 411 "assertion.m"
    (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Call_34 = ((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__conv0_Call_34);
#line 411 "assertion.m"
    {
#line 411 "assertion.m"
      hlds__assertion__is_construction_equivalence_assertion_4_p_0_2(hlds__assertion__env_ptr);
    }
#line 411 "assertion.m"
  }
#line 411 "assertion.m"
}

#line 411 "assertion.m"
static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_4(
#line 411 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 411 "assertion.m"
{
#line 411 "assertion.m"
  {
#line 411 "assertion.m"
    struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 414 "assertion.m"
    (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__P_42 = (MR_Word) &hlds__assertion_scalar_common_2[3];
#line 420 "assertion.m"
    (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_64_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 420 "assertion.m"
    {
#line 420 "assertion.m"
      mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeCtorInfo_40_67, (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__P_42, (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Unifications_41, &(hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_69_69);
    }
#line 8237 "hlds.assertion.c"
    (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeInfo_45_72 = (MR_Word) &hlds__assertion_scalar_common_1[4];
#line 420 "assertion.m"
    {
#line 420 "assertion.m"
      (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeInfo_45_72, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_64_64)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_69_69)));
    }
#line 420 "assertion.m"
    if ((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 420 "assertion.m"
      {
#line 420 "assertion.m"
        hlds__assertion__is_construction_equivalence_assertion_4_p_0_1(hlds__assertion__env_ptr);
      }
#line 411 "assertion.m"
  }
#line 411 "assertion.m"
}

#line 411 "assertion.m"
static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_2(
#line 411 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 411 "assertion.m"
{
#line 411 "assertion.m"
  {
#line 411 "assertion.m"
    struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 411 "assertion.m"
    {
#line 412 "assertion.m"
      MR_Word hlds__assertion__V_40_40;
#line 412 "assertion.m"
      MR_Integer hlds__assertion__V_35_35;
#line 412 "assertion.m"
      MR_Word hlds__assertion__V_36_36;
#line 412 "assertion.m"
      MR_Word hlds__assertion__V_37_37;
#line 412 "assertion.m"
      MR_Word hlds__assertion__V_38_38;
#line 412 "assertion.m"
      MR_Word hlds__assertion__V_39_39;

#line 412 "assertion.m"
      (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Call_34, (MR_Integer) 0)));
#line 412 "assertion.m"
      hlds__assertion__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Call_34, (MR_Integer) 1)));
#line 412 "assertion.m"
      (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_61_61)) == (MR_mktag((MR_Integer) 2)));
#line 412 "assertion.m"
      if ((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 412 "assertion.m"
        {
#line 412 "assertion.m"
          {
#line 412 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_61_61, (MR_Integer) 0)));
#line 412 "assertion.m"
            hlds__assertion__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_61_61, (MR_Integer) 1)));
#line 412 "assertion.m"
            hlds__assertion__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_61_61, (MR_Integer) 2)));
#line 412 "assertion.m"
            hlds__assertion__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_61_61, (MR_Integer) 3)));
#line 412 "assertion.m"
            hlds__assertion__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_61_61, (MR_Integer) 4)));
#line 412 "assertion.m"
            hlds__assertion__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_61_61, (MR_Integer) 5)));
#line 412 "assertion.m"
          }
#line 411 "assertion.m"
          {
#line 412 "assertion.m"
            {
#line 412 "assertion.m"
              (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__PredId_8, (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_68_68);
            }
#line 411 "assertion.m"
            if ((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 413 "assertion.m"
              {
#line 413 "assertion.m"
                mercury__list__delete_3_p_1((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeCtorInfo_40_67, (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Goals_32, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Call_34)), &(hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Unifications_41, hlds__assertion__is_construction_equivalence_assertion_4_p_0_4, hlds__assertion__env_ptr);
              }
#line 411 "assertion.m"
          }
#line 412 "assertion.m"
        }
#line 411 "assertion.m"
    }
#line 411 "assertion.m"
  }
#line 411 "assertion.m"
}

#line 411 "assertion.m"
static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_6(
#line 411 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 411 "assertion.m"
{
#line 411 "assertion.m"
  {
#line 411 "assertion.m"
    struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 411 "assertion.m"
    if (MR_builtin_setjmp((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__commit_0) == 0)
#line 411 "assertion.m"
      {
#line 8350 "hlds.assertion.c"
        (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeCtorInfo_40_67 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 411 "assertion.m"
        {
#line 411 "assertion.m"
          mercury__list__member_2_p_1((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeCtorInfo_40_67, &(hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__conv0_Call_34, (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Goals_32, hlds__assertion__is_construction_equivalence_assertion_4_p_0_3, hlds__assertion__env_ptr);
        }
#line 411 "assertion.m"
        (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = MR_FALSE;
#line 411 "assertion.m"
      }
#line 411 "assertion.m"
    else
#line 411 "assertion.m"
      (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = MR_TRUE;
#line 411 "assertion.m"
  }
#line 411 "assertion.m"
}

#line 124 "assertion.m"
MR_bool MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0(
#line 124 "assertion.m"
  MR_Word hlds__assertion__Module_5,
#line 124 "assertion.m"
  MR_Integer hlds__assertion__AssertId_6,
#line 124 "assertion.m"
  MR_Word hlds__assertion__ConsId_7,
#line 124 "assertion.m"
  MR_Word hlds__assertion__PredId_8)
#line 124 "assertion.m"
{
#line 124 "assertion.m"
  {
#line 124 "assertion.m"
    struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s hlds__assertion__env;

#line 124 "assertion.m"
    (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__PredId_8 = hlds__assertion__PredId_8;
#line 377 "assertion.m"
    {
#line 377 "assertion.m"
      MR_Word hlds__assertion__Goal_9;
#line 377 "assertion.m"
      MR_Word hlds__assertion__P_10;
#line 377 "assertion.m"
      MR_Word hlds__assertion__Q_11;
#line 392 "assertion.m"
      MR_Word hlds__assertion__GoalExpr_14;
#line 392 "assertion.m"
      MR_Word hlds__assertion__UnifyRHS_17;
#line 392 "assertion.m"
      MR_Word hlds__assertion__UnqualifiedSymName_21;
#line 392 "assertion.m"
      MR_Integer hlds__assertion__Arity_22;
#line 392 "assertion.m"
      MR_Word hlds__assertion__QualifiedSymName_26;
#line 392 "assertion.m"
      MR_Word hlds__assertion__V_28_28;
#line 392 "assertion.m"
      MR_Integer hlds__assertion__V_29_29;
#line 393 "assertion.m"
      MR_Word hlds__assertion__V_15_15;
#line 394 "assertion.m"
      MR_Word hlds__assertion__V_16_16;
#line 394 "assertion.m"
      MR_Word hlds__assertion__V_18_18;
#line 394 "assertion.m"
      MR_Word hlds__assertion__V_19_19;
#line 394 "assertion.m"
      MR_Word hlds__assertion__V_20_20;
#line 395 "assertion.m"
      MR_Word hlds__assertion__V_24_24;
#line 395 "assertion.m"
      MR_Word hlds__assertion__V_25_25;
#line 395 "assertion.m"
      MR_Word hlds__assertion___TypeCtorA_23;
#line 396 "assertion.m"
      MR_Word hlds__assertion___TypeCtorB_27;

#line 378 "assertion.m"
      {
#line 378 "assertion.m"
        hlds__assertion__assert_id_goal_3_p_0(hlds__assertion__Module_5, hlds__assertion__AssertId_6, &hlds__assertion__Goal_9);
      }
#line 379 "assertion.m"
      {
#line 379 "assertion.m"
        (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = hlds__assertion__goal_is_equivalence_3_p_0(hlds__assertion__Goal_9, &hlds__assertion__P_10, &hlds__assertion__Q_11);
      }
#line 377 "assertion.m"
      if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 377 "assertion.m"
        {
#line 393 "assertion.m"
          hlds__assertion__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_10, (MR_Integer) 0)));
#line 393 "assertion.m"
          hlds__assertion__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_10, (MR_Integer) 1)));
#line 394 "assertion.m"
          (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__assertion__GoalExpr_14)) == (MR_mktag((MR_Integer) 1)));
#line 394 "assertion.m"
          if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 394 "assertion.m"
            {
#line 394 "assertion.m"
              hlds__assertion__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_14, (MR_Integer) 0)));
#line 394 "assertion.m"
              hlds__assertion__UnifyRHS_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_14, (MR_Integer) 1)));
#line 394 "assertion.m"
              hlds__assertion__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_14, (MR_Integer) 2)));
#line 394 "assertion.m"
              hlds__assertion__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_14, (MR_Integer) 3)));
#line 394 "assertion.m"
              hlds__assertion__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_14, (MR_Integer) 4)));
#line 395 "assertion.m"
              (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__assertion__UnifyRHS_17)) == (MR_mktag((MR_Integer) 1)));
#line 395 "assertion.m"
              if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 395 "assertion.m"
                {
#line 395 "assertion.m"
                  hlds__assertion__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRHS_17, (MR_Integer) 0)));
#line 395 "assertion.m"
                  hlds__assertion__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRHS_17, (MR_Integer) 1)));
#line 395 "assertion.m"
                  hlds__assertion__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRHS_17, (MR_Integer) 2)));
#line 395 "assertion.m"
                  (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_28_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_28_28, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 395 "assertion.m"
                  if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 395 "assertion.m"
                    {
#line 395 "assertion.m"
                      hlds__assertion__UnqualifiedSymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_28_28, (MR_Integer) 1)));
#line 395 "assertion.m"
                      hlds__assertion__Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__assertion__V_28_28, (MR_Integer) 2)));
#line 395 "assertion.m"
                      hlds__assertion___TypeCtorA_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_28_28, (MR_Integer) 3)));
#line 396 "assertion.m"
                      (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__assertion__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 396 "assertion.m"
                      if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 396 "assertion.m"
                        {
#line 396 "assertion.m"
                          hlds__assertion__QualifiedSymName_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 1)));
#line 396 "assertion.m"
                          hlds__assertion__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 2)));
#line 396 "assertion.m"
                          hlds__assertion___TypeCtorB_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 3)));
#line 396 "assertion.m"
                          (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = (hlds__assertion__Arity_22 == hlds__assertion__V_29_29);
#line 392 "assertion.m"
                          if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 401 "assertion.m"
                            {
#line 401 "assertion.m"
                              (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(hlds__assertion__UnqualifiedSymName_21, hlds__assertion__QualifiedSymName_26);
                            }
#line 396 "assertion.m"
                        }
#line 395 "assertion.m"
                    }
#line 395 "assertion.m"
                }
#line 394 "assertion.m"
            }
#line 380 "assertion.m"
          if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 410 "assertion.m"
            {
#line 410 "assertion.m"
              MR_Word hlds__assertion__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 0)));
#line 410 "assertion.m"
              MR_Word hlds__assertion__V_60_60;
#line 410 "assertion.m"
              MR_Word hlds__assertion__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 1)));

#line 410 "assertion.m"
              (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_59_59)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_59_59, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 410 "assertion.m"
              if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 410 "assertion.m"
                {
#line 410 "assertion.m"
                  hlds__assertion__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_59_59, (MR_Integer) 1)));
#line 410 "assertion.m"
                  (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Goals_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_59_59, (MR_Integer) 2)));
#line 410 "assertion.m"
                  (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = (hlds__assertion__V_60_60 == (MR_Integer) 0);
#line 410 "assertion.m"
                }
#line 410 "assertion.m"
              if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 411 "assertion.m"
                {
#line 411 "assertion.m"
                  {
#line 411 "assertion.m"
                    hlds__assertion__is_construction_equivalence_assertion_4_p_0_6(&hlds__assertion__env);
                  }
#line 411 "assertion.m"
                }
#line 410 "assertion.m"
              else
#line 422 "assertion.m"
                {
#line 422 "assertion.m"
                  MR_Word hlds__assertion__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 0)));
#line 422 "assertion.m"
                  MR_Word hlds__assertion__V_70_70;
#line 422 "assertion.m"
                  MR_Word hlds__assertion__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 1)));
#line 422 "assertion.m"
                  MR_Integer hlds__assertion__V_53_53;
#line 422 "assertion.m"
                  MR_Word hlds__assertion__V_54_54;
#line 422 "assertion.m"
                  MR_Word hlds__assertion__V_55_55;
#line 422 "assertion.m"
                  MR_Word hlds__assertion__V_56_56;
#line 422 "assertion.m"
                  MR_Word hlds__assertion__V_57_57;

#line 422 "assertion.m"
                  (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_65_65)) == (MR_mktag((MR_Integer) 2)));
#line 422 "assertion.m"
                  if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 422 "assertion.m"
                    {
#line 422 "assertion.m"
                      hlds__assertion__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_65_65, (MR_Integer) 0)));
#line 422 "assertion.m"
                      hlds__assertion__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__V_65_65, (MR_Integer) 1)));
#line 422 "assertion.m"
                      hlds__assertion__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_65_65, (MR_Integer) 2)));
#line 422 "assertion.m"
                      hlds__assertion__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_65_65, (MR_Integer) 3)));
#line 422 "assertion.m"
                      hlds__assertion__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_65_65, (MR_Integer) 4)));
#line 422 "assertion.m"
                      hlds__assertion__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_65_65, (MR_Integer) 5)));
#line 422 "assertion.m"
                      {
#line 422 "assertion.m"
                        (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__PredId_8, hlds__assertion__V_70_70);
                      }
#line 422 "assertion.m"
                    }
#line 422 "assertion.m"
                }
#line 410 "assertion.m"
            }
#line 380 "assertion.m"
          else
#line 383 "assertion.m"
            {
#line 383 "assertion.m"
              MR_Word hlds__assertion__GoalExpr_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 0)));
#line 383 "assertion.m"
              MR_Word hlds__assertion__UnifyRHS_79;
#line 383 "assertion.m"
              MR_Word hlds__assertion__UnqualifiedSymName_83;
#line 383 "assertion.m"
              MR_Integer hlds__assertion__Arity_84;
#line 383 "assertion.m"
              MR_Word hlds__assertion__QualifiedSymName_88;
#line 383 "assertion.m"
              MR_Word hlds__assertion__V_90_90;
#line 383 "assertion.m"
              MR_Integer hlds__assertion__V_91_91;
#line 393 "assertion.m"
              MR_Word hlds__assertion__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 1)));
#line 394 "assertion.m"
              MR_Word hlds__assertion__V_78_78;
#line 394 "assertion.m"
              MR_Word hlds__assertion__V_80_80;
#line 394 "assertion.m"
              MR_Word hlds__assertion__V_81_81;
#line 394 "assertion.m"
              MR_Word hlds__assertion__V_82_82;
#line 395 "assertion.m"
              MR_Word hlds__assertion__V_86_86;
#line 395 "assertion.m"
              MR_Word hlds__assertion__V_87_87;
#line 395 "assertion.m"
              MR_Word hlds__assertion___TypeCtorA_85;
#line 396 "assertion.m"
              MR_Word hlds__assertion___TypeCtorB_89;

#line 394 "assertion.m"
              (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__assertion__GoalExpr_76)) == (MR_mktag((MR_Integer) 1)));
#line 394 "assertion.m"
              if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 394 "assertion.m"
                {
#line 394 "assertion.m"
                  hlds__assertion__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_76, (MR_Integer) 0)));
#line 394 "assertion.m"
                  hlds__assertion__UnifyRHS_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_76, (MR_Integer) 1)));
#line 394 "assertion.m"
                  hlds__assertion__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_76, (MR_Integer) 2)));
#line 394 "assertion.m"
                  hlds__assertion__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_76, (MR_Integer) 3)));
#line 394 "assertion.m"
                  hlds__assertion__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_76, (MR_Integer) 4)));
#line 395 "assertion.m"
                  (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__assertion__UnifyRHS_79)) == (MR_mktag((MR_Integer) 1)));
#line 395 "assertion.m"
                  if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 395 "assertion.m"
                    {
#line 395 "assertion.m"
                      hlds__assertion__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRHS_79, (MR_Integer) 0)));
#line 395 "assertion.m"
                      hlds__assertion__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRHS_79, (MR_Integer) 1)));
#line 395 "assertion.m"
                      hlds__assertion__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRHS_79, (MR_Integer) 2)));
#line 395 "assertion.m"
                      (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_90_90)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_90_90, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 395 "assertion.m"
                      if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 395 "assertion.m"
                        {
#line 395 "assertion.m"
                          hlds__assertion__UnqualifiedSymName_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_90_90, (MR_Integer) 1)));
#line 395 "assertion.m"
                          hlds__assertion__Arity_84 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__assertion__V_90_90, (MR_Integer) 2)));
#line 395 "assertion.m"
                          hlds__assertion___TypeCtorA_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_90_90, (MR_Integer) 3)));
#line 396 "assertion.m"
                          (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__assertion__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 396 "assertion.m"
                          if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 396 "assertion.m"
                            {
#line 396 "assertion.m"
                              hlds__assertion__QualifiedSymName_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 1)));
#line 396 "assertion.m"
                              hlds__assertion__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 2)));
#line 396 "assertion.m"
                              hlds__assertion___TypeCtorB_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 3)));
#line 396 "assertion.m"
                              (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = (hlds__assertion__Arity_84 == hlds__assertion__V_91_91);
#line 383 "assertion.m"
                              if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 383 "assertion.m"
                                {
#line 401 "assertion.m"
                                  {
#line 401 "assertion.m"
                                    (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(hlds__assertion__UnqualifiedSymName_83, hlds__assertion__QualifiedSymName_88);
                                  }
#line 383 "assertion.m"
                                  if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 384 "assertion.m"
                                    {
#line 384 "assertion.m"
                                      (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = hlds__assertion__predicate_call_2_p_0(hlds__assertion__P_10, (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__PredId_8);
                                    }
#line 383 "assertion.m"
                                }
#line 396 "assertion.m"
                            }
#line 395 "assertion.m"
                        }
#line 395 "assertion.m"
                    }
#line 394 "assertion.m"
                }
#line 383 "assertion.m"
            }
#line 377 "assertion.m"
        }
#line 377 "assertion.m"
      return (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded;
#line 377 "assertion.m"
    }
#line 124 "assertion.m"
  }
#line 124 "assertion.m"
}

#line 111 "assertion.m"
MR_bool MR_CALL 
hlds__assertion__is_update_assertion_5_p_0(
#line 111 "assertion.m"
  MR_Word hlds__assertion__Module_6,
#line 111 "assertion.m"
  MR_Integer hlds__assertion__AssertId_7,
#line 111 "assertion.m"
  MR_Word hlds__assertion___PredId_8,
#line 111 "assertion.m"
  MR_Word hlds__assertion__CallVars_9,
#line 111 "assertion.m"
  MR_Word * hlds__assertion__HeadVar__5_5)
#line 111 "assertion.m"
{
#line 298 "assertion.m"
  {
#line 298 "assertion.m"
    MR_bool hlds__assertion__succeeded;

#line 298 "assertion.m"
    {
#line 298 "assertion.m"
      hlds__assertion__succeeded = hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0(hlds__assertion__Module_6, hlds__assertion__AssertId_7, hlds__assertion__CallVars_9, hlds__assertion__HeadVar__5_5);
    }
#line 298 "assertion.m"
    return hlds__assertion__succeeded;
#line 298 "assertion.m"
  }
#line 111 "assertion.m"
}

#line 88 "assertion.m"
MR_bool MR_CALL 
hlds__assertion__is_associativity_assertion_5_p_0(
#line 88 "assertion.m"
  MR_Word hlds__assertion__Module_6,
#line 88 "assertion.m"
  MR_Integer hlds__assertion__AssertId_7,
#line 88 "assertion.m"
  MR_Word hlds__assertion__CallVars_8,
#line 88 "assertion.m"
  MR_Word * hlds__assertion__AssociativeVars_9,
#line 88 "assertion.m"
  MR_Word * hlds__assertion__OutputVar_10)
#line 88 "assertion.m"
{
#line 201 "assertion.m"
  {
#line 201 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 201 "assertion.m"
    MR_Word hlds__assertion__GoalInfo_12;
#line 201 "assertion.m"
    MR_Word hlds__assertion__P_13;
#line 201 "assertion.m"
    MR_Word hlds__assertion__Q_14;
#line 201 "assertion.m"
    MR_Word hlds__assertion__UniversiallyQuantifiedVars_15;
#line 201 "assertion.m"
    MR_Word hlds__assertion__PCalls_16;
#line 201 "assertion.m"
    MR_Word hlds__assertion__QCalls_17;
#line 201 "assertion.m"
    MR_Word hlds__assertion__V_18_18;
#line 201 "assertion.m"
    MR_Word hlds__assertion__Goal_23;
#line 201 "assertion.m"
    MR_Word hlds__assertion__V_25_25;
#line 201 "assertion.m"
    MR_Word hlds__assertion__V_26_26;
#line 201 "assertion.m"
    MR_Word hlds__assertion__GoalExpr0_29;
#line 201 "assertion.m"
    MR_Word hlds__assertion__Goal_36;
#line 201 "assertion.m"
    MR_Word hlds__assertion__V_38_38;
#line 201 "assertion.m"
    MR_Word hlds__assertion__V_39_39;
#line 201 "assertion.m"
    MR_Word hlds__assertion__GoalExpr0_42;
#line 202 "assertion.m"
    MR_Word hlds__assertion__GoalExpr_11;
#line 437 "assertion.m"
    MR_Word hlds__assertion___Context_30;
#line 438 "assertion.m"
    MR_Word hlds__assertion__Goal1_32;
#line 439 "assertion.m"
    MR_Word hlds__assertion__Reason_31;
#line 440 "assertion.m"
    MR_Word hlds__assertion__V_33_33;
#line 432 "assertion.m"
    MR_Word hlds__assertion__V_24_24;
#line 437 "assertion.m"
    MR_Word hlds__assertion___Context_43;
#line 438 "assertion.m"
    MR_Word hlds__assertion__Goal1_45;
#line 439 "assertion.m"
    MR_Word hlds__assertion__Reason_44;
#line 440 "assertion.m"
    MR_Word hlds__assertion__V_46_46;
#line 432 "assertion.m"
    MR_Word hlds__assertion__V_37_37;
#line 210 "assertion.m"
    MR_Word hlds__assertion__V_20_20;

#line 202 "assertion.m"
    {
#line 202 "assertion.m"
      hlds__assertion__assert_id_goal_3_p_0(hlds__assertion__Module_6, hlds__assertion__AssertId_7, &hlds__assertion__V_18_18);
    }
#line 202 "assertion.m"
    hlds__assertion__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_18_18, (MR_Integer) 0)));
#line 202 "assertion.m"
    hlds__assertion__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_18_18, (MR_Integer) 1)));
#line 203 "assertion.m"
    {
#line 203 "assertion.m"
      hlds__assertion__succeeded = hlds__assertion__goal_is_equivalence_3_p_0(hlds__assertion__V_18_18, &hlds__assertion__P_13, &hlds__assertion__Q_14);
    }
#line 201 "assertion.m"
    if (hlds__assertion__succeeded)
#line 201 "assertion.m"
      {
#line 205 "assertion.m"
        {
#line 205 "assertion.m"
          hlds__assertion__UniversiallyQuantifiedVars_15 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__assertion__GoalInfo_12);
        }
#line 437 "assertion.m"
        hlds__assertion__GoalExpr0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_13, (MR_Integer) 0)));
#line 437 "assertion.m"
        hlds__assertion___Context_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_13, (MR_Integer) 1)));
#line 439 "assertion.m"
        hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExpr0_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_29, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 439 "assertion.m"
        if (hlds__assertion__succeeded)
#line 439 "assertion.m"
          {
#line 439 "assertion.m"
            hlds__assertion__Reason_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_29, (MR_Integer) 1)));
#line 439 "assertion.m"
            hlds__assertion__Goal1_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_29, (MR_Integer) 2)));
#line 440 "assertion.m"
            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Reason_31)) == (MR_mktag((MR_Integer) 0)));
#line 440 "assertion.m"
            if (hlds__assertion__succeeded)
#line 440 "assertion.m"
              hlds__assertion__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Reason_31, (MR_Integer) 0)));
#line 439 "assertion.m"
          }
#line 438 "assertion.m"
        if (hlds__assertion__succeeded)
#line 442 "assertion.m"
          hlds__assertion__Goal_23 = hlds__assertion__Goal1_32;
#line 438 "assertion.m"
        else
#line 444 "assertion.m"
          hlds__assertion__Goal_23 = hlds__assertion__P_13;
#line 432 "assertion.m"
        hlds__assertion__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_23, (MR_Integer) 0)));
#line 432 "assertion.m"
        hlds__assertion__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_23, (MR_Integer) 1)));
#line 432 "assertion.m"
        hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_25_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_25_25, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 432 "assertion.m"
        if (hlds__assertion__succeeded)
#line 432 "assertion.m"
          {
#line 432 "assertion.m"
            hlds__assertion__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_25_25, (MR_Integer) 1)));
#line 432 "assertion.m"
            hlds__assertion__PCalls_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_25_25, (MR_Integer) 2)));
#line 432 "assertion.m"
            hlds__assertion__succeeded = (hlds__assertion__V_26_26 == (MR_Integer) 0);
#line 201 "assertion.m"
            if (hlds__assertion__succeeded)
#line 201 "assertion.m"
              {
#line 437 "assertion.m"
                hlds__assertion__GoalExpr0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_14, (MR_Integer) 0)));
#line 437 "assertion.m"
                hlds__assertion___Context_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_14, (MR_Integer) 1)));
#line 439 "assertion.m"
                hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExpr0_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_42, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 439 "assertion.m"
                if (hlds__assertion__succeeded)
#line 439 "assertion.m"
                  {
#line 439 "assertion.m"
                    hlds__assertion__Reason_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_42, (MR_Integer) 1)));
#line 439 "assertion.m"
                    hlds__assertion__Goal1_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_42, (MR_Integer) 2)));
#line 440 "assertion.m"
                    hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Reason_44)) == (MR_mktag((MR_Integer) 0)));
#line 440 "assertion.m"
                    if (hlds__assertion__succeeded)
#line 440 "assertion.m"
                      hlds__assertion__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Reason_44, (MR_Integer) 0)));
#line 439 "assertion.m"
                  }
#line 438 "assertion.m"
                if (hlds__assertion__succeeded)
#line 442 "assertion.m"
                  hlds__assertion__Goal_36 = hlds__assertion__Goal1_45;
#line 438 "assertion.m"
                else
#line 444 "assertion.m"
                  hlds__assertion__Goal_36 = hlds__assertion__Q_14;
#line 432 "assertion.m"
                hlds__assertion__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_36, (MR_Integer) 0)));
#line 432 "assertion.m"
                hlds__assertion__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_36, (MR_Integer) 1)));
#line 432 "assertion.m"
                hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_38_38)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_38_38, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 432 "assertion.m"
                if (hlds__assertion__succeeded)
#line 432 "assertion.m"
                  {
#line 432 "assertion.m"
                    hlds__assertion__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_38_38, (MR_Integer) 1)));
#line 432 "assertion.m"
                    hlds__assertion__QCalls_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_38_38, (MR_Integer) 2)));
#line 432 "assertion.m"
                    hlds__assertion__succeeded = (hlds__assertion__V_39_39 == (MR_Integer) 0);
#line 201 "assertion.m"
                    if (hlds__assertion__succeeded)
#line 201 "assertion.m"
                      {
#line 210 "assertion.m"
                        {
#line 210 "assertion.m"
                          hlds__assertion__succeeded = hlds__assertion__associative_5_p_0(hlds__assertion__PCalls_16, hlds__assertion__QCalls_17, hlds__assertion__UniversiallyQuantifiedVars_15, hlds__assertion__CallVars_8, &hlds__assertion__V_20_20);
                        }
#line 210 "assertion.m"
                        if (hlds__assertion__succeeded)
#line 210 "assertion.m"
                          {
#line 211 "assertion.m"
                            *hlds__assertion__AssociativeVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_20_20, (MR_Integer) 0)));
#line 211 "assertion.m"
                            *hlds__assertion__OutputVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_20_20, (MR_Integer) 1)));
#line 211 "assertion.m"
                            hlds__assertion__succeeded = MR_TRUE;
#line 210 "assertion.m"
                          }
#line 201 "assertion.m"
                      }
#line 432 "assertion.m"
                  }
#line 201 "assertion.m"
              }
#line 432 "assertion.m"
          }
#line 201 "assertion.m"
      }
#line 201 "assertion.m"
    return hlds__assertion__succeeded;
#line 201 "assertion.m"
  }
#line 88 "assertion.m"
}

#line 59 "assertion.m"
MR_bool MR_CALL 
hlds__assertion__is_commutativity_assertion_4_p_0(
#line 59 "assertion.m"
  MR_Word hlds__assertion__Module_5,
#line 59 "assertion.m"
  MR_Integer hlds__assertion__AssertId_6,
#line 59 "assertion.m"
  MR_Word hlds__assertion__CallVars_7,
#line 59 "assertion.m"
  MR_Word * hlds__assertion__CommutativeVars_8)
#line 59 "assertion.m"
{
#line 155 "assertion.m"
  {
#line 155 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 155 "assertion.m"
    MR_Word hlds__assertion__Goal_9;
#line 155 "assertion.m"
    MR_Word hlds__assertion__P_10;
#line 155 "assertion.m"
    MR_Word hlds__assertion__Q_11;
#line 155 "assertion.m"
    MR_Word hlds__assertion__PredId_12;
#line 155 "assertion.m"
    MR_Word hlds__assertion__VarsP_14;
#line 155 "assertion.m"
    MR_Word hlds__assertion__VarsQ_20;
#line 155 "assertion.m"
    MR_Word hlds__assertion__V_25_25;
#line 155 "assertion.m"
    MR_Word hlds__assertion__V_26_26;
#line 155 "assertion.m"
    MR_Word hlds__assertion__V_27_27;
#line 158 "assertion.m"
    MR_Word hlds__assertion__V_18_18;
#line 158 "assertion.m"
    MR_Integer hlds__assertion__V_13_13;
#line 158 "assertion.m"
    MR_Word hlds__assertion__V_15_15;
#line 158 "assertion.m"
    MR_Word hlds__assertion__V_16_16;
#line 158 "assertion.m"
    MR_Word hlds__assertion__V_17_17;
#line 159 "assertion.m"
    MR_Word hlds__assertion__V_24_24;
#line 159 "assertion.m"
    MR_Integer hlds__assertion__V_19_19;
#line 159 "assertion.m"
    MR_Word hlds__assertion__V_21_21;
#line 159 "assertion.m"
    MR_Word hlds__assertion__V_22_22;
#line 159 "assertion.m"
    MR_Word hlds__assertion__V_23_23;

#line 156 "assertion.m"
    {
#line 156 "assertion.m"
      hlds__assertion__assert_id_goal_3_p_0(hlds__assertion__Module_5, hlds__assertion__AssertId_6, &hlds__assertion__Goal_9);
    }
#line 157 "assertion.m"
    {
#line 157 "assertion.m"
      hlds__assertion__succeeded = hlds__assertion__goal_is_equivalence_3_p_0(hlds__assertion__Goal_9, &hlds__assertion__P_10, &hlds__assertion__Q_11);
    }
#line 155 "assertion.m"
    if (hlds__assertion__succeeded)
#line 155 "assertion.m"
      {
#line 158 "assertion.m"
        hlds__assertion__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_10, (MR_Integer) 0)));
#line 158 "assertion.m"
        hlds__assertion__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_10, (MR_Integer) 1)));
#line 158 "assertion.m"
        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_25_25)) == (MR_mktag((MR_Integer) 2)));
#line 158 "assertion.m"
        if (hlds__assertion__succeeded)
#line 158 "assertion.m"
          {
#line 158 "assertion.m"
            hlds__assertion__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_25_25, (MR_Integer) 0)));
#line 158 "assertion.m"
            hlds__assertion__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__V_25_25, (MR_Integer) 1)));
#line 158 "assertion.m"
            hlds__assertion__VarsP_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_25_25, (MR_Integer) 2)));
#line 158 "assertion.m"
            hlds__assertion__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_25_25, (MR_Integer) 3)));
#line 158 "assertion.m"
            hlds__assertion__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_25_25, (MR_Integer) 4)));
#line 158 "assertion.m"
            hlds__assertion__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_25_25, (MR_Integer) 5)));
#line 159 "assertion.m"
            hlds__assertion__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 0)));
#line 159 "assertion.m"
            hlds__assertion__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 1)));
#line 159 "assertion.m"
            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_26_26)) == (MR_mktag((MR_Integer) 2)));
#line 159 "assertion.m"
            if (hlds__assertion__succeeded)
#line 159 "assertion.m"
              {
#line 159 "assertion.m"
                hlds__assertion__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_26_26, (MR_Integer) 0)));
#line 159 "assertion.m"
                hlds__assertion__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__V_26_26, (MR_Integer) 1)));
#line 159 "assertion.m"
                hlds__assertion__VarsQ_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_26_26, (MR_Integer) 2)));
#line 159 "assertion.m"
                hlds__assertion__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_26_26, (MR_Integer) 3)));
#line 159 "assertion.m"
                hlds__assertion__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_26_26, (MR_Integer) 4)));
#line 159 "assertion.m"
                hlds__assertion__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_26_26, (MR_Integer) 5)));
#line 159 "assertion.m"
                {
#line 159 "assertion.m"
                  hlds__assertion__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__assertion__PredId_12, hlds__assertion__V_27_27);
                }
#line 155 "assertion.m"
                if (hlds__assertion__succeeded)
#line 160 "assertion.m"
                  {
#line 160 "assertion.m"
                    hlds__assertion__succeeded = hlds__assertion__commutative_var_ordering_4_p_0(hlds__assertion__VarsP_14, hlds__assertion__VarsQ_20, hlds__assertion__CallVars_7, hlds__assertion__CommutativeVars_8);
                  }
#line 159 "assertion.m"
              }
#line 158 "assertion.m"
          }
#line 155 "assertion.m"
      }
#line 155 "assertion.m"
    return hlds__assertion__succeeded;
#line 155 "assertion.m"
  }
#line 59 "assertion.m"
}

#line 665 "assertion.m"
static void MR_CALL 
hlds__assertion__record_preds_used_in_4_p_0_1(
#line 665 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 665 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1,
#line 665 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_2,
#line 665 "assertion.m"
  MR_Box * hlds__assertion__wrapper_arg_3)
#line 665 "assertion.m"
{
#line 665 "assertion.m"
  {
#line 665 "assertion.m"
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;
#line 665 "assertion.m"
    MR_Word hlds__assertion__conv0_STATE_VARIABLE_Module_13;

#line 665 "assertion.m"
    {
#line 665 "assertion.m"
      hlds__assertion__update_pred_info_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 3))), ((MR_Word) hlds__assertion__wrapper_arg_1), ((MR_Word) hlds__assertion__wrapper_arg_2), &hlds__assertion__conv0_STATE_VARIABLE_Module_13);
    }
#line 665 "assertion.m"
    *hlds__assertion__wrapper_arg_3 = ((MR_Box) (hlds__assertion__conv0_STATE_VARIABLE_Module_13));
#line 665 "assertion.m"
  }
#line 665 "assertion.m"
}

#line 40 "assertion.m"
void MR_CALL 
hlds__assertion__record_preds_used_in_4_p_0(
#line 40 "assertion.m"
  MR_Word hlds__assertion__Goal_5,
#line 40 "assertion.m"
  MR_Integer hlds__assertion__AssertId_6,
#line 40 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Module_0_9,
#line 40 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Module_10)
#line 40 "assertion.m"
{
#line 657 "assertion.m"
  {
#line 657 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 657 "assertion.m"
    MR_Word hlds__assertion__PredIds_8;
#line 657 "assertion.m"
    MR_Word hlds__assertion__V_15_15;
#line 660 "assertion.m"
    MR_Word hlds__assertion__V_11_11;
#line 665 "assertion.m"
    MR_Box hlds__assertion__conv1_STATE_VARIABLE_Module_10;

#line 658 "assertion.m"
    {
#line 658 "assertion.m"
      hlds__goal_util__predids_from_goal_2_p_0(hlds__assertion__Goal_5, &hlds__assertion__PredIds_8);
    }
#line 660 "assertion.m"
    {
#line 660 "assertion.m"
      hlds__assertion__V_11_11 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
#line 660 "assertion.m"
    {
#line 660 "assertion.m"
      hlds__assertion__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (hlds__assertion__V_11_11)), hlds__assertion__PredIds_8);
    }
#line 660 "assertion.m"
    if (hlds__assertion__succeeded)
#line 661 "assertion.m"
      {
#line 661 "assertion.m"
        {
#line 661 "assertion.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.assertion", (MR_String) "predicate \140hlds.assertion.record_preds_used_in\'/4", (MR_String) "invalid pred_id");
#line 661 "assertion.m"
          return;
        }
#line 661 "assertion.m"
      }
#line 660 "assertion.m"
    else
#line 663 "assertion.m"
      {
#line 663 "assertion.m"
      }
#line 665 "assertion.m"
    {
#line 665 "assertion.m"
      hlds__assertion__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 665 "assertion.m"
      MR_hl_field(MR_mktag(0), hlds__assertion__V_15_15, 0) = ((MR_Box) (&hlds__assertion_scalar_common_3[0]));
#line 665 "assertion.m"
      MR_hl_field(MR_mktag(0), hlds__assertion__V_15_15, 1) = ((MR_Box) (hlds__assertion__record_preds_used_in_4_p_0_1));
#line 665 "assertion.m"
      MR_hl_field(MR_mktag(0), hlds__assertion__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 665 "assertion.m"
      MR_hl_field(MR_mktag(0), hlds__assertion__V_15_15, 3) = ((MR_Box) (hlds__assertion__AssertId_6));
#line 665 "assertion.m"
    }
#line 665 "assertion.m"
    {
#line 665 "assertion.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, hlds__assertion__V_15_15, hlds__assertion__PredIds_8, ((MR_Box) (hlds__assertion__STATE_VARIABLE_Module_0_9)), &hlds__assertion__conv1_STATE_VARIABLE_Module_10);
    }
#line 665 "assertion.m"
    *hlds__assertion__STATE_VARIABLE_Module_10 = ((MR_Word) hlds__assertion__conv1_STATE_VARIABLE_Module_10);
#line 657 "assertion.m"
  }
#line 40 "assertion.m"
}

#line 35 "assertion.m"
void MR_CALL 
hlds__assertion__assert_id_goal_3_p_0(
#line 35 "assertion.m"
  MR_Word hlds__assertion__Module_4,
#line 35 "assertion.m"
  MR_Integer hlds__assertion__AssertId_5,
#line 35 "assertion.m"
  MR_Word * hlds__assertion__Goal_6)
#line 35 "assertion.m"
{
#line 450 "assertion.m"
  {
#line 450 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 450 "assertion.m"
    MR_Word hlds__assertion__AssertTable_7;
#line 450 "assertion.m"
    MR_Word hlds__assertion__PredId_8;
#line 450 "assertion.m"
    MR_Word hlds__assertion__PredInfo_9;
#line 450 "assertion.m"
    MR_Word hlds__assertion__ClausesInfo_10;
#line 450 "assertion.m"
    MR_Word hlds__assertion__ClausesRep_11;
#line 450 "assertion.m"
    MR_Word hlds__assertion__Clauses_13;
#line 455 "assertion.m"
    MR_Word hlds__assertion___ItemNumbers_12;

#line 451 "assertion.m"
    {
#line 451 "assertion.m"
      hlds__hlds_module__module_info_get_assertion_table_2_p_0(hlds__assertion__Module_4, &hlds__assertion__AssertTable_7);
    }
#line 452 "assertion.m"
    {
#line 452 "assertion.m"
      hlds__hlds_data__assertion_table_lookup_3_p_0(hlds__assertion__AssertTable_7, hlds__assertion__AssertId_5, &hlds__assertion__PredId_8);
    }
#line 453 "assertion.m"
    {
#line 453 "assertion.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__assertion__Module_4, hlds__assertion__PredId_8, &hlds__assertion__PredInfo_9);
    }
#line 454 "assertion.m"
    {
#line 454 "assertion.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__assertion__PredInfo_9, &hlds__assertion__ClausesInfo_10);
    }
#line 455 "assertion.m"
    {
#line 455 "assertion.m"
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(hlds__assertion__ClausesInfo_10, &hlds__assertion__ClausesRep_11, &hlds__assertion___ItemNumbers_12);
    }
#line 456 "assertion.m"
    {
#line 456 "assertion.m"
      hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(hlds__assertion__ClausesRep_11, &hlds__assertion__Clauses_13);
    }
#line 461 "assertion.m"
    if ((hlds__assertion__Clauses_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 464 "assertion.m"
      {
#line 465 "assertion.m"
        {
#line 465 "assertion.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.assertion", (MR_String) "predicate \140hlds.assertion.assert_id_goal\'/3", (MR_String) "goal is not an assertion");
#line 465 "assertion.m"
          return;
        }
#line 464 "assertion.m"
      }
#line 461 "assertion.m"
    else
#line 461 "assertion.m"
      {
#line 461 "assertion.m"
        MR_Word hlds__assertion__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Clauses_13, (MR_Integer) 1)));
#line 461 "assertion.m"
        MR_Word hlds__assertion__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Clauses_13, (MR_Integer) 0)));

#line 461 "assertion.m"
        if ((hlds__assertion__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 458 "assertion.m"
          {
#line 458 "assertion.m"
            MR_Word hlds__assertion__Goal0_15;
#line 458 "assertion.m"
            MR_Word hlds__assertion__GoalExpr0_34;
#line 458 "assertion.m"
            MR_Word hlds__assertion__GoalInfo_35;
#line 458 "assertion.m"
            MR_Word hlds__assertion__GoalExpr_36;

#line 459 "assertion.m"
            {
#line 459 "assertion.m"
              hlds__assertion__Goal0_15 = hlds__hlds_clauses__clause_body_1_f_0(hlds__assertion__V_31_31);
            }
#line 688 "assertion.m"
            hlds__assertion__GoalExpr0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal0_15, (MR_Integer) 0)));
#line 688 "assertion.m"
            hlds__assertion__GoalInfo_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal0_15, (MR_Integer) 1)));
#line 689 "assertion.m"
            {
#line 689 "assertion.m"
              hlds__assertion__normalise_goal_expr_2_p_0(hlds__assertion__GoalExpr0_34, &hlds__assertion__GoalExpr_36);
            }
#line 690 "assertion.m"
            {
#line 690 "assertion.m"
              MR_Word base;
#line 690 "assertion.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 690 "assertion.m"
              *hlds__assertion__Goal_6 = base;
#line 690 "assertion.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__assertion__GoalExpr_36));
#line 690 "assertion.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__GoalInfo_35));
#line 690 "assertion.m"
            }
#line 458 "assertion.m"
          }
#line 461 "assertion.m"
        else
#line 464 "assertion.m"
          {
#line 465 "assertion.m"
            {
#line 465 "assertion.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.assertion", (MR_String) "predicate \140hlds.assertion.assert_id_goal\'/3", (MR_String) "goal is not an assertion");
#line 465 "assertion.m"
              return;
            }
#line 464 "assertion.m"
          }
#line 461 "assertion.m"
      }
#line 450 "assertion.m"
  }
#line 35 "assertion.m"
}

void mercury__hlds__assertion__init(void)
{
}

void mercury__hlds__assertion__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__assertion__hlds__assertion__type_ctor_info_subst_0);
}

void mercury__hlds__assertion__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.assertion. */
