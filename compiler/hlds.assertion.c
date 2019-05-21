/*
** Automatically generated from `assertion.m'
** by the Mercury compiler,
** version rotd-2017-08-08
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
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
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
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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



struct hlds__assertion__update_5_p_0_env_0_s {
  MR_Word hlds__assertion__update_5_p_0_env_0__UniversiallyQuantifiedVars_8;
  MR_Word hlds__assertion__update_5_p_0_env_0__CallVars_9;
  MR_Word * hlds__assertion__update_5_p_0_env_0__StateVars_10;
  MR_Cont hlds__assertion__update_5_p_0_env_0__cont;
  void * hlds__assertion__update_5_p_0_env_0__cont_env_ptr;
  MR_bool hlds__assertion__update_5_p_0_env_0__succeeded;
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_62_62;
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_63_63;
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_64_64;
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_77_77;
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_78_78;
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_79_79;
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_80_80;
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_81_81;
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_82_82;
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_83_83;
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_85_85;
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_87_87;
  MR_Word hlds__assertion__update_5_p_0_env_0__LHSCalls_11;
  MR_Word hlds__assertion__update_5_p_0_env_0__RHSCalls_12;
  MR_Word hlds__assertion__update_5_p_0_env_0__PredId_13;
  MR_Word hlds__assertion__update_5_p_0_env_0__SA_14;
  MR_Word hlds__assertion__update_5_p_0_env_0__PairsL_15;
  MR_Word hlds__assertion__update_5_p_0_env_0__Vs_16;
  MR_Word hlds__assertion__update_5_p_0_env_0__SB_17;
  MR_Word hlds__assertion__update_5_p_0_env_0__PairsR_18;
  MR_Word hlds__assertion__update_5_p_0_env_0__Pairs0_20;
  MR_Word hlds__assertion__update_5_p_0_env_0__Pairs_23;
  MR_Word hlds__assertion__update_5_p_0_env_0__S0_24;
  MR_Word hlds__assertion__update_5_p_0_env_0__S_25;
  MR_Word hlds__assertion__update_5_p_0_env_0__AssocList_26;
  MR_Word hlds__assertion__update_5_p_0_env_0__StateA_29;
  MR_Word hlds__assertion__update_5_p_0_env_0__StateB_31;
  MR_Word hlds__assertion__update_5_p_0_env_0__Var_32;
  MR_Integer hlds__assertion__update_5_p_0_env_0__Var_34;
  MR_Word hlds__assertion__update_5_p_0_env_0__Var_35;
  MR_Word hlds__assertion__update_5_p_0_env_0__Var_36;
  MR_Word hlds__assertion__update_5_p_0_env_0__Var_37;
  MR_Word hlds__assertion__update_5_p_0_env_0__Var_38;
  MR_Word hlds__assertion__update_5_p_0_env_0__Var_39;
  MR_Word hlds__assertion__update_5_p_0_env_0__Var_40;
  MR_Word hlds__assertion__update_5_p_0_env_0__Var_41;
  MR_Word hlds__assertion__update_5_p_0_env_0__Var_42;
  MR_Word hlds__assertion__update_5_p_0_env_0__Var_43;
  MR_Word hlds__assertion__update_5_p_0_env_0__Var_44;
  MR_Word hlds__assertion__update_5_p_0_env_0__Var_45;
  MR_Word hlds__assertion__update_5_p_0_env_0__Var_47;
  MR_Word hlds__assertion__update_5_p_0_env_0__Var_48;
  MR_Word hlds__assertion__update_5_p_0_env_0__Var_49;
  MR_Word hlds__assertion__update_5_p_0_env_0__Var_50;
  MR_Word hlds__assertion__update_5_p_0_env_0__Var_52;
  MR_Word hlds__assertion__update_5_p_0_env_0__Var_53;
  MR_Word hlds__assertion__update_5_p_0_env_0__Var_65;
  MR_Word hlds__assertion__update_5_p_0_env_0__Var_66;
  MR_Word hlds__assertion__update_5_p_0_env_0__Var_67;
  MR_Word hlds__assertion__update_5_p_0_env_0__Var_68;
  MR_Word hlds__assertion__update_5_p_0_env_0__Var_69;
  MR_Word hlds__assertion__update_5_p_0_env_0__Var_70;
  MR_Word hlds__assertion__update_5_p_0_env_0__Var_71;
  MR_Word hlds__assertion__update_5_p_0_env_0__Var_72;
  MR_Word hlds__assertion__update_5_p_0_env_0__Var_73;
  MR_Word hlds__assertion__update_5_p_0_env_0__Var_74;
};

struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s {
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__PredId_8;
  MR_bool hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded;
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Goals_32;
  jmp_buf hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__commit_0;
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeCtorInfo_40_67;
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeInfo_45_72;
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Call_34;
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Unifications_41;
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__P_42;
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_61;
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_64;
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_68;
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_69;
  MR_Box hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__conv0_Call_34;
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

struct hlds__assertion__associative_5_p_0_env_0_s {
  MR_Word hlds__assertion__associative_5_p_0_env_0__PCalls_6;
  MR_Word hlds__assertion__associative_5_p_0_env_0__QCalls_7;
  MR_Word hlds__assertion__associative_5_p_0_env_0__UniversiallyQuantifiedVars_8;
  MR_Word hlds__assertion__associative_5_p_0_env_0__CallVars_9;
  MR_Word * hlds__assertion__associative_5_p_0_env_0__AssociativeVarsOutputVar_10;
  MR_bool hlds__assertion__associative_5_p_0_env_0__succeeded;
  jmp_buf hlds__assertion__associative_5_p_0_env_0__commit_0;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_75_75;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_76_76;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_77_77;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeCtorInfo_78_78;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_93_93;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_94_94;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_95_95;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_96_96;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_97_97;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_98_98;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_99_99;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_100_100;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_101_101;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_103_103;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_105_105;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_107_107;
  MR_Word hlds__assertion__associative_5_p_0_env_0__LHSCalls_11;
  MR_Word hlds__assertion__associative_5_p_0_env_0__RHSCalls_12;
  MR_Word hlds__assertion__associative_5_p_0_env_0__PredId_13;
  MR_Word hlds__assertion__associative_5_p_0_env_0__AB_14;
  MR_Word hlds__assertion__associative_5_p_0_env_0__PairsL_15;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Vs_16;
  MR_Word hlds__assertion__associative_5_p_0_env_0__BC_17;
  MR_Word hlds__assertion__associative_5_p_0_env_0__PairsR_18;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Pairs_20;
  MR_Word hlds__assertion__associative_5_p_0_env_0__A_21;
  MR_Word hlds__assertion__associative_5_p_0_env_0__B_22;
  MR_Word hlds__assertion__associative_5_p_0_env_0__C_23;
  MR_Word hlds__assertion__associative_5_p_0_env_0__ABC_24;
  MR_Word hlds__assertion__associative_5_p_0_env_0__AssocList_25;
  MR_Word hlds__assertion__associative_5_p_0_env_0__OutputVar_29;
  MR_Word hlds__assertion__associative_5_p_0_env_0__CallVarA_31;
  MR_Word hlds__assertion__associative_5_p_0_env_0__CallVarB_33;
  MR_Word hlds__assertion__associative_5_p_0_env_0__AssociativeVars_34;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_35;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_36;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_37;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_38;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_39;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_40;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_41;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_42;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_43;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_44;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_45;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_46;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_47;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_48;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_49;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_51;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_52;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_53;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_54;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_56;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_57;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_58;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_59;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_61;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_62;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_63;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_64;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_65;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_79;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_80;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_81;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_82;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_83;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_84;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_85;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_86;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_87;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_88;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_89;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_90;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Var_91;
};

struct hlds__assertion__reorder_4_p_0_env_0_s {
  MR_Word hlds__assertion__reorder_4_p_0_env_0__QCalls_2;
  MR_Word * hlds__assertion__reorder_4_p_0_env_0__LHSCalls_3;
  MR_Word * hlds__assertion__reorder_4_p_0_env_0__RHSCalls_4;
  MR_Cont hlds__assertion__reorder_4_p_0_env_0__cont;
  void * hlds__assertion__reorder_4_p_0_env_0__cont_env_ptr;
  MR_Word hlds__assertion__reorder_4_p_0_env_0__TypeCtorInfo_13_13;
  MR_Word hlds__assertion__reorder_4_p_0_env_0__TypeCtorInfo_14_14;
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
hlds__assertion__IntroducedFrom__pred__predicate_call__437__1_1_p_0(
  MR_Word hlds__assertion__LambdaHeadVar__1_35);

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__update__357__1_2_p_0(
  MR_Word hlds__assertion__SA_14,
  MR_Word hlds__assertion__LambdaHeadVar__1_51);

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__update__355__1_2_p_0(
  MR_Word hlds__assertion__S0_24,
  MR_Word hlds__assertion__LambdaHeadVar__1_46);

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__update__344__1_1_p_0(
  MR_Word hlds__assertion__LambdaHeadVar__1_33);

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__process_one_side__308__1_1_p_0(
  MR_Word hlds__assertion__LambdaHeadVar__1_17);

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__associative__266__1_2_p_0(
  MR_Word hlds__assertion__B_22,
  MR_Word hlds__assertion__LambdaHeadVar__1_60);

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__associative__264__1_2_p_0(
  MR_Word hlds__assertion__A_21,
  MR_Word hlds__assertion__LambdaHeadVar__1_55);

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__associative__262__1_2_p_0(
  MR_Word hlds__assertion__AB_14,
  MR_Word hlds__assertion__LambdaHeadVar__1_50);

static void MR_CALL 
hlds__assertion____Compare____subst_0_0(
  MR_Word * hlds__assertion__HeadVar__1_1,
  MR_Word hlds__assertion__HeadVar__2_2,
  MR_Word hlds__assertion__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__assertion____Unify____subst_0_0(
  MR_Word hlds__assertion__HeadVar__1_1,
  MR_Word hlds__assertion__HeadVar__2_2);

static void MR_CALL 
hlds__assertion__update_pred_info_4_p_0(
  MR_Integer hlds__assertion__AssertId_5,
  MR_Word hlds__assertion__PredId_6,
  MR_Word hlds__assertion__STATE_VARIABLE_Module_0_12,
  MR_Word * hlds__assertion__STATE_VARIABLE_Module_13);

static MR_bool MR_CALL 
hlds__assertion__update_5_p_0_5(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1);

static MR_bool MR_CALL 
hlds__assertion__update_5_p_0_4(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1);

static MR_bool MR_CALL 
hlds__assertion__update_5_p_0_2(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1);

static void MR_CALL 
hlds__assertion__update_5_p_0_3(
  void * hlds__assertion__env_ptr_arg);

static void MR_CALL 
hlds__assertion__update_5_p_0_1(
  void * hlds__assertion__env_ptr_arg);

static void MR_CALL 
hlds__assertion__update_5_p_0(
  MR_Word hlds__assertion__PCalls_6,
  MR_Word hlds__assertion__QCalls_7,
  MR_Word hlds__assertion__UniversiallyQuantifiedVars_8,
  MR_Word hlds__assertion__CallVars_9,
  MR_Word * hlds__assertion__StateVars_10,
  MR_Cont hlds__assertion__cont,
  void * hlds__assertion__cont_env_ptr);

static MR_bool MR_CALL 
hlds__assertion__process_two_linked_calls_6_p_0(
  MR_Word hlds__assertion__Goals_7,
  MR_Word hlds__assertion__UniversiallyQuantifiedVars_8,
  MR_Word * hlds__assertion__PredId_9,
  MR_Word * hlds__assertion__LinkingVar_10,
  MR_Word * hlds__assertion__Vars_11,
  MR_Word * hlds__assertion__VarsA_12);

static MR_bool MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_5(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1);

static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_1(
  void * hlds__assertion__env_ptr_arg);

static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_3(
  void * hlds__assertion__env_ptr_arg);

static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_4(
  void * hlds__assertion__env_ptr_arg);

static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_2(
  void * hlds__assertion__env_ptr_arg);

static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_6(
  void * hlds__assertion__env_ptr_arg);

static MR_bool MR_CALL 
hlds__assertion__predicate_call_2_p_0_5(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1);

static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_1(
  void * hlds__assertion__env_ptr_arg);

static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_3(
  void * hlds__assertion__env_ptr_arg);

static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_4(
  void * hlds__assertion__env_ptr_arg);

static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_2(
  void * hlds__assertion__env_ptr_arg);

static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_6(
  void * hlds__assertion__env_ptr_arg);

static MR_bool MR_CALL 
hlds__assertion__predicate_call_2_p_0(
  MR_Word hlds__assertion__Goal_3,
  MR_Word hlds__assertion__PredId_4);

static void MR_CALL 
hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0_1(
  void * hlds__assertion__env_ptr_arg);

static void MR_CALL 
hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0_2(
  MR_Box hlds__assertion__closure_arg,
  MR_Box * hlds__assertion__wrapper_arg_1,
  MR_Cont hlds__assertion__cont,
  void * hlds__assertion__cont_env_ptr);

static MR_bool MR_CALL 
hlds__assertion__associative_5_p_0_6(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1);

static MR_bool MR_CALL 
hlds__assertion__associative_5_p_0_5(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1);

static MR_bool MR_CALL 
hlds__assertion__associative_5_p_0_4(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1);

static void MR_CALL 
hlds__assertion__associative_5_p_0_1(
  void * hlds__assertion__env_ptr_arg);

static void MR_CALL 
hlds__assertion__associative_5_p_0_3(
  void * hlds__assertion__env_ptr_arg);

static void MR_CALL 
hlds__assertion__associative_5_p_0_2(
  void * hlds__assertion__env_ptr_arg);

static void MR_CALL 
hlds__assertion__associative_5_p_0_7(
  void * hlds__assertion__env_ptr_arg);

static MR_bool MR_CALL 
hlds__assertion__associative_5_p_0(
  MR_Word hlds__assertion__PCalls_6,
  MR_Word hlds__assertion__QCalls_7,
  MR_Word hlds__assertion__UniversiallyQuantifiedVars_8,
  MR_Word hlds__assertion__CallVars_9,
  MR_Word * hlds__assertion__AssociativeVarsOutputVar_10);

static MR_bool MR_CALL 
hlds__assertion__process_one_side_6_p_0_1(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1);

static MR_bool MR_CALL 
hlds__assertion__process_one_side_6_p_0(
  MR_Word hlds__assertion__Goals_7,
  MR_Word hlds__assertion__UniversiallyQuantifiedVars_8,
  MR_Word * hlds__assertion__PredId_9,
  MR_Word * hlds__assertion__LinkingVar_10,
  MR_Word * hlds__assertion__Vars_11,
  MR_Word * hlds__assertion__VarsA_12);

static void MR_CALL 
hlds__assertion__reorder_4_p_0_1(
  void * hlds__assertion__env_ptr_arg);

static void MR_CALL 
hlds__assertion__reorder_4_p_0_2(
  void * hlds__assertion__env_ptr_arg);

static void MR_CALL 
hlds__assertion__reorder_4_p_0(
  MR_Word hlds__assertion__PCalls_1,
  MR_Word hlds__assertion__QCalls_2,
  MR_Word * hlds__assertion__LHSCalls_3,
  MR_Word * hlds__assertion__RHSCalls_4,
  MR_Cont hlds__assertion__cont,
  void * hlds__assertion__cont_env_ptr);

static MR_bool MR_CALL 
hlds__assertion__goal_is_equivalence_3_p_0(
  MR_Word hlds__assertion__Goal_4,
  MR_Word * hlds__assertion__P_5,
  MR_Word * hlds__assertion__Q_6);

static MR_bool MR_CALL 
hlds__assertion__equal_goals_cases_4_p_0(
  MR_Word hlds__assertion__HeadVar__1_1,
  MR_Word hlds__assertion__HeadVar__2_2,
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4);

static MR_bool MR_CALL 
hlds__assertion__equal_goals_list_4_p_0(
  MR_Word hlds__assertion__HeadVar__1_1,
  MR_Word hlds__assertion__HeadVar__2_2,
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4);

static MR_bool MR_CALL 
hlds__assertion__equal_unification_4_p_0(
  MR_Word hlds__assertion__RhsA_5,
  MR_Word hlds__assertion__RhsB_6,
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_26,
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_27);

static MR_bool MR_CALL 
hlds__assertion__equal_goals_shorthand_4_p_0(
  MR_Word hlds__assertion__ShortHandA_5,
  MR_Word hlds__assertion__ShortHandB_6,
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_12,
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_13);

static MR_Box MR_CALL 
hlds__assertion__equal_goals_4_p_0_2(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1);

static MR_Box MR_CALL 
hlds__assertion__equal_goals_4_p_0_1(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1);

static MR_bool MR_CALL 
hlds__assertion__equal_goals_4_p_0(
  MR_Word hlds__assertion__GoalA_5,
  MR_Word hlds__assertion__GoalB_6,
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_72,
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_73);

static MR_bool MR_CALL 
hlds__assertion__equal_var_4_p_0(
  MR_Word hlds__assertion__VA_5,
  MR_Word hlds__assertion__VB_6,
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_9,
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_10);

static MR_bool MR_CALL 
hlds__assertion__equal_reason_4_p_0(
  MR_Word hlds__assertion__ReasonA_5,
  MR_Word hlds__assertion__ReasonB_6,
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_27,
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_28);

static MR_bool MR_CALL 
hlds__assertion__equal_vars_4_p_0(
  MR_Word hlds__assertion__HeadVar__1_1,
  MR_Word hlds__assertion__HeadVar__2_2,
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4);

static MR_bool MR_CALL 
hlds__assertion__commutative_var_ordering_4_p_0(
  MR_Word hlds__assertion__HeadVar__1_1,
  MR_Word hlds__assertion__HeadVar__2_2,
  MR_Word hlds__assertion__HeadVar__3_3,
  MR_Word * hlds__assertion__CommutativeVars_11);

static MR_bool MR_CALL 
hlds__assertion__commutative_var_ordering_2_6_p_0(
  MR_Word hlds__assertion__VarP_7,
  MR_Word hlds__assertion__VarQ_8,
  MR_Word hlds__assertion__HeadVar__3_3,
  MR_Word hlds__assertion__HeadVar__4_4,
  MR_Word hlds__assertion__HeadVar__5_5,
  MR_Word * hlds__assertion__CallVarB_15);

static void MR_CALL 
hlds__assertion__record_preds_used_in_4_p_0_1(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1,
  MR_Box hlds__assertion__wrapper_arg_2,
  MR_Box * hlds__assertion__wrapper_arg_3);

static void MR_CALL 
hlds__assertion__normalise_goals_2_p_0(
  MR_Word hlds__assertion__HeadVar__1_1,
  MR_Word * hlds__assertion__HeadVar__2_2);

static void MR_CALL 
hlds__assertion__normalise_cases_2_p_0(
  MR_Word hlds__assertion__HeadVar__1_1,
  MR_Word * hlds__assertion__HeadVar__2_2);

static void MR_CALL 
hlds__assertion__normalise_conj_2_p_0(
  MR_Word hlds__assertion__HeadVar__1_1,
  MR_Word * hlds__assertion__HeadVar__2_2);

static MR_bool MR_CALL 
hlds__assertion____Unify____associative_vars_output_var_0_0_10001(
  MR_Box hlds__assertion__wrapper_arg_1,
  MR_Box hlds__assertion__wrapper_arg_2);

static void MR_CALL 
hlds__assertion____Compare____associative_vars_output_var_0_0_10001(
  MR_Box * hlds__assertion__wrapper_arg_1,
  MR_Box hlds__assertion__wrapper_arg_2,
  MR_Box hlds__assertion__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__assertion____Unify____state_update_vars_0_0_10001(
  MR_Box hlds__assertion__wrapper_arg_1,
  MR_Box hlds__assertion__wrapper_arg_2);

static void MR_CALL 
hlds__assertion____Compare____state_update_vars_0_0_10001(
  MR_Box * hlds__assertion__wrapper_arg_1,
  MR_Box hlds__assertion__wrapper_arg_2,
  MR_Box hlds__assertion__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__assertion____Unify____subst_0_0_10001(
  MR_Box hlds__assertion__wrapper_arg_1,
  MR_Box hlds__assertion__wrapper_arg_2);

static void MR_CALL 
hlds__assertion____Compare____subst_0_0_10001(
  MR_Box * hlds__assertion__wrapper_arg_1,
  MR_Box hlds__assertion__wrapper_arg_2,
  MR_Box hlds__assertion__wrapper_arg_3);


static /* final */ const MR_Box hlds__assertion_scalar_common_1[9][2];

static /* final */ const MR_Box hlds__assertion_scalar_common_2[9][3];

static /* final */ const MR_Box hlds__assertion_scalar_common_3[1][7];

static /* final */ const MR_Box hlds__assertion_scalar_common_4[2][5];

static /* final */ const MR_Box hlds__assertion_scalar_common_5[3][4];

static /* final */ const MR_Box hlds__assertion_scalar_common_6[1][8];




static /* final */ const MR_Box hlds__assertion_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&hlds__assertion_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__assertion_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__assertion_scalar_common_2[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__assertion_scalar_common_2[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 8 */
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
    ((MR_Box) (hlds__assertion__equal_goals_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__assertion_scalar_common_4[0])),
    ((MR_Box) (hlds__assertion__equal_goals_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__assertion_scalar_common_5[0])),
    ((MR_Box) (hlds__assertion__process_one_side_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__assertion_scalar_common_5[1])),
    ((MR_Box) (hlds__assertion__predicate_call_2_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__assertion_scalar_common_5[1])),
    ((MR_Box) (hlds__assertion__is_construction_equivalence_assertion_4_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__assertion_scalar_common_5[2])),
    ((MR_Box) (hlds__assertion__update_5_p_0_2)),
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

static /* final */ const MR_Box hlds__assertion_scalar_common_4[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__assertion__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__assertion__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__assertion__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__assertion_scalar_common_5[3][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__assertion__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__assertion__pair__pti_pair_2__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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
    ((MR_Box) (&hlds__assertion__hlds__assertion__type_ctor_info_state_update_vars_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__assertion__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__assertion__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__assertion__pair__pti_pair_2__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__assertion__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__assertion__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__assertion__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo hlds__assertion__hlds__assertion__field_types_associative_vars_output_var_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__assertion__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc hlds__assertion__hlds__assertion__du_functor_desc_associative_vars_output_var_0_0 = {
  (MR_String) "associative_vars_output_var",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__assertion__hlds__assertion__field_types_associative_vars_output_var_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__assertion__hlds__assertion__du_stag_ordered_associative_vars_output_var_0_0[1] = {
  &hlds__assertion__hlds__assertion__du_functor_desc_associative_vars_output_var_0_0
};

static const MR_DuPtagLayout hlds__assertion__hlds__assertion__du_ptag_ordered_associative_vars_output_var_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__assertion__hlds__assertion__du_stag_ordered_associative_vars_output_var_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__assertion__hlds__assertion__du_name_ordered_associative_vars_output_var_0[1] = {
  &hlds__assertion__hlds__assertion__du_functor_desc_associative_vars_output_var_0_0
};

static const MR_Integer hlds__assertion__hlds__assertion__functor_number_map_associative_vars_output_var_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__assertion__hlds__assertion__type_ctor_info_associative_vars_output_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__assertion____Unify____associative_vars_output_var_0_0_10001)),
  ((MR_Box) (hlds__assertion____Compare____associative_vars_output_var_0_0_10001)),
  (MR_String) "hlds.assertion",
  (MR_String) "associative_vars_output_var",
  {     hlds__assertion__hlds__assertion__du_name_ordered_associative_vars_output_var_0 },
  {     hlds__assertion__hlds__assertion__du_ptag_ordered_associative_vars_output_var_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__assertion__hlds__assertion__functor_number_map_associative_vars_output_var_0
};

static const MR_PseudoTypeInfo hlds__assertion__hlds__assertion__field_types_state_update_vars_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc hlds__assertion__hlds__assertion__du_functor_desc_state_update_vars_0_0 = {
  (MR_String) "state_update_vars",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__assertion__hlds__assertion__field_types_state_update_vars_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__assertion__hlds__assertion__du_stag_ordered_state_update_vars_0_0[1] = {
  &hlds__assertion__hlds__assertion__du_functor_desc_state_update_vars_0_0
};

static const MR_DuPtagLayout hlds__assertion__hlds__assertion__du_ptag_ordered_state_update_vars_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__assertion__hlds__assertion__du_stag_ordered_state_update_vars_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__assertion__hlds__assertion__du_name_ordered_state_update_vars_0[1] = {
  &hlds__assertion__hlds__assertion__du_functor_desc_state_update_vars_0_0
};

static const MR_Integer hlds__assertion__hlds__assertion__functor_number_map_state_update_vars_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__assertion__hlds__assertion__type_ctor_info_state_update_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__assertion____Unify____state_update_vars_0_0_10001)),
  ((MR_Box) (hlds__assertion____Compare____state_update_vars_0_0_10001)),
  (MR_String) "hlds.assertion",
  (MR_String) "state_update_vars",
  {     hlds__assertion__hlds__assertion__du_name_ordered_state_update_vars_0 },
  {     hlds__assertion__hlds__assertion__du_ptag_ordered_state_update_vars_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__assertion__hlds__assertion__functor_number_map_state_update_vars_0
};

static const MR_FA_TypeInfo_Struct2 hlds__assertion__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

const MR_TypeCtorInfo_Struct hlds__assertion__hlds__assertion__type_ctor_info_subst_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__predicate_call__437__1_1_p_0(
  MR_Word hlds__assertion__LambdaHeadVar__1_35)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Word hlds__assertion__UnifyRhs_18;
    MR_Word hlds__assertion__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_35, (MR_Integer) 0)));
    MR_Word hlds__assertion__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_35, (MR_Integer) 1)));
    MR_Word hlds__assertion__Var_17;
    MR_Word hlds__assertion__Var_19;
    MR_Word hlds__assertion__Var_20;
    MR_Word hlds__assertion__Var_21;
    MR_Word hlds__assertion__Var_23;
    MR_Word hlds__assertion__Var_24;
    MR_Word hlds__assertion__Var_25;

    hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Var_36)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__assertion__succeeded)
    {
      hlds__assertion__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Var_36, (MR_Integer) 0)));
      hlds__assertion__UnifyRhs_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Var_36, (MR_Integer) 1)));
      hlds__assertion__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Var_36, (MR_Integer) 2)));
      hlds__assertion__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Var_36, (MR_Integer) 3)));
      hlds__assertion__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Var_36, (MR_Integer) 4)));
      hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__UnifyRhs_18)) == (MR_mktag((MR_Integer) 1)));
      if (hlds__assertion__succeeded)
      {
        hlds__assertion__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRhs_18, (MR_Integer) 0)));
        hlds__assertion__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRhs_18, (MR_Integer) 1)));
        hlds__assertion__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRhs_18, (MR_Integer) 2)));
      }
    }
    hlds__assertion__succeeded = !(hlds__assertion__succeeded);
    return hlds__assertion__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__update__357__1_2_p_0(
  MR_Word hlds__assertion__SA_14,
  MR_Word hlds__assertion__LambdaHeadVar__1_51)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Word hlds__assertion__X_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_51, (MR_Integer) 0)));
    MR_Word hlds__assertion___Y_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_51, (MR_Integer) 1)));

    hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__X_60)), ((MR_Box) (hlds__assertion__SA_14)));
    return hlds__assertion__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__update__355__1_2_p_0(
  MR_Word hlds__assertion__S0_24,
  MR_Word hlds__assertion__LambdaHeadVar__1_46)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Word hlds__assertion__X_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_46, (MR_Integer) 0)));
    MR_Word hlds__assertion___Y_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_46, (MR_Integer) 1)));

    hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__X_57)), ((MR_Box) (hlds__assertion__S0_24)));
    return hlds__assertion__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__update__344__1_1_p_0(
  MR_Word hlds__assertion__LambdaHeadVar__1_33)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Word hlds__assertion__X_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_33, (MR_Integer) 0)));
    MR_Word hlds__assertion__Y_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_33, (MR_Integer) 1)));

    hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_2[0], ((MR_Box) (hlds__assertion__X_54)), ((MR_Box) (hlds__assertion__Y_55)));
    hlds__assertion__succeeded = !(hlds__assertion__succeeded);
    return hlds__assertion__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__process_one_side__308__1_1_p_0(
  MR_Word hlds__assertion__LambdaHeadVar__1_17)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Word hlds__assertion__X_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_17, (MR_Integer) 0)));
    MR_Word hlds__assertion__Y_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_17, (MR_Integer) 1)));

    hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__X_19)), ((MR_Box) (hlds__assertion__Y_20)));
    hlds__assertion__succeeded = !(hlds__assertion__succeeded);
    return hlds__assertion__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__associative__266__1_2_p_0(
  MR_Word hlds__assertion__B_22,
  MR_Word hlds__assertion__LambdaHeadVar__1_60)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Word hlds__assertion__X_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_60, (MR_Integer) 0)));
    MR_Word hlds__assertion___Y_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_60, (MR_Integer) 1)));

    hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__X_73)), ((MR_Box) (hlds__assertion__B_22)));
    return hlds__assertion__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__associative__264__1_2_p_0(
  MR_Word hlds__assertion__A_21,
  MR_Word hlds__assertion__LambdaHeadVar__1_55)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Word hlds__assertion__X_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_55, (MR_Integer) 0)));
    MR_Word hlds__assertion___Y_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_55, (MR_Integer) 1)));

    hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__X_70)), ((MR_Box) (hlds__assertion__A_21)));
    return hlds__assertion__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__associative__262__1_2_p_0(
  MR_Word hlds__assertion__AB_14,
  MR_Word hlds__assertion__LambdaHeadVar__1_50)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Word hlds__assertion__X_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_50, (MR_Integer) 0)));
    MR_Word hlds__assertion___Y_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_50, (MR_Integer) 1)));

    hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__X_67)), ((MR_Box) (hlds__assertion__AB_14)));
    return hlds__assertion__succeeded;
  }
}

static void MR_CALL 
hlds__assertion____Compare____subst_0_0(
  MR_Word * hlds__assertion__HeadVar__1_1,
  MR_Word hlds__assertion__HeadVar__2_2,
  MR_Word hlds__assertion__HeadVar__3_3)
{
  {
    MR_Word hlds__assertion__Cast_HeadVar1_4 = hlds__assertion__HeadVar__2_2;
    MR_Word hlds__assertion__Cast_HeadVar2_5 = hlds__assertion__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &hlds__assertion_scalar_common_2[2], hlds__assertion__HeadVar__1_1, ((MR_Box) (hlds__assertion__Cast_HeadVar1_4)), ((MR_Box) (hlds__assertion__Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
hlds__assertion____Unify____subst_0_0(
  MR_Word hlds__assertion__HeadVar__1_1,
  MR_Word hlds__assertion__HeadVar__2_2)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Word hlds__assertion__Cast_HeadVar1_3 = hlds__assertion__HeadVar__1_1;
    MR_Word hlds__assertion__Cast_HeadVar2_4 = hlds__assertion__HeadVar__2_2;

    hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_2[2], ((MR_Box) (hlds__assertion__Cast_HeadVar1_3)), ((MR_Box) (hlds__assertion__Cast_HeadVar2_4)));
    return hlds__assertion__succeeded;
  }
}

void MR_CALL 
hlds__assertion____Compare____state_update_vars_0_0(
  MR_Word * hlds__assertion__HeadVar__1_1,
  MR_Word hlds__assertion__HeadVar__2_2,
  MR_Word hlds__assertion__HeadVar__3_3)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Integer hlds__assertion__CastX_9 = (MR_Integer) hlds__assertion__HeadVar__2_2;
    MR_Integer hlds__assertion__CastY_10 = (MR_Integer) hlds__assertion__HeadVar__3_3;

    hlds__assertion__succeeded = (hlds__assertion__CastX_9 == hlds__assertion__CastY_10);
    if (hlds__assertion__succeeded)
      *hlds__assertion__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word hlds__assertion__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word hlds__assertion__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word hlds__assertion__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word hlds__assertion__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word hlds__assertion__Var_8;

      mercury__builtin__compare_3_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], &hlds__assertion__Var_8, ((MR_Box) (hlds__assertion__ArgX1_4)), ((MR_Box) (hlds__assertion__ArgY1_5)));
      hlds__assertion__succeeded = (hlds__assertion__Var_8 == (MR_Integer) 0);
      hlds__assertion__succeeded = !(hlds__assertion__succeeded);
      if (hlds__assertion__succeeded)
        *hlds__assertion__HeadVar__1_1 = hlds__assertion__Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], hlds__assertion__HeadVar__1_1, ((MR_Box) (hlds__assertion__ArgX2_6)), ((MR_Box) (hlds__assertion__ArgY2_7)));
      }
    }
  }
}

MR_bool MR_CALL 
hlds__assertion____Unify____state_update_vars_0_0(
  MR_Word hlds__assertion__HeadVar__1_1,
  MR_Word hlds__assertion__HeadVar__2_2)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Integer hlds__assertion__CastX_7 = (MR_Integer) hlds__assertion__HeadVar__1_1;
    MR_Integer hlds__assertion__CastY_8 = (MR_Integer) hlds__assertion__HeadVar__2_2;

    hlds__assertion__succeeded = (hlds__assertion__CastX_7 == hlds__assertion__CastY_8);
    if (hlds__assertion__succeeded)
      hlds__assertion__succeeded = MR_TRUE;
    else
    {
      MR_Word hlds__assertion__TypeInfo_10_10;
      MR_Word hlds__assertion__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__assertion__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word hlds__assertion__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word hlds__assertion__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__HeadVar__2_2, (MR_Integer) 1)));

      hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__ArgX1_3)), ((MR_Box) (hlds__assertion__ArgY1_4)));
      if (hlds__assertion__succeeded)
      {
        hlds__assertion__TypeInfo_10_10 = (MR_Word) &hlds__assertion_scalar_common_1[0];
        hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_10_10, ((MR_Box) (hlds__assertion__ArgX2_5)), ((MR_Box) (hlds__assertion__ArgY2_6)));
      }
    }
    return hlds__assertion__succeeded;
  }
}

void MR_CALL 
hlds__assertion____Compare____associative_vars_output_var_0_0(
  MR_Word * hlds__assertion__HeadVar__1_1,
  MR_Word hlds__assertion__HeadVar__2_2,
  MR_Word hlds__assertion__HeadVar__3_3)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Integer hlds__assertion__CastX_9 = (MR_Integer) hlds__assertion__HeadVar__2_2;
    MR_Integer hlds__assertion__CastY_10 = (MR_Integer) hlds__assertion__HeadVar__3_3;

    hlds__assertion__succeeded = (hlds__assertion__CastX_9 == hlds__assertion__CastY_10);
    if (hlds__assertion__succeeded)
      *hlds__assertion__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word hlds__assertion__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word hlds__assertion__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word hlds__assertion__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word hlds__assertion__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word hlds__assertion__Var_8;

      mercury__builtin__compare_3_p_0((MR_Word) &hlds__assertion_scalar_common_1[1], &hlds__assertion__Var_8, ((MR_Box) (hlds__assertion__ArgX1_4)), ((MR_Box) (hlds__assertion__ArgY1_5)));
      hlds__assertion__succeeded = (hlds__assertion__Var_8 == (MR_Integer) 0);
      hlds__assertion__succeeded = !(hlds__assertion__succeeded);
      if (hlds__assertion__succeeded)
        *hlds__assertion__HeadVar__1_1 = hlds__assertion__Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], hlds__assertion__HeadVar__1_1, ((MR_Box) (hlds__assertion__ArgX2_6)), ((MR_Box) (hlds__assertion__ArgY2_7)));
      }
    }
  }
}

MR_bool MR_CALL 
hlds__assertion____Unify____associative_vars_output_var_0_0(
  MR_Word hlds__assertion__HeadVar__1_1,
  MR_Word hlds__assertion__HeadVar__2_2)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Integer hlds__assertion__CastX_7 = (MR_Integer) hlds__assertion__HeadVar__1_1;
    MR_Integer hlds__assertion__CastY_8 = (MR_Integer) hlds__assertion__HeadVar__2_2;

    hlds__assertion__succeeded = (hlds__assertion__CastX_7 == hlds__assertion__CastY_8);
    if (hlds__assertion__succeeded)
      hlds__assertion__succeeded = MR_TRUE;
    else
    {
      MR_Word hlds__assertion__TypeInfo_10_10;
      MR_Word hlds__assertion__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__assertion__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word hlds__assertion__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word hlds__assertion__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__HeadVar__2_2, (MR_Integer) 1)));

      hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[1], ((MR_Box) (hlds__assertion__ArgX1_3)), ((MR_Box) (hlds__assertion__ArgY1_4)));
      if (hlds__assertion__succeeded)
      {
        hlds__assertion__TypeInfo_10_10 = (MR_Word) &hlds__assertion_scalar_common_1[0];
        hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_10_10, ((MR_Box) (hlds__assertion__ArgX2_5)), ((MR_Box) (hlds__assertion__ArgY2_6)));
      }
    }
    return hlds__assertion__succeeded;
  }
}

static void MR_CALL 
hlds__assertion__update_pred_info_4_p_0(
  MR_Integer hlds__assertion__AssertId_5,
  MR_Word hlds__assertion__PredId_6,
  MR_Word hlds__assertion__STATE_VARIABLE_Module_0_12,
  MR_Word * hlds__assertion__STATE_VARIABLE_Module_13)
{
  {
    MR_Word hlds__assertion__PredInfo0_8;
    MR_Word hlds__assertion__Assertions0_9;
    MR_Word hlds__assertion__Assertions_10;
    MR_Word hlds__assertion__PredInfo_11;

    hlds__hlds_module__module_info_pred_info_3_p_0(hlds__assertion__STATE_VARIABLE_Module_0_12, hlds__assertion__PredId_6, &hlds__assertion__PredInfo0_8);
    hlds__hlds_pred__pred_info_get_assertions_2_p_0(hlds__assertion__PredInfo0_8, &hlds__assertion__Assertions0_9);
    mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (hlds__assertion__AssertId_5)), hlds__assertion__Assertions0_9, &hlds__assertion__Assertions_10);
    hlds__hlds_pred__pred_info_set_assertions_3_p_0(hlds__assertion__Assertions_10, hlds__assertion__PredInfo0_8, &hlds__assertion__PredInfo_11);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(hlds__assertion__PredId_6, hlds__assertion__PredInfo_11, hlds__assertion__STATE_VARIABLE_Module_0_12, hlds__assertion__STATE_VARIABLE_Module_13);
  }
}

static MR_bool MR_CALL 
hlds__assertion__update_5_p_0_5(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

    hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__update__357__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 3))), ((MR_Word) hlds__assertion__wrapper_arg_1));
    return hlds__assertion__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__assertion__update_5_p_0_4(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

    hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__update__355__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 3))), ((MR_Word) hlds__assertion__wrapper_arg_1));
    return hlds__assertion__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__assertion__update_5_p_0_2(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

    hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__update__344__1_1_p_0(((MR_Word) hlds__assertion__wrapper_arg_1));
    return hlds__assertion__succeeded;
  }
}

static void MR_CALL 
hlds__assertion__update_5_p_0_3(
  void * hlds__assertion__env_ptr_arg)
{
  {
    struct hlds__assertion__update_5_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__update_5_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

    {
      MR_Word hlds__assertion___S0_28;
      MR_Word hlds__assertion___SA_30;

      (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_35)) == (MR_mktag((MR_Integer) 1)));
      if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
      {
        (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_35, (MR_Integer) 0)));
        (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_35, (MR_Integer) 1)));
        (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_36, (MR_Integer) 0)));
        (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_36, (MR_Integer) 1)));
        (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__S0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_37, (MR_Integer) 0)));
        (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_37, (MR_Integer) 1)));
        (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_77_77 = (MR_Word) &hlds__assertion_scalar_common_1[0];
        (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_77_77, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__SA_14)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_66)));
        if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
        {
          (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_38, (MR_Integer) 0)));
          (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_38, (MR_Integer) 1)));
          (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_78_78 = (MR_Word) &hlds__assertion_scalar_common_1[0];
          (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_78_78, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__SB_17)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_67)));
          if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
          {
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_79_79 = (MR_Word) &hlds__assertion_scalar_common_1[0];
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_79_79, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__S0_24)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_68)));
            if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
            {
              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_39)) == (MR_mktag((MR_Integer) 1)));
              if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
              {
                (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_39, (MR_Integer) 0)));
                (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_39, (MR_Integer) 1)));
                (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_80_80 = (MR_Word) &hlds__assertion_scalar_common_1[3];
                (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_80_80, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_43)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_69)));
                if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
                {
                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_40, (MR_Integer) 0)));
                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_40, (MR_Integer) 1)));
                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_41, (MR_Integer) 0)));
                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__S_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_41, (MR_Integer) 1)));
                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_81_81 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_81_81, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__SA_14)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_70)));
                  if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
                  {
                    (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_42, (MR_Integer) 0)));
                    (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_42, (MR_Integer) 1)));
                    (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_82_82 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                    (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_82_82, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__S_25)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_71)));
                    if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
                    {
                      (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_83_83 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                      (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_83_83, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__SB_17)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_72)));
                      if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
                      {
                        (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_64_64 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                        mercury__assoc_list__from_corresponding_lists_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_64_64, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_64_64, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Vs_16, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__CallVars_9, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__AssocList_26);
                        (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                          (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_44 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&hlds__assertion_scalar_common_4[1]));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__update_5_p_0_4));
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__S0_24));
                        }
                        mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_62_62, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_44, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__AssocList_26, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_45);
                        (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_45)) == (MR_mktag((MR_Integer) 1)));
                        if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
                        {
                          (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_45, (MR_Integer) 0)));
                          (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_45, (MR_Integer) 1)));
                          (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_85_85 = (MR_Word) &hlds__assertion_scalar_common_1[4];
                          (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_85_85, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_48)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_73)));
                          if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
                          {
                            hlds__assertion___S0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_47, (MR_Integer) 0)));
                            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__StateA_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_47, (MR_Integer) 1)));
                            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            {
                              MR_Word base;
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_49 = base;
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&hlds__assertion_scalar_common_4[1]));
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__update_5_p_0_5));
                              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__SA_14));
                            }
                            mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_62_62, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_49, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__AssocList_26, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_50);
                            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_50)) == (MR_mktag((MR_Integer) 1)));
                            if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
                            {
                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_50, (MR_Integer) 0)));
                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_50, (MR_Integer) 1)));
                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_87_87 = (MR_Word) &hlds__assertion_scalar_common_1[4];
                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_87_87, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_53)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_74)));
                              if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
                              {
                                hlds__assertion___SA_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_52, (MR_Integer) 0)));
                                (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__StateB_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_52, (MR_Integer) 1)));
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                  *((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__StateVars_10) = base;
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__StateA_29));
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__StateB_31));
                                }
                                ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__cont)((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__cont_env_ptr);
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
hlds__assertion__update_5_p_0_1(
  void * hlds__assertion__env_ptr_arg)
{
  {
    struct hlds__assertion__update_5_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__update_5_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

    {
      MR_Word hlds__assertion__Var_19;

      (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = hlds__assertion__process_two_linked_calls_6_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__LHSCalls_11, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__UniversiallyQuantifiedVars_8, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__PredId_13, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__SA_14, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__PairsL_15, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Vs_16);
      if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
      {
        (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = hlds__assertion__process_two_linked_calls_6_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__RHSCalls_12, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__UniversiallyQuantifiedVars_8, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_65, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__SB_17, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__PairsR_18, &hlds__assertion__Var_19);
        if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
        {
          (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__PredId_13, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_65);
          if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
          {
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_62_62 = (MR_Word) &hlds__assertion_scalar_common_2[0];
            mercury__assoc_list__from_corresponding_lists_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_62_62, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_62_62, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__PairsL_15, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__PairsR_18, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Pairs0_20);
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_32 = (MR_Word) &hlds__assertion_scalar_common_2[8];
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_63_63 = (MR_Word) &hlds__assertion_scalar_common_2[1];
            mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_63_63, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_32, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Pairs0_20, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Pairs_23);
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_34 = mercury__list__length_1_f_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_63_63, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Pairs_23);
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_34 == (MR_Integer) 2);
            if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
            {
              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              mercury__list__perm_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_63_63, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Pairs_23, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Var_35, hlds__assertion__update_5_p_0_3, hlds__assertion__env_ptr);
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
hlds__assertion__update_5_p_0(
  MR_Word hlds__assertion__PCalls_6,
  MR_Word hlds__assertion__QCalls_7,
  MR_Word hlds__assertion__UniversiallyQuantifiedVars_8,
  MR_Word hlds__assertion__CallVars_9,
  MR_Word * hlds__assertion__StateVars_10,
  MR_Cont hlds__assertion__cont,
  void * hlds__assertion__cont_env_ptr)
{
  {
    struct hlds__assertion__update_5_p_0_env_0_s hlds__assertion__env;

    (hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__UniversiallyQuantifiedVars_8 = hlds__assertion__UniversiallyQuantifiedVars_8;
    (hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__CallVars_9 = hlds__assertion__CallVars_9;
    (hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__StateVars_10 = hlds__assertion__StateVars_10;
    (hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__cont = hlds__assertion__cont;
    (hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__cont_env_ptr = hlds__assertion__cont_env_ptr;
    hlds__assertion__reorder_4_p_0(hlds__assertion__PCalls_6, hlds__assertion__QCalls_7, &(hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__LHSCalls_11, &(hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__RHSCalls_12, hlds__assertion__update_5_p_0_1, &hlds__assertion__env);
  }
}

static MR_bool MR_CALL 
hlds__assertion__process_two_linked_calls_6_p_0(
  MR_Word hlds__assertion__Goals_7,
  MR_Word hlds__assertion__UniversiallyQuantifiedVars_8,
  MR_Word * hlds__assertion__PredId_9,
  MR_Word * hlds__assertion__LinkingVar_10,
  MR_Word * hlds__assertion__Vars_11,
  MR_Word * hlds__assertion__VarsA_12)
{
  {
    MR_bool hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Goals_7)) == (MR_mktag((MR_Integer) 1)));
    MR_Word hlds__assertion__TypeCtorInfo_34_34;
    MR_Word hlds__assertion__TypeInfo_35_35;
    MR_Word hlds__assertion__VarsB_19;
    MR_Word hlds__assertion__SetVarsA_24;
    MR_Word hlds__assertion__SetVarsB_25;
    MR_Word hlds__assertion__CommonVars_26;
    MR_Word hlds__assertion__Var_27;
    MR_Word hlds__assertion__Var_28;
    MR_Word hlds__assertion__Var_29;
    MR_Word hlds__assertion__Var_30;
    MR_Word hlds__assertion__Var_31;
    MR_Word hlds__assertion__Var_32;
    MR_Word hlds__assertion__Var_33;
    MR_Word hlds__assertion__Var_36;
    MR_Word hlds__assertion__Var_17;
    MR_Integer hlds__assertion__Var_13;
    MR_Word hlds__assertion__Var_14;
    MR_Word hlds__assertion__Var_15;
    MR_Word hlds__assertion__Var_16;
    MR_Word hlds__assertion__Var_23;
    MR_Integer hlds__assertion__Var_18;
    MR_Word hlds__assertion__Var_20;
    MR_Word hlds__assertion__Var_21;
    MR_Word hlds__assertion__Var_22;

    if (hlds__assertion__succeeded)
    {
      hlds__assertion__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Goals_7, (MR_Integer) 0)));
      hlds__assertion__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Goals_7, (MR_Integer) 1)));
      hlds__assertion__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Var_27, (MR_Integer) 0)));
      hlds__assertion__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Var_27, (MR_Integer) 1)));
      hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Var_28)) == (MR_mktag((MR_Integer) 2)));
      if (hlds__assertion__succeeded)
      {
        *hlds__assertion__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_28, (MR_Integer) 0)));
        hlds__assertion__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_28, (MR_Integer) 1)));
        *hlds__assertion__VarsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_28, (MR_Integer) 2)));
        hlds__assertion__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_28, (MR_Integer) 3)));
        hlds__assertion__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_28, (MR_Integer) 4)));
        hlds__assertion__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_28, (MR_Integer) 5)));
        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Var_29)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__assertion__succeeded)
        {
          hlds__assertion__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Var_29, (MR_Integer) 0)));
          hlds__assertion__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Var_29, (MR_Integer) 1)));
          hlds__assertion__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Var_30, (MR_Integer) 0)));
          hlds__assertion__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Var_30, (MR_Integer) 1)));
          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Var_31)) == (MR_mktag((MR_Integer) 2)));
          if (hlds__assertion__succeeded)
          {
            hlds__assertion__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_31, (MR_Integer) 0)));
            hlds__assertion__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_31, (MR_Integer) 1)));
            hlds__assertion__VarsB_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_31, (MR_Integer) 2)));
            hlds__assertion__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_31, (MR_Integer) 3)));
            hlds__assertion__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_31, (MR_Integer) 4)));
            hlds__assertion__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_31, (MR_Integer) 5)));
            hlds__assertion__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(*hlds__assertion__PredId_9, hlds__assertion__Var_36);
            if (hlds__assertion__succeeded)
            {
              hlds__assertion__succeeded = (hlds__assertion__Var_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (hlds__assertion__succeeded)
              {
                hlds__assertion__TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                hlds__assertion__SetVarsA_24 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__assertion__TypeCtorInfo_34_34, *hlds__assertion__VarsA_12);
                hlds__assertion__SetVarsB_25 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__assertion__TypeCtorInfo_34_34, hlds__assertion__VarsB_19);
                hlds__assertion__CommonVars_26 = parse_tree__set_of_var__intersect_2_f_0(hlds__assertion__TypeCtorInfo_34_34, hlds__assertion__SetVarsA_24, hlds__assertion__SetVarsB_25);
                hlds__assertion__Var_33 = parse_tree__set_of_var__difference_2_f_0(hlds__assertion__TypeCtorInfo_34_34, hlds__assertion__CommonVars_26, hlds__assertion__UniversiallyQuantifiedVars_8);
                hlds__assertion__succeeded = parse_tree__set_of_var__is_singleton_2_p_0(hlds__assertion__TypeCtorInfo_34_34, hlds__assertion__Var_33, hlds__assertion__LinkingVar_10);
                if (hlds__assertion__succeeded)
                {
                  hlds__assertion__TypeInfo_35_35 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                  mercury__assoc_list__from_corresponding_lists_3_p_0(hlds__assertion__TypeInfo_35_35, hlds__assertion__TypeInfo_35_35, *hlds__assertion__VarsA_12, hlds__assertion__VarsB_19, hlds__assertion__Vars_11);
                  hlds__assertion__succeeded = MR_TRUE;
                }
              }
            }
          }
        }
      }
    }
    return hlds__assertion__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_5(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

    hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__predicate_call__437__1_1_p_0(((MR_Word) hlds__assertion__wrapper_arg_1));
    return hlds__assertion__succeeded;
  }
}

static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_1(
  void * hlds__assertion__env_ptr_arg)
{
  {
    struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

    MR_builtin_longjmp((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_3(
  void * hlds__assertion__env_ptr_arg)
{
  {
    struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

    (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Call_34 = ((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__conv0_Call_34);
    hlds__assertion__is_construction_equivalence_assertion_4_p_0_2(hlds__assertion__env_ptr);
  }
}

static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_4(
  void * hlds__assertion__env_ptr_arg)
{
  {
    struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

    (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__P_42 = (MR_Word) &hlds__assertion_scalar_common_2[7];
    (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeCtorInfo_40_67, (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__P_42, (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Unifications_41, &(hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_69);
    (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeInfo_45_72 = (MR_Word) &hlds__assertion_scalar_common_1[5];
    (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeInfo_45_72, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_64)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_69)));
    if ((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
      hlds__assertion__is_construction_equivalence_assertion_4_p_0_1(hlds__assertion__env_ptr);
  }
}

static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_2(
  void * hlds__assertion__env_ptr_arg)
{
  {
    struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

    {
      MR_Word hlds__assertion__Var_40;
      MR_Integer hlds__assertion__Var_35;
      MR_Word hlds__assertion__Var_36;
      MR_Word hlds__assertion__Var_37;
      MR_Word hlds__assertion__Var_38;
      MR_Word hlds__assertion__Var_39;

      (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Call_34, (MR_Integer) 0)));
      hlds__assertion__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Call_34, (MR_Integer) 1)));
      (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_61)) == (MR_mktag((MR_Integer) 2)));
      if ((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
      {
        (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_61, (MR_Integer) 0)));
        hlds__assertion__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_61, (MR_Integer) 1)));
        hlds__assertion__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_61, (MR_Integer) 2)));
        hlds__assertion__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_61, (MR_Integer) 3)));
        hlds__assertion__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_61, (MR_Integer) 4)));
        hlds__assertion__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_61, (MR_Integer) 5)));
        (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__PredId_8, (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Var_68);
        if ((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
          mercury__list__delete_3_p_1((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeCtorInfo_40_67, (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Goals_32, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Call_34)), &(hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Unifications_41, hlds__assertion__is_construction_equivalence_assertion_4_p_0_4, hlds__assertion__env_ptr);
      }
    }
  }
}

static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_6(
  void * hlds__assertion__env_ptr_arg)
{
  {
    struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

    if (MR_builtin_setjmp((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__commit_0) == 0)
      {
        (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeCtorInfo_40_67 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
        mercury__list__member_2_p_1((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeCtorInfo_40_67, &(hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__conv0_Call_34, (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Goals_32, hlds__assertion__is_construction_equivalence_assertion_4_p_0_3, hlds__assertion__env_ptr);
        (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

MR_bool MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0(
  MR_Word hlds__assertion__Module_5,
  MR_Integer hlds__assertion__AssertId_6,
  MR_Word hlds__assertion__ConsId_7,
  MR_Word hlds__assertion__PredId_8)
{
  {
    struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s hlds__assertion__env;

    (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__PredId_8 = hlds__assertion__PredId_8;
    {
      MR_Word hlds__assertion__Goal_9;
      MR_Word hlds__assertion__P_10;
      MR_Word hlds__assertion__Q_11;
      MR_Word hlds__assertion__GoalExpr_14;
      MR_Word hlds__assertion__UnifyRHS_17;
      MR_Word hlds__assertion__UnqualifiedSymName_21;
      MR_Integer hlds__assertion__Arity_22;
      MR_Word hlds__assertion__QualifiedSymName_26;
      MR_Word hlds__assertion__Var_28;
      MR_Integer hlds__assertion__Var_29;
      MR_Word hlds__assertion__Var_15;
      MR_Word hlds__assertion__Var_16;
      MR_Word hlds__assertion__Var_18;
      MR_Word hlds__assertion__Var_19;
      MR_Word hlds__assertion__Var_20;
      MR_Word hlds__assertion__Var_24;
      MR_Word hlds__assertion__Var_25;
      MR_Word hlds__assertion___TypeCtorA_23;
      MR_Word hlds__assertion___TypeCtorB_27;

      hlds__assertion__assert_id_goal_3_p_0(hlds__assertion__Module_5, hlds__assertion__AssertId_6, &hlds__assertion__Goal_9);
      (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = hlds__assertion__goal_is_equivalence_3_p_0(hlds__assertion__Goal_9, &hlds__assertion__P_10, &hlds__assertion__Q_11);
      if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
      {
        hlds__assertion__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_10, (MR_Integer) 0)));
        hlds__assertion__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_10, (MR_Integer) 1)));
        (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__assertion__GoalExpr_14)) == (MR_mktag((MR_Integer) 1)));
        if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
        {
          hlds__assertion__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_14, (MR_Integer) 0)));
          hlds__assertion__UnifyRHS_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_14, (MR_Integer) 1)));
          hlds__assertion__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_14, (MR_Integer) 2)));
          hlds__assertion__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_14, (MR_Integer) 3)));
          hlds__assertion__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_14, (MR_Integer) 4)));
          (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__assertion__UnifyRHS_17)) == (MR_mktag((MR_Integer) 1)));
          if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
          {
            hlds__assertion__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRHS_17, (MR_Integer) 0)));
            hlds__assertion__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRHS_17, (MR_Integer) 1)));
            hlds__assertion__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRHS_17, (MR_Integer) 2)));
            (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__assertion__Var_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_28, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
            {
              hlds__assertion__UnqualifiedSymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_28, (MR_Integer) 1)));
              hlds__assertion__Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_28, (MR_Integer) 2)));
              hlds__assertion___TypeCtorA_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_28, (MR_Integer) 3)));
              (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__assertion__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
              {
                hlds__assertion__QualifiedSymName_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 1)));
                hlds__assertion__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 2)));
                hlds__assertion___TypeCtorB_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 3)));
                (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = (hlds__assertion__Arity_22 == hlds__assertion__Var_29);
                if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
                  (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(hlds__assertion__UnqualifiedSymName_21, hlds__assertion__QualifiedSymName_26);
              }
            }
          }
        }
        if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
        {
          MR_Word hlds__assertion__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 0)));
          MR_Word hlds__assertion__Var_60;
          MR_Word hlds__assertion__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 1)));

          (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__assertion__Var_59)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_59, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
          {
            hlds__assertion__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_59, (MR_Integer) 1)));
            (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Goals_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_59, (MR_Integer) 2)));
            (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = (hlds__assertion__Var_60 == (MR_Integer) 0);
          }
          if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
          {
            hlds__assertion__is_construction_equivalence_assertion_4_p_0_6(&hlds__assertion__env);
          }
          else
          {
            MR_Word hlds__assertion__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 0)));
            MR_Word hlds__assertion__Var_70;
            MR_Word hlds__assertion__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 1)));
            MR_Integer hlds__assertion__Var_53;
            MR_Word hlds__assertion__Var_54;
            MR_Word hlds__assertion__Var_55;
            MR_Word hlds__assertion__Var_56;
            MR_Word hlds__assertion__Var_57;

            (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__assertion__Var_65)) == (MR_mktag((MR_Integer) 2)));
            if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
            {
              hlds__assertion__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_65, (MR_Integer) 0)));
              hlds__assertion__Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_65, (MR_Integer) 1)));
              hlds__assertion__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_65, (MR_Integer) 2)));
              hlds__assertion__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_65, (MR_Integer) 3)));
              hlds__assertion__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_65, (MR_Integer) 4)));
              hlds__assertion__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_65, (MR_Integer) 5)));
              (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__PredId_8, hlds__assertion__Var_70);
            }
          }
        }
        else
        {
          MR_Word hlds__assertion__GoalExpr_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 0)));
          MR_Word hlds__assertion__UnifyRHS_79;
          MR_Word hlds__assertion__UnqualifiedSymName_83;
          MR_Integer hlds__assertion__Arity_84;
          MR_Word hlds__assertion__QualifiedSymName_88;
          MR_Word hlds__assertion__Var_90;
          MR_Integer hlds__assertion__Var_91;
          MR_Word hlds__assertion__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 1)));
          MR_Word hlds__assertion__Var_78;
          MR_Word hlds__assertion__Var_80;
          MR_Word hlds__assertion__Var_81;
          MR_Word hlds__assertion__Var_82;
          MR_Word hlds__assertion__Var_86;
          MR_Word hlds__assertion__Var_87;
          MR_Word hlds__assertion___TypeCtorA_85;
          MR_Word hlds__assertion___TypeCtorB_89;

          (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__assertion__GoalExpr_76)) == (MR_mktag((MR_Integer) 1)));
          if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
          {
            hlds__assertion__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_76, (MR_Integer) 0)));
            hlds__assertion__UnifyRHS_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_76, (MR_Integer) 1)));
            hlds__assertion__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_76, (MR_Integer) 2)));
            hlds__assertion__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_76, (MR_Integer) 3)));
            hlds__assertion__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_76, (MR_Integer) 4)));
            (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__assertion__UnifyRHS_79)) == (MR_mktag((MR_Integer) 1)));
            if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
            {
              hlds__assertion__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRHS_79, (MR_Integer) 0)));
              hlds__assertion__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRHS_79, (MR_Integer) 1)));
              hlds__assertion__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRHS_79, (MR_Integer) 2)));
              (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__assertion__Var_90)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_90, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
              {
                hlds__assertion__UnqualifiedSymName_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_90, (MR_Integer) 1)));
                hlds__assertion__Arity_84 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_90, (MR_Integer) 2)));
                hlds__assertion___TypeCtorA_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_90, (MR_Integer) 3)));
                (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__assertion__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
                {
                  hlds__assertion__QualifiedSymName_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 1)));
                  hlds__assertion__Var_91 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 2)));
                  hlds__assertion___TypeCtorB_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 3)));
                  (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = (hlds__assertion__Arity_84 == hlds__assertion__Var_91);
                  if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
                  {
                    (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(hlds__assertion__UnqualifiedSymName_83, hlds__assertion__QualifiedSymName_88);
                    if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
                      (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = hlds__assertion__predicate_call_2_p_0(hlds__assertion__P_10, (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__PredId_8);
                  }
                }
              }
            }
          }
        }
      }
      return (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded;
    }
  }
}

static MR_bool MR_CALL 
hlds__assertion__predicate_call_2_p_0_5(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

    hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__predicate_call__437__1_1_p_0(((MR_Word) hlds__assertion__wrapper_arg_1));
    return hlds__assertion__succeeded;
  }
}

static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_1(
  void * hlds__assertion__env_ptr_arg)
{
  {
    struct hlds__assertion__predicate_call_2_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__predicate_call_2_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

    MR_builtin_longjmp((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_3(
  void * hlds__assertion__env_ptr_arg)
{
  {
    struct hlds__assertion__predicate_call_2_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__predicate_call_2_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

    (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Call_7 = ((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__conv0_Call_7);
    hlds__assertion__predicate_call_2_p_0_2(hlds__assertion__env_ptr);
  }
}

static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_4(
  void * hlds__assertion__env_ptr_arg)
{
  {
    struct hlds__assertion__predicate_call_2_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__predicate_call_2_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

    (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__P_15 = (MR_Word) &hlds__assertion_scalar_common_2[6];
    (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Var_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__TypeCtorInfo_40_40, (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__P_15, (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Unifications_14, &(hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Var_42);
    (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__TypeInfo_45_45 = (MR_Word) &hlds__assertion_scalar_common_1[5];
    (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__TypeInfo_45_45, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Var_37)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Var_42)));
    if ((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded)
      hlds__assertion__predicate_call_2_p_0_1(hlds__assertion__env_ptr);
  }
}

static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_2(
  void * hlds__assertion__env_ptr_arg)
{
  {
    struct hlds__assertion__predicate_call_2_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__predicate_call_2_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

    {
      MR_Word hlds__assertion__Var_13;
      MR_Integer hlds__assertion__Var_8;
      MR_Word hlds__assertion__Var_9;
      MR_Word hlds__assertion__Var_10;
      MR_Word hlds__assertion__Var_11;
      MR_Word hlds__assertion__Var_12;

      (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Call_7, (MR_Integer) 0)));
      hlds__assertion__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Call_7, (MR_Integer) 1)));
      (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Var_34)) == (MR_mktag((MR_Integer) 2)));
      if ((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded)
      {
        (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Var_34, (MR_Integer) 0)));
        hlds__assertion__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Var_34, (MR_Integer) 1)));
        hlds__assertion__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Var_34, (MR_Integer) 2)));
        hlds__assertion__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Var_34, (MR_Integer) 3)));
        hlds__assertion__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Var_34, (MR_Integer) 4)));
        hlds__assertion__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Var_34, (MR_Integer) 5)));
        (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__PredId_4, (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Var_41);
        if ((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded)
          mercury__list__delete_3_p_1((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__TypeCtorInfo_40_40, (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Goals_5, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Call_7)), &(hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Unifications_14, hlds__assertion__predicate_call_2_p_0_4, hlds__assertion__env_ptr);
      }
    }
  }
}

static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_6(
  void * hlds__assertion__env_ptr_arg)
{
  {
    struct hlds__assertion__predicate_call_2_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__predicate_call_2_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

    if (MR_builtin_setjmp((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__commit_0) == 0)
      {
        (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
        mercury__list__member_2_p_1((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__TypeCtorInfo_40_40, &(hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__conv0_Call_7, (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Goals_5, hlds__assertion__predicate_call_2_p_0_3, hlds__assertion__env_ptr);
        (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
hlds__assertion__predicate_call_2_p_0(
  MR_Word hlds__assertion__Goal_3,
  MR_Word hlds__assertion__PredId_4)
{
  {
    struct hlds__assertion__predicate_call_2_p_0_env_0_s hlds__assertion__env;

    (hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__PredId_4 = hlds__assertion__PredId_4;
    {
      MR_Word hlds__assertion__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_3, (MR_Integer) 0)));
      MR_Word hlds__assertion__Var_33;
      MR_Word hlds__assertion__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_3, (MR_Integer) 1)));

      (hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__assertion__Var_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_32, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if ((hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded)
      {
        hlds__assertion__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_32, (MR_Integer) 1)));
        (hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__Goals_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_32, (MR_Integer) 2)));
        (hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded = (hlds__assertion__Var_33 == (MR_Integer) 0);
      }
      if ((hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded)
      {
        hlds__assertion__predicate_call_2_p_0_6(&hlds__assertion__env);
      }
      else
      {
        MR_Word hlds__assertion__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_3, (MR_Integer) 0)));
        MR_Word hlds__assertion__Var_43;
        MR_Word hlds__assertion__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_3, (MR_Integer) 1)));
        MR_Integer hlds__assertion__Var_26;
        MR_Word hlds__assertion__Var_27;
        MR_Word hlds__assertion__Var_28;
        MR_Word hlds__assertion__Var_29;
        MR_Word hlds__assertion__Var_30;

        (hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__assertion__Var_38)) == (MR_mktag((MR_Integer) 2)));
        if ((hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded)
        {
          hlds__assertion__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_38, (MR_Integer) 0)));
          hlds__assertion__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_38, (MR_Integer) 1)));
          hlds__assertion__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_38, (MR_Integer) 2)));
          hlds__assertion__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_38, (MR_Integer) 3)));
          hlds__assertion__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_38, (MR_Integer) 4)));
          hlds__assertion__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_38, (MR_Integer) 5)));
          (hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__PredId_4, hlds__assertion__Var_43);
        }
      }
      return (hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded;
    }
  }
}

MR_bool MR_CALL 
hlds__assertion__is_update_assertion_5_p_0(
  MR_Word hlds__assertion__Module_6,
  MR_Integer hlds__assertion__AssertId_7,
  MR_Word hlds__assertion___PredId_8,
  MR_Word hlds__assertion__CallVars_9,
  MR_Word * hlds__assertion__StateVars_10)
{
  {
    MR_bool hlds__assertion__succeeded;

    hlds__assertion__succeeded = hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0(hlds__assertion__Module_6, hlds__assertion__AssertId_7, hlds__assertion__CallVars_9, hlds__assertion__StateVars_10);
    return hlds__assertion__succeeded;
  }
}

static void MR_CALL 
hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0_1(
  void * hlds__assertion__env_ptr_arg)
{
  {
    struct hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_0_s *) hlds__assertion__env_ptr_arg;

    *((hlds__assertion__env_ptr)->hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__wrapper_arg_1) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__conv0_StateVars_10));
    ((hlds__assertion__env_ptr)->hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__cont)((hlds__assertion__env_ptr)->hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__cont_env_ptr);
  }
}

static void MR_CALL 
hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0_2(
  MR_Box hlds__assertion__closure_arg,
  MR_Box * hlds__assertion__wrapper_arg_1,
  MR_Cont hlds__assertion__cont,
  void * hlds__assertion__cont_env_ptr)
{
  {
    struct hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_0_s hlds__assertion__env;

    (hlds__assertion__env).hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__wrapper_arg_1 = hlds__assertion__wrapper_arg_1;
    (hlds__assertion__env).hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__cont = hlds__assertion__cont;
    (hlds__assertion__env).hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__cont_env_ptr = hlds__assertion__cont_env_ptr;
    {
      MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

      hlds__assertion__update_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 6))), &(hlds__assertion__env).hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__conv0_StateVars_10, hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0_1, &hlds__assertion__env);
    }
  }
}

MR_bool MR_CALL 
hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0(
  MR_Word hlds__assertion__Module_6,
  MR_Integer hlds__assertion__AssertId_7,
  MR_Word hlds__assertion__CallVars_9,
  MR_Word * hlds__assertion__StateVars_10)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Word hlds__assertion__TypeCtorInfo_24_24;
    MR_Word hlds__assertion__GoalInfo_12;
    MR_Word hlds__assertion__P_13;
    MR_Word hlds__assertion__Q_14;
    MR_Word hlds__assertion__UniversiallyQuantifiedVars_15;
    MR_Word hlds__assertion__PCalls_16;
    MR_Word hlds__assertion__QCalls_17;
    MR_Word hlds__assertion__Var_19;
    MR_Word hlds__assertion__Var_21;
    MR_Word hlds__assertion__Var_22;
    MR_Word hlds__assertion__Goal_27;
    MR_Word hlds__assertion__Var_29;
    MR_Word hlds__assertion__Var_30;
    MR_Word hlds__assertion__GoalExpr0_33;
    MR_Word hlds__assertion__Goal_40;
    MR_Word hlds__assertion__Var_42;
    MR_Word hlds__assertion__Var_43;
    MR_Word hlds__assertion__GoalExpr0_46;
    MR_Word hlds__assertion__GoalExpr_11;
    MR_Word hlds__assertion___Context_34;
    MR_Word hlds__assertion__Goal1_36;
    MR_Word hlds__assertion__Reason_35;
    MR_Word hlds__assertion__Var_37;
    MR_Word hlds__assertion__Var_28;
    MR_Word hlds__assertion___Context_47;
    MR_Word hlds__assertion__Goal1_49;
    MR_Word hlds__assertion__Reason_48;
    MR_Word hlds__assertion__Var_50;
    MR_Word hlds__assertion__Var_41;
    MR_Word hlds__assertion__Var_18;

    hlds__assertion__assert_id_goal_3_p_0(hlds__assertion__Module_6, hlds__assertion__AssertId_7, &hlds__assertion__Var_19);
    hlds__assertion__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Var_19, (MR_Integer) 0)));
    hlds__assertion__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Var_19, (MR_Integer) 1)));
    hlds__assertion__succeeded = hlds__assertion__goal_is_equivalence_3_p_0(hlds__assertion__Var_19, &hlds__assertion__P_13, &hlds__assertion__Q_14);
    if (hlds__assertion__succeeded)
    {
      hlds__assertion__UniversiallyQuantifiedVars_15 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__assertion__GoalInfo_12);
      hlds__assertion__GoalExpr0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_13, (MR_Integer) 0)));
      hlds__assertion___Context_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_13, (MR_Integer) 1)));
      hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExpr0_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_33, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (hlds__assertion__succeeded)
      {
        hlds__assertion__Reason_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_33, (MR_Integer) 1)));
        hlds__assertion__Goal1_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_33, (MR_Integer) 2)));
        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Reason_35)) == (MR_mktag((MR_Integer) 0)));
        if (hlds__assertion__succeeded)
          hlds__assertion__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Reason_35, (MR_Integer) 0)));
      }
      if (hlds__assertion__succeeded)
        hlds__assertion__Goal_27 = hlds__assertion__Goal1_36;
      else
        hlds__assertion__Goal_27 = hlds__assertion__P_13;
      hlds__assertion__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_27, (MR_Integer) 0)));
      hlds__assertion__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_27, (MR_Integer) 1)));
      hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__Var_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_29, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (hlds__assertion__succeeded)
      {
        hlds__assertion__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_29, (MR_Integer) 1)));
        hlds__assertion__PCalls_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_29, (MR_Integer) 2)));
        hlds__assertion__succeeded = (hlds__assertion__Var_30 == (MR_Integer) 0);
        if (hlds__assertion__succeeded)
        {
          hlds__assertion__GoalExpr0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_14, (MR_Integer) 0)));
          hlds__assertion___Context_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_14, (MR_Integer) 1)));
          hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExpr0_46)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_46, (MR_Integer) 0)))) == (MR_Integer) 5)));
          if (hlds__assertion__succeeded)
          {
            hlds__assertion__Reason_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_46, (MR_Integer) 1)));
            hlds__assertion__Goal1_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_46, (MR_Integer) 2)));
            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Reason_48)) == (MR_mktag((MR_Integer) 0)));
            if (hlds__assertion__succeeded)
              hlds__assertion__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Reason_48, (MR_Integer) 0)));
          }
          if (hlds__assertion__succeeded)
            hlds__assertion__Goal_40 = hlds__assertion__Goal1_49;
          else
            hlds__assertion__Goal_40 = hlds__assertion__Q_14;
          hlds__assertion__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_40, (MR_Integer) 0)));
          hlds__assertion__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_40, (MR_Integer) 1)));
          hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__Var_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_42, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (hlds__assertion__succeeded)
          {
            hlds__assertion__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_42, (MR_Integer) 1)));
            hlds__assertion__QCalls_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_42, (MR_Integer) 2)));
            hlds__assertion__succeeded = (hlds__assertion__Var_43 == (MR_Integer) 0);
            if (hlds__assertion__succeeded)
            {
              hlds__assertion__TypeCtorInfo_24_24 = (MR_Word) &hlds__assertion__hlds__assertion__type_ctor_info_state_update_vars_0;
              {
                hlds__assertion__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__assertion__Var_21, 0) = ((MR_Box) (&hlds__assertion_scalar_common_6[0]));
                MR_hl_field(MR_mktag(0), hlds__assertion__Var_21, 1) = ((MR_Box) (hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0_2));
                MR_hl_field(MR_mktag(0), hlds__assertion__Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(0), hlds__assertion__Var_21, 3) = ((MR_Box) (hlds__assertion__PCalls_16));
                MR_hl_field(MR_mktag(0), hlds__assertion__Var_21, 4) = ((MR_Box) (hlds__assertion__QCalls_17));
                MR_hl_field(MR_mktag(0), hlds__assertion__Var_21, 5) = ((MR_Box) (hlds__assertion__UniversiallyQuantifiedVars_15));
                MR_hl_field(MR_mktag(0), hlds__assertion__Var_21, 6) = ((MR_Box) (hlds__assertion__CallVars_9));
              }
              mercury__solutions__solutions_2_p_1(hlds__assertion__TypeCtorInfo_24_24, hlds__assertion__Var_21, &hlds__assertion__Var_22);
              hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Var_22)) == (MR_mktag((MR_Integer) 1)));
              if (hlds__assertion__succeeded)
              {
                *hlds__assertion__StateVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Var_22, (MR_Integer) 0)));
                hlds__assertion__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Var_22, (MR_Integer) 1)));
              }
            }
          }
        }
      }
    }
    return hlds__assertion__succeeded;
  }
}

MR_bool MR_CALL 
hlds__assertion__is_associativity_assertion_4_p_0(
  MR_Word hlds__assertion__Module_5,
  MR_Integer hlds__assertion__AssertId_6,
  MR_Word hlds__assertion__CallVars_7,
  MR_Word * hlds__assertion__AssociativeVarsOutputVar_8)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Word hlds__assertion__GoalInfo_10;
    MR_Word hlds__assertion__P_11;
    MR_Word hlds__assertion__Q_12;
    MR_Word hlds__assertion__UniversiallyQuantifiedVars_13;
    MR_Word hlds__assertion__PCalls_14;
    MR_Word hlds__assertion__QCalls_15;
    MR_Word hlds__assertion__Var_16;
    MR_Word hlds__assertion__Goal_20;
    MR_Word hlds__assertion__Var_22;
    MR_Word hlds__assertion__Var_23;
    MR_Word hlds__assertion__GoalExpr0_26;
    MR_Word hlds__assertion__Goal_33;
    MR_Word hlds__assertion__Var_35;
    MR_Word hlds__assertion__Var_36;
    MR_Word hlds__assertion__GoalExpr0_39;
    MR_Word hlds__assertion__GoalExpr_9;
    MR_Word hlds__assertion___Context_27;
    MR_Word hlds__assertion__Goal1_29;
    MR_Word hlds__assertion__Reason_28;
    MR_Word hlds__assertion__Var_30;
    MR_Word hlds__assertion__Var_21;
    MR_Word hlds__assertion___Context_40;
    MR_Word hlds__assertion__Goal1_42;
    MR_Word hlds__assertion__Reason_41;
    MR_Word hlds__assertion__Var_43;
    MR_Word hlds__assertion__Var_34;

    hlds__assertion__assert_id_goal_3_p_0(hlds__assertion__Module_5, hlds__assertion__AssertId_6, &hlds__assertion__Var_16);
    hlds__assertion__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Var_16, (MR_Integer) 0)));
    hlds__assertion__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Var_16, (MR_Integer) 1)));
    hlds__assertion__succeeded = hlds__assertion__goal_is_equivalence_3_p_0(hlds__assertion__Var_16, &hlds__assertion__P_11, &hlds__assertion__Q_12);
    if (hlds__assertion__succeeded)
    {
      hlds__assertion__UniversiallyQuantifiedVars_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__assertion__GoalInfo_10);
      hlds__assertion__GoalExpr0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_11, (MR_Integer) 0)));
      hlds__assertion___Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_11, (MR_Integer) 1)));
      hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExpr0_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_26, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (hlds__assertion__succeeded)
      {
        hlds__assertion__Reason_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_26, (MR_Integer) 1)));
        hlds__assertion__Goal1_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_26, (MR_Integer) 2)));
        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Reason_28)) == (MR_mktag((MR_Integer) 0)));
        if (hlds__assertion__succeeded)
          hlds__assertion__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Reason_28, (MR_Integer) 0)));
      }
      if (hlds__assertion__succeeded)
        hlds__assertion__Goal_20 = hlds__assertion__Goal1_29;
      else
        hlds__assertion__Goal_20 = hlds__assertion__P_11;
      hlds__assertion__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_20, (MR_Integer) 0)));
      hlds__assertion__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_20, (MR_Integer) 1)));
      hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__Var_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_22, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (hlds__assertion__succeeded)
      {
        hlds__assertion__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_22, (MR_Integer) 1)));
        hlds__assertion__PCalls_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_22, (MR_Integer) 2)));
        hlds__assertion__succeeded = (hlds__assertion__Var_23 == (MR_Integer) 0);
        if (hlds__assertion__succeeded)
        {
          hlds__assertion__GoalExpr0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_12, (MR_Integer) 0)));
          hlds__assertion___Context_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_12, (MR_Integer) 1)));
          hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExpr0_39)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_39, (MR_Integer) 0)))) == (MR_Integer) 5)));
          if (hlds__assertion__succeeded)
          {
            hlds__assertion__Reason_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_39, (MR_Integer) 1)));
            hlds__assertion__Goal1_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_39, (MR_Integer) 2)));
            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Reason_41)) == (MR_mktag((MR_Integer) 0)));
            if (hlds__assertion__succeeded)
              hlds__assertion__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Reason_41, (MR_Integer) 0)));
          }
          if (hlds__assertion__succeeded)
            hlds__assertion__Goal_33 = hlds__assertion__Goal1_42;
          else
            hlds__assertion__Goal_33 = hlds__assertion__Q_12;
          hlds__assertion__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_33, (MR_Integer) 0)));
          hlds__assertion__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_33, (MR_Integer) 1)));
          hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__Var_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_35, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (hlds__assertion__succeeded)
          {
            hlds__assertion__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_35, (MR_Integer) 1)));
            hlds__assertion__QCalls_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_35, (MR_Integer) 2)));
            hlds__assertion__succeeded = (hlds__assertion__Var_36 == (MR_Integer) 0);
            if (hlds__assertion__succeeded)
              hlds__assertion__succeeded = hlds__assertion__associative_5_p_0(hlds__assertion__PCalls_14, hlds__assertion__QCalls_15, hlds__assertion__UniversiallyQuantifiedVars_13, hlds__assertion__CallVars_7, hlds__assertion__AssociativeVarsOutputVar_8);
          }
        }
      }
    }
    return hlds__assertion__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__assertion__associative_5_p_0_6(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

    hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__associative__266__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 3))), ((MR_Word) hlds__assertion__wrapper_arg_1));
    return hlds__assertion__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__assertion__associative_5_p_0_5(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

    hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__associative__264__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 3))), ((MR_Word) hlds__assertion__wrapper_arg_1));
    return hlds__assertion__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__assertion__associative_5_p_0_4(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

    hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__associative__262__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 3))), ((MR_Word) hlds__assertion__wrapper_arg_1));
    return hlds__assertion__succeeded;
  }
}

static void MR_CALL 
hlds__assertion__associative_5_p_0_1(
  void * hlds__assertion__env_ptr_arg)
{
  {
    struct hlds__assertion__associative_5_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__associative_5_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

    MR_builtin_longjmp((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
hlds__assertion__associative_5_p_0_3(
  void * hlds__assertion__env_ptr_arg)
{
  {
    struct hlds__assertion__associative_5_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__associative_5_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

    {
      MR_Word hlds__assertion___AB_28;
      MR_Word hlds__assertion___A_30;
      MR_Word hlds__assertion___B_32;

      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_35)) == (MR_mktag((MR_Integer) 1)));
      if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
      {
        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_35, (MR_Integer) 0)));
        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_35, (MR_Integer) 1)));
        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_36, (MR_Integer) 0)));
        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_36, (MR_Integer) 1)));
        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__A_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_37, (MR_Integer) 0)));
        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_37, (MR_Integer) 1)));
        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_93_93 = (MR_Word) &hlds__assertion_scalar_common_1[0];
        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_93_93, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AB_14)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_80)));
        if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
        {
          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__B_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_38, (MR_Integer) 0)));
          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_38, (MR_Integer) 1)));
          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_94_94 = (MR_Word) &hlds__assertion_scalar_common_1[0];
          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_94_94, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__A_21)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_81)));
          if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
          {
            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_39)) == (MR_mktag((MR_Integer) 1)));
            if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
            {
              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_39, (MR_Integer) 0)));
              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_39, (MR_Integer) 1)));
              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_40, (MR_Integer) 0)));
              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_40, (MR_Integer) 1)));
              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_41, (MR_Integer) 0)));
              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__C_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_41, (MR_Integer) 1)));
              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_95_95 = (MR_Word) &hlds__assertion_scalar_common_1[0];
              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_95_95, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__B_22)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_82)));
              if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
              {
                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_42, (MR_Integer) 0)));
                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_42, (MR_Integer) 1)));
                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_96_96 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_96_96, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__C_23)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_83)));
                if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
                {
                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_97_97 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_97_97, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__BC_17)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_84)));
                  if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
                  {
                    (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_43)) == (MR_mktag((MR_Integer) 1)));
                    if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
                    {
                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_43, (MR_Integer) 0)));
                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_43, (MR_Integer) 1)));
                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_98_98 = (MR_Word) &hlds__assertion_scalar_common_1[3];
                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_98_98, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_47)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_85)));
                      if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
                      {
                        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_44, (MR_Integer) 0)));
                        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_44, (MR_Integer) 1)));
                        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_45, (MR_Integer) 0)));
                        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__ABC_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_45, (MR_Integer) 1)));
                        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_99_99 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_99_99, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AB_14)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_86)));
                        if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
                        {
                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_46, (MR_Integer) 0)));
                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_46, (MR_Integer) 1)));
                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_100_100 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_100_100, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__BC_17)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_87)));
                          if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
                          {
                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_101_101 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_101_101, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__ABC_24)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_88)));
                            if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
                            {
                              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_77_77 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                              mercury__assoc_list__from_corresponding_lists_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_77_77, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_77_77, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Vs_16, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__CallVars_9, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AssocList_25);
                              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                              {
                                MR_Word base;
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_48 = base;
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&hlds__assertion_scalar_common_4[1]));
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__associative_5_p_0_4));
                                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AB_14));
                              }
                              mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_75_75, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_48, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AssocList_25, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_49);
                              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_49)) == (MR_mktag((MR_Integer) 1)));
                              if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
                              {
                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_49, (MR_Integer) 0)));
                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_49, (MR_Integer) 1)));
                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_103_103 = (MR_Word) &hlds__assertion_scalar_common_1[4];
                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_103_103, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_52)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_89)));
                                if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
                                {
                                  hlds__assertion___AB_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_51, (MR_Integer) 0)));
                                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__OutputVar_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_51, (MR_Integer) 1)));
                                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                  {
                                    MR_Word base;
                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                    (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_53 = base;
                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&hlds__assertion_scalar_common_4[1]));
                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__associative_5_p_0_5));
                                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__A_21));
                                  }
                                  mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_75_75, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_53, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AssocList_25, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_54);
                                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_54)) == (MR_mktag((MR_Integer) 1)));
                                  if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
                                  {
                                    (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_54, (MR_Integer) 0)));
                                    (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_54, (MR_Integer) 1)));
                                    (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_105_105 = (MR_Word) &hlds__assertion_scalar_common_1[4];
                                    (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_105_105, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_57)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_90)));
                                    if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
                                    {
                                      hlds__assertion___A_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_56, (MR_Integer) 0)));
                                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__CallVarA_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_56, (MR_Integer) 1)));
                                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                      {
                                        MR_Word base;
                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_58 = base;
                                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&hlds__assertion_scalar_common_4[1]));
                                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__associative_5_p_0_6));
                                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__B_22));
                                      }
                                      mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_75_75, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_58, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AssocList_25, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_59);
                                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_59)) == (MR_mktag((MR_Integer) 1)));
                                      if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
                                      {
                                        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_59, (MR_Integer) 0)));
                                        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_59, (MR_Integer) 1)));
                                        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_107_107 = (MR_Word) &hlds__assertion_scalar_common_1[4];
                                        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_107_107, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_62)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_91)));
                                        if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
                                        {
                                          hlds__assertion___B_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_61, (MR_Integer) 0)));
                                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__CallVarB_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_61, (MR_Integer) 1)));
                                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeCtorInfo_78_78 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_65 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                          {
                                            MR_Word base;
                                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_64 = base;
                                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__CallVarB_33));
                                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_65));
                                          }
                                          {
                                            MR_Word base;
                                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_63 = base;
                                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__CallVarA_31));
                                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_64));
                                          }
                                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AssociativeVars_34 = parse_tree__set_of_var__list_to_set_1_f_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeCtorInfo_78_78, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_63);
                                          {
                                            MR_Word base;
                                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                            *((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AssociativeVarsOutputVar_10) = base;
                                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AssociativeVars_34));
                                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__OutputVar_29));
                                          }
                                          hlds__assertion__associative_5_p_0_1(hlds__assertion__env_ptr);
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
}

static void MR_CALL 
hlds__assertion__associative_5_p_0_2(
  void * hlds__assertion__env_ptr_arg)
{
  {
    struct hlds__assertion__associative_5_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__associative_5_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

    {
      MR_Word hlds__assertion__Var_19;

      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = hlds__assertion__process_one_side_6_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__LHSCalls_11, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__UniversiallyQuantifiedVars_8, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__PredId_13, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AB_14, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__PairsL_15, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Vs_16);
      if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
      {
        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = hlds__assertion__process_one_side_6_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__RHSCalls_12, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__UniversiallyQuantifiedVars_8, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_79, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__BC_17, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__PairsR_18, &hlds__assertion__Var_19);
        if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
        {
          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__PredId_13, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_79);
          if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
          {
            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_75_75 = (MR_Word) &hlds__assertion_scalar_common_2[0];
            mercury__assoc_list__from_corresponding_lists_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_75_75, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_75_75, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__PairsL_15, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__PairsR_18, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Pairs_20);
            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_76_76 = (MR_Word) &hlds__assertion_scalar_common_2[1];
            mercury__list__perm_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_76_76, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Pairs_20, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Var_35, hlds__assertion__associative_5_p_0_3, hlds__assertion__env_ptr);
          }
        }
      }
    }
  }
}

static void MR_CALL 
hlds__assertion__associative_5_p_0_7(
  void * hlds__assertion__env_ptr_arg)
{
  {
    struct hlds__assertion__associative_5_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__associative_5_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

    if (MR_builtin_setjmp((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__commit_0) == 0)
      {
        hlds__assertion__reorder_4_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__PCalls_6, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__QCalls_7, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__LHSCalls_11, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__RHSCalls_12, hlds__assertion__associative_5_p_0_2, hlds__assertion__env_ptr);
        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
hlds__assertion__associative_5_p_0(
  MR_Word hlds__assertion__PCalls_6,
  MR_Word hlds__assertion__QCalls_7,
  MR_Word hlds__assertion__UniversiallyQuantifiedVars_8,
  MR_Word hlds__assertion__CallVars_9,
  MR_Word * hlds__assertion__AssociativeVarsOutputVar_10)
{
  {
    struct hlds__assertion__associative_5_p_0_env_0_s hlds__assertion__env;

    (hlds__assertion__env).hlds__assertion__associative_5_p_0_env_0__PCalls_6 = hlds__assertion__PCalls_6;
    (hlds__assertion__env).hlds__assertion__associative_5_p_0_env_0__QCalls_7 = hlds__assertion__QCalls_7;
    (hlds__assertion__env).hlds__assertion__associative_5_p_0_env_0__UniversiallyQuantifiedVars_8 = hlds__assertion__UniversiallyQuantifiedVars_8;
    (hlds__assertion__env).hlds__assertion__associative_5_p_0_env_0__CallVars_9 = hlds__assertion__CallVars_9;
    (hlds__assertion__env).hlds__assertion__associative_5_p_0_env_0__AssociativeVarsOutputVar_10 = hlds__assertion__AssociativeVarsOutputVar_10;
    hlds__assertion__associative_5_p_0_7(&hlds__assertion__env);
    return (hlds__assertion__env).hlds__assertion__associative_5_p_0_env_0__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__assertion__process_one_side_6_p_0_1(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

    hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__process_one_side__308__1_1_p_0(((MR_Word) hlds__assertion__wrapper_arg_1));
    return hlds__assertion__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__assertion__process_one_side_6_p_0(
  MR_Word hlds__assertion__Goals_7,
  MR_Word hlds__assertion__UniversiallyQuantifiedVars_8,
  MR_Word * hlds__assertion__PredId_9,
  MR_Word * hlds__assertion__LinkingVar_10,
  MR_Word * hlds__assertion__Vars_11,
  MR_Word * hlds__assertion__VarsA_12)
{
  {
    MR_bool hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Goals_7)) == (MR_mktag((MR_Integer) 1)));
    MR_Word hlds__assertion__TypeInfo_21_21;
    MR_Word hlds__assertion__TypeCtorInfo_34_51;
    MR_Word hlds__assertion__TypeInfo_35_52;
    MR_Word hlds__assertion__Vars0_13;
    MR_Word hlds__assertion__Var_16;
    MR_Integer hlds__assertion__Var_18;
    MR_Integer hlds__assertion__Var_22;
    MR_Word hlds__assertion__VarsB_36;
    MR_Word hlds__assertion__SetVarsA_41;
    MR_Word hlds__assertion__SetVarsB_42;
    MR_Word hlds__assertion__CommonVars_43;
    MR_Word hlds__assertion__Var_44;
    MR_Word hlds__assertion__Var_45;
    MR_Word hlds__assertion__Var_46;
    MR_Word hlds__assertion__Var_47;
    MR_Word hlds__assertion__Var_48;
    MR_Word hlds__assertion__Var_49;
    MR_Word hlds__assertion__Var_50;
    MR_Word hlds__assertion__Var_53;
    MR_Word hlds__assertion__Var_34;
    MR_Integer hlds__assertion__Var_30;
    MR_Word hlds__assertion__Var_31;
    MR_Word hlds__assertion__Var_32;
    MR_Word hlds__assertion__Var_33;
    MR_Word hlds__assertion__Var_40;
    MR_Integer hlds__assertion__Var_35;
    MR_Word hlds__assertion__Var_37;
    MR_Word hlds__assertion__Var_38;
    MR_Word hlds__assertion__Var_39;

    if (hlds__assertion__succeeded)
    {
      hlds__assertion__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Goals_7, (MR_Integer) 0)));
      hlds__assertion__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Goals_7, (MR_Integer) 1)));
      hlds__assertion__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Var_44, (MR_Integer) 0)));
      hlds__assertion__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Var_44, (MR_Integer) 1)));
      hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Var_45)) == (MR_mktag((MR_Integer) 2)));
      if (hlds__assertion__succeeded)
      {
        *hlds__assertion__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_45, (MR_Integer) 0)));
        hlds__assertion__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_45, (MR_Integer) 1)));
        *hlds__assertion__VarsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_45, (MR_Integer) 2)));
        hlds__assertion__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_45, (MR_Integer) 3)));
        hlds__assertion__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_45, (MR_Integer) 4)));
        hlds__assertion__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_45, (MR_Integer) 5)));
        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Var_46)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__assertion__succeeded)
        {
          hlds__assertion__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Var_46, (MR_Integer) 0)));
          hlds__assertion__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Var_46, (MR_Integer) 1)));
          hlds__assertion__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Var_47, (MR_Integer) 0)));
          hlds__assertion__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Var_47, (MR_Integer) 1)));
          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Var_48)) == (MR_mktag((MR_Integer) 2)));
          if (hlds__assertion__succeeded)
          {
            hlds__assertion__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_48, (MR_Integer) 0)));
            hlds__assertion__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_48, (MR_Integer) 1)));
            hlds__assertion__VarsB_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_48, (MR_Integer) 2)));
            hlds__assertion__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_48, (MR_Integer) 3)));
            hlds__assertion__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_48, (MR_Integer) 4)));
            hlds__assertion__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_48, (MR_Integer) 5)));
            hlds__assertion__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(*hlds__assertion__PredId_9, hlds__assertion__Var_53);
            if (hlds__assertion__succeeded)
            {
              hlds__assertion__succeeded = (hlds__assertion__Var_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (hlds__assertion__succeeded)
              {
                hlds__assertion__TypeCtorInfo_34_51 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                hlds__assertion__SetVarsA_41 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__assertion__TypeCtorInfo_34_51, *hlds__assertion__VarsA_12);
                hlds__assertion__SetVarsB_42 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__assertion__TypeCtorInfo_34_51, hlds__assertion__VarsB_36);
                hlds__assertion__CommonVars_43 = parse_tree__set_of_var__intersect_2_f_0(hlds__assertion__TypeCtorInfo_34_51, hlds__assertion__SetVarsA_41, hlds__assertion__SetVarsB_42);
                hlds__assertion__Var_50 = parse_tree__set_of_var__difference_2_f_0(hlds__assertion__TypeCtorInfo_34_51, hlds__assertion__CommonVars_43, hlds__assertion__UniversiallyQuantifiedVars_8);
                hlds__assertion__succeeded = parse_tree__set_of_var__is_singleton_2_p_0(hlds__assertion__TypeCtorInfo_34_51, hlds__assertion__Var_50, hlds__assertion__LinkingVar_10);
                if (hlds__assertion__succeeded)
                {
                  hlds__assertion__TypeInfo_35_52 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                  mercury__assoc_list__from_corresponding_lists_3_p_0(hlds__assertion__TypeInfo_35_52, hlds__assertion__TypeInfo_35_52, *hlds__assertion__VarsA_12, hlds__assertion__VarsB_36, &hlds__assertion__Vars0_13);
                  hlds__assertion__Var_16 = (MR_Word) &hlds__assertion_scalar_common_2[5];
                  hlds__assertion__TypeInfo_21_21 = (MR_Word) &hlds__assertion_scalar_common_2[0];
                  mercury__list__filter_3_p_0(hlds__assertion__TypeInfo_21_21, hlds__assertion__Var_16, hlds__assertion__Vars0_13, hlds__assertion__Vars_11);
                  hlds__assertion__Var_18 = (MR_Integer) 3;
                  mercury__list__length_2_p_0(hlds__assertion__TypeInfo_21_21, *hlds__assertion__Vars_11, &hlds__assertion__Var_22);
                  hlds__assertion__succeeded = (hlds__assertion__Var_18 == hlds__assertion__Var_22);
                }
              }
            }
          }
        }
      }
    }
    return hlds__assertion__succeeded;
  }
}

static void MR_CALL 
hlds__assertion__reorder_4_p_0_1(
  void * hlds__assertion__env_ptr_arg)
{
  {
    struct hlds__assertion__reorder_4_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__reorder_4_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

    mercury__list__perm_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__TypeCtorInfo_13_13, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__QCalls_2, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__RHSCalls_4, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__cont, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
hlds__assertion__reorder_4_p_0_2(
  void * hlds__assertion__env_ptr_arg)
{
  {
    struct hlds__assertion__reorder_4_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__reorder_4_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

    mercury__list__perm_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__TypeCtorInfo_14_14, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__QCalls_2, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__LHSCalls_3, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__cont, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
hlds__assertion__reorder_4_p_0(
  MR_Word hlds__assertion__PCalls_1,
  MR_Word hlds__assertion__QCalls_2,
  MR_Word * hlds__assertion__LHSCalls_3,
  MR_Word * hlds__assertion__RHSCalls_4,
  MR_Cont hlds__assertion__cont,
  void * hlds__assertion__cont_env_ptr)
{
  {
    struct hlds__assertion__reorder_4_p_0_env_0_s hlds__assertion__env;

    (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__QCalls_2 = hlds__assertion__QCalls_2;
    (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__LHSCalls_3 = hlds__assertion__LHSCalls_3;
    (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__RHSCalls_4 = hlds__assertion__RHSCalls_4;
    (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__cont = hlds__assertion__cont;
    (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__cont_env_ptr = hlds__assertion__cont_env_ptr;
    {
      (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
      mercury__list__perm_2_p_0((hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__TypeCtorInfo_13_13, hlds__assertion__PCalls_1, (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__LHSCalls_3, hlds__assertion__reorder_4_p_0_1, &hlds__assertion__env);
    }
    {
      (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
      mercury__list__perm_2_p_0((hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__TypeCtorInfo_14_14, hlds__assertion__PCalls_1, (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__RHSCalls_4, hlds__assertion__reorder_4_p_0_2, &hlds__assertion__env);
    }
  }
}

MR_bool MR_CALL 
hlds__assertion__is_commutativity_assertion_4_p_0(
  MR_Word hlds__assertion__Module_5,
  MR_Integer hlds__assertion__AssertId_6,
  MR_Word hlds__assertion__CallVars_7,
  MR_Word * hlds__assertion__CommutativeVars_8)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Word hlds__assertion__Goal_9;
    MR_Word hlds__assertion__P_10;
    MR_Word hlds__assertion__Q_11;
    MR_Word hlds__assertion__PredId_12;
    MR_Word hlds__assertion__VarsP_14;
    MR_Word hlds__assertion__VarsQ_20;
    MR_Word hlds__assertion__Var_25;
    MR_Word hlds__assertion__Var_26;
    MR_Word hlds__assertion__Var_27;
    MR_Word hlds__assertion__Var_18;
    MR_Integer hlds__assertion__Var_13;
    MR_Word hlds__assertion__Var_15;
    MR_Word hlds__assertion__Var_16;
    MR_Word hlds__assertion__Var_17;
    MR_Word hlds__assertion__Var_24;
    MR_Integer hlds__assertion__Var_19;
    MR_Word hlds__assertion__Var_21;
    MR_Word hlds__assertion__Var_22;
    MR_Word hlds__assertion__Var_23;

    hlds__assertion__assert_id_goal_3_p_0(hlds__assertion__Module_5, hlds__assertion__AssertId_6, &hlds__assertion__Goal_9);
    hlds__assertion__succeeded = hlds__assertion__goal_is_equivalence_3_p_0(hlds__assertion__Goal_9, &hlds__assertion__P_10, &hlds__assertion__Q_11);
    if (hlds__assertion__succeeded)
    {
      hlds__assertion__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_10, (MR_Integer) 0)));
      hlds__assertion__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_10, (MR_Integer) 1)));
      hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Var_25)) == (MR_mktag((MR_Integer) 2)));
      if (hlds__assertion__succeeded)
      {
        hlds__assertion__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_25, (MR_Integer) 0)));
        hlds__assertion__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_25, (MR_Integer) 1)));
        hlds__assertion__VarsP_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_25, (MR_Integer) 2)));
        hlds__assertion__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_25, (MR_Integer) 3)));
        hlds__assertion__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_25, (MR_Integer) 4)));
        hlds__assertion__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_25, (MR_Integer) 5)));
        hlds__assertion__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 0)));
        hlds__assertion__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 1)));
        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Var_26)) == (MR_mktag((MR_Integer) 2)));
        if (hlds__assertion__succeeded)
        {
          hlds__assertion__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_26, (MR_Integer) 0)));
          hlds__assertion__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_26, (MR_Integer) 1)));
          hlds__assertion__VarsQ_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_26, (MR_Integer) 2)));
          hlds__assertion__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_26, (MR_Integer) 3)));
          hlds__assertion__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_26, (MR_Integer) 4)));
          hlds__assertion__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__Var_26, (MR_Integer) 5)));
          hlds__assertion__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__assertion__PredId_12, hlds__assertion__Var_27);
          if (hlds__assertion__succeeded)
            hlds__assertion__succeeded = hlds__assertion__commutative_var_ordering_4_p_0(hlds__assertion__VarsP_14, hlds__assertion__VarsQ_20, hlds__assertion__CallVars_7, hlds__assertion__CommutativeVars_8);
        }
      }
    }
    return hlds__assertion__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__assertion__goal_is_equivalence_3_p_0(
  MR_Word hlds__assertion__Goal_4,
  MR_Word * hlds__assertion__P_5,
  MR_Word * hlds__assertion__Q_6)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Word hlds__assertion__TypeInfo_22_22;
    MR_Word hlds__assertion__TypeCtorInfo_24_43;
    MR_Word hlds__assertion__TypeCtorInfo_24_64;
    MR_Word hlds__assertion__A_7;
    MR_Word hlds__assertion__B_8;
    MR_Word hlds__assertion__Subst_10;
    MR_Word hlds__assertion__QB_13;
    MR_Word hlds__assertion__PB_14;
    MR_Word hlds__assertion__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_4, (MR_Integer) 0)));
    MR_Word hlds__assertion__Var_18;
    MR_Word hlds__assertion__Var_19;
    MR_Word hlds__assertion__Var_20;
    MR_Word hlds__assertion__Var_21;
    MR_Word hlds__assertion__GoalList_26;
    MR_Word hlds__assertion__GI_28;
    MR_Word hlds__assertion__NotQ_29;
    MR_Word hlds__assertion__Ps_30;
    MR_Word hlds__assertion__Var_33;
    MR_Word hlds__assertion__Var_34;
    MR_Word hlds__assertion__Var_35;
    MR_Word hlds__assertion__Var_36;
    MR_Word hlds__assertion__Var_37;
    MR_Word hlds__assertion__Var_42;
    MR_Word hlds__assertion__GoalList_47;
    MR_Word hlds__assertion__GI_49;
    MR_Word hlds__assertion__NotQ_50;
    MR_Word hlds__assertion__Ps_51;
    MR_Word hlds__assertion__Var_54;
    MR_Word hlds__assertion__Var_55;
    MR_Word hlds__assertion__Var_56;
    MR_Word hlds__assertion__Var_57;
    MR_Word hlds__assertion__Var_58;
    MR_Word hlds__assertion__Var_63;
    MR_Word hlds__assertion___GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_4, (MR_Integer) 1)));
    MR_Word hlds__assertion__Var_27;
    MR_Word hlds__assertion__P0_31;
    MR_Word hlds__assertion__Var_38;
    MR_Word hlds__assertion__Var_32;
    MR_Word hlds__assertion__Var_48;
    MR_Word hlds__assertion__P0_52;
    MR_Word hlds__assertion__Var_59;
    MR_Word hlds__assertion__Var_53;
    MR_Word hlds__assertion__Var_15;
    MR_Word hlds__assertion__Var_16;

    hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__Var_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (hlds__assertion__succeeded)
    {
      hlds__assertion__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_17, (MR_Integer) 1)));
      hlds__assertion__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_17, (MR_Integer) 2)));
      hlds__assertion__succeeded = (hlds__assertion__Var_18 == (MR_Integer) 0);
      if (hlds__assertion__succeeded)
      {
        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Var_19)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__assertion__succeeded)
        {
          hlds__assertion__A_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Var_19, (MR_Integer) 0)));
          hlds__assertion__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Var_19, (MR_Integer) 1)));
          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Var_20)) == (MR_mktag((MR_Integer) 1)));
          if (hlds__assertion__succeeded)
          {
            hlds__assertion__B_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Var_20, (MR_Integer) 0)));
            hlds__assertion__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Var_20, (MR_Integer) 1)));
            hlds__assertion__succeeded = (hlds__assertion__Var_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (hlds__assertion__succeeded)
            {
              hlds__assertion__TypeInfo_22_22 = (MR_Word) &hlds__assertion_scalar_common_1[0];
              mercury__map__init_1_p_0(hlds__assertion__TypeInfo_22_22, hlds__assertion__TypeInfo_22_22, &hlds__assertion__Subst_10);
              hlds__assertion__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__A_7, (MR_Integer) 0)));
              hlds__assertion__GI_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__A_7, (MR_Integer) 1)));
              hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Var_33)) == (MR_mktag((MR_Integer) 0)));
              if (hlds__assertion__succeeded)
              {
                hlds__assertion__Var_34 = (MR_Word) MR_body(((MR_Word) hlds__assertion__Var_33), (MR_Integer) 0);
                hlds__assertion__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Var_34, (MR_Integer) 0)));
                hlds__assertion__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Var_34, (MR_Integer) 1)));
                hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__Var_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_35, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (hlds__assertion__succeeded)
                {
                  hlds__assertion__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_35, (MR_Integer) 1)));
                  hlds__assertion__GoalList_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_35, (MR_Integer) 2)));
                  hlds__assertion__succeeded = (hlds__assertion__Var_36 == (MR_Integer) 0);
                  if (hlds__assertion__succeeded)
                  {
                    hlds__assertion__TypeCtorInfo_24_43 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                    hlds__assertion__Var_37 = mercury__list__reverse_1_f_0(hlds__assertion__TypeCtorInfo_24_43, hlds__assertion__GoalList_26);
                    hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Var_37)) == (MR_mktag((MR_Integer) 1)));
                    if (hlds__assertion__succeeded)
                    {
                      hlds__assertion__NotQ_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Var_37, (MR_Integer) 0)));
                      hlds__assertion__Ps_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Var_37, (MR_Integer) 1)));
                      hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Ps_30)) == (MR_mktag((MR_Integer) 1)));
                      if (hlds__assertion__succeeded)
                      {
                        hlds__assertion__P0_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Ps_30, (MR_Integer) 0)));
                        hlds__assertion__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Ps_30, (MR_Integer) 1)));
                        hlds__assertion__succeeded = (hlds__assertion__Var_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      if (hlds__assertion__succeeded)
                        *hlds__assertion__P_5 = hlds__assertion__P0_31;
                      else
                      {
                        MR_Word hlds__assertion__Var_39;
                        MR_Word hlds__assertion__Var_41;

                        hlds__assertion__Var_41 = mercury__list__reverse_1_f_0(hlds__assertion__TypeCtorInfo_24_43, hlds__assertion__Ps_30);
                        {
                          hlds__assertion__Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), hlds__assertion__Var_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), hlds__assertion__Var_39, 1) = ((MR_Box) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), hlds__assertion__Var_39, 2) = ((MR_Box) (hlds__assertion__Var_41));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          *hlds__assertion__P_5 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__assertion__Var_39));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__GI_28));
                        }
                      }
                      hlds__assertion__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__NotQ_29, (MR_Integer) 0)));
                      hlds__assertion__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__NotQ_29, (MR_Integer) 1)));
                      hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Var_42)) == (MR_mktag((MR_Integer) 0)));
                      if (hlds__assertion__succeeded)
                      {
                        *hlds__assertion__Q_6 = (MR_Word) MR_body(((MR_Word) hlds__assertion__Var_42), (MR_Integer) 0);
                        hlds__assertion__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__B_8, (MR_Integer) 0)));
                        hlds__assertion__GI_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__B_8, (MR_Integer) 1)));
                        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Var_54)) == (MR_mktag((MR_Integer) 0)));
                        if (hlds__assertion__succeeded)
                        {
                          hlds__assertion__Var_55 = (MR_Word) MR_body(((MR_Word) hlds__assertion__Var_54), (MR_Integer) 0);
                          hlds__assertion__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Var_55, (MR_Integer) 0)));
                          hlds__assertion__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Var_55, (MR_Integer) 1)));
                          hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__Var_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_56, (MR_Integer) 0)))) == (MR_Integer) 2)));
                          if (hlds__assertion__succeeded)
                          {
                            hlds__assertion__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_56, (MR_Integer) 1)));
                            hlds__assertion__GoalList_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__Var_56, (MR_Integer) 2)));
                            hlds__assertion__succeeded = (hlds__assertion__Var_57 == (MR_Integer) 0);
                            if (hlds__assertion__succeeded)
                            {
                              hlds__assertion__TypeCtorInfo_24_64 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                              hlds__assertion__Var_58 = mercury__list__reverse_1_f_0(hlds__assertion__TypeCtorInfo_24_64, hlds__assertion__GoalList_47);
                              hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Var_58)) == (MR_mktag((MR_Integer) 1)));
                              if (hlds__assertion__succeeded)
                              {
                                hlds__assertion__NotQ_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Var_58, (MR_Integer) 0)));
                                hlds__assertion__Ps_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Var_58, (MR_Integer) 1)));
                                hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Ps_51)) == (MR_mktag((MR_Integer) 1)));
                                if (hlds__assertion__succeeded)
                                {
                                  hlds__assertion__P0_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Ps_51, (MR_Integer) 0)));
                                  hlds__assertion__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Ps_51, (MR_Integer) 1)));
                                  hlds__assertion__succeeded = (hlds__assertion__Var_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                }
                                if (hlds__assertion__succeeded)
                                  hlds__assertion__QB_13 = hlds__assertion__P0_52;
                                else
                                {
                                  MR_Word hlds__assertion__Var_60;
                                  MR_Word hlds__assertion__Var_62;

                                  hlds__assertion__Var_62 = mercury__list__reverse_1_f_0(hlds__assertion__TypeCtorInfo_24_64, hlds__assertion__Ps_51);
                                  {
                                    hlds__assertion__Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(3), hlds__assertion__Var_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                    MR_hl_field(MR_mktag(3), hlds__assertion__Var_60, 1) = ((MR_Box) ((MR_Integer) 0));
                                    MR_hl_field(MR_mktag(3), hlds__assertion__Var_60, 2) = ((MR_Box) (hlds__assertion__Var_62));
                                  }
                                  {
                                    hlds__assertion__QB_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(MR_mktag(0), hlds__assertion__QB_13, 0) = ((MR_Box) (hlds__assertion__Var_60));
                                    MR_hl_field(MR_mktag(0), hlds__assertion__QB_13, 1) = ((MR_Box) (hlds__assertion__GI_49));
                                  }
                                }
                                hlds__assertion__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__NotQ_50, (MR_Integer) 0)));
                                hlds__assertion__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__NotQ_50, (MR_Integer) 1)));
                                hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Var_63)) == (MR_mktag((MR_Integer) 0)));
                                if (hlds__assertion__succeeded)
                                {
                                  hlds__assertion__PB_14 = (MR_Word) MR_body(((MR_Word) hlds__assertion__Var_63), (MR_Integer) 0);
                                  hlds__assertion__succeeded = hlds__assertion__equal_goals_4_p_0(*hlds__assertion__P_5, hlds__assertion__PB_14, hlds__assertion__Subst_10, &hlds__assertion__Var_15);
                                  if (hlds__assertion__succeeded)
                                    hlds__assertion__succeeded = hlds__assertion__equal_goals_4_p_0(*hlds__assertion__Q_6, hlds__assertion__QB_13, hlds__assertion__Subst_10, &hlds__assertion__Var_16);
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
    return hlds__assertion__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__assertion__equal_goals_cases_4_p_0(
  MR_Word hlds__assertion__HeadVar__1_1,
  MR_Word hlds__assertion__HeadVar__2_2,
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool hlds__assertion__succeeded;

      if ((hlds__assertion__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        hlds__assertion__succeeded = (hlds__assertion__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (hlds__assertion__succeeded)
        {
          *hlds__assertion__STATE_VARIABLE_Subst_4 = hlds__assertion__STATE_VARIABLE_Subst_0_3;
          hlds__assertion__succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Word hlds__assertion__TypeCtorInfo_26_26;
        MR_Word hlds__assertion__TypeInfo_28_28;
        MR_Word hlds__assertion__CaseA_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__assertion__CaseAs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__assertion__CaseB_10;
        MR_Word hlds__assertion__CaseBs_11;
        MR_Word hlds__assertion__MainConsIdA_13;
        MR_Word hlds__assertion__OtherConsIdsA_14;
        MR_Word hlds__assertion__GoalA_15;
        MR_Word hlds__assertion__MainConsIdB_16;
        MR_Word hlds__assertion__OtherConsIdsB_17;
        MR_Word hlds__assertion__GoalB_18;
        MR_Word hlds__assertion__SortedConsIds_19;
        MR_Word hlds__assertion__Var_22;
        MR_Word hlds__assertion__Var_23;
        MR_Word hlds__assertion__STATE_VARIABLE_Subst_24_24;
        MR_Word hlds__assertion__Var_27;

        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__assertion__succeeded)
        {
          hlds__assertion__CaseB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)));
          hlds__assertion__CaseBs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 1)));
          hlds__assertion__MainConsIdA_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__CaseA_8, (MR_Integer) 0)));
          hlds__assertion__OtherConsIdsA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__CaseA_8, (MR_Integer) 1)));
          hlds__assertion__GoalA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__CaseA_8, (MR_Integer) 2)));
          hlds__assertion__MainConsIdB_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__CaseB_10, (MR_Integer) 0)));
          hlds__assertion__OtherConsIdsB_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__CaseB_10, (MR_Integer) 1)));
          hlds__assertion__GoalB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__CaseB_10, (MR_Integer) 2)));
          hlds__assertion__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
          {
            hlds__assertion__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__assertion__Var_22, 0) = ((MR_Box) (hlds__assertion__MainConsIdA_13));
            MR_hl_field(MR_mktag(1), hlds__assertion__Var_22, 1) = ((MR_Box) (hlds__assertion__OtherConsIdsA_14));
          }
          mercury__list__sort_2_p_0(hlds__assertion__TypeCtorInfo_26_26, hlds__assertion__Var_22, &hlds__assertion__SortedConsIds_19);
          {
            hlds__assertion__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__assertion__Var_23, 0) = ((MR_Box) (hlds__assertion__MainConsIdB_16));
            MR_hl_field(MR_mktag(1), hlds__assertion__Var_23, 1) = ((MR_Box) (hlds__assertion__OtherConsIdsB_17));
          }
          mercury__list__sort_2_p_0(hlds__assertion__TypeCtorInfo_26_26, hlds__assertion__Var_23, &hlds__assertion__Var_27);
          hlds__assertion__TypeInfo_28_28 = (MR_Word) &hlds__assertion_scalar_common_1[8];
          hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_28_28, ((MR_Box) (hlds__assertion__SortedConsIds_19)), ((MR_Box) (hlds__assertion__Var_27)));
          if (hlds__assertion__succeeded)
          {
            hlds__assertion__succeeded = hlds__assertion__equal_goals_4_p_0(hlds__assertion__GoalA_15, hlds__assertion__GoalB_18, hlds__assertion__STATE_VARIABLE_Subst_0_3, &hlds__assertion__STATE_VARIABLE_Subst_24_24);
            if (hlds__assertion__succeeded)
            {
              /* direct tailcall eliminated */
              {
                MR_Word hlds__assertion__next_value_of_HeadVar__1_1 = hlds__assertion__CaseAs_9;
                MR_Word hlds__assertion__next_value_of_HeadVar__2_2 = hlds__assertion__CaseBs_11;
                MR_Word hlds__assertion__next_value_of_STATE_VARIABLE_Subst_0_3 = hlds__assertion__STATE_VARIABLE_Subst_24_24;

                hlds__assertion__HeadVar__1_1 = hlds__assertion__next_value_of_HeadVar__1_1;
                hlds__assertion__HeadVar__2_2 = hlds__assertion__next_value_of_HeadVar__2_2;
                hlds__assertion__STATE_VARIABLE_Subst_0_3 = hlds__assertion__next_value_of_STATE_VARIABLE_Subst_0_3;
              }
              continue;
            }
          }
        }
      }
      return hlds__assertion__succeeded;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__assertion__equal_goals_list_4_p_0(
  MR_Word hlds__assertion__HeadVar__1_1,
  MR_Word hlds__assertion__HeadVar__2_2,
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool hlds__assertion__succeeded;

      if ((hlds__assertion__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        hlds__assertion__succeeded = (hlds__assertion__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (hlds__assertion__succeeded)
        {
          *hlds__assertion__STATE_VARIABLE_Subst_4 = hlds__assertion__STATE_VARIABLE_Subst_0_3;
          hlds__assertion__succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Word hlds__assertion__GoalA_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__assertion__GoalAs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__assertion__GoalB_10;
        MR_Word hlds__assertion__GoalBs_11;
        MR_Word hlds__assertion__STATE_VARIABLE_Subst_15_15;

        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__assertion__succeeded)
        {
          hlds__assertion__GoalB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)));
          hlds__assertion__GoalBs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 1)));
          hlds__assertion__succeeded = hlds__assertion__equal_goals_4_p_0(hlds__assertion__GoalA_8, hlds__assertion__GoalB_10, hlds__assertion__STATE_VARIABLE_Subst_0_3, &hlds__assertion__STATE_VARIABLE_Subst_15_15);
          if (hlds__assertion__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word hlds__assertion__next_value_of_HeadVar__1_1 = hlds__assertion__GoalAs_9;
              MR_Word hlds__assertion__next_value_of_HeadVar__2_2 = hlds__assertion__GoalBs_11;
              MR_Word hlds__assertion__next_value_of_STATE_VARIABLE_Subst_0_3 = hlds__assertion__STATE_VARIABLE_Subst_15_15;

              hlds__assertion__HeadVar__1_1 = hlds__assertion__next_value_of_HeadVar__1_1;
              hlds__assertion__HeadVar__2_2 = hlds__assertion__next_value_of_HeadVar__2_2;
              hlds__assertion__STATE_VARIABLE_Subst_0_3 = hlds__assertion__next_value_of_STATE_VARIABLE_Subst_0_3;
            }
            continue;
          }
        }
      }
      return hlds__assertion__succeeded;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__assertion__equal_unification_4_p_0(
  MR_Word hlds__assertion__RhsA_5,
  MR_Word hlds__assertion__RhsB_6,
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_26,
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_27)
{
  {
    MR_bool hlds__assertion__succeeded;

    switch (MR_tag((MR_Word) hlds__assertion__RhsA_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__assertion__A_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__RhsA_5, (MR_Integer) 0)));
          MR_Word hlds__assertion__B_9;
          MR_Word hlds__assertion__SubstVA_48;
          MR_Word hlds__assertion__TypeInfo_12_50;
          MR_Box hlds__assertion__conv0_SubstVA_48;

          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__RhsB_6)) == (MR_mktag((MR_Integer) 0)));
          if (hlds__assertion__succeeded)
          {
            hlds__assertion__B_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__RhsB_6, (MR_Integer) 0)));
            hlds__assertion__TypeInfo_12_50 = (MR_Word) &hlds__assertion_scalar_common_1[0];
            hlds__assertion__succeeded = mercury__map__search_3_p_0(hlds__assertion__TypeInfo_12_50, hlds__assertion__TypeInfo_12_50, hlds__assertion__STATE_VARIABLE_Subst_0_26, ((MR_Box) (hlds__assertion__A_8)), &hlds__assertion__conv0_SubstVA_48);
            if (hlds__assertion__succeeded)
            {
              hlds__assertion__SubstVA_48 = ((MR_Word) hlds__assertion__conv0_SubstVA_48);
              hlds__assertion__succeeded = MR_TRUE;
            }
            if (hlds__assertion__succeeded)
            {
              hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__SubstVA_48)), ((MR_Box) (hlds__assertion__B_9)));
              if (hlds__assertion__succeeded)
              {
                *hlds__assertion__STATE_VARIABLE_Subst_27 = hlds__assertion__STATE_VARIABLE_Subst_0_26;
                hlds__assertion__succeeded = MR_TRUE;
              }
            }
            else
            {
              MR_Word hlds__assertion__TypeInfo_13_51 = (MR_Word) &hlds__assertion_scalar_common_1[0];

              hlds__assertion__succeeded = mercury__map__insert_4_p_0(hlds__assertion__TypeInfo_13_51, hlds__assertion__TypeInfo_13_51, ((MR_Box) (hlds__assertion__A_8)), ((MR_Box) (hlds__assertion__B_9)), hlds__assertion__STATE_VARIABLE_Subst_0_26, hlds__assertion__STATE_VARIABLE_Subst_27);
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__assertion__ConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__RhsA_5, (MR_Integer) 0)));
          MR_Word hlds__assertion__E_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__RhsA_5, (MR_Integer) 1)));
          MR_Word hlds__assertion__VarsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__RhsA_5, (MR_Integer) 2)));
          MR_Word hlds__assertion__VarsB_13;
          MR_Word hlds__assertion__Var_33;
          MR_Word hlds__assertion__Var_34;

          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__RhsB_6)) == (MR_mktag((MR_Integer) 1)));
          if (hlds__assertion__succeeded)
          {
            hlds__assertion__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__RhsB_6, (MR_Integer) 0)));
            hlds__assertion__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__RhsB_6, (MR_Integer) 1)));
            hlds__assertion__VarsB_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__RhsB_6, (MR_Integer) 2)));
            hlds__assertion__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(hlds__assertion__ConsId_10, hlds__assertion__Var_33);
            if (hlds__assertion__succeeded)
            {
              hlds__assertion__succeeded = (hlds__assertion__E_11 == hlds__assertion__Var_34);
              if (hlds__assertion__succeeded)
                hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__VarsA_12, hlds__assertion__VarsB_13, hlds__assertion__STATE_VARIABLE_Subst_0_26, hlds__assertion__STATE_VARIABLE_Subst_27);
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__assertion__TypeInfo_42_42;
          MR_Word hlds__assertion__Purity_14 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__RhsA_5, (MR_Integer) 0)))) & (MR_Integer) 3);
          MR_Word hlds__assertion__Groundness_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__RhsA_5, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word hlds__assertion__PredOrFunc_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__RhsA_5, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          MR_Word hlds__assertion__NLVarsA_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__RhsA_5, (MR_Integer) 2)));
          MR_Word hlds__assertion__LVarsA_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__RhsA_5, (MR_Integer) 3)));
          MR_Word hlds__assertion__Modes_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__RhsA_5, (MR_Integer) 4)));
          MR_Word hlds__assertion__Det_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__RhsA_5, (MR_Integer) 5)));
          MR_Word hlds__assertion__GoalA_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__RhsA_5, (MR_Integer) 6)));
          MR_Word hlds__assertion__NLVarsB_23;
          MR_Word hlds__assertion__LVarsB_24;
          MR_Word hlds__assertion__GoalB_25;
          MR_Word hlds__assertion__STATE_VARIABLE_Subst_28_28;
          MR_Word hlds__assertion__STATE_VARIABLE_Subst_29_29;
          MR_Word hlds__assertion__Var_35;
          MR_Word hlds__assertion__Var_36;
          MR_Word hlds__assertion__Var_37;
          MR_Word hlds__assertion__Var_39;
          MR_Word hlds__assertion__Var_40;

          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__RhsB_6)) == (MR_mktag((MR_Integer) 2)));
          if (hlds__assertion__succeeded)
          {
            hlds__assertion__Var_35 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__RhsB_6, (MR_Integer) 0)))) & (MR_Integer) 3);
            hlds__assertion__Var_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__RhsB_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            hlds__assertion__Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__RhsB_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            hlds__assertion__NLVarsB_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__RhsB_6, (MR_Integer) 2)));
            hlds__assertion__LVarsB_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__RhsB_6, (MR_Integer) 3)));
            hlds__assertion__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__RhsB_6, (MR_Integer) 4)));
            hlds__assertion__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__RhsB_6, (MR_Integer) 5)));
            hlds__assertion__GoalB_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__RhsB_6, (MR_Integer) 6)));
            hlds__assertion__succeeded = (hlds__assertion__Purity_14 == hlds__assertion__Var_35);
            if (hlds__assertion__succeeded)
            {
              hlds__assertion__succeeded = (hlds__assertion__Groundness_15 == hlds__assertion__Var_36);
              if (hlds__assertion__succeeded)
              {
                hlds__assertion__succeeded = (hlds__assertion__PredOrFunc_16 == hlds__assertion__Var_37);
                if (hlds__assertion__succeeded)
                {
                  hlds__assertion__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);
                  if (hlds__assertion__succeeded)
                  {
                    hlds__assertion__TypeInfo_42_42 = (MR_Word) &hlds__assertion_scalar_common_1[7];
                    hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_42_42, ((MR_Box) (hlds__assertion__Modes_20)), ((MR_Box) (hlds__assertion__Var_39)));
                    if (hlds__assertion__succeeded)
                    {
                      hlds__assertion__succeeded = (hlds__assertion__Det_21 == hlds__assertion__Var_40);
                      if (hlds__assertion__succeeded)
                      {
                        hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__NLVarsA_18, hlds__assertion__NLVarsB_23, hlds__assertion__STATE_VARIABLE_Subst_0_26, &hlds__assertion__STATE_VARIABLE_Subst_28_28);
                        if (hlds__assertion__succeeded)
                        {
                          hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__LVarsA_19, hlds__assertion__LVarsB_24, hlds__assertion__STATE_VARIABLE_Subst_28_28, &hlds__assertion__STATE_VARIABLE_Subst_29_29);
                          if (hlds__assertion__succeeded)
                            hlds__assertion__succeeded = hlds__assertion__equal_goals_4_p_0(hlds__assertion__GoalA_22, hlds__assertion__GoalB_25, hlds__assertion__STATE_VARIABLE_Subst_29_29, hlds__assertion__STATE_VARIABLE_Subst_27);
                        }
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
    return hlds__assertion__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__assertion__equal_goals_shorthand_4_p_0(
  MR_Word hlds__assertion__ShortHandA_5,
  MR_Word hlds__assertion__ShortHandB_6,
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_12,
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_13)
{
  {
    MR_bool hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__ShortHandA_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word hlds__assertion__LeftGoalA_8;
    MR_Word hlds__assertion__RightGoalA_9;
    MR_Word hlds__assertion__LeftGoalB_10;
    MR_Word hlds__assertion__RightGoalB_11;
    MR_Word hlds__assertion__STATE_VARIABLE_Subst_14_14;

    if (hlds__assertion__succeeded)
    {
      hlds__assertion__LeftGoalA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__ShortHandA_5, (MR_Integer) 0)));
      hlds__assertion__RightGoalA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__ShortHandA_5, (MR_Integer) 1)));
      hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__ShortHandB_6)) == (MR_mktag((MR_Integer) 0)));
      if (hlds__assertion__succeeded)
      {
        hlds__assertion__LeftGoalB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__ShortHandB_6, (MR_Integer) 0)));
        hlds__assertion__RightGoalB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__ShortHandB_6, (MR_Integer) 1)));
        hlds__assertion__succeeded = hlds__assertion__equal_goals_4_p_0(hlds__assertion__LeftGoalA_8, hlds__assertion__LeftGoalB_10, hlds__assertion__STATE_VARIABLE_Subst_0_12, &hlds__assertion__STATE_VARIABLE_Subst_14_14);
        if (hlds__assertion__succeeded)
          hlds__assertion__succeeded = hlds__assertion__equal_goals_4_p_0(hlds__assertion__RightGoalA_9, hlds__assertion__RightGoalB_11, hlds__assertion__STATE_VARIABLE_Subst_14_14, hlds__assertion__STATE_VARIABLE_Subst_13);
      }
    }
    return hlds__assertion__succeeded;
  }
}

static MR_Box MR_CALL 
hlds__assertion__equal_goals_4_p_0_2(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1)
{
  {
    MR_Box hlds__assertion__wrapper_arg_2;
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;
    MR_Word hlds__assertion__conv1_HeadVar__2_2;

    hlds__assertion__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__assertion__wrapper_arg_1));
    hlds__assertion__wrapper_arg_2 = ((MR_Box) (hlds__assertion__conv1_HeadVar__2_2));
    return hlds__assertion__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__assertion__equal_goals_4_p_0_1(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1)
{
  {
    MR_Box hlds__assertion__wrapper_arg_2;
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;
    MR_Word hlds__assertion__conv0_HeadVar__2_2;

    hlds__assertion__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__assertion__wrapper_arg_1));
    hlds__assertion__wrapper_arg_2 = ((MR_Box) (hlds__assertion__conv0_HeadVar__2_2));
    return hlds__assertion__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
hlds__assertion__equal_goals_4_p_0(
  MR_Word hlds__assertion__GoalA_5,
  MR_Word hlds__assertion__GoalB_6,
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_72,
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_73)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool hlds__assertion__succeeded;
      MR_Word hlds__assertion__GoalExprA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalA_5, (MR_Integer) 0)));
      MR_Word hlds__assertion__GoalExprB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalB_6, (MR_Integer) 0)));
      MR_Word hlds__assertion___GoalInfoA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalA_5, (MR_Integer) 1)));
      MR_Word hlds__assertion___GoalInfoB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalB_6, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) hlds__assertion__GoalExprA_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word hlds__assertion__SubGoalA_47 = (MR_Word) MR_body(((MR_Word) hlds__assertion__GoalExprA_8), (MR_Integer) 0);
            MR_Word hlds__assertion__SubGoalB_48;

            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__GoalExprB_10)) == (MR_mktag((MR_Integer) 0)));
            if (hlds__assertion__succeeded)
            {
              hlds__assertion__SubGoalB_48 = (MR_Word) MR_body(((MR_Word) hlds__assertion__GoalExprB_10), (MR_Integer) 0);
              /* direct tailcall eliminated */
              {
                MR_Word hlds__assertion__next_value_of_GoalA_5 = hlds__assertion__SubGoalA_47;
                MR_Word hlds__assertion__next_value_of_GoalB_6 = hlds__assertion__SubGoalB_48;

                hlds__assertion__GoalA_5 = hlds__assertion__next_value_of_GoalA_5;
                hlds__assertion__GoalB_6 = hlds__assertion__next_value_of_GoalB_6;
              }
              continue;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__assertion__VarA_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprA_8, (MR_Integer) 0)));
            MR_Word hlds__assertion__RHSA_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprA_8, (MR_Integer) 1)));
            MR_Word hlds__assertion__VarB_42;
            MR_Word hlds__assertion__RHSB_43;
            MR_Word hlds__assertion__STATE_VARIABLE_Subst_86_86;
            MR_Word hlds__assertion__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprA_8, (MR_Integer) 2)));
            MR_Word hlds__assertion__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprA_8, (MR_Integer) 3)));
            MR_Word hlds__assertion__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprA_8, (MR_Integer) 4)));
            MR_Word hlds__assertion__Var_44;
            MR_Word hlds__assertion__Var_45;
            MR_Word hlds__assertion__Var_46;

            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__GoalExprB_10)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__assertion__succeeded)
            {
              hlds__assertion__VarB_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprB_10, (MR_Integer) 0)));
              hlds__assertion__RHSB_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprB_10, (MR_Integer) 1)));
              hlds__assertion__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprB_10, (MR_Integer) 2)));
              hlds__assertion__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprB_10, (MR_Integer) 3)));
              hlds__assertion__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprB_10, (MR_Integer) 4)));
              hlds__assertion__succeeded = hlds__assertion__equal_var_4_p_0(hlds__assertion__VarA_37, hlds__assertion__VarB_42, hlds__assertion__STATE_VARIABLE_Subst_0_72, &hlds__assertion__STATE_VARIABLE_Subst_86_86);
              if (hlds__assertion__succeeded)
                hlds__assertion__succeeded = hlds__assertion__equal_unification_4_p_0(hlds__assertion__RHSA_38, hlds__assertion__RHSB_43, hlds__assertion__STATE_VARIABLE_Subst_86_86, hlds__assertion__STATE_VARIABLE_Subst_73);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word hlds__assertion__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprA_8, (MR_Integer) 0)));
            MR_Word hlds__assertion__ArgVarsA_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprA_8, (MR_Integer) 2)));
            MR_Word hlds__assertion__ArgVarsB_22;
            MR_Word hlds__assertion__Var_108;
            MR_Integer hlds__assertion__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprA_8, (MR_Integer) 1)));
            MR_Word hlds__assertion__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprA_8, (MR_Integer) 3)));
            MR_Word hlds__assertion__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprA_8, (MR_Integer) 4)));
            MR_Word hlds__assertion__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprA_8, (MR_Integer) 5)));
            MR_Integer hlds__assertion__Var_21;
            MR_Word hlds__assertion__Var_23;
            MR_Word hlds__assertion__Var_24;
            MR_Word hlds__assertion__Var_25;

            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__GoalExprB_10)) == (MR_mktag((MR_Integer) 2)));
            if (hlds__assertion__succeeded)
            {
              hlds__assertion__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprB_10, (MR_Integer) 0)));
              hlds__assertion__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprB_10, (MR_Integer) 1)));
              hlds__assertion__ArgVarsB_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprB_10, (MR_Integer) 2)));
              hlds__assertion__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprB_10, (MR_Integer) 3)));
              hlds__assertion__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprB_10, (MR_Integer) 4)));
              hlds__assertion__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprB_10, (MR_Integer) 5)));
              hlds__assertion__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__assertion__PredId_15, hlds__assertion__Var_108);
              if (hlds__assertion__succeeded)
                hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__ArgVarsA_17, hlds__assertion__ArgVarsB_22, hlds__assertion__STATE_VARIABLE_Subst_0_72, hlds__assertion__STATE_VARIABLE_Subst_73);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_8, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word hlds__assertion__CallDetails_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_8, (MR_Integer) 1)));
                MR_Word hlds__assertion__ArgVarsA_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_8, (MR_Integer) 2)));
                MR_Word hlds__assertion__ArgVarsB_93;
                MR_Word hlds__assertion__Var_109;
                MR_Word hlds__assertion__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_8, (MR_Integer) 3)));
                MR_Word hlds__assertion__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_8, (MR_Integer) 4)));
                MR_Word hlds__assertion__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_8, (MR_Integer) 5)));
                MR_Word hlds__assertion__Var_30;
                MR_Word hlds__assertion__Var_31;
                MR_Word hlds__assertion__Var_32;

                hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (hlds__assertion__succeeded)
                {
                  hlds__assertion__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 1)));
                  hlds__assertion__ArgVarsB_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 2)));
                  hlds__assertion__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 3)));
                  hlds__assertion__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 4)));
                  hlds__assertion__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 5)));
                  hlds__assertion__succeeded = hlds__hlds_goal____Unify____generic_call_0_0(hlds__assertion__CallDetails_26, hlds__assertion__Var_109);
                  if (hlds__assertion__succeeded)
                    hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__ArgVarsA_92, hlds__assertion__ArgVarsB_93, hlds__assertion__STATE_VARIABLE_Subst_0_72, hlds__assertion__STATE_VARIABLE_Subst_73);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word hlds__assertion__TypeCtorInfo_101_101;
                MR_Word hlds__assertion__TypeInfo_102_102;
                MR_Word hlds__assertion__Attributes_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_8, (MR_Integer) 1)));
                MR_Word hlds__assertion__ArgsA_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_8, (MR_Integer) 4)));
                MR_Word hlds__assertion__ExtraA_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_8, (MR_Integer) 5)));
                MR_Word hlds__assertion__MaybeTraceA_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_8, (MR_Integer) 6)));
                MR_Word hlds__assertion__ArgsB_66;
                MR_Word hlds__assertion__ExtraB_67;
                MR_Word hlds__assertion__MaybeTraceB_68;
                MR_Word hlds__assertion__Var_75;
                MR_Word hlds__assertion__Var_76;
                MR_Word hlds__assertion__PredId_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_8, (MR_Integer) 2)));
                MR_Word hlds__assertion__VarsA_99;
                MR_Word hlds__assertion__VarsB_100;
                MR_Word hlds__assertion__Var_112;
                MR_Word hlds__assertion__Var_113;
                MR_Integer hlds__assertion__Var_60 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_8, (MR_Integer) 3)));
                MR_Word hlds__assertion__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_8, (MR_Integer) 7)));
                MR_Integer hlds__assertion__Var_65;
                MR_Word hlds__assertion__Var_69;

                hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (hlds__assertion__succeeded)
                {
                  hlds__assertion__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 1)));
                  hlds__assertion__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 2)));
                  hlds__assertion__Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 3)));
                  hlds__assertion__ArgsB_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 4)));
                  hlds__assertion__ExtraB_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 5)));
                  hlds__assertion__MaybeTraceB_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 6)));
                  hlds__assertion__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 7)));
                  hlds__assertion__succeeded = parse_tree__prog_data_foreign____Unify____pragma_foreign_proc_attributes_0_0(hlds__assertion__Attributes_59, hlds__assertion__Var_112);
                  if (hlds__assertion__succeeded)
                  {
                    hlds__assertion__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__assertion__PredId_98, hlds__assertion__Var_113);
                    if (hlds__assertion__succeeded)
                    {
                      hlds__assertion__succeeded = (hlds__assertion__ExtraA_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (hlds__assertion__succeeded)
                      {
                        hlds__assertion__succeeded = (hlds__assertion__ExtraB_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (hlds__assertion__succeeded)
                        {
                          hlds__assertion__succeeded = (hlds__assertion__MaybeTraceA_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (hlds__assertion__succeeded)
                          {
                            hlds__assertion__succeeded = (hlds__assertion__MaybeTraceB_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (hlds__assertion__succeeded)
                            {
                              hlds__assertion__TypeCtorInfo_101_101 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
                              hlds__assertion__TypeInfo_102_102 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                              hlds__assertion__Var_75 = (MR_Word) &hlds__assertion_scalar_common_2[3];
                              hlds__assertion__VarsA_99 = mercury__list__map_2_f_0(hlds__assertion__TypeCtorInfo_101_101, hlds__assertion__TypeInfo_102_102, hlds__assertion__Var_75, hlds__assertion__ArgsA_61);
                              hlds__assertion__Var_76 = (MR_Word) &hlds__assertion_scalar_common_2[4];
                              hlds__assertion__VarsB_100 = mercury__list__map_2_f_0(hlds__assertion__TypeCtorInfo_101_101, hlds__assertion__TypeInfo_102_102, hlds__assertion__Var_76, hlds__assertion__ArgsB_66);
                              hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__VarsA_99, hlds__assertion__VarsB_100, hlds__assertion__STATE_VARIABLE_Subst_0_72, hlds__assertion__STATE_VARIABLE_Subst_73);
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
                MR_Word hlds__assertion__ConjType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_8, (MR_Integer) 1)));
                MR_Word hlds__assertion__GoalsA_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_8, (MR_Integer) 2)));
                MR_Word hlds__assertion__GoalsB_14;
                MR_Word hlds__assertion__Var_107;

                hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (hlds__assertion__succeeded)
                {
                  hlds__assertion__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 1)));
                  hlds__assertion__GoalsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 2)));
                  hlds__assertion__succeeded = (hlds__assertion__ConjType_12 == hlds__assertion__Var_107);
                  if (hlds__assertion__succeeded)
                    hlds__assertion__succeeded = hlds__assertion__equal_goals_list_4_p_0(hlds__assertion__GoalsA_13, hlds__assertion__GoalsB_14, hlds__assertion__STATE_VARIABLE_Subst_0_72, hlds__assertion__STATE_VARIABLE_Subst_73);
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word hlds__assertion__GoalsA_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_8, (MR_Integer) 1)));
                MR_Word hlds__assertion__GoalsB_95;

                hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (hlds__assertion__succeeded)
                {
                  hlds__assertion__GoalsB_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 1)));
                  hlds__assertion__succeeded = hlds__assertion__equal_goals_list_4_p_0(hlds__assertion__GoalsA_94, hlds__assertion__GoalsB_95, hlds__assertion__STATE_VARIABLE_Subst_0_72, hlds__assertion__STATE_VARIABLE_Subst_73);
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word hlds__assertion__TypeInfo_118_118;
                MR_Word hlds__assertion__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_8, (MR_Integer) 1)));
                MR_Word hlds__assertion__CanFail_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_8, (MR_Integer) 2)));
                MR_Word hlds__assertion__CasesA_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_8, (MR_Integer) 3)));
                MR_Word hlds__assertion__CasesB_36;
                MR_Word hlds__assertion__Var_110;
                MR_Word hlds__assertion__Var_111;

                hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (hlds__assertion__succeeded)
                {
                  hlds__assertion__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 1)));
                  hlds__assertion__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 2)));
                  hlds__assertion__CasesB_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 3)));
                  hlds__assertion__TypeInfo_118_118 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                  hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_118_118, ((MR_Box) (hlds__assertion__Var_33)), ((MR_Box) (hlds__assertion__Var_110)));
                  if (hlds__assertion__succeeded)
                  {
                    hlds__assertion__succeeded = (hlds__assertion__CanFail_34 == hlds__assertion__Var_111);
                    if (hlds__assertion__succeeded)
                      hlds__assertion__succeeded = hlds__assertion__equal_goals_cases_4_p_0(hlds__assertion__CasesA_35, hlds__assertion__CasesB_36, hlds__assertion__STATE_VARIABLE_Subst_0_72, hlds__assertion__STATE_VARIABLE_Subst_73);
                  }
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word hlds__assertion__ReasonA_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_8, (MR_Integer) 1)));
                MR_Word hlds__assertion__ReasonB_50;
                MR_Word hlds__assertion__STATE_VARIABLE_Subst_82_82;
                MR_Word hlds__assertion__SubGoalA_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_8, (MR_Integer) 2)));
                MR_Word hlds__assertion__SubGoalB_97;

                hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (hlds__assertion__succeeded)
                {
                  hlds__assertion__ReasonB_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 1)));
                  hlds__assertion__SubGoalB_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 2)));
                  hlds__assertion__succeeded = hlds__assertion__equal_reason_4_p_0(hlds__assertion__ReasonA_49, hlds__assertion__ReasonB_50, hlds__assertion__STATE_VARIABLE_Subst_0_72, &hlds__assertion__STATE_VARIABLE_Subst_82_82);
                  if (hlds__assertion__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word hlds__assertion__next_value_of_GoalA_5 = hlds__assertion__SubGoalA_96;
                      MR_Word hlds__assertion__next_value_of_GoalB_6 = hlds__assertion__SubGoalB_97;
                      MR_Word hlds__assertion__next_value_of_STATE_VARIABLE_Subst_0_72 = hlds__assertion__STATE_VARIABLE_Subst_82_82;

                      hlds__assertion__GoalA_5 = hlds__assertion__next_value_of_GoalA_5;
                      hlds__assertion__GoalB_6 = hlds__assertion__next_value_of_GoalB_6;
                      hlds__assertion__STATE_VARIABLE_Subst_0_72 = hlds__assertion__next_value_of_STATE_VARIABLE_Subst_0_72;
                    }
                    continue;
                  }
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word hlds__assertion__VarsA_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_8, (MR_Integer) 1)));
                MR_Word hlds__assertion__CondA_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_8, (MR_Integer) 2)));
                MR_Word hlds__assertion__ThenA_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_8, (MR_Integer) 3)));
                MR_Word hlds__assertion__ElseA_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_8, (MR_Integer) 4)));
                MR_Word hlds__assertion__VarsB_55;
                MR_Word hlds__assertion__CondB_56;
                MR_Word hlds__assertion__ThenB_57;
                MR_Word hlds__assertion__ElseB_58;
                MR_Word hlds__assertion__STATE_VARIABLE_Subst_78_78;
                MR_Word hlds__assertion__STATE_VARIABLE_Subst_79_79;
                MR_Word hlds__assertion__STATE_VARIABLE_Subst_80_80;

                hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (hlds__assertion__succeeded)
                {
                  hlds__assertion__VarsB_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 1)));
                  hlds__assertion__CondB_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 2)));
                  hlds__assertion__ThenB_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 3)));
                  hlds__assertion__ElseB_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 4)));
                  hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__VarsA_51, hlds__assertion__VarsB_55, hlds__assertion__STATE_VARIABLE_Subst_0_72, &hlds__assertion__STATE_VARIABLE_Subst_78_78);
                  if (hlds__assertion__succeeded)
                  {
                    hlds__assertion__succeeded = hlds__assertion__equal_goals_4_p_0(hlds__assertion__CondA_52, hlds__assertion__CondB_56, hlds__assertion__STATE_VARIABLE_Subst_78_78, &hlds__assertion__STATE_VARIABLE_Subst_79_79);
                    if (hlds__assertion__succeeded)
                    {
                      hlds__assertion__succeeded = hlds__assertion__equal_goals_4_p_0(hlds__assertion__ThenA_53, hlds__assertion__ThenB_57, hlds__assertion__STATE_VARIABLE_Subst_79_79, &hlds__assertion__STATE_VARIABLE_Subst_80_80);
                      if (hlds__assertion__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word hlds__assertion__next_value_of_GoalA_5 = hlds__assertion__ElseA_54;
                          MR_Word hlds__assertion__next_value_of_GoalB_6 = hlds__assertion__ElseB_58;
                          MR_Word hlds__assertion__next_value_of_STATE_VARIABLE_Subst_0_72 = hlds__assertion__STATE_VARIABLE_Subst_80_80;

                          hlds__assertion__GoalA_5 = hlds__assertion__next_value_of_GoalA_5;
                          hlds__assertion__GoalB_6 = hlds__assertion__next_value_of_GoalB_6;
                          hlds__assertion__STATE_VARIABLE_Subst_0_72 = hlds__assertion__next_value_of_STATE_VARIABLE_Subst_0_72;
                        }
                        continue;
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word hlds__assertion__ShortHandA_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_8, (MR_Integer) 1)));
                MR_Word hlds__assertion__ShortHandB_71;

                hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 0)))) == (MR_Integer) 7)));
                if (hlds__assertion__succeeded)
                {
                  hlds__assertion__ShortHandB_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_10, (MR_Integer) 1)));
                  hlds__assertion__succeeded = hlds__assertion__equal_goals_shorthand_4_p_0(hlds__assertion__ShortHandA_70, hlds__assertion__ShortHandB_71, hlds__assertion__STATE_VARIABLE_Subst_0_72, hlds__assertion__STATE_VARIABLE_Subst_73);
                }
              }
              break;
          }
          break;
      }
      return hlds__assertion__succeeded;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__assertion__equal_var_4_p_0(
  MR_Word hlds__assertion__VA_5,
  MR_Word hlds__assertion__VB_6,
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_9,
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_10)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Word hlds__assertion__SubstVA_8;
    MR_Word hlds__assertion__TypeInfo_12_12 = (MR_Word) &hlds__assertion_scalar_common_1[0];
    MR_Box hlds__assertion__conv0_SubstVA_8;

    hlds__assertion__succeeded = mercury__map__search_3_p_0(hlds__assertion__TypeInfo_12_12, hlds__assertion__TypeInfo_12_12, hlds__assertion__STATE_VARIABLE_Subst_0_9, ((MR_Box) (hlds__assertion__VA_5)), &hlds__assertion__conv0_SubstVA_8);
    if (hlds__assertion__succeeded)
    {
      hlds__assertion__SubstVA_8 = ((MR_Word) hlds__assertion__conv0_SubstVA_8);
      hlds__assertion__succeeded = MR_TRUE;
    }
    if (hlds__assertion__succeeded)
    {
      hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__SubstVA_8)), ((MR_Box) (hlds__assertion__VB_6)));
      if (hlds__assertion__succeeded)
      {
        *hlds__assertion__STATE_VARIABLE_Subst_10 = hlds__assertion__STATE_VARIABLE_Subst_0_9;
        hlds__assertion__succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word hlds__assertion__TypeInfo_13_13 = (MR_Word) &hlds__assertion_scalar_common_1[0];

      hlds__assertion__succeeded = mercury__map__insert_4_p_0(hlds__assertion__TypeInfo_13_13, hlds__assertion__TypeInfo_13_13, ((MR_Box) (hlds__assertion__VA_5)), ((MR_Box) (hlds__assertion__VB_6)), hlds__assertion__STATE_VARIABLE_Subst_0_9, hlds__assertion__STATE_VARIABLE_Subst_10);
    }
    return hlds__assertion__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__assertion__equal_reason_4_p_0(
  MR_Word hlds__assertion__ReasonA_5,
  MR_Word hlds__assertion__ReasonB_6,
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_27,
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_28)
{
  {
    MR_bool hlds__assertion__succeeded;

    switch (MR_tag((MR_Word) hlds__assertion__ReasonA_5)) {
      default:
        hlds__assertion__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word hlds__assertion__VarsA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__ReasonA_5, (MR_Integer) 0)));
          MR_Word hlds__assertion__VarsB_9;

          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__ReasonB_6)) == (MR_mktag((MR_Integer) 0)));
          if (hlds__assertion__succeeded)
          {
            hlds__assertion__VarsB_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__ReasonB_6, (MR_Integer) 0)));
            hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__VarsA_8, hlds__assertion__VarsB_9, hlds__assertion__STATE_VARIABLE_Subst_0_27, hlds__assertion__STATE_VARIABLE_Subst_28);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__assertion__TypeInfo_51_51;
          MR_Word hlds__assertion__HeadWarning_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ReasonA_5, (MR_Integer) 0)));
          MR_Word hlds__assertion__TailWarnings_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ReasonA_5, (MR_Integer) 1)));
          MR_Word hlds__assertion__Var_42;
          MR_Word hlds__assertion__Var_43;

          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__ReasonB_6)) == (MR_mktag((MR_Integer) 1)));
          if (hlds__assertion__succeeded)
          {
            hlds__assertion__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ReasonB_6, (MR_Integer) 0)));
            hlds__assertion__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ReasonB_6, (MR_Integer) 1)));
            hlds__assertion__succeeded = (hlds__assertion__HeadWarning_10 == hlds__assertion__Var_42);
            if (hlds__assertion__succeeded)
            {
              hlds__assertion__TypeInfo_51_51 = (MR_Word) &hlds__assertion_scalar_common_1[6];
              hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_51_51, ((MR_Box) (hlds__assertion__TailWarnings_11)), ((MR_Box) (hlds__assertion__Var_43)));
              if (hlds__assertion__succeeded)
              {
                *hlds__assertion__STATE_VARIABLE_Subst_28 = hlds__assertion__STATE_VARIABLE_Subst_0_27;
                hlds__assertion__succeeded = MR_TRUE;
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__assertion__Kind_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__ReasonA_5, (MR_Integer) 1)));
          MR_Word hlds__assertion__VarsA_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__ReasonA_5, (MR_Integer) 0)));
          MR_Word hlds__assertion__VarsB_35;
          MR_Word hlds__assertion__Var_44;

          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__ReasonB_6)) == (MR_mktag((MR_Integer) 2)));
          if (hlds__assertion__succeeded)
          {
            hlds__assertion__VarsB_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__ReasonB_6, (MR_Integer) 0)));
            hlds__assertion__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__ReasonB_6, (MR_Integer) 1)));
            hlds__assertion__succeeded = (hlds__assertion__Kind_12 == hlds__assertion__Var_44);
            if (hlds__assertion__succeeded)
              hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__VarsA_34, hlds__assertion__VarsB_35, hlds__assertion__STATE_VARIABLE_Subst_0_27, hlds__assertion__STATE_VARIABLE_Subst_28);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ReasonA_5, (MR_Integer) 0)))) {
          default:
            hlds__assertion__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word hlds__assertion__Purity_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ReasonA_5, (MR_Integer) 1)));
              MR_Word hlds__assertion__Var_45;

              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__ReasonB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ReasonB_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (hlds__assertion__succeeded)
              {
                hlds__assertion__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ReasonB_6, (MR_Integer) 1)));
                hlds__assertion__succeeded = (hlds__assertion__Purity_13 == hlds__assertion__Var_45);
                if (hlds__assertion__succeeded)
                {
                  *hlds__assertion__STATE_VARIABLE_Subst_28 = hlds__assertion__STATE_VARIABLE_Subst_0_27;
                  hlds__assertion__succeeded = MR_TRUE;
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__assertion__Detism_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ReasonA_5, (MR_Integer) 1)));
              MR_Word hlds__assertion__Var_46;

              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__ReasonB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ReasonB_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (hlds__assertion__succeeded)
              {
                hlds__assertion__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ReasonB_6, (MR_Integer) 1)));
                hlds__assertion__succeeded = (hlds__assertion__Detism_14 == hlds__assertion__Var_46);
                if (hlds__assertion__succeeded)
                {
                  *hlds__assertion__STATE_VARIABLE_Subst_28 = hlds__assertion__STATE_VARIABLE_Subst_0_27;
                  hlds__assertion__succeeded = MR_TRUE;
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__assertion__VarA_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ReasonA_5, (MR_Integer) 1)));
              MR_Word hlds__assertion__VarB_16;
              MR_Word hlds__assertion__SubstVA_67;
              MR_Word hlds__assertion__TypeInfo_12_69;
              MR_Box hlds__assertion__conv1_SubstVA_67;

              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__ReasonB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ReasonB_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (hlds__assertion__succeeded)
              {
                hlds__assertion__VarB_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ReasonB_6, (MR_Integer) 1)));
                hlds__assertion__TypeInfo_12_69 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                hlds__assertion__succeeded = mercury__map__search_3_p_0(hlds__assertion__TypeInfo_12_69, hlds__assertion__TypeInfo_12_69, hlds__assertion__STATE_VARIABLE_Subst_0_27, ((MR_Box) (hlds__assertion__VarA_15)), &hlds__assertion__conv1_SubstVA_67);
                if (hlds__assertion__succeeded)
                {
                  hlds__assertion__SubstVA_67 = ((MR_Word) hlds__assertion__conv1_SubstVA_67);
                  hlds__assertion__succeeded = MR_TRUE;
                }
                if (hlds__assertion__succeeded)
                {
                  hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__SubstVA_67)), ((MR_Box) (hlds__assertion__VarB_16)));
                  if (hlds__assertion__succeeded)
                  {
                    *hlds__assertion__STATE_VARIABLE_Subst_28 = hlds__assertion__STATE_VARIABLE_Subst_0_27;
                    hlds__assertion__succeeded = MR_TRUE;
                  }
                }
                else
                {
                  MR_Word hlds__assertion__TypeInfo_13_70 = (MR_Word) &hlds__assertion_scalar_common_1[0];

                  hlds__assertion__succeeded = mercury__map__insert_4_p_0(hlds__assertion__TypeInfo_13_70, hlds__assertion__TypeInfo_13_70, ((MR_Box) (hlds__assertion__VarA_15)), ((MR_Box) (hlds__assertion__VarB_16)), hlds__assertion__STATE_VARIABLE_Subst_0_27, hlds__assertion__STATE_VARIABLE_Subst_28);
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__assertion__Detism_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ReasonA_5, (MR_Integer) 2)));
              MR_Word hlds__assertion__VarA_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ReasonA_5, (MR_Integer) 1)));
              MR_Word hlds__assertion__VarB_38;
              MR_Word hlds__assertion__Var_47;
              MR_Word hlds__assertion__SubstVA_77;
              MR_Word hlds__assertion__TypeInfo_12_79;
              MR_Box hlds__assertion__conv2_SubstVA_77;

              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__ReasonB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ReasonB_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (hlds__assertion__succeeded)
              {
                hlds__assertion__VarB_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ReasonB_6, (MR_Integer) 1)));
                hlds__assertion__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ReasonB_6, (MR_Integer) 2)));
                hlds__assertion__succeeded = (hlds__assertion__Detism_36 == hlds__assertion__Var_47);
                if (hlds__assertion__succeeded)
                {
                  hlds__assertion__TypeInfo_12_79 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                  hlds__assertion__succeeded = mercury__map__search_3_p_0(hlds__assertion__TypeInfo_12_79, hlds__assertion__TypeInfo_12_79, hlds__assertion__STATE_VARIABLE_Subst_0_27, ((MR_Box) (hlds__assertion__VarA_37)), &hlds__assertion__conv2_SubstVA_77);
                  if (hlds__assertion__succeeded)
                  {
                    hlds__assertion__SubstVA_77 = ((MR_Word) hlds__assertion__conv2_SubstVA_77);
                    hlds__assertion__succeeded = MR_TRUE;
                  }
                  if (hlds__assertion__succeeded)
                  {
                    hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__SubstVA_77)), ((MR_Box) (hlds__assertion__VarB_38)));
                    if (hlds__assertion__succeeded)
                    {
                      *hlds__assertion__STATE_VARIABLE_Subst_28 = hlds__assertion__STATE_VARIABLE_Subst_0_27;
                      hlds__assertion__succeeded = MR_TRUE;
                    }
                  }
                  else
                  {
                    MR_Word hlds__assertion__TypeInfo_13_80 = (MR_Word) &hlds__assertion_scalar_common_1[0];

                    hlds__assertion__succeeded = mercury__map__insert_4_p_0(hlds__assertion__TypeInfo_13_80, hlds__assertion__TypeInfo_13_80, ((MR_Box) (hlds__assertion__VarA_37)), ((MR_Box) (hlds__assertion__VarB_38)), hlds__assertion__STATE_VARIABLE_Subst_0_27, hlds__assertion__STATE_VARIABLE_Subst_28);
                  }
                }
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__assertion__ForcePruning_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ReasonA_5, (MR_Integer) 1)));
              MR_Word hlds__assertion__Var_48;

              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__ReasonB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ReasonB_6, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (hlds__assertion__succeeded)
              {
                hlds__assertion__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ReasonB_6, (MR_Integer) 1)));
                hlds__assertion__succeeded = (hlds__assertion__ForcePruning_17 == hlds__assertion__Var_48);
                if (hlds__assertion__succeeded)
                {
                  *hlds__assertion__STATE_VARIABLE_Subst_28 = hlds__assertion__STATE_VARIABLE_Subst_0_27;
                  hlds__assertion__succeeded = MR_TRUE;
                }
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__assertion__Removable_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ReasonA_5, (MR_Integer) 1)));
              MR_Word hlds__assertion__Var_49;

              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__ReasonB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ReasonB_6, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (hlds__assertion__succeeded)
              {
                hlds__assertion__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ReasonB_6, (MR_Integer) 1)));
                hlds__assertion__succeeded = (hlds__assertion__Removable_18 == hlds__assertion__Var_49);
                if (hlds__assertion__succeeded)
                {
                  *hlds__assertion__STATE_VARIABLE_Subst_28 = hlds__assertion__STATE_VARIABLE_Subst_0_27;
                  hlds__assertion__succeeded = MR_TRUE;
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word hlds__assertion__Kind_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ReasonA_5, (MR_Integer) 2)));
              MR_Word hlds__assertion__VarA_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ReasonA_5, (MR_Integer) 1)));
              MR_Word hlds__assertion__VarB_41;
              MR_Word hlds__assertion__Var_50;
              MR_Word hlds__assertion__SubstVA_57;
              MR_Word hlds__assertion__TypeInfo_12_59;
              MR_Box hlds__assertion__conv0_SubstVA_57;

              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__ReasonB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ReasonB_6, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (hlds__assertion__succeeded)
              {
                hlds__assertion__VarB_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ReasonB_6, (MR_Integer) 1)));
                hlds__assertion__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ReasonB_6, (MR_Integer) 2)));
                hlds__assertion__succeeded = (hlds__assertion__Kind_39 == hlds__assertion__Var_50);
                if (hlds__assertion__succeeded)
                {
                  hlds__assertion__TypeInfo_12_59 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                  hlds__assertion__succeeded = mercury__map__search_3_p_0(hlds__assertion__TypeInfo_12_59, hlds__assertion__TypeInfo_12_59, hlds__assertion__STATE_VARIABLE_Subst_0_27, ((MR_Box) (hlds__assertion__VarA_40)), &hlds__assertion__conv0_SubstVA_57);
                  if (hlds__assertion__succeeded)
                  {
                    hlds__assertion__SubstVA_57 = ((MR_Word) hlds__assertion__conv0_SubstVA_57);
                    hlds__assertion__succeeded = MR_TRUE;
                  }
                  if (hlds__assertion__succeeded)
                  {
                    hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__SubstVA_57)), ((MR_Box) (hlds__assertion__VarB_41)));
                    if (hlds__assertion__succeeded)
                    {
                      *hlds__assertion__STATE_VARIABLE_Subst_28 = hlds__assertion__STATE_VARIABLE_Subst_0_27;
                      hlds__assertion__succeeded = MR_TRUE;
                    }
                  }
                  else
                  {
                    MR_Word hlds__assertion__TypeInfo_13_60 = (MR_Word) &hlds__assertion_scalar_common_1[0];

                    hlds__assertion__succeeded = mercury__map__insert_4_p_0(hlds__assertion__TypeInfo_13_60, hlds__assertion__TypeInfo_13_60, ((MR_Box) (hlds__assertion__VarA_40)), ((MR_Box) (hlds__assertion__VarB_41)), hlds__assertion__STATE_VARIABLE_Subst_0_27, hlds__assertion__STATE_VARIABLE_Subst_28);
                  }
                }
              }
            }
            break;
        }
        break;
    }
    return hlds__assertion__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__assertion__equal_vars_4_p_0(
  MR_Word hlds__assertion__HeadVar__1_1,
  MR_Word hlds__assertion__HeadVar__2_2,
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool hlds__assertion__succeeded;

      if ((hlds__assertion__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        hlds__assertion__succeeded = (hlds__assertion__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (hlds__assertion__succeeded)
        {
          *hlds__assertion__STATE_VARIABLE_Subst_4 = hlds__assertion__STATE_VARIABLE_Subst_0_3;
          hlds__assertion__succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Word hlds__assertion__VA_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__assertion__VAs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__assertion__VB_10;
        MR_Word hlds__assertion__VBs_11;
        MR_Word hlds__assertion__STATE_VARIABLE_Subst_15_15;
        MR_Word hlds__assertion__SubstVA_22;
        MR_Word hlds__assertion__TypeInfo_12_24;
        MR_Box hlds__assertion__conv0_SubstVA_22;

        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__assertion__succeeded)
        {
          hlds__assertion__VB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)));
          hlds__assertion__VBs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 1)));
          hlds__assertion__TypeInfo_12_24 = (MR_Word) &hlds__assertion_scalar_common_1[0];
          hlds__assertion__succeeded = mercury__map__search_3_p_0(hlds__assertion__TypeInfo_12_24, hlds__assertion__TypeInfo_12_24, hlds__assertion__STATE_VARIABLE_Subst_0_3, ((MR_Box) (hlds__assertion__VA_8)), &hlds__assertion__conv0_SubstVA_22);
          if (hlds__assertion__succeeded)
          {
            hlds__assertion__SubstVA_22 = ((MR_Word) hlds__assertion__conv0_SubstVA_22);
            hlds__assertion__succeeded = MR_TRUE;
          }
          if (hlds__assertion__succeeded)
          {
            hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__SubstVA_22)), ((MR_Box) (hlds__assertion__VB_10)));
            if (hlds__assertion__succeeded)
            {
              hlds__assertion__STATE_VARIABLE_Subst_15_15 = hlds__assertion__STATE_VARIABLE_Subst_0_3;
              hlds__assertion__succeeded = MR_TRUE;
            }
          }
          else
          {
            MR_Word hlds__assertion__TypeInfo_13_25 = (MR_Word) &hlds__assertion_scalar_common_1[0];

            hlds__assertion__succeeded = mercury__map__insert_4_p_0(hlds__assertion__TypeInfo_13_25, hlds__assertion__TypeInfo_13_25, ((MR_Box) (hlds__assertion__VA_8)), ((MR_Box) (hlds__assertion__VB_10)), hlds__assertion__STATE_VARIABLE_Subst_0_3, &hlds__assertion__STATE_VARIABLE_Subst_15_15);
          }
          if (hlds__assertion__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word hlds__assertion__next_value_of_HeadVar__1_1 = hlds__assertion__VAs_9;
              MR_Word hlds__assertion__next_value_of_HeadVar__2_2 = hlds__assertion__VBs_11;
              MR_Word hlds__assertion__next_value_of_STATE_VARIABLE_Subst_0_3 = hlds__assertion__STATE_VARIABLE_Subst_15_15;

              hlds__assertion__HeadVar__1_1 = hlds__assertion__next_value_of_HeadVar__1_1;
              hlds__assertion__HeadVar__2_2 = hlds__assertion__next_value_of_HeadVar__2_2;
              hlds__assertion__STATE_VARIABLE_Subst_0_3 = hlds__assertion__next_value_of_STATE_VARIABLE_Subst_0_3;
            }
            continue;
          }
        }
      }
      return hlds__assertion__succeeded;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__assertion__commutative_var_ordering_4_p_0(
  MR_Word hlds__assertion__HeadVar__1_1,
  MR_Word hlds__assertion__HeadVar__2_2,
  MR_Word hlds__assertion__HeadVar__3_3,
  MR_Word * hlds__assertion__CommutativeVars_11)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
      MR_Word hlds__assertion__P_5;
      MR_Word hlds__assertion__Ps_6;
      MR_Word hlds__assertion__Q_7;
      MR_Word hlds__assertion__Qs_8;
      MR_Word hlds__assertion__V_9;
      MR_Word hlds__assertion__Vs_10;
      MR_Word hlds__assertion__TypeInfo_17_17;

      if (hlds__assertion__succeeded)
      {
        hlds__assertion__P_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
        hlds__assertion__Ps_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__assertion__succeeded)
        {
          hlds__assertion__Q_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)));
          hlds__assertion__Qs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 1)));
          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
          if (hlds__assertion__succeeded)
          {
            hlds__assertion__V_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__3_3, (MR_Integer) 0)));
            hlds__assertion__Vs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__3_3, (MR_Integer) 1)));
            hlds__assertion__TypeInfo_17_17 = (MR_Word) &hlds__assertion_scalar_common_1[0];
            hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_17_17, ((MR_Box) (hlds__assertion__P_5)), ((MR_Box) (hlds__assertion__Q_7)));
            if (hlds__assertion__succeeded)
            {
              /* direct tailcall eliminated */
              {
                MR_Word hlds__assertion__next_value_of_HeadVar__1_1 = hlds__assertion__Ps_6;
                MR_Word hlds__assertion__next_value_of_HeadVar__2_2 = hlds__assertion__Qs_8;
                MR_Word hlds__assertion__next_value_of_HeadVar__3_3 = hlds__assertion__Vs_10;

                hlds__assertion__HeadVar__1_1 = hlds__assertion__next_value_of_HeadVar__1_1;
                hlds__assertion__HeadVar__2_2 = hlds__assertion__next_value_of_HeadVar__2_2;
                hlds__assertion__HeadVar__3_3 = hlds__assertion__next_value_of_HeadVar__3_3;
              }
              continue;
            }
            else
            {
              MR_Word hlds__assertion__TypeCtorInfo_16_16;
              MR_Word hlds__assertion__CallVarB_12;
              MR_Word hlds__assertion__Var_13;
              MR_Word hlds__assertion__Var_14;
              MR_Word hlds__assertion__Var_15;

              hlds__assertion__succeeded = hlds__assertion__commutative_var_ordering_2_6_p_0(hlds__assertion__P_5, hlds__assertion__Q_7, hlds__assertion__Ps_6, hlds__assertion__Qs_8, hlds__assertion__Vs_10, &hlds__assertion__CallVarB_12);
              if (hlds__assertion__succeeded)
              {
                hlds__assertion__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                hlds__assertion__Var_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  hlds__assertion__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__assertion__Var_14, 0) = ((MR_Box) (hlds__assertion__CallVarB_12));
                  MR_hl_field(MR_mktag(1), hlds__assertion__Var_14, 1) = ((MR_Box) (hlds__assertion__Var_15));
                }
                {
                  hlds__assertion__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__assertion__Var_13, 0) = ((MR_Box) (hlds__assertion__V_9));
                  MR_hl_field(MR_mktag(1), hlds__assertion__Var_13, 1) = ((MR_Box) (hlds__assertion__Var_14));
                }
                *hlds__assertion__CommutativeVars_11 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__assertion__TypeCtorInfo_16_16, hlds__assertion__Var_13);
                hlds__assertion__succeeded = MR_TRUE;
              }
            }
          }
        }
      }
      return hlds__assertion__succeeded;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__assertion__commutative_var_ordering_2_6_p_0(
  MR_Word hlds__assertion__VarP_7,
  MR_Word hlds__assertion__VarQ_8,
  MR_Word hlds__assertion__HeadVar__3_3,
  MR_Word hlds__assertion__HeadVar__4_4,
  MR_Word hlds__assertion__HeadVar__5_5,
  MR_Word * hlds__assertion__CallVarB_15)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
      MR_Word hlds__assertion__P_9;
      MR_Word hlds__assertion__Ps_10;
      MR_Word hlds__assertion__Q_11;
      MR_Word hlds__assertion__Qs_12;
      MR_Word hlds__assertion__V_13;
      MR_Word hlds__assertion__Vs_14;
      MR_Word hlds__assertion__TypeInfo_16_16;

      if (hlds__assertion__succeeded)
      {
        hlds__assertion__P_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__3_3, (MR_Integer) 0)));
        hlds__assertion__Ps_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__3_3, (MR_Integer) 1)));
        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__assertion__succeeded)
        {
          hlds__assertion__Q_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__4_4, (MR_Integer) 0)));
          hlds__assertion__Qs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__4_4, (MR_Integer) 1)));
          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__5_5)) == (MR_mktag((MR_Integer) 1)));
          if (hlds__assertion__succeeded)
          {
            hlds__assertion__V_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__5_5, (MR_Integer) 0)));
            hlds__assertion__Vs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__5_5, (MR_Integer) 1)));
            hlds__assertion__TypeInfo_16_16 = (MR_Word) &hlds__assertion_scalar_common_1[0];
            hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_16_16, ((MR_Box) (hlds__assertion__P_9)), ((MR_Box) (hlds__assertion__Q_11)));
            if (hlds__assertion__succeeded)
            {
              /* direct tailcall eliminated */
              {
                MR_Word hlds__assertion__next_value_of_HeadVar__3_3 = hlds__assertion__Ps_10;
                MR_Word hlds__assertion__next_value_of_HeadVar__4_4 = hlds__assertion__Qs_12;
                MR_Word hlds__assertion__next_value_of_HeadVar__5_5 = hlds__assertion__Vs_14;

                hlds__assertion__HeadVar__3_3 = hlds__assertion__next_value_of_HeadVar__3_3;
                hlds__assertion__HeadVar__4_4 = hlds__assertion__next_value_of_HeadVar__4_4;
                hlds__assertion__HeadVar__5_5 = hlds__assertion__next_value_of_HeadVar__5_5;
              }
              continue;
            }
            else
            {
              MR_Word hlds__assertion__TypeInfo_18_18;
              MR_Word hlds__assertion__TypeInfo_19_19;

              *hlds__assertion__CallVarB_15 = hlds__assertion__V_13;
              hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__P_9)), ((MR_Box) (hlds__assertion__VarQ_8)));
              if (hlds__assertion__succeeded)
              {
                hlds__assertion__TypeInfo_18_18 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_18_18, ((MR_Box) (hlds__assertion__Q_11)), ((MR_Box) (hlds__assertion__VarP_7)));
                if (hlds__assertion__succeeded)
                {
                  hlds__assertion__TypeInfo_19_19 = (MR_Word) &hlds__assertion_scalar_common_1[2];
                  hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_19_19, ((MR_Box) (hlds__assertion__Ps_10)), ((MR_Box) (hlds__assertion__Qs_12)));
                }
              }
            }
          }
        }
      }
      return hlds__assertion__succeeded;
    }
    break;
  }
}

static void MR_CALL 
hlds__assertion__record_preds_used_in_4_p_0_1(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1,
  MR_Box hlds__assertion__wrapper_arg_2,
  MR_Box * hlds__assertion__wrapper_arg_3)
{
  {
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;
    MR_Word hlds__assertion__conv0_STATE_VARIABLE_Module_13;

    hlds__assertion__update_pred_info_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 3))), ((MR_Word) hlds__assertion__wrapper_arg_1), ((MR_Word) hlds__assertion__wrapper_arg_2), &hlds__assertion__conv0_STATE_VARIABLE_Module_13);
    *hlds__assertion__wrapper_arg_3 = ((MR_Box) (hlds__assertion__conv0_STATE_VARIABLE_Module_13));
  }
}

void MR_CALL 
hlds__assertion__record_preds_used_in_4_p_0(
  MR_Word hlds__assertion__Goal_5,
  MR_Integer hlds__assertion__AssertId_6,
  MR_Word hlds__assertion__STATE_VARIABLE_Module_0_9,
  MR_Word * hlds__assertion__STATE_VARIABLE_Module_10)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Word hlds__assertion__PredIds_8;
    MR_Word hlds__assertion__Var_15;
    MR_Word hlds__assertion__Var_11;
    MR_Box hlds__assertion__conv1_STATE_VARIABLE_Module_10;

    hlds__goal_util__predids_from_goal_2_p_0(hlds__assertion__Goal_5, &hlds__assertion__PredIds_8);
    hlds__assertion__Var_11 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    hlds__assertion__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (hlds__assertion__Var_11)), hlds__assertion__PredIds_8);
    if (hlds__assertion__succeeded)
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "hlds.assertion", (MR_String) "predicate \140hlds.assertion.record_preds_used_in\'/4", (MR_String) "invalid pred_id");
        return;
      }
    }
    else
    {
    }
    {
      hlds__assertion__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__assertion__Var_15, 0) = ((MR_Box) (&hlds__assertion_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), hlds__assertion__Var_15, 1) = ((MR_Box) (hlds__assertion__record_preds_used_in_4_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__assertion__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__assertion__Var_15, 3) = ((MR_Box) (hlds__assertion__AssertId_6));
    }
    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, hlds__assertion__Var_15, hlds__assertion__PredIds_8, ((MR_Box) (hlds__assertion__STATE_VARIABLE_Module_0_9)), &hlds__assertion__conv1_STATE_VARIABLE_Module_10);
    *hlds__assertion__STATE_VARIABLE_Module_10 = ((MR_Word) hlds__assertion__conv1_STATE_VARIABLE_Module_10);
  }
}

void MR_CALL 
hlds__assertion__assert_id_goal_3_p_0(
  MR_Word hlds__assertion__Module_4,
  MR_Integer hlds__assertion__AssertId_5,
  MR_Word * hlds__assertion__Goal_6)
{
  {
    MR_Word hlds__assertion__AssertTable_7;
    MR_Word hlds__assertion__PredId_8;
    MR_Word hlds__assertion__PredInfo_9;
    MR_Word hlds__assertion__ClausesInfo_10;
    MR_Word hlds__assertion__ClausesRep_11;
    MR_Word hlds__assertion__Clauses_13;
    MR_Word hlds__assertion___ItemNumbers_12;

    hlds__hlds_module__module_info_get_assertion_table_2_p_0(hlds__assertion__Module_4, &hlds__assertion__AssertTable_7);
    hlds__hlds_data__assertion_table_lookup_3_p_0(hlds__assertion__AssertTable_7, hlds__assertion__AssertId_5, &hlds__assertion__PredId_8);
    hlds__hlds_module__module_info_pred_info_3_p_0(hlds__assertion__Module_4, hlds__assertion__PredId_8, &hlds__assertion__PredInfo_9);
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__assertion__PredInfo_9, &hlds__assertion__ClausesInfo_10);
    hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(hlds__assertion__ClausesInfo_10, &hlds__assertion__ClausesRep_11, &hlds__assertion___ItemNumbers_12);
    hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(hlds__assertion__ClausesRep_11, &hlds__assertion__Clauses_13);
    if ((hlds__assertion__Clauses_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "hlds.assertion", (MR_String) "predicate \140hlds.assertion.assert_id_goal\'/3", (MR_String) "goal is not an assertion");
        return;
      }
    }
    else
    {
      MR_Word hlds__assertion__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Clauses_13, (MR_Integer) 1)));
      MR_Word hlds__assertion__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Clauses_13, (MR_Integer) 0)));

      if ((hlds__assertion__Var_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word hlds__assertion__Goal0_15;

        hlds__assertion__Goal0_15 = hlds__hlds_clauses__clause_body_1_f_0(hlds__assertion__Var_31);
        hlds__assertion__normalise_goal_2_p_0(hlds__assertion__Goal0_15, hlds__assertion__Goal_6);
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.assertion", (MR_String) "predicate \140hlds.assertion.assert_id_goal\'/3", (MR_String) "goal is not an assertion");
          return;
        }
      }
    }
  }
}

static void MR_CALL 
hlds__assertion__normalise_goals_2_p_0(
  MR_Word hlds__assertion__HeadVar__1_1,
  MR_Word * hlds__assertion__HeadVar__2_2)
{
  if ((hlds__assertion__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *hlds__assertion__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word hlds__assertion__Goal0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word hlds__assertion__Goals0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word hlds__assertion__Goal_5;
    MR_Word hlds__assertion__Goals_6;

    hlds__assertion__normalise_goal_2_p_0(hlds__assertion__Goal0_3, &hlds__assertion__Goal_5);
    hlds__assertion__normalise_goals_2_p_0(hlds__assertion__Goals0_4, &hlds__assertion__Goals_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__assertion__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__assertion__Goal_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__assertion__Goals_6));
    }
  }
}

static void MR_CALL 
hlds__assertion__normalise_cases_2_p_0(
  MR_Word hlds__assertion__HeadVar__1_1,
  MR_Word * hlds__assertion__HeadVar__2_2)
{
  if ((hlds__assertion__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *hlds__assertion__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word hlds__assertion__Case0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word hlds__assertion__Cases0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word hlds__assertion__Case_5;
    MR_Word hlds__assertion__Cases_6;
    MR_Word hlds__assertion__MainConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Case0_3, (MR_Integer) 0)));
    MR_Word hlds__assertion__OtherConsIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Case0_3, (MR_Integer) 1)));
    MR_Word hlds__assertion__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Case0_3, (MR_Integer) 2)));
    MR_Word hlds__assertion__Goal_10;

    hlds__assertion__normalise_goal_2_p_0(hlds__assertion__Goal0_9, &hlds__assertion__Goal_10);
    {
      hlds__assertion__Case_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__assertion__Case_5, 0) = ((MR_Box) (hlds__assertion__MainConsId_7));
      MR_hl_field(MR_mktag(0), hlds__assertion__Case_5, 1) = ((MR_Box) (hlds__assertion__OtherConsIds_8));
      MR_hl_field(MR_mktag(0), hlds__assertion__Case_5, 2) = ((MR_Box) (hlds__assertion__Goal_10));
    }
    hlds__assertion__normalise_cases_2_p_0(hlds__assertion__Cases0_4, &hlds__assertion__Cases_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__assertion__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__assertion__Case_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__assertion__Cases_6));
    }
  }
}

void MR_CALL 
hlds__assertion__normalise_goal_2_p_0(
  MR_Word hlds__assertion__Goal0_3,
  MR_Word * hlds__assertion__Goal_4)
{
  {
    MR_Word hlds__assertion__GoalExpr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal0_3, (MR_Integer) 0)));
    MR_Word hlds__assertion__GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal0_3, (MR_Integer) 1)));
    MR_Word hlds__assertion__GoalExpr_30;

    switch (MR_tag((MR_Word) hlds__assertion__GoalExpr0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__assertion__SubGoal0_38 = (MR_Word) MR_body(((MR_Word) hlds__assertion__GoalExpr0_5), (MR_Integer) 0);
          MR_Word hlds__assertion__SubGoal_39;

          hlds__assertion__normalise_goal_2_p_0(hlds__assertion__SubGoal0_38, &hlds__assertion__SubGoal_39);
          hlds__assertion__GoalExpr_30 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__assertion__SubGoal_39);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        hlds__assertion__GoalExpr_30 = hlds__assertion__GoalExpr0_5;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            hlds__assertion__GoalExpr_30 = hlds__assertion__GoalExpr0_5;
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__assertion__ConjType_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_5, (MR_Integer) 1)));
              MR_Word hlds__assertion__SubGoals0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_5, (MR_Integer) 2)));
              MR_Word hlds__assertion__SubGoals_33;

              switch (hlds__assertion__ConjType_31) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  hlds__assertion__normalise_goals_2_p_0(hlds__assertion__SubGoals0_32, &hlds__assertion__SubGoals_33);
                  break;
                case (MR_Integer) 0:
                  hlds__assertion__normalise_conj_2_p_0(hlds__assertion__SubGoals0_32, &hlds__assertion__SubGoals_33);
                  break;
              }
              {
                hlds__assertion__GoalExpr_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr_30, 1) = ((MR_Box) (hlds__assertion__ConjType_31));
                MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr_30, 2) = ((MR_Box) (hlds__assertion__SubGoals_33));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__assertion__SubGoals0_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_5, (MR_Integer) 1)));
              MR_Word hlds__assertion__SubGoals_65;

              hlds__assertion__normalise_goals_2_p_0(hlds__assertion__SubGoals0_64, &hlds__assertion__SubGoals_65);
              {
                hlds__assertion__GoalExpr_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr_30, 1) = ((MR_Box) (hlds__assertion__SubGoals_65));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__assertion__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_5, (MR_Integer) 1)));
              MR_Word hlds__assertion__CanFail_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_5, (MR_Integer) 2)));
              MR_Word hlds__assertion__Cases0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_5, (MR_Integer) 3)));
              MR_Word hlds__assertion__Cases_37;

              hlds__assertion__normalise_cases_2_p_0(hlds__assertion__Cases0_36, &hlds__assertion__Cases_37);
              {
                hlds__assertion__GoalExpr_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr_30, 1) = ((MR_Box) (hlds__assertion__Var_34));
                MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr_30, 2) = ((MR_Box) (hlds__assertion__CanFail_35));
                MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr_30, 3) = ((MR_Box) (hlds__assertion__Cases_37));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__assertion__Reason_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_5, (MR_Integer) 1)));
              MR_Word hlds__assertion__SubGoal0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_5, (MR_Integer) 2)));
              MR_Word hlds__assertion__SubGoal_67;

              hlds__assertion__normalise_goal_2_p_0(hlds__assertion__SubGoal0_66, &hlds__assertion__SubGoal_67);
              {
                hlds__assertion__GoalExpr_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr_30, 1) = ((MR_Box) (hlds__assertion__Reason_40));
                MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr_30, 2) = ((MR_Box) (hlds__assertion__SubGoal_67));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word hlds__assertion__Vars_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_5, (MR_Integer) 1)));
              MR_Word hlds__assertion__Cond0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_5, (MR_Integer) 2)));
              MR_Word hlds__assertion__Then0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_5, (MR_Integer) 3)));
              MR_Word hlds__assertion__Else0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_5, (MR_Integer) 4)));
              MR_Word hlds__assertion__Cond_45;
              MR_Word hlds__assertion__Then_46;
              MR_Word hlds__assertion__Else_47;

              hlds__assertion__normalise_goal_2_p_0(hlds__assertion__Cond0_42, &hlds__assertion__Cond_45);
              hlds__assertion__normalise_goal_2_p_0(hlds__assertion__Then0_43, &hlds__assertion__Then_46);
              hlds__assertion__normalise_goal_2_p_0(hlds__assertion__Else0_44, &hlds__assertion__Else_47);
              {
                hlds__assertion__GoalExpr_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr_30, 1) = ((MR_Box) (hlds__assertion__Vars_41));
                MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr_30, 2) = ((MR_Box) (hlds__assertion__Cond_45));
                MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr_30, 3) = ((MR_Box) (hlds__assertion__Then_46));
                MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr_30, 4) = ((MR_Box) (hlds__assertion__Else_47));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word hlds__assertion__ShortHand0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_5, (MR_Integer) 1)));
              MR_Word hlds__assertion__ShortHand_57;

              switch (MR_tag((MR_Word) hlds__assertion__ShortHand0_48)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word hlds__assertion__LHS0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__ShortHand0_48, (MR_Integer) 0)));
                    MR_Word hlds__assertion__RHS0_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__ShortHand0_48, (MR_Integer) 1)));
                    MR_Word hlds__assertion__LHS_62;
                    MR_Word hlds__assertion__RHS_63;

                    hlds__assertion__normalise_goal_2_p_0(hlds__assertion__LHS0_60, &hlds__assertion__LHS_62);
                    hlds__assertion__normalise_goal_2_p_0(hlds__assertion__RHS0_61, &hlds__assertion__RHS_63);
                    {
                      hlds__assertion__ShortHand_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__assertion__ShortHand_57, 0) = ((MR_Box) (hlds__assertion__LHS_62));
                      MR_hl_field(MR_mktag(0), hlds__assertion__ShortHand_57, 1) = ((MR_Box) (hlds__assertion__RHS_63));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__assertion__GoalType_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand0_48, (MR_Integer) 0)));
                    MR_Word hlds__assertion__Outer_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand0_48, (MR_Integer) 1)));
                    MR_Word hlds__assertion__Inner_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand0_48, (MR_Integer) 2)));
                    MR_Word hlds__assertion__MainGoal0_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand0_48, (MR_Integer) 4)));
                    MR_Word hlds__assertion__OrElseAlternatives0_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand0_48, (MR_Integer) 5)));
                    MR_Word hlds__assertion__OrElseInners_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand0_48, (MR_Integer) 6)));
                    MR_Word hlds__assertion__MainGoal_55;
                    MR_Word hlds__assertion__OrElseAlternatives_56;
                    MR_Word hlds__assertion__Vars_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand0_48, (MR_Integer) 3)));

                    hlds__assertion__normalise_goal_2_p_0(hlds__assertion__MainGoal0_52, &hlds__assertion__MainGoal_55);
                    hlds__assertion__normalise_goals_2_p_0(hlds__assertion__OrElseAlternatives0_53, &hlds__assertion__OrElseAlternatives_56);
                    {
                      hlds__assertion__ShortHand_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand_57, 0) = ((MR_Box) (hlds__assertion__GoalType_49));
                      MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand_57, 1) = ((MR_Box) (hlds__assertion__Outer_50));
                      MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand_57, 2) = ((MR_Box) (hlds__assertion__Inner_51));
                      MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand_57, 3) = ((MR_Box) (hlds__assertion__Vars_68));
                      MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand_57, 4) = ((MR_Box) (hlds__assertion__MainGoal_55));
                      MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand_57, 5) = ((MR_Box) (hlds__assertion__OrElseAlternatives_56));
                      MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand_57, 6) = ((MR_Box) (hlds__assertion__OrElseInners_54));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word hlds__assertion__MaybeIO_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__ShortHand0_48, (MR_Integer) 0)));
                    MR_Word hlds__assertion__ResultVar_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__ShortHand0_48, (MR_Integer) 1)));
                    MR_Word hlds__assertion__SubGoal0_69 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__ShortHand0_48, (MR_Integer) 2)));
                    MR_Word hlds__assertion__SubGoal_70;

                    hlds__assertion__normalise_goal_2_p_0(hlds__assertion__SubGoal0_69, &hlds__assertion__SubGoal_70);
                    {
                      hlds__assertion__ShortHand_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), hlds__assertion__ShortHand_57, 0) = ((MR_Box) (hlds__assertion__MaybeIO_58));
                      MR_hl_field(MR_mktag(2), hlds__assertion__ShortHand_57, 1) = ((MR_Box) (hlds__assertion__ResultVar_59));
                      MR_hl_field(MR_mktag(2), hlds__assertion__ShortHand_57, 2) = ((MR_Box) (hlds__assertion__SubGoal_70));
                    }
                  }
                  break;
              }
              {
                hlds__assertion__GoalExpr_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr_30, 1) = ((MR_Box) (hlds__assertion__ShortHand_57));
              }
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__assertion__Goal_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__assertion__GoalExpr_30));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__GoalInfo_6));
    }
  }
}

static void MR_CALL 
hlds__assertion__normalise_conj_2_p_0(
  MR_Word hlds__assertion__HeadVar__1_1,
  MR_Word * hlds__assertion__HeadVar__2_2)
{
  if ((hlds__assertion__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *hlds__assertion__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word hlds__assertion__Goal0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word hlds__assertion__Goals0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word hlds__assertion__ConjGoals_6;
    MR_Word hlds__assertion__Goals1_7;

    hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__assertion__Goal0_3, &hlds__assertion__ConjGoals_6);
    hlds__assertion__normalise_conj_2_p_0(hlds__assertion__Goals0_4, &hlds__assertion__Goals1_7);
    mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__assertion__ConjGoals_6, hlds__assertion__Goals1_7, hlds__assertion__HeadVar__2_2);
  }
}

static MR_bool MR_CALL 
hlds__assertion____Unify____associative_vars_output_var_0_0_10001(
  MR_Box hlds__assertion__wrapper_arg_1,
  MR_Box hlds__assertion__wrapper_arg_2)
{
  {
    MR_bool hlds__assertion__succeeded;

    hlds__assertion__succeeded = hlds__assertion____Unify____associative_vars_output_var_0_0(((MR_Word) hlds__assertion__wrapper_arg_1), ((MR_Word) hlds__assertion__wrapper_arg_2));
    return hlds__assertion__succeeded;
  }
}

static void MR_CALL 
hlds__assertion____Compare____associative_vars_output_var_0_0_10001(
  MR_Box * hlds__assertion__wrapper_arg_1,
  MR_Box hlds__assertion__wrapper_arg_2,
  MR_Box hlds__assertion__wrapper_arg_3)
{
  {
    MR_Word hlds__assertion__conv0_HeadVar__1_1;

    hlds__assertion____Compare____associative_vars_output_var_0_0(&hlds__assertion__conv0_HeadVar__1_1, ((MR_Word) hlds__assertion__wrapper_arg_2), ((MR_Word) hlds__assertion__wrapper_arg_3));
    *hlds__assertion__wrapper_arg_1 = ((MR_Box) (hlds__assertion__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__assertion____Unify____state_update_vars_0_0_10001(
  MR_Box hlds__assertion__wrapper_arg_1,
  MR_Box hlds__assertion__wrapper_arg_2)
{
  {
    MR_bool hlds__assertion__succeeded;

    hlds__assertion__succeeded = hlds__assertion____Unify____state_update_vars_0_0(((MR_Word) hlds__assertion__wrapper_arg_1), ((MR_Word) hlds__assertion__wrapper_arg_2));
    return hlds__assertion__succeeded;
  }
}

static void MR_CALL 
hlds__assertion____Compare____state_update_vars_0_0_10001(
  MR_Box * hlds__assertion__wrapper_arg_1,
  MR_Box hlds__assertion__wrapper_arg_2,
  MR_Box hlds__assertion__wrapper_arg_3)
{
  {
    MR_Word hlds__assertion__conv0_HeadVar__1_1;

    hlds__assertion____Compare____state_update_vars_0_0(&hlds__assertion__conv0_HeadVar__1_1, ((MR_Word) hlds__assertion__wrapper_arg_2), ((MR_Word) hlds__assertion__wrapper_arg_3));
    *hlds__assertion__wrapper_arg_1 = ((MR_Box) (hlds__assertion__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__assertion____Unify____subst_0_0_10001(
  MR_Box hlds__assertion__wrapper_arg_1,
  MR_Box hlds__assertion__wrapper_arg_2)
{
  {
    MR_bool hlds__assertion__succeeded;

    hlds__assertion__succeeded = hlds__assertion____Unify____subst_0_0(((MR_Word) hlds__assertion__wrapper_arg_1), ((MR_Word) hlds__assertion__wrapper_arg_2));
    return hlds__assertion__succeeded;
  }
}

static void MR_CALL 
hlds__assertion____Compare____subst_0_0_10001(
  MR_Box * hlds__assertion__wrapper_arg_1,
  MR_Box hlds__assertion__wrapper_arg_2,
  MR_Box hlds__assertion__wrapper_arg_3)
{
  {
    MR_Word hlds__assertion__conv0_HeadVar__1_1;

    hlds__assertion____Compare____subst_0_0(&hlds__assertion__conv0_HeadVar__1_1, ((MR_Word) hlds__assertion__wrapper_arg_2), ((MR_Word) hlds__assertion__wrapper_arg_3));
    *hlds__assertion__wrapper_arg_1 = ((MR_Box) (hlds__assertion__conv0_HeadVar__1_1));
  }
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

/* :- end_module hlds.assertion. */
