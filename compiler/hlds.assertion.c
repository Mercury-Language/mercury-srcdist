/*
** Automatically generated from `assertion.m'
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



#line 305 "assertion.m"
struct hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_0_s {
#line 305 "assertion.m"
  MR_Box * hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__wrapper_arg_1;
#line 305 "assertion.m"
  MR_Cont hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__cont;
#line 305 "assertion.m"
  void * hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__cont_env_ptr;
#line 305 "assertion.m"
  MR_Word hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__conv0_HeadVar__5_5;
#line 305 "assertion.m"
};

#line 406 "assertion.m"
struct hlds__assertion__predicate_call_2_p_0_env_0_s {
#line 406 "assertion.m"
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__PredId_4;
#line 420 "assertion.m"
  MR_bool hlds__assertion__predicate_call_2_p_0_env_0__succeeded;
#line 420 "assertion.m"
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__Goals_5;
#line 410 "assertion.m"
  jmp_buf hlds__assertion__predicate_call_2_p_0_env_0__commit_0;
#line 410 "assertion.m"
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__TypeCtorInfo_40_40;
#line 410 "assertion.m"
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__TypeInfo_45_45;
#line 410 "assertion.m"
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__Call_7;
#line 410 "assertion.m"
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__Unifications_14;
#line 410 "assertion.m"
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__P_15;
#line 410 "assertion.m"
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__V_34_34;
#line 410 "assertion.m"
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__V_37_37;
#line 410 "assertion.m"
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__V_41_41;
#line 410 "assertion.m"
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__V_42_42;
#line 410 "assertion.m"
  MR_Box hlds__assertion__predicate_call_2_p_0_env_0__conv0_Call_7;
#line 406 "assertion.m"
};

#line 311 "assertion.m"
struct hlds__assertion__update_5_p_0_env_0_s {
#line 311 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__QCalls_7;
#line 311 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__UniversiallyQuantifiedVars_8;
#line 311 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__CallVars_9;
#line 311 "assertion.m"
  MR_Word * hlds__assertion__update_5_p_0_env_0__HeadVar__5_5;
#line 311 "assertion.m"
  MR_Cont hlds__assertion__update_5_p_0_env_0__cont;
#line 311 "assertion.m"
  void * hlds__assertion__update_5_p_0_env_0__cont_env_ptr;
#line 315 "assertion.m"
  MR_bool hlds__assertion__update_5_p_0_env_0__succeeded;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_61_61;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_62_62;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_63_63;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_76_76;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_77_77;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_78_78;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_79_79;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_80_80;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_81_81;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_82_82;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_84_84;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_86_86;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__StateA_10;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__StateB_11;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__LHSCalls_12;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__RHSCalls_13;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__PredId_14;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__SA_15;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__PairsL_16;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__Vs_17;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__SB_18;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__PairsR_19;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__Pairs0_21;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__Pairs_24;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__S0_25;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__S_26;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__AssocList_27;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_31_31;
#line 315 "assertion.m"
  MR_Integer hlds__assertion__update_5_p_0_env_0__V_33_33;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_34_34;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_35_35;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_36_36;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_37_37;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_38_38;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_39_39;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_40_40;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_41_41;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_42_42;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_43_43;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_44_44;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_46_46;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_47_47;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_48_48;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_49_49;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_51_51;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_52_52;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_64_64;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_65_65;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_66_66;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_67_67;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_68_68;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_69_69;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_70_70;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_71_71;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_72_72;
#line 315 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__V_73_73;
#line 259 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeCtorInfo_13_95;
#line 262 "assertion.m"
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeCtorInfo_14_96;
#line 311 "assertion.m"
};

#line 256 "assertion.m"
struct hlds__assertion__reorder_4_p_0_env_0_s {
#line 256 "assertion.m"
  MR_Word hlds__assertion__reorder_4_p_0_env_0__QCalls_2;
#line 256 "assertion.m"
  MR_Word * hlds__assertion__reorder_4_p_0_env_0__LHSCalls_3;
#line 256 "assertion.m"
  MR_Word * hlds__assertion__reorder_4_p_0_env_0__RHSCalls_4;
#line 256 "assertion.m"
  MR_Cont hlds__assertion__reorder_4_p_0_env_0__cont;
#line 256 "assertion.m"
  void * hlds__assertion__reorder_4_p_0_env_0__cont_env_ptr;
#line 259 "assertion.m"
  MR_Word hlds__assertion__reorder_4_p_0_env_0__TypeCtorInfo_13_13;
#line 262 "assertion.m"
  MR_Word hlds__assertion__reorder_4_p_0_env_0__TypeCtorInfo_14_14;
#line 256 "assertion.m"
};

#line 223 "assertion.m"
struct hlds__assertion__associative_5_p_0_env_0_s {
#line 223 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__PCalls_6;
#line 223 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__QCalls_7;
#line 223 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__UniversiallyQuantifiedVars_8;
#line 223 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__CallVars_9;
#line 223 "assertion.m"
  MR_Word * hlds__assertion__associative_5_p_0_env_0__HeadVar__5_5;
#line 228 "assertion.m"
  MR_bool hlds__assertion__associative_5_p_0_env_0__succeeded;
#line 228 "assertion.m"
  jmp_buf hlds__assertion__associative_5_p_0_env_0__commit_0;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_71_71;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_72_72;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_73_73;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_88_88;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_89_89;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_90_90;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_91_91;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_92_92;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_93_93;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_94_94;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_95_95;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_96_96;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_98_98;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_100_100;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_102_102;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__CallVarA_10;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__CallVarB_11;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__OutputVar_12;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__LHSCalls_13;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__RHSCalls_14;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__PredId_15;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__AB_16;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__PairsL_17;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__Vs_18;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__BC_19;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__PairsR_20;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__Pairs_22;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__A_23;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__B_24;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__C_25;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__ABC_26;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__AssocList_27;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_33_33;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_34_34;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_35_35;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_36_36;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_37_37;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_38_38;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_39_39;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_40_40;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_41_41;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_42_42;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_43_43;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_44_44;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_45_45;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_46_46;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_47_47;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_48_48;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_50_50;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_51_51;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_52_52;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_53_53;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_55_55;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_56_56;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_57_57;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_58_58;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_60_60;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_61_61;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_74_74;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_75_75;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_76_76;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_77_77;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_78_78;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_79_79;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_80_80;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_81_81;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_82_82;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_83_83;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_84_84;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_85_85;
#line 228 "assertion.m"
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_86_86;
#line 223 "assertion.m"
};

#line 123 "assertion.m"
struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s {
#line 123 "assertion.m"
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__PredId_8;
#line 376 "assertion.m"
  MR_bool hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded;
#line 420 "assertion.m"
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Goals_32;
#line 410 "assertion.m"
  jmp_buf hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__commit_0;
#line 410 "assertion.m"
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeCtorInfo_40_67;
#line 410 "assertion.m"
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeInfo_45_72;
#line 410 "assertion.m"
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Call_34;
#line 410 "assertion.m"
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Unifications_41;
#line 410 "assertion.m"
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__P_42;
#line 410 "assertion.m"
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_61_61;
#line 410 "assertion.m"
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_64_64;
#line 410 "assertion.m"
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_68_68;
#line 410 "assertion.m"
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_69_69;
#line 410 "assertion.m"
  MR_Box hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__conv0_Call_34;
#line 123 "assertion.m"
};


#line 535 "hlds.assertion.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 538 "hlds.assertion.c"
static const MR_FA_TypeInfo_Struct1 hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 541 "hlds.assertion.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__assertion__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 544 "hlds.assertion.c"
static const MR_FA_TypeInfo_Struct2 hlds__assertion__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 547 "hlds.assertion.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__assertion__pair__pti_pair_2__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 550 "hlds.assertion.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 553 "hlds.assertion.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 556 "hlds.assertion.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 559 "hlds.assertion.c"
static const MR_FA_TypeInfo_Struct2 hlds__assertion__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 562 "hlds.assertion.c"
static MR_bool MR_CALL 
hlds__assertion____Unify____subst_0_0_10001(
#line 565 "hlds.assertion.c"
  MR_Box hlds__assertion__wrapper_arg_1,
#line 567 "hlds.assertion.c"
  MR_Box hlds__assertion__wrapper_arg_2);

#line 570 "hlds.assertion.c"
static void MR_CALL 
hlds__assertion____Compare____subst_0_0_10001(
#line 573 "hlds.assertion.c"
  MR_Box * hlds__assertion__wrapper_arg_1,
#line 575 "hlds.assertion.c"
  MR_Box hlds__assertion__wrapper_arg_2,
#line 577 "hlds.assertion.c"
  MR_Box hlds__assertion__wrapper_arg_3);

#line 305 "assertion.m"
static void MR_CALL 
hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0_1(
#line 305 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 305 "assertion.m"
static void MR_CALL 
hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0_2(
#line 305 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 305 "assertion.m"
  MR_Box * hlds__assertion__wrapper_arg_1,
#line 305 "assertion.m"
  MR_Cont hlds__assertion__cont,
#line 305 "assertion.m"
  void * hlds__assertion__cont_env_ptr);

#line 414 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__predicate_call__414__1_1_p_0(
#line 414 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_35);

#line 336 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__update__336__1_2_p_0(
#line 336 "assertion.m"
  MR_Word hlds__assertion__SA_15,
#line 336 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_50);

#line 334 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__update__334__1_2_p_0(
#line 334 "assertion.m"
  MR_Word hlds__assertion__S0_25,
#line 334 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_45);

#line 323 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__update__323__1_1_p_0(
#line 323 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_32);

#line 287 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__process_one_side__287__1_1_p_0(
#line 287 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_17);

#line 249 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__associative__249__1_2_p_0(
#line 249 "assertion.m"
  MR_Word hlds__assertion__B_24,
#line 249 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_59);

#line 247 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__associative__247__1_2_p_0(
#line 247 "assertion.m"
  MR_Word hlds__assertion__A_23,
#line 247 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_54);

#line 245 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__associative__245__1_2_p_0(
#line 245 "assertion.m"
  MR_Word hlds__assertion__AB_16,
#line 245 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_49);

#line 149 "assertion.m"
static void MR_CALL 
hlds__assertion____Compare____subst_0_0(
#line 149 "assertion.m"
  MR_Word * hlds__assertion__HeadVar__1_1,
#line 149 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2,
#line 149 "assertion.m"
  MR_Word hlds__assertion__HeadVar__3_3);

#line 149 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion____Unify____subst_0_0(
#line 149 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 149 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2);

#line 774 "assertion.m"
static void MR_CALL 
hlds__assertion__normalise_goals_2_p_0(
#line 774 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 774 "assertion.m"
  MR_Word * hlds__assertion__HeadVar__2_2);

#line 765 "assertion.m"
static void MR_CALL 
hlds__assertion__normalise_cases_2_p_0(
#line 765 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 765 "assertion.m"
  MR_Word * hlds__assertion__HeadVar__2_2);

#line 757 "assertion.m"
static void MR_CALL 
hlds__assertion__normalise_conj_2_p_0(
#line 757 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 757 "assertion.m"
  MR_Word * hlds__assertion__HeadVar__2_2);

#line 691 "assertion.m"
static void MR_CALL 
hlds__assertion__normalise_goal_expr_2_p_0(
#line 691 "assertion.m"
  MR_Word hlds__assertion__GoalExpr0_3,
#line 691 "assertion.m"
  MR_Word * hlds__assertion__GoalExpr_4);

#line 673 "assertion.m"
static void MR_CALL 
hlds__assertion__update_pred_info_4_p_0(
#line 673 "assertion.m"
  MR_Integer hlds__assertion__AssertId_5,
#line 673 "assertion.m"
  MR_Word hlds__assertion__PredId_6,
#line 673 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Module_0_12,
#line 673 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Module_13);

#line 641 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_goals_cases_4_p_0(
#line 641 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 641 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2,
#line 641 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
#line 641 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4);

#line 633 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_goals_list_4_p_0(
#line 633 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 633 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2,
#line 633 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
#line 633 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4);

#line 616 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_unification_4_p_0(
#line 616 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 616 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2,
#line 616 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
#line 616 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4);

#line 608 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_vars_4_p_0(
#line 608 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 608 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2,
#line 608 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
#line 608 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4);

#line 598 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_var_4_p_0(
#line 598 "assertion.m"
  MR_Word hlds__assertion__VA_5,
#line 598 "assertion.m"
  MR_Word hlds__assertion__VB_6,
#line 598 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_9,
#line 598 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_10);

#line 589 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_goals_shorthand_4_p_0(
#line 589 "assertion.m"
  MR_Word hlds__assertion__ShortHandA_5,
#line 589 "assertion.m"
  MR_Word hlds__assertion__ShortHandB_6,
#line 589 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_12,
#line 589 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_13);

#line 578 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_reason_4_p_0(
#line 578 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 578 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2,
#line 578 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
#line 578 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4);

#line 570 "assertion.m"
static MR_Box MR_CALL 
hlds__assertion__equal_goal_exprs_4_p_0_2(
#line 570 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 570 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1);

#line 569 "assertion.m"
static MR_Box MR_CALL 
hlds__assertion__equal_goal_exprs_4_p_0_1(
#line 569 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 569 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1);

#line 513 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_goal_exprs_4_p_0(
#line 513 "assertion.m"
  MR_Word hlds__assertion__GoalExprA_5,
#line 513 "assertion.m"
  MR_Word hlds__assertion__GoalExprB_6,
#line 513 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_68,
#line 513 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_69);

#line 505 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_goals_4_p_0(
#line 505 "assertion.m"
  MR_Word hlds__assertion__GoalA_5,
#line 505 "assertion.m"
  MR_Word hlds__assertion__GoalB_6,
#line 505 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_12,
#line 505 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_13);

#line 484 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__goal_is_equivalence_3_p_0(
#line 484 "assertion.m"
  MR_Word hlds__assertion__Goal_4,
#line 484 "assertion.m"
  MR_Word * hlds__assertion__P_5,
#line 484 "assertion.m"
  MR_Word * hlds__assertion__Q_6);

#line 413 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__predicate_call_2_p_0_5(
#line 413 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 413 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1);

#line 410 "assertion.m"
static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_1(
#line 410 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 410 "assertion.m"
static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_3(
#line 410 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 410 "assertion.m"
static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_4(
#line 410 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 410 "assertion.m"
static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_2(
#line 410 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 410 "assertion.m"
static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_6(
#line 410 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 406 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__predicate_call_2_p_0(
#line 406 "assertion.m"
  MR_Word hlds__assertion__Goal_3,
#line 406 "assertion.m"
  MR_Word hlds__assertion__PredId_4);

#line 350 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__process_two_linked_calls_6_p_0(
#line 350 "assertion.m"
  MR_Word hlds__assertion__Goals_7,
#line 350 "assertion.m"
  MR_Word hlds__assertion__UniversiallyQuantifiedVars_8,
#line 350 "assertion.m"
  MR_Word * hlds__assertion__PredId_9,
#line 350 "assertion.m"
  MR_Word * hlds__assertion__LinkingVar_10,
#line 350 "assertion.m"
  MR_Word * hlds__assertion__Vars_11,
#line 350 "assertion.m"
  MR_Word * hlds__assertion__VarsA_12);

#line 336 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__update_5_p_0_7(
#line 336 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 336 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1);

#line 334 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__update_5_p_0_6(
#line 334 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 334 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1);

#line 323 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__update_5_p_0_4(
#line 323 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 323 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1);

#line 315 "assertion.m"
static void MR_CALL 
hlds__assertion__update_5_p_0_5(
#line 315 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 315 "assertion.m"
static void MR_CALL 
hlds__assertion__update_5_p_0_1(
#line 315 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 259 "assertion.m"
static void MR_CALL 
hlds__assertion__update_5_p_0_2(
#line 259 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 262 "assertion.m"
static void MR_CALL 
hlds__assertion__update_5_p_0_3(
#line 262 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 311 "assertion.m"
static void MR_CALL 
hlds__assertion__update_5_p_0(
#line 311 "assertion.m"
  MR_Word hlds__assertion__PCalls_6,
#line 311 "assertion.m"
  MR_Word hlds__assertion__QCalls_7,
#line 311 "assertion.m"
  MR_Word hlds__assertion__UniversiallyQuantifiedVars_8,
#line 311 "assertion.m"
  MR_Word hlds__assertion__CallVars_9,
#line 311 "assertion.m"
  MR_Word * hlds__assertion__HeadVar__5_5,
#line 311 "assertion.m"
  MR_Cont hlds__assertion__cont,
#line 311 "assertion.m"
  void * hlds__assertion__cont_env_ptr);

#line 287 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__process_one_side_6_p_0_1(
#line 287 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 287 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1);

#line 277 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__process_one_side_6_p_0(
#line 277 "assertion.m"
  MR_Word hlds__assertion__Goals_7,
#line 277 "assertion.m"
  MR_Word hlds__assertion__UniversiallyQuantifiedVars_8,
#line 277 "assertion.m"
  MR_Word * hlds__assertion__PredId_9,
#line 277 "assertion.m"
  MR_Word * hlds__assertion__LinkingVar_10,
#line 277 "assertion.m"
  MR_Word * hlds__assertion__Vars_11,
#line 277 "assertion.m"
  MR_Word * hlds__assertion__VarsA_12);

#line 259 "assertion.m"
static void MR_CALL 
hlds__assertion__reorder_4_p_0_1(
#line 259 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 262 "assertion.m"
static void MR_CALL 
hlds__assertion__reorder_4_p_0_2(
#line 262 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 256 "assertion.m"
static void MR_CALL 
hlds__assertion__reorder_4_p_0(
#line 256 "assertion.m"
  MR_Word hlds__assertion__PCalls_1,
#line 256 "assertion.m"
  MR_Word hlds__assertion__QCalls_2,
#line 256 "assertion.m"
  MR_Word * hlds__assertion__LHSCalls_3,
#line 256 "assertion.m"
  MR_Word * hlds__assertion__RHSCalls_4,
#line 256 "assertion.m"
  MR_Cont hlds__assertion__cont,
#line 256 "assertion.m"
  void * hlds__assertion__cont_env_ptr);

#line 249 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__associative_5_p_0_6(
#line 249 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 249 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1);

#line 247 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__associative_5_p_0_5(
#line 247 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 247 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1);

#line 245 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__associative_5_p_0_4(
#line 245 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 245 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1);

#line 228 "assertion.m"
static void MR_CALL 
hlds__assertion__associative_5_p_0_1(
#line 228 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 228 "assertion.m"
static void MR_CALL 
hlds__assertion__associative_5_p_0_3(
#line 228 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 228 "assertion.m"
static void MR_CALL 
hlds__assertion__associative_5_p_0_2(
#line 228 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 228 "assertion.m"
static void MR_CALL 
hlds__assertion__associative_5_p_0_7(
#line 228 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 223 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__associative_5_p_0(
#line 223 "assertion.m"
  MR_Word hlds__assertion__PCalls_6,
#line 223 "assertion.m"
  MR_Word hlds__assertion__QCalls_7,
#line 223 "assertion.m"
  MR_Word hlds__assertion__UniversiallyQuantifiedVars_8,
#line 223 "assertion.m"
  MR_Word hlds__assertion__CallVars_9,
#line 223 "assertion.m"
  MR_Word * hlds__assertion__HeadVar__5_5);

#line 181 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__commutative_var_ordering_2_6_p_0(
#line 181 "assertion.m"
  MR_Word hlds__assertion__VarP_7,
#line 181 "assertion.m"
  MR_Word hlds__assertion__VarQ_8,
#line 181 "assertion.m"
  MR_Word hlds__assertion__HeadVar__3_3,
#line 181 "assertion.m"
  MR_Word hlds__assertion__HeadVar__4_4,
#line 181 "assertion.m"
  MR_Word hlds__assertion__HeadVar__5_5,
#line 181 "assertion.m"
  MR_Word * hlds__assertion__CallVarB_15);

#line 170 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__commutative_var_ordering_4_p_0(
#line 170 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 170 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2,
#line 170 "assertion.m"
  MR_Word hlds__assertion__HeadVar__3_3,
#line 170 "assertion.m"
  MR_Word * hlds__assertion__CommutativeVars_11);

#line 413 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_5(
#line 413 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 413 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1);

#line 410 "assertion.m"
static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_1(
#line 410 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 410 "assertion.m"
static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_3(
#line 410 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 410 "assertion.m"
static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_4(
#line 410 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 410 "assertion.m"
static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_2(
#line 410 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 410 "assertion.m"
static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_6(
#line 410 "assertion.m"
  void * hlds__assertion__env_ptr_arg);

#line 664 "assertion.m"
static void MR_CALL 
hlds__assertion__record_preds_used_in_4_p_0_1(
#line 664 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 664 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1,
#line 664 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_2,
#line 664 "assertion.m"
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



#line 1362 "hlds.assertion.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1370 "hlds.assertion.c"
static const MR_FA_TypeInfo_Struct1 hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1378 "hlds.assertion.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__assertion__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1387 "hlds.assertion.c"
static const MR_FA_TypeInfo_Struct2 hlds__assertion__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1396 "hlds.assertion.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__assertion__pair__pti_pair_2__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__assertion__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__assertion__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1405 "hlds.assertion.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1413 "hlds.assertion.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1421 "hlds.assertion.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1429 "hlds.assertion.c"
static const MR_FA_TypeInfo_Struct2 hlds__assertion__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1438 "hlds.assertion.c"
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

#line 1455 "hlds.assertion.c"
static MR_bool MR_CALL 
hlds__assertion____Unify____subst_0_0_10001(
#line 1458 "hlds.assertion.c"
  MR_Box hlds__assertion__wrapper_arg_1,
#line 1460 "hlds.assertion.c"
  MR_Box hlds__assertion__wrapper_arg_2)
#line 1462 "hlds.assertion.c"
{
#line 1464 "hlds.assertion.c"
  {
#line 1466 "hlds.assertion.c"
    MR_bool hlds__assertion__succeeded;

#line 1469 "hlds.assertion.c"
    {
#line 1471 "hlds.assertion.c"
      hlds__assertion__succeeded = hlds__assertion____Unify____subst_0_0(((MR_Word) hlds__assertion__wrapper_arg_1), ((MR_Word) hlds__assertion__wrapper_arg_2));
    }
#line 1474 "hlds.assertion.c"
    return hlds__assertion__succeeded;
#line 1476 "hlds.assertion.c"
  }
#line 1478 "hlds.assertion.c"
}

#line 1481 "hlds.assertion.c"
static void MR_CALL 
hlds__assertion____Compare____subst_0_0_10001(
#line 1484 "hlds.assertion.c"
  MR_Box * hlds__assertion__wrapper_arg_1,
#line 1486 "hlds.assertion.c"
  MR_Box hlds__assertion__wrapper_arg_2,
#line 1488 "hlds.assertion.c"
  MR_Box hlds__assertion__wrapper_arg_3)
#line 1490 "hlds.assertion.c"
{
#line 1492 "hlds.assertion.c"
  {
#line 1494 "hlds.assertion.c"
    MR_Word hlds__assertion__conv0_HeadVar__1_1;

#line 1497 "hlds.assertion.c"
    {
#line 1499 "hlds.assertion.c"
      hlds__assertion____Compare____subst_0_0(&hlds__assertion__conv0_HeadVar__1_1, ((MR_Word) hlds__assertion__wrapper_arg_2), ((MR_Word) hlds__assertion__wrapper_arg_3));
    }
#line 1502 "hlds.assertion.c"
    *hlds__assertion__wrapper_arg_1 = ((MR_Box) (hlds__assertion__conv0_HeadVar__1_1));
#line 1504 "hlds.assertion.c"
  }
#line 1506 "hlds.assertion.c"
}

#line 305 "assertion.m"
static void MR_CALL 
hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0_1(
#line 305 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 305 "assertion.m"
{
#line 305 "assertion.m"
  {
#line 305 "assertion.m"
    struct hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_0_s *) hlds__assertion__env_ptr_arg;

#line 305 "assertion.m"
    *((hlds__assertion__env_ptr)->hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__wrapper_arg_1) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__conv0_HeadVar__5_5));
#line 305 "assertion.m"
    {
#line 305 "assertion.m"
      ((hlds__assertion__env_ptr)->hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__cont)((hlds__assertion__env_ptr)->hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__cont_env_ptr);
#line 305 "assertion.m"
      return;
    }
#line 305 "assertion.m"
  }
#line 305 "assertion.m"
}

#line 305 "assertion.m"
static void MR_CALL 
hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0_2(
#line 305 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 305 "assertion.m"
  MR_Box * hlds__assertion__wrapper_arg_1,
#line 305 "assertion.m"
  MR_Cont hlds__assertion__cont,
#line 305 "assertion.m"
  void * hlds__assertion__cont_env_ptr)
#line 305 "assertion.m"
{
#line 305 "assertion.m"
  {
#line 305 "assertion.m"
    struct hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_0_s hlds__assertion__env;

#line 305 "assertion.m"
    (hlds__assertion__env).hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__wrapper_arg_1 = hlds__assertion__wrapper_arg_1;
#line 305 "assertion.m"
    (hlds__assertion__env).hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__cont = hlds__assertion__cont;
#line 305 "assertion.m"
    (hlds__assertion__env).hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__cont_env_ptr = hlds__assertion__cont_env_ptr;
#line 305 "assertion.m"
    {
#line 305 "assertion.m"
      MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

#line 305 "assertion.m"
      {
#line 305 "assertion.m"
        hlds__assertion__update_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 6))), &(hlds__assertion__env).hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__conv0_HeadVar__5_5, hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0_1, &hlds__assertion__env);
      }
#line 305 "assertion.m"
    }
#line 305 "assertion.m"
  }
#line 305 "assertion.m"
}

#line 110 "assertion.m"
MR_bool MR_CALL 
hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0(
#line 110 "assertion.m"
  MR_Word hlds__assertion__Module_6,
#line 110 "assertion.m"
  MR_Integer hlds__assertion__AssertId_7,
#line 110 "assertion.m"
  MR_Word hlds__assertion__CallVars_9,
#line 110 "assertion.m"
  MR_Word * hlds__assertion__HeadVar__5_5)
#line 110 "assertion.m"
{
#line 297 "assertion.m"
  {
#line 297 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 297 "assertion.m"
    MR_Word hlds__assertion__TypeInfo_26_26;
#line 297 "assertion.m"
    MR_Word hlds__assertion__GoalInfo_13;
#line 297 "assertion.m"
    MR_Word hlds__assertion__P_14;
#line 297 "assertion.m"
    MR_Word hlds__assertion__Q_15;
#line 297 "assertion.m"
    MR_Word hlds__assertion__UniversiallyQuantifiedVars_16;
#line 297 "assertion.m"
    MR_Word hlds__assertion__PCalls_17;
#line 297 "assertion.m"
    MR_Word hlds__assertion__QCalls_18;
#line 297 "assertion.m"
    MR_Word hlds__assertion__V_20_20;
#line 297 "assertion.m"
    MR_Word hlds__assertion__V_22_22;
#line 297 "assertion.m"
    MR_Word hlds__assertion__V_23_23;
#line 297 "assertion.m"
    MR_Word hlds__assertion__Goal_29;
#line 297 "assertion.m"
    MR_Word hlds__assertion__V_31_31;
#line 297 "assertion.m"
    MR_Word hlds__assertion__V_32_32;
#line 297 "assertion.m"
    MR_Word hlds__assertion__GoalExpr0_35;
#line 297 "assertion.m"
    MR_Word hlds__assertion__Goal_42;
#line 297 "assertion.m"
    MR_Word hlds__assertion__V_44_44;
#line 297 "assertion.m"
    MR_Word hlds__assertion__V_45_45;
#line 297 "assertion.m"
    MR_Word hlds__assertion__GoalExpr0_48;
#line 298 "assertion.m"
    MR_Word hlds__assertion__GoalExpr_12;
#line 436 "assertion.m"
    MR_Word hlds__assertion___Context_36;
#line 442 "assertion.m"
    MR_Word hlds__assertion__Goal1_38;
#line 438 "assertion.m"
    MR_Word hlds__assertion__Reason_37;
#line 439 "assertion.m"
    MR_Word hlds__assertion__V_39_39;
#line 431 "assertion.m"
    MR_Word hlds__assertion__V_30_30;
#line 436 "assertion.m"
    MR_Word hlds__assertion___Context_49;
#line 442 "assertion.m"
    MR_Word hlds__assertion__Goal1_51;
#line 438 "assertion.m"
    MR_Word hlds__assertion__Reason_50;
#line 439 "assertion.m"
    MR_Word hlds__assertion__V_52_52;
#line 431 "assertion.m"
    MR_Word hlds__assertion__V_43_43;
#line 306 "assertion.m"
    MR_Word hlds__assertion__V_19_19;

#line 298 "assertion.m"
    {
#line 298 "assertion.m"
      hlds__assertion__assert_id_goal_3_p_0(hlds__assertion__Module_6, hlds__assertion__AssertId_7, &hlds__assertion__V_20_20);
    }
#line 298 "assertion.m"
    hlds__assertion__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_20_20, (MR_Integer) 0)));
#line 298 "assertion.m"
    hlds__assertion__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_20_20, (MR_Integer) 1)));
#line 299 "assertion.m"
    {
#line 299 "assertion.m"
      hlds__assertion__succeeded = hlds__assertion__goal_is_equivalence_3_p_0(hlds__assertion__V_20_20, &hlds__assertion__P_14, &hlds__assertion__Q_15);
    }
#line 297 "assertion.m"
    if (hlds__assertion__succeeded)
#line 297 "assertion.m"
      {
#line 300 "assertion.m"
        {
#line 300 "assertion.m"
          hlds__assertion__UniversiallyQuantifiedVars_16 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__assertion__GoalInfo_13);
        }
#line 436 "assertion.m"
        hlds__assertion__GoalExpr0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_14, (MR_Integer) 0)));
#line 436 "assertion.m"
        hlds__assertion___Context_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_14, (MR_Integer) 1)));
#line 438 "assertion.m"
        hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExpr0_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_35, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 438 "assertion.m"
        if (hlds__assertion__succeeded)
#line 438 "assertion.m"
          {
#line 438 "assertion.m"
            hlds__assertion__Reason_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_35, (MR_Integer) 1)));
#line 438 "assertion.m"
            hlds__assertion__Goal1_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_35, (MR_Integer) 2)));
#line 439 "assertion.m"
            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Reason_37)) == (MR_mktag((MR_Integer) 0)));
#line 439 "assertion.m"
            if (hlds__assertion__succeeded)
#line 439 "assertion.m"
              hlds__assertion__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Reason_37, (MR_Integer) 0)));
#line 438 "assertion.m"
          }
#line 442 "assertion.m"
        if (hlds__assertion__succeeded)
#line 441 "assertion.m"
          hlds__assertion__Goal_29 = hlds__assertion__Goal1_38;
#line 442 "assertion.m"
        else
#line 443 "assertion.m"
          hlds__assertion__Goal_29 = hlds__assertion__P_14;
#line 431 "assertion.m"
        hlds__assertion__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_29, (MR_Integer) 0)));
#line 431 "assertion.m"
        hlds__assertion__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_29, (MR_Integer) 1)));
#line 431 "assertion.m"
        hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_31_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_31_31, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 431 "assertion.m"
        if (hlds__assertion__succeeded)
#line 431 "assertion.m"
          {
#line 431 "assertion.m"
            hlds__assertion__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_31_31, (MR_Integer) 1)));
#line 431 "assertion.m"
            hlds__assertion__PCalls_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_31_31, (MR_Integer) 2)));
#line 431 "assertion.m"
            hlds__assertion__succeeded = (hlds__assertion__V_32_32 == (MR_Integer) 0);
#line 297 "assertion.m"
            if (hlds__assertion__succeeded)
#line 297 "assertion.m"
              {
#line 436 "assertion.m"
                hlds__assertion__GoalExpr0_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_15, (MR_Integer) 0)));
#line 436 "assertion.m"
                hlds__assertion___Context_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_15, (MR_Integer) 1)));
#line 438 "assertion.m"
                hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExpr0_48)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_48, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 438 "assertion.m"
                if (hlds__assertion__succeeded)
#line 438 "assertion.m"
                  {
#line 438 "assertion.m"
                    hlds__assertion__Reason_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_48, (MR_Integer) 1)));
#line 438 "assertion.m"
                    hlds__assertion__Goal1_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_48, (MR_Integer) 2)));
#line 439 "assertion.m"
                    hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Reason_50)) == (MR_mktag((MR_Integer) 0)));
#line 439 "assertion.m"
                    if (hlds__assertion__succeeded)
#line 439 "assertion.m"
                      hlds__assertion__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Reason_50, (MR_Integer) 0)));
#line 438 "assertion.m"
                  }
#line 442 "assertion.m"
                if (hlds__assertion__succeeded)
#line 441 "assertion.m"
                  hlds__assertion__Goal_42 = hlds__assertion__Goal1_51;
#line 442 "assertion.m"
                else
#line 443 "assertion.m"
                  hlds__assertion__Goal_42 = hlds__assertion__Q_15;
#line 431 "assertion.m"
                hlds__assertion__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_42, (MR_Integer) 0)));
#line 431 "assertion.m"
                hlds__assertion__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_42, (MR_Integer) 1)));
#line 431 "assertion.m"
                hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_44_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_44_44, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 431 "assertion.m"
                if (hlds__assertion__succeeded)
#line 431 "assertion.m"
                  {
#line 431 "assertion.m"
                    hlds__assertion__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_44_44, (MR_Integer) 1)));
#line 431 "assertion.m"
                    hlds__assertion__QCalls_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_44_44, (MR_Integer) 2)));
#line 431 "assertion.m"
                    hlds__assertion__succeeded = (hlds__assertion__V_45_45 == (MR_Integer) 0);
#line 297 "assertion.m"
                    if (hlds__assertion__succeeded)
#line 297 "assertion.m"
                      {
#line 1777 "hlds.assertion.c"
                        hlds__assertion__TypeInfo_26_26 = (MR_Word) &hlds__assertion_scalar_common_2[0];
#line 305 "assertion.m"
                        {
#line 305 "assertion.m"
                          hlds__assertion__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 305 "assertion.m"
                          MR_hl_field(MR_mktag(0), hlds__assertion__V_22_22, 0) = ((MR_Box) (&hlds__assertion_scalar_common_6[0]));
#line 305 "assertion.m"
                          MR_hl_field(MR_mktag(0), hlds__assertion__V_22_22, 1) = ((MR_Box) (hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0_2));
#line 305 "assertion.m"
                          MR_hl_field(MR_mktag(0), hlds__assertion__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 305 "assertion.m"
                          MR_hl_field(MR_mktag(0), hlds__assertion__V_22_22, 3) = ((MR_Box) (hlds__assertion__PCalls_17));
#line 305 "assertion.m"
                          MR_hl_field(MR_mktag(0), hlds__assertion__V_22_22, 4) = ((MR_Box) (hlds__assertion__QCalls_18));
#line 305 "assertion.m"
                          MR_hl_field(MR_mktag(0), hlds__assertion__V_22_22, 5) = ((MR_Box) (hlds__assertion__UniversiallyQuantifiedVars_16));
#line 305 "assertion.m"
                          MR_hl_field(MR_mktag(0), hlds__assertion__V_22_22, 6) = ((MR_Box) (hlds__assertion__CallVars_9));
#line 305 "assertion.m"
                        }
#line 304 "assertion.m"
                        {
#line 304 "assertion.m"
                          mercury__solutions__solutions_2_p_1(hlds__assertion__TypeInfo_26_26, hlds__assertion__V_22_22, &hlds__assertion__V_23_23);
                        }
#line 306 "assertion.m"
                        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 306 "assertion.m"
                        if (hlds__assertion__succeeded)
#line 306 "assertion.m"
                          {
#line 306 "assertion.m"
                            *hlds__assertion__HeadVar__5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_23_23, (MR_Integer) 0)));
#line 306 "assertion.m"
                            hlds__assertion__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_23_23, (MR_Integer) 1)));
#line 306 "assertion.m"
                          }
#line 297 "assertion.m"
                      }
#line 431 "assertion.m"
                  }
#line 297 "assertion.m"
              }
#line 431 "assertion.m"
          }
#line 297 "assertion.m"
      }
#line 297 "assertion.m"
    return hlds__assertion__succeeded;
#line 297 "assertion.m"
  }
#line 110 "assertion.m"
}

#line 414 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__predicate_call__414__1_1_p_0(
#line 414 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_35)
#line 414 "assertion.m"
{
#line 414 "assertion.m"
  {
#line 414 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 415 "assertion.m"
    MR_Word hlds__assertion__UnifyRhs_18;
#line 415 "assertion.m"
    MR_Word hlds__assertion__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_35, (MR_Integer) 0)));
#line 415 "assertion.m"
    MR_Word hlds__assertion__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_35, (MR_Integer) 1)));
#line 415 "assertion.m"
    MR_Word hlds__assertion__V_17_17;
#line 415 "assertion.m"
    MR_Word hlds__assertion__V_19_19;
#line 415 "assertion.m"
    MR_Word hlds__assertion__V_20_20;
#line 415 "assertion.m"
    MR_Word hlds__assertion__V_21_21;
#line 416 "assertion.m"
    MR_Word hlds__assertion__V_23_23;
#line 416 "assertion.m"
    MR_Word hlds__assertion__V_24_24;
#line 416 "assertion.m"
    MR_Word hlds__assertion__V_25_25;

#line 415 "assertion.m"
    hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 415 "assertion.m"
    if (hlds__assertion__succeeded)
#line 415 "assertion.m"
      {
#line 415 "assertion.m"
        hlds__assertion__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_36_36, (MR_Integer) 0)));
#line 415 "assertion.m"
        hlds__assertion__UnifyRhs_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_36_36, (MR_Integer) 1)));
#line 415 "assertion.m"
        hlds__assertion__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_36_36, (MR_Integer) 2)));
#line 415 "assertion.m"
        hlds__assertion__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_36_36, (MR_Integer) 3)));
#line 415 "assertion.m"
        hlds__assertion__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_36_36, (MR_Integer) 4)));
#line 416 "assertion.m"
        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__UnifyRhs_18)) == (MR_mktag((MR_Integer) 1)));
#line 416 "assertion.m"
        if (hlds__assertion__succeeded)
#line 416 "assertion.m"
          {
#line 416 "assertion.m"
            hlds__assertion__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRhs_18, (MR_Integer) 0)));
#line 416 "assertion.m"
            hlds__assertion__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRhs_18, (MR_Integer) 1)));
#line 416 "assertion.m"
            hlds__assertion__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRhs_18, (MR_Integer) 2)));
#line 416 "assertion.m"
          }
#line 415 "assertion.m"
      }
#line 414 "assertion.m"
    hlds__assertion__succeeded = !(hlds__assertion__succeeded);
#line 414 "assertion.m"
    return hlds__assertion__succeeded;
#line 414 "assertion.m"
  }
#line 414 "assertion.m"
}

#line 336 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__update__336__1_2_p_0(
#line 336 "assertion.m"
  MR_Word hlds__assertion__SA_15,
#line 336 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_50)
#line 336 "assertion.m"
{
#line 336 "assertion.m"
  {
#line 336 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 336 "assertion.m"
    MR_Word hlds__assertion__X_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_50, (MR_Integer) 0)));
#line 336 "assertion.m"
    MR_Word hlds__assertion___Y_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_50, (MR_Integer) 1)));

#line 336 "assertion.m"
    {
#line 336 "assertion.m"
      return hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__X_59)), ((MR_Box) (hlds__assertion__SA_15)));
    }
#line 336 "assertion.m"
    return hlds__assertion__succeeded;
#line 336 "assertion.m"
  }
#line 336 "assertion.m"
}

#line 334 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__update__334__1_2_p_0(
#line 334 "assertion.m"
  MR_Word hlds__assertion__S0_25,
#line 334 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_45)
#line 334 "assertion.m"
{
#line 334 "assertion.m"
  {
#line 334 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 334 "assertion.m"
    MR_Word hlds__assertion__X_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_45, (MR_Integer) 0)));
#line 334 "assertion.m"
    MR_Word hlds__assertion___Y_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_45, (MR_Integer) 1)));

#line 334 "assertion.m"
    {
#line 334 "assertion.m"
      return hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__X_56)), ((MR_Box) (hlds__assertion__S0_25)));
    }
#line 334 "assertion.m"
    return hlds__assertion__succeeded;
#line 334 "assertion.m"
  }
#line 334 "assertion.m"
}

#line 323 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__update__323__1_1_p_0(
#line 323 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_32)
#line 323 "assertion.m"
{
#line 323 "assertion.m"
  {
#line 323 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 323 "assertion.m"
    MR_Word hlds__assertion__X_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_32, (MR_Integer) 0)));
#line 323 "assertion.m"
    MR_Word hlds__assertion__Y_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_32, (MR_Integer) 1)));

#line 323 "assertion.m"
    {
#line 323 "assertion.m"
      hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_2[0], ((MR_Box) (hlds__assertion__X_53)), ((MR_Box) (hlds__assertion__Y_54)));
    }
#line 323 "assertion.m"
    hlds__assertion__succeeded = !(hlds__assertion__succeeded);
#line 323 "assertion.m"
    return hlds__assertion__succeeded;
#line 323 "assertion.m"
  }
#line 323 "assertion.m"
}

#line 287 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__process_one_side__287__1_1_p_0(
#line 287 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_17)
#line 287 "assertion.m"
{
#line 287 "assertion.m"
  {
#line 287 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 287 "assertion.m"
    MR_Word hlds__assertion__X_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_17, (MR_Integer) 0)));
#line 287 "assertion.m"
    MR_Word hlds__assertion__Y_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_17, (MR_Integer) 1)));

#line 287 "assertion.m"
    {
#line 287 "assertion.m"
      hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__X_19)), ((MR_Box) (hlds__assertion__Y_20)));
    }
#line 287 "assertion.m"
    hlds__assertion__succeeded = !(hlds__assertion__succeeded);
#line 287 "assertion.m"
    return hlds__assertion__succeeded;
#line 287 "assertion.m"
  }
#line 287 "assertion.m"
}

#line 249 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__associative__249__1_2_p_0(
#line 249 "assertion.m"
  MR_Word hlds__assertion__B_24,
#line 249 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_59)
#line 249 "assertion.m"
{
#line 249 "assertion.m"
  {
#line 249 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 249 "assertion.m"
    MR_Word hlds__assertion__X_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_59, (MR_Integer) 0)));
#line 249 "assertion.m"
    MR_Word hlds__assertion___Y_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_59, (MR_Integer) 1)));

#line 249 "assertion.m"
    {
#line 249 "assertion.m"
      return hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__X_69)), ((MR_Box) (hlds__assertion__B_24)));
    }
#line 249 "assertion.m"
    return hlds__assertion__succeeded;
#line 249 "assertion.m"
  }
#line 249 "assertion.m"
}

#line 247 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__associative__247__1_2_p_0(
#line 247 "assertion.m"
  MR_Word hlds__assertion__A_23,
#line 247 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_54)
#line 247 "assertion.m"
{
#line 247 "assertion.m"
  {
#line 247 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 247 "assertion.m"
    MR_Word hlds__assertion__X_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_54, (MR_Integer) 0)));
#line 247 "assertion.m"
    MR_Word hlds__assertion___Y_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_54, (MR_Integer) 1)));

#line 247 "assertion.m"
    {
#line 247 "assertion.m"
      return hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__X_66)), ((MR_Box) (hlds__assertion__A_23)));
    }
#line 247 "assertion.m"
    return hlds__assertion__succeeded;
#line 247 "assertion.m"
  }
#line 247 "assertion.m"
}

#line 245 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__associative__245__1_2_p_0(
#line 245 "assertion.m"
  MR_Word hlds__assertion__AB_16,
#line 245 "assertion.m"
  MR_Word hlds__assertion__LambdaHeadVar__1_49)
#line 245 "assertion.m"
{
#line 245 "assertion.m"
  {
#line 245 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 245 "assertion.m"
    MR_Word hlds__assertion__X_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_49, (MR_Integer) 0)));
#line 245 "assertion.m"
    MR_Word hlds__assertion___Y_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_49, (MR_Integer) 1)));

#line 245 "assertion.m"
    {
#line 245 "assertion.m"
      return hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__X_63)), ((MR_Box) (hlds__assertion__AB_16)));
    }
#line 245 "assertion.m"
    return hlds__assertion__succeeded;
#line 245 "assertion.m"
  }
#line 245 "assertion.m"
}

#line 149 "assertion.m"
static void MR_CALL 
hlds__assertion____Compare____subst_0_0(
#line 149 "assertion.m"
  MR_Word * hlds__assertion__HeadVar__1_1,
#line 149 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2,
#line 149 "assertion.m"
  MR_Word hlds__assertion__HeadVar__3_3)
#line 149 "assertion.m"
{
#line 149 "assertion.m"
  {
#line 149 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 149 "assertion.m"
    MR_Word hlds__assertion__Cast_HeadVar1_4 = hlds__assertion__HeadVar__2_2;
#line 149 "assertion.m"
    MR_Word hlds__assertion__Cast_HeadVar2_5 = hlds__assertion__HeadVar__3_3;

#line 149 "assertion.m"
    {
#line 149 "assertion.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__assertion_scalar_common_2[2], hlds__assertion__HeadVar__1_1, ((MR_Box) (hlds__assertion__Cast_HeadVar1_4)), ((MR_Box) (hlds__assertion__Cast_HeadVar2_5)));
#line 149 "assertion.m"
      return;
    }
#line 149 "assertion.m"
  }
#line 149 "assertion.m"
}

#line 149 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion____Unify____subst_0_0(
#line 149 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 149 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2)
#line 149 "assertion.m"
{
#line 149 "assertion.m"
  {
#line 149 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 149 "assertion.m"
    MR_Word hlds__assertion__Cast_HeadVar1_3 = hlds__assertion__HeadVar__1_1;
#line 149 "assertion.m"
    MR_Word hlds__assertion__Cast_HeadVar2_4 = hlds__assertion__HeadVar__2_2;

#line 149 "assertion.m"
    {
#line 149 "assertion.m"
      return hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_2[2], ((MR_Box) (hlds__assertion__Cast_HeadVar1_3)), ((MR_Box) (hlds__assertion__Cast_HeadVar2_4)));
    }
#line 149 "assertion.m"
    return hlds__assertion__succeeded;
#line 149 "assertion.m"
  }
#line 149 "assertion.m"
}

#line 774 "assertion.m"
static void MR_CALL 
hlds__assertion__normalise_goals_2_p_0(
#line 774 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 774 "assertion.m"
  MR_Word * hlds__assertion__HeadVar__2_2)
#line 774 "assertion.m"
{
#line 776 "assertion.m"
  {
#line 776 "assertion.m"
    MR_bool hlds__assertion__succeeded;

#line 776 "assertion.m"
    if ((hlds__assertion__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 776 "assertion.m"
      *hlds__assertion__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 776 "assertion.m"
    else
#line 777 "assertion.m"
      {
#line 777 "assertion.m"
        MR_Word hlds__assertion__Goal0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
#line 777 "assertion.m"
        MR_Word hlds__assertion__Goals0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
#line 777 "assertion.m"
        MR_Word hlds__assertion__Goal_5;
#line 777 "assertion.m"
        MR_Word hlds__assertion__Goals_6;
#line 777 "assertion.m"
        MR_Word hlds__assertion__GoalExpr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal0_3, (MR_Integer) 0)));
#line 777 "assertion.m"
        MR_Word hlds__assertion__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal0_3, (MR_Integer) 1)));
#line 777 "assertion.m"
        MR_Word hlds__assertion__GoalExpr_11;

#line 688 "assertion.m"
        {
#line 688 "assertion.m"
          hlds__assertion__normalise_goal_expr_2_p_0(hlds__assertion__GoalExpr0_9, &hlds__assertion__GoalExpr_11);
        }
#line 689 "assertion.m"
        {
#line 689 "assertion.m"
          hlds__assertion__Goal_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 689 "assertion.m"
          MR_hl_field(MR_mktag(0), hlds__assertion__Goal_5, 0) = ((MR_Box) (hlds__assertion__GoalExpr_11));
#line 689 "assertion.m"
          MR_hl_field(MR_mktag(0), hlds__assertion__Goal_5, 1) = ((MR_Box) (hlds__assertion__GoalInfo_10));
#line 689 "assertion.m"
        }
#line 779 "assertion.m"
        {
#line 779 "assertion.m"
          hlds__assertion__normalise_goals_2_p_0(hlds__assertion__Goals0_4, &hlds__assertion__Goals_6);
        }
#line 777 "assertion.m"
        {
#line 777 "assertion.m"
          MR_Word base;
#line 777 "assertion.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 777 "assertion.m"
          *hlds__assertion__HeadVar__2_2 = base;
#line 777 "assertion.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__assertion__Goal_5));
#line 777 "assertion.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__assertion__Goals_6));
#line 777 "assertion.m"
        }
#line 777 "assertion.m"
      }
#line 776 "assertion.m"
  }
#line 774 "assertion.m"
}

#line 765 "assertion.m"
static void MR_CALL 
hlds__assertion__normalise_cases_2_p_0(
#line 765 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 765 "assertion.m"
  MR_Word * hlds__assertion__HeadVar__2_2)
#line 765 "assertion.m"
{
#line 767 "assertion.m"
  {
#line 767 "assertion.m"
    MR_bool hlds__assertion__succeeded;

#line 767 "assertion.m"
    if ((hlds__assertion__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 767 "assertion.m"
      *hlds__assertion__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 767 "assertion.m"
    else
#line 768 "assertion.m"
      {
#line 768 "assertion.m"
        MR_Word hlds__assertion__Case0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
#line 768 "assertion.m"
        MR_Word hlds__assertion__Cases0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
#line 768 "assertion.m"
        MR_Word hlds__assertion__Case_5;
#line 768 "assertion.m"
        MR_Word hlds__assertion__Cases_6;
#line 768 "assertion.m"
        MR_Word hlds__assertion__MainConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Case0_3, (MR_Integer) 0)));
#line 768 "assertion.m"
        MR_Word hlds__assertion__OtherConsIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Case0_3, (MR_Integer) 1)));
#line 768 "assertion.m"
        MR_Word hlds__assertion__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Case0_3, (MR_Integer) 2)));
#line 768 "assertion.m"
        MR_Word hlds__assertion__Goal_10;
#line 768 "assertion.m"
        MR_Word hlds__assertion__GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal0_9, (MR_Integer) 0)));
#line 768 "assertion.m"
        MR_Word hlds__assertion__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal0_9, (MR_Integer) 1)));
#line 768 "assertion.m"
        MR_Word hlds__assertion__GoalExpr_15;

#line 688 "assertion.m"
        {
#line 688 "assertion.m"
          hlds__assertion__normalise_goal_expr_2_p_0(hlds__assertion__GoalExpr0_13, &hlds__assertion__GoalExpr_15);
        }
#line 689 "assertion.m"
        {
#line 689 "assertion.m"
          hlds__assertion__Goal_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 689 "assertion.m"
          MR_hl_field(MR_mktag(0), hlds__assertion__Goal_10, 0) = ((MR_Box) (hlds__assertion__GoalExpr_15));
#line 689 "assertion.m"
          MR_hl_field(MR_mktag(0), hlds__assertion__Goal_10, 1) = ((MR_Box) (hlds__assertion__GoalInfo_14));
#line 689 "assertion.m"
        }
#line 771 "assertion.m"
        {
#line 771 "assertion.m"
          hlds__assertion__Case_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 771 "assertion.m"
          MR_hl_field(MR_mktag(0), hlds__assertion__Case_5, 0) = ((MR_Box) (hlds__assertion__MainConsId_7));
#line 771 "assertion.m"
          MR_hl_field(MR_mktag(0), hlds__assertion__Case_5, 1) = ((MR_Box) (hlds__assertion__OtherConsIds_8));
#line 771 "assertion.m"
          MR_hl_field(MR_mktag(0), hlds__assertion__Case_5, 2) = ((MR_Box) (hlds__assertion__Goal_10));
#line 771 "assertion.m"
        }
#line 772 "assertion.m"
        {
#line 772 "assertion.m"
          hlds__assertion__normalise_cases_2_p_0(hlds__assertion__Cases0_4, &hlds__assertion__Cases_6);
        }
#line 768 "assertion.m"
        {
#line 768 "assertion.m"
          MR_Word base;
#line 768 "assertion.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 768 "assertion.m"
          *hlds__assertion__HeadVar__2_2 = base;
#line 768 "assertion.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__assertion__Case_5));
#line 768 "assertion.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__assertion__Cases_6));
#line 768 "assertion.m"
        }
#line 768 "assertion.m"
      }
#line 767 "assertion.m"
  }
#line 765 "assertion.m"
}

#line 757 "assertion.m"
static void MR_CALL 
hlds__assertion__normalise_conj_2_p_0(
#line 757 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 757 "assertion.m"
  MR_Word * hlds__assertion__HeadVar__2_2)
#line 757 "assertion.m"
{
#line 759 "assertion.m"
  {
#line 759 "assertion.m"
    MR_bool hlds__assertion__succeeded;

#line 759 "assertion.m"
    if ((hlds__assertion__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 759 "assertion.m"
      *hlds__assertion__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 759 "assertion.m"
    else
#line 760 "assertion.m"
      {
#line 760 "assertion.m"
        MR_Word hlds__assertion__Goal0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
#line 760 "assertion.m"
        MR_Word hlds__assertion__Goals0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
#line 760 "assertion.m"
        MR_Word hlds__assertion__ConjGoals_6;
#line 760 "assertion.m"
        MR_Word hlds__assertion__Goals1_7;

#line 761 "assertion.m"
        {
#line 761 "assertion.m"
          hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__assertion__Goal0_3, &hlds__assertion__ConjGoals_6);
        }
#line 762 "assertion.m"
        {
#line 762 "assertion.m"
          hlds__assertion__normalise_conj_2_p_0(hlds__assertion__Goals0_4, &hlds__assertion__Goals1_7);
        }
#line 763 "assertion.m"
        {
#line 763 "assertion.m"
          mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__assertion__ConjGoals_6, hlds__assertion__Goals1_7, hlds__assertion__HeadVar__2_2);
#line 763 "assertion.m"
          return;
        }
#line 760 "assertion.m"
      }
#line 759 "assertion.m"
  }
#line 757 "assertion.m"
}

#line 691 "assertion.m"
static void MR_CALL 
hlds__assertion__normalise_goal_expr_2_p_0(
#line 691 "assertion.m"
  MR_Word hlds__assertion__GoalExpr0_3,
#line 691 "assertion.m"
  MR_Word * hlds__assertion__GoalExpr_4)
#line 691 "assertion.m"
{
#line 699 "assertion.m"
  {
#line 699 "assertion.m"
    MR_bool hlds__assertion__succeeded;

#line 699 "assertion.m"
#line 699 "assertion.m"
    switch (MR_tag((MR_Word) hlds__assertion__GoalExpr0_3)) {
#line 699 "assertion.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 699 "assertion.m"
      case (MR_Integer) 0:
#line 720 "assertion.m"
        {
#line 720 "assertion.m"
          MR_Word hlds__assertion__SubGoal0_35 = (MR_Word) MR_body(((MR_Word) hlds__assertion__GoalExpr0_3), (MR_Integer) 0);
#line 720 "assertion.m"
          MR_Word hlds__assertion__SubGoal_36;
#line 720 "assertion.m"
          MR_Word hlds__assertion__GoalExpr0_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__SubGoal0_35, (MR_Integer) 0)));
#line 720 "assertion.m"
          MR_Word hlds__assertion__GoalInfo_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__SubGoal0_35, (MR_Integer) 1)));
#line 720 "assertion.m"
          MR_Word hlds__assertion__GoalExpr_93;

#line 688 "assertion.m"
          {
#line 688 "assertion.m"
            hlds__assertion__normalise_goal_expr_2_p_0(hlds__assertion__GoalExpr0_91, &hlds__assertion__GoalExpr_93);
          }
#line 689 "assertion.m"
          {
#line 689 "assertion.m"
            hlds__assertion__SubGoal_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 689 "assertion.m"
            MR_hl_field(MR_mktag(0), hlds__assertion__SubGoal_36, 0) = ((MR_Box) (hlds__assertion__GoalExpr_93));
#line 689 "assertion.m"
            MR_hl_field(MR_mktag(0), hlds__assertion__SubGoal_36, 1) = ((MR_Box) (hlds__assertion__GoalInfo_92));
#line 689 "assertion.m"
          }
#line 722 "assertion.m"
          *hlds__assertion__GoalExpr_4 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__assertion__SubGoal_36);
#line 720 "assertion.m"
        }
#line 699 "assertion.m"
        break;
#line 699 "assertion.m"
      case (MR_Integer) 1:
#line 699 "assertion.m"
      case (MR_Integer) 2:
#line 700 "assertion.m"
        *hlds__assertion__GoalExpr_4 = hlds__assertion__GoalExpr0_3;
#line 699 "assertion.m"
        break;
#line 699 "assertion.m"
      case (MR_Integer) 3:
#line 699 "assertion.m"
#line 699 "assertion.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 0)))) {
#line 699 "assertion.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 699 "assertion.m"
          case (MR_Integer) 0:
#line 699 "assertion.m"
          case (MR_Integer) 1:
#line 700 "assertion.m"
            *hlds__assertion__GoalExpr_4 = hlds__assertion__GoalExpr0_3;
#line 699 "assertion.m"
            break;
#line 699 "assertion.m"
          case (MR_Integer) 2:
#line 702 "assertion.m"
            {
#line 702 "assertion.m"
              MR_Word hlds__assertion__ConjType_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 1)));
#line 702 "assertion.m"
              MR_Word hlds__assertion__Goals0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 2)));
#line 702 "assertion.m"
              MR_Word hlds__assertion__Goals_30;

#line 706 "assertion.m"
#line 706 "assertion.m"
              switch (hlds__assertion__ConjType_28) {
#line 706 "assertion.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 706 "assertion.m"
                case (MR_Integer) 1:
#line 708 "assertion.m"
                  {
#line 708 "assertion.m"
                    hlds__assertion__normalise_goals_2_p_0(hlds__assertion__Goals0_29, &hlds__assertion__Goals_30);
                  }
#line 706 "assertion.m"
                  break;
#line 706 "assertion.m"
                case (MR_Integer) 0:
#line 705 "assertion.m"
                  {
#line 705 "assertion.m"
                    hlds__assertion__normalise_conj_2_p_0(hlds__assertion__Goals0_29, &hlds__assertion__Goals_30);
                  }
#line 706 "assertion.m"
                  break;
#line 706 "assertion.m"
              }
#line 710 "assertion.m"
              {
#line 710 "assertion.m"
                MR_Word base;
#line 710 "assertion.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 710 "assertion.m"
                *hlds__assertion__GoalExpr_4 = base;
#line 710 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 710 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__assertion__ConjType_28));
#line 710 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__assertion__Goals_30));
#line 710 "assertion.m"
              }
#line 702 "assertion.m"
            }
#line 699 "assertion.m"
            break;
#line 699 "assertion.m"
          case (MR_Integer) 3:
#line 716 "assertion.m"
            {
#line 716 "assertion.m"
              MR_Word hlds__assertion__Goals0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 1)));
#line 716 "assertion.m"
              MR_Word hlds__assertion__Goals_62;

#line 717 "assertion.m"
              {
#line 717 "assertion.m"
                hlds__assertion__normalise_goals_2_p_0(hlds__assertion__Goals0_61, &hlds__assertion__Goals_62);
              }
#line 718 "assertion.m"
              {
#line 718 "assertion.m"
                MR_Word base;
#line 718 "assertion.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "assertion.m"
                *hlds__assertion__GoalExpr_4 = base;
#line 718 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 718 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__assertion__Goals_62));
#line 718 "assertion.m"
              }
#line 716 "assertion.m"
            }
#line 699 "assertion.m"
            break;
#line 699 "assertion.m"
          case (MR_Integer) 4:
#line 712 "assertion.m"
            {
#line 712 "assertion.m"
              MR_Word hlds__assertion__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 1)));
#line 712 "assertion.m"
              MR_Word hlds__assertion__CanFail_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 2)));
#line 712 "assertion.m"
              MR_Word hlds__assertion__Cases0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 3)));
#line 712 "assertion.m"
              MR_Word hlds__assertion__Cases_34;

#line 713 "assertion.m"
              {
#line 713 "assertion.m"
                hlds__assertion__normalise_cases_2_p_0(hlds__assertion__Cases0_33, &hlds__assertion__Cases_34);
              }
#line 714 "assertion.m"
              {
#line 714 "assertion.m"
                MR_Word base;
#line 714 "assertion.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 714 "assertion.m"
                *hlds__assertion__GoalExpr_4 = base;
#line 714 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 714 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__assertion__Var_31));
#line 714 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__assertion__CanFail_32));
#line 714 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (hlds__assertion__Cases_34));
#line 714 "assertion.m"
              }
#line 712 "assertion.m"
            }
#line 699 "assertion.m"
            break;
#line 699 "assertion.m"
          case (MR_Integer) 5:
#line 724 "assertion.m"
            {
#line 724 "assertion.m"
              MR_Word hlds__assertion__Reason_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 1)));
#line 724 "assertion.m"
              MR_Word hlds__assertion__SubGoal0_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 2)));
#line 724 "assertion.m"
              MR_Word hlds__assertion__SubGoal_64;
#line 724 "assertion.m"
              MR_Word hlds__assertion__GoalExpr0_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__SubGoal0_63, (MR_Integer) 0)));
#line 724 "assertion.m"
              MR_Word hlds__assertion__GoalInfo_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__SubGoal0_63, (MR_Integer) 1)));
#line 724 "assertion.m"
              MR_Word hlds__assertion__GoalExpr_98;

#line 688 "assertion.m"
              {
#line 688 "assertion.m"
                hlds__assertion__normalise_goal_expr_2_p_0(hlds__assertion__GoalExpr0_96, &hlds__assertion__GoalExpr_98);
              }
#line 689 "assertion.m"
              {
#line 689 "assertion.m"
                hlds__assertion__SubGoal_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 689 "assertion.m"
                MR_hl_field(MR_mktag(0), hlds__assertion__SubGoal_64, 0) = ((MR_Box) (hlds__assertion__GoalExpr_98));
#line 689 "assertion.m"
                MR_hl_field(MR_mktag(0), hlds__assertion__SubGoal_64, 1) = ((MR_Box) (hlds__assertion__GoalInfo_97));
#line 689 "assertion.m"
              }
#line 726 "assertion.m"
              {
#line 726 "assertion.m"
                MR_Word base;
#line 726 "assertion.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 726 "assertion.m"
                *hlds__assertion__GoalExpr_4 = base;
#line 726 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 726 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__assertion__Reason_37));
#line 726 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__assertion__SubGoal_64));
#line 726 "assertion.m"
              }
#line 724 "assertion.m"
            }
#line 699 "assertion.m"
            break;
#line 699 "assertion.m"
          case (MR_Integer) 6:
#line 728 "assertion.m"
            {
#line 728 "assertion.m"
              MR_Word hlds__assertion__Vars_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 1)));
#line 728 "assertion.m"
              MR_Word hlds__assertion__Cond0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 2)));
#line 728 "assertion.m"
              MR_Word hlds__assertion__Then0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 3)));
#line 728 "assertion.m"
              MR_Word hlds__assertion__Else0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 4)));
#line 728 "assertion.m"
              MR_Word hlds__assertion__Cond_42;
#line 728 "assertion.m"
              MR_Word hlds__assertion__Then_43;
#line 728 "assertion.m"
              MR_Word hlds__assertion__Else_44;
#line 728 "assertion.m"
              MR_Word hlds__assertion__GoalExpr0_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Cond0_39, (MR_Integer) 0)));
#line 728 "assertion.m"
              MR_Word hlds__assertion__GoalInfo_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Cond0_39, (MR_Integer) 1)));
#line 728 "assertion.m"
              MR_Word hlds__assertion__GoalExpr_78;
#line 728 "assertion.m"
              MR_Word hlds__assertion__GoalExpr0_81;
#line 728 "assertion.m"
              MR_Word hlds__assertion__GoalInfo_82;
#line 728 "assertion.m"
              MR_Word hlds__assertion__GoalExpr_83;
#line 728 "assertion.m"
              MR_Word hlds__assertion__GoalExpr0_86;
#line 728 "assertion.m"
              MR_Word hlds__assertion__GoalInfo_87;
#line 728 "assertion.m"
              MR_Word hlds__assertion__GoalExpr_88;

#line 688 "assertion.m"
              {
#line 688 "assertion.m"
                hlds__assertion__normalise_goal_expr_2_p_0(hlds__assertion__GoalExpr0_76, &hlds__assertion__GoalExpr_78);
              }
#line 689 "assertion.m"
              {
#line 689 "assertion.m"
                hlds__assertion__Cond_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 689 "assertion.m"
                MR_hl_field(MR_mktag(0), hlds__assertion__Cond_42, 0) = ((MR_Box) (hlds__assertion__GoalExpr_78));
#line 689 "assertion.m"
                MR_hl_field(MR_mktag(0), hlds__assertion__Cond_42, 1) = ((MR_Box) (hlds__assertion__GoalInfo_77));
#line 689 "assertion.m"
              }
#line 687 "assertion.m"
              hlds__assertion__GoalExpr0_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Then0_40, (MR_Integer) 0)));
#line 687 "assertion.m"
              hlds__assertion__GoalInfo_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Then0_40, (MR_Integer) 1)));
#line 688 "assertion.m"
              {
#line 688 "assertion.m"
                hlds__assertion__normalise_goal_expr_2_p_0(hlds__assertion__GoalExpr0_81, &hlds__assertion__GoalExpr_83);
              }
#line 689 "assertion.m"
              {
#line 689 "assertion.m"
                hlds__assertion__Then_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 689 "assertion.m"
                MR_hl_field(MR_mktag(0), hlds__assertion__Then_43, 0) = ((MR_Box) (hlds__assertion__GoalExpr_83));
#line 689 "assertion.m"
                MR_hl_field(MR_mktag(0), hlds__assertion__Then_43, 1) = ((MR_Box) (hlds__assertion__GoalInfo_82));
#line 689 "assertion.m"
              }
#line 687 "assertion.m"
              hlds__assertion__GoalExpr0_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Else0_41, (MR_Integer) 0)));
#line 687 "assertion.m"
              hlds__assertion__GoalInfo_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Else0_41, (MR_Integer) 1)));
#line 688 "assertion.m"
              {
#line 688 "assertion.m"
                hlds__assertion__normalise_goal_expr_2_p_0(hlds__assertion__GoalExpr0_86, &hlds__assertion__GoalExpr_88);
              }
#line 689 "assertion.m"
              {
#line 689 "assertion.m"
                hlds__assertion__Else_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 689 "assertion.m"
                MR_hl_field(MR_mktag(0), hlds__assertion__Else_44, 0) = ((MR_Box) (hlds__assertion__GoalExpr_88));
#line 689 "assertion.m"
                MR_hl_field(MR_mktag(0), hlds__assertion__Else_44, 1) = ((MR_Box) (hlds__assertion__GoalInfo_87));
#line 689 "assertion.m"
              }
#line 732 "assertion.m"
              {
#line 732 "assertion.m"
                MR_Word base;
#line 732 "assertion.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 732 "assertion.m"
                *hlds__assertion__GoalExpr_4 = base;
#line 732 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 732 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__assertion__Vars_38));
#line 732 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__assertion__Cond_42));
#line 732 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (hlds__assertion__Then_43));
#line 732 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (hlds__assertion__Else_44));
#line 732 "assertion.m"
              }
#line 728 "assertion.m"
            }
#line 699 "assertion.m"
            break;
#line 699 "assertion.m"
          case (MR_Integer) 7:
#line 734 "assertion.m"
            {
#line 734 "assertion.m"
              MR_Word hlds__assertion__ShortHand0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 1)));
#line 734 "assertion.m"
              MR_Word hlds__assertion__ShortHand_54;

#line 742 "assertion.m"
#line 742 "assertion.m"
              switch (MR_tag((MR_Word) hlds__assertion__ShortHand0_45)) {
#line 742 "assertion.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 742 "assertion.m"
                case (MR_Integer) 0:
#line 747 "assertion.m"
                  {
#line 747 "assertion.m"
                    MR_Word hlds__assertion__LHS0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__ShortHand0_45, (MR_Integer) 0)));
#line 747 "assertion.m"
                    MR_Word hlds__assertion__RHS0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__ShortHand0_45, (MR_Integer) 1)));
#line 747 "assertion.m"
                    MR_Word hlds__assertion__LHS_59;
#line 747 "assertion.m"
                    MR_Word hlds__assertion__RHS_60;

#line 748 "assertion.m"
                    {
#line 748 "assertion.m"
                      hlds__assertion__normalise_goal_2_p_0(hlds__assertion__LHS0_57, &hlds__assertion__LHS_59);
                    }
#line 749 "assertion.m"
                    {
#line 749 "assertion.m"
                      hlds__assertion__normalise_goal_2_p_0(hlds__assertion__RHS0_58, &hlds__assertion__RHS_60);
                    }
#line 750 "assertion.m"
                    {
#line 750 "assertion.m"
                      hlds__assertion__ShortHand_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 750 "assertion.m"
                      MR_hl_field(MR_mktag(0), hlds__assertion__ShortHand_54, 0) = ((MR_Box) (hlds__assertion__LHS_59));
#line 750 "assertion.m"
                      MR_hl_field(MR_mktag(0), hlds__assertion__ShortHand_54, 1) = ((MR_Box) (hlds__assertion__RHS_60));
#line 750 "assertion.m"
                    }
#line 747 "assertion.m"
                  }
#line 742 "assertion.m"
                  break;
#line 742 "assertion.m"
                case (MR_Integer) 1:
#line 737 "assertion.m"
                  {
#line 737 "assertion.m"
                    MR_Word hlds__assertion__GoalType_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand0_45, (MR_Integer) 0)));
#line 737 "assertion.m"
                    MR_Word hlds__assertion__Outer_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand0_45, (MR_Integer) 1)));
#line 737 "assertion.m"
                    MR_Word hlds__assertion__Inner_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand0_45, (MR_Integer) 2)));
#line 737 "assertion.m"
                    MR_Word hlds__assertion__MainGoal0_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand0_45, (MR_Integer) 4)));
#line 737 "assertion.m"
                    MR_Word hlds__assertion__OrElseAlternatives0_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand0_45, (MR_Integer) 5)));
#line 737 "assertion.m"
                    MR_Word hlds__assertion__OrElseInners_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand0_45, (MR_Integer) 6)));
#line 737 "assertion.m"
                    MR_Word hlds__assertion__MainGoal_52;
#line 737 "assertion.m"
                    MR_Word hlds__assertion__OrElseAlternatives_53;
#line 737 "assertion.m"
                    MR_Word hlds__assertion__Vars_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand0_45, (MR_Integer) 3)));

#line 738 "assertion.m"
                    {
#line 738 "assertion.m"
                      hlds__assertion__normalise_goal_2_p_0(hlds__assertion__MainGoal0_49, &hlds__assertion__MainGoal_52);
                    }
#line 739 "assertion.m"
                    {
#line 739 "assertion.m"
                      hlds__assertion__normalise_goals_2_p_0(hlds__assertion__OrElseAlternatives0_50, &hlds__assertion__OrElseAlternatives_53);
                    }
#line 740 "assertion.m"
                    {
#line 740 "assertion.m"
                      hlds__assertion__ShortHand_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 740 "assertion.m"
                      MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand_54, 0) = ((MR_Box) (hlds__assertion__GoalType_46));
#line 740 "assertion.m"
                      MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand_54, 1) = ((MR_Box) (hlds__assertion__Outer_47));
#line 740 "assertion.m"
                      MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand_54, 2) = ((MR_Box) (hlds__assertion__Inner_48));
#line 740 "assertion.m"
                      MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand_54, 3) = ((MR_Box) (hlds__assertion__Vars_65));
#line 740 "assertion.m"
                      MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand_54, 4) = ((MR_Box) (hlds__assertion__MainGoal_52));
#line 740 "assertion.m"
                      MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand_54, 5) = ((MR_Box) (hlds__assertion__OrElseAlternatives_53));
#line 740 "assertion.m"
                      MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand_54, 6) = ((MR_Box) (hlds__assertion__OrElseInners_51));
#line 740 "assertion.m"
                    }
#line 737 "assertion.m"
                  }
#line 742 "assertion.m"
                  break;
#line 742 "assertion.m"
                case (MR_Integer) 2:
#line 743 "assertion.m"
                  {
#line 743 "assertion.m"
                    MR_Word hlds__assertion__MaybeIO_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__ShortHand0_45, (MR_Integer) 0)));
#line 743 "assertion.m"
                    MR_Word hlds__assertion__ResultVar_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__ShortHand0_45, (MR_Integer) 1)));
#line 743 "assertion.m"
                    MR_Word hlds__assertion__SubGoal0_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__ShortHand0_45, (MR_Integer) 2)));
#line 743 "assertion.m"
                    MR_Word hlds__assertion__SubGoal_67;

#line 744 "assertion.m"
                    {
#line 744 "assertion.m"
                      hlds__assertion__normalise_goal_2_p_0(hlds__assertion__SubGoal0_66, &hlds__assertion__SubGoal_67);
                    }
#line 745 "assertion.m"
                    {
#line 745 "assertion.m"
                      hlds__assertion__ShortHand_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 745 "assertion.m"
                      MR_hl_field(MR_mktag(2), hlds__assertion__ShortHand_54, 0) = ((MR_Box) (hlds__assertion__MaybeIO_55));
#line 745 "assertion.m"
                      MR_hl_field(MR_mktag(2), hlds__assertion__ShortHand_54, 1) = ((MR_Box) (hlds__assertion__ResultVar_56));
#line 745 "assertion.m"
                      MR_hl_field(MR_mktag(2), hlds__assertion__ShortHand_54, 2) = ((MR_Box) (hlds__assertion__SubGoal_67));
#line 745 "assertion.m"
                    }
#line 743 "assertion.m"
                  }
#line 742 "assertion.m"
                  break;
#line 742 "assertion.m"
              }
#line 752 "assertion.m"
              {
#line 752 "assertion.m"
                MR_Word base;
#line 752 "assertion.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "assertion.m"
                *hlds__assertion__GoalExpr_4 = base;
#line 752 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 752 "assertion.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__assertion__ShortHand_54));
#line 752 "assertion.m"
              }
#line 734 "assertion.m"
            }
#line 699 "assertion.m"
            break;
#line 699 "assertion.m"
        }
#line 699 "assertion.m"
        break;
#line 699 "assertion.m"
    }
#line 699 "assertion.m"
  }
#line 691 "assertion.m"
}

#line 673 "assertion.m"
static void MR_CALL 
hlds__assertion__update_pred_info_4_p_0(
#line 673 "assertion.m"
  MR_Integer hlds__assertion__AssertId_5,
#line 673 "assertion.m"
  MR_Word hlds__assertion__PredId_6,
#line 673 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Module_0_12,
#line 673 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Module_13)
#line 673 "assertion.m"
{
#line 676 "assertion.m"
  {
#line 676 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 676 "assertion.m"
    MR_Word hlds__assertion__PredInfo0_8;
#line 676 "assertion.m"
    MR_Word hlds__assertion__Assertions0_9;
#line 676 "assertion.m"
    MR_Word hlds__assertion__Assertions_10;
#line 676 "assertion.m"
    MR_Word hlds__assertion__PredInfo_11;

#line 677 "assertion.m"
    {
#line 677 "assertion.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__assertion__STATE_VARIABLE_Module_0_12, hlds__assertion__PredId_6, &hlds__assertion__PredInfo0_8);
    }
#line 678 "assertion.m"
    {
#line 678 "assertion.m"
      hlds__hlds_pred__pred_info_get_assertions_2_p_0(hlds__assertion__PredInfo0_8, &hlds__assertion__Assertions0_9);
    }
#line 679 "assertion.m"
    {
#line 679 "assertion.m"
      mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (hlds__assertion__AssertId_5)), hlds__assertion__Assertions0_9, &hlds__assertion__Assertions_10);
    }
#line 680 "assertion.m"
    {
#line 680 "assertion.m"
      hlds__hlds_pred__pred_info_set_assertions_3_p_0(hlds__assertion__Assertions_10, hlds__assertion__PredInfo0_8, &hlds__assertion__PredInfo_11);
    }
#line 681 "assertion.m"
    {
#line 681 "assertion.m"
      hlds__hlds_module__module_info_set_pred_info_4_p_0(hlds__assertion__PredId_6, hlds__assertion__PredInfo_11, hlds__assertion__STATE_VARIABLE_Module_0_12, hlds__assertion__STATE_VARIABLE_Module_13);
#line 681 "assertion.m"
      return;
    }
#line 676 "assertion.m"
  }
#line 673 "assertion.m"
}

#line 641 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_goals_cases_4_p_0(
#line 641 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 641 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2,
#line 641 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
#line 641 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4)
#line 641 "assertion.m"
{
#line 644 "assertion.m"
  while (MR_TRUE)
#line 644 "assertion.m"
    {
#line 644 "assertion.m"
      /* tailcall optimized into a loop */
#line 644 "assertion.m"
      {
#line 644 "assertion.m"
        MR_bool hlds__assertion__succeeded;

#line 644 "assertion.m"
        if ((hlds__assertion__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 644 "assertion.m"
          {
#line 644 "assertion.m"
            hlds__assertion__succeeded = (hlds__assertion__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 644 "assertion.m"
            if (hlds__assertion__succeeded)
#line 644 "assertion.m"
              {
#line 644 "assertion.m"
                *hlds__assertion__STATE_VARIABLE_Subst_4 = hlds__assertion__STATE_VARIABLE_Subst_0_3;
#line 644 "assertion.m"
                hlds__assertion__succeeded = MR_TRUE;
#line 644 "assertion.m"
              }
#line 644 "assertion.m"
          }
#line 644 "assertion.m"
        else
#line 645 "assertion.m"
          {
#line 645 "assertion.m"
            MR_Word hlds__assertion__TypeCtorInfo_26_26;
#line 645 "assertion.m"
            MR_Word hlds__assertion__TypeInfo_28_28;
#line 645 "assertion.m"
            MR_Word hlds__assertion__CaseA_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
#line 645 "assertion.m"
            MR_Word hlds__assertion__CaseAs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
#line 645 "assertion.m"
            MR_Word hlds__assertion__CaseB_10;
#line 645 "assertion.m"
            MR_Word hlds__assertion__CaseBs_11;
#line 645 "assertion.m"
            MR_Word hlds__assertion__MainConsIdA_13;
#line 645 "assertion.m"
            MR_Word hlds__assertion__OtherConsIdsA_14;
#line 645 "assertion.m"
            MR_Word hlds__assertion__GoalA_15;
#line 645 "assertion.m"
            MR_Word hlds__assertion__MainConsIdB_16;
#line 645 "assertion.m"
            MR_Word hlds__assertion__OtherConsIdsB_17;
#line 645 "assertion.m"
            MR_Word hlds__assertion__GoalB_18;
#line 645 "assertion.m"
            MR_Word hlds__assertion__SortedConsIds_19;
#line 645 "assertion.m"
            MR_Word hlds__assertion__V_22_22;
#line 645 "assertion.m"
            MR_Word hlds__assertion__V_23_23;
#line 645 "assertion.m"
            MR_Word hlds__assertion__STATE_VARIABLE_Subst_24_24;
#line 645 "assertion.m"
            MR_Word hlds__assertion__V_27_27;
#line 645 "assertion.m"
            MR_Word hlds__assertion__GoalExprA_34;
#line 645 "assertion.m"
            MR_Word hlds__assertion__GoalExprB_36;
#line 509 "assertion.m"
            MR_Word hlds__assertion___GoalInfoA_35;
#line 510 "assertion.m"
            MR_Word hlds__assertion___GoalInfoB_37;

#line 645 "assertion.m"
            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 645 "assertion.m"
            if (hlds__assertion__succeeded)
#line 645 "assertion.m"
              {
#line 645 "assertion.m"
                hlds__assertion__CaseB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)));
#line 645 "assertion.m"
                hlds__assertion__CaseBs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 1)));
#line 646 "assertion.m"
                hlds__assertion__MainConsIdA_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__CaseA_8, (MR_Integer) 0)));
#line 646 "assertion.m"
                hlds__assertion__OtherConsIdsA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__CaseA_8, (MR_Integer) 1)));
#line 646 "assertion.m"
                hlds__assertion__GoalA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__CaseA_8, (MR_Integer) 2)));
#line 647 "assertion.m"
                hlds__assertion__MainConsIdB_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__CaseB_10, (MR_Integer) 0)));
#line 647 "assertion.m"
                hlds__assertion__OtherConsIdsB_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__CaseB_10, (MR_Integer) 1)));
#line 647 "assertion.m"
                hlds__assertion__GoalB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__CaseB_10, (MR_Integer) 2)));
#line 3123 "hlds.assertion.c"
                hlds__assertion__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 648 "assertion.m"
                {
#line 648 "assertion.m"
                  hlds__assertion__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 648 "assertion.m"
                  MR_hl_field(MR_mktag(1), hlds__assertion__V_22_22, 0) = ((MR_Box) (hlds__assertion__MainConsIdA_13));
#line 648 "assertion.m"
                  MR_hl_field(MR_mktag(1), hlds__assertion__V_22_22, 1) = ((MR_Box) (hlds__assertion__OtherConsIdsA_14));
#line 648 "assertion.m"
                }
#line 648 "assertion.m"
                {
#line 648 "assertion.m"
                  mercury__list__sort_2_p_0(hlds__assertion__TypeCtorInfo_26_26, hlds__assertion__V_22_22, &hlds__assertion__SortedConsIds_19);
                }
#line 649 "assertion.m"
                {
#line 649 "assertion.m"
                  hlds__assertion__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 649 "assertion.m"
                  MR_hl_field(MR_mktag(1), hlds__assertion__V_23_23, 0) = ((MR_Box) (hlds__assertion__MainConsIdB_16));
#line 649 "assertion.m"
                  MR_hl_field(MR_mktag(1), hlds__assertion__V_23_23, 1) = ((MR_Box) (hlds__assertion__OtherConsIdsB_17));
#line 649 "assertion.m"
                }
#line 649 "assertion.m"
                {
#line 649 "assertion.m"
                  mercury__list__sort_2_p_0(hlds__assertion__TypeCtorInfo_26_26, hlds__assertion__V_23_23, &hlds__assertion__V_27_27);
                }
#line 3155 "hlds.assertion.c"
                hlds__assertion__TypeInfo_28_28 = (MR_Word) &hlds__assertion_scalar_common_1[6];
#line 649 "assertion.m"
                {
#line 649 "assertion.m"
                  hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_28_28, ((MR_Box) (hlds__assertion__SortedConsIds_19)), ((MR_Box) (hlds__assertion__V_27_27)));
                }
#line 645 "assertion.m"
                if (hlds__assertion__succeeded)
#line 645 "assertion.m"
                  {
#line 509 "assertion.m"
                    hlds__assertion__GoalExprA_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalA_15, (MR_Integer) 0)));
#line 509 "assertion.m"
                    hlds__assertion___GoalInfoA_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalA_15, (MR_Integer) 1)));
#line 510 "assertion.m"
                    hlds__assertion__GoalExprB_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalB_18, (MR_Integer) 0)));
#line 510 "assertion.m"
                    hlds__assertion___GoalInfoB_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalB_18, (MR_Integer) 1)));
#line 511 "assertion.m"
                    {
#line 511 "assertion.m"
                      hlds__assertion__succeeded = hlds__assertion__equal_goal_exprs_4_p_0(hlds__assertion__GoalExprA_34, hlds__assertion__GoalExprB_36, hlds__assertion__STATE_VARIABLE_Subst_0_3, &hlds__assertion__STATE_VARIABLE_Subst_24_24);
                    }
#line 645 "assertion.m"
                    if (hlds__assertion__succeeded)
#line 651 "assertion.m"
                      {
#line 651 "assertion.m"
                        /* direct tailcall eliminated */
#line 651 "assertion.m"
                        {
#line 651 "assertion.m"
                          MR_Word hlds__assertion__HeadVar__1__tmp_copy_1 = hlds__assertion__CaseAs_9;
#line 651 "assertion.m"
                          MR_Word hlds__assertion__HeadVar__2__tmp_copy_2 = hlds__assertion__CaseBs_11;
#line 651 "assertion.m"
                          MR_Word hlds__assertion__STATE_VARIABLE_Subst_0__tmp_copy_3 = hlds__assertion__STATE_VARIABLE_Subst_24_24;

#line 651 "assertion.m"
                          hlds__assertion__STATE_VARIABLE_Subst_0_3 = hlds__assertion__STATE_VARIABLE_Subst_0__tmp_copy_3;
#line 651 "assertion.m"
                          hlds__assertion__HeadVar__2_2 = hlds__assertion__HeadVar__2__tmp_copy_2;
#line 651 "assertion.m"
                          hlds__assertion__HeadVar__1_1 = hlds__assertion__HeadVar__1__tmp_copy_1;
#line 651 "assertion.m"
                        }
#line 651 "assertion.m"
                        continue;
#line 651 "assertion.m"
                      }
#line 645 "assertion.m"
                  }
#line 645 "assertion.m"
              }
#line 645 "assertion.m"
          }
#line 644 "assertion.m"
        return hlds__assertion__succeeded;
#line 644 "assertion.m"
      }
#line 644 "assertion.m"
      break;
#line 644 "assertion.m"
    }
#line 641 "assertion.m"
}

#line 633 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_goals_list_4_p_0(
#line 633 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 633 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2,
#line 633 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
#line 633 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4)
#line 633 "assertion.m"
{
#line 636 "assertion.m"
  while (MR_TRUE)
#line 636 "assertion.m"
    {
#line 636 "assertion.m"
      /* tailcall optimized into a loop */
#line 636 "assertion.m"
      {
#line 636 "assertion.m"
        MR_bool hlds__assertion__succeeded;

#line 636 "assertion.m"
        if ((hlds__assertion__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 636 "assertion.m"
          {
#line 636 "assertion.m"
            hlds__assertion__succeeded = (hlds__assertion__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 636 "assertion.m"
            if (hlds__assertion__succeeded)
#line 636 "assertion.m"
              {
#line 636 "assertion.m"
                *hlds__assertion__STATE_VARIABLE_Subst_4 = hlds__assertion__STATE_VARIABLE_Subst_0_3;
#line 636 "assertion.m"
                hlds__assertion__succeeded = MR_TRUE;
#line 636 "assertion.m"
              }
#line 636 "assertion.m"
          }
#line 636 "assertion.m"
        else
#line 637 "assertion.m"
          {
#line 637 "assertion.m"
            MR_Word hlds__assertion__GoalA_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
#line 637 "assertion.m"
            MR_Word hlds__assertion__GoalAs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
#line 637 "assertion.m"
            MR_Word hlds__assertion__GoalB_10;
#line 637 "assertion.m"
            MR_Word hlds__assertion__GoalBs_11;
#line 637 "assertion.m"
            MR_Word hlds__assertion__STATE_VARIABLE_Subst_15_15;
#line 637 "assertion.m"
            MR_Word hlds__assertion__GoalExprA_22;
#line 637 "assertion.m"
            MR_Word hlds__assertion__GoalExprB_24;
#line 509 "assertion.m"
            MR_Word hlds__assertion___GoalInfoA_23;
#line 510 "assertion.m"
            MR_Word hlds__assertion___GoalInfoB_25;

#line 637 "assertion.m"
            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 637 "assertion.m"
            if (hlds__assertion__succeeded)
#line 637 "assertion.m"
              {
#line 637 "assertion.m"
                hlds__assertion__GoalB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)));
#line 637 "assertion.m"
                hlds__assertion__GoalBs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 1)));
#line 509 "assertion.m"
                hlds__assertion__GoalExprA_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalA_8, (MR_Integer) 0)));
#line 509 "assertion.m"
                hlds__assertion___GoalInfoA_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalA_8, (MR_Integer) 1)));
#line 510 "assertion.m"
                hlds__assertion__GoalExprB_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalB_10, (MR_Integer) 0)));
#line 510 "assertion.m"
                hlds__assertion___GoalInfoB_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalB_10, (MR_Integer) 1)));
#line 511 "assertion.m"
                {
#line 511 "assertion.m"
                  hlds__assertion__succeeded = hlds__assertion__equal_goal_exprs_4_p_0(hlds__assertion__GoalExprA_22, hlds__assertion__GoalExprB_24, hlds__assertion__STATE_VARIABLE_Subst_0_3, &hlds__assertion__STATE_VARIABLE_Subst_15_15);
                }
#line 637 "assertion.m"
                if (hlds__assertion__succeeded)
#line 639 "assertion.m"
                  {
#line 639 "assertion.m"
                    /* direct tailcall eliminated */
#line 639 "assertion.m"
                    {
#line 639 "assertion.m"
                      MR_Word hlds__assertion__HeadVar__1__tmp_copy_1 = hlds__assertion__GoalAs_9;
#line 639 "assertion.m"
                      MR_Word hlds__assertion__HeadVar__2__tmp_copy_2 = hlds__assertion__GoalBs_11;
#line 639 "assertion.m"
                      MR_Word hlds__assertion__STATE_VARIABLE_Subst_0__tmp_copy_3 = hlds__assertion__STATE_VARIABLE_Subst_15_15;

#line 639 "assertion.m"
                      hlds__assertion__STATE_VARIABLE_Subst_0_3 = hlds__assertion__STATE_VARIABLE_Subst_0__tmp_copy_3;
#line 639 "assertion.m"
                      hlds__assertion__HeadVar__2_2 = hlds__assertion__HeadVar__2__tmp_copy_2;
#line 639 "assertion.m"
                      hlds__assertion__HeadVar__1_1 = hlds__assertion__HeadVar__1__tmp_copy_1;
#line 639 "assertion.m"
                    }
#line 639 "assertion.m"
                    continue;
#line 639 "assertion.m"
                  }
#line 637 "assertion.m"
              }
#line 637 "assertion.m"
          }
#line 636 "assertion.m"
        return hlds__assertion__succeeded;
#line 636 "assertion.m"
      }
#line 636 "assertion.m"
      break;
#line 636 "assertion.m"
    }
#line 633 "assertion.m"
}

#line 616 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_unification_4_p_0(
#line 616 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 616 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2,
#line 616 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
#line 616 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4)
#line 616 "assertion.m"
{
#line 619 "assertion.m"
  {
#line 619 "assertion.m"
    MR_bool hlds__assertion__succeeded;

#line 619 "assertion.m"
#line 619 "assertion.m"
    switch (MR_tag((MR_Word) hlds__assertion__HeadVar__1_1)) {
#line 619 "assertion.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 619 "assertion.m"
      case (MR_Integer) 0:
#line 619 "assertion.m"
        {
#line 619 "assertion.m"
          MR_Word hlds__assertion__VA_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
#line 619 "assertion.m"
          MR_Word hlds__assertion__VB_68;
#line 620 "assertion.m"
          MR_Word hlds__assertion__VAs_67;
#line 620 "assertion.m"
          MR_Word hlds__assertion__VBs_69;
#line 604 "assertion.m"
          MR_Word hlds__assertion__SubstVA_80;
#line 602 "assertion.m"
          MR_Word hlds__assertion__TypeInfo_12_82;
#line 602 "assertion.m"
          MR_Box hlds__assertion__conv0_SubstVA_80;

#line 619 "assertion.m"
          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 619 "assertion.m"
          if (hlds__assertion__succeeded)
#line 619 "assertion.m"
            {
#line 619 "assertion.m"
              hlds__assertion__VB_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)));
#line 620 "assertion.m"
              hlds__assertion__VAs_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 620 "assertion.m"
              hlds__assertion__VBs_69 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3407 "hlds.assertion.c"
              hlds__assertion__TypeInfo_12_82 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 602 "assertion.m"
              {
#line 602 "assertion.m"
                hlds__assertion__succeeded = mercury__map__search_3_p_0(hlds__assertion__TypeInfo_12_82, hlds__assertion__TypeInfo_12_82, hlds__assertion__STATE_VARIABLE_Subst_0_3, ((MR_Box) (hlds__assertion__VA_66)), &hlds__assertion__conv0_SubstVA_80);
              }
#line 602 "assertion.m"
              if (hlds__assertion__succeeded)
#line 602 "assertion.m"
                {
#line 602 "assertion.m"
                  hlds__assertion__SubstVA_80 = ((MR_Word) hlds__assertion__conv0_SubstVA_80);
#line 602 "assertion.m"
                  hlds__assertion__succeeded = MR_TRUE;
#line 602 "assertion.m"
                }
#line 604 "assertion.m"
              if (hlds__assertion__succeeded)
#line 603 "assertion.m"
                {
#line 603 "assertion.m"
                  {
#line 603 "assertion.m"
                    hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__SubstVA_80)), ((MR_Box) (hlds__assertion__VB_68)));
                  }
#line 603 "assertion.m"
                  if (hlds__assertion__succeeded)
#line 603 "assertion.m"
                    {
#line 603 "assertion.m"
                      *hlds__assertion__STATE_VARIABLE_Subst_4 = hlds__assertion__STATE_VARIABLE_Subst_0_3;
#line 603 "assertion.m"
                      hlds__assertion__succeeded = MR_TRUE;
#line 603 "assertion.m"
                    }
#line 603 "assertion.m"
                }
#line 604 "assertion.m"
              else
#line 605 "assertion.m"
                {
#line 605 "assertion.m"
                  MR_Word hlds__assertion__TypeInfo_13_83 = (MR_Word) &hlds__assertion_scalar_common_1[0];

#line 605 "assertion.m"
                  {
#line 605 "assertion.m"
                    return hlds__assertion__succeeded = mercury__map__insert_4_p_0(hlds__assertion__TypeInfo_13_83, hlds__assertion__TypeInfo_13_83, ((MR_Box) (hlds__assertion__VA_66)), ((MR_Box) (hlds__assertion__VB_68)), hlds__assertion__STATE_VARIABLE_Subst_0_3, hlds__assertion__STATE_VARIABLE_Subst_4);
                  }
#line 605 "assertion.m"
                }
#line 619 "assertion.m"
            }
#line 619 "assertion.m"
        }
#line 619 "assertion.m"
        break;
#line 619 "assertion.m"
      case (MR_Integer) 1:
#line 622 "assertion.m"
        {
#line 622 "assertion.m"
          MR_Word hlds__assertion__ConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
#line 622 "assertion.m"
          MR_Word hlds__assertion__E_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
#line 622 "assertion.m"
          MR_Word hlds__assertion__VarsA_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 2)));
#line 622 "assertion.m"
          MR_Word hlds__assertion__VarsB_18;
#line 622 "assertion.m"
          MR_Word hlds__assertion__V_43_43;
#line 622 "assertion.m"
          MR_Word hlds__assertion__V_44_44;

#line 621 "assertion.m"
          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 621 "assertion.m"
          if (hlds__assertion__succeeded)
#line 621 "assertion.m"
            {
#line 621 "assertion.m"
              hlds__assertion__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)));
#line 621 "assertion.m"
              hlds__assertion__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 1)));
#line 621 "assertion.m"
              hlds__assertion__VarsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 2)));
#line 621 "assertion.m"
              {
#line 621 "assertion.m"
                hlds__assertion__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(hlds__assertion__ConsId_15, hlds__assertion__V_43_43);
              }
#line 622 "assertion.m"
              if (hlds__assertion__succeeded)
#line 622 "assertion.m"
                {
#line 621 "assertion.m"
                  hlds__assertion__succeeded = (hlds__assertion__E_16 == hlds__assertion__V_44_44);
#line 622 "assertion.m"
                  if (hlds__assertion__succeeded)
#line 623 "assertion.m"
                    {
#line 623 "assertion.m"
                      return hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__VarsA_17, hlds__assertion__VarsB_18, hlds__assertion__STATE_VARIABLE_Subst_0_3, hlds__assertion__STATE_VARIABLE_Subst_4);
                    }
#line 622 "assertion.m"
                }
#line 621 "assertion.m"
            }
#line 622 "assertion.m"
        }
#line 619 "assertion.m"
        break;
#line 619 "assertion.m"
      case (MR_Integer) 2:
#line 624 "assertion.m"
        {
#line 624 "assertion.m"
          MR_Word hlds__assertion__TypeInfo_52_52;
#line 624 "assertion.m"
          MR_Word hlds__assertion__Purity_26 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 624 "assertion.m"
          MR_Word hlds__assertion__Groundness_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 624 "assertion.m"
          MR_Word hlds__assertion__PredOrFunc_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 624 "assertion.m"
          MR_Word hlds__assertion__NLVarsA_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__1_1, (MR_Integer) 2)));
#line 624 "assertion.m"
          MR_Word hlds__assertion__LVarsA_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__1_1, (MR_Integer) 3)));
#line 624 "assertion.m"
          MR_Word hlds__assertion__Modes_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__1_1, (MR_Integer) 4)));
#line 624 "assertion.m"
          MR_Word hlds__assertion__Det_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__1_1, (MR_Integer) 5)));
#line 624 "assertion.m"
          MR_Word hlds__assertion__GoalA_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__1_1, (MR_Integer) 6)));
#line 624 "assertion.m"
          MR_Word hlds__assertion__NLVarsB_35;
#line 624 "assertion.m"
          MR_Word hlds__assertion__LVarsB_36;
#line 624 "assertion.m"
          MR_Word hlds__assertion__GoalB_37;
#line 624 "assertion.m"
          MR_Word hlds__assertion__STATE_VARIABLE_Subst_40_40;
#line 624 "assertion.m"
          MR_Word hlds__assertion__STATE_VARIABLE_Subst_41_41;
#line 624 "assertion.m"
          MR_Word hlds__assertion__V_45_45;
#line 624 "assertion.m"
          MR_Word hlds__assertion__V_46_46;
#line 624 "assertion.m"
          MR_Word hlds__assertion__V_47_47;
#line 624 "assertion.m"
          MR_Word hlds__assertion__V_49_49;
#line 624 "assertion.m"
          MR_Word hlds__assertion__V_50_50;
#line 624 "assertion.m"
          MR_Word hlds__assertion__GoalExprA_58;
#line 624 "assertion.m"
          MR_Word hlds__assertion__GoalExprB_60;
#line 509 "assertion.m"
          MR_Word hlds__assertion___GoalInfoA_59;
#line 510 "assertion.m"
          MR_Word hlds__assertion___GoalInfoB_61;

#line 627 "assertion.m"
          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 627 "assertion.m"
          if (hlds__assertion__succeeded)
#line 627 "assertion.m"
            {
#line 627 "assertion.m"
              hlds__assertion__V_45_45 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 627 "assertion.m"
              hlds__assertion__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 627 "assertion.m"
              hlds__assertion__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 627 "assertion.m"
              hlds__assertion__NLVarsB_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__2_2, (MR_Integer) 2)));
#line 627 "assertion.m"
              hlds__assertion__LVarsB_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__2_2, (MR_Integer) 3)));
#line 627 "assertion.m"
              hlds__assertion__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__2_2, (MR_Integer) 4)));
#line 627 "assertion.m"
              hlds__assertion__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__2_2, (MR_Integer) 5)));
#line 627 "assertion.m"
              hlds__assertion__GoalB_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__2_2, (MR_Integer) 6)));
#line 627 "assertion.m"
              hlds__assertion__succeeded = (hlds__assertion__Purity_26 == hlds__assertion__V_45_45);
#line 624 "assertion.m"
              if (hlds__assertion__succeeded)
#line 624 "assertion.m"
                {
#line 627 "assertion.m"
                  hlds__assertion__succeeded = (hlds__assertion__Groundness_27 == hlds__assertion__V_46_46);
#line 624 "assertion.m"
                  if (hlds__assertion__succeeded)
#line 624 "assertion.m"
                    {
#line 627 "assertion.m"
                      hlds__assertion__succeeded = (hlds__assertion__PredOrFunc_28 == hlds__assertion__V_47_47);
#line 624 "assertion.m"
                      if (hlds__assertion__succeeded)
#line 624 "assertion.m"
                        {
#line 627 "assertion.m"
                          hlds__assertion__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);
#line 624 "assertion.m"
                          if (hlds__assertion__succeeded)
#line 624 "assertion.m"
                            {
#line 3617 "hlds.assertion.c"
                              hlds__assertion__TypeInfo_52_52 = (MR_Word) &hlds__assertion_scalar_common_1[5];
#line 627 "assertion.m"
                              {
#line 627 "assertion.m"
                                hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_52_52, ((MR_Box) (hlds__assertion__Modes_32)), ((MR_Box) (hlds__assertion__V_49_49)));
                              }
#line 624 "assertion.m"
                              if (hlds__assertion__succeeded)
#line 624 "assertion.m"
                                {
#line 627 "assertion.m"
                                  hlds__assertion__succeeded = (hlds__assertion__Det_33 == hlds__assertion__V_50_50);
#line 624 "assertion.m"
                                  if (hlds__assertion__succeeded)
#line 624 "assertion.m"
                                    {
#line 629 "assertion.m"
                                      {
#line 629 "assertion.m"
                                        hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__NLVarsA_30, hlds__assertion__NLVarsB_35, hlds__assertion__STATE_VARIABLE_Subst_0_3, &hlds__assertion__STATE_VARIABLE_Subst_40_40);
                                      }
#line 624 "assertion.m"
                                      if (hlds__assertion__succeeded)
#line 624 "assertion.m"
                                        {
#line 630 "assertion.m"
                                          {
#line 630 "assertion.m"
                                            hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__LVarsA_31, hlds__assertion__LVarsB_36, hlds__assertion__STATE_VARIABLE_Subst_40_40, &hlds__assertion__STATE_VARIABLE_Subst_41_41);
                                          }
#line 624 "assertion.m"
                                          if (hlds__assertion__succeeded)
#line 624 "assertion.m"
                                            {
#line 509 "assertion.m"
                                              hlds__assertion__GoalExprA_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalA_34, (MR_Integer) 0)));
#line 509 "assertion.m"
                                              hlds__assertion___GoalInfoA_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalA_34, (MR_Integer) 1)));
#line 510 "assertion.m"
                                              hlds__assertion__GoalExprB_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalB_37, (MR_Integer) 0)));
#line 510 "assertion.m"
                                              hlds__assertion___GoalInfoB_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalB_37, (MR_Integer) 1)));
#line 511 "assertion.m"
                                              {
#line 511 "assertion.m"
                                                return hlds__assertion__succeeded = hlds__assertion__equal_goal_exprs_4_p_0(hlds__assertion__GoalExprA_58, hlds__assertion__GoalExprB_60, hlds__assertion__STATE_VARIABLE_Subst_41_41, hlds__assertion__STATE_VARIABLE_Subst_4);
                                              }
#line 624 "assertion.m"
                                            }
#line 624 "assertion.m"
                                        }
#line 624 "assertion.m"
                                    }
#line 624 "assertion.m"
                                }
#line 624 "assertion.m"
                            }
#line 624 "assertion.m"
                        }
#line 624 "assertion.m"
                    }
#line 624 "assertion.m"
                }
#line 627 "assertion.m"
            }
#line 624 "assertion.m"
        }
#line 619 "assertion.m"
        break;
#line 619 "assertion.m"
    }
#line 619 "assertion.m"
    return hlds__assertion__succeeded;
#line 619 "assertion.m"
  }
#line 616 "assertion.m"
}

#line 608 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_vars_4_p_0(
#line 608 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 608 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2,
#line 608 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
#line 608 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4)
#line 608 "assertion.m"
{
#line 611 "assertion.m"
  while (MR_TRUE)
#line 611 "assertion.m"
    {
#line 611 "assertion.m"
      /* tailcall optimized into a loop */
#line 611 "assertion.m"
      {
#line 611 "assertion.m"
        MR_bool hlds__assertion__succeeded;

#line 611 "assertion.m"
        if ((hlds__assertion__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 611 "assertion.m"
          {
#line 611 "assertion.m"
            hlds__assertion__succeeded = (hlds__assertion__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 611 "assertion.m"
            if (hlds__assertion__succeeded)
#line 611 "assertion.m"
              {
#line 611 "assertion.m"
                *hlds__assertion__STATE_VARIABLE_Subst_4 = hlds__assertion__STATE_VARIABLE_Subst_0_3;
#line 611 "assertion.m"
                hlds__assertion__succeeded = MR_TRUE;
#line 611 "assertion.m"
              }
#line 611 "assertion.m"
          }
#line 611 "assertion.m"
        else
#line 612 "assertion.m"
          {
#line 612 "assertion.m"
            MR_Word hlds__assertion__VA_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
#line 612 "assertion.m"
            MR_Word hlds__assertion__VAs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
#line 612 "assertion.m"
            MR_Word hlds__assertion__VB_10;
#line 612 "assertion.m"
            MR_Word hlds__assertion__VBs_11;
#line 612 "assertion.m"
            MR_Word hlds__assertion__STATE_VARIABLE_Subst_15_15;
#line 604 "assertion.m"
            MR_Word hlds__assertion__SubstVA_22;
#line 602 "assertion.m"
            MR_Word hlds__assertion__TypeInfo_12_24;
#line 602 "assertion.m"
            MR_Box hlds__assertion__conv0_SubstVA_22;

#line 612 "assertion.m"
            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 612 "assertion.m"
            if (hlds__assertion__succeeded)
#line 612 "assertion.m"
              {
#line 612 "assertion.m"
                hlds__assertion__VB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)));
#line 612 "assertion.m"
                hlds__assertion__VBs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 1)));
#line 3769 "hlds.assertion.c"
                hlds__assertion__TypeInfo_12_24 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 602 "assertion.m"
                {
#line 602 "assertion.m"
                  hlds__assertion__succeeded = mercury__map__search_3_p_0(hlds__assertion__TypeInfo_12_24, hlds__assertion__TypeInfo_12_24, hlds__assertion__STATE_VARIABLE_Subst_0_3, ((MR_Box) (hlds__assertion__VA_8)), &hlds__assertion__conv0_SubstVA_22);
                }
#line 602 "assertion.m"
                if (hlds__assertion__succeeded)
#line 602 "assertion.m"
                  {
#line 602 "assertion.m"
                    hlds__assertion__SubstVA_22 = ((MR_Word) hlds__assertion__conv0_SubstVA_22);
#line 602 "assertion.m"
                    hlds__assertion__succeeded = MR_TRUE;
#line 602 "assertion.m"
                  }
#line 604 "assertion.m"
                if (hlds__assertion__succeeded)
#line 603 "assertion.m"
                  {
#line 603 "assertion.m"
                    {
#line 603 "assertion.m"
                      hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__SubstVA_22)), ((MR_Box) (hlds__assertion__VB_10)));
                    }
#line 603 "assertion.m"
                    if (hlds__assertion__succeeded)
#line 603 "assertion.m"
                      {
#line 603 "assertion.m"
                        hlds__assertion__STATE_VARIABLE_Subst_15_15 = hlds__assertion__STATE_VARIABLE_Subst_0_3;
#line 603 "assertion.m"
                        hlds__assertion__succeeded = MR_TRUE;
#line 603 "assertion.m"
                      }
#line 603 "assertion.m"
                  }
#line 604 "assertion.m"
                else
#line 605 "assertion.m"
                  {
#line 605 "assertion.m"
                    MR_Word hlds__assertion__TypeInfo_13_25 = (MR_Word) &hlds__assertion_scalar_common_1[0];

#line 605 "assertion.m"
                    {
#line 605 "assertion.m"
                      hlds__assertion__succeeded = mercury__map__insert_4_p_0(hlds__assertion__TypeInfo_13_25, hlds__assertion__TypeInfo_13_25, ((MR_Box) (hlds__assertion__VA_8)), ((MR_Box) (hlds__assertion__VB_10)), hlds__assertion__STATE_VARIABLE_Subst_0_3, &hlds__assertion__STATE_VARIABLE_Subst_15_15);
                    }
#line 605 "assertion.m"
                  }
#line 612 "assertion.m"
                if (hlds__assertion__succeeded)
#line 614 "assertion.m"
                  {
#line 614 "assertion.m"
                    /* direct tailcall eliminated */
#line 614 "assertion.m"
                    {
#line 614 "assertion.m"
                      MR_Word hlds__assertion__HeadVar__1__tmp_copy_1 = hlds__assertion__VAs_9;
#line 614 "assertion.m"
                      MR_Word hlds__assertion__HeadVar__2__tmp_copy_2 = hlds__assertion__VBs_11;
#line 614 "assertion.m"
                      MR_Word hlds__assertion__STATE_VARIABLE_Subst_0__tmp_copy_3 = hlds__assertion__STATE_VARIABLE_Subst_15_15;

#line 614 "assertion.m"
                      hlds__assertion__STATE_VARIABLE_Subst_0_3 = hlds__assertion__STATE_VARIABLE_Subst_0__tmp_copy_3;
#line 614 "assertion.m"
                      hlds__assertion__HeadVar__2_2 = hlds__assertion__HeadVar__2__tmp_copy_2;
#line 614 "assertion.m"
                      hlds__assertion__HeadVar__1_1 = hlds__assertion__HeadVar__1__tmp_copy_1;
#line 614 "assertion.m"
                    }
#line 614 "assertion.m"
                    continue;
#line 614 "assertion.m"
                  }
#line 612 "assertion.m"
              }
#line 612 "assertion.m"
          }
#line 611 "assertion.m"
        return hlds__assertion__succeeded;
#line 611 "assertion.m"
      }
#line 611 "assertion.m"
      break;
#line 611 "assertion.m"
    }
#line 608 "assertion.m"
}

#line 598 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_var_4_p_0(
#line 598 "assertion.m"
  MR_Word hlds__assertion__VA_5,
#line 598 "assertion.m"
  MR_Word hlds__assertion__VB_6,
#line 598 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_9,
#line 598 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_10)
#line 598 "assertion.m"
{
#line 604 "assertion.m"
  {
#line 604 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 604 "assertion.m"
    MR_Word hlds__assertion__SubstVA_8;
#line 602 "assertion.m"
    MR_Word hlds__assertion__TypeInfo_12_12 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 602 "assertion.m"
    MR_Box hlds__assertion__conv0_SubstVA_8;

#line 602 "assertion.m"
    {
#line 602 "assertion.m"
      hlds__assertion__succeeded = mercury__map__search_3_p_0(hlds__assertion__TypeInfo_12_12, hlds__assertion__TypeInfo_12_12, hlds__assertion__STATE_VARIABLE_Subst_0_9, ((MR_Box) (hlds__assertion__VA_5)), &hlds__assertion__conv0_SubstVA_8);
    }
#line 602 "assertion.m"
    if (hlds__assertion__succeeded)
#line 602 "assertion.m"
      {
#line 602 "assertion.m"
        hlds__assertion__SubstVA_8 = ((MR_Word) hlds__assertion__conv0_SubstVA_8);
#line 602 "assertion.m"
        hlds__assertion__succeeded = MR_TRUE;
#line 602 "assertion.m"
      }
#line 604 "assertion.m"
    if (hlds__assertion__succeeded)
#line 603 "assertion.m"
      {
#line 603 "assertion.m"
        {
#line 603 "assertion.m"
          hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__SubstVA_8)), ((MR_Box) (hlds__assertion__VB_6)));
        }
#line 603 "assertion.m"
        if (hlds__assertion__succeeded)
#line 603 "assertion.m"
          {
#line 603 "assertion.m"
            *hlds__assertion__STATE_VARIABLE_Subst_10 = hlds__assertion__STATE_VARIABLE_Subst_0_9;
#line 603 "assertion.m"
            hlds__assertion__succeeded = MR_TRUE;
#line 603 "assertion.m"
          }
#line 603 "assertion.m"
      }
#line 604 "assertion.m"
    else
#line 605 "assertion.m"
      {
#line 605 "assertion.m"
        MR_Word hlds__assertion__TypeInfo_13_13 = (MR_Word) &hlds__assertion_scalar_common_1[0];

#line 605 "assertion.m"
        {
#line 605 "assertion.m"
          return hlds__assertion__succeeded = mercury__map__insert_4_p_0(hlds__assertion__TypeInfo_13_13, hlds__assertion__TypeInfo_13_13, ((MR_Box) (hlds__assertion__VA_5)), ((MR_Box) (hlds__assertion__VB_6)), hlds__assertion__STATE_VARIABLE_Subst_0_9, hlds__assertion__STATE_VARIABLE_Subst_10);
        }
#line 605 "assertion.m"
      }
#line 604 "assertion.m"
    return hlds__assertion__succeeded;
#line 604 "assertion.m"
  }
#line 598 "assertion.m"
}

#line 589 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_goals_shorthand_4_p_0(
#line 589 "assertion.m"
  MR_Word hlds__assertion__ShortHandA_5,
#line 589 "assertion.m"
  MR_Word hlds__assertion__ShortHandB_6,
#line 589 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_12,
#line 589 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_13)
#line 589 "assertion.m"
{
#line 592 "assertion.m"
  {
#line 592 "assertion.m"
    MR_bool hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__ShortHandA_5)) == (MR_mktag((MR_Integer) 0)));
#line 592 "assertion.m"
    MR_Word hlds__assertion__LeftGoalA_8;
#line 592 "assertion.m"
    MR_Word hlds__assertion__RightGoalA_9;
#line 592 "assertion.m"
    MR_Word hlds__assertion__LeftGoalB_10;
#line 592 "assertion.m"
    MR_Word hlds__assertion__RightGoalB_11;
#line 592 "assertion.m"
    MR_Word hlds__assertion__STATE_VARIABLE_Subst_14_14;
#line 592 "assertion.m"
    MR_Word hlds__assertion__GoalExprA_21;
#line 592 "assertion.m"
    MR_Word hlds__assertion__GoalExprB_23;
#line 592 "assertion.m"
    MR_Word hlds__assertion__GoalExprA_31;
#line 592 "assertion.m"
    MR_Word hlds__assertion__GoalExprB_33;
#line 509 "assertion.m"
    MR_Word hlds__assertion___GoalInfoA_22;
#line 510 "assertion.m"
    MR_Word hlds__assertion___GoalInfoB_24;
#line 509 "assertion.m"
    MR_Word hlds__assertion___GoalInfoA_32;
#line 510 "assertion.m"
    MR_Word hlds__assertion___GoalInfoB_34;

#line 593 "assertion.m"
    if (hlds__assertion__succeeded)
#line 593 "assertion.m"
      {
#line 593 "assertion.m"
        hlds__assertion__LeftGoalA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__ShortHandA_5, (MR_Integer) 0)));
#line 593 "assertion.m"
        hlds__assertion__RightGoalA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__ShortHandA_5, (MR_Integer) 1)));
#line 594 "assertion.m"
        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__ShortHandB_6)) == (MR_mktag((MR_Integer) 0)));
#line 594 "assertion.m"
        if (hlds__assertion__succeeded)
#line 594 "assertion.m"
          {
#line 594 "assertion.m"
            hlds__assertion__LeftGoalB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__ShortHandB_6, (MR_Integer) 0)));
#line 594 "assertion.m"
            hlds__assertion__RightGoalB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__ShortHandB_6, (MR_Integer) 1)));
#line 509 "assertion.m"
            hlds__assertion__GoalExprA_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LeftGoalA_8, (MR_Integer) 0)));
#line 509 "assertion.m"
            hlds__assertion___GoalInfoA_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LeftGoalA_8, (MR_Integer) 1)));
#line 510 "assertion.m"
            hlds__assertion__GoalExprB_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LeftGoalB_10, (MR_Integer) 0)));
#line 510 "assertion.m"
            hlds__assertion___GoalInfoB_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LeftGoalB_10, (MR_Integer) 1)));
#line 511 "assertion.m"
            {
#line 511 "assertion.m"
              hlds__assertion__succeeded = hlds__assertion__equal_goal_exprs_4_p_0(hlds__assertion__GoalExprA_21, hlds__assertion__GoalExprB_23, hlds__assertion__STATE_VARIABLE_Subst_0_12, &hlds__assertion__STATE_VARIABLE_Subst_14_14);
            }
#line 592 "assertion.m"
            if (hlds__assertion__succeeded)
#line 592 "assertion.m"
              {
#line 509 "assertion.m"
                hlds__assertion__GoalExprA_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__RightGoalA_9, (MR_Integer) 0)));
#line 509 "assertion.m"
                hlds__assertion___GoalInfoA_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__RightGoalA_9, (MR_Integer) 1)));
#line 510 "assertion.m"
                hlds__assertion__GoalExprB_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__RightGoalB_11, (MR_Integer) 0)));
#line 510 "assertion.m"
                hlds__assertion___GoalInfoB_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__RightGoalB_11, (MR_Integer) 1)));
#line 511 "assertion.m"
                {
#line 511 "assertion.m"
                  return hlds__assertion__succeeded = hlds__assertion__equal_goal_exprs_4_p_0(hlds__assertion__GoalExprA_31, hlds__assertion__GoalExprB_33, hlds__assertion__STATE_VARIABLE_Subst_14_14, hlds__assertion__STATE_VARIABLE_Subst_13);
                }
#line 592 "assertion.m"
              }
#line 594 "assertion.m"
          }
#line 593 "assertion.m"
      }
#line 592 "assertion.m"
    return hlds__assertion__succeeded;
#line 592 "assertion.m"
  }
#line 589 "assertion.m"
}

#line 578 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_reason_4_p_0(
#line 578 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 578 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2,
#line 578 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
#line 578 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4)
#line 578 "assertion.m"
{
#line 581 "assertion.m"
  {
#line 581 "assertion.m"
    MR_bool hlds__assertion__succeeded;

#line 581 "assertion.m"
#line 581 "assertion.m"
    switch (MR_tag((MR_Word) hlds__assertion__HeadVar__1_1)) {
#line 581 "assertion.m"
      default:
#line 581 "assertion.m"
        hlds__assertion__succeeded = MR_FALSE;
#line 581 "assertion.m"
        break;
#line 581 "assertion.m"
      case (MR_Integer) 0:
#line 581 "assertion.m"
        {
#line 581 "assertion.m"
          MR_Word hlds__assertion__VarsA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
#line 581 "assertion.m"
          MR_Word hlds__assertion__VarsB_6;

#line 581 "assertion.m"
          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 581 "assertion.m"
          if (hlds__assertion__succeeded)
#line 581 "assertion.m"
            {
#line 581 "assertion.m"
              hlds__assertion__VarsB_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)));
#line 582 "assertion.m"
              {
#line 582 "assertion.m"
                return hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__VarsA_5, hlds__assertion__VarsB_6, hlds__assertion__STATE_VARIABLE_Subst_0_3, hlds__assertion__STATE_VARIABLE_Subst_4);
              }
#line 581 "assertion.m"
            }
#line 581 "assertion.m"
        }
#line 581 "assertion.m"
        break;
#line 581 "assertion.m"
      case (MR_Integer) 3:
#line 581 "assertion.m"
#line 581 "assertion.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)))) {
#line 581 "assertion.m"
          default:
#line 581 "assertion.m"
            hlds__assertion__succeeded = MR_FALSE;
#line 581 "assertion.m"
            break;
#line 581 "assertion.m"
          case (MR_Integer) 3:
#line 584 "assertion.m"
            {
#line 584 "assertion.m"
              MR_Word hlds__assertion__ForcePruning_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
#line 584 "assertion.m"
              MR_Word hlds__assertion__V_27_27;

#line 584 "assertion.m"
              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 584 "assertion.m"
              if (hlds__assertion__succeeded)
#line 584 "assertion.m"
                {
#line 584 "assertion.m"
                  hlds__assertion__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__2_2, (MR_Integer) 1)));
#line 584 "assertion.m"
                  hlds__assertion__succeeded = (hlds__assertion__ForcePruning_15 == hlds__assertion__V_27_27);
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
#line 581 "assertion.m"
            break;
#line 581 "assertion.m"
          case (MR_Integer) 4:
#line 583 "assertion.m"
            {
#line 583 "assertion.m"
              MR_Word hlds__assertion__Removable_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
#line 583 "assertion.m"
              MR_Word hlds__assertion__V_26_26;

#line 583 "assertion.m"
              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 583 "assertion.m"
              if (hlds__assertion__succeeded)
#line 583 "assertion.m"
                {
#line 583 "assertion.m"
                  hlds__assertion__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__2_2, (MR_Integer) 1)));
#line 583 "assertion.m"
                  hlds__assertion__succeeded = (hlds__assertion__Removable_11 == hlds__assertion__V_26_26);
#line 583 "assertion.m"
                  if (hlds__assertion__succeeded)
#line 583 "assertion.m"
                    {
#line 583 "assertion.m"
                      *hlds__assertion__STATE_VARIABLE_Subst_4 = hlds__assertion__STATE_VARIABLE_Subst_0_3;
#line 583 "assertion.m"
                      hlds__assertion__succeeded = MR_TRUE;
#line 583 "assertion.m"
                    }
#line 583 "assertion.m"
                }
#line 583 "assertion.m"
            }
#line 581 "assertion.m"
            break;
#line 581 "assertion.m"
          case (MR_Integer) 5:
#line 586 "assertion.m"
            {
#line 586 "assertion.m"
              MR_Word hlds__assertion__VarA_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
#line 586 "assertion.m"
              MR_Word hlds__assertion__Kind_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__1_1, (MR_Integer) 2)));
#line 586 "assertion.m"
              MR_Word hlds__assertion__VarB_21;
#line 586 "assertion.m"
              MR_Word hlds__assertion__V_28_28;
#line 604 "assertion.m"
              MR_Word hlds__assertion__SubstVA_34;
#line 602 "assertion.m"
              MR_Word hlds__assertion__TypeInfo_12_36;
#line 602 "assertion.m"
              MR_Box hlds__assertion__conv0_SubstVA_34;

#line 585 "assertion.m"
              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 585 "assertion.m"
              if (hlds__assertion__succeeded)
#line 585 "assertion.m"
                {
#line 585 "assertion.m"
                  hlds__assertion__VarB_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__2_2, (MR_Integer) 1)));
#line 585 "assertion.m"
                  hlds__assertion__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__2_2, (MR_Integer) 2)));
#line 585 "assertion.m"
                  hlds__assertion__succeeded = (hlds__assertion__Kind_20 == hlds__assertion__V_28_28);
#line 586 "assertion.m"
                  if (hlds__assertion__succeeded)
#line 586 "assertion.m"
                    {
#line 4220 "hlds.assertion.c"
                      hlds__assertion__TypeInfo_12_36 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 602 "assertion.m"
                      {
#line 602 "assertion.m"
                        hlds__assertion__succeeded = mercury__map__search_3_p_0(hlds__assertion__TypeInfo_12_36, hlds__assertion__TypeInfo_12_36, hlds__assertion__STATE_VARIABLE_Subst_0_3, ((MR_Box) (hlds__assertion__VarA_19)), &hlds__assertion__conv0_SubstVA_34);
                      }
#line 602 "assertion.m"
                      if (hlds__assertion__succeeded)
#line 602 "assertion.m"
                        {
#line 602 "assertion.m"
                          hlds__assertion__SubstVA_34 = ((MR_Word) hlds__assertion__conv0_SubstVA_34);
#line 602 "assertion.m"
                          hlds__assertion__succeeded = MR_TRUE;
#line 602 "assertion.m"
                        }
#line 604 "assertion.m"
                      if (hlds__assertion__succeeded)
#line 603 "assertion.m"
                        {
#line 603 "assertion.m"
                          {
#line 603 "assertion.m"
                            hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__SubstVA_34)), ((MR_Box) (hlds__assertion__VarB_21)));
                          }
#line 603 "assertion.m"
                          if (hlds__assertion__succeeded)
#line 603 "assertion.m"
                            {
#line 603 "assertion.m"
                              *hlds__assertion__STATE_VARIABLE_Subst_4 = hlds__assertion__STATE_VARIABLE_Subst_0_3;
#line 603 "assertion.m"
                              hlds__assertion__succeeded = MR_TRUE;
#line 603 "assertion.m"
                            }
#line 603 "assertion.m"
                        }
#line 604 "assertion.m"
                      else
#line 605 "assertion.m"
                        {
#line 605 "assertion.m"
                          MR_Word hlds__assertion__TypeInfo_13_37 = (MR_Word) &hlds__assertion_scalar_common_1[0];

#line 605 "assertion.m"
                          {
#line 605 "assertion.m"
                            return hlds__assertion__succeeded = mercury__map__insert_4_p_0(hlds__assertion__TypeInfo_13_37, hlds__assertion__TypeInfo_13_37, ((MR_Box) (hlds__assertion__VarA_19)), ((MR_Box) (hlds__assertion__VarB_21)), hlds__assertion__STATE_VARIABLE_Subst_0_3, hlds__assertion__STATE_VARIABLE_Subst_4);
                          }
#line 605 "assertion.m"
                        }
#line 586 "assertion.m"
                    }
#line 585 "assertion.m"
                }
#line 586 "assertion.m"
            }
#line 581 "assertion.m"
            break;
#line 581 "assertion.m"
        }
#line 581 "assertion.m"
        break;
#line 581 "assertion.m"
    }
#line 581 "assertion.m"
    return hlds__assertion__succeeded;
#line 581 "assertion.m"
  }
#line 578 "assertion.m"
}

#line 570 "assertion.m"
static MR_Box MR_CALL 
hlds__assertion__equal_goal_exprs_4_p_0_2(
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
    MR_Word hlds__assertion__conv1_HeadVar__2_2;

#line 570 "assertion.m"
    {
#line 570 "assertion.m"
      hlds__assertion__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__assertion__wrapper_arg_1));
    }
#line 570 "assertion.m"
    hlds__assertion__wrapper_arg_2 = ((MR_Box) (hlds__assertion__conv1_HeadVar__2_2));
#line 570 "assertion.m"
    return hlds__assertion__wrapper_arg_2;
#line 570 "assertion.m"
  }
#line 570 "assertion.m"
}

#line 569 "assertion.m"
static MR_Box MR_CALL 
hlds__assertion__equal_goal_exprs_4_p_0_1(
#line 569 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 569 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1)
#line 569 "assertion.m"
{
#line 569 "assertion.m"
  {
#line 569 "assertion.m"
    MR_Box hlds__assertion__wrapper_arg_2;
#line 569 "assertion.m"
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;
#line 569 "assertion.m"
    MR_Word hlds__assertion__conv0_HeadVar__2_2;

#line 569 "assertion.m"
    {
#line 569 "assertion.m"
      hlds__assertion__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__assertion__wrapper_arg_1));
    }
#line 569 "assertion.m"
    hlds__assertion__wrapper_arg_2 = ((MR_Box) (hlds__assertion__conv0_HeadVar__2_2));
#line 569 "assertion.m"
    return hlds__assertion__wrapper_arg_2;
#line 569 "assertion.m"
  }
#line 569 "assertion.m"
}

#line 513 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_goal_exprs_4_p_0(
#line 513 "assertion.m"
  MR_Word hlds__assertion__GoalExprA_5,
#line 513 "assertion.m"
  MR_Word hlds__assertion__GoalExprB_6,
#line 513 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_68,
#line 513 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_69)
#line 513 "assertion.m"
{
#line 518 "assertion.m"
  {
#line 518 "assertion.m"
    MR_bool hlds__assertion__succeeded;

#line 518 "assertion.m"
#line 518 "assertion.m"
    switch (MR_tag((MR_Word) hlds__assertion__GoalExprA_5)) {
#line 518 "assertion.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 518 "assertion.m"
      case (MR_Integer) 0:
#line 543 "assertion.m"
        {
#line 543 "assertion.m"
          MR_Word hlds__assertion__SubGoalA_43 = (MR_Word) MR_body(((MR_Word) hlds__assertion__GoalExprA_5), (MR_Integer) 0);
#line 543 "assertion.m"
          MR_Word hlds__assertion__SubGoalB_44;

#line 544 "assertion.m"
          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 0)));
#line 544 "assertion.m"
          if (hlds__assertion__succeeded)
#line 544 "assertion.m"
            {
#line 544 "assertion.m"
              hlds__assertion__SubGoalB_44 = (MR_Word) MR_body(((MR_Word) hlds__assertion__GoalExprB_6), (MR_Integer) 0);
#line 545 "assertion.m"
              {
#line 545 "assertion.m"
                return hlds__assertion__succeeded = hlds__assertion__equal_goals_4_p_0(hlds__assertion__SubGoalA_43, hlds__assertion__SubGoalB_44, hlds__assertion__STATE_VARIABLE_Subst_0_68, hlds__assertion__STATE_VARIABLE_Subst_69);
              }
#line 544 "assertion.m"
            }
#line 543 "assertion.m"
        }
#line 518 "assertion.m"
        break;
#line 518 "assertion.m"
      case (MR_Integer) 1:
#line 534 "assertion.m"
        {
#line 534 "assertion.m"
          MR_Word hlds__assertion__VarA_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprA_5, (MR_Integer) 0)));
#line 534 "assertion.m"
          MR_Word hlds__assertion__RHSA_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprA_5, (MR_Integer) 1)));
#line 534 "assertion.m"
          MR_Word hlds__assertion__VarB_38;
#line 534 "assertion.m"
          MR_Word hlds__assertion__RHSB_39;
#line 534 "assertion.m"
          MR_Word hlds__assertion__STATE_VARIABLE_Subst_82_82;
#line 534 "assertion.m"
          MR_Word hlds__assertion__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprA_5, (MR_Integer) 2)));
#line 534 "assertion.m"
          MR_Word hlds__assertion__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprA_5, (MR_Integer) 3)));
#line 534 "assertion.m"
          MR_Word hlds__assertion__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprA_5, (MR_Integer) 4)));
#line 535 "assertion.m"
          MR_Word hlds__assertion__V_40_40;
#line 535 "assertion.m"
          MR_Word hlds__assertion__V_41_41;
#line 535 "assertion.m"
          MR_Word hlds__assertion__V_42_42;

#line 535 "assertion.m"
          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 1)));
#line 535 "assertion.m"
          if (hlds__assertion__succeeded)
#line 535 "assertion.m"
            {
#line 535 "assertion.m"
              hlds__assertion__VarB_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprB_6, (MR_Integer) 0)));
#line 535 "assertion.m"
              hlds__assertion__RHSB_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprB_6, (MR_Integer) 1)));
#line 535 "assertion.m"
              hlds__assertion__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprB_6, (MR_Integer) 2)));
#line 535 "assertion.m"
              hlds__assertion__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprB_6, (MR_Integer) 3)));
#line 535 "assertion.m"
              hlds__assertion__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprB_6, (MR_Integer) 4)));
#line 536 "assertion.m"
              {
#line 536 "assertion.m"
                hlds__assertion__succeeded = hlds__assertion__equal_var_4_p_0(hlds__assertion__VarA_33, hlds__assertion__VarB_38, hlds__assertion__STATE_VARIABLE_Subst_0_68, &hlds__assertion__STATE_VARIABLE_Subst_82_82);
              }
#line 534 "assertion.m"
              if (hlds__assertion__succeeded)
#line 537 "assertion.m"
                {
#line 537 "assertion.m"
                  return hlds__assertion__succeeded = hlds__assertion__equal_unification_4_p_0(hlds__assertion__RHSA_34, hlds__assertion__RHSB_39, hlds__assertion__STATE_VARIABLE_Subst_82_82, hlds__assertion__STATE_VARIABLE_Subst_69);
                }
#line 535 "assertion.m"
            }
#line 534 "assertion.m"
        }
#line 518 "assertion.m"
        break;
#line 518 "assertion.m"
      case (MR_Integer) 2:
#line 522 "assertion.m"
        {
#line 522 "assertion.m"
          MR_Word hlds__assertion__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprA_5, (MR_Integer) 0)));
#line 522 "assertion.m"
          MR_Word hlds__assertion__ArgVarsA_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprA_5, (MR_Integer) 2)));
#line 522 "assertion.m"
          MR_Word hlds__assertion__ArgVarsB_18;
#line 522 "assertion.m"
          MR_Word hlds__assertion__V_104_104;
#line 522 "assertion.m"
          MR_Integer hlds__assertion__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprA_5, (MR_Integer) 1)));
#line 522 "assertion.m"
          MR_Word hlds__assertion__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprA_5, (MR_Integer) 3)));
#line 522 "assertion.m"
          MR_Word hlds__assertion__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprA_5, (MR_Integer) 4)));
#line 522 "assertion.m"
          MR_Word hlds__assertion__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprA_5, (MR_Integer) 5)));
#line 523 "assertion.m"
          MR_Integer hlds__assertion__V_17_17;
#line 523 "assertion.m"
          MR_Word hlds__assertion__V_19_19;
#line 523 "assertion.m"
          MR_Word hlds__assertion__V_20_20;
#line 523 "assertion.m"
          MR_Word hlds__assertion__V_21_21;

#line 523 "assertion.m"
          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 2)));
#line 523 "assertion.m"
          if (hlds__assertion__succeeded)
#line 523 "assertion.m"
            {
#line 523 "assertion.m"
              hlds__assertion__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprB_6, (MR_Integer) 0)));
#line 523 "assertion.m"
              hlds__assertion__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprB_6, (MR_Integer) 1)));
#line 523 "assertion.m"
              hlds__assertion__ArgVarsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprB_6, (MR_Integer) 2)));
#line 523 "assertion.m"
              hlds__assertion__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprB_6, (MR_Integer) 3)));
#line 523 "assertion.m"
              hlds__assertion__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprB_6, (MR_Integer) 4)));
#line 523 "assertion.m"
              hlds__assertion__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprB_6, (MR_Integer) 5)));
#line 523 "assertion.m"
              {
#line 523 "assertion.m"
                hlds__assertion__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__assertion__PredId_11, hlds__assertion__V_104_104);
              }
#line 522 "assertion.m"
              if (hlds__assertion__succeeded)
#line 524 "assertion.m"
                {
#line 524 "assertion.m"
                  return hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__ArgVarsA_13, hlds__assertion__ArgVarsB_18, hlds__assertion__STATE_VARIABLE_Subst_0_68, hlds__assertion__STATE_VARIABLE_Subst_69);
                }
#line 523 "assertion.m"
            }
#line 522 "assertion.m"
        }
#line 518 "assertion.m"
        break;
#line 518 "assertion.m"
      case (MR_Integer) 3:
#line 518 "assertion.m"
#line 518 "assertion.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 0)))) {
#line 518 "assertion.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 518 "assertion.m"
          case (MR_Integer) 0:
#line 526 "assertion.m"
            {
#line 526 "assertion.m"
              MR_Word hlds__assertion__CallDetails_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 1)));
#line 526 "assertion.m"
              MR_Word hlds__assertion__ArgVarsA_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 2)));
#line 526 "assertion.m"
              MR_Word hlds__assertion__ArgVarsB_89;
#line 526 "assertion.m"
              MR_Word hlds__assertion__V_105_105;
#line 526 "assertion.m"
              MR_Word hlds__assertion__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 3)));
#line 526 "assertion.m"
              MR_Word hlds__assertion__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 4)));
#line 526 "assertion.m"
              MR_Word hlds__assertion__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 5)));
#line 527 "assertion.m"
              MR_Word hlds__assertion__V_26_26;
#line 527 "assertion.m"
              MR_Word hlds__assertion__V_27_27;
#line 527 "assertion.m"
              MR_Word hlds__assertion__V_28_28;

#line 527 "assertion.m"
              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 527 "assertion.m"
              if (hlds__assertion__succeeded)
#line 527 "assertion.m"
                {
#line 527 "assertion.m"
                  hlds__assertion__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 1)));
#line 527 "assertion.m"
                  hlds__assertion__ArgVarsB_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 2)));
#line 527 "assertion.m"
                  hlds__assertion__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 3)));
#line 527 "assertion.m"
                  hlds__assertion__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 4)));
#line 527 "assertion.m"
                  hlds__assertion__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 5)));
#line 527 "assertion.m"
                  {
#line 527 "assertion.m"
                    hlds__assertion__succeeded = hlds__hlds_goal____Unify____generic_call_0_0(hlds__assertion__CallDetails_22, hlds__assertion__V_105_105);
                  }
#line 526 "assertion.m"
                  if (hlds__assertion__succeeded)
#line 528 "assertion.m"
                    {
#line 528 "assertion.m"
                      return hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__ArgVarsA_88, hlds__assertion__ArgVarsB_89, hlds__assertion__STATE_VARIABLE_Subst_0_68, hlds__assertion__STATE_VARIABLE_Subst_69);
                    }
#line 527 "assertion.m"
                }
#line 526 "assertion.m"
            }
#line 518 "assertion.m"
            break;
#line 518 "assertion.m"
          case (MR_Integer) 1:
#line 560 "assertion.m"
            {
#line 560 "assertion.m"
              MR_Word hlds__assertion__TypeCtorInfo_97_97;
#line 560 "assertion.m"
              MR_Word hlds__assertion__TypeInfo_98_98;
#line 560 "assertion.m"
              MR_Word hlds__assertion__Attributes_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 1)));
#line 560 "assertion.m"
              MR_Word hlds__assertion__ArgsA_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 4)));
#line 560 "assertion.m"
              MR_Word hlds__assertion__ExtraA_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 5)));
#line 560 "assertion.m"
              MR_Word hlds__assertion__MaybeTraceA_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 6)));
#line 560 "assertion.m"
              MR_Word hlds__assertion__ArgsB_62;
#line 560 "assertion.m"
              MR_Word hlds__assertion__ExtraB_63;
#line 560 "assertion.m"
              MR_Word hlds__assertion__MaybeTraceB_64;
#line 560 "assertion.m"
              MR_Word hlds__assertion__V_71_71;
#line 560 "assertion.m"
              MR_Word hlds__assertion__V_72_72;
#line 560 "assertion.m"
              MR_Word hlds__assertion__PredId_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 2)));
#line 560 "assertion.m"
              MR_Word hlds__assertion__VarsA_95;
#line 560 "assertion.m"
              MR_Word hlds__assertion__VarsB_96;
#line 560 "assertion.m"
              MR_Word hlds__assertion__V_108_108;
#line 560 "assertion.m"
              MR_Word hlds__assertion__V_109_109;
#line 559 "assertion.m"
              MR_Integer hlds__assertion__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 3)));
#line 559 "assertion.m"
              MR_Word hlds__assertion__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 7)));
#line 561 "assertion.m"
              MR_Integer hlds__assertion__V_61_61;
#line 561 "assertion.m"
              MR_Word hlds__assertion__V_65_65;

#line 561 "assertion.m"
              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 561 "assertion.m"
              if (hlds__assertion__succeeded)
#line 561 "assertion.m"
                {
#line 561 "assertion.m"
                  hlds__assertion__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 1)));
#line 561 "assertion.m"
                  hlds__assertion__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 2)));
#line 561 "assertion.m"
                  hlds__assertion__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 3)));
#line 561 "assertion.m"
                  hlds__assertion__ArgsB_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 4)));
#line 561 "assertion.m"
                  hlds__assertion__ExtraB_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 5)));
#line 561 "assertion.m"
                  hlds__assertion__MaybeTraceB_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 6)));
#line 561 "assertion.m"
                  hlds__assertion__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 7)));
#line 561 "assertion.m"
                  {
#line 561 "assertion.m"
                    hlds__assertion__succeeded = parse_tree__prog_data____Unify____pragma_foreign_proc_attributes_0_0(hlds__assertion__Attributes_55, hlds__assertion__V_108_108);
                  }
#line 560 "assertion.m"
                  if (hlds__assertion__succeeded)
#line 560 "assertion.m"
                    {
#line 561 "assertion.m"
                      {
#line 561 "assertion.m"
                        hlds__assertion__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__assertion__PredId_94, hlds__assertion__V_109_109);
                      }
#line 560 "assertion.m"
                      if (hlds__assertion__succeeded)
#line 560 "assertion.m"
                        {
#line 565 "assertion.m"
                          hlds__assertion__succeeded = (hlds__assertion__ExtraA_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 560 "assertion.m"
                          if (hlds__assertion__succeeded)
#line 560 "assertion.m"
                            {
#line 566 "assertion.m"
                              hlds__assertion__succeeded = (hlds__assertion__ExtraB_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 560 "assertion.m"
                              if (hlds__assertion__succeeded)
#line 560 "assertion.m"
                                {
#line 567 "assertion.m"
                                  hlds__assertion__succeeded = (hlds__assertion__MaybeTraceA_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 560 "assertion.m"
                                  if (hlds__assertion__succeeded)
#line 560 "assertion.m"
                                    {
#line 568 "assertion.m"
                                      hlds__assertion__succeeded = (hlds__assertion__MaybeTraceB_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 560 "assertion.m"
                                      if (hlds__assertion__succeeded)
#line 560 "assertion.m"
                                        {
#line 4707 "hlds.assertion.c"
                                          hlds__assertion__TypeCtorInfo_97_97 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 4709 "hlds.assertion.c"
                                          hlds__assertion__TypeInfo_98_98 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 569 "assertion.m"
                                          hlds__assertion__V_71_71 = (MR_Word) &hlds__assertion_scalar_common_2[7];
#line 569 "assertion.m"
                                          {
#line 569 "assertion.m"
                                            hlds__assertion__VarsA_95 = mercury__list__map_2_f_0(hlds__assertion__TypeCtorInfo_97_97, hlds__assertion__TypeInfo_98_98, hlds__assertion__V_71_71, hlds__assertion__ArgsA_57);
                                          }
#line 570 "assertion.m"
                                          hlds__assertion__V_72_72 = (MR_Word) &hlds__assertion_scalar_common_2[8];
#line 570 "assertion.m"
                                          {
#line 570 "assertion.m"
                                            hlds__assertion__VarsB_96 = mercury__list__map_2_f_0(hlds__assertion__TypeCtorInfo_97_97, hlds__assertion__TypeInfo_98_98, hlds__assertion__V_72_72, hlds__assertion__ArgsB_62);
                                          }
#line 571 "assertion.m"
                                          {
#line 571 "assertion.m"
                                            return hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__VarsA_95, hlds__assertion__VarsB_96, hlds__assertion__STATE_VARIABLE_Subst_0_68, hlds__assertion__STATE_VARIABLE_Subst_69);
                                          }
#line 560 "assertion.m"
                                        }
#line 560 "assertion.m"
                                    }
#line 560 "assertion.m"
                                }
#line 560 "assertion.m"
                            }
#line 560 "assertion.m"
                        }
#line 560 "assertion.m"
                    }
#line 561 "assertion.m"
                }
#line 560 "assertion.m"
            }
#line 518 "assertion.m"
            break;
#line 518 "assertion.m"
          case (MR_Integer) 2:
#line 518 "assertion.m"
            {
#line 518 "assertion.m"
              MR_Word hlds__assertion__ConjType_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 1)));
#line 518 "assertion.m"
              MR_Word hlds__assertion__GoalsA_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 2)));
#line 518 "assertion.m"
              MR_Word hlds__assertion__GoalsB_10;
#line 518 "assertion.m"
              MR_Word hlds__assertion__V_103_103;

#line 519 "assertion.m"
              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 519 "assertion.m"
              if (hlds__assertion__succeeded)
#line 519 "assertion.m"
                {
#line 519 "assertion.m"
                  hlds__assertion__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 1)));
#line 519 "assertion.m"
                  hlds__assertion__GoalsB_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 2)));
#line 519 "assertion.m"
                  hlds__assertion__succeeded = (hlds__assertion__ConjType_8 == hlds__assertion__V_103_103);
#line 518 "assertion.m"
                  if (hlds__assertion__succeeded)
#line 520 "assertion.m"
                    {
#line 520 "assertion.m"
                      return hlds__assertion__succeeded = hlds__assertion__equal_goals_list_4_p_0(hlds__assertion__GoalsA_9, hlds__assertion__GoalsB_10, hlds__assertion__STATE_VARIABLE_Subst_0_68, hlds__assertion__STATE_VARIABLE_Subst_69);
                    }
#line 519 "assertion.m"
                }
#line 518 "assertion.m"
            }
#line 518 "assertion.m"
            break;
#line 518 "assertion.m"
          case (MR_Integer) 3:
#line 539 "assertion.m"
            {
#line 539 "assertion.m"
              MR_Word hlds__assertion__GoalsA_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 1)));
#line 539 "assertion.m"
              MR_Word hlds__assertion__GoalsB_91;

#line 540 "assertion.m"
              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 540 "assertion.m"
              if (hlds__assertion__succeeded)
#line 540 "assertion.m"
                {
#line 540 "assertion.m"
                  hlds__assertion__GoalsB_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 1)));
#line 541 "assertion.m"
                  {
#line 541 "assertion.m"
                    return hlds__assertion__succeeded = hlds__assertion__equal_goals_list_4_p_0(hlds__assertion__GoalsA_90, hlds__assertion__GoalsB_91, hlds__assertion__STATE_VARIABLE_Subst_0_68, hlds__assertion__STATE_VARIABLE_Subst_69);
                  }
#line 540 "assertion.m"
                }
#line 539 "assertion.m"
            }
#line 518 "assertion.m"
            break;
#line 518 "assertion.m"
          case (MR_Integer) 4:
#line 530 "assertion.m"
            {
#line 530 "assertion.m"
              MR_Word hlds__assertion__TypeInfo_114_114;
#line 530 "assertion.m"
              MR_Word hlds__assertion__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 1)));
#line 530 "assertion.m"
              MR_Word hlds__assertion__CanFail_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 2)));
#line 530 "assertion.m"
              MR_Word hlds__assertion__CasesA_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 3)));
#line 530 "assertion.m"
              MR_Word hlds__assertion__CasesB_32;
#line 530 "assertion.m"
              MR_Word hlds__assertion__V_106_106;
#line 530 "assertion.m"
              MR_Word hlds__assertion__V_107_107;

#line 531 "assertion.m"
              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 531 "assertion.m"
              if (hlds__assertion__succeeded)
#line 531 "assertion.m"
                {
#line 531 "assertion.m"
                  hlds__assertion__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 1)));
#line 531 "assertion.m"
                  hlds__assertion__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 2)));
#line 531 "assertion.m"
                  hlds__assertion__CasesB_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 3)));
#line 4845 "hlds.assertion.c"
                  hlds__assertion__TypeInfo_114_114 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 531 "assertion.m"
                  {
#line 531 "assertion.m"
                    hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_114_114, ((MR_Box) (hlds__assertion__Var_29)), ((MR_Box) (hlds__assertion__V_106_106)));
                  }
#line 530 "assertion.m"
                  if (hlds__assertion__succeeded)
#line 530 "assertion.m"
                    {
#line 531 "assertion.m"
                      hlds__assertion__succeeded = (hlds__assertion__CanFail_30 == hlds__assertion__V_107_107);
#line 530 "assertion.m"
                      if (hlds__assertion__succeeded)
#line 532 "assertion.m"
                        {
#line 532 "assertion.m"
                          return hlds__assertion__succeeded = hlds__assertion__equal_goals_cases_4_p_0(hlds__assertion__CasesA_31, hlds__assertion__CasesB_32, hlds__assertion__STATE_VARIABLE_Subst_0_68, hlds__assertion__STATE_VARIABLE_Subst_69);
                        }
#line 530 "assertion.m"
                    }
#line 531 "assertion.m"
                }
#line 530 "assertion.m"
            }
#line 518 "assertion.m"
            break;
#line 518 "assertion.m"
          case (MR_Integer) 5:
#line 547 "assertion.m"
            {
#line 547 "assertion.m"
              MR_Word hlds__assertion__ReasonA_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 1)));
#line 547 "assertion.m"
              MR_Word hlds__assertion__ReasonB_46;
#line 547 "assertion.m"
              MR_Word hlds__assertion__STATE_VARIABLE_Subst_78_78;
#line 547 "assertion.m"
              MR_Word hlds__assertion__SubGoalA_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 2)));
#line 547 "assertion.m"
              MR_Word hlds__assertion__SubGoalB_93;

#line 548 "assertion.m"
              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 548 "assertion.m"
              if (hlds__assertion__succeeded)
#line 548 "assertion.m"
                {
#line 548 "assertion.m"
                  hlds__assertion__ReasonB_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 1)));
#line 548 "assertion.m"
                  hlds__assertion__SubGoalB_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 2)));
#line 549 "assertion.m"
                  {
#line 549 "assertion.m"
                    hlds__assertion__succeeded = hlds__assertion__equal_reason_4_p_0(hlds__assertion__ReasonA_45, hlds__assertion__ReasonB_46, hlds__assertion__STATE_VARIABLE_Subst_0_68, &hlds__assertion__STATE_VARIABLE_Subst_78_78);
                  }
#line 547 "assertion.m"
                  if (hlds__assertion__succeeded)
#line 550 "assertion.m"
                    {
#line 550 "assertion.m"
                      return hlds__assertion__succeeded = hlds__assertion__equal_goals_4_p_0(hlds__assertion__SubGoalA_92, hlds__assertion__SubGoalB_93, hlds__assertion__STATE_VARIABLE_Subst_78_78, hlds__assertion__STATE_VARIABLE_Subst_69);
                    }
#line 548 "assertion.m"
                }
#line 547 "assertion.m"
            }
#line 518 "assertion.m"
            break;
#line 518 "assertion.m"
          case (MR_Integer) 6:
#line 552 "assertion.m"
            {
#line 552 "assertion.m"
              MR_Word hlds__assertion__VarsA_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 1)));
#line 552 "assertion.m"
              MR_Word hlds__assertion__CondA_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 2)));
#line 552 "assertion.m"
              MR_Word hlds__assertion__ThenA_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 3)));
#line 552 "assertion.m"
              MR_Word hlds__assertion__ElseA_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 4)));
#line 552 "assertion.m"
              MR_Word hlds__assertion__VarsB_51;
#line 552 "assertion.m"
              MR_Word hlds__assertion__CondB_52;
#line 552 "assertion.m"
              MR_Word hlds__assertion__ThenB_53;
#line 552 "assertion.m"
              MR_Word hlds__assertion__ElseB_54;
#line 552 "assertion.m"
              MR_Word hlds__assertion__STATE_VARIABLE_Subst_74_74;
#line 552 "assertion.m"
              MR_Word hlds__assertion__STATE_VARIABLE_Subst_75_75;
#line 552 "assertion.m"
              MR_Word hlds__assertion__STATE_VARIABLE_Subst_76_76;

#line 553 "assertion.m"
              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 553 "assertion.m"
              if (hlds__assertion__succeeded)
#line 553 "assertion.m"
                {
#line 553 "assertion.m"
                  hlds__assertion__VarsB_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 1)));
#line 553 "assertion.m"
                  hlds__assertion__CondB_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 2)));
#line 553 "assertion.m"
                  hlds__assertion__ThenB_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 3)));
#line 553 "assertion.m"
                  hlds__assertion__ElseB_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 4)));
#line 554 "assertion.m"
                  {
#line 554 "assertion.m"
                    hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__VarsA_47, hlds__assertion__VarsB_51, hlds__assertion__STATE_VARIABLE_Subst_0_68, &hlds__assertion__STATE_VARIABLE_Subst_74_74);
                  }
#line 552 "assertion.m"
                  if (hlds__assertion__succeeded)
#line 552 "assertion.m"
                    {
#line 555 "assertion.m"
                      {
#line 555 "assertion.m"
                        hlds__assertion__succeeded = hlds__assertion__equal_goals_4_p_0(hlds__assertion__CondA_48, hlds__assertion__CondB_52, hlds__assertion__STATE_VARIABLE_Subst_74_74, &hlds__assertion__STATE_VARIABLE_Subst_75_75);
                      }
#line 552 "assertion.m"
                      if (hlds__assertion__succeeded)
#line 552 "assertion.m"
                        {
#line 556 "assertion.m"
                          {
#line 556 "assertion.m"
                            hlds__assertion__succeeded = hlds__assertion__equal_goals_4_p_0(hlds__assertion__ThenA_49, hlds__assertion__ThenB_53, hlds__assertion__STATE_VARIABLE_Subst_75_75, &hlds__assertion__STATE_VARIABLE_Subst_76_76);
                          }
#line 552 "assertion.m"
                          if (hlds__assertion__succeeded)
#line 557 "assertion.m"
                            {
#line 557 "assertion.m"
                              return hlds__assertion__succeeded = hlds__assertion__equal_goals_4_p_0(hlds__assertion__ElseA_50, hlds__assertion__ElseB_54, hlds__assertion__STATE_VARIABLE_Subst_76_76, hlds__assertion__STATE_VARIABLE_Subst_69);
                            }
#line 552 "assertion.m"
                        }
#line 552 "assertion.m"
                    }
#line 553 "assertion.m"
                }
#line 552 "assertion.m"
            }
#line 518 "assertion.m"
            break;
#line 518 "assertion.m"
          case (MR_Integer) 7:
#line 573 "assertion.m"
            {
#line 573 "assertion.m"
              MR_Word hlds__assertion__ShortHandA_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 1)));
#line 573 "assertion.m"
              MR_Word hlds__assertion__ShortHandB_67;

#line 574 "assertion.m"
              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 574 "assertion.m"
              if (hlds__assertion__succeeded)
#line 574 "assertion.m"
                {
#line 574 "assertion.m"
                  hlds__assertion__ShortHandB_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 1)));
#line 575 "assertion.m"
                  {
#line 575 "assertion.m"
                    return hlds__assertion__succeeded = hlds__assertion__equal_goals_shorthand_4_p_0(hlds__assertion__ShortHandA_66, hlds__assertion__ShortHandB_67, hlds__assertion__STATE_VARIABLE_Subst_0_68, hlds__assertion__STATE_VARIABLE_Subst_69);
                  }
#line 574 "assertion.m"
                }
#line 573 "assertion.m"
            }
#line 518 "assertion.m"
            break;
#line 518 "assertion.m"
        }
#line 518 "assertion.m"
        break;
#line 518 "assertion.m"
    }
#line 518 "assertion.m"
    return hlds__assertion__succeeded;
#line 518 "assertion.m"
  }
#line 513 "assertion.m"
}

#line 505 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__equal_goals_4_p_0(
#line 505 "assertion.m"
  MR_Word hlds__assertion__GoalA_5,
#line 505 "assertion.m"
  MR_Word hlds__assertion__GoalB_6,
#line 505 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_12,
#line 505 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_13)
#line 505 "assertion.m"
{
#line 508 "assertion.m"
  {
#line 508 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 508 "assertion.m"
    MR_Word hlds__assertion__GoalExprA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalA_5, (MR_Integer) 0)));
#line 508 "assertion.m"
    MR_Word hlds__assertion__GoalExprB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalB_6, (MR_Integer) 0)));
#line 509 "assertion.m"
    MR_Word hlds__assertion___GoalInfoA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalA_5, (MR_Integer) 1)));
#line 510 "assertion.m"
    MR_Word hlds__assertion___GoalInfoB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalB_6, (MR_Integer) 1)));

#line 511 "assertion.m"
    {
#line 511 "assertion.m"
      return hlds__assertion__succeeded = hlds__assertion__equal_goal_exprs_4_p_0(hlds__assertion__GoalExprA_8, hlds__assertion__GoalExprB_10, hlds__assertion__STATE_VARIABLE_Subst_0_12, hlds__assertion__STATE_VARIABLE_Subst_13);
    }
#line 508 "assertion.m"
    return hlds__assertion__succeeded;
#line 508 "assertion.m"
  }
#line 505 "assertion.m"
}

#line 484 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__goal_is_equivalence_3_p_0(
#line 484 "assertion.m"
  MR_Word hlds__assertion__Goal_4,
#line 484 "assertion.m"
  MR_Word * hlds__assertion__P_5,
#line 484 "assertion.m"
  MR_Word * hlds__assertion__Q_6)
#line 484 "assertion.m"
{
#line 487 "assertion.m"
  {
#line 487 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 487 "assertion.m"
    MR_Word hlds__assertion__TypeInfo_22_22;
#line 487 "assertion.m"
    MR_Word hlds__assertion__TypeCtorInfo_24_43;
#line 487 "assertion.m"
    MR_Word hlds__assertion__TypeCtorInfo_24_64;
#line 487 "assertion.m"
    MR_Word hlds__assertion__A_7;
#line 487 "assertion.m"
    MR_Word hlds__assertion__B_8;
#line 487 "assertion.m"
    MR_Word hlds__assertion__Subst_10;
#line 487 "assertion.m"
    MR_Word hlds__assertion__QB_13;
#line 487 "assertion.m"
    MR_Word hlds__assertion__PB_14;
#line 487 "assertion.m"
    MR_Word hlds__assertion__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_4, (MR_Integer) 0)));
#line 487 "assertion.m"
    MR_Word hlds__assertion__V_18_18;
#line 487 "assertion.m"
    MR_Word hlds__assertion__V_19_19;
#line 487 "assertion.m"
    MR_Word hlds__assertion__V_20_20;
#line 487 "assertion.m"
    MR_Word hlds__assertion__V_21_21;
#line 487 "assertion.m"
    MR_Word hlds__assertion__GoalList_26;
#line 487 "assertion.m"
    MR_Word hlds__assertion__GI_28;
#line 487 "assertion.m"
    MR_Word hlds__assertion__NotQ_29;
#line 487 "assertion.m"
    MR_Word hlds__assertion__Ps_30;
#line 487 "assertion.m"
    MR_Word hlds__assertion__V_33_33;
#line 487 "assertion.m"
    MR_Word hlds__assertion__V_34_34;
#line 487 "assertion.m"
    MR_Word hlds__assertion__V_35_35;
#line 487 "assertion.m"
    MR_Word hlds__assertion__V_36_36;
#line 487 "assertion.m"
    MR_Word hlds__assertion__V_37_37;
#line 487 "assertion.m"
    MR_Word hlds__assertion__V_42_42;
#line 487 "assertion.m"
    MR_Word hlds__assertion__GoalList_47;
#line 487 "assertion.m"
    MR_Word hlds__assertion__GI_49;
#line 487 "assertion.m"
    MR_Word hlds__assertion__NotQ_50;
#line 487 "assertion.m"
    MR_Word hlds__assertion__Ps_51;
#line 487 "assertion.m"
    MR_Word hlds__assertion__V_54_54;
#line 487 "assertion.m"
    MR_Word hlds__assertion__V_55_55;
#line 487 "assertion.m"
    MR_Word hlds__assertion__V_56_56;
#line 487 "assertion.m"
    MR_Word hlds__assertion__V_57_57;
#line 487 "assertion.m"
    MR_Word hlds__assertion__V_58_58;
#line 487 "assertion.m"
    MR_Word hlds__assertion__V_63_63;
#line 487 "assertion.m"
    MR_Word hlds__assertion__GoalExprA_70;
#line 487 "assertion.m"
    MR_Word hlds__assertion__GoalExprB_72;
#line 487 "assertion.m"
    MR_Word hlds__assertion__GoalExprA_80;
#line 487 "assertion.m"
    MR_Word hlds__assertion__GoalExprB_82;
#line 489 "assertion.m"
    MR_Word hlds__assertion___GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_4, (MR_Integer) 1)));
#line 475 "assertion.m"
    MR_Word hlds__assertion__V_27_27;
#line 479 "assertion.m"
    MR_Word hlds__assertion__P0_31;
#line 477 "assertion.m"
    MR_Word hlds__assertion__V_38_38;
#line 482 "assertion.m"
    MR_Word hlds__assertion__V_32_32;
#line 475 "assertion.m"
    MR_Word hlds__assertion__V_48_48;
#line 479 "assertion.m"
    MR_Word hlds__assertion__P0_52;
#line 477 "assertion.m"
    MR_Word hlds__assertion__V_59_59;
#line 482 "assertion.m"
    MR_Word hlds__assertion__V_53_53;
#line 509 "assertion.m"
    MR_Word hlds__assertion___GoalInfoA_71;
#line 510 "assertion.m"
    MR_Word hlds__assertion___GoalInfoB_73;
#line 511 "assertion.m"
    MR_Word hlds__assertion__V_15_15;
#line 509 "assertion.m"
    MR_Word hlds__assertion___GoalInfoA_81;
#line 510 "assertion.m"
    MR_Word hlds__assertion___GoalInfoB_83;
#line 511 "assertion.m"
    MR_Word hlds__assertion__V_16_16;

#line 489 "assertion.m"
    hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_17_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_17_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 489 "assertion.m"
    if (hlds__assertion__succeeded)
#line 489 "assertion.m"
      {
#line 489 "assertion.m"
        hlds__assertion__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_17_17, (MR_Integer) 1)));
#line 489 "assertion.m"
        hlds__assertion__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_17_17, (MR_Integer) 2)));
#line 489 "assertion.m"
        hlds__assertion__succeeded = (hlds__assertion__V_18_18 == (MR_Integer) 0);
#line 487 "assertion.m"
        if (hlds__assertion__succeeded)
#line 487 "assertion.m"
          {
#line 489 "assertion.m"
            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 489 "assertion.m"
            if (hlds__assertion__succeeded)
#line 489 "assertion.m"
              {
#line 489 "assertion.m"
                hlds__assertion__A_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_19_19, (MR_Integer) 0)));
#line 489 "assertion.m"
                hlds__assertion__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_19_19, (MR_Integer) 1)));
#line 489 "assertion.m"
                hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 489 "assertion.m"
                if (hlds__assertion__succeeded)
#line 489 "assertion.m"
                  {
#line 489 "assertion.m"
                    hlds__assertion__B_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_20_20, (MR_Integer) 0)));
#line 489 "assertion.m"
                    hlds__assertion__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_20_20, (MR_Integer) 1)));
#line 489 "assertion.m"
                    hlds__assertion__succeeded = (hlds__assertion__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 487 "assertion.m"
                    if (hlds__assertion__succeeded)
#line 487 "assertion.m"
                      {
#line 5238 "hlds.assertion.c"
                        hlds__assertion__TypeInfo_22_22 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 490 "assertion.m"
                        {
#line 490 "assertion.m"
                          mercury__map__init_1_p_0(hlds__assertion__TypeInfo_22_22, hlds__assertion__TypeInfo_22_22, &hlds__assertion__Subst_10);
                        }
#line 475 "assertion.m"
                        hlds__assertion__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__A_7, (MR_Integer) 0)));
#line 475 "assertion.m"
                        hlds__assertion__GI_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__A_7, (MR_Integer) 1)));
#line 475 "assertion.m"
                        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_33_33)) == (MR_mktag((MR_Integer) 0)));
#line 475 "assertion.m"
                        if (hlds__assertion__succeeded)
#line 475 "assertion.m"
                          {
#line 475 "assertion.m"
                            hlds__assertion__V_34_34 = (MR_Word) MR_body(((MR_Word) hlds__assertion__V_33_33), (MR_Integer) 0);
#line 475 "assertion.m"
                            hlds__assertion__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_34_34, (MR_Integer) 0)));
#line 475 "assertion.m"
                            hlds__assertion__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_34_34, (MR_Integer) 1)));
#line 475 "assertion.m"
                            hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_35_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_35_35, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 475 "assertion.m"
                            if (hlds__assertion__succeeded)
#line 475 "assertion.m"
                              {
#line 475 "assertion.m"
                                hlds__assertion__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_35_35, (MR_Integer) 1)));
#line 475 "assertion.m"
                                hlds__assertion__GoalList_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_35_35, (MR_Integer) 2)));
#line 475 "assertion.m"
                                hlds__assertion__succeeded = (hlds__assertion__V_36_36 == (MR_Integer) 0);
#line 487 "assertion.m"
                                if (hlds__assertion__succeeded)
#line 487 "assertion.m"
                                  {
#line 5277 "hlds.assertion.c"
                                    hlds__assertion__TypeCtorInfo_24_43 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 476 "assertion.m"
                                    {
#line 476 "assertion.m"
                                      hlds__assertion__V_37_37 = mercury__list__reverse_1_f_0(hlds__assertion__TypeCtorInfo_24_43, hlds__assertion__GoalList_26);
                                    }
#line 476 "assertion.m"
                                    hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_37_37)) == (MR_mktag((MR_Integer) 1)));
#line 476 "assertion.m"
                                    if (hlds__assertion__succeeded)
#line 476 "assertion.m"
                                      {
#line 476 "assertion.m"
                                        hlds__assertion__NotQ_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_37_37, (MR_Integer) 0)));
#line 476 "assertion.m"
                                        hlds__assertion__Ps_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_37_37, (MR_Integer) 1)));
#line 477 "assertion.m"
                                        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Ps_30)) == (MR_mktag((MR_Integer) 1)));
#line 477 "assertion.m"
                                        if (hlds__assertion__succeeded)
#line 477 "assertion.m"
                                          {
#line 477 "assertion.m"
                                            hlds__assertion__P0_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Ps_30, (MR_Integer) 0)));
#line 477 "assertion.m"
                                            hlds__assertion__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Ps_30, (MR_Integer) 1)));
#line 477 "assertion.m"
                                            hlds__assertion__succeeded = (hlds__assertion__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 477 "assertion.m"
                                          }
#line 479 "assertion.m"
                                        if (hlds__assertion__succeeded)
#line 478 "assertion.m"
                                          *hlds__assertion__P_5 = hlds__assertion__P0_31;
#line 479 "assertion.m"
                                        else
#line 480 "assertion.m"
                                          {
#line 480 "assertion.m"
                                            MR_Word hlds__assertion__V_39_39;
#line 480 "assertion.m"
                                            MR_Word hlds__assertion__V_41_41;

#line 480 "assertion.m"
                                            {
#line 480 "assertion.m"
                                              hlds__assertion__V_41_41 = mercury__list__reverse_1_f_0(hlds__assertion__TypeCtorInfo_24_43, hlds__assertion__Ps_30);
                                            }
#line 480 "assertion.m"
                                            {
#line 480 "assertion.m"
                                              hlds__assertion__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 480 "assertion.m"
                                              MR_hl_field(MR_mktag(3), hlds__assertion__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 480 "assertion.m"
                                              MR_hl_field(MR_mktag(3), hlds__assertion__V_39_39, 1) = ((MR_Box) ((MR_Integer) 0));
#line 480 "assertion.m"
                                              MR_hl_field(MR_mktag(3), hlds__assertion__V_39_39, 2) = ((MR_Box) (hlds__assertion__V_41_41));
#line 480 "assertion.m"
                                            }
#line 480 "assertion.m"
                                            {
#line 480 "assertion.m"
                                              MR_Word base;
#line 480 "assertion.m"
                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 480 "assertion.m"
                                              *hlds__assertion__P_5 = base;
#line 480 "assertion.m"
                                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__assertion__V_39_39));
#line 480 "assertion.m"
                                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__GI_28));
#line 480 "assertion.m"
                                            }
#line 480 "assertion.m"
                                          }
#line 482 "assertion.m"
                                        hlds__assertion__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__NotQ_29, (MR_Integer) 0)));
#line 482 "assertion.m"
                                        hlds__assertion__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__NotQ_29, (MR_Integer) 1)));
#line 482 "assertion.m"
                                        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_42_42)) == (MR_mktag((MR_Integer) 0)));
#line 482 "assertion.m"
                                        if (hlds__assertion__succeeded)
#line 482 "assertion.m"
                                          {
#line 482 "assertion.m"
                                            *hlds__assertion__Q_6 = (MR_Word) MR_body(((MR_Word) hlds__assertion__V_42_42), (MR_Integer) 0);
#line 475 "assertion.m"
                                            hlds__assertion__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__B_8, (MR_Integer) 0)));
#line 475 "assertion.m"
                                            hlds__assertion__GI_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__B_8, (MR_Integer) 1)));
#line 475 "assertion.m"
                                            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_54_54)) == (MR_mktag((MR_Integer) 0)));
#line 475 "assertion.m"
                                            if (hlds__assertion__succeeded)
#line 475 "assertion.m"
                                              {
#line 475 "assertion.m"
                                                hlds__assertion__V_55_55 = (MR_Word) MR_body(((MR_Word) hlds__assertion__V_54_54), (MR_Integer) 0);
#line 475 "assertion.m"
                                                hlds__assertion__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_55_55, (MR_Integer) 0)));
#line 475 "assertion.m"
                                                hlds__assertion__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_55_55, (MR_Integer) 1)));
#line 475 "assertion.m"
                                                hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_56_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_56_56, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 475 "assertion.m"
                                                if (hlds__assertion__succeeded)
#line 475 "assertion.m"
                                                  {
#line 475 "assertion.m"
                                                    hlds__assertion__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_56_56, (MR_Integer) 1)));
#line 475 "assertion.m"
                                                    hlds__assertion__GoalList_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_56_56, (MR_Integer) 2)));
#line 475 "assertion.m"
                                                    hlds__assertion__succeeded = (hlds__assertion__V_57_57 == (MR_Integer) 0);
#line 487 "assertion.m"
                                                    if (hlds__assertion__succeeded)
#line 487 "assertion.m"
                                                      {
#line 5398 "hlds.assertion.c"
                                                        hlds__assertion__TypeCtorInfo_24_64 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 476 "assertion.m"
                                                        {
#line 476 "assertion.m"
                                                          hlds__assertion__V_58_58 = mercury__list__reverse_1_f_0(hlds__assertion__TypeCtorInfo_24_64, hlds__assertion__GoalList_47);
                                                        }
#line 476 "assertion.m"
                                                        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_58_58)) == (MR_mktag((MR_Integer) 1)));
#line 476 "assertion.m"
                                                        if (hlds__assertion__succeeded)
#line 476 "assertion.m"
                                                          {
#line 476 "assertion.m"
                                                            hlds__assertion__NotQ_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_58_58, (MR_Integer) 0)));
#line 476 "assertion.m"
                                                            hlds__assertion__Ps_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_58_58, (MR_Integer) 1)));
#line 477 "assertion.m"
                                                            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Ps_51)) == (MR_mktag((MR_Integer) 1)));
#line 477 "assertion.m"
                                                            if (hlds__assertion__succeeded)
#line 477 "assertion.m"
                                                              {
#line 477 "assertion.m"
                                                                hlds__assertion__P0_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Ps_51, (MR_Integer) 0)));
#line 477 "assertion.m"
                                                                hlds__assertion__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Ps_51, (MR_Integer) 1)));
#line 477 "assertion.m"
                                                                hlds__assertion__succeeded = (hlds__assertion__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 477 "assertion.m"
                                                              }
#line 479 "assertion.m"
                                                            if (hlds__assertion__succeeded)
#line 478 "assertion.m"
                                                              hlds__assertion__QB_13 = hlds__assertion__P0_52;
#line 479 "assertion.m"
                                                            else
#line 480 "assertion.m"
                                                              {
#line 480 "assertion.m"
                                                                MR_Word hlds__assertion__V_60_60;
#line 480 "assertion.m"
                                                                MR_Word hlds__assertion__V_62_62;

#line 480 "assertion.m"
                                                                {
#line 480 "assertion.m"
                                                                  hlds__assertion__V_62_62 = mercury__list__reverse_1_f_0(hlds__assertion__TypeCtorInfo_24_64, hlds__assertion__Ps_51);
                                                                }
#line 480 "assertion.m"
                                                                {
#line 480 "assertion.m"
                                                                  hlds__assertion__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 480 "assertion.m"
                                                                  MR_hl_field(MR_mktag(3), hlds__assertion__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 480 "assertion.m"
                                                                  MR_hl_field(MR_mktag(3), hlds__assertion__V_60_60, 1) = ((MR_Box) ((MR_Integer) 0));
#line 480 "assertion.m"
                                                                  MR_hl_field(MR_mktag(3), hlds__assertion__V_60_60, 2) = ((MR_Box) (hlds__assertion__V_62_62));
#line 480 "assertion.m"
                                                                }
#line 480 "assertion.m"
                                                                {
#line 480 "assertion.m"
                                                                  hlds__assertion__QB_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 480 "assertion.m"
                                                                  MR_hl_field(MR_mktag(0), hlds__assertion__QB_13, 0) = ((MR_Box) (hlds__assertion__V_60_60));
#line 480 "assertion.m"
                                                                  MR_hl_field(MR_mktag(0), hlds__assertion__QB_13, 1) = ((MR_Box) (hlds__assertion__GI_49));
#line 480 "assertion.m"
                                                                }
#line 480 "assertion.m"
                                                              }
#line 482 "assertion.m"
                                                            hlds__assertion__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__NotQ_50, (MR_Integer) 0)));
#line 482 "assertion.m"
                                                            hlds__assertion__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__NotQ_50, (MR_Integer) 1)));
#line 482 "assertion.m"
                                                            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_63_63)) == (MR_mktag((MR_Integer) 0)));
#line 482 "assertion.m"
                                                            if (hlds__assertion__succeeded)
#line 482 "assertion.m"
                                                              {
#line 482 "assertion.m"
                                                                hlds__assertion__PB_14 = (MR_Word) MR_body(((MR_Word) hlds__assertion__V_63_63), (MR_Integer) 0);
#line 509 "assertion.m"
                                                                hlds__assertion__GoalExprA_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), *hlds__assertion__P_5, (MR_Integer) 0)));
#line 509 "assertion.m"
                                                                hlds__assertion___GoalInfoA_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), *hlds__assertion__P_5, (MR_Integer) 1)));
#line 510 "assertion.m"
                                                                hlds__assertion__GoalExprB_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__PB_14, (MR_Integer) 0)));
#line 510 "assertion.m"
                                                                hlds__assertion___GoalInfoB_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__PB_14, (MR_Integer) 1)));
#line 511 "assertion.m"
                                                                {
#line 511 "assertion.m"
                                                                  hlds__assertion__succeeded = hlds__assertion__equal_goal_exprs_4_p_0(hlds__assertion__GoalExprA_70, hlds__assertion__GoalExprB_72, hlds__assertion__Subst_10, &hlds__assertion__V_15_15);
                                                                }
#line 487 "assertion.m"
                                                                if (hlds__assertion__succeeded)
#line 487 "assertion.m"
                                                                  {
#line 509 "assertion.m"
                                                                    hlds__assertion__GoalExprA_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), *hlds__assertion__Q_6, (MR_Integer) 0)));
#line 509 "assertion.m"
                                                                    hlds__assertion___GoalInfoA_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), *hlds__assertion__Q_6, (MR_Integer) 1)));
#line 510 "assertion.m"
                                                                    hlds__assertion__GoalExprB_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__QB_13, (MR_Integer) 0)));
#line 510 "assertion.m"
                                                                    hlds__assertion___GoalInfoB_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__QB_13, (MR_Integer) 1)));
#line 511 "assertion.m"
                                                                    {
#line 511 "assertion.m"
                                                                      hlds__assertion__succeeded = hlds__assertion__equal_goal_exprs_4_p_0(hlds__assertion__GoalExprA_80, hlds__assertion__GoalExprB_82, hlds__assertion__Subst_10, &hlds__assertion__V_16_16);
                                                                    }
#line 487 "assertion.m"
                                                                  }
#line 482 "assertion.m"
                                                              }
#line 476 "assertion.m"
                                                          }
#line 487 "assertion.m"
                                                      }
#line 475 "assertion.m"
                                                  }
#line 475 "assertion.m"
                                              }
#line 482 "assertion.m"
                                          }
#line 476 "assertion.m"
                                      }
#line 487 "assertion.m"
                                  }
#line 475 "assertion.m"
                              }
#line 475 "assertion.m"
                          }
#line 487 "assertion.m"
                      }
#line 489 "assertion.m"
                  }
#line 489 "assertion.m"
              }
#line 487 "assertion.m"
          }
#line 489 "assertion.m"
      }
#line 487 "assertion.m"
    return hlds__assertion__succeeded;
#line 487 "assertion.m"
  }
#line 484 "assertion.m"
}

#line 413 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__predicate_call_2_p_0_5(
#line 413 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 413 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1)
#line 413 "assertion.m"
{
#line 413 "assertion.m"
  {
#line 413 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 413 "assertion.m"
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

#line 413 "assertion.m"
    {
#line 413 "assertion.m"
      return hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__predicate_call__414__1_1_p_0(((MR_Word) hlds__assertion__wrapper_arg_1));
    }
#line 413 "assertion.m"
    return hlds__assertion__succeeded;
#line 413 "assertion.m"
  }
#line 413 "assertion.m"
}

#line 410 "assertion.m"
static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_1(
#line 410 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 410 "assertion.m"
{
#line 410 "assertion.m"
  {
#line 410 "assertion.m"
    struct hlds__assertion__predicate_call_2_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__predicate_call_2_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 410 "assertion.m"
    MR_builtin_longjmp((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__commit_0, 1);
#line 410 "assertion.m"
  }
#line 410 "assertion.m"
}

#line 410 "assertion.m"
static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_3(
#line 410 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 410 "assertion.m"
{
#line 410 "assertion.m"
  {
#line 410 "assertion.m"
    struct hlds__assertion__predicate_call_2_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__predicate_call_2_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 410 "assertion.m"
    (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Call_7 = ((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__conv0_Call_7);
#line 410 "assertion.m"
    {
#line 410 "assertion.m"
      hlds__assertion__predicate_call_2_p_0_2(hlds__assertion__env_ptr);
#line 410 "assertion.m"
      return;
    }
#line 410 "assertion.m"
  }
#line 410 "assertion.m"
}

#line 410 "assertion.m"
static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_4(
#line 410 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 410 "assertion.m"
{
#line 410 "assertion.m"
  {
#line 410 "assertion.m"
    struct hlds__assertion__predicate_call_2_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__predicate_call_2_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 413 "assertion.m"
    (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__P_15 = (MR_Word) &hlds__assertion_scalar_common_2[6];
#line 419 "assertion.m"
    (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_37_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 419 "assertion.m"
    {
#line 419 "assertion.m"
      mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__TypeCtorInfo_40_40, (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__P_15, (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Unifications_14, &(hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_42_42);
    }
#line 5646 "hlds.assertion.c"
    (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__TypeInfo_45_45 = (MR_Word) &hlds__assertion_scalar_common_1[4];
#line 419 "assertion.m"
    {
#line 419 "assertion.m"
      (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__TypeInfo_45_45, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_37_37)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_42_42)));
    }
#line 419 "assertion.m"
    if ((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded)
#line 419 "assertion.m"
      {
#line 419 "assertion.m"
        hlds__assertion__predicate_call_2_p_0_1(hlds__assertion__env_ptr);
#line 419 "assertion.m"
        return;
      }
#line 410 "assertion.m"
  }
#line 410 "assertion.m"
}

#line 410 "assertion.m"
static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_2(
#line 410 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 410 "assertion.m"
{
#line 410 "assertion.m"
  {
#line 410 "assertion.m"
    struct hlds__assertion__predicate_call_2_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__predicate_call_2_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 410 "assertion.m"
    {
#line 411 "assertion.m"
      MR_Word hlds__assertion__V_13_13;
#line 411 "assertion.m"
      MR_Integer hlds__assertion__V_8_8;
#line 411 "assertion.m"
      MR_Word hlds__assertion__V_9_9;
#line 411 "assertion.m"
      MR_Word hlds__assertion__V_10_10;
#line 411 "assertion.m"
      MR_Word hlds__assertion__V_11_11;
#line 411 "assertion.m"
      MR_Word hlds__assertion__V_12_12;

#line 411 "assertion.m"
      (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Call_7, (MR_Integer) 0)));
#line 411 "assertion.m"
      hlds__assertion__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Call_7, (MR_Integer) 1)));
#line 411 "assertion.m"
      (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_34_34)) == (MR_mktag((MR_Integer) 2)));
#line 411 "assertion.m"
      if ((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded)
#line 411 "assertion.m"
        {
#line 411 "assertion.m"
          {
#line 411 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_34_34, (MR_Integer) 0)));
#line 411 "assertion.m"
            hlds__assertion__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_34_34, (MR_Integer) 1)));
#line 411 "assertion.m"
            hlds__assertion__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_34_34, (MR_Integer) 2)));
#line 411 "assertion.m"
            hlds__assertion__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_34_34, (MR_Integer) 3)));
#line 411 "assertion.m"
            hlds__assertion__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_34_34, (MR_Integer) 4)));
#line 411 "assertion.m"
            hlds__assertion__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_34_34, (MR_Integer) 5)));
#line 411 "assertion.m"
          }
#line 410 "assertion.m"
          {
#line 411 "assertion.m"
            {
#line 411 "assertion.m"
              (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__PredId_4, (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_41_41);
            }
#line 410 "assertion.m"
            if ((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded)
#line 412 "assertion.m"
              {
#line 412 "assertion.m"
                mercury__list__delete_3_p_1((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__TypeCtorInfo_40_40, (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Goals_5, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Call_7)), &(hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Unifications_14, hlds__assertion__predicate_call_2_p_0_4, hlds__assertion__env_ptr);
              }
#line 410 "assertion.m"
          }
#line 411 "assertion.m"
        }
#line 410 "assertion.m"
    }
#line 410 "assertion.m"
  }
#line 410 "assertion.m"
}

#line 410 "assertion.m"
static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_6(
#line 410 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 410 "assertion.m"
{
#line 410 "assertion.m"
  {
#line 410 "assertion.m"
    struct hlds__assertion__predicate_call_2_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__predicate_call_2_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 410 "assertion.m"
    if (MR_builtin_setjmp((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__commit_0) == 0)
#line 410 "assertion.m"
      {
#line 5761 "hlds.assertion.c"
        (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 410 "assertion.m"
        {
#line 410 "assertion.m"
          mercury__list__member_2_p_1((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__TypeCtorInfo_40_40, &(hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__conv0_Call_7, (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Goals_5, hlds__assertion__predicate_call_2_p_0_3, hlds__assertion__env_ptr);
        }
#line 410 "assertion.m"
        (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded = MR_FALSE;
#line 410 "assertion.m"
      }
#line 410 "assertion.m"
    else
#line 410 "assertion.m"
      (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded = MR_TRUE;
#line 410 "assertion.m"
  }
#line 410 "assertion.m"
}

#line 406 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__predicate_call_2_p_0(
#line 406 "assertion.m"
  MR_Word hlds__assertion__Goal_3,
#line 406 "assertion.m"
  MR_Word hlds__assertion__PredId_4)
#line 406 "assertion.m"
{
#line 406 "assertion.m"
  {
#line 406 "assertion.m"
    struct hlds__assertion__predicate_call_2_p_0_env_0_s hlds__assertion__env;

#line 406 "assertion.m"
    (hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__PredId_4 = hlds__assertion__PredId_4;
#line 420 "assertion.m"
    {
#line 409 "assertion.m"
      MR_Word hlds__assertion__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_3, (MR_Integer) 0)));
#line 409 "assertion.m"
      MR_Word hlds__assertion__V_33_33;
#line 409 "assertion.m"
      MR_Word hlds__assertion__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_3, (MR_Integer) 1)));

#line 409 "assertion.m"
      (hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_32_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_32_32, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 409 "assertion.m"
      if ((hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded)
#line 409 "assertion.m"
        {
#line 409 "assertion.m"
          hlds__assertion__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_32_32, (MR_Integer) 1)));
#line 409 "assertion.m"
          (hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__Goals_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_32_32, (MR_Integer) 2)));
#line 409 "assertion.m"
          (hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded = (hlds__assertion__V_33_33 == (MR_Integer) 0);
#line 409 "assertion.m"
        }
#line 420 "assertion.m"
      if ((hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded)
#line 410 "assertion.m"
        {
#line 410 "assertion.m"
          {
#line 410 "assertion.m"
            hlds__assertion__predicate_call_2_p_0_6(&hlds__assertion__env);
          }
#line 410 "assertion.m"
        }
#line 420 "assertion.m"
      else
#line 421 "assertion.m"
        {
#line 421 "assertion.m"
          MR_Word hlds__assertion__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_3, (MR_Integer) 0)));
#line 421 "assertion.m"
          MR_Word hlds__assertion__V_43_43;
#line 421 "assertion.m"
          MR_Word hlds__assertion__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_3, (MR_Integer) 1)));
#line 421 "assertion.m"
          MR_Integer hlds__assertion__V_26_26;
#line 421 "assertion.m"
          MR_Word hlds__assertion__V_27_27;
#line 421 "assertion.m"
          MR_Word hlds__assertion__V_28_28;
#line 421 "assertion.m"
          MR_Word hlds__assertion__V_29_29;
#line 421 "assertion.m"
          MR_Word hlds__assertion__V_30_30;

#line 421 "assertion.m"
          (hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_38_38)) == (MR_mktag((MR_Integer) 2)));
#line 421 "assertion.m"
          if ((hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded)
#line 421 "assertion.m"
            {
#line 421 "assertion.m"
              hlds__assertion__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_38_38, (MR_Integer) 0)));
#line 421 "assertion.m"
              hlds__assertion__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__V_38_38, (MR_Integer) 1)));
#line 421 "assertion.m"
              hlds__assertion__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_38_38, (MR_Integer) 2)));
#line 421 "assertion.m"
              hlds__assertion__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_38_38, (MR_Integer) 3)));
#line 421 "assertion.m"
              hlds__assertion__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_38_38, (MR_Integer) 4)));
#line 421 "assertion.m"
              hlds__assertion__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_38_38, (MR_Integer) 5)));
#line 421 "assertion.m"
              {
#line 421 "assertion.m"
                return (hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__PredId_4, hlds__assertion__V_43_43);
              }
#line 421 "assertion.m"
            }
#line 421 "assertion.m"
        }
#line 420 "assertion.m"
      return (hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded;
#line 420 "assertion.m"
    }
#line 406 "assertion.m"
  }
#line 406 "assertion.m"
}

#line 350 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__process_two_linked_calls_6_p_0(
#line 350 "assertion.m"
  MR_Word hlds__assertion__Goals_7,
#line 350 "assertion.m"
  MR_Word hlds__assertion__UniversiallyQuantifiedVars_8,
#line 350 "assertion.m"
  MR_Word * hlds__assertion__PredId_9,
#line 350 "assertion.m"
  MR_Word * hlds__assertion__LinkingVar_10,
#line 350 "assertion.m"
  MR_Word * hlds__assertion__Vars_11,
#line 350 "assertion.m"
  MR_Word * hlds__assertion__VarsA_12)
#line 350 "assertion.m"
{
#line 355 "assertion.m"
  {
#line 355 "assertion.m"
    MR_bool hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Goals_7)) == (MR_mktag((MR_Integer) 1)));
#line 355 "assertion.m"
    MR_Word hlds__assertion__TypeCtorInfo_34_34;
#line 355 "assertion.m"
    MR_Word hlds__assertion__TypeInfo_35_35;
#line 355 "assertion.m"
    MR_Word hlds__assertion__VarsB_19;
#line 355 "assertion.m"
    MR_Word hlds__assertion__SetVarsA_24;
#line 355 "assertion.m"
    MR_Word hlds__assertion__SetVarsB_25;
#line 355 "assertion.m"
    MR_Word hlds__assertion__CommonVars_26;
#line 355 "assertion.m"
    MR_Word hlds__assertion__V_27_27;
#line 355 "assertion.m"
    MR_Word hlds__assertion__V_28_28;
#line 355 "assertion.m"
    MR_Word hlds__assertion__V_29_29;
#line 355 "assertion.m"
    MR_Word hlds__assertion__V_30_30;
#line 355 "assertion.m"
    MR_Word hlds__assertion__V_31_31;
#line 355 "assertion.m"
    MR_Word hlds__assertion__V_32_32;
#line 355 "assertion.m"
    MR_Word hlds__assertion__V_33_33;
#line 355 "assertion.m"
    MR_Word hlds__assertion__V_36_36;
#line 357 "assertion.m"
    MR_Word hlds__assertion__V_17_17;
#line 357 "assertion.m"
    MR_Integer hlds__assertion__V_13_13;
#line 357 "assertion.m"
    MR_Word hlds__assertion__V_14_14;
#line 357 "assertion.m"
    MR_Word hlds__assertion__V_15_15;
#line 357 "assertion.m"
    MR_Word hlds__assertion__V_16_16;
#line 358 "assertion.m"
    MR_Word hlds__assertion__V_23_23;
#line 358 "assertion.m"
    MR_Integer hlds__assertion__V_18_18;
#line 358 "assertion.m"
    MR_Word hlds__assertion__V_20_20;
#line 358 "assertion.m"
    MR_Word hlds__assertion__V_21_21;
#line 358 "assertion.m"
    MR_Word hlds__assertion__V_22_22;

#line 357 "assertion.m"
    if (hlds__assertion__succeeded)
#line 357 "assertion.m"
      {
#line 357 "assertion.m"
        hlds__assertion__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Goals_7, (MR_Integer) 0)));
#line 357 "assertion.m"
        hlds__assertion__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Goals_7, (MR_Integer) 1)));
#line 357 "assertion.m"
        hlds__assertion__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_27_27, (MR_Integer) 0)));
#line 357 "assertion.m"
        hlds__assertion__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_27_27, (MR_Integer) 1)));
#line 357 "assertion.m"
        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_28_28)) == (MR_mktag((MR_Integer) 2)));
#line 357 "assertion.m"
        if (hlds__assertion__succeeded)
#line 357 "assertion.m"
          {
#line 357 "assertion.m"
            *hlds__assertion__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_28_28, (MR_Integer) 0)));
#line 357 "assertion.m"
            hlds__assertion__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__V_28_28, (MR_Integer) 1)));
#line 357 "assertion.m"
            *hlds__assertion__VarsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_28_28, (MR_Integer) 2)));
#line 357 "assertion.m"
            hlds__assertion__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_28_28, (MR_Integer) 3)));
#line 357 "assertion.m"
            hlds__assertion__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_28_28, (MR_Integer) 4)));
#line 357 "assertion.m"
            hlds__assertion__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_28_28, (MR_Integer) 5)));
#line 359 "assertion.m"
            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 359 "assertion.m"
            if (hlds__assertion__succeeded)
#line 359 "assertion.m"
              {
#line 359 "assertion.m"
                hlds__assertion__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_29_29, (MR_Integer) 0)));
#line 359 "assertion.m"
                hlds__assertion__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_29_29, (MR_Integer) 1)));
#line 358 "assertion.m"
                hlds__assertion__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_30_30, (MR_Integer) 0)));
#line 358 "assertion.m"
                hlds__assertion__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_30_30, (MR_Integer) 1)));
#line 358 "assertion.m"
                hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_31_31)) == (MR_mktag((MR_Integer) 2)));
#line 358 "assertion.m"
                if (hlds__assertion__succeeded)
#line 358 "assertion.m"
                  {
#line 358 "assertion.m"
                    hlds__assertion__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_31_31, (MR_Integer) 0)));
#line 358 "assertion.m"
                    hlds__assertion__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__V_31_31, (MR_Integer) 1)));
#line 358 "assertion.m"
                    hlds__assertion__VarsB_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_31_31, (MR_Integer) 2)));
#line 358 "assertion.m"
                    hlds__assertion__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_31_31, (MR_Integer) 3)));
#line 358 "assertion.m"
                    hlds__assertion__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_31_31, (MR_Integer) 4)));
#line 358 "assertion.m"
                    hlds__assertion__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_31_31, (MR_Integer) 5)));
#line 358 "assertion.m"
                    {
#line 358 "assertion.m"
                      hlds__assertion__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(*hlds__assertion__PredId_9, hlds__assertion__V_36_36);
                    }
#line 355 "assertion.m"
                    if (hlds__assertion__succeeded)
#line 355 "assertion.m"
                      {
#line 359 "assertion.m"
                        hlds__assertion__succeeded = (hlds__assertion__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 355 "assertion.m"
                        if (hlds__assertion__succeeded)
#line 355 "assertion.m"
                          {
#line 6035 "hlds.assertion.c"
                            hlds__assertion__TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 363 "assertion.m"
                            {
#line 363 "assertion.m"
                              hlds__assertion__SetVarsA_24 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__assertion__TypeCtorInfo_34_34, *hlds__assertion__VarsA_12);
                            }
#line 364 "assertion.m"
                            {
#line 364 "assertion.m"
                              hlds__assertion__SetVarsB_25 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__assertion__TypeCtorInfo_34_34, hlds__assertion__VarsB_19);
                            }
#line 365 "assertion.m"
                            {
#line 365 "assertion.m"
                              hlds__assertion__CommonVars_26 = parse_tree__set_of_var__intersect_2_f_0(hlds__assertion__TypeCtorInfo_34_34, hlds__assertion__SetVarsA_24, hlds__assertion__SetVarsB_25);
                            }
#line 367 "assertion.m"
                            {
#line 367 "assertion.m"
                              hlds__assertion__V_33_33 = parse_tree__set_of_var__difference_2_f_0(hlds__assertion__TypeCtorInfo_34_34, hlds__assertion__CommonVars_26, hlds__assertion__UniversiallyQuantifiedVars_8);
                            }
#line 366 "assertion.m"
                            {
#line 366 "assertion.m"
                              hlds__assertion__succeeded = parse_tree__set_of_var__is_singleton_2_p_0(hlds__assertion__TypeCtorInfo_34_34, hlds__assertion__V_33_33, hlds__assertion__LinkingVar_10);
                            }
#line 355 "assertion.m"
                            if (hlds__assertion__succeeded)
#line 355 "assertion.m"
                              {
#line 6066 "hlds.assertion.c"
                                hlds__assertion__TypeInfo_35_35 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 371 "assertion.m"
                                {
#line 371 "assertion.m"
                                  mercury__assoc_list__from_corresponding_lists_3_p_0(hlds__assertion__TypeInfo_35_35, hlds__assertion__TypeInfo_35_35, *hlds__assertion__VarsA_12, hlds__assertion__VarsB_19, hlds__assertion__Vars_11);
                                }
#line 371 "assertion.m"
                                hlds__assertion__succeeded = MR_TRUE;
#line 355 "assertion.m"
                              }
#line 355 "assertion.m"
                          }
#line 355 "assertion.m"
                      }
#line 358 "assertion.m"
                  }
#line 359 "assertion.m"
              }
#line 357 "assertion.m"
          }
#line 357 "assertion.m"
      }
#line 355 "assertion.m"
    return hlds__assertion__succeeded;
#line 355 "assertion.m"
  }
#line 350 "assertion.m"
}

#line 336 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__update_5_p_0_7(
#line 336 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 336 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1)
#line 336 "assertion.m"
{
#line 336 "assertion.m"
  {
#line 336 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 336 "assertion.m"
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

#line 336 "assertion.m"
    {
#line 336 "assertion.m"
      return hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__update__336__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 3))), ((MR_Word) hlds__assertion__wrapper_arg_1));
    }
#line 336 "assertion.m"
    return hlds__assertion__succeeded;
#line 336 "assertion.m"
  }
#line 336 "assertion.m"
}

#line 334 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__update_5_p_0_6(
#line 334 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 334 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1)
#line 334 "assertion.m"
{
#line 334 "assertion.m"
  {
#line 334 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 334 "assertion.m"
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

#line 334 "assertion.m"
    {
#line 334 "assertion.m"
      return hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__update__334__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 3))), ((MR_Word) hlds__assertion__wrapper_arg_1));
    }
#line 334 "assertion.m"
    return hlds__assertion__succeeded;
#line 334 "assertion.m"
  }
#line 334 "assertion.m"
}

#line 323 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__update_5_p_0_4(
#line 323 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 323 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1)
#line 323 "assertion.m"
{
#line 323 "assertion.m"
  {
#line 323 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 323 "assertion.m"
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

#line 323 "assertion.m"
    {
#line 323 "assertion.m"
      return hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__update__323__1_1_p_0(((MR_Word) hlds__assertion__wrapper_arg_1));
    }
#line 323 "assertion.m"
    return hlds__assertion__succeeded;
#line 323 "assertion.m"
  }
#line 323 "assertion.m"
}

#line 315 "assertion.m"
static void MR_CALL 
hlds__assertion__update_5_p_0_5(
#line 315 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 315 "assertion.m"
{
#line 315 "assertion.m"
  {
#line 315 "assertion.m"
    struct hlds__assertion__update_5_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__update_5_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 315 "assertion.m"
    {
#line 335 "assertion.m"
      MR_Word hlds__assertion___S0_29;
#line 337 "assertion.m"
      MR_Word hlds__assertion___SA_30;

#line 331 "assertion.m"
      (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 331 "assertion.m"
      if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 331 "assertion.m"
        {
#line 331 "assertion.m"
          {
#line 331 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_34_34, (MR_Integer) 0)));
#line 331 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_34_34, (MR_Integer) 1)));
#line 331 "assertion.m"
          }
#line 315 "assertion.m"
          {
#line 331 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_35_35, (MR_Integer) 0)));
#line 331 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_35_35, (MR_Integer) 1)));
#line 331 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__S0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_36_36, (MR_Integer) 0)));
#line 331 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_36_36, (MR_Integer) 1)));
#line 6223 "hlds.assertion.c"
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_76_76 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 331 "assertion.m"
            {
#line 331 "assertion.m"
              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_76_76, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__SA_15)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_65_65)));
            }
#line 315 "assertion.m"
            if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 315 "assertion.m"
              {
#line 331 "assertion.m"
                (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_37_37, (MR_Integer) 0)));
#line 331 "assertion.m"
                (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_37_37, (MR_Integer) 1)));
#line 6238 "hlds.assertion.c"
                (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_77_77 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 331 "assertion.m"
                {
#line 331 "assertion.m"
                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_77_77, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__SB_18)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_66_66)));
                }
#line 315 "assertion.m"
                if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 315 "assertion.m"
                  {
#line 6249 "hlds.assertion.c"
                    (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_78_78 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 331 "assertion.m"
                    {
#line 331 "assertion.m"
                      (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_78_78, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__S0_25)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_67_67)));
                    }
#line 315 "assertion.m"
                    if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 315 "assertion.m"
                      {
#line 331 "assertion.m"
                        (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 331 "assertion.m"
                        if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 331 "assertion.m"
                          {
#line 331 "assertion.m"
                            {
#line 331 "assertion.m"
                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_38_38, (MR_Integer) 0)));
#line 331 "assertion.m"
                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_38_38, (MR_Integer) 1)));
#line 331 "assertion.m"
                            }
#line 315 "assertion.m"
                            {
#line 6276 "hlds.assertion.c"
                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_79_79 = (MR_Word) &hlds__assertion_scalar_common_1[2];
#line 331 "assertion.m"
                              {
#line 331 "assertion.m"
                                (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_79_79, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_42_42)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_68_68)));
                              }
#line 315 "assertion.m"
                              if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 315 "assertion.m"
                                {
#line 331 "assertion.m"
                                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_39_39, (MR_Integer) 0)));
#line 331 "assertion.m"
                                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_39_39, (MR_Integer) 1)));
#line 331 "assertion.m"
                                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_40_40, (MR_Integer) 0)));
#line 331 "assertion.m"
                                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__S_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_40_40, (MR_Integer) 1)));
#line 6295 "hlds.assertion.c"
                                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_80_80 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 331 "assertion.m"
                                  {
#line 331 "assertion.m"
                                    (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_80_80, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__SA_15)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_69_69)));
                                  }
#line 315 "assertion.m"
                                  if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 315 "assertion.m"
                                    {
#line 331 "assertion.m"
                                      (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_41_41, (MR_Integer) 0)));
#line 331 "assertion.m"
                                      (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_41_41, (MR_Integer) 1)));
#line 6310 "hlds.assertion.c"
                                      (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_81_81 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 331 "assertion.m"
                                      {
#line 331 "assertion.m"
                                        (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_81_81, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__S_26)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_70_70)));
                                      }
#line 315 "assertion.m"
                                      if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 315 "assertion.m"
                                        {
#line 6321 "hlds.assertion.c"
                                          (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_82_82 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 331 "assertion.m"
                                          {
#line 331 "assertion.m"
                                            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_82_82, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__SB_18)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_71_71)));
                                          }
#line 315 "assertion.m"
                                          if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 315 "assertion.m"
                                            {
#line 6332 "hlds.assertion.c"
                                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_63_63 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 333 "assertion.m"
                                              {
#line 333 "assertion.m"
                                                mercury__assoc_list__from_corresponding_lists_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_63_63, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_63_63, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Vs_17, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__CallVars_9, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__AssocList_27);
                                              }
#line 335 "assertion.m"
                                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_47_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 334 "assertion.m"
                                              {
#line 334 "assertion.m"
                                                MR_Word base;
#line 334 "assertion.m"
                                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 334 "assertion.m"
                                                (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_43_43 = base;
#line 334 "assertion.m"
                                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&hlds__assertion_scalar_common_5[0]));
#line 334 "assertion.m"
                                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__update_5_p_0_6));
#line 334 "assertion.m"
                                                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 334 "assertion.m"
                                                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__S0_25));
#line 334 "assertion.m"
                                              }
#line 334 "assertion.m"
                                              {
#line 334 "assertion.m"
                                                mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_61_61, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_43_43, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__AssocList_27, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_44_44);
                                              }
#line 335 "assertion.m"
                                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_44_44)) == (MR_mktag((MR_Integer) 1)));
#line 335 "assertion.m"
                                              if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 335 "assertion.m"
                                                {
#line 335 "assertion.m"
                                                  {
#line 335 "assertion.m"
                                                    (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_44_44, (MR_Integer) 0)));
#line 335 "assertion.m"
                                                    (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_44_44, (MR_Integer) 1)));
#line 335 "assertion.m"
                                                  }
#line 315 "assertion.m"
                                                  {
#line 6380 "hlds.assertion.c"
                                                    (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_84_84 = (MR_Word) &hlds__assertion_scalar_common_1[3];
#line 335 "assertion.m"
                                                    {
#line 335 "assertion.m"
                                                      (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_84_84, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_47_47)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_72_72)));
                                                    }
#line 315 "assertion.m"
                                                    if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 315 "assertion.m"
                                                      {
#line 335 "assertion.m"
                                                        hlds__assertion___S0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_46_46, (MR_Integer) 0)));
#line 335 "assertion.m"
                                                        (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__StateA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_46_46, (MR_Integer) 1)));
#line 337 "assertion.m"
                                                        (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_52_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 336 "assertion.m"
                                                        {
#line 336 "assertion.m"
                                                          MR_Word base;
#line 336 "assertion.m"
                                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 336 "assertion.m"
                                                          (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_48_48 = base;
#line 336 "assertion.m"
                                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&hlds__assertion_scalar_common_5[0]));
#line 336 "assertion.m"
                                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__update_5_p_0_7));
#line 336 "assertion.m"
                                                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 336 "assertion.m"
                                                          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__SA_15));
#line 336 "assertion.m"
                                                        }
#line 336 "assertion.m"
                                                        {
#line 336 "assertion.m"
                                                          mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_61_61, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_48_48, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__AssocList_27, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_49_49);
                                                        }
#line 337 "assertion.m"
                                                        (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_49_49)) == (MR_mktag((MR_Integer) 1)));
#line 337 "assertion.m"
                                                        if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 337 "assertion.m"
                                                          {
#line 337 "assertion.m"
                                                            {
#line 337 "assertion.m"
                                                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_49_49, (MR_Integer) 0)));
#line 337 "assertion.m"
                                                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_49_49, (MR_Integer) 1)));
#line 337 "assertion.m"
                                                            }
#line 315 "assertion.m"
                                                            {
#line 6436 "hlds.assertion.c"
                                                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_86_86 = (MR_Word) &hlds__assertion_scalar_common_1[3];
#line 337 "assertion.m"
                                                              {
#line 337 "assertion.m"
                                                                (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_86_86, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_52_52)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_73_73)));
                                                              }
#line 315 "assertion.m"
                                                              if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 315 "assertion.m"
                                                                {
#line 337 "assertion.m"
                                                                  hlds__assertion___SA_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_51_51, (MR_Integer) 0)));
#line 337 "assertion.m"
                                                                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__StateB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_51_51, (MR_Integer) 1)));
#line 315 "assertion.m"
                                                                  {
#line 315 "assertion.m"
                                                                    MR_Word base;
#line 315 "assertion.m"
                                                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 315 "assertion.m"
                                                                    *((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__HeadVar__5_5) = base;
#line 315 "assertion.m"
                                                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__StateA_10));
#line 315 "assertion.m"
                                                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__StateB_11));
#line 315 "assertion.m"
                                                                  }
#line 315 "assertion.m"
                                                                  {
#line 315 "assertion.m"
                                                                    ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__cont)((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__cont_env_ptr);
#line 315 "assertion.m"
                                                                    return;
                                                                  }
#line 315 "assertion.m"
                                                                }
#line 315 "assertion.m"
                                                            }
#line 337 "assertion.m"
                                                          }
#line 315 "assertion.m"
                                                      }
#line 315 "assertion.m"
                                                  }
#line 335 "assertion.m"
                                                }
#line 315 "assertion.m"
                                            }
#line 315 "assertion.m"
                                        }
#line 315 "assertion.m"
                                    }
#line 315 "assertion.m"
                                }
#line 315 "assertion.m"
                            }
#line 331 "assertion.m"
                          }
#line 315 "assertion.m"
                      }
#line 315 "assertion.m"
                  }
#line 315 "assertion.m"
              }
#line 315 "assertion.m"
          }
#line 331 "assertion.m"
        }
#line 315 "assertion.m"
    }
#line 315 "assertion.m"
  }
#line 315 "assertion.m"
}

#line 315 "assertion.m"
static void MR_CALL 
hlds__assertion__update_5_p_0_1(
#line 315 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 315 "assertion.m"
{
#line 315 "assertion.m"
  {
#line 315 "assertion.m"
    struct hlds__assertion__update_5_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__update_5_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 315 "assertion.m"
    {
#line 319 "assertion.m"
      MR_Word hlds__assertion__V_20_20;

#line 317 "assertion.m"
      {
#line 317 "assertion.m"
        (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = hlds__assertion__process_two_linked_calls_6_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__LHSCalls_12, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__UniversiallyQuantifiedVars_8, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__PredId_14, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__SA_15, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__PairsL_16, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Vs_17);
      }
#line 315 "assertion.m"
      if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 315 "assertion.m"
        {
#line 319 "assertion.m"
          {
#line 319 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = hlds__assertion__process_two_linked_calls_6_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__RHSCalls_13, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__UniversiallyQuantifiedVars_8, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_64_64, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__SB_18, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__PairsR_19, &hlds__assertion__V_20_20);
          }
#line 315 "assertion.m"
          if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 315 "assertion.m"
            {
#line 319 "assertion.m"
              {
#line 319 "assertion.m"
                (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__PredId_14, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_64_64);
              }
#line 315 "assertion.m"
              if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 315 "assertion.m"
                {
#line 6557 "hlds.assertion.c"
                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_61_61 = (MR_Word) &hlds__assertion_scalar_common_2[0];
#line 322 "assertion.m"
                  {
#line 322 "assertion.m"
                    mercury__assoc_list__from_corresponding_lists_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_61_61, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_61_61, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__PairsL_16, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__PairsR_19, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Pairs0_21);
                  }
#line 323 "assertion.m"
                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_31_31 = (MR_Word) &hlds__assertion_scalar_common_2[5];
#line 6566 "hlds.assertion.c"
                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_62_62 = (MR_Word) &hlds__assertion_scalar_common_2[1];
#line 323 "assertion.m"
                  {
#line 323 "assertion.m"
                    mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_62_62, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_31_31, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Pairs0_21, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Pairs_24);
                  }
#line 324 "assertion.m"
                  {
#line 324 "assertion.m"
                    (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_33_33 = mercury__list__length_1_f_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_62_62, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Pairs_24);
                  }
#line 324 "assertion.m"
                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_33_33 == (MR_Integer) 2);
#line 315 "assertion.m"
                  if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
#line 315 "assertion.m"
                    {
#line 331 "assertion.m"
                      (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 331 "assertion.m"
                      {
#line 331 "assertion.m"
                        mercury__list__perm_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_62_62, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Pairs_24, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_34_34, hlds__assertion__update_5_p_0_5, hlds__assertion__env_ptr);
                      }
#line 315 "assertion.m"
                    }
#line 315 "assertion.m"
                }
#line 315 "assertion.m"
            }
#line 315 "assertion.m"
        }
#line 315 "assertion.m"
    }
#line 315 "assertion.m"
  }
#line 315 "assertion.m"
}

#line 259 "assertion.m"
static void MR_CALL 
hlds__assertion__update_5_p_0_2(
#line 259 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 259 "assertion.m"
{
#line 259 "assertion.m"
  {
#line 259 "assertion.m"
    struct hlds__assertion__update_5_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__update_5_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 261 "assertion.m"
    {
#line 261 "assertion.m"
      mercury__list__perm_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeCtorInfo_13_95, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__QCalls_7, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__RHSCalls_13, hlds__assertion__update_5_p_0_1, hlds__assertion__env_ptr);
#line 261 "assertion.m"
      return;
    }
#line 259 "assertion.m"
  }
#line 259 "assertion.m"
}

#line 262 "assertion.m"
static void MR_CALL 
hlds__assertion__update_5_p_0_3(
#line 262 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 262 "assertion.m"
{
#line 262 "assertion.m"
  {
#line 262 "assertion.m"
    struct hlds__assertion__update_5_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__update_5_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 264 "assertion.m"
    {
#line 264 "assertion.m"
      mercury__list__perm_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeCtorInfo_14_96, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__QCalls_7, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__LHSCalls_12, hlds__assertion__update_5_p_0_1, hlds__assertion__env_ptr);
#line 264 "assertion.m"
      return;
    }
#line 262 "assertion.m"
  }
#line 262 "assertion.m"
}

#line 311 "assertion.m"
static void MR_CALL 
hlds__assertion__update_5_p_0(
#line 311 "assertion.m"
  MR_Word hlds__assertion__PCalls_6,
#line 311 "assertion.m"
  MR_Word hlds__assertion__QCalls_7,
#line 311 "assertion.m"
  MR_Word hlds__assertion__UniversiallyQuantifiedVars_8,
#line 311 "assertion.m"
  MR_Word hlds__assertion__CallVars_9,
#line 311 "assertion.m"
  MR_Word * hlds__assertion__HeadVar__5_5,
#line 311 "assertion.m"
  MR_Cont hlds__assertion__cont,
#line 311 "assertion.m"
  void * hlds__assertion__cont_env_ptr)
#line 311 "assertion.m"
{
#line 311 "assertion.m"
  {
#line 311 "assertion.m"
    struct hlds__assertion__update_5_p_0_env_0_s hlds__assertion__env;

#line 311 "assertion.m"
    (hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__QCalls_7 = hlds__assertion__QCalls_7;
#line 311 "assertion.m"
    (hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__UniversiallyQuantifiedVars_8 = hlds__assertion__UniversiallyQuantifiedVars_8;
#line 311 "assertion.m"
    (hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__CallVars_9 = hlds__assertion__CallVars_9;
#line 311 "assertion.m"
    (hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__HeadVar__5_5 = hlds__assertion__HeadVar__5_5;
#line 311 "assertion.m"
    (hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__cont = hlds__assertion__cont;
#line 311 "assertion.m"
    (hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__cont_env_ptr = hlds__assertion__cont_env_ptr;
#line 259 "assertion.m"
    {
#line 6692 "hlds.assertion.c"
      (hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__TypeCtorInfo_13_95 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 260 "assertion.m"
      {
#line 260 "assertion.m"
        mercury__list__perm_2_p_0((hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__TypeCtorInfo_13_95, hlds__assertion__PCalls_6, &(hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__LHSCalls_12, hlds__assertion__update_5_p_0_2, &hlds__assertion__env);
      }
#line 259 "assertion.m"
    }
#line 262 "assertion.m"
    {
#line 6703 "hlds.assertion.c"
      (hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__TypeCtorInfo_14_96 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 263 "assertion.m"
      {
#line 263 "assertion.m"
        mercury__list__perm_2_p_0((hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__TypeCtorInfo_14_96, hlds__assertion__PCalls_6, &(hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__RHSCalls_13, hlds__assertion__update_5_p_0_3, &hlds__assertion__env);
      }
#line 262 "assertion.m"
    }
#line 311 "assertion.m"
  }
#line 311 "assertion.m"
}

#line 287 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__process_one_side_6_p_0_1(
#line 287 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 287 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1)
#line 287 "assertion.m"
{
#line 287 "assertion.m"
  {
#line 287 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 287 "assertion.m"
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

#line 287 "assertion.m"
    {
#line 287 "assertion.m"
      return hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__process_one_side__287__1_1_p_0(((MR_Word) hlds__assertion__wrapper_arg_1));
    }
#line 287 "assertion.m"
    return hlds__assertion__succeeded;
#line 287 "assertion.m"
  }
#line 287 "assertion.m"
}

#line 277 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__process_one_side_6_p_0(
#line 277 "assertion.m"
  MR_Word hlds__assertion__Goals_7,
#line 277 "assertion.m"
  MR_Word hlds__assertion__UniversiallyQuantifiedVars_8,
#line 277 "assertion.m"
  MR_Word * hlds__assertion__PredId_9,
#line 277 "assertion.m"
  MR_Word * hlds__assertion__LinkingVar_10,
#line 277 "assertion.m"
  MR_Word * hlds__assertion__Vars_11,
#line 277 "assertion.m"
  MR_Word * hlds__assertion__VarsA_12)
#line 277 "assertion.m"
{
#line 281 "assertion.m"
  {
#line 281 "assertion.m"
    MR_bool hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Goals_7)) == (MR_mktag((MR_Integer) 1)));
#line 281 "assertion.m"
    MR_Word hlds__assertion__TypeInfo_21_21;
#line 281 "assertion.m"
    MR_Word hlds__assertion__TypeCtorInfo_34_51;
#line 281 "assertion.m"
    MR_Word hlds__assertion__TypeInfo_35_52;
#line 281 "assertion.m"
    MR_Word hlds__assertion__Vars0_13;
#line 281 "assertion.m"
    MR_Word hlds__assertion__V_16_16;
#line 281 "assertion.m"
    MR_Integer hlds__assertion__V_18_18;
#line 281 "assertion.m"
    MR_Integer hlds__assertion__V_22_22;
#line 281 "assertion.m"
    MR_Word hlds__assertion__VarsB_36;
#line 281 "assertion.m"
    MR_Word hlds__assertion__SetVarsA_41;
#line 281 "assertion.m"
    MR_Word hlds__assertion__SetVarsB_42;
#line 281 "assertion.m"
    MR_Word hlds__assertion__CommonVars_43;
#line 281 "assertion.m"
    MR_Word hlds__assertion__V_44_44;
#line 281 "assertion.m"
    MR_Word hlds__assertion__V_45_45;
#line 281 "assertion.m"
    MR_Word hlds__assertion__V_46_46;
#line 281 "assertion.m"
    MR_Word hlds__assertion__V_47_47;
#line 281 "assertion.m"
    MR_Word hlds__assertion__V_48_48;
#line 281 "assertion.m"
    MR_Word hlds__assertion__V_49_49;
#line 281 "assertion.m"
    MR_Word hlds__assertion__V_50_50;
#line 281 "assertion.m"
    MR_Word hlds__assertion__V_53_53;
#line 357 "assertion.m"
    MR_Word hlds__assertion__V_34_34;
#line 357 "assertion.m"
    MR_Integer hlds__assertion__V_30_30;
#line 357 "assertion.m"
    MR_Word hlds__assertion__V_31_31;
#line 357 "assertion.m"
    MR_Word hlds__assertion__V_32_32;
#line 357 "assertion.m"
    MR_Word hlds__assertion__V_33_33;
#line 358 "assertion.m"
    MR_Word hlds__assertion__V_40_40;
#line 358 "assertion.m"
    MR_Integer hlds__assertion__V_35_35;
#line 358 "assertion.m"
    MR_Word hlds__assertion__V_37_37;
#line 358 "assertion.m"
    MR_Word hlds__assertion__V_38_38;
#line 358 "assertion.m"
    MR_Word hlds__assertion__V_39_39;

#line 357 "assertion.m"
    if (hlds__assertion__succeeded)
#line 357 "assertion.m"
      {
#line 357 "assertion.m"
        hlds__assertion__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Goals_7, (MR_Integer) 0)));
#line 357 "assertion.m"
        hlds__assertion__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Goals_7, (MR_Integer) 1)));
#line 357 "assertion.m"
        hlds__assertion__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_44_44, (MR_Integer) 0)));
#line 357 "assertion.m"
        hlds__assertion__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_44_44, (MR_Integer) 1)));
#line 357 "assertion.m"
        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_45_45)) == (MR_mktag((MR_Integer) 2)));
#line 357 "assertion.m"
        if (hlds__assertion__succeeded)
#line 357 "assertion.m"
          {
#line 357 "assertion.m"
            *hlds__assertion__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_45_45, (MR_Integer) 0)));
#line 357 "assertion.m"
            hlds__assertion__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__V_45_45, (MR_Integer) 1)));
#line 357 "assertion.m"
            *hlds__assertion__VarsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_45_45, (MR_Integer) 2)));
#line 357 "assertion.m"
            hlds__assertion__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_45_45, (MR_Integer) 3)));
#line 357 "assertion.m"
            hlds__assertion__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_45_45, (MR_Integer) 4)));
#line 357 "assertion.m"
            hlds__assertion__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_45_45, (MR_Integer) 5)));
#line 359 "assertion.m"
            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 359 "assertion.m"
            if (hlds__assertion__succeeded)
#line 359 "assertion.m"
              {
#line 359 "assertion.m"
                hlds__assertion__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_46_46, (MR_Integer) 0)));
#line 359 "assertion.m"
                hlds__assertion__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_46_46, (MR_Integer) 1)));
#line 358 "assertion.m"
                hlds__assertion__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_47_47, (MR_Integer) 0)));
#line 358 "assertion.m"
                hlds__assertion__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_47_47, (MR_Integer) 1)));
#line 358 "assertion.m"
                hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_48_48)) == (MR_mktag((MR_Integer) 2)));
#line 358 "assertion.m"
                if (hlds__assertion__succeeded)
#line 358 "assertion.m"
                  {
#line 358 "assertion.m"
                    hlds__assertion__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_48_48, (MR_Integer) 0)));
#line 358 "assertion.m"
                    hlds__assertion__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__V_48_48, (MR_Integer) 1)));
#line 358 "assertion.m"
                    hlds__assertion__VarsB_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_48_48, (MR_Integer) 2)));
#line 358 "assertion.m"
                    hlds__assertion__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_48_48, (MR_Integer) 3)));
#line 358 "assertion.m"
                    hlds__assertion__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_48_48, (MR_Integer) 4)));
#line 358 "assertion.m"
                    hlds__assertion__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_48_48, (MR_Integer) 5)));
#line 358 "assertion.m"
                    {
#line 358 "assertion.m"
                      hlds__assertion__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(*hlds__assertion__PredId_9, hlds__assertion__V_53_53);
                    }
#line 281 "assertion.m"
                    if (hlds__assertion__succeeded)
#line 281 "assertion.m"
                      {
#line 359 "assertion.m"
                        hlds__assertion__succeeded = (hlds__assertion__V_49_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 281 "assertion.m"
                        if (hlds__assertion__succeeded)
#line 281 "assertion.m"
                          {
#line 6902 "hlds.assertion.c"
                            hlds__assertion__TypeCtorInfo_34_51 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 363 "assertion.m"
                            {
#line 363 "assertion.m"
                              hlds__assertion__SetVarsA_41 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__assertion__TypeCtorInfo_34_51, *hlds__assertion__VarsA_12);
                            }
#line 364 "assertion.m"
                            {
#line 364 "assertion.m"
                              hlds__assertion__SetVarsB_42 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__assertion__TypeCtorInfo_34_51, hlds__assertion__VarsB_36);
                            }
#line 365 "assertion.m"
                            {
#line 365 "assertion.m"
                              hlds__assertion__CommonVars_43 = parse_tree__set_of_var__intersect_2_f_0(hlds__assertion__TypeCtorInfo_34_51, hlds__assertion__SetVarsA_41, hlds__assertion__SetVarsB_42);
                            }
#line 367 "assertion.m"
                            {
#line 367 "assertion.m"
                              hlds__assertion__V_50_50 = parse_tree__set_of_var__difference_2_f_0(hlds__assertion__TypeCtorInfo_34_51, hlds__assertion__CommonVars_43, hlds__assertion__UniversiallyQuantifiedVars_8);
                            }
#line 366 "assertion.m"
                            {
#line 366 "assertion.m"
                              hlds__assertion__succeeded = parse_tree__set_of_var__is_singleton_2_p_0(hlds__assertion__TypeCtorInfo_34_51, hlds__assertion__V_50_50, hlds__assertion__LinkingVar_10);
                            }
#line 281 "assertion.m"
                            if (hlds__assertion__succeeded)
#line 281 "assertion.m"
                              {
#line 6933 "hlds.assertion.c"
                                hlds__assertion__TypeInfo_35_52 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 371 "assertion.m"
                                {
#line 371 "assertion.m"
                                  mercury__assoc_list__from_corresponding_lists_3_p_0(hlds__assertion__TypeInfo_35_52, hlds__assertion__TypeInfo_35_52, *hlds__assertion__VarsA_12, hlds__assertion__VarsB_36, &hlds__assertion__Vars0_13);
                                }
#line 287 "assertion.m"
                                hlds__assertion__V_16_16 = (MR_Word) &hlds__assertion_scalar_common_2[4];
#line 6942 "hlds.assertion.c"
                                hlds__assertion__TypeInfo_21_21 = (MR_Word) &hlds__assertion_scalar_common_2[0];
#line 287 "assertion.m"
                                {
#line 287 "assertion.m"
                                  mercury__list__filter_3_p_0(hlds__assertion__TypeInfo_21_21, hlds__assertion__V_16_16, hlds__assertion__Vars0_13, hlds__assertion__Vars_11);
                                }
#line 292 "assertion.m"
                                hlds__assertion__V_18_18 = (MR_Integer) 3;
#line 288 "assertion.m"
                                {
#line 288 "assertion.m"
                                  mercury__list__length_2_p_0(hlds__assertion__TypeInfo_21_21, *hlds__assertion__Vars_11, &hlds__assertion__V_22_22);
                                }
#line 288 "assertion.m"
                                hlds__assertion__succeeded = (hlds__assertion__V_18_18 == hlds__assertion__V_22_22);
#line 281 "assertion.m"
                              }
#line 281 "assertion.m"
                          }
#line 281 "assertion.m"
                      }
#line 358 "assertion.m"
                  }
#line 359 "assertion.m"
              }
#line 357 "assertion.m"
          }
#line 357 "assertion.m"
      }
#line 281 "assertion.m"
    return hlds__assertion__succeeded;
#line 281 "assertion.m"
  }
#line 277 "assertion.m"
}

#line 259 "assertion.m"
static void MR_CALL 
hlds__assertion__reorder_4_p_0_1(
#line 259 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 259 "assertion.m"
{
#line 259 "assertion.m"
  {
#line 259 "assertion.m"
    struct hlds__assertion__reorder_4_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__reorder_4_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 261 "assertion.m"
    {
#line 261 "assertion.m"
      mercury__list__perm_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__TypeCtorInfo_13_13, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__QCalls_2, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__RHSCalls_4, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__cont, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__cont_env_ptr);
#line 261 "assertion.m"
      return;
    }
#line 259 "assertion.m"
  }
#line 259 "assertion.m"
}

#line 262 "assertion.m"
static void MR_CALL 
hlds__assertion__reorder_4_p_0_2(
#line 262 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 262 "assertion.m"
{
#line 262 "assertion.m"
  {
#line 262 "assertion.m"
    struct hlds__assertion__reorder_4_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__reorder_4_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 264 "assertion.m"
    {
#line 264 "assertion.m"
      mercury__list__perm_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__TypeCtorInfo_14_14, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__QCalls_2, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__LHSCalls_3, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__cont, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__cont_env_ptr);
#line 264 "assertion.m"
      return;
    }
#line 262 "assertion.m"
  }
#line 262 "assertion.m"
}

#line 256 "assertion.m"
static void MR_CALL 
hlds__assertion__reorder_4_p_0(
#line 256 "assertion.m"
  MR_Word hlds__assertion__PCalls_1,
#line 256 "assertion.m"
  MR_Word hlds__assertion__QCalls_2,
#line 256 "assertion.m"
  MR_Word * hlds__assertion__LHSCalls_3,
#line 256 "assertion.m"
  MR_Word * hlds__assertion__RHSCalls_4,
#line 256 "assertion.m"
  MR_Cont hlds__assertion__cont,
#line 256 "assertion.m"
  void * hlds__assertion__cont_env_ptr)
#line 256 "assertion.m"
{
#line 256 "assertion.m"
  {
#line 256 "assertion.m"
    struct hlds__assertion__reorder_4_p_0_env_0_s hlds__assertion__env;

#line 256 "assertion.m"
    (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__QCalls_2 = hlds__assertion__QCalls_2;
#line 256 "assertion.m"
    (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__LHSCalls_3 = hlds__assertion__LHSCalls_3;
#line 256 "assertion.m"
    (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__RHSCalls_4 = hlds__assertion__RHSCalls_4;
#line 256 "assertion.m"
    (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__cont = hlds__assertion__cont;
#line 256 "assertion.m"
    (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__cont_env_ptr = hlds__assertion__cont_env_ptr;
#line 259 "assertion.m"
    {
#line 259 "assertion.m"
      MR_bool hlds__assertion__succeeded;

#line 7064 "hlds.assertion.c"
      (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 260 "assertion.m"
      {
#line 260 "assertion.m"
        mercury__list__perm_2_p_0((hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__TypeCtorInfo_13_13, hlds__assertion__PCalls_1, (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__LHSCalls_3, hlds__assertion__reorder_4_p_0_1, &hlds__assertion__env);
      }
#line 7071 "hlds.assertion.c"
      (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 263 "assertion.m"
      {
#line 263 "assertion.m"
        mercury__list__perm_2_p_0((hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__TypeCtorInfo_14_14, hlds__assertion__PCalls_1, (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__RHSCalls_4, hlds__assertion__reorder_4_p_0_2, &hlds__assertion__env);
      }
#line 259 "assertion.m"
    }
#line 256 "assertion.m"
  }
#line 256 "assertion.m"
}

#line 249 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__associative_5_p_0_6(
#line 249 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 249 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1)
#line 249 "assertion.m"
{
#line 249 "assertion.m"
  {
#line 249 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 249 "assertion.m"
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

#line 249 "assertion.m"
    {
#line 249 "assertion.m"
      return hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__associative__249__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 3))), ((MR_Word) hlds__assertion__wrapper_arg_1));
    }
#line 249 "assertion.m"
    return hlds__assertion__succeeded;
#line 249 "assertion.m"
  }
#line 249 "assertion.m"
}

#line 247 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__associative_5_p_0_5(
#line 247 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 247 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1)
#line 247 "assertion.m"
{
#line 247 "assertion.m"
  {
#line 247 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 247 "assertion.m"
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

#line 247 "assertion.m"
    {
#line 247 "assertion.m"
      return hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__associative__247__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 3))), ((MR_Word) hlds__assertion__wrapper_arg_1));
    }
#line 247 "assertion.m"
    return hlds__assertion__succeeded;
#line 247 "assertion.m"
  }
#line 247 "assertion.m"
}

#line 245 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__associative_5_p_0_4(
#line 245 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 245 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1)
#line 245 "assertion.m"
{
#line 245 "assertion.m"
  {
#line 245 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 245 "assertion.m"
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

#line 245 "assertion.m"
    {
#line 245 "assertion.m"
      return hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__associative__245__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 3))), ((MR_Word) hlds__assertion__wrapper_arg_1));
    }
#line 245 "assertion.m"
    return hlds__assertion__succeeded;
#line 245 "assertion.m"
  }
#line 245 "assertion.m"
}

#line 228 "assertion.m"
static void MR_CALL 
hlds__assertion__associative_5_p_0_1(
#line 228 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 228 "assertion.m"
{
#line 228 "assertion.m"
  {
#line 228 "assertion.m"
    struct hlds__assertion__associative_5_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__associative_5_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 228 "assertion.m"
    MR_builtin_longjmp((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__commit_0, 1);
#line 228 "assertion.m"
  }
#line 228 "assertion.m"
}

#line 228 "assertion.m"
static void MR_CALL 
hlds__assertion__associative_5_p_0_3(
#line 228 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 228 "assertion.m"
{
#line 228 "assertion.m"
  {
#line 228 "assertion.m"
    struct hlds__assertion__associative_5_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__associative_5_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 228 "assertion.m"
    {
#line 246 "assertion.m"
      MR_Word hlds__assertion___AB_30;
#line 248 "assertion.m"
      MR_Word hlds__assertion___A_31;
#line 250 "assertion.m"
      MR_Word hlds__assertion___B_32;

#line 241 "assertion.m"
      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 241 "assertion.m"
      if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 241 "assertion.m"
        {
#line 241 "assertion.m"
          {
#line 241 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_34_34, (MR_Integer) 0)));
#line 241 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_34_34, (MR_Integer) 1)));
#line 241 "assertion.m"
          }
#line 228 "assertion.m"
          {
#line 241 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_35_35, (MR_Integer) 0)));
#line 241 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_35_35, (MR_Integer) 1)));
#line 241 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__A_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_36_36, (MR_Integer) 0)));
#line 241 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_36_36, (MR_Integer) 1)));
#line 7233 "hlds.assertion.c"
            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_88_88 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 241 "assertion.m"
            {
#line 241 "assertion.m"
              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_88_88, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AB_16)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_75_75)));
            }
#line 228 "assertion.m"
            if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 228 "assertion.m"
              {
#line 241 "assertion.m"
                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__B_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_37_37, (MR_Integer) 0)));
#line 241 "assertion.m"
                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_37_37, (MR_Integer) 1)));
#line 7248 "hlds.assertion.c"
                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_89_89 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 241 "assertion.m"
                {
#line 241 "assertion.m"
                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_89_89, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__A_23)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_76_76)));
                }
#line 228 "assertion.m"
                if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 228 "assertion.m"
                  {
#line 241 "assertion.m"
                    (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 241 "assertion.m"
                    if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 241 "assertion.m"
                      {
#line 241 "assertion.m"
                        {
#line 241 "assertion.m"
                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_38_38, (MR_Integer) 0)));
#line 241 "assertion.m"
                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_38_38, (MR_Integer) 1)));
#line 241 "assertion.m"
                        }
#line 228 "assertion.m"
                        {
#line 241 "assertion.m"
                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_39_39, (MR_Integer) 0)));
#line 241 "assertion.m"
                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_39_39, (MR_Integer) 1)));
#line 241 "assertion.m"
                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_40_40, (MR_Integer) 0)));
#line 241 "assertion.m"
                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__C_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_40_40, (MR_Integer) 1)));
#line 7283 "hlds.assertion.c"
                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_90_90 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 241 "assertion.m"
                          {
#line 241 "assertion.m"
                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_90_90, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__B_24)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_77_77)));
                          }
#line 228 "assertion.m"
                          if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 228 "assertion.m"
                            {
#line 241 "assertion.m"
                              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_41_41, (MR_Integer) 0)));
#line 241 "assertion.m"
                              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_41_41, (MR_Integer) 1)));
#line 7298 "hlds.assertion.c"
                              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_91_91 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 241 "assertion.m"
                              {
#line 241 "assertion.m"
                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_91_91, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__C_25)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_78_78)));
                              }
#line 228 "assertion.m"
                              if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 228 "assertion.m"
                                {
#line 7309 "hlds.assertion.c"
                                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_92_92 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 241 "assertion.m"
                                  {
#line 241 "assertion.m"
                                    (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_92_92, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__BC_19)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_79_79)));
                                  }
#line 228 "assertion.m"
                                  if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 228 "assertion.m"
                                    {
#line 242 "assertion.m"
                                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 242 "assertion.m"
                                      if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 242 "assertion.m"
                                        {
#line 242 "assertion.m"
                                          {
#line 242 "assertion.m"
                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_42_42, (MR_Integer) 0)));
#line 242 "assertion.m"
                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_42_42, (MR_Integer) 1)));
#line 242 "assertion.m"
                                          }
#line 228 "assertion.m"
                                          {
#line 7336 "hlds.assertion.c"
                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_93_93 = (MR_Word) &hlds__assertion_scalar_common_1[2];
#line 242 "assertion.m"
                                            {
#line 242 "assertion.m"
                                              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_93_93, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_46_46)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_80_80)));
                                            }
#line 228 "assertion.m"
                                            if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 228 "assertion.m"
                                              {
#line 242 "assertion.m"
                                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_43_43, (MR_Integer) 0)));
#line 242 "assertion.m"
                                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_43_43, (MR_Integer) 1)));
#line 242 "assertion.m"
                                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_44_44, (MR_Integer) 0)));
#line 242 "assertion.m"
                                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__ABC_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_44_44, (MR_Integer) 1)));
#line 7355 "hlds.assertion.c"
                                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_94_94 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 242 "assertion.m"
                                                {
#line 242 "assertion.m"
                                                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_94_94, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AB_16)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_81_81)));
                                                }
#line 228 "assertion.m"
                                                if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 228 "assertion.m"
                                                  {
#line 242 "assertion.m"
                                                    (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_45_45, (MR_Integer) 0)));
#line 242 "assertion.m"
                                                    (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_45_45, (MR_Integer) 1)));
#line 7370 "hlds.assertion.c"
                                                    (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_95_95 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 242 "assertion.m"
                                                    {
#line 242 "assertion.m"
                                                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_95_95, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__BC_19)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_82_82)));
                                                    }
#line 228 "assertion.m"
                                                    if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 228 "assertion.m"
                                                      {
#line 7381 "hlds.assertion.c"
                                                        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_96_96 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 242 "assertion.m"
                                                        {
#line 242 "assertion.m"
                                                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_96_96, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__ABC_26)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_83_83)));
                                                        }
#line 228 "assertion.m"
                                                        if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 228 "assertion.m"
                                                          {
#line 7392 "hlds.assertion.c"
                                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_73_73 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 244 "assertion.m"
                                                            {
#line 244 "assertion.m"
                                                              mercury__assoc_list__from_corresponding_lists_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_73_73, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_73_73, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Vs_18, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__CallVars_9, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AssocList_27);
                                                            }
#line 246 "assertion.m"
                                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 245 "assertion.m"
                                                            {
#line 245 "assertion.m"
                                                              MR_Word base;
#line 245 "assertion.m"
                                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 245 "assertion.m"
                                                              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_47_47 = base;
#line 245 "assertion.m"
                                                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&hlds__assertion_scalar_common_5[0]));
#line 245 "assertion.m"
                                                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__associative_5_p_0_4));
#line 245 "assertion.m"
                                                              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 245 "assertion.m"
                                                              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AB_16));
#line 245 "assertion.m"
                                                            }
#line 245 "assertion.m"
                                                            {
#line 245 "assertion.m"
                                                              mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_71_71, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_47_47, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AssocList_27, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_48_48);
                                                            }
#line 246 "assertion.m"
                                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_48_48)) == (MR_mktag((MR_Integer) 1)));
#line 246 "assertion.m"
                                                            if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 246 "assertion.m"
                                                              {
#line 246 "assertion.m"
                                                                {
#line 246 "assertion.m"
                                                                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_48_48, (MR_Integer) 0)));
#line 246 "assertion.m"
                                                                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_48_48, (MR_Integer) 1)));
#line 246 "assertion.m"
                                                                }
#line 228 "assertion.m"
                                                                {
#line 7440 "hlds.assertion.c"
                                                                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_98_98 = (MR_Word) &hlds__assertion_scalar_common_1[3];
#line 246 "assertion.m"
                                                                  {
#line 246 "assertion.m"
                                                                    (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_98_98, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_51_51)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_84_84)));
                                                                  }
#line 228 "assertion.m"
                                                                  if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 228 "assertion.m"
                                                                    {
#line 246 "assertion.m"
                                                                      hlds__assertion___AB_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_50_50, (MR_Integer) 0)));
#line 246 "assertion.m"
                                                                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__OutputVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_50_50, (MR_Integer) 1)));
#line 248 "assertion.m"
                                                                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_56_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 247 "assertion.m"
                                                                      {
#line 247 "assertion.m"
                                                                        MR_Word base;
#line 247 "assertion.m"
                                                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 247 "assertion.m"
                                                                        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_52_52 = base;
#line 247 "assertion.m"
                                                                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&hlds__assertion_scalar_common_5[0]));
#line 247 "assertion.m"
                                                                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__associative_5_p_0_5));
#line 247 "assertion.m"
                                                                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 247 "assertion.m"
                                                                        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__A_23));
#line 247 "assertion.m"
                                                                      }
#line 247 "assertion.m"
                                                                      {
#line 247 "assertion.m"
                                                                        mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_71_71, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_52_52, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AssocList_27, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_53_53);
                                                                      }
#line 248 "assertion.m"
                                                                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_53_53)) == (MR_mktag((MR_Integer) 1)));
#line 248 "assertion.m"
                                                                      if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 248 "assertion.m"
                                                                        {
#line 248 "assertion.m"
                                                                          {
#line 248 "assertion.m"
                                                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_53_53, (MR_Integer) 0)));
#line 248 "assertion.m"
                                                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_53_53, (MR_Integer) 1)));
#line 248 "assertion.m"
                                                                          }
#line 228 "assertion.m"
                                                                          {
#line 7496 "hlds.assertion.c"
                                                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_100_100 = (MR_Word) &hlds__assertion_scalar_common_1[3];
#line 248 "assertion.m"
                                                                            {
#line 248 "assertion.m"
                                                                              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_100_100, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_56_56)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_85_85)));
                                                                            }
#line 228 "assertion.m"
                                                                            if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 228 "assertion.m"
                                                                              {
#line 248 "assertion.m"
                                                                                hlds__assertion___A_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_55_55, (MR_Integer) 0)));
#line 248 "assertion.m"
                                                                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__CallVarA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_55_55, (MR_Integer) 1)));
#line 250 "assertion.m"
                                                                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_61_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 249 "assertion.m"
                                                                                {
#line 249 "assertion.m"
                                                                                  MR_Word base;
#line 249 "assertion.m"
                                                                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 249 "assertion.m"
                                                                                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_57_57 = base;
#line 249 "assertion.m"
                                                                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&hlds__assertion_scalar_common_5[0]));
#line 249 "assertion.m"
                                                                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__associative_5_p_0_6));
#line 249 "assertion.m"
                                                                                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 249 "assertion.m"
                                                                                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__B_24));
#line 249 "assertion.m"
                                                                                }
#line 249 "assertion.m"
                                                                                {
#line 249 "assertion.m"
                                                                                  mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_71_71, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_57_57, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AssocList_27, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_58_58);
                                                                                }
#line 250 "assertion.m"
                                                                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_58_58)) == (MR_mktag((MR_Integer) 1)));
#line 250 "assertion.m"
                                                                                if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 250 "assertion.m"
                                                                                  {
#line 250 "assertion.m"
                                                                                    {
#line 250 "assertion.m"
                                                                                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_58_58, (MR_Integer) 0)));
#line 250 "assertion.m"
                                                                                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_58_58, (MR_Integer) 1)));
#line 250 "assertion.m"
                                                                                    }
#line 228 "assertion.m"
                                                                                    {
#line 7552 "hlds.assertion.c"
                                                                                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_102_102 = (MR_Word) &hlds__assertion_scalar_common_1[3];
#line 250 "assertion.m"
                                                                                      {
#line 250 "assertion.m"
                                                                                        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_102_102, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_61_61)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_86_86)));
                                                                                      }
#line 228 "assertion.m"
                                                                                      if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 228 "assertion.m"
                                                                                        {
#line 250 "assertion.m"
                                                                                          hlds__assertion___B_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_60_60, (MR_Integer) 0)));
#line 250 "assertion.m"
                                                                                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__CallVarB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_60_60, (MR_Integer) 1)));
#line 228 "assertion.m"
                                                                                          {
#line 228 "assertion.m"
                                                                                            MR_Word base;
#line 228 "assertion.m"
                                                                                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 228 "assertion.m"
                                                                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_33_33 = base;
#line 228 "assertion.m"
                                                                                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__CallVarA_10));
#line 228 "assertion.m"
                                                                                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__CallVarB_11));
#line 228 "assertion.m"
                                                                                          }
#line 228 "assertion.m"
                                                                                          {
#line 228 "assertion.m"
                                                                                            MR_Word base;
#line 228 "assertion.m"
                                                                                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 228 "assertion.m"
                                                                                            *((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__HeadVar__5_5) = base;
#line 228 "assertion.m"
                                                                                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_33_33));
#line 228 "assertion.m"
                                                                                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__OutputVar_12));
#line 228 "assertion.m"
                                                                                          }
#line 228 "assertion.m"
                                                                                          {
#line 228 "assertion.m"
                                                                                            hlds__assertion__associative_5_p_0_1(hlds__assertion__env_ptr);
#line 228 "assertion.m"
                                                                                            return;
                                                                                          }
#line 228 "assertion.m"
                                                                                        }
#line 228 "assertion.m"
                                                                                    }
#line 250 "assertion.m"
                                                                                  }
#line 228 "assertion.m"
                                                                              }
#line 228 "assertion.m"
                                                                          }
#line 248 "assertion.m"
                                                                        }
#line 228 "assertion.m"
                                                                    }
#line 228 "assertion.m"
                                                                }
#line 246 "assertion.m"
                                                              }
#line 228 "assertion.m"
                                                          }
#line 228 "assertion.m"
                                                      }
#line 228 "assertion.m"
                                                  }
#line 228 "assertion.m"
                                              }
#line 228 "assertion.m"
                                          }
#line 242 "assertion.m"
                                        }
#line 228 "assertion.m"
                                    }
#line 228 "assertion.m"
                                }
#line 228 "assertion.m"
                            }
#line 228 "assertion.m"
                        }
#line 241 "assertion.m"
                      }
#line 228 "assertion.m"
                  }
#line 228 "assertion.m"
              }
#line 228 "assertion.m"
          }
#line 241 "assertion.m"
        }
#line 228 "assertion.m"
    }
#line 228 "assertion.m"
  }
#line 228 "assertion.m"
}

#line 228 "assertion.m"
static void MR_CALL 
hlds__assertion__associative_5_p_0_2(
#line 228 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 228 "assertion.m"
{
#line 228 "assertion.m"
  {
#line 228 "assertion.m"
    struct hlds__assertion__associative_5_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__associative_5_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 228 "assertion.m"
    {
#line 232 "assertion.m"
      MR_Word hlds__assertion__V_21_21;

#line 230 "assertion.m"
      {
#line 230 "assertion.m"
        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = hlds__assertion__process_one_side_6_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__LHSCalls_13, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__UniversiallyQuantifiedVars_8, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__PredId_15, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AB_16, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__PairsL_17, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Vs_18);
      }
#line 228 "assertion.m"
      if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 228 "assertion.m"
        {
#line 232 "assertion.m"
          {
#line 232 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = hlds__assertion__process_one_side_6_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__RHSCalls_14, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__UniversiallyQuantifiedVars_8, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_74_74, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__BC_19, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__PairsR_20, &hlds__assertion__V_21_21);
          }
#line 228 "assertion.m"
          if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 228 "assertion.m"
            {
#line 232 "assertion.m"
              {
#line 232 "assertion.m"
                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__PredId_15, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_74_74);
              }
#line 228 "assertion.m"
              if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
#line 228 "assertion.m"
                {
#line 7701 "hlds.assertion.c"
                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_71_71 = (MR_Word) &hlds__assertion_scalar_common_2[0];
#line 240 "assertion.m"
                  {
#line 240 "assertion.m"
                    mercury__assoc_list__from_corresponding_lists_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_71_71, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_71_71, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__PairsL_17, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__PairsR_20, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Pairs_22);
                  }
#line 242 "assertion.m"
                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 7710 "hlds.assertion.c"
                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_72_72 = (MR_Word) &hlds__assertion_scalar_common_2[1];
#line 241 "assertion.m"
                  {
#line 241 "assertion.m"
                    mercury__list__perm_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_72_72, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Pairs_22, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_34_34, hlds__assertion__associative_5_p_0_3, hlds__assertion__env_ptr);
                  }
#line 228 "assertion.m"
                }
#line 228 "assertion.m"
            }
#line 228 "assertion.m"
        }
#line 228 "assertion.m"
    }
#line 228 "assertion.m"
  }
#line 228 "assertion.m"
}

#line 228 "assertion.m"
static void MR_CALL 
hlds__assertion__associative_5_p_0_7(
#line 228 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 228 "assertion.m"
{
#line 228 "assertion.m"
  {
#line 228 "assertion.m"
    struct hlds__assertion__associative_5_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__associative_5_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 228 "assertion.m"
    if (MR_builtin_setjmp((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__commit_0) == 0)
#line 228 "assertion.m"
      {
#line 229 "assertion.m"
        {
#line 229 "assertion.m"
          hlds__assertion__reorder_4_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__PCalls_6, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__QCalls_7, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__LHSCalls_13, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__RHSCalls_14, hlds__assertion__associative_5_p_0_2, hlds__assertion__env_ptr);
        }
#line 228 "assertion.m"
        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = MR_FALSE;
#line 228 "assertion.m"
      }
#line 228 "assertion.m"
    else
#line 228 "assertion.m"
      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = MR_TRUE;
#line 228 "assertion.m"
  }
#line 228 "assertion.m"
}

#line 223 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__associative_5_p_0(
#line 223 "assertion.m"
  MR_Word hlds__assertion__PCalls_6,
#line 223 "assertion.m"
  MR_Word hlds__assertion__QCalls_7,
#line 223 "assertion.m"
  MR_Word hlds__assertion__UniversiallyQuantifiedVars_8,
#line 223 "assertion.m"
  MR_Word hlds__assertion__CallVars_9,
#line 223 "assertion.m"
  MR_Word * hlds__assertion__HeadVar__5_5)
#line 223 "assertion.m"
{
#line 223 "assertion.m"
  {
#line 223 "assertion.m"
    struct hlds__assertion__associative_5_p_0_env_0_s hlds__assertion__env;

#line 223 "assertion.m"
    (hlds__assertion__env).hlds__assertion__associative_5_p_0_env_0__PCalls_6 = hlds__assertion__PCalls_6;
#line 223 "assertion.m"
    (hlds__assertion__env).hlds__assertion__associative_5_p_0_env_0__QCalls_7 = hlds__assertion__QCalls_7;
#line 223 "assertion.m"
    (hlds__assertion__env).hlds__assertion__associative_5_p_0_env_0__UniversiallyQuantifiedVars_8 = hlds__assertion__UniversiallyQuantifiedVars_8;
#line 223 "assertion.m"
    (hlds__assertion__env).hlds__assertion__associative_5_p_0_env_0__CallVars_9 = hlds__assertion__CallVars_9;
#line 223 "assertion.m"
    (hlds__assertion__env).hlds__assertion__associative_5_p_0_env_0__HeadVar__5_5 = hlds__assertion__HeadVar__5_5;
#line 228 "assertion.m"
    {
#line 228 "assertion.m"
      hlds__assertion__associative_5_p_0_7(&hlds__assertion__env);
    }
#line 228 "assertion.m"
    return (hlds__assertion__env).hlds__assertion__associative_5_p_0_env_0__succeeded;
#line 223 "assertion.m"
  }
#line 223 "assertion.m"
}

#line 181 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__commutative_var_ordering_2_6_p_0(
#line 181 "assertion.m"
  MR_Word hlds__assertion__VarP_7,
#line 181 "assertion.m"
  MR_Word hlds__assertion__VarQ_8,
#line 181 "assertion.m"
  MR_Word hlds__assertion__HeadVar__3_3,
#line 181 "assertion.m"
  MR_Word hlds__assertion__HeadVar__4_4,
#line 181 "assertion.m"
  MR_Word hlds__assertion__HeadVar__5_5,
#line 181 "assertion.m"
  MR_Word * hlds__assertion__CallVarB_15)
#line 181 "assertion.m"
{
#line 186 "assertion.m"
  while (MR_TRUE)
#line 186 "assertion.m"
    {
#line 186 "assertion.m"
      /* tailcall optimized into a loop */
#line 186 "assertion.m"
      {
#line 186 "assertion.m"
        MR_bool hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 186 "assertion.m"
        MR_Word hlds__assertion__P_9;
#line 186 "assertion.m"
        MR_Word hlds__assertion__Ps_10;
#line 186 "assertion.m"
        MR_Word hlds__assertion__Q_11;
#line 186 "assertion.m"
        MR_Word hlds__assertion__Qs_12;
#line 186 "assertion.m"
        MR_Word hlds__assertion__V_13;
#line 186 "assertion.m"
        MR_Word hlds__assertion__Vs_14;
#line 187 "assertion.m"
        MR_Word hlds__assertion__TypeInfo_16_16;

#line 185 "assertion.m"
        if (hlds__assertion__succeeded)
#line 185 "assertion.m"
          {
#line 185 "assertion.m"
            hlds__assertion__P_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__3_3, (MR_Integer) 0)));
#line 185 "assertion.m"
            hlds__assertion__Ps_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__3_3, (MR_Integer) 1)));
#line 185 "assertion.m"
            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 185 "assertion.m"
            if (hlds__assertion__succeeded)
#line 185 "assertion.m"
              {
#line 185 "assertion.m"
                hlds__assertion__Q_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__4_4, (MR_Integer) 0)));
#line 185 "assertion.m"
                hlds__assertion__Qs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__4_4, (MR_Integer) 1)));
#line 185 "assertion.m"
                hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__5_5)) == (MR_mktag((MR_Integer) 1)));
#line 185 "assertion.m"
                if (hlds__assertion__succeeded)
#line 185 "assertion.m"
                  {
#line 185 "assertion.m"
                    hlds__assertion__V_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__5_5, (MR_Integer) 0)));
#line 185 "assertion.m"
                    hlds__assertion__Vs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__5_5, (MR_Integer) 1)));
#line 7876 "hlds.assertion.c"
                    hlds__assertion__TypeInfo_16_16 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 187 "assertion.m"
                    {
#line 187 "assertion.m"
                      hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_16_16, ((MR_Box) (hlds__assertion__P_9)), ((MR_Box) (hlds__assertion__Q_11)));
                    }
#line 189 "assertion.m"
                    if (hlds__assertion__succeeded)
#line 188 "assertion.m"
                      {
#line 188 "assertion.m"
                        /* direct tailcall eliminated */
#line 188 "assertion.m"
                        {
#line 188 "assertion.m"
                          MR_Word hlds__assertion__HeadVar__3__tmp_copy_3 = hlds__assertion__Ps_10;
#line 188 "assertion.m"
                          MR_Word hlds__assertion__HeadVar__4__tmp_copy_4 = hlds__assertion__Qs_12;
#line 188 "assertion.m"
                          MR_Word hlds__assertion__HeadVar__5__tmp_copy_5 = hlds__assertion__Vs_14;

#line 188 "assertion.m"
                          hlds__assertion__HeadVar__5_5 = hlds__assertion__HeadVar__5__tmp_copy_5;
#line 188 "assertion.m"
                          hlds__assertion__HeadVar__4_4 = hlds__assertion__HeadVar__4__tmp_copy_4;
#line 188 "assertion.m"
                          hlds__assertion__HeadVar__3_3 = hlds__assertion__HeadVar__3__tmp_copy_3;
#line 188 "assertion.m"
                        }
#line 188 "assertion.m"
                        continue;
#line 188 "assertion.m"
                      }
#line 189 "assertion.m"
                    else
#line 190 "assertion.m"
                      {
#line 190 "assertion.m"
                        MR_Word hlds__assertion__TypeInfo_18_18;
#line 190 "assertion.m"
                        MR_Word hlds__assertion__TypeInfo_19_19;

#line 190 "assertion.m"
                        *hlds__assertion__CallVarB_15 = hlds__assertion__V_13;
#line 191 "assertion.m"
                        {
#line 191 "assertion.m"
                          hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__P_9)), ((MR_Box) (hlds__assertion__VarQ_8)));
                        }
#line 190 "assertion.m"
                        if (hlds__assertion__succeeded)
#line 190 "assertion.m"
                          {
#line 7930 "hlds.assertion.c"
                            hlds__assertion__TypeInfo_18_18 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 192 "assertion.m"
                            {
#line 192 "assertion.m"
                              hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_18_18, ((MR_Box) (hlds__assertion__Q_11)), ((MR_Box) (hlds__assertion__VarP_7)));
                            }
#line 190 "assertion.m"
                            if (hlds__assertion__succeeded)
#line 190 "assertion.m"
                              {
#line 7941 "hlds.assertion.c"
                                hlds__assertion__TypeInfo_19_19 = (MR_Word) &hlds__assertion_scalar_common_1[1];
#line 193 "assertion.m"
                                {
#line 193 "assertion.m"
                                  return hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_19_19, ((MR_Box) (hlds__assertion__Ps_10)), ((MR_Box) (hlds__assertion__Qs_12)));
                                }
#line 190 "assertion.m"
                              }
#line 190 "assertion.m"
                          }
#line 190 "assertion.m"
                      }
#line 185 "assertion.m"
                  }
#line 185 "assertion.m"
              }
#line 185 "assertion.m"
          }
#line 186 "assertion.m"
        return hlds__assertion__succeeded;
#line 186 "assertion.m"
      }
#line 186 "assertion.m"
      break;
#line 186 "assertion.m"
    }
#line 181 "assertion.m"
}

#line 170 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__commutative_var_ordering_4_p_0(
#line 170 "assertion.m"
  MR_Word hlds__assertion__HeadVar__1_1,
#line 170 "assertion.m"
  MR_Word hlds__assertion__HeadVar__2_2,
#line 170 "assertion.m"
  MR_Word hlds__assertion__HeadVar__3_3,
#line 170 "assertion.m"
  MR_Word * hlds__assertion__CommutativeVars_11)
#line 170 "assertion.m"
{
#line 173 "assertion.m"
  while (MR_TRUE)
#line 173 "assertion.m"
    {
#line 173 "assertion.m"
      /* tailcall optimized into a loop */
#line 173 "assertion.m"
      {
#line 173 "assertion.m"
        MR_bool hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 173 "assertion.m"
        MR_Word hlds__assertion__P_5;
#line 173 "assertion.m"
        MR_Word hlds__assertion__Ps_6;
#line 173 "assertion.m"
        MR_Word hlds__assertion__Q_7;
#line 173 "assertion.m"
        MR_Word hlds__assertion__Qs_8;
#line 173 "assertion.m"
        MR_Word hlds__assertion__V_9;
#line 173 "assertion.m"
        MR_Word hlds__assertion__Vs_10;
#line 174 "assertion.m"
        MR_Word hlds__assertion__TypeInfo_13_13;

#line 173 "assertion.m"
        if (hlds__assertion__succeeded)
#line 173 "assertion.m"
          {
#line 173 "assertion.m"
            hlds__assertion__P_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
#line 173 "assertion.m"
            hlds__assertion__Ps_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
#line 173 "assertion.m"
            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 173 "assertion.m"
            if (hlds__assertion__succeeded)
#line 173 "assertion.m"
              {
#line 173 "assertion.m"
                hlds__assertion__Q_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)));
#line 173 "assertion.m"
                hlds__assertion__Qs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 1)));
#line 173 "assertion.m"
                hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 173 "assertion.m"
                if (hlds__assertion__succeeded)
#line 173 "assertion.m"
                  {
#line 173 "assertion.m"
                    hlds__assertion__V_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__3_3, (MR_Integer) 0)));
#line 173 "assertion.m"
                    hlds__assertion__Vs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__3_3, (MR_Integer) 1)));
#line 8037 "hlds.assertion.c"
                    hlds__assertion__TypeInfo_13_13 = (MR_Word) &hlds__assertion_scalar_common_1[0];
#line 174 "assertion.m"
                    {
#line 174 "assertion.m"
                      hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_13_13, ((MR_Box) (hlds__assertion__P_5)), ((MR_Box) (hlds__assertion__Q_7)));
                    }
#line 176 "assertion.m"
                    if (hlds__assertion__succeeded)
#line 175 "assertion.m"
                      {
#line 175 "assertion.m"
                        /* direct tailcall eliminated */
#line 175 "assertion.m"
                        {
#line 175 "assertion.m"
                          MR_Word hlds__assertion__HeadVar__1__tmp_copy_1 = hlds__assertion__Ps_6;
#line 175 "assertion.m"
                          MR_Word hlds__assertion__HeadVar__2__tmp_copy_2 = hlds__assertion__Qs_8;
#line 175 "assertion.m"
                          MR_Word hlds__assertion__HeadVar__3__tmp_copy_3 = hlds__assertion__Vs_10;

#line 175 "assertion.m"
                          hlds__assertion__HeadVar__3_3 = hlds__assertion__HeadVar__3__tmp_copy_3;
#line 175 "assertion.m"
                          hlds__assertion__HeadVar__2_2 = hlds__assertion__HeadVar__2__tmp_copy_2;
#line 175 "assertion.m"
                          hlds__assertion__HeadVar__1_1 = hlds__assertion__HeadVar__1__tmp_copy_1;
#line 175 "assertion.m"
                        }
#line 175 "assertion.m"
                        continue;
#line 175 "assertion.m"
                      }
#line 176 "assertion.m"
                    else
#line 177 "assertion.m"
                      {
#line 177 "assertion.m"
                        MR_Word hlds__assertion__CallVarB_12;

#line 177 "assertion.m"
                        {
#line 177 "assertion.m"
                          hlds__assertion__succeeded = hlds__assertion__commutative_var_ordering_2_6_p_0(hlds__assertion__P_5, hlds__assertion__Q_7, hlds__assertion__Ps_6, hlds__assertion__Qs_8, hlds__assertion__Vs_10, &hlds__assertion__CallVarB_12);
                        }
#line 177 "assertion.m"
                        if (hlds__assertion__succeeded)
#line 177 "assertion.m"
                          {
#line 178 "assertion.m"
                            {
#line 178 "assertion.m"
                              MR_Word base;
#line 178 "assertion.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 178 "assertion.m"
                              *hlds__assertion__CommutativeVars_11 = base;
#line 178 "assertion.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__assertion__V_9));
#line 178 "assertion.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__CallVarB_12));
#line 178 "assertion.m"
                            }
#line 178 "assertion.m"
                            hlds__assertion__succeeded = MR_TRUE;
#line 177 "assertion.m"
                          }
#line 177 "assertion.m"
                      }
#line 173 "assertion.m"
                  }
#line 173 "assertion.m"
              }
#line 173 "assertion.m"
          }
#line 173 "assertion.m"
        return hlds__assertion__succeeded;
#line 173 "assertion.m"
      }
#line 173 "assertion.m"
      break;
#line 173 "assertion.m"
    }
#line 170 "assertion.m"
}

#line 129 "assertion.m"
void MR_CALL 
hlds__assertion__normalise_goal_2_p_0(
#line 129 "assertion.m"
  MR_Word hlds__assertion__Goal0_3,
#line 129 "assertion.m"
  MR_Word * hlds__assertion__Goal_4)
#line 129 "assertion.m"
{
#line 686 "assertion.m"
  {
#line 686 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 686 "assertion.m"
    MR_Word hlds__assertion__GoalExpr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal0_3, (MR_Integer) 0)));
#line 686 "assertion.m"
    MR_Word hlds__assertion__GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal0_3, (MR_Integer) 1)));
#line 686 "assertion.m"
    MR_Word hlds__assertion__GoalExpr_7;

#line 688 "assertion.m"
    {
#line 688 "assertion.m"
      hlds__assertion__normalise_goal_expr_2_p_0(hlds__assertion__GoalExpr0_5, &hlds__assertion__GoalExpr_7);
    }
#line 689 "assertion.m"
    {
#line 689 "assertion.m"
      MR_Word base;
#line 689 "assertion.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 689 "assertion.m"
      *hlds__assertion__Goal_4 = base;
#line 689 "assertion.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__assertion__GoalExpr_7));
#line 689 "assertion.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__GoalInfo_6));
#line 689 "assertion.m"
    }
#line 686 "assertion.m"
  }
#line 129 "assertion.m"
}

#line 413 "assertion.m"
static MR_bool MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_5(
#line 413 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 413 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1)
#line 413 "assertion.m"
{
#line 413 "assertion.m"
  {
#line 413 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 413 "assertion.m"
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

#line 413 "assertion.m"
    {
#line 413 "assertion.m"
      return hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__predicate_call__414__1_1_p_0(((MR_Word) hlds__assertion__wrapper_arg_1));
    }
#line 413 "assertion.m"
    return hlds__assertion__succeeded;
#line 413 "assertion.m"
  }
#line 413 "assertion.m"
}

#line 410 "assertion.m"
static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_1(
#line 410 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 410 "assertion.m"
{
#line 410 "assertion.m"
  {
#line 410 "assertion.m"
    struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 410 "assertion.m"
    MR_builtin_longjmp((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__commit_0, 1);
#line 410 "assertion.m"
  }
#line 410 "assertion.m"
}

#line 410 "assertion.m"
static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_3(
#line 410 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 410 "assertion.m"
{
#line 410 "assertion.m"
  {
#line 410 "assertion.m"
    struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 410 "assertion.m"
    (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Call_34 = ((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__conv0_Call_34);
#line 410 "assertion.m"
    {
#line 410 "assertion.m"
      hlds__assertion__is_construction_equivalence_assertion_4_p_0_2(hlds__assertion__env_ptr);
#line 410 "assertion.m"
      return;
    }
#line 410 "assertion.m"
  }
#line 410 "assertion.m"
}

#line 410 "assertion.m"
static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_4(
#line 410 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 410 "assertion.m"
{
#line 410 "assertion.m"
  {
#line 410 "assertion.m"
    struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 413 "assertion.m"
    (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__P_42 = (MR_Word) &hlds__assertion_scalar_common_2[3];
#line 419 "assertion.m"
    (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_64_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 419 "assertion.m"
    {
#line 419 "assertion.m"
      mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeCtorInfo_40_67, (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__P_42, (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Unifications_41, &(hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_69_69);
    }
#line 8262 "hlds.assertion.c"
    (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeInfo_45_72 = (MR_Word) &hlds__assertion_scalar_common_1[4];
#line 419 "assertion.m"
    {
#line 419 "assertion.m"
      (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeInfo_45_72, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_64_64)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_69_69)));
    }
#line 419 "assertion.m"
    if ((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 419 "assertion.m"
      {
#line 419 "assertion.m"
        hlds__assertion__is_construction_equivalence_assertion_4_p_0_1(hlds__assertion__env_ptr);
#line 419 "assertion.m"
        return;
      }
#line 410 "assertion.m"
  }
#line 410 "assertion.m"
}

#line 410 "assertion.m"
static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_2(
#line 410 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 410 "assertion.m"
{
#line 410 "assertion.m"
  {
#line 410 "assertion.m"
    struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 410 "assertion.m"
    {
#line 411 "assertion.m"
      MR_Word hlds__assertion__V_40_40;
#line 411 "assertion.m"
      MR_Integer hlds__assertion__V_35_35;
#line 411 "assertion.m"
      MR_Word hlds__assertion__V_36_36;
#line 411 "assertion.m"
      MR_Word hlds__assertion__V_37_37;
#line 411 "assertion.m"
      MR_Word hlds__assertion__V_38_38;
#line 411 "assertion.m"
      MR_Word hlds__assertion__V_39_39;

#line 411 "assertion.m"
      (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Call_34, (MR_Integer) 0)));
#line 411 "assertion.m"
      hlds__assertion__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Call_34, (MR_Integer) 1)));
#line 411 "assertion.m"
      (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_61_61)) == (MR_mktag((MR_Integer) 2)));
#line 411 "assertion.m"
      if ((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 411 "assertion.m"
        {
#line 411 "assertion.m"
          {
#line 411 "assertion.m"
            (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_61_61, (MR_Integer) 0)));
#line 411 "assertion.m"
            hlds__assertion__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_61_61, (MR_Integer) 1)));
#line 411 "assertion.m"
            hlds__assertion__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_61_61, (MR_Integer) 2)));
#line 411 "assertion.m"
            hlds__assertion__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_61_61, (MR_Integer) 3)));
#line 411 "assertion.m"
            hlds__assertion__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_61_61, (MR_Integer) 4)));
#line 411 "assertion.m"
            hlds__assertion__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_61_61, (MR_Integer) 5)));
#line 411 "assertion.m"
          }
#line 410 "assertion.m"
          {
#line 411 "assertion.m"
            {
#line 411 "assertion.m"
              (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__PredId_8, (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_68_68);
            }
#line 410 "assertion.m"
            if ((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 412 "assertion.m"
              {
#line 412 "assertion.m"
                mercury__list__delete_3_p_1((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeCtorInfo_40_67, (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Goals_32, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Call_34)), &(hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Unifications_41, hlds__assertion__is_construction_equivalence_assertion_4_p_0_4, hlds__assertion__env_ptr);
              }
#line 410 "assertion.m"
          }
#line 411 "assertion.m"
        }
#line 410 "assertion.m"
    }
#line 410 "assertion.m"
  }
#line 410 "assertion.m"
}

#line 410 "assertion.m"
static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_6(
#line 410 "assertion.m"
  void * hlds__assertion__env_ptr_arg)
#line 410 "assertion.m"
{
#line 410 "assertion.m"
  {
#line 410 "assertion.m"
    struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

#line 410 "assertion.m"
    if (MR_builtin_setjmp((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__commit_0) == 0)
#line 410 "assertion.m"
      {
#line 8377 "hlds.assertion.c"
        (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeCtorInfo_40_67 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 410 "assertion.m"
        {
#line 410 "assertion.m"
          mercury__list__member_2_p_1((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeCtorInfo_40_67, &(hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__conv0_Call_34, (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Goals_32, hlds__assertion__is_construction_equivalence_assertion_4_p_0_3, hlds__assertion__env_ptr);
        }
#line 410 "assertion.m"
        (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = MR_FALSE;
#line 410 "assertion.m"
      }
#line 410 "assertion.m"
    else
#line 410 "assertion.m"
      (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = MR_TRUE;
#line 410 "assertion.m"
  }
#line 410 "assertion.m"
}

#line 123 "assertion.m"
MR_bool MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0(
#line 123 "assertion.m"
  MR_Word hlds__assertion__Module_5,
#line 123 "assertion.m"
  MR_Integer hlds__assertion__AssertId_6,
#line 123 "assertion.m"
  MR_Word hlds__assertion__ConsId_7,
#line 123 "assertion.m"
  MR_Word hlds__assertion__PredId_8)
#line 123 "assertion.m"
{
#line 123 "assertion.m"
  {
#line 123 "assertion.m"
    struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s hlds__assertion__env;

#line 123 "assertion.m"
    (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__PredId_8 = hlds__assertion__PredId_8;
#line 376 "assertion.m"
    {
#line 376 "assertion.m"
      MR_Word hlds__assertion__Goal_9;
#line 376 "assertion.m"
      MR_Word hlds__assertion__P_10;
#line 376 "assertion.m"
      MR_Word hlds__assertion__Q_11;
#line 391 "assertion.m"
      MR_Word hlds__assertion__GoalExpr_14;
#line 391 "assertion.m"
      MR_Word hlds__assertion__UnifyRHS_17;
#line 391 "assertion.m"
      MR_Word hlds__assertion__UnqualifiedSymName_21;
#line 391 "assertion.m"
      MR_Integer hlds__assertion__Arity_22;
#line 391 "assertion.m"
      MR_Word hlds__assertion__QualifiedSymName_26;
#line 391 "assertion.m"
      MR_Word hlds__assertion__V_28_28;
#line 391 "assertion.m"
      MR_Integer hlds__assertion__V_29_29;
#line 392 "assertion.m"
      MR_Word hlds__assertion__V_15_15;
#line 393 "assertion.m"
      MR_Word hlds__assertion__V_16_16;
#line 393 "assertion.m"
      MR_Word hlds__assertion__V_18_18;
#line 393 "assertion.m"
      MR_Word hlds__assertion__V_19_19;
#line 393 "assertion.m"
      MR_Word hlds__assertion__V_20_20;
#line 394 "assertion.m"
      MR_Word hlds__assertion__V_24_24;
#line 394 "assertion.m"
      MR_Word hlds__assertion__V_25_25;
#line 394 "assertion.m"
      MR_Word hlds__assertion___TypeCtorA_23;
#line 395 "assertion.m"
      MR_Word hlds__assertion___TypeCtorB_27;

#line 377 "assertion.m"
      {
#line 377 "assertion.m"
        hlds__assertion__assert_id_goal_3_p_0(hlds__assertion__Module_5, hlds__assertion__AssertId_6, &hlds__assertion__Goal_9);
      }
#line 378 "assertion.m"
      {
#line 378 "assertion.m"
        (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = hlds__assertion__goal_is_equivalence_3_p_0(hlds__assertion__Goal_9, &hlds__assertion__P_10, &hlds__assertion__Q_11);
      }
#line 376 "assertion.m"
      if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 376 "assertion.m"
        {
#line 392 "assertion.m"
          hlds__assertion__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_10, (MR_Integer) 0)));
#line 392 "assertion.m"
          hlds__assertion__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_10, (MR_Integer) 1)));
#line 393 "assertion.m"
          (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__assertion__GoalExpr_14)) == (MR_mktag((MR_Integer) 1)));
#line 393 "assertion.m"
          if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 393 "assertion.m"
            {
#line 393 "assertion.m"
              hlds__assertion__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_14, (MR_Integer) 0)));
#line 393 "assertion.m"
              hlds__assertion__UnifyRHS_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_14, (MR_Integer) 1)));
#line 393 "assertion.m"
              hlds__assertion__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_14, (MR_Integer) 2)));
#line 393 "assertion.m"
              hlds__assertion__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_14, (MR_Integer) 3)));
#line 393 "assertion.m"
              hlds__assertion__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_14, (MR_Integer) 4)));
#line 394 "assertion.m"
              (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__assertion__UnifyRHS_17)) == (MR_mktag((MR_Integer) 1)));
#line 394 "assertion.m"
              if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 394 "assertion.m"
                {
#line 394 "assertion.m"
                  hlds__assertion__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRHS_17, (MR_Integer) 0)));
#line 394 "assertion.m"
                  hlds__assertion__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRHS_17, (MR_Integer) 1)));
#line 394 "assertion.m"
                  hlds__assertion__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRHS_17, (MR_Integer) 2)));
#line 394 "assertion.m"
                  (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_28_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_28_28, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 394 "assertion.m"
                  if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 394 "assertion.m"
                    {
#line 394 "assertion.m"
                      hlds__assertion__UnqualifiedSymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_28_28, (MR_Integer) 1)));
#line 394 "assertion.m"
                      hlds__assertion__Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__assertion__V_28_28, (MR_Integer) 2)));
#line 394 "assertion.m"
                      hlds__assertion___TypeCtorA_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_28_28, (MR_Integer) 3)));
#line 395 "assertion.m"
                      (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__assertion__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 395 "assertion.m"
                      if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 395 "assertion.m"
                        {
#line 395 "assertion.m"
                          hlds__assertion__QualifiedSymName_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 1)));
#line 395 "assertion.m"
                          hlds__assertion__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 2)));
#line 395 "assertion.m"
                          hlds__assertion___TypeCtorB_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 3)));
#line 395 "assertion.m"
                          (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = (hlds__assertion__Arity_22 == hlds__assertion__V_29_29);
#line 391 "assertion.m"
                          if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 400 "assertion.m"
                            {
#line 400 "assertion.m"
                              (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(hlds__assertion__UnqualifiedSymName_21, hlds__assertion__QualifiedSymName_26);
                            }
#line 395 "assertion.m"
                        }
#line 394 "assertion.m"
                    }
#line 394 "assertion.m"
                }
#line 393 "assertion.m"
            }
#line 381 "assertion.m"
          if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 420 "assertion.m"
            {
#line 409 "assertion.m"
              MR_Word hlds__assertion__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 0)));
#line 409 "assertion.m"
              MR_Word hlds__assertion__V_60_60;
#line 409 "assertion.m"
              MR_Word hlds__assertion__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 1)));

#line 409 "assertion.m"
              (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_59_59)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_59_59, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 409 "assertion.m"
              if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 409 "assertion.m"
                {
#line 409 "assertion.m"
                  hlds__assertion__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_59_59, (MR_Integer) 1)));
#line 409 "assertion.m"
                  (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Goals_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_59_59, (MR_Integer) 2)));
#line 409 "assertion.m"
                  (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = (hlds__assertion__V_60_60 == (MR_Integer) 0);
#line 409 "assertion.m"
                }
#line 420 "assertion.m"
              if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 410 "assertion.m"
                {
#line 410 "assertion.m"
                  {
#line 410 "assertion.m"
                    hlds__assertion__is_construction_equivalence_assertion_4_p_0_6(&hlds__assertion__env);
                  }
#line 410 "assertion.m"
                }
#line 420 "assertion.m"
              else
#line 421 "assertion.m"
                {
#line 421 "assertion.m"
                  MR_Word hlds__assertion__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 0)));
#line 421 "assertion.m"
                  MR_Word hlds__assertion__V_70_70;
#line 421 "assertion.m"
                  MR_Word hlds__assertion__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 1)));
#line 421 "assertion.m"
                  MR_Integer hlds__assertion__V_53_53;
#line 421 "assertion.m"
                  MR_Word hlds__assertion__V_54_54;
#line 421 "assertion.m"
                  MR_Word hlds__assertion__V_55_55;
#line 421 "assertion.m"
                  MR_Word hlds__assertion__V_56_56;
#line 421 "assertion.m"
                  MR_Word hlds__assertion__V_57_57;

#line 421 "assertion.m"
                  (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_65_65)) == (MR_mktag((MR_Integer) 2)));
#line 421 "assertion.m"
                  if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 421 "assertion.m"
                    {
#line 421 "assertion.m"
                      hlds__assertion__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_65_65, (MR_Integer) 0)));
#line 421 "assertion.m"
                      hlds__assertion__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__V_65_65, (MR_Integer) 1)));
#line 421 "assertion.m"
                      hlds__assertion__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_65_65, (MR_Integer) 2)));
#line 421 "assertion.m"
                      hlds__assertion__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_65_65, (MR_Integer) 3)));
#line 421 "assertion.m"
                      hlds__assertion__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_65_65, (MR_Integer) 4)));
#line 421 "assertion.m"
                      hlds__assertion__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_65_65, (MR_Integer) 5)));
#line 421 "assertion.m"
                      {
#line 421 "assertion.m"
                        return (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__PredId_8, hlds__assertion__V_70_70);
                      }
#line 421 "assertion.m"
                    }
#line 421 "assertion.m"
                }
#line 420 "assertion.m"
            }
#line 381 "assertion.m"
          else
#line 382 "assertion.m"
            {
#line 382 "assertion.m"
              MR_Word hlds__assertion__GoalExpr_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 0)));
#line 382 "assertion.m"
              MR_Word hlds__assertion__UnifyRHS_79;
#line 382 "assertion.m"
              MR_Word hlds__assertion__UnqualifiedSymName_83;
#line 382 "assertion.m"
              MR_Integer hlds__assertion__Arity_84;
#line 382 "assertion.m"
              MR_Word hlds__assertion__QualifiedSymName_88;
#line 382 "assertion.m"
              MR_Word hlds__assertion__V_90_90;
#line 382 "assertion.m"
              MR_Integer hlds__assertion__V_91_91;
#line 392 "assertion.m"
              MR_Word hlds__assertion__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 1)));
#line 393 "assertion.m"
              MR_Word hlds__assertion__V_78_78;
#line 393 "assertion.m"
              MR_Word hlds__assertion__V_80_80;
#line 393 "assertion.m"
              MR_Word hlds__assertion__V_81_81;
#line 393 "assertion.m"
              MR_Word hlds__assertion__V_82_82;
#line 394 "assertion.m"
              MR_Word hlds__assertion__V_86_86;
#line 394 "assertion.m"
              MR_Word hlds__assertion__V_87_87;
#line 394 "assertion.m"
              MR_Word hlds__assertion___TypeCtorA_85;
#line 395 "assertion.m"
              MR_Word hlds__assertion___TypeCtorB_89;

#line 393 "assertion.m"
              (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__assertion__GoalExpr_76)) == (MR_mktag((MR_Integer) 1)));
#line 393 "assertion.m"
              if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 393 "assertion.m"
                {
#line 393 "assertion.m"
                  hlds__assertion__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_76, (MR_Integer) 0)));
#line 393 "assertion.m"
                  hlds__assertion__UnifyRHS_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_76, (MR_Integer) 1)));
#line 393 "assertion.m"
                  hlds__assertion__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_76, (MR_Integer) 2)));
#line 393 "assertion.m"
                  hlds__assertion__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_76, (MR_Integer) 3)));
#line 393 "assertion.m"
                  hlds__assertion__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_76, (MR_Integer) 4)));
#line 394 "assertion.m"
                  (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__assertion__UnifyRHS_79)) == (MR_mktag((MR_Integer) 1)));
#line 394 "assertion.m"
                  if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 394 "assertion.m"
                    {
#line 394 "assertion.m"
                      hlds__assertion__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRHS_79, (MR_Integer) 0)));
#line 394 "assertion.m"
                      hlds__assertion__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRHS_79, (MR_Integer) 1)));
#line 394 "assertion.m"
                      hlds__assertion__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRHS_79, (MR_Integer) 2)));
#line 394 "assertion.m"
                      (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_90_90)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_90_90, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 394 "assertion.m"
                      if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 394 "assertion.m"
                        {
#line 394 "assertion.m"
                          hlds__assertion__UnqualifiedSymName_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_90_90, (MR_Integer) 1)));
#line 394 "assertion.m"
                          hlds__assertion__Arity_84 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__assertion__V_90_90, (MR_Integer) 2)));
#line 394 "assertion.m"
                          hlds__assertion___TypeCtorA_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_90_90, (MR_Integer) 3)));
#line 395 "assertion.m"
                          (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__assertion__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 395 "assertion.m"
                          if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 395 "assertion.m"
                            {
#line 395 "assertion.m"
                              hlds__assertion__QualifiedSymName_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 1)));
#line 395 "assertion.m"
                              hlds__assertion__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 2)));
#line 395 "assertion.m"
                              hlds__assertion___TypeCtorB_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 3)));
#line 395 "assertion.m"
                              (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = (hlds__assertion__Arity_84 == hlds__assertion__V_91_91);
#line 382 "assertion.m"
                              if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 382 "assertion.m"
                                {
#line 400 "assertion.m"
                                  {
#line 400 "assertion.m"
                                    (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(hlds__assertion__UnqualifiedSymName_83, hlds__assertion__QualifiedSymName_88);
                                  }
#line 382 "assertion.m"
                                  if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
#line 383 "assertion.m"
                                    {
#line 383 "assertion.m"
                                      return (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = hlds__assertion__predicate_call_2_p_0(hlds__assertion__P_10, (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__PredId_8);
                                    }
#line 382 "assertion.m"
                                }
#line 395 "assertion.m"
                            }
#line 394 "assertion.m"
                        }
#line 394 "assertion.m"
                    }
#line 393 "assertion.m"
                }
#line 382 "assertion.m"
            }
#line 376 "assertion.m"
        }
#line 376 "assertion.m"
      return (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded;
#line 376 "assertion.m"
    }
#line 123 "assertion.m"
  }
#line 123 "assertion.m"
}

#line 110 "assertion.m"
MR_bool MR_CALL 
hlds__assertion__is_update_assertion_5_p_0(
#line 110 "assertion.m"
  MR_Word hlds__assertion__Module_6,
#line 110 "assertion.m"
  MR_Integer hlds__assertion__AssertId_7,
#line 110 "assertion.m"
  MR_Word hlds__assertion___PredId_8,
#line 110 "assertion.m"
  MR_Word hlds__assertion__CallVars_9,
#line 110 "assertion.m"
  MR_Word * hlds__assertion__HeadVar__5_5)
#line 110 "assertion.m"
{
#line 297 "assertion.m"
  {
#line 297 "assertion.m"
    MR_bool hlds__assertion__succeeded;

#line 297 "assertion.m"
    {
#line 297 "assertion.m"
      return hlds__assertion__succeeded = hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0(hlds__assertion__Module_6, hlds__assertion__AssertId_7, hlds__assertion__CallVars_9, hlds__assertion__HeadVar__5_5);
    }
#line 297 "assertion.m"
    return hlds__assertion__succeeded;
#line 297 "assertion.m"
  }
#line 110 "assertion.m"
}

#line 87 "assertion.m"
MR_bool MR_CALL 
hlds__assertion__is_associativity_assertion_5_p_0(
#line 87 "assertion.m"
  MR_Word hlds__assertion__Module_6,
#line 87 "assertion.m"
  MR_Integer hlds__assertion__AssertId_7,
#line 87 "assertion.m"
  MR_Word hlds__assertion__CallVars_8,
#line 87 "assertion.m"
  MR_Word * hlds__assertion__AssociativeVars_9,
#line 87 "assertion.m"
  MR_Word * hlds__assertion__OutputVar_10)
#line 87 "assertion.m"
{
#line 200 "assertion.m"
  {
#line 200 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 200 "assertion.m"
    MR_Word hlds__assertion__GoalInfo_12;
#line 200 "assertion.m"
    MR_Word hlds__assertion__P_13;
#line 200 "assertion.m"
    MR_Word hlds__assertion__Q_14;
#line 200 "assertion.m"
    MR_Word hlds__assertion__UniversiallyQuantifiedVars_15;
#line 200 "assertion.m"
    MR_Word hlds__assertion__PCalls_16;
#line 200 "assertion.m"
    MR_Word hlds__assertion__QCalls_17;
#line 200 "assertion.m"
    MR_Word hlds__assertion__V_18_18;
#line 200 "assertion.m"
    MR_Word hlds__assertion__Goal_23;
#line 200 "assertion.m"
    MR_Word hlds__assertion__V_25_25;
#line 200 "assertion.m"
    MR_Word hlds__assertion__V_26_26;
#line 200 "assertion.m"
    MR_Word hlds__assertion__GoalExpr0_29;
#line 200 "assertion.m"
    MR_Word hlds__assertion__Goal_36;
#line 200 "assertion.m"
    MR_Word hlds__assertion__V_38_38;
#line 200 "assertion.m"
    MR_Word hlds__assertion__V_39_39;
#line 200 "assertion.m"
    MR_Word hlds__assertion__GoalExpr0_42;
#line 201 "assertion.m"
    MR_Word hlds__assertion__GoalExpr_11;
#line 436 "assertion.m"
    MR_Word hlds__assertion___Context_30;
#line 442 "assertion.m"
    MR_Word hlds__assertion__Goal1_32;
#line 438 "assertion.m"
    MR_Word hlds__assertion__Reason_31;
#line 439 "assertion.m"
    MR_Word hlds__assertion__V_33_33;
#line 431 "assertion.m"
    MR_Word hlds__assertion__V_24_24;
#line 436 "assertion.m"
    MR_Word hlds__assertion___Context_43;
#line 442 "assertion.m"
    MR_Word hlds__assertion__Goal1_45;
#line 438 "assertion.m"
    MR_Word hlds__assertion__Reason_44;
#line 439 "assertion.m"
    MR_Word hlds__assertion__V_46_46;
#line 431 "assertion.m"
    MR_Word hlds__assertion__V_37_37;
#line 209 "assertion.m"
    MR_Word hlds__assertion__V_20_20;

#line 201 "assertion.m"
    {
#line 201 "assertion.m"
      hlds__assertion__assert_id_goal_3_p_0(hlds__assertion__Module_6, hlds__assertion__AssertId_7, &hlds__assertion__V_18_18);
    }
#line 201 "assertion.m"
    hlds__assertion__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_18_18, (MR_Integer) 0)));
#line 201 "assertion.m"
    hlds__assertion__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_18_18, (MR_Integer) 1)));
#line 202 "assertion.m"
    {
#line 202 "assertion.m"
      hlds__assertion__succeeded = hlds__assertion__goal_is_equivalence_3_p_0(hlds__assertion__V_18_18, &hlds__assertion__P_13, &hlds__assertion__Q_14);
    }
#line 200 "assertion.m"
    if (hlds__assertion__succeeded)
#line 200 "assertion.m"
      {
#line 204 "assertion.m"
        {
#line 204 "assertion.m"
          hlds__assertion__UniversiallyQuantifiedVars_15 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__assertion__GoalInfo_12);
        }
#line 436 "assertion.m"
        hlds__assertion__GoalExpr0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_13, (MR_Integer) 0)));
#line 436 "assertion.m"
        hlds__assertion___Context_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_13, (MR_Integer) 1)));
#line 438 "assertion.m"
        hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExpr0_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_29, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 438 "assertion.m"
        if (hlds__assertion__succeeded)
#line 438 "assertion.m"
          {
#line 438 "assertion.m"
            hlds__assertion__Reason_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_29, (MR_Integer) 1)));
#line 438 "assertion.m"
            hlds__assertion__Goal1_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_29, (MR_Integer) 2)));
#line 439 "assertion.m"
            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Reason_31)) == (MR_mktag((MR_Integer) 0)));
#line 439 "assertion.m"
            if (hlds__assertion__succeeded)
#line 439 "assertion.m"
              hlds__assertion__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Reason_31, (MR_Integer) 0)));
#line 438 "assertion.m"
          }
#line 442 "assertion.m"
        if (hlds__assertion__succeeded)
#line 441 "assertion.m"
          hlds__assertion__Goal_23 = hlds__assertion__Goal1_32;
#line 442 "assertion.m"
        else
#line 443 "assertion.m"
          hlds__assertion__Goal_23 = hlds__assertion__P_13;
#line 431 "assertion.m"
        hlds__assertion__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_23, (MR_Integer) 0)));
#line 431 "assertion.m"
        hlds__assertion__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_23, (MR_Integer) 1)));
#line 431 "assertion.m"
        hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_25_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_25_25, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 431 "assertion.m"
        if (hlds__assertion__succeeded)
#line 431 "assertion.m"
          {
#line 431 "assertion.m"
            hlds__assertion__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_25_25, (MR_Integer) 1)));
#line 431 "assertion.m"
            hlds__assertion__PCalls_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_25_25, (MR_Integer) 2)));
#line 431 "assertion.m"
            hlds__assertion__succeeded = (hlds__assertion__V_26_26 == (MR_Integer) 0);
#line 200 "assertion.m"
            if (hlds__assertion__succeeded)
#line 200 "assertion.m"
              {
#line 436 "assertion.m"
                hlds__assertion__GoalExpr0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_14, (MR_Integer) 0)));
#line 436 "assertion.m"
                hlds__assertion___Context_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_14, (MR_Integer) 1)));
#line 438 "assertion.m"
                hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExpr0_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_42, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 438 "assertion.m"
                if (hlds__assertion__succeeded)
#line 438 "assertion.m"
                  {
#line 438 "assertion.m"
                    hlds__assertion__Reason_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_42, (MR_Integer) 1)));
#line 438 "assertion.m"
                    hlds__assertion__Goal1_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_42, (MR_Integer) 2)));
#line 439 "assertion.m"
                    hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Reason_44)) == (MR_mktag((MR_Integer) 0)));
#line 439 "assertion.m"
                    if (hlds__assertion__succeeded)
#line 439 "assertion.m"
                      hlds__assertion__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Reason_44, (MR_Integer) 0)));
#line 438 "assertion.m"
                  }
#line 442 "assertion.m"
                if (hlds__assertion__succeeded)
#line 441 "assertion.m"
                  hlds__assertion__Goal_36 = hlds__assertion__Goal1_45;
#line 442 "assertion.m"
                else
#line 443 "assertion.m"
                  hlds__assertion__Goal_36 = hlds__assertion__Q_14;
#line 431 "assertion.m"
                hlds__assertion__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_36, (MR_Integer) 0)));
#line 431 "assertion.m"
                hlds__assertion__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_36, (MR_Integer) 1)));
#line 431 "assertion.m"
                hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_38_38)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_38_38, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 431 "assertion.m"
                if (hlds__assertion__succeeded)
#line 431 "assertion.m"
                  {
#line 431 "assertion.m"
                    hlds__assertion__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_38_38, (MR_Integer) 1)));
#line 431 "assertion.m"
                    hlds__assertion__QCalls_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_38_38, (MR_Integer) 2)));
#line 431 "assertion.m"
                    hlds__assertion__succeeded = (hlds__assertion__V_39_39 == (MR_Integer) 0);
#line 200 "assertion.m"
                    if (hlds__assertion__succeeded)
#line 200 "assertion.m"
                      {
#line 209 "assertion.m"
                        {
#line 209 "assertion.m"
                          hlds__assertion__succeeded = hlds__assertion__associative_5_p_0(hlds__assertion__PCalls_16, hlds__assertion__QCalls_17, hlds__assertion__UniversiallyQuantifiedVars_15, hlds__assertion__CallVars_8, &hlds__assertion__V_20_20);
                        }
#line 209 "assertion.m"
                        if (hlds__assertion__succeeded)
#line 209 "assertion.m"
                          {
#line 210 "assertion.m"
                            *hlds__assertion__AssociativeVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_20_20, (MR_Integer) 0)));
#line 210 "assertion.m"
                            *hlds__assertion__OutputVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_20_20, (MR_Integer) 1)));
#line 210 "assertion.m"
                            hlds__assertion__succeeded = MR_TRUE;
#line 209 "assertion.m"
                          }
#line 200 "assertion.m"
                      }
#line 431 "assertion.m"
                  }
#line 200 "assertion.m"
              }
#line 431 "assertion.m"
          }
#line 200 "assertion.m"
      }
#line 200 "assertion.m"
    return hlds__assertion__succeeded;
#line 200 "assertion.m"
  }
#line 87 "assertion.m"
}

#line 58 "assertion.m"
MR_bool MR_CALL 
hlds__assertion__is_commutativity_assertion_4_p_0(
#line 58 "assertion.m"
  MR_Word hlds__assertion__Module_5,
#line 58 "assertion.m"
  MR_Integer hlds__assertion__AssertId_6,
#line 58 "assertion.m"
  MR_Word hlds__assertion__CallVars_7,
#line 58 "assertion.m"
  MR_Word * hlds__assertion__CommutativeVars_8)
#line 58 "assertion.m"
{
#line 154 "assertion.m"
  {
#line 154 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 154 "assertion.m"
    MR_Word hlds__assertion__Goal_9;
#line 154 "assertion.m"
    MR_Word hlds__assertion__P_10;
#line 154 "assertion.m"
    MR_Word hlds__assertion__Q_11;
#line 154 "assertion.m"
    MR_Word hlds__assertion__PredId_12;
#line 154 "assertion.m"
    MR_Word hlds__assertion__VarsP_14;
#line 154 "assertion.m"
    MR_Word hlds__assertion__VarsQ_20;
#line 154 "assertion.m"
    MR_Word hlds__assertion__V_25_25;
#line 154 "assertion.m"
    MR_Word hlds__assertion__V_26_26;
#line 154 "assertion.m"
    MR_Word hlds__assertion__V_27_27;
#line 157 "assertion.m"
    MR_Word hlds__assertion__V_18_18;
#line 157 "assertion.m"
    MR_Integer hlds__assertion__V_13_13;
#line 157 "assertion.m"
    MR_Word hlds__assertion__V_15_15;
#line 157 "assertion.m"
    MR_Word hlds__assertion__V_16_16;
#line 157 "assertion.m"
    MR_Word hlds__assertion__V_17_17;
#line 158 "assertion.m"
    MR_Word hlds__assertion__V_24_24;
#line 158 "assertion.m"
    MR_Integer hlds__assertion__V_19_19;
#line 158 "assertion.m"
    MR_Word hlds__assertion__V_21_21;
#line 158 "assertion.m"
    MR_Word hlds__assertion__V_22_22;
#line 158 "assertion.m"
    MR_Word hlds__assertion__V_23_23;

#line 155 "assertion.m"
    {
#line 155 "assertion.m"
      hlds__assertion__assert_id_goal_3_p_0(hlds__assertion__Module_5, hlds__assertion__AssertId_6, &hlds__assertion__Goal_9);
    }
#line 156 "assertion.m"
    {
#line 156 "assertion.m"
      hlds__assertion__succeeded = hlds__assertion__goal_is_equivalence_3_p_0(hlds__assertion__Goal_9, &hlds__assertion__P_10, &hlds__assertion__Q_11);
    }
#line 154 "assertion.m"
    if (hlds__assertion__succeeded)
#line 154 "assertion.m"
      {
#line 157 "assertion.m"
        hlds__assertion__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_10, (MR_Integer) 0)));
#line 157 "assertion.m"
        hlds__assertion__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_10, (MR_Integer) 1)));
#line 157 "assertion.m"
        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_25_25)) == (MR_mktag((MR_Integer) 2)));
#line 157 "assertion.m"
        if (hlds__assertion__succeeded)
#line 157 "assertion.m"
          {
#line 157 "assertion.m"
            hlds__assertion__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_25_25, (MR_Integer) 0)));
#line 157 "assertion.m"
            hlds__assertion__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__V_25_25, (MR_Integer) 1)));
#line 157 "assertion.m"
            hlds__assertion__VarsP_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_25_25, (MR_Integer) 2)));
#line 157 "assertion.m"
            hlds__assertion__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_25_25, (MR_Integer) 3)));
#line 157 "assertion.m"
            hlds__assertion__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_25_25, (MR_Integer) 4)));
#line 157 "assertion.m"
            hlds__assertion__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_25_25, (MR_Integer) 5)));
#line 158 "assertion.m"
            hlds__assertion__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 0)));
#line 158 "assertion.m"
            hlds__assertion__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 1)));
#line 158 "assertion.m"
            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_26_26)) == (MR_mktag((MR_Integer) 2)));
#line 158 "assertion.m"
            if (hlds__assertion__succeeded)
#line 158 "assertion.m"
              {
#line 158 "assertion.m"
                hlds__assertion__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_26_26, (MR_Integer) 0)));
#line 158 "assertion.m"
                hlds__assertion__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__V_26_26, (MR_Integer) 1)));
#line 158 "assertion.m"
                hlds__assertion__VarsQ_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_26_26, (MR_Integer) 2)));
#line 158 "assertion.m"
                hlds__assertion__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_26_26, (MR_Integer) 3)));
#line 158 "assertion.m"
                hlds__assertion__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_26_26, (MR_Integer) 4)));
#line 158 "assertion.m"
                hlds__assertion__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_26_26, (MR_Integer) 5)));
#line 158 "assertion.m"
                {
#line 158 "assertion.m"
                  hlds__assertion__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__assertion__PredId_12, hlds__assertion__V_27_27);
                }
#line 154 "assertion.m"
                if (hlds__assertion__succeeded)
#line 159 "assertion.m"
                  {
#line 159 "assertion.m"
                    return hlds__assertion__succeeded = hlds__assertion__commutative_var_ordering_4_p_0(hlds__assertion__VarsP_14, hlds__assertion__VarsQ_20, hlds__assertion__CallVars_7, hlds__assertion__CommutativeVars_8);
                  }
#line 158 "assertion.m"
              }
#line 157 "assertion.m"
          }
#line 154 "assertion.m"
      }
#line 154 "assertion.m"
    return hlds__assertion__succeeded;
#line 154 "assertion.m"
  }
#line 58 "assertion.m"
}

#line 664 "assertion.m"
static void MR_CALL 
hlds__assertion__record_preds_used_in_4_p_0_1(
#line 664 "assertion.m"
  MR_Box hlds__assertion__closure_arg,
#line 664 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_1,
#line 664 "assertion.m"
  MR_Box hlds__assertion__wrapper_arg_2,
#line 664 "assertion.m"
  MR_Box * hlds__assertion__wrapper_arg_3)
#line 664 "assertion.m"
{
#line 664 "assertion.m"
  {
#line 664 "assertion.m"
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;
#line 664 "assertion.m"
    MR_Word hlds__assertion__conv0_STATE_VARIABLE_Module_13;

#line 664 "assertion.m"
    {
#line 664 "assertion.m"
      hlds__assertion__update_pred_info_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 3))), ((MR_Word) hlds__assertion__wrapper_arg_1), ((MR_Word) hlds__assertion__wrapper_arg_2), &hlds__assertion__conv0_STATE_VARIABLE_Module_13);
    }
#line 664 "assertion.m"
    *hlds__assertion__wrapper_arg_3 = ((MR_Box) (hlds__assertion__conv0_STATE_VARIABLE_Module_13));
#line 664 "assertion.m"
  }
#line 664 "assertion.m"
}

#line 39 "assertion.m"
void MR_CALL 
hlds__assertion__record_preds_used_in_4_p_0(
#line 39 "assertion.m"
  MR_Word hlds__assertion__Goal_5,
#line 39 "assertion.m"
  MR_Integer hlds__assertion__AssertId_6,
#line 39 "assertion.m"
  MR_Word hlds__assertion__STATE_VARIABLE_Module_0_9,
#line 39 "assertion.m"
  MR_Word * hlds__assertion__STATE_VARIABLE_Module_10)
#line 39 "assertion.m"
{
#line 656 "assertion.m"
  {
#line 656 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 656 "assertion.m"
    MR_Word hlds__assertion__PredIds_8;
#line 656 "assertion.m"
    MR_Word hlds__assertion__V_15_15;
#line 659 "assertion.m"
    MR_Word hlds__assertion__V_11_11;
#line 664 "assertion.m"
    MR_Box hlds__assertion__conv1_STATE_VARIABLE_Module_10;

#line 657 "assertion.m"
    {
#line 657 "assertion.m"
      hlds__goal_util__predids_from_goal_2_p_0(hlds__assertion__Goal_5, &hlds__assertion__PredIds_8);
    }
#line 659 "assertion.m"
    {
#line 659 "assertion.m"
      hlds__assertion__V_11_11 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
#line 659 "assertion.m"
    {
#line 659 "assertion.m"
      hlds__assertion__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (hlds__assertion__V_11_11)), hlds__assertion__PredIds_8);
    }
#line 661 "assertion.m"
    if (hlds__assertion__succeeded)
#line 660 "assertion.m"
      {
#line 660 "assertion.m"
        {
#line 660 "assertion.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.assertion", (MR_String) "predicate \140hlds.assertion.record_preds_used_in\'/4", (MR_String) "invalid pred_id");
#line 660 "assertion.m"
          return;
        }
#line 660 "assertion.m"
      }
#line 661 "assertion.m"
    else
#line 662 "assertion.m"
      {
#line 662 "assertion.m"
      }
#line 664 "assertion.m"
    {
#line 664 "assertion.m"
      hlds__assertion__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 664 "assertion.m"
      MR_hl_field(MR_mktag(0), hlds__assertion__V_15_15, 0) = ((MR_Box) (&hlds__assertion_scalar_common_3[0]));
#line 664 "assertion.m"
      MR_hl_field(MR_mktag(0), hlds__assertion__V_15_15, 1) = ((MR_Box) (hlds__assertion__record_preds_used_in_4_p_0_1));
#line 664 "assertion.m"
      MR_hl_field(MR_mktag(0), hlds__assertion__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 664 "assertion.m"
      MR_hl_field(MR_mktag(0), hlds__assertion__V_15_15, 3) = ((MR_Box) (hlds__assertion__AssertId_6));
#line 664 "assertion.m"
    }
#line 664 "assertion.m"
    {
#line 664 "assertion.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, hlds__assertion__V_15_15, hlds__assertion__PredIds_8, ((MR_Box) (hlds__assertion__STATE_VARIABLE_Module_0_9)), &hlds__assertion__conv1_STATE_VARIABLE_Module_10);
    }
#line 664 "assertion.m"
    *hlds__assertion__STATE_VARIABLE_Module_10 = ((MR_Word) hlds__assertion__conv1_STATE_VARIABLE_Module_10);
#line 656 "assertion.m"
  }
#line 39 "assertion.m"
}

#line 34 "assertion.m"
void MR_CALL 
hlds__assertion__assert_id_goal_3_p_0(
#line 34 "assertion.m"
  MR_Word hlds__assertion__Module_4,
#line 34 "assertion.m"
  MR_Integer hlds__assertion__AssertId_5,
#line 34 "assertion.m"
  MR_Word * hlds__assertion__Goal_6)
#line 34 "assertion.m"
{
#line 449 "assertion.m"
  {
#line 449 "assertion.m"
    MR_bool hlds__assertion__succeeded;
#line 449 "assertion.m"
    MR_Word hlds__assertion__AssertTable_7;
#line 449 "assertion.m"
    MR_Word hlds__assertion__PredId_8;
#line 449 "assertion.m"
    MR_Word hlds__assertion__PredInfo_9;
#line 449 "assertion.m"
    MR_Word hlds__assertion__ClausesInfo_10;
#line 449 "assertion.m"
    MR_Word hlds__assertion__ClausesRep_11;
#line 449 "assertion.m"
    MR_Word hlds__assertion__Clauses_13;
#line 454 "assertion.m"
    MR_Word hlds__assertion___ItemNumbers_12;

#line 450 "assertion.m"
    {
#line 450 "assertion.m"
      hlds__hlds_module__module_info_get_assertion_table_2_p_0(hlds__assertion__Module_4, &hlds__assertion__AssertTable_7);
    }
#line 451 "assertion.m"
    {
#line 451 "assertion.m"
      hlds__hlds_data__assertion_table_lookup_3_p_0(hlds__assertion__AssertTable_7, hlds__assertion__AssertId_5, &hlds__assertion__PredId_8);
    }
#line 452 "assertion.m"
    {
#line 452 "assertion.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__assertion__Module_4, hlds__assertion__PredId_8, &hlds__assertion__PredInfo_9);
    }
#line 453 "assertion.m"
    {
#line 453 "assertion.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__assertion__PredInfo_9, &hlds__assertion__ClausesInfo_10);
    }
#line 454 "assertion.m"
    {
#line 454 "assertion.m"
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(hlds__assertion__ClausesInfo_10, &hlds__assertion__ClausesRep_11, &hlds__assertion___ItemNumbers_12);
    }
#line 455 "assertion.m"
    {
#line 455 "assertion.m"
      hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(hlds__assertion__ClausesRep_11, &hlds__assertion__Clauses_13);
    }
#line 460 "assertion.m"
    if ((hlds__assertion__Clauses_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 463 "assertion.m"
      {
#line 464 "assertion.m"
        {
#line 464 "assertion.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.assertion", (MR_String) "predicate \140hlds.assertion.assert_id_goal\'/3", (MR_String) "goal is not an assertion");
#line 464 "assertion.m"
          return;
        }
#line 463 "assertion.m"
      }
#line 460 "assertion.m"
    else
#line 460 "assertion.m"
      {
#line 460 "assertion.m"
        MR_Word hlds__assertion__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Clauses_13, (MR_Integer) 1)));
#line 460 "assertion.m"
        MR_Word hlds__assertion__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Clauses_13, (MR_Integer) 0)));

#line 460 "assertion.m"
        if ((hlds__assertion__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 457 "assertion.m"
          {
#line 457 "assertion.m"
            MR_Word hlds__assertion__Goal0_15;
#line 457 "assertion.m"
            MR_Word hlds__assertion__GoalExpr0_34;
#line 457 "assertion.m"
            MR_Word hlds__assertion__GoalInfo_35;
#line 457 "assertion.m"
            MR_Word hlds__assertion__GoalExpr_36;

#line 458 "assertion.m"
            {
#line 458 "assertion.m"
              hlds__assertion__Goal0_15 = hlds__hlds_clauses__clause_body_1_f_0(hlds__assertion__V_31_31);
            }
#line 687 "assertion.m"
            hlds__assertion__GoalExpr0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal0_15, (MR_Integer) 0)));
#line 687 "assertion.m"
            hlds__assertion__GoalInfo_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal0_15, (MR_Integer) 1)));
#line 688 "assertion.m"
            {
#line 688 "assertion.m"
              hlds__assertion__normalise_goal_expr_2_p_0(hlds__assertion__GoalExpr0_34, &hlds__assertion__GoalExpr_36);
            }
#line 689 "assertion.m"
            {
#line 689 "assertion.m"
              MR_Word base;
#line 689 "assertion.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 689 "assertion.m"
              *hlds__assertion__Goal_6 = base;
#line 689 "assertion.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__assertion__GoalExpr_36));
#line 689 "assertion.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__GoalInfo_35));
#line 689 "assertion.m"
            }
#line 457 "assertion.m"
          }
#line 460 "assertion.m"
        else
#line 463 "assertion.m"
          {
#line 464 "assertion.m"
            {
#line 464 "assertion.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.assertion", (MR_String) "predicate \140hlds.assertion.assert_id_goal\'/3", (MR_String) "goal is not an assertion");
#line 464 "assertion.m"
              return;
            }
#line 463 "assertion.m"
          }
#line 460 "assertion.m"
      }
#line 449 "assertion.m"
  }
#line 34 "assertion.m"
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
