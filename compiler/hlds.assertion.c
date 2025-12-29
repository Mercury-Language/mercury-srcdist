/*
** Automatically generated from `assertion.m'
** by the Mercury compiler,
** version rotd-2025-12-29
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module hlds.assertion.
// :- implementation.

/*
INIT mercury__hlds__assertion__init
ENDINIT
*/

#include "hlds.assertion.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "term.mih"
#include "term_context.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_refs.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0_s {
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__QCalls_7;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__UniversiallyQuantifiedVars_8;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__CallVars_9;
  MR_Word * hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__StateVars_10;
  MR_Cont hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__cont;
  void * hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__cont_env_ptr;
  MR_bool hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_61_61;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_62_62;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_63_63;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_76_76;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_77_77;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_78_78;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_79_79;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_80_80;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_81_81;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_82_82;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_84_84;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_86_86;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__LHSCalls_11;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__RHSCalls_12;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__PredId_13;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__SA_14;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__PairsL_15;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Vs_16;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__SB_17;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__PairsR_18;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Pairs0_20;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Pairs_23;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__S0_24;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__S_25;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__AssocList_26;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__StateA_29;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__StateB_31;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_32;
  MR_Integer hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_34;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_35;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_36;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_37;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_38;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_39;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_40;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_41;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_42;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_43;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_44;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_45;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_47;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_48;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_49;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_50;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_52;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_53;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_64;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_65;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_66;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_67;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_68;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_69;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_70;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_71;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_72;
  MR_Word hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_73;
};

struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s {
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__PredId_8;
  MR_bool hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded;
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Goals_30;
  jmp_buf hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__commit_0;
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeCtorInfo_40_52;
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeInfo_45_57;
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Call_32;
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Unifications_39;
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__P_40;
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_49;
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_50;
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_53;
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_54;
  MR_Box hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__conv0_Call_32;
};

struct hlds__assertion__predicate_call_2_p_0_env_0_s {
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__PredId_4;
  MR_bool hlds__assertion__predicate_call_2_p_0_env_0__succeeded;
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__Goals_5;
  jmp_buf hlds__assertion__predicate_call_2_p_0_env_0__commit_0;
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__TypeCtorInfo_40_40;
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__TypeInfo_45_45;
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__Call_7;
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__Unifications_14;
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__P_15;
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__Var_34;
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__Var_37;
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__Var_41;
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__Var_42;
  MR_Box hlds__assertion__predicate_call_2_p_0_env_0__conv0_Call_7;
};

struct hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_0_s {
  MR_Box * hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__wrapper_arg_1;
  MR_Cont hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__cont;
  void * hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__cont_env_ptr;
  MR_Word hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__conv0_StateVars_10;
};

struct hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0_s {
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__PCalls_6;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__QCalls_7;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__UniversiallyQuantifiedVars_8;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__CallVars_9;
  MR_Word * hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__AssociativeVarsOutputVar_10;
  MR_bool hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded;
  jmp_buf hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__commit_0;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_74_74;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_75_75;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_76_76;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeCtorInfo_77_77;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_92_92;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_93_93;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_94_94;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_95_95;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_96_96;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_97_97;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_98_98;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_99_99;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_100_100;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_102_102;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_104_104;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_106_106;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__LHSCalls_11;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__RHSCalls_12;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__PredId_13;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__AB_14;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__PairsL_15;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Vs_16;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__BC_17;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__PairsR_18;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Pairs_20;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__A_21;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__B_22;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__C_23;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__ABC_24;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__AssocList_25;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__OutputVar_29;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__CallVarA_31;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__CallVarB_33;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__AssociativeVars_34;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_35;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_36;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_37;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_38;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_39;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_40;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_41;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_42;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_43;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_44;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_45;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_46;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_47;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_48;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_49;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_51;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_52;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_53;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_54;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_56;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_57;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_58;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_59;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_61;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_62;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_63;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_64;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_65;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_78;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_79;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_80;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_81;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_82;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_83;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_84;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_85;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_86;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_87;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_88;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_89;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_90;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeCtorInfo_13_115;
  MR_Word hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeCtorInfo_14_116;
};


static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__assertion__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__assertion__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__assertion__pair__pti_pair_2__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__assertion__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo hlds__assertion__hlds__assertion__field_types_associative_vars_output_var_0_0[2];

static const MR_DuFunctorDesc hlds__assertion__hlds__assertion__du_functor_desc_associative_vars_output_var_0_0;

static const MR_DuFunctorDescPtr hlds__assertion__hlds__assertion__du_stag_ordered_associative_vars_output_var_0_0[1];

static const MR_DuPtagLayout hlds__assertion__hlds__assertion__du_ptag_ordered_associative_vars_output_var_0[1];

static const MR_DuFunctorDescPtr hlds__assertion__hlds__assertion__du_name_ordered_associative_vars_output_var_0[1];

static const MR_Integer hlds__assertion__hlds__assertion__functor_number_map_associative_vars_output_var_0[1];

static const MR_PseudoTypeInfo hlds__assertion__hlds__assertion__field_types_state_update_vars_0_0[2];

static const MR_DuFunctorDesc hlds__assertion__hlds__assertion__du_functor_desc_state_update_vars_0_0;

static const MR_DuFunctorDescPtr hlds__assertion__hlds__assertion__du_stag_ordered_state_update_vars_0_0[1];

static const MR_DuPtagLayout hlds__assertion__hlds__assertion__du_ptag_ordered_state_update_vars_0[1];

static const MR_DuFunctorDescPtr hlds__assertion__hlds__assertion__du_name_ordered_state_update_vars_0[1];

static const MR_Integer hlds__assertion__hlds__assertion__functor_number_map_state_update_vars_0[1];

static const MR_FA_TypeInfo_Struct2 hlds__assertion__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__predicate_call__637__1_1_p_0(
  MR_Word LambdaHeadVar__1_35);

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__is_update_assertion_goal_2__548__1_2_p_0(
  MR_Word SA_14,
  MR_Word LambdaHeadVar__1_51);

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__is_update_assertion_goal_2__546__1_2_p_0(
  MR_Word S0_24,
  MR_Word LambdaHeadVar__1_46);

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__is_update_assertion_goal_2__535__1_1_p_0(
  MR_Word LambdaHeadVar__1_33);

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__process_one_side__491__1_1_p_0(
  MR_Word LambdaHeadVar__1_17);

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__is_associativity_assertion_goal_2__449__1_2_p_0(
  MR_Word B_22,
  MR_Word LambdaHeadVar__1_60);

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__is_associativity_assertion_goal_2__447__1_2_p_0(
  MR_Word A_21,
  MR_Word LambdaHeadVar__1_55);

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__is_associativity_assertion_goal_2__445__1_2_p_0(
  MR_Word AB_14,
  MR_Word LambdaHeadVar__1_50);

static void MR_CALL 
hlds__assertion____Compare____subst_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__assertion____Unify____subst_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
hlds__assertion__is_update_assertion_goal_2_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__assertion__is_update_assertion_goal_2_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__assertion__is_update_assertion_goal_2_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__assertion__is_update_assertion_goal_2_5_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
hlds__assertion__is_update_assertion_goal_2_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__assertion__is_update_assertion_goal_2_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__assertion__is_update_assertion_goal_2_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
hlds__assertion__is_update_assertion_goal_2_5_p_0(
  MR_Word PCalls_6,
  MR_Word QCalls_7,
  MR_Word UniversiallyQuantifiedVars_8,
  MR_Word CallVars_9,
  MR_Word * StateVars_10,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
hlds__assertion__process_two_linked_calls_6_p_0(
  MR_Word Goals_7,
  MR_Word UniversiallyQuantifiedVars_8,
  MR_Word * PredId_9,
  MR_Word * LinkingVar_10,
  MR_Word * VarsAB_11,
  MR_Word * VarsA_12);

static void MR_CALL 
hlds__assertion__record_use_in_assertion_4_p_0(
  MR_Word AssertId_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13);

static MR_bool MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_6(
  void * env_ptr_arg);

static MR_bool MR_CALL 
hlds__assertion__predicate_call_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_6(
  void * env_ptr_arg);

static MR_bool MR_CALL 
hlds__assertion__predicate_call_2_p_0(
  MR_Word Goal_3,
  MR_Word PredId_4);

static void MR_CALL 
hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
hlds__assertion__is_associativity_assertion_goal_2_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__assertion__is_associativity_assertion_goal_2_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__assertion__is_associativity_assertion_goal_2_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__assertion__is_associativity_assertion_goal_2_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__assertion__is_associativity_assertion_goal_2_5_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
hlds__assertion__is_associativity_assertion_goal_2_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__assertion__is_associativity_assertion_goal_2_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
hlds__assertion__is_associativity_assertion_goal_2_5_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
hlds__assertion__is_associativity_assertion_goal_2_5_p_0_9(
  void * env_ptr_arg);

static MR_bool MR_CALL 
hlds__assertion__is_associativity_assertion_goal_2_5_p_0(
  MR_Word PCalls_6,
  MR_Word QCalls_7,
  MR_Word UniversiallyQuantifiedVars_8,
  MR_Word CallVars_9,
  MR_Word * AssociativeVarsOutputVar_10);

static MR_bool MR_CALL 
hlds__assertion__process_one_side_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__assertion__process_one_side_6_p_0(
  MR_Word Goals_7,
  MR_Word UniversiallyQuantifiedVars_8,
  MR_Word * PredId_9,
  MR_Word * LinkingVar_10,
  MR_Word * Vars_11,
  MR_Word * VarsA_12);

static MR_bool MR_CALL 
hlds__assertion__goal_is_equivalence_3_p_0(
  MR_Word Goal_4,
  MR_Word * P_5,
  MR_Word * Q_6);

static MR_Box MR_CALL 
hlds__assertion__equal_goals_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__assertion__equal_goals_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__assertion__equal_goals_4_p_0(
  MR_Word tscc_proc_1_input_1_GoalA_5,
  MR_Word tscc_proc_1_input_2_GoalB_6,
  MR_Word tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Subst_73);

static MR_bool MR_CALL 
hlds__assertion__equal_goals_shorthand_4_p_0(
  MR_Word tscc_proc_2_input_1_ShortHandA_5,
  MR_Word tscc_proc_2_input_2_ShortHandB_6,
  MR_Word tscc_proc_2_input_3_STATE_VARIABLE_Subst_0_12,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Subst_73);

static MR_bool MR_CALL 
hlds__assertion__equal_unification_4_p_0(
  MR_Word tscc_proc_3_input_1_RhsA_5,
  MR_Word tscc_proc_3_input_2_RhsB_6,
  MR_Word tscc_proc_3_input_3_STATE_VARIABLE_Subst_0_26,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Subst_73);

static MR_bool MR_CALL 
hlds__assertion__equal_goals_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Subst_0_3,
  MR_Word * STATE_VARIABLE_Subst_4);

static MR_bool MR_CALL 
hlds__assertion__equal_goals_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Subst_0_3,
  MR_Word * STATE_VARIABLE_Subst_4);

static MR_bool MR_CALL 
hlds__assertion__equal_var_4_p_0(
  MR_Word VA_5,
  MR_Word VB_6,
  MR_Word STATE_VARIABLE_Subst_0_9,
  MR_Word * STATE_VARIABLE_Subst_10);

static MR_bool MR_CALL 
hlds__assertion__equal_reason_4_p_0(
  MR_Word ReasonA_5,
  MR_Word ReasonB_6,
  MR_Word STATE_VARIABLE_Subst_0_29,
  MR_Word * STATE_VARIABLE_Subst_30);

static MR_bool MR_CALL 
hlds__assertion__equal_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Subst_0_3,
  MR_Word * STATE_VARIABLE_Subst_4);

static MR_bool MR_CALL 
hlds__assertion__commutative_var_ordering_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * CommutativeVars_11);

static MR_bool MR_CALL 
hlds__assertion__commutative_var_ordering_2_6_p_0(
  MR_Word VarP_7,
  MR_Word VarQ_8,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * CallVarB_15);

static void MR_CALL 
hlds__assertion__record_preds_used_in_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__assertion__normalise_goals_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
hlds__assertion__normalise_cases_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
hlds__assertion__normalise_conj_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
hlds__assertion____Unify____associative_vars_output_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__assertion____Compare____associative_vars_output_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__assertion____Unify____state_update_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__assertion____Compare____state_update_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__assertion____Unify____subst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__assertion____Compare____subst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__assertion_scalar_common_1[8][2];

static /* final */ const MR_Box hlds__assertion_scalar_common_2[9][3];

static /* final */ const MR_Box hlds__assertion_scalar_common_3[1][7];

static /* final */ const MR_Box hlds__assertion_scalar_common_4[2][5];

static /* final */ const MR_Box hlds__assertion_scalar_common_5[3][4];

static /* final */ const MR_Box hlds__assertion_scalar_common_6[1][8];




static /* final */ const MR_Box hlds__assertion_scalar_common_1[8][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__assertion_scalar_common_1[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__assertion_scalar_common_2[1]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__assertion_scalar_common_2[0]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};

static /* final */ const MR_Box hlds__assertion_scalar_common_2[9][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__assertion_scalar_common_1[0])),
    ((MR_Box) (&hlds__assertion_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__assertion_scalar_common_2[0])),
    ((MR_Box) (&hlds__assertion_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__assertion_scalar_common_1[0])),
    ((MR_Box) (&hlds__assertion_scalar_common_1[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__assertion_scalar_common_4[0])),
    ((MR_Box) (hlds__assertion__equal_goals_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__assertion_scalar_common_4[0])),
    ((MR_Box) (hlds__assertion__equal_goals_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__assertion_scalar_common_5[0])),
    ((MR_Box) (hlds__assertion__process_one_side_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__assertion_scalar_common_5[1])),
    ((MR_Box) (hlds__assertion__predicate_call_2_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__assertion_scalar_common_5[1])),
    ((MR_Box) (hlds__assertion__is_construction_equivalence_assertion_4_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&hlds__assertion_scalar_common_5[2])),
    ((MR_Box) (hlds__assertion__is_update_assertion_goal_2_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__assertion_scalar_common_3[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_assert_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box hlds__assertion_scalar_common_4[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__assertion__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__assertion__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__assertion__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__assertion_scalar_common_5[3][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__assertion__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__assertion__pair__pti_pair_2__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__assertion_scalar_common_6[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__assertion__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__assertion__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__assertion__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__assertion__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__assertion__hlds__assertion__type_ctor_info_state_update_vars_0))
  },
};



#include "array.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__assertion__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__assertion__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__assertion__pair__pti_pair_2__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__assertion__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&hlds__assertion__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__assertion__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_TypeInfo) (&hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo hlds__assertion__hlds__assertion__field_types_associative_vars_output_var_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__assertion__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc hlds__assertion__hlds__assertion__du_functor_desc_associative_vars_output_var_0_0 = {
  (MR_String) "associative_vars_output_var",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__assertion__hlds__assertion__field_types_associative_vars_output_var_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__assertion__hlds__assertion__du_stag_ordered_associative_vars_output_var_0_0[1] = { &hlds__assertion__hlds__assertion__du_functor_desc_associative_vars_output_var_0_0 };

static const MR_DuPtagLayout hlds__assertion__hlds__assertion__du_ptag_ordered_associative_vars_output_var_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__assertion__hlds__assertion__du_stag_ordered_associative_vars_output_var_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__assertion__hlds__assertion__du_name_ordered_associative_vars_output_var_0[1] = { &hlds__assertion__hlds__assertion__du_functor_desc_associative_vars_output_var_0_0 };

static const MR_Integer hlds__assertion__hlds__assertion__functor_number_map_associative_vars_output_var_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__assertion__hlds__assertion__type_ctor_info_associative_vars_output_var_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__assertion____Unify____associative_vars_output_var_0_0_10001)),
  ((MR_Box) (hlds__assertion____Compare____associative_vars_output_var_0_0_10001)),
  (MR_String) "hlds.assertion",
  (MR_String) "associative_vars_output_var",
  { hlds__assertion__hlds__assertion__du_name_ordered_associative_vars_output_var_0 },
  { hlds__assertion__hlds__assertion__du_ptag_ordered_associative_vars_output_var_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__assertion__hlds__assertion__functor_number_map_associative_vars_output_var_0,

};

static const MR_PseudoTypeInfo hlds__assertion__hlds__assertion__field_types_state_update_vars_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc hlds__assertion__hlds__assertion__du_functor_desc_state_update_vars_0_0 = {
  (MR_String) "state_update_vars",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__assertion__hlds__assertion__field_types_state_update_vars_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__assertion__hlds__assertion__du_stag_ordered_state_update_vars_0_0[1] = { &hlds__assertion__hlds__assertion__du_functor_desc_state_update_vars_0_0 };

static const MR_DuPtagLayout hlds__assertion__hlds__assertion__du_ptag_ordered_state_update_vars_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__assertion__hlds__assertion__du_stag_ordered_state_update_vars_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__assertion__hlds__assertion__du_name_ordered_state_update_vars_0[1] = { &hlds__assertion__hlds__assertion__du_functor_desc_state_update_vars_0_0 };

static const MR_Integer hlds__assertion__hlds__assertion__functor_number_map_state_update_vars_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__assertion__hlds__assertion__type_ctor_info_state_update_vars_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__assertion____Unify____state_update_vars_0_0_10001)),
  ((MR_Box) (hlds__assertion____Compare____state_update_vars_0_0_10001)),
  (MR_String) "hlds.assertion",
  (MR_String) "state_update_vars",
  { hlds__assertion__hlds__assertion__du_name_ordered_state_update_vars_0 },
  { hlds__assertion__hlds__assertion__du_ptag_ordered_state_update_vars_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__assertion__hlds__assertion__functor_number_map_state_update_vars_0,

};

static const MR_FA_TypeInfo_Struct2 hlds__assertion__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__assertion__hlds__assertion__type_ctor_info_subst_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__assertion____Unify____subst_0_0_10001)),
  ((MR_Box) (hlds__assertion____Compare____subst_0_0_10001)),
  (MR_String) "hlds.assertion",
  (MR_String) "subst",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__assertion__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__predicate_call__637__1_1_p_0(
  MR_Word LambdaHeadVar__1_35)
{
  MR_bool succeeded;
  MR_Word UnifyRhs_18;
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_35, 0))));

  succeeded = ((MR_tag((MR_Word) Var_36)) == (MR_Integer) 1);
  if (succeeded)
  {
    UnifyRhs_18 = ((MR_Word) ((MR_hl_field(1, Var_36, 1))));
    succeeded = ((MR_tag((MR_Word) UnifyRhs_18)) == (MR_Integer) 1);
  }
  succeeded = !(succeeded);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__is_update_assertion_goal_2__548__1_2_p_0(
  MR_Word SA_14,
  MR_Word LambdaHeadVar__1_51)
{
  MR_bool succeeded;
  MR_Word X_60 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_51, 0))));

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__assertion_scalar_common_1[0]), ((MR_Box) (X_60)), ((MR_Box) (SA_14)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__is_update_assertion_goal_2__546__1_2_p_0(
  MR_Word S0_24,
  MR_Word LambdaHeadVar__1_46)
{
  MR_bool succeeded;
  MR_Word X_57 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_46, 0))));

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__assertion_scalar_common_1[0]), ((MR_Box) (X_57)), ((MR_Box) (S0_24)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__is_update_assertion_goal_2__535__1_1_p_0(
  MR_Word LambdaHeadVar__1_33)
{
  MR_bool succeeded;
  MR_Word X_54 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_33, 0))));
  MR_Word Y_55 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_33, 1))));

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__assertion_scalar_common_2[0]), ((MR_Box) (X_54)), ((MR_Box) (Y_55)));
  succeeded = !(succeeded);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__process_one_side__491__1_1_p_0(
  MR_Word LambdaHeadVar__1_17)
{
  MR_bool succeeded;
  MR_Word X_19 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_17, 0))));
  MR_Word Y_20 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_17, 1))));

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__assertion_scalar_common_1[0]), ((MR_Box) (X_19)), ((MR_Box) (Y_20)));
  succeeded = !(succeeded);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__is_associativity_assertion_goal_2__449__1_2_p_0(
  MR_Word B_22,
  MR_Word LambdaHeadVar__1_60)
{
  MR_bool succeeded;
  MR_Word X_73 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_60, 0))));

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__assertion_scalar_common_1[0]), ((MR_Box) (X_73)), ((MR_Box) (B_22)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__is_associativity_assertion_goal_2__447__1_2_p_0(
  MR_Word A_21,
  MR_Word LambdaHeadVar__1_55)
{
  MR_bool succeeded;
  MR_Word X_70 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_55, 0))));

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__assertion_scalar_common_1[0]), ((MR_Box) (X_70)), ((MR_Box) (A_21)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__is_associativity_assertion_goal_2__445__1_2_p_0(
  MR_Word AB_14,
  MR_Word LambdaHeadVar__1_50)
{
  MR_bool succeeded;
  MR_Word X_67 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_50, 0))));

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__assertion_scalar_common_1[0]), ((MR_Box) (X_67)), ((MR_Box) (AB_14)));
  return succeeded;
}

static void MR_CALL 
hlds__assertion____Compare____subst_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__assertion_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
hlds__assertion____Unify____subst_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__assertion_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
hlds__assertion____Compare____state_update_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__assertion_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__assertion_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
hlds__assertion____Unify____state_update_vars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__assertion_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__assertion____Compare____associative_vars_output_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__assertion_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__assertion_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
hlds__assertion____Unify____associative_vars_output_var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__assertion_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__assertion__is_update_assertion_goal_2_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__assertion__IntroducedFrom__pred__is_update_assertion_goal_2__548__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__assertion__is_update_assertion_goal_2_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__assertion__IntroducedFrom__pred__is_update_assertion_goal_2__546__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__assertion__is_update_assertion_goal_2_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__assertion__IntroducedFrom__pred__is_update_assertion_goal_2__535__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
hlds__assertion__is_update_assertion_goal_2_5_p_0_5(
  void * env_ptr_arg)
{
  struct hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0_s * env_ptr = (struct hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word _S0_28;
    MR_Word _SA_30;

    (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded = ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_35 != (MR_Word) ((MR_Unsigned) 0U));
    if ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded)
    {
      (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_36 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_35, 0))));
      (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_39 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_35, 1))));
      (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_37 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_36, 0))));
      (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_38 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_36, 1))));
      (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__S0_24 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_37, 0))));
      (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_65 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_37, 1))));
      (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_76_76 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
      (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_76_76, ((MR_Box) ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__SA_14)), ((MR_Box) ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_65)));
      if ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded)
      {
        (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_66 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_38, 0))));
        (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_67 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_38, 1))));
        (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_77_77 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
        (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_77_77, ((MR_Box) ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__SB_17)), ((MR_Box) ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_66)));
        if ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded)
        {
          (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_78_78 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
          (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_78_78, ((MR_Box) ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__S0_24)), ((MR_Box) ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_67)));
          if ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded)
          {
            (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded = ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_39 != (MR_Word) ((MR_Unsigned) 0U));
            if ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded)
            {
              (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_40 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_39, 0))));
              (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_68 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_39, 1))));
              (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_79_79 = (MR_Word) (&hlds__assertion_scalar_common_1[3]);
              (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_79_79, ((MR_Box) ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_43)), ((MR_Box) ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_68)));
              if ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded)
              {
                (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_41 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_40, 0))));
                (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_42 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_40, 1))));
                (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_69 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_41, 0))));
                (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__S_25 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_41, 1))));
                (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_80_80 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
                (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_80_80, ((MR_Box) ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__SA_14)), ((MR_Box) ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_69)));
                if ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded)
                {
                  (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_70 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_42, 0))));
                  (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_71 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_42, 1))));
                  (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_81_81 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
                  (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_81_81, ((MR_Box) ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__S_25)), ((MR_Box) ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_70)));
                  if ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded)
                  {
                    (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_82_82 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
                    (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_82_82, ((MR_Box) ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__SB_17)), ((MR_Box) ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_71)));
                    if ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded)
                    {
                      (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_63_63 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
                      mercury__assoc_list__from_corresponding_lists_3_p_0((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_63_63, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_63_63, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Vs_16, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__CallVars_9, &(env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__AssocList_26);
                      (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_48 = (MR_Word) ((MR_Unsigned) 0U);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                        (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_44 = base;
                        MR_hl_field(0, base, 0) = ((MR_Box) (&hlds__assertion_scalar_common_4[1]));
                        MR_hl_field(0, base, 1) = ((MR_Box) (hlds__assertion__is_update_assertion_goal_2_5_p_0_6));
                        MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Integer) 1));
                        MR_hl_field(0, base, 3) = ((MR_Box) ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__S0_24));
                      }
                      mercury__list__filter_3_p_0((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_61_61, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_44, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__AssocList_26, &(env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_45);
                      (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded = ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_45 != (MR_Word) ((MR_Unsigned) 0U));
                      if ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded)
                      {
                        (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_47 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_45, 0))));
                        (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_72 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_45, 1))));
                        (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_84_84 = (MR_Word) (&hlds__assertion_scalar_common_1[4]);
                        (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_84_84, ((MR_Box) ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_48)), ((MR_Box) ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_72)));
                        if ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded)
                        {
                          (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__StateA_29 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_47, 1))));
                          (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_53 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                            (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_49 = base;
                            MR_hl_field(0, base, 0) = ((MR_Box) (&hlds__assertion_scalar_common_4[1]));
                            MR_hl_field(0, base, 1) = ((MR_Box) (hlds__assertion__is_update_assertion_goal_2_5_p_0_7));
                            MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Integer) 1));
                            MR_hl_field(0, base, 3) = ((MR_Box) ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__SA_14));
                          }
                          mercury__list__filter_3_p_0((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_61_61, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_49, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__AssocList_26, &(env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_50);
                          (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded = ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_50 != (MR_Word) ((MR_Unsigned) 0U));
                          if ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded)
                          {
                            (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_52 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_50, 0))));
                            (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_73 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_50, 1))));
                            (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_86_86 = (MR_Word) (&hlds__assertion_scalar_common_1[4]);
                            (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_86_86, ((MR_Box) ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_53)), ((MR_Box) ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_73)));
                            if ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded)
                            {
                              (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__StateB_31 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_52, 1))));
                              {
                                MR_Word base;
                                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                *((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__StateVars_10) = base;
                                MR_hl_field(0, base, 0) = ((MR_Box) ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__StateA_29));
                                MR_hl_field(0, base, 1) = ((MR_Box) ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__StateB_31));
                              }
                              ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__cont)((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__cont_env_ptr);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
hlds__assertion__is_update_assertion_goal_2_5_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0_s * env_ptr = (struct hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_19;

    (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded = hlds__assertion__process_two_linked_calls_6_p_0((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__LHSCalls_11, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__UniversiallyQuantifiedVars_8, &(env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__PredId_13, &(env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__SA_14, &(env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__PairsL_15, &(env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Vs_16);
    if ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded)
    {
      (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded = hlds__assertion__process_two_linked_calls_6_p_0((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__RHSCalls_12, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__UniversiallyQuantifiedVars_8, &(env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_64, &(env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__SB_17, &(env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__PairsR_18, &Var_19);
      if ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded)
      {
        (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__PredId_13, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_64);
        if ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded)
        {
          (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_61_61 = (MR_Word) (&hlds__assertion_scalar_common_2[0]);
          mercury__assoc_list__from_corresponding_lists_3_p_0((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_61_61, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_61_61, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__PairsL_15, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__PairsR_18, &(env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Pairs0_20);
          (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_32 = (MR_Word) (&hlds__assertion_scalar_common_2[8]);
          (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_62_62 = (MR_Word) (&hlds__assertion_scalar_common_2[1]);
          mercury__list__filter_3_p_0((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_62_62, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_32, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Pairs0_20, &(env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Pairs_23);
          (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_34 = mercury__list__length_1_f_0((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_62_62, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Pairs_23);
          (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded = ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_34 == (MR_Integer) 2);
          if ((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__succeeded)
          {
            (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_43 = (MR_Word) ((MR_Unsigned) 0U);
            mercury__list__perm_2_p_0((env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__TypeInfo_62_62, (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Pairs_23, &(env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__Var_35, hlds__assertion__is_update_assertion_goal_2_5_p_0_5, env_ptr);
          }
        }
      }
    }
  }
}

static void MR_CALL 
hlds__assertion__is_update_assertion_goal_2_5_p_0_2(
  void * env_ptr_arg)
{
  struct hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0_s * env_ptr = (struct hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0_s *) (env_ptr_arg);

  mercury__list__perm_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__QCalls_7, &(env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__RHSCalls_12, hlds__assertion__is_update_assertion_goal_2_5_p_0_1, env_ptr);
}

static void MR_CALL 
hlds__assertion__is_update_assertion_goal_2_5_p_0_3(
  void * env_ptr_arg)
{
  struct hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0_s * env_ptr = (struct hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0_s *) (env_ptr_arg);

  mercury__list__perm_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__QCalls_7, &(env_ptr)->hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__LHSCalls_11, hlds__assertion__is_update_assertion_goal_2_5_p_0_1, env_ptr);
}

static void MR_CALL 
hlds__assertion__is_update_assertion_goal_2_5_p_0(
  MR_Word PCalls_6,
  MR_Word QCalls_7,
  MR_Word UniversiallyQuantifiedVars_8,
  MR_Word CallVars_9,
  MR_Word * StateVars_10,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0_s env;

  (env).hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__QCalls_7 = QCalls_7;
  (env).hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__UniversiallyQuantifiedVars_8 = UniversiallyQuantifiedVars_8;
  (env).hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__CallVars_9 = CallVars_9;
  (env).hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__StateVars_10 = StateVars_10;
  (env).hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__cont = cont;
  (env).hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__cont_env_ptr = cont_env_ptr;
  mercury__list__perm_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), PCalls_6, &(env).hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__LHSCalls_11, hlds__assertion__is_update_assertion_goal_2_5_p_0_2, &env);
  mercury__list__perm_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), PCalls_6, &(env).hlds__assertion__is_update_assertion_goal_2_5_p_0_env_0__RHSCalls_12, hlds__assertion__is_update_assertion_goal_2_5_p_0_3, &env);
}

static MR_bool MR_CALL 
hlds__assertion__process_two_linked_calls_6_p_0(
  MR_Word Goals_7,
  MR_Word UniversiallyQuantifiedVars_8,
  MR_Word * PredId_9,
  MR_Word * LinkingVar_10,
  MR_Word * VarsAB_11,
  MR_Word * VarsA_12)
{
  MR_bool succeeded = (Goals_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word TypeCtorInfo_34_34;
  MR_Word TypeInfo_35_35;
  MR_Word VarsB_19;
  MR_Word SetVarsA_24;
  MR_Word SetVarsB_25;
  MR_Word CommonVars_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_36;

  if (succeeded)
  {
    Var_27 = ((MR_Word) ((MR_hl_field(1, Goals_7, 0))));
    Var_29 = ((MR_Word) ((MR_hl_field(1, Goals_7, 1))));
    Var_28 = ((MR_Word) ((MR_hl_field(0, Var_27, 0))));
    succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_Integer) 2);
    if (succeeded)
    {
      *PredId_9 = ((MR_Word) ((MR_hl_field(2, Var_28, 0))));
      *VarsA_12 = ((MR_Word) ((MR_hl_field(2, Var_28, 2))));
      succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_30 = ((MR_Word) ((MR_hl_field(1, Var_29, 0))));
        Var_32 = ((MR_Word) ((MR_hl_field(1, Var_29, 1))));
        Var_31 = ((MR_Word) ((MR_hl_field(0, Var_30, 0))));
        succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_Integer) 2);
        if (succeeded)
        {
          Var_36 = ((MR_Word) ((MR_hl_field(2, Var_31, 0))));
          VarsB_19 = ((MR_Word) ((MR_hl_field(2, Var_31, 2))));
          succeeded = hlds__hlds_pred____Unify____pred_id_0_0(*PredId_9, Var_36);
          if (succeeded)
          {
            succeeded = (Var_32 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TypeCtorInfo_34_34 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              SetVarsA_24 = parse_tree__set_of_var__list_to_set_1_f_0(TypeCtorInfo_34_34, *VarsA_12);
              SetVarsB_25 = parse_tree__set_of_var__list_to_set_1_f_0(TypeCtorInfo_34_34, VarsB_19);
              CommonVars_26 = parse_tree__set_of_var__intersect_2_f_0(TypeCtorInfo_34_34, SetVarsA_24, SetVarsB_25);
              Var_33 = parse_tree__set_of_var__difference_2_f_0(TypeCtorInfo_34_34, CommonVars_26, UniversiallyQuantifiedVars_8);
              succeeded = parse_tree__set_of_var__is_singleton_2_p_0(TypeCtorInfo_34_34, Var_33, LinkingVar_10);
              if (succeeded)
              {
                TypeInfo_35_35 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
                mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_35_35, TypeInfo_35_35, *VarsA_12, VarsB_19, VarsAB_11);
                succeeded = MR_TRUE;
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__assertion__record_use_in_assertion_4_p_0(
  MR_Word AssertId_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13)
{
  MR_Word PredInfo0_8;
  MR_Word Assertions0_9;
  MR_Word Assertions_10;
  MR_Word PredInfo_11;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_12, PredId_6, &PredInfo0_8);
  hlds__hlds_pred__pred_info_get_assertions_2_p_0(PredInfo0_8, &Assertions0_9);
  mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_assert_id_0), ((MR_Box) (AssertId_5)), Assertions0_9, &Assertions_10);
  hlds__hlds_pred__pred_info_set_assertions_3_p_0(Assertions_10, PredInfo0_8, &PredInfo_11);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_6, PredInfo_11, STATE_VARIABLE_ModuleInfo_0_12, STATE_VARIABLE_ModuleInfo_13);
}

static MR_bool MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__assertion__IntroducedFrom__pred__predicate_call__637__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s * env_ptr = (struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_3(
  void * env_ptr_arg)
{
  struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s * env_ptr = (struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Call_32 = ((MR_Word) ((env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__conv0_Call_32));
  hlds__assertion__is_construction_equivalence_assertion_4_p_0_2(env_ptr);
}

static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_4(
  void * env_ptr_arg)
{
  struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s * env_ptr = (struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__P_40 = (MR_Word) (&hlds__assertion_scalar_common_2[7]);
  (env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_50 = (MR_Word) ((MR_Unsigned) 0U);
  mercury__list__filter_3_p_0((env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeCtorInfo_40_52, (env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__P_40, (env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Unifications_39, &(env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_54);
  (env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeInfo_45_57 = (MR_Word) (&hlds__assertion_scalar_common_1[5]);
  (env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeInfo_45_57, ((MR_Box) ((env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_50)), ((MR_Box) ((env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_54)));
  if ((env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
    hlds__assertion__is_construction_equivalence_assertion_4_p_0_1(env_ptr);
}

static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_2(
  void * env_ptr_arg)
{
  struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s * env_ptr = (struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_38;
    MR_Integer Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;

    (env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_49 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Call_32, 0))));
    (env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_49)) == (MR_Integer) 2);
    if ((env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
    {
      (env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_53 = ((MR_Word) ((MR_hl_field(2, (env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_49, 0))));
      (env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__PredId_8, (env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_53);
      if ((env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
        mercury__list__delete_3_p_1((env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeCtorInfo_40_52, (env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Goals_30, ((MR_Box) ((env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Call_32)), &(env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Unifications_39, hlds__assertion__is_construction_equivalence_assertion_4_p_0_4, env_ptr);
    }
  }
}

static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_6(
  void * env_ptr_arg)
{
  struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s * env_ptr = (struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__commit_0) == 0)
    {
      (env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeCtorInfo_40_52 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
      mercury__list__member_2_p_1((env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeCtorInfo_40_52, &(env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__conv0_Call_32, (env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Goals_30, hlds__assertion__is_construction_equivalence_assertion_4_p_0_3, env_ptr);
      (env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = MR_TRUE;
}

MR_bool MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word AssertId_6,
  MR_Word ConsId_7,
  MR_Word PredId_8)
{
  struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s env;

  (env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__PredId_8 = PredId_8;
  {
    MR_Word Goal_9;
    MR_Word P_10;
    MR_Word Q_11;
    MR_Word GoalExpr_12;
    MR_Word UnifyRHS_15;
    MR_Word UnifyConsId_19;
    MR_Word UnifyDuCtor_22;
    MR_Word DuCtor_23;
    MR_Word UnqualifiedSymName_24;
    MR_Integer Arity_25;
    MR_Word QualifiedSymName_27;
    MR_Integer Var_29;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word _TypeCtorA_26;
    MR_Word _TypeCtorB_28;

    hlds__assertion__assert_id_goal_3_p_0(ModuleInfo_5, AssertId_6, &Goal_9);
    (env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = hlds__assertion__goal_is_equivalence_3_p_0(Goal_9, &P_10, &Q_11);
    if ((env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
    {
      GoalExpr_12 = ((MR_Word) ((MR_hl_field(0, P_10, 0))));
      (env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) GoalExpr_12)) == (MR_Integer) 1);
      if ((env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
      {
        UnifyRHS_15 = ((MR_Word) ((MR_hl_field(1, GoalExpr_12, 1))));
        (env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) UnifyRHS_15)) == (MR_Integer) 1);
        if ((env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
        {
          UnifyConsId_19 = ((MR_Word) ((MR_hl_field(1, UnifyRHS_15, 0))));
          (env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) UnifyConsId_19)) == (MR_Integer) 1);
          if ((env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
          {
            UnifyDuCtor_22 = (MR_Word) (MR_body((MR_Word) (UnifyConsId_19), (MR_Integer) 1));
            (env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) ConsId_7)) == (MR_Integer) 1);
            if ((env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
            {
              DuCtor_23 = (MR_Word) (MR_body((MR_Word) (ConsId_7), (MR_Integer) 1));
              UnqualifiedSymName_24 = ((MR_Word) ((MR_hl_field(0, UnifyDuCtor_22, 0))));
              Arity_25 = ((MR_Integer) ((MR_hl_field(0, UnifyDuCtor_22, 1))));
              QualifiedSymName_27 = ((MR_Word) ((MR_hl_field(0, DuCtor_23, 0))));
              Var_29 = ((MR_Integer) ((MR_hl_field(0, DuCtor_23, 1))));
              (env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = (Arity_25 == Var_29);
              if ((env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
                (env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(UnqualifiedSymName_24, QualifiedSymName_27);
            }
          }
        }
      }
      if ((env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
      {
        MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Q_11, 0))));
        MR_Word Var_48;
        MR_Word Var_31;
        MR_Unsigned packed_word_0;

        (env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) Var_47)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_47, 0)))) == (MR_Integer) 2)));
        if ((env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
        {
          packed_word_0 = (MR_Unsigned) ((MR_hl_field(3, Var_47, 1)));
          Var_48 = ((MR_Unsigned) ((MR_hl_field(3, Var_47, 1))) & (MR_Integer) 1);
          (env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Goals_30 = ((MR_Word) ((MR_hl_field(3, Var_47, 2))));
          (env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = (Var_48 == (MR_Integer) 0);
        }
        if ((env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
          hlds__assertion__is_construction_equivalence_assertion_4_p_0_6(&env);
        else
        {
          MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Q_11, 0))));
          MR_Word Var_55;
          MR_Word Var_46;
          MR_Integer Var_41;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word Var_45;

          (env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) Var_51)) == (MR_Integer) 2);
          if ((env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
          {
            Var_55 = ((MR_Word) ((MR_hl_field(2, Var_51, 0))));
            (env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__PredId_8, Var_55);
          }
        }
      }
      else
      {
        MR_Word GoalExpr_59 = ((MR_Word) ((MR_hl_field(0, Q_11, 0))));
        MR_Word UnifyRHS_62;
        MR_Word UnifyConsId_66;
        MR_Word UnifyDuCtor_69;
        MR_Word DuCtor_70;
        MR_Word UnqualifiedSymName_71;
        MR_Integer Arity_72;
        MR_Word QualifiedSymName_74;
        MR_Integer Var_76;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word _TypeCtorA_73;
        MR_Word _TypeCtorB_75;

        (env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) GoalExpr_59)) == (MR_Integer) 1);
        if ((env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
        {
          UnifyRHS_62 = ((MR_Word) ((MR_hl_field(1, GoalExpr_59, 1))));
          (env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) UnifyRHS_62)) == (MR_Integer) 1);
          if ((env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
          {
            UnifyConsId_66 = ((MR_Word) ((MR_hl_field(1, UnifyRHS_62, 0))));
            (env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) UnifyConsId_66)) == (MR_Integer) 1);
            if ((env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
            {
              UnifyDuCtor_69 = (MR_Word) (MR_body((MR_Word) (UnifyConsId_66), (MR_Integer) 1));
              (env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) ConsId_7)) == (MR_Integer) 1);
              if ((env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
              {
                DuCtor_70 = (MR_Word) (MR_body((MR_Word) (ConsId_7), (MR_Integer) 1));
                UnqualifiedSymName_71 = ((MR_Word) ((MR_hl_field(0, UnifyDuCtor_69, 0))));
                Arity_72 = ((MR_Integer) ((MR_hl_field(0, UnifyDuCtor_69, 1))));
                QualifiedSymName_74 = ((MR_Word) ((MR_hl_field(0, DuCtor_70, 0))));
                Var_76 = ((MR_Integer) ((MR_hl_field(0, DuCtor_70, 1))));
                (env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = (Arity_72 == Var_76);
                if ((env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
                {
                  (env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(UnqualifiedSymName_71, QualifiedSymName_74);
                  if ((env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
                    (env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = hlds__assertion__predicate_call_2_p_0(P_10, (env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__PredId_8);
                }
              }
            }
          }
        }
      }
    }
    return (env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__assertion__predicate_call_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__assertion__IntroducedFrom__pred__predicate_call__637__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__assertion__predicate_call_2_p_0_env_0_s * env_ptr = (struct hlds__assertion__predicate_call_2_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_3(
  void * env_ptr_arg)
{
  struct hlds__assertion__predicate_call_2_p_0_env_0_s * env_ptr = (struct hlds__assertion__predicate_call_2_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Call_7 = ((MR_Word) ((env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__conv0_Call_7));
  hlds__assertion__predicate_call_2_p_0_2(env_ptr);
}

static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_4(
  void * env_ptr_arg)
{
  struct hlds__assertion__predicate_call_2_p_0_env_0_s * env_ptr = (struct hlds__assertion__predicate_call_2_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__P_15 = (MR_Word) (&hlds__assertion_scalar_common_2[6]);
  (env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Var_37 = (MR_Word) ((MR_Unsigned) 0U);
  mercury__list__filter_3_p_0((env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__TypeCtorInfo_40_40, (env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__P_15, (env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Unifications_14, &(env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Var_42);
  (env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__TypeInfo_45_45 = (MR_Word) (&hlds__assertion_scalar_common_1[5]);
  (env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__TypeInfo_45_45, ((MR_Box) ((env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Var_37)), ((MR_Box) ((env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Var_42)));
  if ((env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded)
    hlds__assertion__predicate_call_2_p_0_1(env_ptr);
}

static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_2(
  void * env_ptr_arg)
{
  struct hlds__assertion__predicate_call_2_p_0_env_0_s * env_ptr = (struct hlds__assertion__predicate_call_2_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_13;
    MR_Integer Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;

    (env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Var_34 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Call_7, 0))));
    (env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Var_34)) == (MR_Integer) 2);
    if ((env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded)
    {
      (env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Var_41 = ((MR_Word) ((MR_hl_field(2, (env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Var_34, 0))));
      (env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__PredId_4, (env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Var_41);
      if ((env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded)
        mercury__list__delete_3_p_1((env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__TypeCtorInfo_40_40, (env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Goals_5, ((MR_Box) ((env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Call_7)), &(env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Unifications_14, hlds__assertion__predicate_call_2_p_0_4, env_ptr);
    }
  }
}

static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_6(
  void * env_ptr_arg)
{
  struct hlds__assertion__predicate_call_2_p_0_env_0_s * env_ptr = (struct hlds__assertion__predicate_call_2_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__commit_0) == 0)
    {
      (env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__TypeCtorInfo_40_40 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
      mercury__list__member_2_p_1((env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__TypeCtorInfo_40_40, &(env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__conv0_Call_7, (env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Goals_5, hlds__assertion__predicate_call_2_p_0_3, env_ptr);
      (env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded = MR_TRUE;
}

static MR_bool MR_CALL 
hlds__assertion__predicate_call_2_p_0(
  MR_Word Goal_3,
  MR_Word PredId_4)
{
  struct hlds__assertion__predicate_call_2_p_0_env_0_s env;

  (env).hlds__assertion__predicate_call_2_p_0_env_0__PredId_4 = PredId_4;
  {
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Goal_3, 0))));
    MR_Word Var_33;
    MR_Word Var_6;
    MR_Unsigned packed_word_0;

    (env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) Var_32)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_32, 0)))) == (MR_Integer) 2)));
    if ((env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded)
    {
      packed_word_0 = (MR_Unsigned) ((MR_hl_field(3, Var_32, 1)));
      Var_33 = ((MR_Unsigned) ((MR_hl_field(3, Var_32, 1))) & (MR_Integer) 1);
      (env).hlds__assertion__predicate_call_2_p_0_env_0__Goals_5 = ((MR_Word) ((MR_hl_field(3, Var_32, 2))));
      (env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded = (Var_33 == (MR_Integer) 0);
    }
    if ((env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded)
      hlds__assertion__predicate_call_2_p_0_6(&env);
    else
    {
      MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Goal_3, 0))));
      MR_Word Var_43;
      MR_Word Var_31;
      MR_Integer Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;

      (env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_Integer) 2);
      if ((env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded)
      {
        Var_43 = ((MR_Word) ((MR_hl_field(2, Var_38, 0))));
        (env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((env).hlds__assertion__predicate_call_2_p_0_env_0__PredId_4, Var_43);
      }
    }
    return (env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded;
  }
}

MR_bool MR_CALL 
hlds__assertion__is_update_assertion_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word AssertId_7,
  MR_Word PredId_8,
  MR_Word CallVars_9,
  MR_Word * StateVars_10)
{
  MR_bool succeeded;

  succeeded = hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0(ModuleInfo_6, AssertId_7, CallVars_9, StateVars_10);
  return succeeded;
}

static void MR_CALL 
hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_0_s * env_ptr = (struct hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_0_s *) (env_ptr_arg);

  *((env_ptr)->hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__wrapper_arg_1) = ((MR_Box) ((env_ptr)->hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__conv0_StateVars_10));
  ((env_ptr)->hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__cont)((env_ptr)->hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__cont_env_ptr);
}

static void MR_CALL 
hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_0_s env;

  (env).hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__wrapper_arg_1 = wrapper_arg_1;
  (env).hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__cont = cont;
  (env).hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    hlds__assertion__is_update_assertion_goal_2_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), &(env).hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__conv0_StateVars_10, hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0_1, &env);
  }
}

MR_bool MR_CALL 
hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word AssertId_7,
  MR_Word CallVars_9,
  MR_Word * StateVars_10)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_20_22;
  MR_Word Goal_11;
  MR_Word P_12;
  MR_Word Q_13;
  MR_Word GoalInfo_15;
  MR_Word UniversiallyQuantifiedVars_16;
  MR_Word PCalls_17;
  MR_Word QCalls_18;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Goal_23;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word GoalExpr0_27;
  MR_Word Goal_33;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word GoalExpr0_37;
  MR_Word Goal1_30;
  MR_Word Reason_29;
  MR_Word Goal1_40;
  MR_Word Reason_39;

  hlds__assertion__assert_id_goal_3_p_0(ModuleInfo_6, AssertId_7, &Goal_11);
  succeeded = hlds__assertion__goal_is_equivalence_3_p_0(Goal_11, &P_12, &Q_13);
  if (succeeded)
  {
    GoalInfo_15 = ((MR_Word) ((MR_hl_field(0, Goal_11, 1))));
    UniversiallyQuantifiedVars_16 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_15);
    GoalExpr0_27 = ((MR_Word) ((MR_hl_field(0, P_12, 0))));
    succeeded = ((((MR_tag((MR_Word) GoalExpr0_27)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr0_27, 0)))) == (MR_Integer) 5)));
    if (succeeded)
    {
      Reason_29 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_27, 1))));
      Goal1_30 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_27, 2))));
      succeeded = ((MR_tag((MR_Word) Reason_29)) == (MR_Integer) 0);
    }
    if (succeeded)
      Goal_23 = Goal1_30;
    else
      Goal_23 = P_12;
    Var_25 = ((MR_Word) ((MR_hl_field(0, Goal_23, 0))));
    succeeded = ((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_26 = ((MR_Unsigned) ((MR_hl_field(3, Var_25, 1))) & (MR_Integer) 1);
      PCalls_17 = ((MR_Word) ((MR_hl_field(3, Var_25, 2))));
      succeeded = (Var_26 == (MR_Integer) 0);
      if (succeeded)
      {
        GoalExpr0_37 = ((MR_Word) ((MR_hl_field(0, Q_13, 0))));
        succeeded = ((((MR_tag((MR_Word) GoalExpr0_37)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr0_37, 0)))) == (MR_Integer) 5)));
        if (succeeded)
        {
          Reason_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_37, 1))));
          Goal1_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_37, 2))));
          succeeded = ((MR_tag((MR_Word) Reason_39)) == (MR_Integer) 0);
        }
        if (succeeded)
          Goal_33 = Goal1_40;
        else
          Goal_33 = Q_13;
        Var_35 = ((MR_Word) ((MR_hl_field(0, Goal_33, 0))));
        succeeded = ((((MR_tag((MR_Word) Var_35)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_35, 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          Var_36 = ((MR_Unsigned) ((MR_hl_field(3, Var_35, 1))) & (MR_Integer) 1);
          QCalls_18 = ((MR_Word) ((MR_hl_field(3, Var_35, 2))));
          succeeded = (Var_36 == (MR_Integer) 0);
          if (succeeded)
          {
            TypeCtorInfo_20_22 = (MR_Word) (&hlds__assertion__hlds__assertion__type_ctor_info_state_update_vars_0);
            {
              Var_20 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_20, 0) = ((MR_Box) (&hlds__assertion_scalar_common_6[0]));
              MR_hl_field(0, Var_20, 1) = ((MR_Box) (hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0_2));
              MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(0, Var_20, 3) = ((MR_Box) (PCalls_17));
              MR_hl_field(0, Var_20, 4) = ((MR_Box) (QCalls_18));
              MR_hl_field(0, Var_20, 5) = ((MR_Box) (UniversiallyQuantifiedVars_16));
              MR_hl_field(0, Var_20, 6) = ((MR_Box) (CallVars_9));
            }
            mercury__solutions__solutions_2_p_1(TypeCtorInfo_20_22, Var_20, &Var_21);
            succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              *StateVars_10 = ((MR_Word) ((MR_hl_field(1, Var_21, 0))));
          }
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__assertion__is_associativity_assertion_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word AssertId_6,
  MR_Word CallVars_7,
  MR_Word * AssociativeVarsOutputVar_8)
{
  MR_bool succeeded;
  MR_Word Goal_9;
  MR_Word P_10;
  MR_Word Q_11;
  MR_Word GoalInfo_13;
  MR_Word UniversiallyQuantifiedVars_14;
  MR_Word PCalls_15;
  MR_Word QCalls_16;
  MR_Word Goal_17;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word GoalExpr0_21;
  MR_Word Goal_27;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word GoalExpr0_31;
  MR_Word Goal1_24;
  MR_Word Reason_23;
  MR_Word Goal1_34;
  MR_Word Reason_33;

  hlds__assertion__assert_id_goal_3_p_0(ModuleInfo_5, AssertId_6, &Goal_9);
  succeeded = hlds__assertion__goal_is_equivalence_3_p_0(Goal_9, &P_10, &Q_11);
  if (succeeded)
  {
    GoalInfo_13 = ((MR_Word) ((MR_hl_field(0, Goal_9, 1))));
    UniversiallyQuantifiedVars_14 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_13);
    GoalExpr0_21 = ((MR_Word) ((MR_hl_field(0, P_10, 0))));
    succeeded = ((((MR_tag((MR_Word) GoalExpr0_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr0_21, 0)))) == (MR_Integer) 5)));
    if (succeeded)
    {
      Reason_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_21, 1))));
      Goal1_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_21, 2))));
      succeeded = ((MR_tag((MR_Word) Reason_23)) == (MR_Integer) 0);
    }
    if (succeeded)
      Goal_17 = Goal1_24;
    else
      Goal_17 = P_10;
    Var_19 = ((MR_Word) ((MR_hl_field(0, Goal_17, 0))));
    succeeded = ((((MR_tag((MR_Word) Var_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_19, 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_20 = ((MR_Unsigned) ((MR_hl_field(3, Var_19, 1))) & (MR_Integer) 1);
      PCalls_15 = ((MR_Word) ((MR_hl_field(3, Var_19, 2))));
      succeeded = (Var_20 == (MR_Integer) 0);
      if (succeeded)
      {
        GoalExpr0_31 = ((MR_Word) ((MR_hl_field(0, Q_11, 0))));
        succeeded = ((((MR_tag((MR_Word) GoalExpr0_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr0_31, 0)))) == (MR_Integer) 5)));
        if (succeeded)
        {
          Reason_33 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_31, 1))));
          Goal1_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_31, 2))));
          succeeded = ((MR_tag((MR_Word) Reason_33)) == (MR_Integer) 0);
        }
        if (succeeded)
          Goal_27 = Goal1_34;
        else
          Goal_27 = Q_11;
        Var_29 = ((MR_Word) ((MR_hl_field(0, Goal_27, 0))));
        succeeded = ((((MR_tag((MR_Word) Var_29)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_29, 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          Var_30 = ((MR_Unsigned) ((MR_hl_field(3, Var_29, 1))) & (MR_Integer) 1);
          QCalls_16 = ((MR_Word) ((MR_hl_field(3, Var_29, 2))));
          succeeded = (Var_30 == (MR_Integer) 0);
          if (succeeded)
            succeeded = hlds__assertion__is_associativity_assertion_goal_2_5_p_0(PCalls_15, QCalls_16, UniversiallyQuantifiedVars_14, CallVars_7, AssociativeVarsOutputVar_8);
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__assertion__is_associativity_assertion_goal_2_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__assertion__IntroducedFrom__pred__is_associativity_assertion_goal_2__449__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__assertion__is_associativity_assertion_goal_2_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__assertion__IntroducedFrom__pred__is_associativity_assertion_goal_2__447__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__assertion__is_associativity_assertion_goal_2_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__assertion__IntroducedFrom__pred__is_associativity_assertion_goal_2__445__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
hlds__assertion__is_associativity_assertion_goal_2_5_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0_s * env_ptr = (struct hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
hlds__assertion__is_associativity_assertion_goal_2_5_p_0_5(
  void * env_ptr_arg)
{
  struct hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0_s * env_ptr = (struct hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word _AB_28;
    MR_Word _A_30;
    MR_Word _B_32;

    (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded = ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_35 != (MR_Word) ((MR_Unsigned) 0U));
    if ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded)
    {
      (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_36 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_35, 0))));
      (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_39 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_35, 1))));
      (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_37 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_36, 0))));
      (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_38 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_36, 1))));
      (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__A_21 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_37, 0))));
      (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_79 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_37, 1))));
      (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_92_92 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
      (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_92_92, ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__AB_14)), ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_79)));
      if ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded)
      {
        (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__B_22 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_38, 0))));
        (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_80 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_38, 1))));
        (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_93_93 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
        (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_93_93, ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__A_21)), ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_80)));
        if ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded)
        {
          (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded = ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_39 != (MR_Word) ((MR_Unsigned) 0U));
          if ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded)
          {
            (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_40 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_39, 0))));
            (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_43 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_39, 1))));
            (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_41 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_40, 0))));
            (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_42 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_40, 1))));
            (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_81 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_41, 0))));
            (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__C_23 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_41, 1))));
            (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_94_94 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
            (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_94_94, ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__B_22)), ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_81)));
            if ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded)
            {
              (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_82 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_42, 0))));
              (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_83 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_42, 1))));
              (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_95_95 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
              (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_95_95, ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__C_23)), ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_82)));
              if ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded)
              {
                (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_96_96 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
                (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_96_96, ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__BC_17)), ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_83)));
                if ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded)
                {
                  (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded = ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_43 != (MR_Word) ((MR_Unsigned) 0U));
                  if ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded)
                  {
                    (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_44 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_43, 0))));
                    (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_84 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_43, 1))));
                    (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_97_97 = (MR_Word) (&hlds__assertion_scalar_common_1[3]);
                    (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_97_97, ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_47)), ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_84)));
                    if ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded)
                    {
                      (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_45 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_44, 0))));
                      (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_46 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_44, 1))));
                      (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_85 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_45, 0))));
                      (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__ABC_24 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_45, 1))));
                      (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_98_98 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
                      (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_98_98, ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__AB_14)), ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_85)));
                      if ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded)
                      {
                        (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_86 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_46, 0))));
                        (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_87 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_46, 1))));
                        (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_99_99 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
                        (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_99_99, ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__BC_17)), ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_86)));
                        if ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded)
                        {
                          (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_100_100 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
                          (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_100_100, ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__ABC_24)), ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_87)));
                          if ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded)
                          {
                            (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_76_76 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
                            mercury__assoc_list__from_corresponding_lists_3_p_0((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_76_76, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_76_76, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Vs_16, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__CallVars_9, &(env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__AssocList_25);
                            (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_52 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                              (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_48 = base;
                              MR_hl_field(0, base, 0) = ((MR_Box) (&hlds__assertion_scalar_common_4[1]));
                              MR_hl_field(0, base, 1) = ((MR_Box) (hlds__assertion__is_associativity_assertion_goal_2_5_p_0_6));
                              MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Integer) 1));
                              MR_hl_field(0, base, 3) = ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__AB_14));
                            }
                            mercury__list__filter_3_p_0((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_74_74, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_48, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__AssocList_25, &(env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_49);
                            (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded = ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_49 != (MR_Word) ((MR_Unsigned) 0U));
                            if ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded)
                            {
                              (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_51 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_49, 0))));
                              (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_88 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_49, 1))));
                              (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_102_102 = (MR_Word) (&hlds__assertion_scalar_common_1[4]);
                              (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_102_102, ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_52)), ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_88)));
                              if ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded)
                              {
                                (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__OutputVar_29 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_51, 1))));
                                (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_57 = (MR_Word) ((MR_Unsigned) 0U);
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                                  (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_53 = base;
                                  MR_hl_field(0, base, 0) = ((MR_Box) (&hlds__assertion_scalar_common_4[1]));
                                  MR_hl_field(0, base, 1) = ((MR_Box) (hlds__assertion__is_associativity_assertion_goal_2_5_p_0_7));
                                  MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Integer) 1));
                                  MR_hl_field(0, base, 3) = ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__A_21));
                                }
                                mercury__list__filter_3_p_0((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_74_74, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_53, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__AssocList_25, &(env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_54);
                                (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded = ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_54 != (MR_Word) ((MR_Unsigned) 0U));
                                if ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded)
                                {
                                  (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_56 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_54, 0))));
                                  (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_89 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_54, 1))));
                                  (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_104_104 = (MR_Word) (&hlds__assertion_scalar_common_1[4]);
                                  (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_104_104, ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_57)), ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_89)));
                                  if ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded)
                                  {
                                    (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__CallVarA_31 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_56, 1))));
                                    (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_62 = (MR_Word) ((MR_Unsigned) 0U);
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                                      (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_58 = base;
                                      MR_hl_field(0, base, 0) = ((MR_Box) (&hlds__assertion_scalar_common_4[1]));
                                      MR_hl_field(0, base, 1) = ((MR_Box) (hlds__assertion__is_associativity_assertion_goal_2_5_p_0_8));
                                      MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Integer) 1));
                                      MR_hl_field(0, base, 3) = ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__B_22));
                                    }
                                    mercury__list__filter_3_p_0((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_74_74, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_58, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__AssocList_25, &(env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_59);
                                    (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded = ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_59 != (MR_Word) ((MR_Unsigned) 0U));
                                    if ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded)
                                    {
                                      (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_61 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_59, 0))));
                                      (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_90 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_59, 1))));
                                      (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_106_106 = (MR_Word) (&hlds__assertion_scalar_common_1[4]);
                                      (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_106_106, ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_62)), ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_90)));
                                      if ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded)
                                      {
                                        (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__CallVarB_33 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_61, 1))));
                                        (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeCtorInfo_77_77 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                                        (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_65 = (MR_Word) ((MR_Unsigned) 0U);
                                        {
                                          MR_Word base;
                                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                          (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_64 = base;
                                          MR_hl_field(1, base, 0) = ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__CallVarB_33));
                                          MR_hl_field(1, base, 1) = ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_65));
                                        }
                                        {
                                          MR_Word base;
                                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                          (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_63 = base;
                                          MR_hl_field(1, base, 0) = ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__CallVarA_31));
                                          MR_hl_field(1, base, 1) = ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_64));
                                        }
                                        (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__AssociativeVars_34 = parse_tree__set_of_var__list_to_set_1_f_0((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeCtorInfo_77_77, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_63);
                                        {
                                          MR_Word base;
                                          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                          *((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__AssociativeVarsOutputVar_10) = base;
                                          MR_hl_field(0, base, 0) = ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__AssociativeVars_34));
                                          MR_hl_field(0, base, 1) = ((MR_Box) ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__OutputVar_29));
                                        }
                                        hlds__assertion__is_associativity_assertion_goal_2_5_p_0_1(env_ptr);
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
hlds__assertion__is_associativity_assertion_goal_2_5_p_0_2(
  void * env_ptr_arg)
{
  struct hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0_s * env_ptr = (struct hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_19;

    (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded = hlds__assertion__process_one_side_6_p_0((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__LHSCalls_11, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__UniversiallyQuantifiedVars_8, &(env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__PredId_13, &(env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__AB_14, &(env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__PairsL_15, &(env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Vs_16);
    if ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded)
    {
      (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded = hlds__assertion__process_one_side_6_p_0((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__RHSCalls_12, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__UniversiallyQuantifiedVars_8, &(env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_78, &(env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__BC_17, &(env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__PairsR_18, &Var_19);
      if ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded)
      {
        (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__PredId_13, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_78);
        if ((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded)
        {
          (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_74_74 = (MR_Word) (&hlds__assertion_scalar_common_2[0]);
          mercury__assoc_list__from_corresponding_lists_3_p_0((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_74_74, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_74_74, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__PairsL_15, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__PairsR_18, &(env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Pairs_20);
          (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_47 = (MR_Word) ((MR_Unsigned) 0U);
          (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_75_75 = (MR_Word) (&hlds__assertion_scalar_common_2[1]);
          mercury__list__perm_2_p_0((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeInfo_75_75, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Pairs_20, &(env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__Var_35, hlds__assertion__is_associativity_assertion_goal_2_5_p_0_5, env_ptr);
        }
      }
    }
  }
}

static void MR_CALL 
hlds__assertion__is_associativity_assertion_goal_2_5_p_0_3(
  void * env_ptr_arg)
{
  struct hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0_s * env_ptr = (struct hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0_s *) (env_ptr_arg);

  mercury__list__perm_2_p_0((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeCtorInfo_13_115, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__QCalls_7, &(env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__RHSCalls_12, hlds__assertion__is_associativity_assertion_goal_2_5_p_0_2, env_ptr);
}

static void MR_CALL 
hlds__assertion__is_associativity_assertion_goal_2_5_p_0_4(
  void * env_ptr_arg)
{
  struct hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0_s * env_ptr = (struct hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0_s *) (env_ptr_arg);

  mercury__list__perm_2_p_0((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeCtorInfo_14_116, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__QCalls_7, &(env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__LHSCalls_11, hlds__assertion__is_associativity_assertion_goal_2_5_p_0_2, env_ptr);
}

static void MR_CALL 
hlds__assertion__is_associativity_assertion_goal_2_5_p_0_9(
  void * env_ptr_arg)
{
  struct hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0_s * env_ptr = (struct hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__commit_0) == 0)
    {
      {
        (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeCtorInfo_13_115 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
        mercury__list__perm_2_p_0((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeCtorInfo_13_115, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__PCalls_6, &(env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__LHSCalls_11, hlds__assertion__is_associativity_assertion_goal_2_5_p_0_3, env_ptr);
      }
      {
        (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeCtorInfo_14_116 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
        mercury__list__perm_2_p_0((env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__TypeCtorInfo_14_116, (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__PCalls_6, &(env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__RHSCalls_12, hlds__assertion__is_associativity_assertion_goal_2_5_p_0_4, env_ptr);
      }
      (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded = MR_TRUE;
}

static MR_bool MR_CALL 
hlds__assertion__is_associativity_assertion_goal_2_5_p_0(
  MR_Word PCalls_6,
  MR_Word QCalls_7,
  MR_Word UniversiallyQuantifiedVars_8,
  MR_Word CallVars_9,
  MR_Word * AssociativeVarsOutputVar_10)
{
  struct hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0_s env;

  (env).hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__PCalls_6 = PCalls_6;
  (env).hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__QCalls_7 = QCalls_7;
  (env).hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__UniversiallyQuantifiedVars_8 = UniversiallyQuantifiedVars_8;
  (env).hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__CallVars_9 = CallVars_9;
  (env).hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__AssociativeVarsOutputVar_10 = AssociativeVarsOutputVar_10;
  hlds__assertion__is_associativity_assertion_goal_2_5_p_0_9(&env);
  return (env).hlds__assertion__is_associativity_assertion_goal_2_5_p_0_env_0__succeeded;
}

static MR_bool MR_CALL 
hlds__assertion__process_one_side_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__assertion__IntroducedFrom__pred__process_one_side__491__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__assertion__process_one_side_6_p_0(
  MR_Word Goals_7,
  MR_Word UniversiallyQuantifiedVars_8,
  MR_Word * PredId_9,
  MR_Word * LinkingVar_10,
  MR_Word * Vars_11,
  MR_Word * VarsA_12)
{
  MR_bool succeeded = (Goals_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word TypeInfo_21_21;
  MR_Word TypeCtorInfo_34_44;
  MR_Word TypeInfo_35_45;
  MR_Word Vars0_13;
  MR_Word Var_16;
  MR_Integer Var_18;
  MR_Integer Var_22;
  MR_Word VarsB_29;
  MR_Word SetVarsA_34;
  MR_Word SetVarsB_35;
  MR_Word CommonVars_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_46;

  if (succeeded)
  {
    Var_37 = ((MR_Word) ((MR_hl_field(1, Goals_7, 0))));
    Var_39 = ((MR_Word) ((MR_hl_field(1, Goals_7, 1))));
    Var_38 = ((MR_Word) ((MR_hl_field(0, Var_37, 0))));
    succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_Integer) 2);
    if (succeeded)
    {
      *PredId_9 = ((MR_Word) ((MR_hl_field(2, Var_38, 0))));
      *VarsA_12 = ((MR_Word) ((MR_hl_field(2, Var_38, 2))));
      succeeded = (Var_39 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_40 = ((MR_Word) ((MR_hl_field(1, Var_39, 0))));
        Var_42 = ((MR_Word) ((MR_hl_field(1, Var_39, 1))));
        Var_41 = ((MR_Word) ((MR_hl_field(0, Var_40, 0))));
        succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_Integer) 2);
        if (succeeded)
        {
          Var_46 = ((MR_Word) ((MR_hl_field(2, Var_41, 0))));
          VarsB_29 = ((MR_Word) ((MR_hl_field(2, Var_41, 2))));
          succeeded = hlds__hlds_pred____Unify____pred_id_0_0(*PredId_9, Var_46);
          if (succeeded)
          {
            succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TypeCtorInfo_34_44 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              SetVarsA_34 = parse_tree__set_of_var__list_to_set_1_f_0(TypeCtorInfo_34_44, *VarsA_12);
              SetVarsB_35 = parse_tree__set_of_var__list_to_set_1_f_0(TypeCtorInfo_34_44, VarsB_29);
              CommonVars_36 = parse_tree__set_of_var__intersect_2_f_0(TypeCtorInfo_34_44, SetVarsA_34, SetVarsB_35);
              Var_43 = parse_tree__set_of_var__difference_2_f_0(TypeCtorInfo_34_44, CommonVars_36, UniversiallyQuantifiedVars_8);
              succeeded = parse_tree__set_of_var__is_singleton_2_p_0(TypeCtorInfo_34_44, Var_43, LinkingVar_10);
              if (succeeded)
              {
                TypeInfo_35_45 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
                mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_35_45, TypeInfo_35_45, *VarsA_12, VarsB_29, &Vars0_13);
                Var_16 = (MR_Word) (&hlds__assertion_scalar_common_2[5]);
                TypeInfo_21_21 = (MR_Word) (&hlds__assertion_scalar_common_2[0]);
                mercury__list__filter_3_p_0(TypeInfo_21_21, Var_16, Vars0_13, Vars_11);
                Var_18 = (MR_Integer) 3;
                mercury__list__length_2_p_0(TypeInfo_21_21, *Vars_11, &Var_22);
                succeeded = (Var_18 == Var_22);
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__assertion__is_commutativity_assertion_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word AssertId_6,
  MR_Word CallVars_7,
  MR_Word * CommutativeVars_8)
{
  MR_bool succeeded;
  MR_Word Goal_9;
  MR_Word P_10;
  MR_Word Q_11;
  MR_Word PredId_12;
  MR_Word VarsP_14;
  MR_Word VarsQ_20;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;

  hlds__assertion__assert_id_goal_3_p_0(ModuleInfo_5, AssertId_6, &Goal_9);
  succeeded = hlds__assertion__goal_is_equivalence_3_p_0(Goal_9, &P_10, &Q_11);
  if (succeeded)
  {
    Var_25 = ((MR_Word) ((MR_hl_field(0, P_10, 0))));
    succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 2);
    if (succeeded)
    {
      PredId_12 = ((MR_Word) ((MR_hl_field(2, Var_25, 0))));
      VarsP_14 = ((MR_Word) ((MR_hl_field(2, Var_25, 2))));
      Var_26 = ((MR_Word) ((MR_hl_field(0, Q_11, 0))));
      succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_27 = ((MR_Word) ((MR_hl_field(2, Var_26, 0))));
        VarsQ_20 = ((MR_Word) ((MR_hl_field(2, Var_26, 2))));
        succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_12, Var_27);
        if (succeeded)
          succeeded = hlds__assertion__commutative_var_ordering_4_p_0(VarsP_14, VarsQ_20, CallVars_7, CommutativeVars_8);
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__assertion__goal_is_equivalence_3_p_0(
  MR_Word Goal_4,
  MR_Word * P_5,
  MR_Word * Q_6)
{
  MR_bool succeeded;
  MR_Word TypeInfo_22_22;
  MR_Word TypeCtorInfo_24_40;
  MR_Word TypeCtorInfo_24_58;
  MR_Word A_7;
  MR_Word B_8;
  MR_Word Subst_10;
  MR_Word QB_13;
  MR_Word PB_14;
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, Goal_4, 0))));
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word GoalList_23;
  MR_Word GI_25;
  MR_Word NotQ_26;
  MR_Word Ps_27;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_39;
  MR_Word GoalList_41;
  MR_Word GI_43;
  MR_Word NotQ_44;
  MR_Word Ps_45;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_57;
  MR_Word P0_28;
  MR_Word Var_35;
  MR_Word P0_46;
  MR_Word Var_53;
  MR_Word Var_15;
  MR_Word Var_16;

  succeeded = ((((MR_tag((MR_Word) Var_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_17, 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_18 = ((MR_Unsigned) ((MR_hl_field(3, Var_17, 1))) & (MR_Integer) 1);
    Var_19 = ((MR_Word) ((MR_hl_field(3, Var_17, 2))));
    succeeded = (Var_18 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        A_7 = ((MR_Word) ((MR_hl_field(1, Var_19, 0))));
        Var_20 = ((MR_Word) ((MR_hl_field(1, Var_19, 1))));
        succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          B_8 = ((MR_Word) ((MR_hl_field(1, Var_20, 0))));
          Var_21 = ((MR_Word) ((MR_hl_field(1, Var_20, 1))));
          succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            TypeInfo_22_22 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
            mercury__map__init_1_p_0(TypeInfo_22_22, TypeInfo_22_22, &Subst_10);
            Var_30 = ((MR_Word) ((MR_hl_field(0, A_7, 0))));
            GI_25 = ((MR_Word) ((MR_hl_field(0, A_7, 1))));
            succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_31 = (MR_Word) ((MR_Word) (Var_30));
              Var_32 = ((MR_Word) ((MR_hl_field(0, Var_31, 0))));
              succeeded = ((((MR_tag((MR_Word) Var_32)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_32, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                Var_33 = ((MR_Unsigned) ((MR_hl_field(3, Var_32, 1))) & (MR_Integer) 1);
                GoalList_23 = ((MR_Word) ((MR_hl_field(3, Var_32, 2))));
                succeeded = (Var_33 == (MR_Integer) 0);
                if (succeeded)
                {
                  TypeCtorInfo_24_40 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                  Var_34 = mercury__list__reverse_1_f_0(TypeCtorInfo_24_40, GoalList_23);
                  succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    NotQ_26 = ((MR_Word) ((MR_hl_field(1, Var_34, 0))));
                    Ps_27 = ((MR_Word) ((MR_hl_field(1, Var_34, 1))));
                    succeeded = (Ps_27 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      P0_28 = ((MR_Word) ((MR_hl_field(1, Ps_27, 0))));
                      Var_35 = ((MR_Word) ((MR_hl_field(1, Ps_27, 1))));
                      succeeded = (Var_35 == (MR_Word) ((MR_Unsigned) 0U));
                    }
                    if (succeeded)
                      *P_5 = P0_28;
                    else
                    {
                      MR_Word Var_36;
                      MR_Word Var_38;

                      Var_38 = mercury__list__reverse_1_f_0(TypeCtorInfo_24_40, Ps_27);
                      {
                        Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(3, Var_36, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                        MR_hl_field(3, Var_36, 2) = ((MR_Box) (Var_38));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *P_5 = base;
                        MR_hl_field(0, base, 0) = ((MR_Box) (Var_36));
                        MR_hl_field(0, base, 1) = ((MR_Box) (GI_25));
                      }
                    }
                    Var_39 = ((MR_Word) ((MR_hl_field(0, NotQ_26, 0))));
                    succeeded = ((MR_tag((MR_Word) Var_39)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      *Q_6 = (MR_Word) ((MR_Word) (Var_39));
                      Var_48 = ((MR_Word) ((MR_hl_field(0, B_8, 0))));
                      GI_43 = ((MR_Word) ((MR_hl_field(0, B_8, 1))));
                      succeeded = ((MR_tag((MR_Word) Var_48)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_49 = (MR_Word) ((MR_Word) (Var_48));
                        Var_50 = ((MR_Word) ((MR_hl_field(0, Var_49, 0))));
                        succeeded = ((((MR_tag((MR_Word) Var_50)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_50, 0)))) == (MR_Integer) 2)));
                        if (succeeded)
                        {
                          Var_51 = ((MR_Unsigned) ((MR_hl_field(3, Var_50, 1))) & (MR_Integer) 1);
                          GoalList_41 = ((MR_Word) ((MR_hl_field(3, Var_50, 2))));
                          succeeded = (Var_51 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            TypeCtorInfo_24_58 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                            Var_52 = mercury__list__reverse_1_f_0(TypeCtorInfo_24_58, GoalList_41);
                            succeeded = (Var_52 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              NotQ_44 = ((MR_Word) ((MR_hl_field(1, Var_52, 0))));
                              Ps_45 = ((MR_Word) ((MR_hl_field(1, Var_52, 1))));
                              succeeded = (Ps_45 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                P0_46 = ((MR_Word) ((MR_hl_field(1, Ps_45, 0))));
                                Var_53 = ((MR_Word) ((MR_hl_field(1, Ps_45, 1))));
                                succeeded = (Var_53 == (MR_Word) ((MR_Unsigned) 0U));
                              }
                              if (succeeded)
                                QB_13 = P0_46;
                              else
                              {
                                MR_Word Var_54;
                                MR_Word Var_56;

                                Var_56 = mercury__list__reverse_1_f_0(TypeCtorInfo_24_58, Ps_45);
                                {
                                  Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                                  MR_hl_field(3, Var_54, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                                  MR_hl_field(3, Var_54, 2) = ((MR_Box) (Var_56));
                                }
                                {
                                  QB_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(0, QB_13, 0) = ((MR_Box) (Var_54));
                                  MR_hl_field(0, QB_13, 1) = ((MR_Box) (GI_43));
                                }
                              }
                              Var_57 = ((MR_Word) ((MR_hl_field(0, NotQ_44, 0))));
                              succeeded = ((MR_tag((MR_Word) Var_57)) == (MR_Integer) 0);
                              if (succeeded)
                              {
                                PB_14 = (MR_Word) ((MR_Word) (Var_57));
                                succeeded = hlds__assertion__equal_goals_4_p_0(*P_5, PB_14, Subst_10, &Var_15);
                                if (succeeded)
                                  succeeded = hlds__assertion__equal_goals_4_p_0(*Q_6, QB_13, Subst_10, &Var_16);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_Box MR_CALL 
hlds__assertion__equal_goals_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__assertion__equal_goals_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
hlds__assertion__equal_goals_4_p_0(
  MR_Word tscc_proc_1_input_1_GoalA_5,
  MR_Word tscc_proc_1_input_2_GoalB_6,
  MR_Word tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Subst_73)
{
  MR_Word tscc_proc_2_input_1_ShortHandA_5;
  MR_Word tscc_proc_2_input_2_ShortHandB_6;
  MR_Word tscc_proc_2_input_3_STATE_VARIABLE_Subst_0_12;
  MR_Word tscc_proc_3_input_1_RhsA_5;
  MR_Word tscc_proc_3_input_2_RhsB_6;
  MR_Word tscc_proc_3_input_3_STATE_VARIABLE_Subst_0_26;
  MR_bool tscc_output_succeeded;
  MR_Word tscc_output_1_STATE_VARIABLE_Subst_73;

  // The code for TSCC PROC 1: pred hlds.assertion.equal_goals/4-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred hlds.assertion.equal_goals/4-0
  ;
  // proc 2 in TSCC: pred hlds.assertion.equal_goals_shorthand/4-0
  ;
  // proc 3 in TSCC: pred hlds.assertion.equal_unification/4-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word GoalA_5 = tscc_proc_1_input_1_GoalA_5;
    MR_Word GoalB_6 = tscc_proc_1_input_2_GoalB_6;
    MR_Word STATE_VARIABLE_Subst_0_72 = tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;
    MR_Word STATE_VARIABLE_Subst_73;
    MR_bool succeeded = MR_TRUE;
    MR_Word GoalExprA_8 = ((MR_Word) ((MR_hl_field(0, GoalA_5, 0))));
    MR_Word GoalExprB_10 = ((MR_Word) ((MR_hl_field(0, GoalB_6, 0))));

    switch (MR_tag((MR_Word) GoalExprA_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoalA_47 = (MR_Word) ((MR_Word) (GoalExprA_8));
          MR_Word SubGoalB_48;
          MR_Word next_value_of_tscc_proc_1_input_1_GoalA_5;
          MR_Word next_value_of_tscc_proc_1_input_2_GoalB_6;
          MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;

          succeeded = ((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 0);
          if (succeeded)
          {
            SubGoalB_48 = (MR_Word) ((MR_Word) (GoalExprB_10));
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_GoalA_5 = SubGoalA_47;
            next_value_of_tscc_proc_1_input_2_GoalB_6 = SubGoalB_48;
            next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72 = STATE_VARIABLE_Subst_0_72;
            tscc_proc_1_input_1_GoalA_5 = next_value_of_tscc_proc_1_input_1_GoalA_5;
            tscc_proc_1_input_2_GoalB_6 = next_value_of_tscc_proc_1_input_2_GoalB_6;
            tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;
            goto top_of_proc_1;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word VarA_37 = ((MR_Word) ((MR_hl_field(1, GoalExprA_8, 0))));
          MR_Word RHSA_38 = ((MR_Word) ((MR_hl_field(1, GoalExprA_8, 1))));
          MR_Word VarB_42;
          MR_Word RHSB_43;
          MR_Word STATE_VARIABLE_Subst_5_78;
          MR_Word next_value_of_tscc_proc_3_input_1_RhsA_5;
          MR_Word next_value_of_tscc_proc_3_input_2_RhsB_6;
          MR_Word next_value_of_tscc_proc_3_input_3_STATE_VARIABLE_Subst_0_26;

          succeeded = ((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 1);
          if (succeeded)
          {
            VarB_42 = ((MR_Word) ((MR_hl_field(1, GoalExprB_10, 0))));
            RHSB_43 = ((MR_Word) ((MR_hl_field(1, GoalExprB_10, 1))));
            succeeded = hlds__assertion__equal_var_4_p_0(VarA_37, VarB_42, STATE_VARIABLE_Subst_0_72, &STATE_VARIABLE_Subst_5_78);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_3_input_1_RhsA_5 = RHSA_38;
              next_value_of_tscc_proc_3_input_2_RhsB_6 = RHSB_43;
              next_value_of_tscc_proc_3_input_3_STATE_VARIABLE_Subst_0_26 = STATE_VARIABLE_Subst_5_78;
              tscc_proc_3_input_1_RhsA_5 = next_value_of_tscc_proc_3_input_1_RhsA_5;
              tscc_proc_3_input_2_RhsB_6 = next_value_of_tscc_proc_3_input_2_RhsB_6;
              tscc_proc_3_input_3_STATE_VARIABLE_Subst_0_26 = next_value_of_tscc_proc_3_input_3_STATE_VARIABLE_Subst_0_26;
              goto top_of_proc_3;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_15 = ((MR_Word) ((MR_hl_field(2, GoalExprA_8, 0))));
          MR_Word ArgVarsA_17 = ((MR_Word) ((MR_hl_field(2, GoalExprA_8, 2))));
          MR_Word ArgVarsB_22;
          MR_Word Var_108;

          succeeded = ((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_108 = ((MR_Word) ((MR_hl_field(2, GoalExprB_10, 0))));
            ArgVarsB_22 = ((MR_Word) ((MR_hl_field(2, GoalExprB_10, 2))));
            succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_15, Var_108);
            if (succeeded)
              succeeded = hlds__assertion__equal_vars_4_p_0(ArgVarsA_17, ArgVarsB_22, STATE_VARIABLE_Subst_0_72, &STATE_VARIABLE_Subst_73);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExprA_8, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word CallDetails_26 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 1))));
              MR_Word ArgVarsA_92 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 2))));
              MR_Word ArgVarsB_93;
              MR_Word Var_109;

              succeeded = ((((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExprB_10, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                Var_109 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 1))));
                ArgVarsB_93 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 2))));
                succeeded = hlds__hlds_goal____Unify____generic_call_0_0(CallDetails_26, Var_109);
                if (succeeded)
                  succeeded = hlds__assertion__equal_vars_4_p_0(ArgVarsA_92, ArgVarsB_93, STATE_VARIABLE_Subst_0_72, &STATE_VARIABLE_Subst_73);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeCtorInfo_101_101;
              MR_Word TypeInfo_102_102;
              MR_Word Attributes_59 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 1))));
              MR_Word ArgsA_61 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 4))));
              MR_Word ExtraA_62 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 5))));
              MR_Word MaybeTraceA_63 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 6))));
              MR_Word ArgsB_66;
              MR_Word ExtraB_67;
              MR_Word MaybeTraceB_68;
              MR_Word Var_88;
              MR_Word Var_89;
              MR_Word PredId_98 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 2))));
              MR_Word VarsA_99;
              MR_Word VarsB_100;
              MR_Word Var_112;
              MR_Word Var_113;

              succeeded = ((((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExprB_10, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_112 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 1))));
                Var_113 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 2))));
                ArgsB_66 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 4))));
                ExtraB_67 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 5))));
                MaybeTraceB_68 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 6))));
                succeeded = parse_tree__prog_data_foreign____Unify____foreign_proc_attributes_0_0(Attributes_59, Var_112);
                if (succeeded)
                {
                  succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_98, Var_113);
                  if (succeeded)
                  {
                    succeeded = (ExtraA_62 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (ExtraB_67 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = (MaybeTraceA_63 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = (MaybeTraceB_68 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            TypeCtorInfo_101_101 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0);
                            TypeInfo_102_102 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
                            Var_88 = (MR_Word) (&hlds__assertion_scalar_common_2[3]);
                            VarsA_99 = mercury__list__map_2_f_0(TypeCtorInfo_101_101, TypeInfo_102_102, Var_88, ArgsA_61);
                            Var_89 = (MR_Word) (&hlds__assertion_scalar_common_2[4]);
                            VarsB_100 = mercury__list__map_2_f_0(TypeCtorInfo_101_101, TypeInfo_102_102, Var_89, ArgsB_66);
                            succeeded = hlds__assertion__equal_vars_4_p_0(VarsA_99, VarsB_100, STATE_VARIABLE_Subst_0_72, &STATE_VARIABLE_Subst_73);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_12 = ((MR_Unsigned) ((MR_hl_field(3, GoalExprA_8, 1))) & (MR_Integer) 1);
              MR_Word GoalsA_13 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 2))));
              MR_Word GoalsB_14;
              MR_Word Var_107;

              succeeded = ((((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExprB_10, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                Var_107 = ((MR_Unsigned) ((MR_hl_field(3, GoalExprB_10, 1))) & (MR_Integer) 1);
                GoalsB_14 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 2))));
                succeeded = (ConjType_12 == Var_107);
                if (succeeded)
                  succeeded = hlds__assertion__equal_goals_list_4_p_0(GoalsA_13, GoalsB_14, STATE_VARIABLE_Subst_0_72, &STATE_VARIABLE_Subst_73);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word GoalsA_94 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 1))));
              MR_Word GoalsB_95;

              succeeded = ((((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExprB_10, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                GoalsB_95 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 1))));
                succeeded = hlds__assertion__equal_goals_list_4_p_0(GoalsA_94, GoalsB_95, STATE_VARIABLE_Subst_0_72, &STATE_VARIABLE_Subst_73);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word TypeInfo_118_118;
              MR_Word Var_33 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 1))));
              MR_Word CanFail_34 = ((MR_Unsigned) ((MR_hl_field(3, GoalExprA_8, 2))) & (MR_Integer) 1);
              MR_Word CasesA_35 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 3))));
              MR_Word CasesB_36;
              MR_Word Var_110;
              MR_Word Var_111;

              succeeded = ((((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExprB_10, 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                Var_110 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 1))));
                Var_111 = ((MR_Unsigned) ((MR_hl_field(3, GoalExprB_10, 2))) & (MR_Integer) 1);
                CasesB_36 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 3))));
                TypeInfo_118_118 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_118_118, ((MR_Box) (Var_33)), ((MR_Box) (Var_110)));
                if (succeeded)
                {
                  succeeded = (CanFail_34 == Var_111);
                  if (succeeded)
                    succeeded = hlds__assertion__equal_goals_cases_4_p_0(CasesA_35, CasesB_36, STATE_VARIABLE_Subst_0_72, &STATE_VARIABLE_Subst_73);
                }
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ReasonA_49 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 1))));
              MR_Word ReasonB_50;
              MR_Word STATE_VARIABLE_Subst_9_82;
              MR_Word SubGoalA_96 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 2))));
              MR_Word SubGoalB_97;
              MR_Word next_value_of_tscc_proc_1_input_1_GoalA_5;
              MR_Word next_value_of_tscc_proc_1_input_2_GoalB_6;
              MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;

              succeeded = ((((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExprB_10, 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ReasonB_50 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 1))));
                SubGoalB_97 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 2))));
                succeeded = hlds__assertion__equal_reason_4_p_0(ReasonA_49, ReasonB_50, STATE_VARIABLE_Subst_0_72, &STATE_VARIABLE_Subst_9_82);
                if (succeeded)
                {
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_GoalA_5 = SubGoalA_96;
                  next_value_of_tscc_proc_1_input_2_GoalB_6 = SubGoalB_97;
                  next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72 = STATE_VARIABLE_Subst_9_82;
                  tscc_proc_1_input_1_GoalA_5 = next_value_of_tscc_proc_1_input_1_GoalA_5;
                  tscc_proc_1_input_2_GoalB_6 = next_value_of_tscc_proc_1_input_2_GoalB_6;
                  tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;
                  goto top_of_proc_1;
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word VarsA_51 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 1))));
              MR_Word CondA_52 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 2))));
              MR_Word ThenA_53 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 3))));
              MR_Word ElseA_54 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 4))));
              MR_Word VarsB_55;
              MR_Word CondB_56;
              MR_Word ThenB_57;
              MR_Word ElseB_58;
              MR_Word STATE_VARIABLE_Subst_11_84;
              MR_Word STATE_VARIABLE_Subst_12_85;
              MR_Word STATE_VARIABLE_Subst_13_86;
              MR_Word next_value_of_tscc_proc_1_input_1_GoalA_5;
              MR_Word next_value_of_tscc_proc_1_input_2_GoalB_6;
              MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;

              succeeded = ((((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExprB_10, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                VarsB_55 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 1))));
                CondB_56 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 2))));
                ThenB_57 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 3))));
                ElseB_58 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 4))));
                succeeded = hlds__assertion__equal_vars_4_p_0(VarsA_51, VarsB_55, STATE_VARIABLE_Subst_0_72, &STATE_VARIABLE_Subst_11_84);
                if (succeeded)
                {
                  succeeded = hlds__assertion__equal_goals_4_p_0(CondA_52, CondB_56, STATE_VARIABLE_Subst_11_84, &STATE_VARIABLE_Subst_12_85);
                  if (succeeded)
                  {
                    succeeded = hlds__assertion__equal_goals_4_p_0(ThenA_53, ThenB_57, STATE_VARIABLE_Subst_12_85, &STATE_VARIABLE_Subst_13_86);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_GoalA_5 = ElseA_54;
                      next_value_of_tscc_proc_1_input_2_GoalB_6 = ElseB_58;
                      next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72 = STATE_VARIABLE_Subst_13_86;
                      tscc_proc_1_input_1_GoalA_5 = next_value_of_tscc_proc_1_input_1_GoalA_5;
                      tscc_proc_1_input_2_GoalB_6 = next_value_of_tscc_proc_1_input_2_GoalB_6;
                      tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;
                      goto top_of_proc_1;
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHandA_70 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 1))));
              MR_Word ShortHandB_71;
              MR_Word next_value_of_tscc_proc_2_input_1_ShortHandA_5;
              MR_Word next_value_of_tscc_proc_2_input_2_ShortHandB_6;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_Subst_0_12;

              succeeded = ((((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExprB_10, 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ShortHandB_71 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 1))));
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_ShortHandA_5 = ShortHandA_70;
                next_value_of_tscc_proc_2_input_2_ShortHandB_6 = ShortHandB_71;
                next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_Subst_0_12 = STATE_VARIABLE_Subst_0_72;
                tscc_proc_2_input_1_ShortHandA_5 = next_value_of_tscc_proc_2_input_1_ShortHandA_5;
                tscc_proc_2_input_2_ShortHandB_6 = next_value_of_tscc_proc_2_input_2_ShortHandB_6;
                tscc_proc_2_input_3_STATE_VARIABLE_Subst_0_12 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_Subst_0_12;
                goto top_of_proc_2;
              }
            }
            break;
        }
        break;
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Subst_73 = STATE_VARIABLE_Subst_73;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word ShortHandA_5 = tscc_proc_2_input_1_ShortHandA_5;
    MR_Word ShortHandB_6 = tscc_proc_2_input_2_ShortHandB_6;
    MR_Word STATE_VARIABLE_Subst_0_12 = tscc_proc_2_input_3_STATE_VARIABLE_Subst_0_12;
    MR_Word STATE_VARIABLE_Subst_13;
    MR_bool succeeded = ((MR_tag((MR_Word) ShortHandA_5)) == (MR_Integer) 0);
    MR_Word LeftGoalA_8;
    MR_Word RightGoalA_9;
    MR_Word LeftGoalB_10;
    MR_Word RightGoalB_11;
    MR_Word STATE_VARIABLE_Subst_1_14;
    MR_Word next_value_of_tscc_proc_1_input_1_GoalA_5;
    MR_Word next_value_of_tscc_proc_1_input_2_GoalB_6;
    MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;

    if (succeeded)
    {
      LeftGoalA_8 = ((MR_Word) ((MR_hl_field(0, ShortHandA_5, 0))));
      RightGoalA_9 = ((MR_Word) ((MR_hl_field(0, ShortHandA_5, 1))));
      succeeded = ((MR_tag((MR_Word) ShortHandB_6)) == (MR_Integer) 0);
      if (succeeded)
      {
        LeftGoalB_10 = ((MR_Word) ((MR_hl_field(0, ShortHandB_6, 0))));
        RightGoalB_11 = ((MR_Word) ((MR_hl_field(0, ShortHandB_6, 1))));
        succeeded = hlds__assertion__equal_goals_4_p_0(LeftGoalA_8, LeftGoalB_10, STATE_VARIABLE_Subst_0_12, &STATE_VARIABLE_Subst_1_14);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_GoalA_5 = RightGoalA_9;
          next_value_of_tscc_proc_1_input_2_GoalB_6 = RightGoalB_11;
          next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72 = STATE_VARIABLE_Subst_1_14;
          tscc_proc_1_input_1_GoalA_5 = next_value_of_tscc_proc_1_input_1_GoalA_5;
          tscc_proc_1_input_2_GoalB_6 = next_value_of_tscc_proc_1_input_2_GoalB_6;
          tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;
          goto top_of_proc_1;
        }
      }
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Subst_73 = STATE_VARIABLE_Subst_13;
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Word RhsA_5 = tscc_proc_3_input_1_RhsA_5;
    MR_Word RhsB_6 = tscc_proc_3_input_2_RhsB_6;
    MR_Word STATE_VARIABLE_Subst_0_26 = tscc_proc_3_input_3_STATE_VARIABLE_Subst_0_26;
    MR_Word STATE_VARIABLE_Subst_27;
    MR_bool succeeded = MR_TRUE;

    switch (MR_tag((MR_Word) RhsA_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word A_8 = ((MR_Word) ((MR_hl_field(0, RhsA_5, 0))));
          MR_Word B_9;
          MR_Word SubstVA_41;
          MR_Word TypeInfo_11_42;
          MR_Box conv2_SubstVA_41;

          succeeded = ((MR_tag((MR_Word) RhsB_6)) == (MR_Integer) 0);
          if (succeeded)
          {
            B_9 = ((MR_Word) ((MR_hl_field(0, RhsB_6, 0))));
            TypeInfo_11_42 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
            succeeded = mercury__map__search_3_p_0(TypeInfo_11_42, TypeInfo_11_42, STATE_VARIABLE_Subst_0_26, ((MR_Box) (A_8)), &conv2_SubstVA_41);
            if (succeeded)
            {
              SubstVA_41 = ((MR_Word) (conv2_SubstVA_41));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__assertion_scalar_common_1[0]), ((MR_Box) (SubstVA_41)), ((MR_Box) (B_9)));
              if (succeeded)
              {
                STATE_VARIABLE_Subst_27 = STATE_VARIABLE_Subst_0_26;
                succeeded = MR_TRUE;
              }
            }
            else
              succeeded = mercury__map__insert_4_p_0((MR_Word) (&hlds__assertion_scalar_common_1[0]), (MR_Word) (&hlds__assertion_scalar_common_1[0]), ((MR_Box) (A_8)), ((MR_Box) (B_9)), STATE_VARIABLE_Subst_0_26, &STATE_VARIABLE_Subst_27);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ConsId_10 = ((MR_Word) ((MR_hl_field(1, RhsA_5, 0))));
          MR_Word E_11 = ((MR_Unsigned) ((MR_hl_field(1, RhsA_5, 1))) & (MR_Integer) 1);
          MR_Word VarsA_12 = ((MR_Word) ((MR_hl_field(1, RhsA_5, 2))));
          MR_Word VarsB_13;
          MR_Word Var_34;
          MR_Word Var_35;

          succeeded = ((MR_tag((MR_Word) RhsB_6)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_34 = ((MR_Word) ((MR_hl_field(1, RhsB_6, 0))));
            Var_35 = ((MR_Unsigned) ((MR_hl_field(1, RhsB_6, 1))) & (MR_Integer) 1);
            VarsB_13 = ((MR_Word) ((MR_hl_field(1, RhsB_6, 2))));
            succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsId_10, Var_34);
            if (succeeded)
            {
              succeeded = (E_11 == Var_35);
              if (succeeded)
                succeeded = hlds__assertion__equal_vars_4_p_0(VarsA_12, VarsB_13, STATE_VARIABLE_Subst_0_26, &STATE_VARIABLE_Subst_27);
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_32_32;
          MR_Word TypeCtorInfo_33_33;
          MR_Word Purity_14 = ((((MR_Unsigned) ((MR_hl_field(2, RhsA_5, 0))) >> 2)) & (MR_Integer) 3);
          MR_Word Groundness_15 = ((((MR_Unsigned) ((MR_hl_field(2, RhsA_5, 0))) >> 1)) & (MR_Integer) 1);
          MR_Word PredOrFunc_16 = ((MR_Unsigned) ((MR_hl_field(2, RhsA_5, 0))) & (MR_Integer) 1);
          MR_Word NonLocalVarsA_17 = ((MR_Word) ((MR_hl_field(2, RhsA_5, 1))));
          MR_Word ArgVarsModesA_18 = ((MR_Word) ((MR_hl_field(2, RhsA_5, 2))));
          MR_Word Det_19 = ((MR_Unsigned) ((MR_hl_field(2, RhsA_5, 3))) & (MR_Integer) 7);
          MR_Word GoalA_20 = ((MR_Word) ((MR_hl_field(2, RhsA_5, 4))));
          MR_Word NonLocalVarsB_21;
          MR_Word ArgVarsModesB_22;
          MR_Word GoalB_23;
          MR_Word ArgVarsA_24;
          MR_Word ArgVarsB_25;
          MR_Word STATE_VARIABLE_Subst_3_30;
          MR_Word STATE_VARIABLE_Subst_4_31;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Word next_value_of_tscc_proc_1_input_1_GoalA_5;
          MR_Word next_value_of_tscc_proc_1_input_2_GoalB_6;
          MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;

          succeeded = ((MR_tag((MR_Word) RhsB_6)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_36 = ((((MR_Unsigned) ((MR_hl_field(2, RhsB_6, 0))) >> 2)) & (MR_Integer) 3);
            Var_37 = ((((MR_Unsigned) ((MR_hl_field(2, RhsB_6, 0))) >> 1)) & (MR_Integer) 1);
            Var_38 = ((MR_Unsigned) ((MR_hl_field(2, RhsB_6, 0))) & (MR_Integer) 1);
            NonLocalVarsB_21 = ((MR_Word) ((MR_hl_field(2, RhsB_6, 1))));
            ArgVarsModesB_22 = ((MR_Word) ((MR_hl_field(2, RhsB_6, 2))));
            Var_39 = ((MR_Unsigned) ((MR_hl_field(2, RhsB_6, 3))) & (MR_Integer) 7);
            GoalB_23 = ((MR_Word) ((MR_hl_field(2, RhsB_6, 4))));
            succeeded = (Purity_14 == Var_36);
            if (succeeded)
            {
              succeeded = (Groundness_15 == Var_37);
              if (succeeded)
              {
                succeeded = (PredOrFunc_16 == Var_38);
                if (succeeded)
                {
                  succeeded = (Det_19 == Var_39);
                  if (succeeded)
                  {
                    TypeInfo_32_32 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
                    TypeCtorInfo_33_33 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
                    mercury__assoc_list__keys_2_p_0(TypeInfo_32_32, TypeCtorInfo_33_33, ArgVarsModesA_18, &ArgVarsA_24);
                    mercury__assoc_list__keys_2_p_0(TypeInfo_32_32, TypeCtorInfo_33_33, ArgVarsModesB_22, &ArgVarsB_25);
                    succeeded = hlds__assertion__equal_vars_4_p_0(NonLocalVarsA_17, NonLocalVarsB_21, STATE_VARIABLE_Subst_0_26, &STATE_VARIABLE_Subst_3_30);
                    if (succeeded)
                    {
                      succeeded = hlds__assertion__equal_vars_4_p_0(ArgVarsA_24, ArgVarsB_25, STATE_VARIABLE_Subst_3_30, &STATE_VARIABLE_Subst_4_31);
                      if (succeeded)
                      {
                        // direct tailcall eliminated
                        ;
                        next_value_of_tscc_proc_1_input_1_GoalA_5 = GoalA_20;
                        next_value_of_tscc_proc_1_input_2_GoalB_6 = GoalB_23;
                        next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72 = STATE_VARIABLE_Subst_4_31;
                        tscc_proc_1_input_1_GoalA_5 = next_value_of_tscc_proc_1_input_1_GoalA_5;
                        tscc_proc_1_input_2_GoalB_6 = next_value_of_tscc_proc_1_input_2_GoalB_6;
                        tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;
                        goto top_of_proc_1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        break;
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Subst_73 = STATE_VARIABLE_Subst_27;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Subst_73 = tscc_output_1_STATE_VARIABLE_Subst_73;
  return tscc_output_succeeded;
}

static MR_bool MR_CALL 
hlds__assertion__equal_goals_shorthand_4_p_0(
  MR_Word tscc_proc_2_input_1_ShortHandA_5,
  MR_Word tscc_proc_2_input_2_ShortHandB_6,
  MR_Word tscc_proc_2_input_3_STATE_VARIABLE_Subst_0_12,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Subst_73)
{
  MR_Word tscc_proc_1_input_1_GoalA_5;
  MR_Word tscc_proc_1_input_2_GoalB_6;
  MR_Word tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;
  MR_Word tscc_proc_3_input_1_RhsA_5;
  MR_Word tscc_proc_3_input_2_RhsB_6;
  MR_Word tscc_proc_3_input_3_STATE_VARIABLE_Subst_0_26;
  MR_bool tscc_output_succeeded;
  MR_Word tscc_output_1_STATE_VARIABLE_Subst_73;

  // The code for TSCC PROC 2: pred hlds.assertion.equal_goals_shorthand/4-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred hlds.assertion.equal_goals/4-0
  ;
  // proc 2 in TSCC: pred hlds.assertion.equal_goals_shorthand/4-0
  ;
  // proc 3 in TSCC: pred hlds.assertion.equal_unification/4-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word GoalA_5 = tscc_proc_1_input_1_GoalA_5;
    MR_Word GoalB_6 = tscc_proc_1_input_2_GoalB_6;
    MR_Word STATE_VARIABLE_Subst_0_72 = tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;
    MR_Word STATE_VARIABLE_Subst_73;
    MR_bool succeeded = MR_TRUE;
    MR_Word GoalExprA_8 = ((MR_Word) ((MR_hl_field(0, GoalA_5, 0))));
    MR_Word GoalExprB_10 = ((MR_Word) ((MR_hl_field(0, GoalB_6, 0))));

    switch (MR_tag((MR_Word) GoalExprA_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoalA_47 = (MR_Word) ((MR_Word) (GoalExprA_8));
          MR_Word SubGoalB_48;
          MR_Word next_value_of_tscc_proc_1_input_1_GoalA_5;
          MR_Word next_value_of_tscc_proc_1_input_2_GoalB_6;
          MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;

          succeeded = ((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 0);
          if (succeeded)
          {
            SubGoalB_48 = (MR_Word) ((MR_Word) (GoalExprB_10));
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_GoalA_5 = SubGoalA_47;
            next_value_of_tscc_proc_1_input_2_GoalB_6 = SubGoalB_48;
            next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72 = STATE_VARIABLE_Subst_0_72;
            tscc_proc_1_input_1_GoalA_5 = next_value_of_tscc_proc_1_input_1_GoalA_5;
            tscc_proc_1_input_2_GoalB_6 = next_value_of_tscc_proc_1_input_2_GoalB_6;
            tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;
            goto top_of_proc_1;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word VarA_37 = ((MR_Word) ((MR_hl_field(1, GoalExprA_8, 0))));
          MR_Word RHSA_38 = ((MR_Word) ((MR_hl_field(1, GoalExprA_8, 1))));
          MR_Word VarB_42;
          MR_Word RHSB_43;
          MR_Word STATE_VARIABLE_Subst_5_78;
          MR_Word next_value_of_tscc_proc_3_input_1_RhsA_5;
          MR_Word next_value_of_tscc_proc_3_input_2_RhsB_6;
          MR_Word next_value_of_tscc_proc_3_input_3_STATE_VARIABLE_Subst_0_26;

          succeeded = ((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 1);
          if (succeeded)
          {
            VarB_42 = ((MR_Word) ((MR_hl_field(1, GoalExprB_10, 0))));
            RHSB_43 = ((MR_Word) ((MR_hl_field(1, GoalExprB_10, 1))));
            succeeded = hlds__assertion__equal_var_4_p_0(VarA_37, VarB_42, STATE_VARIABLE_Subst_0_72, &STATE_VARIABLE_Subst_5_78);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_3_input_1_RhsA_5 = RHSA_38;
              next_value_of_tscc_proc_3_input_2_RhsB_6 = RHSB_43;
              next_value_of_tscc_proc_3_input_3_STATE_VARIABLE_Subst_0_26 = STATE_VARIABLE_Subst_5_78;
              tscc_proc_3_input_1_RhsA_5 = next_value_of_tscc_proc_3_input_1_RhsA_5;
              tscc_proc_3_input_2_RhsB_6 = next_value_of_tscc_proc_3_input_2_RhsB_6;
              tscc_proc_3_input_3_STATE_VARIABLE_Subst_0_26 = next_value_of_tscc_proc_3_input_3_STATE_VARIABLE_Subst_0_26;
              goto top_of_proc_3;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_15 = ((MR_Word) ((MR_hl_field(2, GoalExprA_8, 0))));
          MR_Word ArgVarsA_17 = ((MR_Word) ((MR_hl_field(2, GoalExprA_8, 2))));
          MR_Word ArgVarsB_22;
          MR_Word Var_108;

          succeeded = ((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_108 = ((MR_Word) ((MR_hl_field(2, GoalExprB_10, 0))));
            ArgVarsB_22 = ((MR_Word) ((MR_hl_field(2, GoalExprB_10, 2))));
            succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_15, Var_108);
            if (succeeded)
              succeeded = hlds__assertion__equal_vars_4_p_0(ArgVarsA_17, ArgVarsB_22, STATE_VARIABLE_Subst_0_72, &STATE_VARIABLE_Subst_73);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExprA_8, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word CallDetails_26 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 1))));
              MR_Word ArgVarsA_92 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 2))));
              MR_Word ArgVarsB_93;
              MR_Word Var_109;

              succeeded = ((((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExprB_10, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                Var_109 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 1))));
                ArgVarsB_93 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 2))));
                succeeded = hlds__hlds_goal____Unify____generic_call_0_0(CallDetails_26, Var_109);
                if (succeeded)
                  succeeded = hlds__assertion__equal_vars_4_p_0(ArgVarsA_92, ArgVarsB_93, STATE_VARIABLE_Subst_0_72, &STATE_VARIABLE_Subst_73);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeCtorInfo_101_101;
              MR_Word TypeInfo_102_102;
              MR_Word Attributes_59 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 1))));
              MR_Word ArgsA_61 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 4))));
              MR_Word ExtraA_62 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 5))));
              MR_Word MaybeTraceA_63 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 6))));
              MR_Word ArgsB_66;
              MR_Word ExtraB_67;
              MR_Word MaybeTraceB_68;
              MR_Word Var_88;
              MR_Word Var_89;
              MR_Word PredId_98 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 2))));
              MR_Word VarsA_99;
              MR_Word VarsB_100;
              MR_Word Var_112;
              MR_Word Var_113;

              succeeded = ((((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExprB_10, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_112 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 1))));
                Var_113 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 2))));
                ArgsB_66 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 4))));
                ExtraB_67 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 5))));
                MaybeTraceB_68 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 6))));
                succeeded = parse_tree__prog_data_foreign____Unify____foreign_proc_attributes_0_0(Attributes_59, Var_112);
                if (succeeded)
                {
                  succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_98, Var_113);
                  if (succeeded)
                  {
                    succeeded = (ExtraA_62 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (ExtraB_67 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = (MaybeTraceA_63 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = (MaybeTraceB_68 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            TypeCtorInfo_101_101 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0);
                            TypeInfo_102_102 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
                            Var_88 = (MR_Word) (&hlds__assertion_scalar_common_2[3]);
                            VarsA_99 = mercury__list__map_2_f_0(TypeCtorInfo_101_101, TypeInfo_102_102, Var_88, ArgsA_61);
                            Var_89 = (MR_Word) (&hlds__assertion_scalar_common_2[4]);
                            VarsB_100 = mercury__list__map_2_f_0(TypeCtorInfo_101_101, TypeInfo_102_102, Var_89, ArgsB_66);
                            succeeded = hlds__assertion__equal_vars_4_p_0(VarsA_99, VarsB_100, STATE_VARIABLE_Subst_0_72, &STATE_VARIABLE_Subst_73);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_12 = ((MR_Unsigned) ((MR_hl_field(3, GoalExprA_8, 1))) & (MR_Integer) 1);
              MR_Word GoalsA_13 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 2))));
              MR_Word GoalsB_14;
              MR_Word Var_107;

              succeeded = ((((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExprB_10, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                Var_107 = ((MR_Unsigned) ((MR_hl_field(3, GoalExprB_10, 1))) & (MR_Integer) 1);
                GoalsB_14 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 2))));
                succeeded = (ConjType_12 == Var_107);
                if (succeeded)
                  succeeded = hlds__assertion__equal_goals_list_4_p_0(GoalsA_13, GoalsB_14, STATE_VARIABLE_Subst_0_72, &STATE_VARIABLE_Subst_73);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word GoalsA_94 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 1))));
              MR_Word GoalsB_95;

              succeeded = ((((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExprB_10, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                GoalsB_95 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 1))));
                succeeded = hlds__assertion__equal_goals_list_4_p_0(GoalsA_94, GoalsB_95, STATE_VARIABLE_Subst_0_72, &STATE_VARIABLE_Subst_73);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word TypeInfo_118_118;
              MR_Word Var_33 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 1))));
              MR_Word CanFail_34 = ((MR_Unsigned) ((MR_hl_field(3, GoalExprA_8, 2))) & (MR_Integer) 1);
              MR_Word CasesA_35 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 3))));
              MR_Word CasesB_36;
              MR_Word Var_110;
              MR_Word Var_111;

              succeeded = ((((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExprB_10, 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                Var_110 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 1))));
                Var_111 = ((MR_Unsigned) ((MR_hl_field(3, GoalExprB_10, 2))) & (MR_Integer) 1);
                CasesB_36 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 3))));
                TypeInfo_118_118 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_118_118, ((MR_Box) (Var_33)), ((MR_Box) (Var_110)));
                if (succeeded)
                {
                  succeeded = (CanFail_34 == Var_111);
                  if (succeeded)
                    succeeded = hlds__assertion__equal_goals_cases_4_p_0(CasesA_35, CasesB_36, STATE_VARIABLE_Subst_0_72, &STATE_VARIABLE_Subst_73);
                }
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ReasonA_49 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 1))));
              MR_Word ReasonB_50;
              MR_Word STATE_VARIABLE_Subst_9_82;
              MR_Word SubGoalA_96 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 2))));
              MR_Word SubGoalB_97;
              MR_Word next_value_of_tscc_proc_1_input_1_GoalA_5;
              MR_Word next_value_of_tscc_proc_1_input_2_GoalB_6;
              MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;

              succeeded = ((((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExprB_10, 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ReasonB_50 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 1))));
                SubGoalB_97 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 2))));
                succeeded = hlds__assertion__equal_reason_4_p_0(ReasonA_49, ReasonB_50, STATE_VARIABLE_Subst_0_72, &STATE_VARIABLE_Subst_9_82);
                if (succeeded)
                {
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_GoalA_5 = SubGoalA_96;
                  next_value_of_tscc_proc_1_input_2_GoalB_6 = SubGoalB_97;
                  next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72 = STATE_VARIABLE_Subst_9_82;
                  tscc_proc_1_input_1_GoalA_5 = next_value_of_tscc_proc_1_input_1_GoalA_5;
                  tscc_proc_1_input_2_GoalB_6 = next_value_of_tscc_proc_1_input_2_GoalB_6;
                  tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;
                  goto top_of_proc_1;
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word VarsA_51 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 1))));
              MR_Word CondA_52 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 2))));
              MR_Word ThenA_53 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 3))));
              MR_Word ElseA_54 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 4))));
              MR_Word VarsB_55;
              MR_Word CondB_56;
              MR_Word ThenB_57;
              MR_Word ElseB_58;
              MR_Word STATE_VARIABLE_Subst_11_84;
              MR_Word STATE_VARIABLE_Subst_12_85;
              MR_Word STATE_VARIABLE_Subst_13_86;
              MR_Word next_value_of_tscc_proc_1_input_1_GoalA_5;
              MR_Word next_value_of_tscc_proc_1_input_2_GoalB_6;
              MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;

              succeeded = ((((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExprB_10, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                VarsB_55 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 1))));
                CondB_56 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 2))));
                ThenB_57 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 3))));
                ElseB_58 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 4))));
                succeeded = hlds__assertion__equal_vars_4_p_0(VarsA_51, VarsB_55, STATE_VARIABLE_Subst_0_72, &STATE_VARIABLE_Subst_11_84);
                if (succeeded)
                {
                  succeeded = hlds__assertion__equal_goals_4_p_0(CondA_52, CondB_56, STATE_VARIABLE_Subst_11_84, &STATE_VARIABLE_Subst_12_85);
                  if (succeeded)
                  {
                    succeeded = hlds__assertion__equal_goals_4_p_0(ThenA_53, ThenB_57, STATE_VARIABLE_Subst_12_85, &STATE_VARIABLE_Subst_13_86);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_GoalA_5 = ElseA_54;
                      next_value_of_tscc_proc_1_input_2_GoalB_6 = ElseB_58;
                      next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72 = STATE_VARIABLE_Subst_13_86;
                      tscc_proc_1_input_1_GoalA_5 = next_value_of_tscc_proc_1_input_1_GoalA_5;
                      tscc_proc_1_input_2_GoalB_6 = next_value_of_tscc_proc_1_input_2_GoalB_6;
                      tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;
                      goto top_of_proc_1;
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHandA_70 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 1))));
              MR_Word ShortHandB_71;
              MR_Word next_value_of_tscc_proc_2_input_1_ShortHandA_5;
              MR_Word next_value_of_tscc_proc_2_input_2_ShortHandB_6;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_Subst_0_12;

              succeeded = ((((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExprB_10, 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ShortHandB_71 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 1))));
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_ShortHandA_5 = ShortHandA_70;
                next_value_of_tscc_proc_2_input_2_ShortHandB_6 = ShortHandB_71;
                next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_Subst_0_12 = STATE_VARIABLE_Subst_0_72;
                tscc_proc_2_input_1_ShortHandA_5 = next_value_of_tscc_proc_2_input_1_ShortHandA_5;
                tscc_proc_2_input_2_ShortHandB_6 = next_value_of_tscc_proc_2_input_2_ShortHandB_6;
                tscc_proc_2_input_3_STATE_VARIABLE_Subst_0_12 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_Subst_0_12;
                goto top_of_proc_2;
              }
            }
            break;
        }
        break;
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Subst_73 = STATE_VARIABLE_Subst_73;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word ShortHandA_5 = tscc_proc_2_input_1_ShortHandA_5;
    MR_Word ShortHandB_6 = tscc_proc_2_input_2_ShortHandB_6;
    MR_Word STATE_VARIABLE_Subst_0_12 = tscc_proc_2_input_3_STATE_VARIABLE_Subst_0_12;
    MR_Word STATE_VARIABLE_Subst_13;
    MR_bool succeeded = ((MR_tag((MR_Word) ShortHandA_5)) == (MR_Integer) 0);
    MR_Word LeftGoalA_8;
    MR_Word RightGoalA_9;
    MR_Word LeftGoalB_10;
    MR_Word RightGoalB_11;
    MR_Word STATE_VARIABLE_Subst_1_14;
    MR_Word next_value_of_tscc_proc_1_input_1_GoalA_5;
    MR_Word next_value_of_tscc_proc_1_input_2_GoalB_6;
    MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;

    if (succeeded)
    {
      LeftGoalA_8 = ((MR_Word) ((MR_hl_field(0, ShortHandA_5, 0))));
      RightGoalA_9 = ((MR_Word) ((MR_hl_field(0, ShortHandA_5, 1))));
      succeeded = ((MR_tag((MR_Word) ShortHandB_6)) == (MR_Integer) 0);
      if (succeeded)
      {
        LeftGoalB_10 = ((MR_Word) ((MR_hl_field(0, ShortHandB_6, 0))));
        RightGoalB_11 = ((MR_Word) ((MR_hl_field(0, ShortHandB_6, 1))));
        succeeded = hlds__assertion__equal_goals_4_p_0(LeftGoalA_8, LeftGoalB_10, STATE_VARIABLE_Subst_0_12, &STATE_VARIABLE_Subst_1_14);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_GoalA_5 = RightGoalA_9;
          next_value_of_tscc_proc_1_input_2_GoalB_6 = RightGoalB_11;
          next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72 = STATE_VARIABLE_Subst_1_14;
          tscc_proc_1_input_1_GoalA_5 = next_value_of_tscc_proc_1_input_1_GoalA_5;
          tscc_proc_1_input_2_GoalB_6 = next_value_of_tscc_proc_1_input_2_GoalB_6;
          tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;
          goto top_of_proc_1;
        }
      }
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Subst_73 = STATE_VARIABLE_Subst_13;
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Word RhsA_5 = tscc_proc_3_input_1_RhsA_5;
    MR_Word RhsB_6 = tscc_proc_3_input_2_RhsB_6;
    MR_Word STATE_VARIABLE_Subst_0_26 = tscc_proc_3_input_3_STATE_VARIABLE_Subst_0_26;
    MR_Word STATE_VARIABLE_Subst_27;
    MR_bool succeeded = MR_TRUE;

    switch (MR_tag((MR_Word) RhsA_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word A_8 = ((MR_Word) ((MR_hl_field(0, RhsA_5, 0))));
          MR_Word B_9;
          MR_Word SubstVA_41;
          MR_Word TypeInfo_11_42;
          MR_Box conv2_SubstVA_41;

          succeeded = ((MR_tag((MR_Word) RhsB_6)) == (MR_Integer) 0);
          if (succeeded)
          {
            B_9 = ((MR_Word) ((MR_hl_field(0, RhsB_6, 0))));
            TypeInfo_11_42 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
            succeeded = mercury__map__search_3_p_0(TypeInfo_11_42, TypeInfo_11_42, STATE_VARIABLE_Subst_0_26, ((MR_Box) (A_8)), &conv2_SubstVA_41);
            if (succeeded)
            {
              SubstVA_41 = ((MR_Word) (conv2_SubstVA_41));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__assertion_scalar_common_1[0]), ((MR_Box) (SubstVA_41)), ((MR_Box) (B_9)));
              if (succeeded)
              {
                STATE_VARIABLE_Subst_27 = STATE_VARIABLE_Subst_0_26;
                succeeded = MR_TRUE;
              }
            }
            else
              succeeded = mercury__map__insert_4_p_0((MR_Word) (&hlds__assertion_scalar_common_1[0]), (MR_Word) (&hlds__assertion_scalar_common_1[0]), ((MR_Box) (A_8)), ((MR_Box) (B_9)), STATE_VARIABLE_Subst_0_26, &STATE_VARIABLE_Subst_27);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ConsId_10 = ((MR_Word) ((MR_hl_field(1, RhsA_5, 0))));
          MR_Word E_11 = ((MR_Unsigned) ((MR_hl_field(1, RhsA_5, 1))) & (MR_Integer) 1);
          MR_Word VarsA_12 = ((MR_Word) ((MR_hl_field(1, RhsA_5, 2))));
          MR_Word VarsB_13;
          MR_Word Var_34;
          MR_Word Var_35;

          succeeded = ((MR_tag((MR_Word) RhsB_6)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_34 = ((MR_Word) ((MR_hl_field(1, RhsB_6, 0))));
            Var_35 = ((MR_Unsigned) ((MR_hl_field(1, RhsB_6, 1))) & (MR_Integer) 1);
            VarsB_13 = ((MR_Word) ((MR_hl_field(1, RhsB_6, 2))));
            succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsId_10, Var_34);
            if (succeeded)
            {
              succeeded = (E_11 == Var_35);
              if (succeeded)
                succeeded = hlds__assertion__equal_vars_4_p_0(VarsA_12, VarsB_13, STATE_VARIABLE_Subst_0_26, &STATE_VARIABLE_Subst_27);
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_32_32;
          MR_Word TypeCtorInfo_33_33;
          MR_Word Purity_14 = ((((MR_Unsigned) ((MR_hl_field(2, RhsA_5, 0))) >> 2)) & (MR_Integer) 3);
          MR_Word Groundness_15 = ((((MR_Unsigned) ((MR_hl_field(2, RhsA_5, 0))) >> 1)) & (MR_Integer) 1);
          MR_Word PredOrFunc_16 = ((MR_Unsigned) ((MR_hl_field(2, RhsA_5, 0))) & (MR_Integer) 1);
          MR_Word NonLocalVarsA_17 = ((MR_Word) ((MR_hl_field(2, RhsA_5, 1))));
          MR_Word ArgVarsModesA_18 = ((MR_Word) ((MR_hl_field(2, RhsA_5, 2))));
          MR_Word Det_19 = ((MR_Unsigned) ((MR_hl_field(2, RhsA_5, 3))) & (MR_Integer) 7);
          MR_Word GoalA_20 = ((MR_Word) ((MR_hl_field(2, RhsA_5, 4))));
          MR_Word NonLocalVarsB_21;
          MR_Word ArgVarsModesB_22;
          MR_Word GoalB_23;
          MR_Word ArgVarsA_24;
          MR_Word ArgVarsB_25;
          MR_Word STATE_VARIABLE_Subst_3_30;
          MR_Word STATE_VARIABLE_Subst_4_31;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Word next_value_of_tscc_proc_1_input_1_GoalA_5;
          MR_Word next_value_of_tscc_proc_1_input_2_GoalB_6;
          MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;

          succeeded = ((MR_tag((MR_Word) RhsB_6)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_36 = ((((MR_Unsigned) ((MR_hl_field(2, RhsB_6, 0))) >> 2)) & (MR_Integer) 3);
            Var_37 = ((((MR_Unsigned) ((MR_hl_field(2, RhsB_6, 0))) >> 1)) & (MR_Integer) 1);
            Var_38 = ((MR_Unsigned) ((MR_hl_field(2, RhsB_6, 0))) & (MR_Integer) 1);
            NonLocalVarsB_21 = ((MR_Word) ((MR_hl_field(2, RhsB_6, 1))));
            ArgVarsModesB_22 = ((MR_Word) ((MR_hl_field(2, RhsB_6, 2))));
            Var_39 = ((MR_Unsigned) ((MR_hl_field(2, RhsB_6, 3))) & (MR_Integer) 7);
            GoalB_23 = ((MR_Word) ((MR_hl_field(2, RhsB_6, 4))));
            succeeded = (Purity_14 == Var_36);
            if (succeeded)
            {
              succeeded = (Groundness_15 == Var_37);
              if (succeeded)
              {
                succeeded = (PredOrFunc_16 == Var_38);
                if (succeeded)
                {
                  succeeded = (Det_19 == Var_39);
                  if (succeeded)
                  {
                    TypeInfo_32_32 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
                    TypeCtorInfo_33_33 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
                    mercury__assoc_list__keys_2_p_0(TypeInfo_32_32, TypeCtorInfo_33_33, ArgVarsModesA_18, &ArgVarsA_24);
                    mercury__assoc_list__keys_2_p_0(TypeInfo_32_32, TypeCtorInfo_33_33, ArgVarsModesB_22, &ArgVarsB_25);
                    succeeded = hlds__assertion__equal_vars_4_p_0(NonLocalVarsA_17, NonLocalVarsB_21, STATE_VARIABLE_Subst_0_26, &STATE_VARIABLE_Subst_3_30);
                    if (succeeded)
                    {
                      succeeded = hlds__assertion__equal_vars_4_p_0(ArgVarsA_24, ArgVarsB_25, STATE_VARIABLE_Subst_3_30, &STATE_VARIABLE_Subst_4_31);
                      if (succeeded)
                      {
                        // direct tailcall eliminated
                        ;
                        next_value_of_tscc_proc_1_input_1_GoalA_5 = GoalA_20;
                        next_value_of_tscc_proc_1_input_2_GoalB_6 = GoalB_23;
                        next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72 = STATE_VARIABLE_Subst_4_31;
                        tscc_proc_1_input_1_GoalA_5 = next_value_of_tscc_proc_1_input_1_GoalA_5;
                        tscc_proc_1_input_2_GoalB_6 = next_value_of_tscc_proc_1_input_2_GoalB_6;
                        tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;
                        goto top_of_proc_1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        break;
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Subst_73 = STATE_VARIABLE_Subst_27;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Subst_73 = tscc_output_1_STATE_VARIABLE_Subst_73;
  return tscc_output_succeeded;
}

static MR_bool MR_CALL 
hlds__assertion__equal_unification_4_p_0(
  MR_Word tscc_proc_3_input_1_RhsA_5,
  MR_Word tscc_proc_3_input_2_RhsB_6,
  MR_Word tscc_proc_3_input_3_STATE_VARIABLE_Subst_0_26,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Subst_73)
{
  MR_Word tscc_proc_1_input_1_GoalA_5;
  MR_Word tscc_proc_1_input_2_GoalB_6;
  MR_Word tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;
  MR_Word tscc_proc_2_input_1_ShortHandA_5;
  MR_Word tscc_proc_2_input_2_ShortHandB_6;
  MR_Word tscc_proc_2_input_3_STATE_VARIABLE_Subst_0_12;
  MR_bool tscc_output_succeeded;
  MR_Word tscc_output_1_STATE_VARIABLE_Subst_73;

  // The code for TSCC PROC 3: pred hlds.assertion.equal_unification/4-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred hlds.assertion.equal_goals/4-0
  ;
  // proc 2 in TSCC: pred hlds.assertion.equal_goals_shorthand/4-0
  ;
  // proc 3 in TSCC: pred hlds.assertion.equal_unification/4-0
  ;
  ;
  goto top_of_proc_3;
top_of_proc_1:;
  {
    MR_Word GoalA_5 = tscc_proc_1_input_1_GoalA_5;
    MR_Word GoalB_6 = tscc_proc_1_input_2_GoalB_6;
    MR_Word STATE_VARIABLE_Subst_0_72 = tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;
    MR_Word STATE_VARIABLE_Subst_73;
    MR_bool succeeded = MR_TRUE;
    MR_Word GoalExprA_8 = ((MR_Word) ((MR_hl_field(0, GoalA_5, 0))));
    MR_Word GoalExprB_10 = ((MR_Word) ((MR_hl_field(0, GoalB_6, 0))));

    switch (MR_tag((MR_Word) GoalExprA_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoalA_47 = (MR_Word) ((MR_Word) (GoalExprA_8));
          MR_Word SubGoalB_48;
          MR_Word next_value_of_tscc_proc_1_input_1_GoalA_5;
          MR_Word next_value_of_tscc_proc_1_input_2_GoalB_6;
          MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;

          succeeded = ((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 0);
          if (succeeded)
          {
            SubGoalB_48 = (MR_Word) ((MR_Word) (GoalExprB_10));
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_GoalA_5 = SubGoalA_47;
            next_value_of_tscc_proc_1_input_2_GoalB_6 = SubGoalB_48;
            next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72 = STATE_VARIABLE_Subst_0_72;
            tscc_proc_1_input_1_GoalA_5 = next_value_of_tscc_proc_1_input_1_GoalA_5;
            tscc_proc_1_input_2_GoalB_6 = next_value_of_tscc_proc_1_input_2_GoalB_6;
            tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;
            goto top_of_proc_1;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word VarA_37 = ((MR_Word) ((MR_hl_field(1, GoalExprA_8, 0))));
          MR_Word RHSA_38 = ((MR_Word) ((MR_hl_field(1, GoalExprA_8, 1))));
          MR_Word VarB_42;
          MR_Word RHSB_43;
          MR_Word STATE_VARIABLE_Subst_5_78;
          MR_Word next_value_of_tscc_proc_3_input_1_RhsA_5;
          MR_Word next_value_of_tscc_proc_3_input_2_RhsB_6;
          MR_Word next_value_of_tscc_proc_3_input_3_STATE_VARIABLE_Subst_0_26;

          succeeded = ((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 1);
          if (succeeded)
          {
            VarB_42 = ((MR_Word) ((MR_hl_field(1, GoalExprB_10, 0))));
            RHSB_43 = ((MR_Word) ((MR_hl_field(1, GoalExprB_10, 1))));
            succeeded = hlds__assertion__equal_var_4_p_0(VarA_37, VarB_42, STATE_VARIABLE_Subst_0_72, &STATE_VARIABLE_Subst_5_78);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_3_input_1_RhsA_5 = RHSA_38;
              next_value_of_tscc_proc_3_input_2_RhsB_6 = RHSB_43;
              next_value_of_tscc_proc_3_input_3_STATE_VARIABLE_Subst_0_26 = STATE_VARIABLE_Subst_5_78;
              tscc_proc_3_input_1_RhsA_5 = next_value_of_tscc_proc_3_input_1_RhsA_5;
              tscc_proc_3_input_2_RhsB_6 = next_value_of_tscc_proc_3_input_2_RhsB_6;
              tscc_proc_3_input_3_STATE_VARIABLE_Subst_0_26 = next_value_of_tscc_proc_3_input_3_STATE_VARIABLE_Subst_0_26;
              goto top_of_proc_3;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_15 = ((MR_Word) ((MR_hl_field(2, GoalExprA_8, 0))));
          MR_Word ArgVarsA_17 = ((MR_Word) ((MR_hl_field(2, GoalExprA_8, 2))));
          MR_Word ArgVarsB_22;
          MR_Word Var_108;

          succeeded = ((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_108 = ((MR_Word) ((MR_hl_field(2, GoalExprB_10, 0))));
            ArgVarsB_22 = ((MR_Word) ((MR_hl_field(2, GoalExprB_10, 2))));
            succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_15, Var_108);
            if (succeeded)
              succeeded = hlds__assertion__equal_vars_4_p_0(ArgVarsA_17, ArgVarsB_22, STATE_VARIABLE_Subst_0_72, &STATE_VARIABLE_Subst_73);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExprA_8, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word CallDetails_26 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 1))));
              MR_Word ArgVarsA_92 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 2))));
              MR_Word ArgVarsB_93;
              MR_Word Var_109;

              succeeded = ((((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExprB_10, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                Var_109 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 1))));
                ArgVarsB_93 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 2))));
                succeeded = hlds__hlds_goal____Unify____generic_call_0_0(CallDetails_26, Var_109);
                if (succeeded)
                  succeeded = hlds__assertion__equal_vars_4_p_0(ArgVarsA_92, ArgVarsB_93, STATE_VARIABLE_Subst_0_72, &STATE_VARIABLE_Subst_73);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeCtorInfo_101_101;
              MR_Word TypeInfo_102_102;
              MR_Word Attributes_59 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 1))));
              MR_Word ArgsA_61 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 4))));
              MR_Word ExtraA_62 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 5))));
              MR_Word MaybeTraceA_63 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 6))));
              MR_Word ArgsB_66;
              MR_Word ExtraB_67;
              MR_Word MaybeTraceB_68;
              MR_Word Var_88;
              MR_Word Var_89;
              MR_Word PredId_98 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 2))));
              MR_Word VarsA_99;
              MR_Word VarsB_100;
              MR_Word Var_112;
              MR_Word Var_113;

              succeeded = ((((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExprB_10, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_112 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 1))));
                Var_113 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 2))));
                ArgsB_66 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 4))));
                ExtraB_67 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 5))));
                MaybeTraceB_68 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 6))));
                succeeded = parse_tree__prog_data_foreign____Unify____foreign_proc_attributes_0_0(Attributes_59, Var_112);
                if (succeeded)
                {
                  succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_98, Var_113);
                  if (succeeded)
                  {
                    succeeded = (ExtraA_62 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (ExtraB_67 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = (MaybeTraceA_63 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = (MaybeTraceB_68 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            TypeCtorInfo_101_101 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0);
                            TypeInfo_102_102 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
                            Var_88 = (MR_Word) (&hlds__assertion_scalar_common_2[3]);
                            VarsA_99 = mercury__list__map_2_f_0(TypeCtorInfo_101_101, TypeInfo_102_102, Var_88, ArgsA_61);
                            Var_89 = (MR_Word) (&hlds__assertion_scalar_common_2[4]);
                            VarsB_100 = mercury__list__map_2_f_0(TypeCtorInfo_101_101, TypeInfo_102_102, Var_89, ArgsB_66);
                            succeeded = hlds__assertion__equal_vars_4_p_0(VarsA_99, VarsB_100, STATE_VARIABLE_Subst_0_72, &STATE_VARIABLE_Subst_73);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_12 = ((MR_Unsigned) ((MR_hl_field(3, GoalExprA_8, 1))) & (MR_Integer) 1);
              MR_Word GoalsA_13 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 2))));
              MR_Word GoalsB_14;
              MR_Word Var_107;

              succeeded = ((((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExprB_10, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                Var_107 = ((MR_Unsigned) ((MR_hl_field(3, GoalExprB_10, 1))) & (MR_Integer) 1);
                GoalsB_14 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 2))));
                succeeded = (ConjType_12 == Var_107);
                if (succeeded)
                  succeeded = hlds__assertion__equal_goals_list_4_p_0(GoalsA_13, GoalsB_14, STATE_VARIABLE_Subst_0_72, &STATE_VARIABLE_Subst_73);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word GoalsA_94 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 1))));
              MR_Word GoalsB_95;

              succeeded = ((((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExprB_10, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                GoalsB_95 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 1))));
                succeeded = hlds__assertion__equal_goals_list_4_p_0(GoalsA_94, GoalsB_95, STATE_VARIABLE_Subst_0_72, &STATE_VARIABLE_Subst_73);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word TypeInfo_118_118;
              MR_Word Var_33 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 1))));
              MR_Word CanFail_34 = ((MR_Unsigned) ((MR_hl_field(3, GoalExprA_8, 2))) & (MR_Integer) 1);
              MR_Word CasesA_35 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 3))));
              MR_Word CasesB_36;
              MR_Word Var_110;
              MR_Word Var_111;

              succeeded = ((((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExprB_10, 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                Var_110 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 1))));
                Var_111 = ((MR_Unsigned) ((MR_hl_field(3, GoalExprB_10, 2))) & (MR_Integer) 1);
                CasesB_36 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 3))));
                TypeInfo_118_118 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_118_118, ((MR_Box) (Var_33)), ((MR_Box) (Var_110)));
                if (succeeded)
                {
                  succeeded = (CanFail_34 == Var_111);
                  if (succeeded)
                    succeeded = hlds__assertion__equal_goals_cases_4_p_0(CasesA_35, CasesB_36, STATE_VARIABLE_Subst_0_72, &STATE_VARIABLE_Subst_73);
                }
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ReasonA_49 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 1))));
              MR_Word ReasonB_50;
              MR_Word STATE_VARIABLE_Subst_9_82;
              MR_Word SubGoalA_96 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 2))));
              MR_Word SubGoalB_97;
              MR_Word next_value_of_tscc_proc_1_input_1_GoalA_5;
              MR_Word next_value_of_tscc_proc_1_input_2_GoalB_6;
              MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;

              succeeded = ((((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExprB_10, 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ReasonB_50 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 1))));
                SubGoalB_97 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 2))));
                succeeded = hlds__assertion__equal_reason_4_p_0(ReasonA_49, ReasonB_50, STATE_VARIABLE_Subst_0_72, &STATE_VARIABLE_Subst_9_82);
                if (succeeded)
                {
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_GoalA_5 = SubGoalA_96;
                  next_value_of_tscc_proc_1_input_2_GoalB_6 = SubGoalB_97;
                  next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72 = STATE_VARIABLE_Subst_9_82;
                  tscc_proc_1_input_1_GoalA_5 = next_value_of_tscc_proc_1_input_1_GoalA_5;
                  tscc_proc_1_input_2_GoalB_6 = next_value_of_tscc_proc_1_input_2_GoalB_6;
                  tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;
                  goto top_of_proc_1;
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word VarsA_51 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 1))));
              MR_Word CondA_52 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 2))));
              MR_Word ThenA_53 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 3))));
              MR_Word ElseA_54 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 4))));
              MR_Word VarsB_55;
              MR_Word CondB_56;
              MR_Word ThenB_57;
              MR_Word ElseB_58;
              MR_Word STATE_VARIABLE_Subst_11_84;
              MR_Word STATE_VARIABLE_Subst_12_85;
              MR_Word STATE_VARIABLE_Subst_13_86;
              MR_Word next_value_of_tscc_proc_1_input_1_GoalA_5;
              MR_Word next_value_of_tscc_proc_1_input_2_GoalB_6;
              MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;

              succeeded = ((((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExprB_10, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                VarsB_55 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 1))));
                CondB_56 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 2))));
                ThenB_57 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 3))));
                ElseB_58 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 4))));
                succeeded = hlds__assertion__equal_vars_4_p_0(VarsA_51, VarsB_55, STATE_VARIABLE_Subst_0_72, &STATE_VARIABLE_Subst_11_84);
                if (succeeded)
                {
                  succeeded = hlds__assertion__equal_goals_4_p_0(CondA_52, CondB_56, STATE_VARIABLE_Subst_11_84, &STATE_VARIABLE_Subst_12_85);
                  if (succeeded)
                  {
                    succeeded = hlds__assertion__equal_goals_4_p_0(ThenA_53, ThenB_57, STATE_VARIABLE_Subst_12_85, &STATE_VARIABLE_Subst_13_86);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_GoalA_5 = ElseA_54;
                      next_value_of_tscc_proc_1_input_2_GoalB_6 = ElseB_58;
                      next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72 = STATE_VARIABLE_Subst_13_86;
                      tscc_proc_1_input_1_GoalA_5 = next_value_of_tscc_proc_1_input_1_GoalA_5;
                      tscc_proc_1_input_2_GoalB_6 = next_value_of_tscc_proc_1_input_2_GoalB_6;
                      tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;
                      goto top_of_proc_1;
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHandA_70 = ((MR_Word) ((MR_hl_field(3, GoalExprA_8, 1))));
              MR_Word ShortHandB_71;
              MR_Word next_value_of_tscc_proc_2_input_1_ShortHandA_5;
              MR_Word next_value_of_tscc_proc_2_input_2_ShortHandB_6;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_Subst_0_12;

              succeeded = ((((MR_tag((MR_Word) GoalExprB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExprB_10, 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ShortHandB_71 = ((MR_Word) ((MR_hl_field(3, GoalExprB_10, 1))));
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_ShortHandA_5 = ShortHandA_70;
                next_value_of_tscc_proc_2_input_2_ShortHandB_6 = ShortHandB_71;
                next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_Subst_0_12 = STATE_VARIABLE_Subst_0_72;
                tscc_proc_2_input_1_ShortHandA_5 = next_value_of_tscc_proc_2_input_1_ShortHandA_5;
                tscc_proc_2_input_2_ShortHandB_6 = next_value_of_tscc_proc_2_input_2_ShortHandB_6;
                tscc_proc_2_input_3_STATE_VARIABLE_Subst_0_12 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_Subst_0_12;
                goto top_of_proc_2;
              }
            }
            break;
        }
        break;
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Subst_73 = STATE_VARIABLE_Subst_73;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word ShortHandA_5 = tscc_proc_2_input_1_ShortHandA_5;
    MR_Word ShortHandB_6 = tscc_proc_2_input_2_ShortHandB_6;
    MR_Word STATE_VARIABLE_Subst_0_12 = tscc_proc_2_input_3_STATE_VARIABLE_Subst_0_12;
    MR_Word STATE_VARIABLE_Subst_13;
    MR_bool succeeded = ((MR_tag((MR_Word) ShortHandA_5)) == (MR_Integer) 0);
    MR_Word LeftGoalA_8;
    MR_Word RightGoalA_9;
    MR_Word LeftGoalB_10;
    MR_Word RightGoalB_11;
    MR_Word STATE_VARIABLE_Subst_1_14;
    MR_Word next_value_of_tscc_proc_1_input_1_GoalA_5;
    MR_Word next_value_of_tscc_proc_1_input_2_GoalB_6;
    MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;

    if (succeeded)
    {
      LeftGoalA_8 = ((MR_Word) ((MR_hl_field(0, ShortHandA_5, 0))));
      RightGoalA_9 = ((MR_Word) ((MR_hl_field(0, ShortHandA_5, 1))));
      succeeded = ((MR_tag((MR_Word) ShortHandB_6)) == (MR_Integer) 0);
      if (succeeded)
      {
        LeftGoalB_10 = ((MR_Word) ((MR_hl_field(0, ShortHandB_6, 0))));
        RightGoalB_11 = ((MR_Word) ((MR_hl_field(0, ShortHandB_6, 1))));
        succeeded = hlds__assertion__equal_goals_4_p_0(LeftGoalA_8, LeftGoalB_10, STATE_VARIABLE_Subst_0_12, &STATE_VARIABLE_Subst_1_14);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_GoalA_5 = RightGoalA_9;
          next_value_of_tscc_proc_1_input_2_GoalB_6 = RightGoalB_11;
          next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72 = STATE_VARIABLE_Subst_1_14;
          tscc_proc_1_input_1_GoalA_5 = next_value_of_tscc_proc_1_input_1_GoalA_5;
          tscc_proc_1_input_2_GoalB_6 = next_value_of_tscc_proc_1_input_2_GoalB_6;
          tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;
          goto top_of_proc_1;
        }
      }
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Subst_73 = STATE_VARIABLE_Subst_13;
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Word RhsA_5 = tscc_proc_3_input_1_RhsA_5;
    MR_Word RhsB_6 = tscc_proc_3_input_2_RhsB_6;
    MR_Word STATE_VARIABLE_Subst_0_26 = tscc_proc_3_input_3_STATE_VARIABLE_Subst_0_26;
    MR_Word STATE_VARIABLE_Subst_27;
    MR_bool succeeded = MR_TRUE;

    switch (MR_tag((MR_Word) RhsA_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word A_8 = ((MR_Word) ((MR_hl_field(0, RhsA_5, 0))));
          MR_Word B_9;
          MR_Word SubstVA_41;
          MR_Word TypeInfo_11_42;
          MR_Box conv2_SubstVA_41;

          succeeded = ((MR_tag((MR_Word) RhsB_6)) == (MR_Integer) 0);
          if (succeeded)
          {
            B_9 = ((MR_Word) ((MR_hl_field(0, RhsB_6, 0))));
            TypeInfo_11_42 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
            succeeded = mercury__map__search_3_p_0(TypeInfo_11_42, TypeInfo_11_42, STATE_VARIABLE_Subst_0_26, ((MR_Box) (A_8)), &conv2_SubstVA_41);
            if (succeeded)
            {
              SubstVA_41 = ((MR_Word) (conv2_SubstVA_41));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__assertion_scalar_common_1[0]), ((MR_Box) (SubstVA_41)), ((MR_Box) (B_9)));
              if (succeeded)
              {
                STATE_VARIABLE_Subst_27 = STATE_VARIABLE_Subst_0_26;
                succeeded = MR_TRUE;
              }
            }
            else
              succeeded = mercury__map__insert_4_p_0((MR_Word) (&hlds__assertion_scalar_common_1[0]), (MR_Word) (&hlds__assertion_scalar_common_1[0]), ((MR_Box) (A_8)), ((MR_Box) (B_9)), STATE_VARIABLE_Subst_0_26, &STATE_VARIABLE_Subst_27);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ConsId_10 = ((MR_Word) ((MR_hl_field(1, RhsA_5, 0))));
          MR_Word E_11 = ((MR_Unsigned) ((MR_hl_field(1, RhsA_5, 1))) & (MR_Integer) 1);
          MR_Word VarsA_12 = ((MR_Word) ((MR_hl_field(1, RhsA_5, 2))));
          MR_Word VarsB_13;
          MR_Word Var_34;
          MR_Word Var_35;

          succeeded = ((MR_tag((MR_Word) RhsB_6)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_34 = ((MR_Word) ((MR_hl_field(1, RhsB_6, 0))));
            Var_35 = ((MR_Unsigned) ((MR_hl_field(1, RhsB_6, 1))) & (MR_Integer) 1);
            VarsB_13 = ((MR_Word) ((MR_hl_field(1, RhsB_6, 2))));
            succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsId_10, Var_34);
            if (succeeded)
            {
              succeeded = (E_11 == Var_35);
              if (succeeded)
                succeeded = hlds__assertion__equal_vars_4_p_0(VarsA_12, VarsB_13, STATE_VARIABLE_Subst_0_26, &STATE_VARIABLE_Subst_27);
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_32_32;
          MR_Word TypeCtorInfo_33_33;
          MR_Word Purity_14 = ((((MR_Unsigned) ((MR_hl_field(2, RhsA_5, 0))) >> 2)) & (MR_Integer) 3);
          MR_Word Groundness_15 = ((((MR_Unsigned) ((MR_hl_field(2, RhsA_5, 0))) >> 1)) & (MR_Integer) 1);
          MR_Word PredOrFunc_16 = ((MR_Unsigned) ((MR_hl_field(2, RhsA_5, 0))) & (MR_Integer) 1);
          MR_Word NonLocalVarsA_17 = ((MR_Word) ((MR_hl_field(2, RhsA_5, 1))));
          MR_Word ArgVarsModesA_18 = ((MR_Word) ((MR_hl_field(2, RhsA_5, 2))));
          MR_Word Det_19 = ((MR_Unsigned) ((MR_hl_field(2, RhsA_5, 3))) & (MR_Integer) 7);
          MR_Word GoalA_20 = ((MR_Word) ((MR_hl_field(2, RhsA_5, 4))));
          MR_Word NonLocalVarsB_21;
          MR_Word ArgVarsModesB_22;
          MR_Word GoalB_23;
          MR_Word ArgVarsA_24;
          MR_Word ArgVarsB_25;
          MR_Word STATE_VARIABLE_Subst_3_30;
          MR_Word STATE_VARIABLE_Subst_4_31;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Word next_value_of_tscc_proc_1_input_1_GoalA_5;
          MR_Word next_value_of_tscc_proc_1_input_2_GoalB_6;
          MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;

          succeeded = ((MR_tag((MR_Word) RhsB_6)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_36 = ((((MR_Unsigned) ((MR_hl_field(2, RhsB_6, 0))) >> 2)) & (MR_Integer) 3);
            Var_37 = ((((MR_Unsigned) ((MR_hl_field(2, RhsB_6, 0))) >> 1)) & (MR_Integer) 1);
            Var_38 = ((MR_Unsigned) ((MR_hl_field(2, RhsB_6, 0))) & (MR_Integer) 1);
            NonLocalVarsB_21 = ((MR_Word) ((MR_hl_field(2, RhsB_6, 1))));
            ArgVarsModesB_22 = ((MR_Word) ((MR_hl_field(2, RhsB_6, 2))));
            Var_39 = ((MR_Unsigned) ((MR_hl_field(2, RhsB_6, 3))) & (MR_Integer) 7);
            GoalB_23 = ((MR_Word) ((MR_hl_field(2, RhsB_6, 4))));
            succeeded = (Purity_14 == Var_36);
            if (succeeded)
            {
              succeeded = (Groundness_15 == Var_37);
              if (succeeded)
              {
                succeeded = (PredOrFunc_16 == Var_38);
                if (succeeded)
                {
                  succeeded = (Det_19 == Var_39);
                  if (succeeded)
                  {
                    TypeInfo_32_32 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
                    TypeCtorInfo_33_33 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
                    mercury__assoc_list__keys_2_p_0(TypeInfo_32_32, TypeCtorInfo_33_33, ArgVarsModesA_18, &ArgVarsA_24);
                    mercury__assoc_list__keys_2_p_0(TypeInfo_32_32, TypeCtorInfo_33_33, ArgVarsModesB_22, &ArgVarsB_25);
                    succeeded = hlds__assertion__equal_vars_4_p_0(NonLocalVarsA_17, NonLocalVarsB_21, STATE_VARIABLE_Subst_0_26, &STATE_VARIABLE_Subst_3_30);
                    if (succeeded)
                    {
                      succeeded = hlds__assertion__equal_vars_4_p_0(ArgVarsA_24, ArgVarsB_25, STATE_VARIABLE_Subst_3_30, &STATE_VARIABLE_Subst_4_31);
                      if (succeeded)
                      {
                        // direct tailcall eliminated
                        ;
                        next_value_of_tscc_proc_1_input_1_GoalA_5 = GoalA_20;
                        next_value_of_tscc_proc_1_input_2_GoalB_6 = GoalB_23;
                        next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72 = STATE_VARIABLE_Subst_4_31;
                        tscc_proc_1_input_1_GoalA_5 = next_value_of_tscc_proc_1_input_1_GoalA_5;
                        tscc_proc_1_input_2_GoalB_6 = next_value_of_tscc_proc_1_input_2_GoalB_6;
                        tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Subst_0_72;
                        goto top_of_proc_1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        break;
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Subst_73 = STATE_VARIABLE_Subst_27;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Subst_73 = tscc_output_1_STATE_VARIABLE_Subst_73;
  return tscc_output_succeeded;
}

static MR_bool MR_CALL 
hlds__assertion__equal_goals_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Subst_0_3,
  MR_Word * STATE_VARIABLE_Subst_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *STATE_VARIABLE_Subst_4 = STATE_VARIABLE_Subst_0_3;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word TypeCtorInfo_25_25;
      MR_Word TypeInfo_27_27;
      MR_Word CaseA_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word CaseAs_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word CaseB_10;
      MR_Word CaseBs_11;
      MR_Word MainConsIdA_13;
      MR_Word OtherConsIdsA_14;
      MR_Word GoalA_15;
      MR_Word MainConsIdB_16;
      MR_Word OtherConsIdsB_17;
      MR_Word GoalB_18;
      MR_Word SortedConsIds_19;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word STATE_VARIABLE_Subst_1_24;
      MR_Word Var_26;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Subst_0_3;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        CaseB_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
        CaseBs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
        MainConsIdA_13 = ((MR_Word) ((MR_hl_field(0, CaseA_8, 0))));
        OtherConsIdsA_14 = ((MR_Word) ((MR_hl_field(0, CaseA_8, 1))));
        GoalA_15 = ((MR_Word) ((MR_hl_field(0, CaseA_8, 2))));
        MainConsIdB_16 = ((MR_Word) ((MR_hl_field(0, CaseB_10, 0))));
        OtherConsIdsB_17 = ((MR_Word) ((MR_hl_field(0, CaseB_10, 1))));
        GoalB_18 = ((MR_Word) ((MR_hl_field(0, CaseB_10, 2))));
        TypeCtorInfo_25_25 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0);
        {
          Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_22, 0) = ((MR_Box) (MainConsIdA_13));
          MR_hl_field(1, Var_22, 1) = ((MR_Box) (OtherConsIdsA_14));
        }
        mercury__list__sort_2_p_0(TypeCtorInfo_25_25, Var_22, &SortedConsIds_19);
        {
          Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_23, 0) = ((MR_Box) (MainConsIdB_16));
          MR_hl_field(1, Var_23, 1) = ((MR_Box) (OtherConsIdsB_17));
        }
        mercury__list__sort_2_p_0(TypeCtorInfo_25_25, Var_23, &Var_26);
        TypeInfo_27_27 = (MR_Word) (&hlds__assertion_scalar_common_1[7]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (SortedConsIds_19)), ((MR_Box) (Var_26)));
        if (succeeded)
        {
          succeeded = hlds__assertion__equal_goals_4_p_0(GoalA_15, GoalB_18, STATE_VARIABLE_Subst_0_3, &STATE_VARIABLE_Subst_1_24);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = CaseAs_9;
            next_value_of_HeadVar__2_2 = CaseBs_11;
            next_value_of_STATE_VARIABLE_Subst_0_3 = STATE_VARIABLE_Subst_1_24;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            STATE_VARIABLE_Subst_0_3 = next_value_of_STATE_VARIABLE_Subst_0_3;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
hlds__assertion__equal_goals_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Subst_0_3,
  MR_Word * STATE_VARIABLE_Subst_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *STATE_VARIABLE_Subst_4 = STATE_VARIABLE_Subst_0_3;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word GoalA_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word GoalAs_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word GoalB_10;
      MR_Word GoalBs_11;
      MR_Word STATE_VARIABLE_Subst_1_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Subst_0_3;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        GoalB_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
        GoalBs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
        succeeded = hlds__assertion__equal_goals_4_p_0(GoalA_8, GoalB_10, STATE_VARIABLE_Subst_0_3, &STATE_VARIABLE_Subst_1_15);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = GoalAs_9;
          next_value_of_HeadVar__2_2 = GoalBs_11;
          next_value_of_STATE_VARIABLE_Subst_0_3 = STATE_VARIABLE_Subst_1_15;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Subst_0_3 = next_value_of_STATE_VARIABLE_Subst_0_3;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
hlds__assertion__equal_var_4_p_0(
  MR_Word VA_5,
  MR_Word VB_6,
  MR_Word STATE_VARIABLE_Subst_0_9,
  MR_Word * STATE_VARIABLE_Subst_10)
{
  MR_bool succeeded;
  MR_Word SubstVA_8;
  MR_Box conv0_SubstVA_8;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__assertion_scalar_common_1[0]), (MR_Word) (&hlds__assertion_scalar_common_1[0]), STATE_VARIABLE_Subst_0_9, ((MR_Box) (VA_5)), &conv0_SubstVA_8);
  if (succeeded)
  {
    SubstVA_8 = ((MR_Word) (conv0_SubstVA_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__assertion_scalar_common_1[0]), ((MR_Box) (SubstVA_8)), ((MR_Box) (VB_6)));
    if (succeeded)
    {
      *STATE_VARIABLE_Subst_10 = STATE_VARIABLE_Subst_0_9;
      succeeded = MR_TRUE;
    }
  }
  else
    succeeded = mercury__map__insert_4_p_0((MR_Word) (&hlds__assertion_scalar_common_1[0]), (MR_Word) (&hlds__assertion_scalar_common_1[0]), ((MR_Box) (VA_5)), ((MR_Box) (VB_6)), STATE_VARIABLE_Subst_0_9, STATE_VARIABLE_Subst_10);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__assertion__equal_reason_4_p_0(
  MR_Word ReasonA_5,
  MR_Word ReasonB_6,
  MR_Word STATE_VARIABLE_Subst_0_29,
  MR_Word * STATE_VARIABLE_Subst_30)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) ReasonA_5)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      {
        MR_Word VarsA_8 = ((MR_Word) ((MR_hl_field(0, ReasonA_5, 0))));
        MR_Word VarsB_10;

        succeeded = ((MR_tag((MR_Word) ReasonB_6)) == (MR_Integer) 0);
        if (succeeded)
        {
          VarsB_10 = ((MR_Word) ((MR_hl_field(0, ReasonB_6, 0))));
          succeeded = hlds__assertion__equal_vars_4_p_0(VarsA_8, VarsB_10, STATE_VARIABLE_Subst_0_29, STATE_VARIABLE_Subst_30);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeInfo_53_53;
        MR_Word HeadWarning_12 = ((MR_Unsigned) ((MR_hl_field(1, ReasonA_5, 0))) & (MR_Integer) 7);
        MR_Word TailWarnings_13 = ((MR_Word) ((MR_hl_field(1, ReasonA_5, 1))));
        MR_Word Var_44;
        MR_Word Var_45;

        succeeded = ((MR_tag((MR_Word) ReasonB_6)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_44 = ((MR_Unsigned) ((MR_hl_field(1, ReasonB_6, 0))) & (MR_Integer) 7);
          Var_45 = ((MR_Word) ((MR_hl_field(1, ReasonB_6, 1))));
          succeeded = (HeadWarning_12 == Var_44);
          if (succeeded)
          {
            TypeInfo_53_53 = (MR_Word) (&hlds__assertion_scalar_common_1[6]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_53_53, ((MR_Box) (TailWarnings_13)), ((MR_Box) (Var_45)));
            if (succeeded)
            {
              *STATE_VARIABLE_Subst_30 = STATE_VARIABLE_Subst_0_29;
              succeeded = MR_TRUE;
            }
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Kind_14 = ((MR_Unsigned) ((MR_hl_field(2, ReasonA_5, 1))) & (MR_Integer) 3);
        MR_Word VarsA_36 = ((MR_Word) ((MR_hl_field(2, ReasonA_5, 0))));
        MR_Word VarsB_37;
        MR_Word Var_46;

        succeeded = ((MR_tag((MR_Word) ReasonB_6)) == (MR_Integer) 2);
        if (succeeded)
        {
          VarsB_37 = ((MR_Word) ((MR_hl_field(2, ReasonB_6, 0))));
          Var_46 = ((MR_Unsigned) ((MR_hl_field(2, ReasonB_6, 1))) & (MR_Integer) 3);
          succeeded = (Kind_14 == Var_46);
          if (succeeded)
            succeeded = hlds__assertion__equal_vars_4_p_0(VarsA_36, VarsB_37, STATE_VARIABLE_Subst_0_29, STATE_VARIABLE_Subst_30);
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ReasonA_5, 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_Word Purity_15 = ((MR_Unsigned) ((MR_hl_field(3, ReasonA_5, 1))) & (MR_Integer) 3);
            MR_Word Var_47;

            succeeded = ((((MR_tag((MR_Word) ReasonB_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ReasonB_6, 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              Var_47 = ((MR_Unsigned) ((MR_hl_field(3, ReasonB_6, 1))) & (MR_Integer) 3);
              succeeded = (Purity_15 == Var_47);
              if (succeeded)
              {
                *STATE_VARIABLE_Subst_30 = STATE_VARIABLE_Subst_0_29;
                succeeded = MR_TRUE;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Detism_16 = ((MR_Unsigned) ((MR_hl_field(3, ReasonA_5, 1))) & (MR_Integer) 7);
            MR_Word Var_48;

            succeeded = ((((MR_tag((MR_Word) ReasonB_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ReasonB_6, 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_48 = ((MR_Unsigned) ((MR_hl_field(3, ReasonB_6, 1))) & (MR_Integer) 7);
              succeeded = (Detism_16 == Var_48);
              if (succeeded)
              {
                *STATE_VARIABLE_Subst_30 = STATE_VARIABLE_Subst_0_29;
                succeeded = MR_TRUE;
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word VarA_17 = ((MR_Word) ((MR_hl_field(3, ReasonA_5, 1))));
            MR_Word VarB_18;
            MR_Word SubstVA_58;
            MR_Word TypeInfo_11_59;
            MR_Box conv1_SubstVA_58;

            succeeded = ((((MR_tag((MR_Word) ReasonB_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ReasonB_6, 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              VarB_18 = ((MR_Word) ((MR_hl_field(3, ReasonB_6, 1))));
              TypeInfo_11_59 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
              succeeded = mercury__map__search_3_p_0(TypeInfo_11_59, TypeInfo_11_59, STATE_VARIABLE_Subst_0_29, ((MR_Box) (VarA_17)), &conv1_SubstVA_58);
              if (succeeded)
              {
                SubstVA_58 = ((MR_Word) (conv1_SubstVA_58));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__assertion_scalar_common_1[0]), ((MR_Box) (SubstVA_58)), ((MR_Box) (VarB_18)));
                if (succeeded)
                {
                  *STATE_VARIABLE_Subst_30 = STATE_VARIABLE_Subst_0_29;
                  succeeded = MR_TRUE;
                }
              }
              else
                succeeded = mercury__map__insert_4_p_0((MR_Word) (&hlds__assertion_scalar_common_1[0]), (MR_Word) (&hlds__assertion_scalar_common_1[0]), ((MR_Box) (VarA_17)), ((MR_Box) (VarB_18)), STATE_VARIABLE_Subst_0_29, STATE_VARIABLE_Subst_30);
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Detism_38 = ((MR_Unsigned) ((MR_hl_field(3, ReasonA_5, 2))) & (MR_Integer) 7);
            MR_Word VarA_39 = ((MR_Word) ((MR_hl_field(3, ReasonA_5, 1))));
            MR_Word VarB_40;
            MR_Word Var_49;
            MR_Word SubstVA_62;
            MR_Word TypeInfo_11_63;
            MR_Box conv2_SubstVA_62;

            succeeded = ((((MR_tag((MR_Word) ReasonB_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ReasonB_6, 0)))) == (MR_Integer) 3)));
            if (succeeded)
            {
              VarB_40 = ((MR_Word) ((MR_hl_field(3, ReasonB_6, 1))));
              Var_49 = ((MR_Unsigned) ((MR_hl_field(3, ReasonB_6, 2))) & (MR_Integer) 7);
              succeeded = (Detism_38 == Var_49);
              if (succeeded)
              {
                TypeInfo_11_63 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
                succeeded = mercury__map__search_3_p_0(TypeInfo_11_63, TypeInfo_11_63, STATE_VARIABLE_Subst_0_29, ((MR_Box) (VarA_39)), &conv2_SubstVA_62);
                if (succeeded)
                {
                  SubstVA_62 = ((MR_Word) (conv2_SubstVA_62));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__assertion_scalar_common_1[0]), ((MR_Box) (SubstVA_62)), ((MR_Box) (VarB_40)));
                  if (succeeded)
                  {
                    *STATE_VARIABLE_Subst_30 = STATE_VARIABLE_Subst_0_29;
                    succeeded = MR_TRUE;
                  }
                }
                else
                  succeeded = mercury__map__insert_4_p_0((MR_Word) (&hlds__assertion_scalar_common_1[0]), (MR_Word) (&hlds__assertion_scalar_common_1[0]), ((MR_Box) (VarA_39)), ((MR_Box) (VarB_40)), STATE_VARIABLE_Subst_0_29, STATE_VARIABLE_Subst_30);
              }
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ForcePruning_19 = ((MR_Unsigned) ((MR_hl_field(3, ReasonA_5, 1))) & (MR_Integer) 1);
            MR_Word Var_50;

            succeeded = ((((MR_tag((MR_Word) ReasonB_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ReasonB_6, 0)))) == (MR_Integer) 4)));
            if (succeeded)
            {
              Var_50 = ((MR_Unsigned) ((MR_hl_field(3, ReasonB_6, 1))) & (MR_Integer) 1);
              succeeded = (ForcePruning_19 == Var_50);
              if (succeeded)
              {
                *STATE_VARIABLE_Subst_30 = STATE_VARIABLE_Subst_0_29;
                succeeded = MR_TRUE;
              }
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Removable_20 = ((MR_Unsigned) ((MR_hl_field(3, ReasonA_5, 1))) & (MR_Integer) 1);
            MR_Word Var_51;

            succeeded = ((((MR_tag((MR_Word) ReasonB_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ReasonB_6, 0)))) == (MR_Integer) 5)));
            if (succeeded)
            {
              Var_51 = ((MR_Unsigned) ((MR_hl_field(3, ReasonB_6, 1))) & (MR_Integer) 1);
              succeeded = (Removable_20 == Var_51);
              if (succeeded)
              {
                *STATE_VARIABLE_Subst_30 = STATE_VARIABLE_Subst_0_29;
                succeeded = MR_TRUE;
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Kind_41 = ((MR_Unsigned) ((MR_hl_field(3, ReasonA_5, 2))) & (MR_Integer) 3);
            MR_Word VarA_42 = ((MR_Word) ((MR_hl_field(3, ReasonA_5, 1))));
            MR_Word VarB_43;
            MR_Word Var_52;
            MR_Word SubstVA_54;
            MR_Word TypeInfo_11_55;
            MR_Box conv0_SubstVA_54;

            succeeded = ((((MR_tag((MR_Word) ReasonB_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ReasonB_6, 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              VarB_43 = ((MR_Word) ((MR_hl_field(3, ReasonB_6, 1))));
              Var_52 = ((MR_Unsigned) ((MR_hl_field(3, ReasonB_6, 2))) & (MR_Integer) 3);
              succeeded = (Kind_41 == Var_52);
              if (succeeded)
              {
                TypeInfo_11_55 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
                succeeded = mercury__map__search_3_p_0(TypeInfo_11_55, TypeInfo_11_55, STATE_VARIABLE_Subst_0_29, ((MR_Box) (VarA_42)), &conv0_SubstVA_54);
                if (succeeded)
                {
                  SubstVA_54 = ((MR_Word) (conv0_SubstVA_54));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__assertion_scalar_common_1[0]), ((MR_Box) (SubstVA_54)), ((MR_Box) (VarB_43)));
                  if (succeeded)
                  {
                    *STATE_VARIABLE_Subst_30 = STATE_VARIABLE_Subst_0_29;
                    succeeded = MR_TRUE;
                  }
                }
                else
                  succeeded = mercury__map__insert_4_p_0((MR_Word) (&hlds__assertion_scalar_common_1[0]), (MR_Word) (&hlds__assertion_scalar_common_1[0]), ((MR_Box) (VarA_42)), ((MR_Box) (VarB_43)), STATE_VARIABLE_Subst_0_29, STATE_VARIABLE_Subst_30);
              }
            }
          }
          break;
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__assertion__equal_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Subst_0_3,
  MR_Word * STATE_VARIABLE_Subst_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *STATE_VARIABLE_Subst_4 = STATE_VARIABLE_Subst_0_3;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word VA_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word VAs_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word VB_10;
      MR_Word VBs_11;
      MR_Word STATE_VARIABLE_Subst_1_15;
      MR_Word SubstVA_16;
      MR_Word TypeInfo_11_17;
      MR_Box conv0_SubstVA_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Subst_0_3;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        VB_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
        VBs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
        TypeInfo_11_17 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
        succeeded = mercury__map__search_3_p_0(TypeInfo_11_17, TypeInfo_11_17, STATE_VARIABLE_Subst_0_3, ((MR_Box) (VA_8)), &conv0_SubstVA_16);
        if (succeeded)
        {
          SubstVA_16 = ((MR_Word) (conv0_SubstVA_16));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__assertion_scalar_common_1[0]), ((MR_Box) (SubstVA_16)), ((MR_Box) (VB_10)));
          if (succeeded)
          {
            STATE_VARIABLE_Subst_1_15 = STATE_VARIABLE_Subst_0_3;
            succeeded = MR_TRUE;
          }
        }
        else
          succeeded = mercury__map__insert_4_p_0((MR_Word) (&hlds__assertion_scalar_common_1[0]), (MR_Word) (&hlds__assertion_scalar_common_1[0]), ((MR_Box) (VA_8)), ((MR_Box) (VB_10)), STATE_VARIABLE_Subst_0_3, &STATE_VARIABLE_Subst_1_15);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = VAs_9;
          next_value_of_HeadVar__2_2 = VBs_11;
          next_value_of_STATE_VARIABLE_Subst_0_3 = STATE_VARIABLE_Subst_1_15;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Subst_0_3 = next_value_of_STATE_VARIABLE_Subst_0_3;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
hlds__assertion__commutative_var_ordering_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * CommutativeVars_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word P_5;
    MR_Word Ps_6;
    MR_Word Q_7;
    MR_Word Qs_8;
    MR_Word V_9;
    MR_Word Vs_10;
    MR_Word TypeInfo_17_17;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      P_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      Ps_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Q_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
        Qs_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
        succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          V_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
          Vs_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
          TypeInfo_17_17 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (P_5)), ((MR_Box) (Q_7)));
          if (succeeded)
          {
            MR_Word next_value_of_HeadVar__1_1 = Ps_6;
            MR_Word next_value_of_HeadVar__2_2 = Qs_8;
            MR_Word next_value_of_HeadVar__3_3 = Vs_10;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            continue;
          }
          else
          {
            MR_Word TypeCtorInfo_16_16;
            MR_Word CallVarB_12;
            MR_Word Var_13;
            MR_Word Var_14;
            MR_Word Var_15;

            succeeded = hlds__assertion__commutative_var_ordering_2_6_p_0(P_5, Q_7, Ps_6, Qs_8, Vs_10, &CallVarB_12);
            if (succeeded)
            {
              TypeCtorInfo_16_16 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              Var_15 = (MR_Word) ((MR_Unsigned) 0U);
              {
                Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_14, 0) = ((MR_Box) (CallVarB_12));
                MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_15));
              }
              {
                Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_13, 0) = ((MR_Box) (V_9));
                MR_hl_field(1, Var_13, 1) = ((MR_Box) (Var_14));
              }
              *CommutativeVars_11 = parse_tree__set_of_var__list_to_set_1_f_0(TypeCtorInfo_16_16, Var_13);
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
hlds__assertion__commutative_var_ordering_2_6_p_0(
  MR_Word VarP_7,
  MR_Word VarQ_8,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * CallVarB_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word P_9;
    MR_Word Ps_10;
    MR_Word Q_11;
    MR_Word Qs_12;
    MR_Word V_13;
    MR_Word Vs_14;
    MR_Word TypeInfo_16_16;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      P_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      Ps_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Q_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
        Qs_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
        succeeded = (HeadVar__5_5 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          V_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
          Vs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
          TypeInfo_16_16 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (P_9)), ((MR_Box) (Q_11)));
          if (succeeded)
          {
            MR_Word next_value_of_HeadVar__3_3 = Ps_10;
            MR_Word next_value_of_HeadVar__4_4 = Qs_12;
            MR_Word next_value_of_HeadVar__5_5 = Vs_14;

            // direct tailcall eliminated
            ;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            HeadVar__4_4 = next_value_of_HeadVar__4_4;
            HeadVar__5_5 = next_value_of_HeadVar__5_5;
            continue;
          }
          else
          {
            MR_Word TypeInfo_18_18;
            MR_Word TypeInfo_19_19;

            *CallVarB_15 = V_13;
            succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__assertion_scalar_common_1[0]), ((MR_Box) (P_9)), ((MR_Box) (VarQ_8)));
            if (succeeded)
            {
              TypeInfo_18_18 = (MR_Word) (&hlds__assertion_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (Q_11)), ((MR_Box) (VarP_7)));
              if (succeeded)
              {
                TypeInfo_19_19 = (MR_Word) (&hlds__assertion_scalar_common_1[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (Ps_10)), ((MR_Box) (Qs_12)));
              }
            }
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
hlds__assertion__record_preds_used_in_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_13;

  hlds__assertion__record_use_in_assertion_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_13);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_13));
}

void MR_CALL 
hlds__assertion__record_preds_used_in_4_p_0(
  MR_Word Goal_5,
  MR_Word AssertId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10)
{
  MR_bool succeeded;
  MR_Word CalleePredIds_8;
  MR_Word Var_14;
  MR_Word Var_11;
  MR_Box conv1_STATE_VARIABLE_ModuleInfo_10;

  hlds__goal_refs__pred_ids_called_from_goal_2_p_0(Goal_5, &CalleePredIds_8);
  Var_11 = hlds__hlds_pred__invalid_pred_id_0_f_0();
  succeeded = mercury__list__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (Var_11)), CalleePredIds_8);
  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.assertion.record_preds_used_in\'/4", (MR_String) "invalid pred_id");
      return;
    }
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&hlds__assertion_scalar_common_3[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (hlds__assertion__record_preds_used_in_4_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (AssertId_6));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_14, CalleePredIds_8, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_9)), &conv1_STATE_VARIABLE_ModuleInfo_10);
  *STATE_VARIABLE_ModuleInfo_10 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_10));
}

void MR_CALL 
hlds__assertion__assert_id_goal_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word AssertId_5,
  MR_Word * Goal_6)
{
  MR_Word AssertTable_7;
  MR_Word PredId_8;
  MR_Word PredInfo_9;
  MR_Word ClausesInfo_10;
  MR_Word ClausesRep_11;
  MR_Word Clauses_13;
  MR_Word _ItemNumbers_12;

  hlds__hlds_module__module_info_get_assertion_table_2_p_0(ModuleInfo_4, &AssertTable_7);
  hlds__hlds_promise__assertion_table_lookup_3_p_0(AssertTable_7, AssertId_5, &PredId_8);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_8, &PredInfo_9);
  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_9, &ClausesInfo_10);
  hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo_10, &ClausesRep_11, &_ItemNumbers_12);
  hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_11, &Clauses_13);
  if ((Clauses_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.assertion.assert_id_goal\'/3", (MR_String) "goal is not an assertion");
      return;
    }
  else
  {
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(1, Clauses_13, 1))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(1, Clauses_13, 0))));

    if ((Var_27 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Goal0_15;

      Goal0_15 = hlds__hlds_clauses__clause_body_1_f_0(Var_28);
      hlds__assertion__normalise_goal_2_p_0(Goal0_15, Goal_6);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.assertion.assert_id_goal\'/3", (MR_String) "goal is not an assertion");
        return;
      }
  }
}

static void MR_CALL 
hlds__assertion__normalise_goals_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Goal0_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Goals0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Goal_5;
    MR_Word Goals_6;

    hlds__assertion__normalise_goal_2_p_0(Goal0_3, &Goal_5);
    hlds__assertion__normalise_goals_2_p_0(Goals0_4, &Goals_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_5));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_6));
    }
  }
}

static void MR_CALL 
hlds__assertion__normalise_cases_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Case0_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Cases0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Case_5;
    MR_Word Cases_6;
    MR_Word MainConsId_7 = ((MR_Word) ((MR_hl_field(0, Case0_3, 0))));
    MR_Word OtherConsIds_8 = ((MR_Word) ((MR_hl_field(0, Case0_3, 1))));
    MR_Word Goal0_9 = ((MR_Word) ((MR_hl_field(0, Case0_3, 2))));
    MR_Word Goal_10;

    hlds__assertion__normalise_goal_2_p_0(Goal0_9, &Goal_10);
    {
      Case_5 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_5, 0) = ((MR_Box) (MainConsId_7));
      MR_hl_field(0, Case_5, 1) = ((MR_Box) (OtherConsIds_8));
      MR_hl_field(0, Case_5, 2) = ((MR_Box) (Goal_10));
    }
    hlds__assertion__normalise_cases_2_p_0(Cases0_4, &Cases_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_5));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_6));
    }
  }
}

void MR_CALL 
hlds__assertion__normalise_goal_2_p_0(
  MR_Word Goal0_3,
  MR_Word * Goal_4)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_5 = ((MR_Word) ((MR_hl_field(0, Goal0_3, 0))));
  MR_Word GoalInfo_6 = ((MR_Word) ((MR_hl_field(0, Goal0_3, 1))));
  MR_Word GoalExpr_30;

  switch (MR_tag((MR_Word) GoalExpr0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_41 = (MR_Word) ((MR_Word) (GoalExpr0_5));
        MR_Word SubGoal_69;

        hlds__assertion__normalise_goal_2_p_0(SubGoal0_41, &SubGoal_69);
        GoalExpr_30 = (MR_Word) ((MR_Word) (SubGoal_69));
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      GoalExpr_30 = GoalExpr0_5;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          GoalExpr_30 = GoalExpr0_5;
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_31 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_5, 1))) & (MR_Integer) 1);
            MR_Word SubGoals0_32 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, 2))));
            MR_Word SubGoals_33;
            MR_Word SubGoal_34;
            MR_Word Var_66;

            switch (ConjType_31) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                hlds__assertion__normalise_goals_2_p_0(SubGoals0_32, &SubGoals_33);
                break;
              case (MR_Integer) 0:
                hlds__assertion__normalise_conj_2_p_0(SubGoals0_32, &SubGoals_33);
                break;
            }
            succeeded = (SubGoals_33 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SubGoal_34 = ((MR_Word) ((MR_hl_field(1, SubGoals_33, 0))));
              Var_66 = ((MR_Word) ((MR_hl_field(1, SubGoals_33, 1))));
              succeeded = (Var_66 == (MR_Word) ((MR_Unsigned) 0U));
            }
            if (succeeded)
              GoalExpr_30 = ((MR_Word) ((MR_hl_field(0, SubGoal_34, 0))));
            else
              {
                GoalExpr_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_30, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, GoalExpr_30, 1) = (MR_Box) ((MR_Unsigned) (ConjType_31));
                MR_hl_field(3, GoalExpr_30, 2) = ((MR_Box) (SubGoals_33));
              }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SubGoals0_67 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, 1))));
            MR_Word SubGoals_68;

            hlds__assertion__normalise_goals_2_p_0(SubGoals0_67, &SubGoals_68);
            {
              GoalExpr_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_30, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_30, 1) = ((MR_Box) (SubGoals_68));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_37 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, 1))));
            MR_Word CanFail_38 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_5, 2))) & (MR_Integer) 1);
            MR_Word Cases0_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, 3))));
            MR_Word Cases_40;

            hlds__assertion__normalise_cases_2_p_0(Cases0_39, &Cases_40);
            {
              GoalExpr_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_30, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_30, 1) = ((MR_Box) (Var_37));
              MR_hl_field(3, GoalExpr_30, 2) = (MR_Box) ((MR_Unsigned) (CanFail_38));
              MR_hl_field(3, GoalExpr_30, 3) = ((MR_Box) (Cases_40));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, 1))));
            MR_Word SubGoal_70;
            MR_Word SubGoal0_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, 2))));

            hlds__assertion__normalise_goal_2_p_0(SubGoal0_71, &SubGoal_70);
            {
              GoalExpr_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_30, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_30, 1) = ((MR_Box) (Reason_42));
              MR_hl_field(3, GoalExpr_30, 2) = ((MR_Box) (SubGoal_70));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, 1))));
            MR_Word Cond0_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, 2))));
            MR_Word Then0_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, 3))));
            MR_Word Else0_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, 4))));
            MR_Word Cond_47;
            MR_Word Then_48;
            MR_Word Else_49;

            hlds__assertion__normalise_goal_2_p_0(Cond0_44, &Cond_47);
            hlds__assertion__normalise_goal_2_p_0(Then0_45, &Then_48);
            hlds__assertion__normalise_goal_2_p_0(Else0_46, &Else_49);
            {
              GoalExpr_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_30, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_30, 1) = ((MR_Box) (Vars_43));
              MR_hl_field(3, GoalExpr_30, 2) = ((MR_Box) (Cond_47));
              MR_hl_field(3, GoalExpr_30, 3) = ((MR_Box) (Then_48));
              MR_hl_field(3, GoalExpr_30, 4) = ((MR_Box) (Else_49));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, 1))));
            MR_Word ShortHand_59;

            switch (MR_tag((MR_Word) ShortHand0_50)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word LHS0_62 = ((MR_Word) ((MR_hl_field(0, ShortHand0_50, 0))));
                  MR_Word RHS0_63 = ((MR_Word) ((MR_hl_field(0, ShortHand0_50, 1))));
                  MR_Word LHS_64;
                  MR_Word RHS_65;

                  hlds__assertion__normalise_goal_2_p_0(LHS0_62, &LHS_64);
                  hlds__assertion__normalise_goal_2_p_0(RHS0_63, &RHS_65);
                  {
                    ShortHand_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, ShortHand_59, 0) = ((MR_Box) (LHS_64));
                    MR_hl_field(0, ShortHand_59, 1) = ((MR_Box) (RHS_65));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_51 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_50, 0))) & (MR_Integer) 3);
                  MR_Word Outer_52 = ((MR_Word) ((MR_hl_field(1, ShortHand0_50, 1))));
                  MR_Word Inner_53 = ((MR_Word) ((MR_hl_field(1, ShortHand0_50, 2))));
                  MR_Word MainGoal0_54 = ((MR_Word) ((MR_hl_field(1, ShortHand0_50, 4))));
                  MR_Word OrElseAlternatives0_55 = ((MR_Word) ((MR_hl_field(1, ShortHand0_50, 5))));
                  MR_Word OrElseInners_56 = ((MR_Word) ((MR_hl_field(1, ShortHand0_50, 6))));
                  MR_Word MainGoal_57;
                  MR_Word OrElseAlternatives_58;
                  MR_Word Vars_72 = ((MR_Word) ((MR_hl_field(1, ShortHand0_50, 3))));

                  hlds__assertion__normalise_goal_2_p_0(MainGoal0_54, &MainGoal_57);
                  hlds__assertion__normalise_goals_2_p_0(OrElseAlternatives0_55, &OrElseAlternatives_58);
                  {
                    ShortHand_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_59, 0) = (MR_Box) ((MR_Unsigned) (GoalType_51));
                    MR_hl_field(1, ShortHand_59, 1) = ((MR_Box) (Outer_52));
                    MR_hl_field(1, ShortHand_59, 2) = ((MR_Box) (Inner_53));
                    MR_hl_field(1, ShortHand_59, 3) = ((MR_Box) (Vars_72));
                    MR_hl_field(1, ShortHand_59, 4) = ((MR_Box) (MainGoal_57));
                    MR_hl_field(1, ShortHand_59, 5) = ((MR_Box) (OrElseAlternatives_58));
                    MR_hl_field(1, ShortHand_59, 6) = ((MR_Box) (OrElseInners_56));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_60 = ((MR_Word) ((MR_hl_field(2, ShortHand0_50, 0))));
                  MR_Word ResultVar_61 = ((MR_Word) ((MR_hl_field(2, ShortHand0_50, 1))));
                  MR_Word SubGoal_73;
                  MR_Word SubGoal0_74 = ((MR_Word) ((MR_hl_field(2, ShortHand0_50, 2))));

                  hlds__assertion__normalise_goal_2_p_0(SubGoal0_74, &SubGoal_73);
                  {
                    ShortHand_59 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_59, 0) = ((MR_Box) (MaybeIO_60));
                    MR_hl_field(2, ShortHand_59, 1) = ((MR_Box) (ResultVar_61));
                    MR_hl_field(2, ShortHand_59, 2) = ((MR_Box) (SubGoal_73));
                  }
                }
                break;
            }
            {
              GoalExpr_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_30, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, GoalExpr_30, 1) = ((MR_Box) (ShortHand_59));
            }
          }
          break;
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_30));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_6));
  }
}

static void MR_CALL 
hlds__assertion__normalise_conj_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Goal0_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Goals0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ConjGoals_6;
    MR_Word Goals1_7;

    hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal0_3, &ConjGoals_6);
    hlds__assertion__normalise_conj_2_p_0(Goals0_4, &Goals1_7);
    mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ConjGoals_6, Goals1_7, HeadVar__2_2);
  }
}

static MR_bool MR_CALL 
hlds__assertion____Unify____associative_vars_output_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__assertion____Unify____associative_vars_output_var_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__assertion____Compare____associative_vars_output_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__assertion____Compare____associative_vars_output_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__assertion____Unify____state_update_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__assertion____Unify____state_update_vars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__assertion____Compare____state_update_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__assertion____Compare____state_update_vars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__assertion____Unify____subst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__assertion____Unify____subst_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__assertion____Compare____subst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__assertion____Compare____subst_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__assertion__init(void)
{
}

void mercury__hlds__assertion__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__assertion__hlds__assertion__type_ctor_info_associative_vars_output_var_0);
  MR_register_type_ctor_info(&hlds__assertion__hlds__assertion__type_ctor_info_state_update_vars_0);
  MR_register_type_ctor_info(&hlds__assertion__hlds__assertion__type_ctor_info_subst_0);
}

void mercury__hlds__assertion__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__assertion__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.assertion.
