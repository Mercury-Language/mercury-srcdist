/*
** Automatically generated from `assertion.m'
** by the Mercury compiler,
** version rotd-2016-02-18
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
#include "libs.compiler_util.mih"
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



struct hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_0_s {
  MR_Box * hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__wrapper_arg_1;
  MR_Cont hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__cont;
  void * hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__cont_env_ptr;
  MR_Word hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__conv0_HeadVar__5_5;
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
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__V_34_34;
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__V_37_37;
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__V_41_41;
  MR_Word hlds__assertion__predicate_call_2_p_0_env_0__V_42_42;
  MR_Box hlds__assertion__predicate_call_2_p_0_env_0__conv0_Call_7;
};

struct hlds__assertion__update_5_p_0_env_0_s {
  MR_Word hlds__assertion__update_5_p_0_env_0__QCalls_7;
  MR_Word hlds__assertion__update_5_p_0_env_0__UniversiallyQuantifiedVars_8;
  MR_Word hlds__assertion__update_5_p_0_env_0__CallVars_9;
  MR_Word * hlds__assertion__update_5_p_0_env_0__HeadVar__5_5;
  MR_Cont hlds__assertion__update_5_p_0_env_0__cont;
  void * hlds__assertion__update_5_p_0_env_0__cont_env_ptr;
  MR_bool hlds__assertion__update_5_p_0_env_0__succeeded;
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_61_61;
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_62_62;
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_63_63;
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_76_76;
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_77_77;
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_78_78;
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_79_79;
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_80_80;
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_81_81;
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_82_82;
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_84_84;
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeInfo_86_86;
  MR_Word hlds__assertion__update_5_p_0_env_0__StateA_10;
  MR_Word hlds__assertion__update_5_p_0_env_0__StateB_11;
  MR_Word hlds__assertion__update_5_p_0_env_0__LHSCalls_12;
  MR_Word hlds__assertion__update_5_p_0_env_0__RHSCalls_13;
  MR_Word hlds__assertion__update_5_p_0_env_0__PredId_14;
  MR_Word hlds__assertion__update_5_p_0_env_0__SA_15;
  MR_Word hlds__assertion__update_5_p_0_env_0__PairsL_16;
  MR_Word hlds__assertion__update_5_p_0_env_0__Vs_17;
  MR_Word hlds__assertion__update_5_p_0_env_0__SB_18;
  MR_Word hlds__assertion__update_5_p_0_env_0__PairsR_19;
  MR_Word hlds__assertion__update_5_p_0_env_0__Pairs0_21;
  MR_Word hlds__assertion__update_5_p_0_env_0__Pairs_24;
  MR_Word hlds__assertion__update_5_p_0_env_0__S0_25;
  MR_Word hlds__assertion__update_5_p_0_env_0__S_26;
  MR_Word hlds__assertion__update_5_p_0_env_0__AssocList_27;
  MR_Word hlds__assertion__update_5_p_0_env_0__V_31_31;
  MR_Integer hlds__assertion__update_5_p_0_env_0__V_33_33;
  MR_Word hlds__assertion__update_5_p_0_env_0__V_34_34;
  MR_Word hlds__assertion__update_5_p_0_env_0__V_35_35;
  MR_Word hlds__assertion__update_5_p_0_env_0__V_36_36;
  MR_Word hlds__assertion__update_5_p_0_env_0__V_37_37;
  MR_Word hlds__assertion__update_5_p_0_env_0__V_38_38;
  MR_Word hlds__assertion__update_5_p_0_env_0__V_39_39;
  MR_Word hlds__assertion__update_5_p_0_env_0__V_40_40;
  MR_Word hlds__assertion__update_5_p_0_env_0__V_41_41;
  MR_Word hlds__assertion__update_5_p_0_env_0__V_42_42;
  MR_Word hlds__assertion__update_5_p_0_env_0__V_43_43;
  MR_Word hlds__assertion__update_5_p_0_env_0__V_44_44;
  MR_Word hlds__assertion__update_5_p_0_env_0__V_46_46;
  MR_Word hlds__assertion__update_5_p_0_env_0__V_47_47;
  MR_Word hlds__assertion__update_5_p_0_env_0__V_48_48;
  MR_Word hlds__assertion__update_5_p_0_env_0__V_49_49;
  MR_Word hlds__assertion__update_5_p_0_env_0__V_51_51;
  MR_Word hlds__assertion__update_5_p_0_env_0__V_52_52;
  MR_Word hlds__assertion__update_5_p_0_env_0__V_64_64;
  MR_Word hlds__assertion__update_5_p_0_env_0__V_65_65;
  MR_Word hlds__assertion__update_5_p_0_env_0__V_66_66;
  MR_Word hlds__assertion__update_5_p_0_env_0__V_67_67;
  MR_Word hlds__assertion__update_5_p_0_env_0__V_68_68;
  MR_Word hlds__assertion__update_5_p_0_env_0__V_69_69;
  MR_Word hlds__assertion__update_5_p_0_env_0__V_70_70;
  MR_Word hlds__assertion__update_5_p_0_env_0__V_71_71;
  MR_Word hlds__assertion__update_5_p_0_env_0__V_72_72;
  MR_Word hlds__assertion__update_5_p_0_env_0__V_73_73;
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeCtorInfo_13_95;
  MR_Word hlds__assertion__update_5_p_0_env_0__TypeCtorInfo_14_96;
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

struct hlds__assertion__associative_5_p_0_env_0_s {
  MR_Word hlds__assertion__associative_5_p_0_env_0__PCalls_6;
  MR_Word hlds__assertion__associative_5_p_0_env_0__QCalls_7;
  MR_Word hlds__assertion__associative_5_p_0_env_0__UniversiallyQuantifiedVars_8;
  MR_Word hlds__assertion__associative_5_p_0_env_0__CallVars_9;
  MR_Word * hlds__assertion__associative_5_p_0_env_0__HeadVar__5_5;
  MR_bool hlds__assertion__associative_5_p_0_env_0__succeeded;
  jmp_buf hlds__assertion__associative_5_p_0_env_0__commit_0;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_71_71;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_72_72;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_73_73;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_88_88;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_89_89;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_90_90;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_91_91;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_92_92;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_93_93;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_94_94;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_95_95;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_96_96;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_98_98;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_100_100;
  MR_Word hlds__assertion__associative_5_p_0_env_0__TypeInfo_102_102;
  MR_Word hlds__assertion__associative_5_p_0_env_0__CallVarA_10;
  MR_Word hlds__assertion__associative_5_p_0_env_0__CallVarB_11;
  MR_Word hlds__assertion__associative_5_p_0_env_0__OutputVar_12;
  MR_Word hlds__assertion__associative_5_p_0_env_0__LHSCalls_13;
  MR_Word hlds__assertion__associative_5_p_0_env_0__RHSCalls_14;
  MR_Word hlds__assertion__associative_5_p_0_env_0__PredId_15;
  MR_Word hlds__assertion__associative_5_p_0_env_0__AB_16;
  MR_Word hlds__assertion__associative_5_p_0_env_0__PairsL_17;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Vs_18;
  MR_Word hlds__assertion__associative_5_p_0_env_0__BC_19;
  MR_Word hlds__assertion__associative_5_p_0_env_0__PairsR_20;
  MR_Word hlds__assertion__associative_5_p_0_env_0__Pairs_22;
  MR_Word hlds__assertion__associative_5_p_0_env_0__A_23;
  MR_Word hlds__assertion__associative_5_p_0_env_0__B_24;
  MR_Word hlds__assertion__associative_5_p_0_env_0__C_25;
  MR_Word hlds__assertion__associative_5_p_0_env_0__ABC_26;
  MR_Word hlds__assertion__associative_5_p_0_env_0__AssocList_27;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_33_33;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_34_34;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_35_35;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_36_36;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_37_37;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_38_38;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_39_39;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_40_40;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_41_41;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_42_42;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_43_43;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_44_44;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_45_45;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_46_46;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_47_47;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_48_48;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_50_50;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_51_51;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_52_52;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_53_53;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_55_55;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_56_56;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_57_57;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_58_58;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_60_60;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_61_61;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_74_74;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_75_75;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_76_76;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_77_77;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_78_78;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_79_79;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_80_80;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_81_81;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_82_82;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_83_83;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_84_84;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_85_85;
  MR_Word hlds__assertion__associative_5_p_0_env_0__V_86_86;
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
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_61_61;
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_64_64;
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_68_68;
  MR_Word hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_69_69;
  MR_Box hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__conv0_Call_34;
};


static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__assertion__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__assertion__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__assertion__pair__pti_pair_2__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__assertion__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__assertion__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_bool MR_CALL 
hlds__assertion____Unify____subst_0_0_10001(
  MR_Box hlds__assertion__wrapper_arg_1,
  MR_Box hlds__assertion__wrapper_arg_2);

static void MR_CALL 
hlds__assertion____Compare____subst_0_0_10001(
  MR_Box * hlds__assertion__wrapper_arg_1,
  MR_Box hlds__assertion__wrapper_arg_2,
  MR_Box hlds__assertion__wrapper_arg_3);

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
hlds__assertion__IntroducedFrom__pred__predicate_call__415__1_1_p_0(
  MR_Word hlds__assertion__LambdaHeadVar__1_35);

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__update__337__1_2_p_0(
  MR_Word hlds__assertion__SA_15,
  MR_Word hlds__assertion__LambdaHeadVar__1_50);

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__update__335__1_2_p_0(
  MR_Word hlds__assertion__S0_25,
  MR_Word hlds__assertion__LambdaHeadVar__1_45);

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__update__324__1_1_p_0(
  MR_Word hlds__assertion__LambdaHeadVar__1_32);

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__process_one_side__288__1_1_p_0(
  MR_Word hlds__assertion__LambdaHeadVar__1_17);

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__associative__250__1_2_p_0(
  MR_Word hlds__assertion__B_24,
  MR_Word hlds__assertion__LambdaHeadVar__1_59);

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__associative__248__1_2_p_0(
  MR_Word hlds__assertion__A_23,
  MR_Word hlds__assertion__LambdaHeadVar__1_54);

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__associative__246__1_2_p_0(
  MR_Word hlds__assertion__AB_16,
  MR_Word hlds__assertion__LambdaHeadVar__1_49);

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

static void MR_CALL 
hlds__assertion__normalise_goal_expr_2_p_0(
  MR_Word hlds__assertion__GoalExpr0_3,
  MR_Word * hlds__assertion__GoalExpr_4);

static void MR_CALL 
hlds__assertion__update_pred_info_4_p_0(
  MR_Integer hlds__assertion__AssertId_5,
  MR_Word hlds__assertion__PredId_6,
  MR_Word hlds__assertion__STATE_VARIABLE_Module_0_12,
  MR_Word * hlds__assertion__STATE_VARIABLE_Module_13);

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
  MR_Word hlds__assertion__HeadVar__1_1,
  MR_Word hlds__assertion__HeadVar__2_2,
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4);

static MR_bool MR_CALL 
hlds__assertion__equal_vars_4_p_0(
  MR_Word hlds__assertion__HeadVar__1_1,
  MR_Word hlds__assertion__HeadVar__2_2,
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4);

static MR_bool MR_CALL 
hlds__assertion__equal_var_4_p_0(
  MR_Word hlds__assertion__VA_5,
  MR_Word hlds__assertion__VB_6,
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_9,
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_10);

static MR_bool MR_CALL 
hlds__assertion__equal_goals_shorthand_4_p_0(
  MR_Word hlds__assertion__ShortHandA_5,
  MR_Word hlds__assertion__ShortHandB_6,
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_12,
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_13);

static MR_bool MR_CALL 
hlds__assertion__equal_reason_4_p_0(
  MR_Word hlds__assertion__HeadVar__1_1,
  MR_Word hlds__assertion__HeadVar__2_2,
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4);

static MR_Box MR_CALL 
hlds__assertion__equal_goal_exprs_4_p_0_2(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1);

static MR_Box MR_CALL 
hlds__assertion__equal_goal_exprs_4_p_0_1(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1);

static MR_bool MR_CALL 
hlds__assertion__equal_goal_exprs_4_p_0(
  MR_Word hlds__assertion__GoalExprA_5,
  MR_Word hlds__assertion__GoalExprB_6,
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_68,
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_69);

static MR_bool MR_CALL 
hlds__assertion__equal_goals_4_p_0(
  MR_Word hlds__assertion__GoalA_5,
  MR_Word hlds__assertion__GoalB_6,
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_12,
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_13);

static MR_bool MR_CALL 
hlds__assertion__goal_is_equivalence_3_p_0(
  MR_Word hlds__assertion__Goal_4,
  MR_Word * hlds__assertion__P_5,
  MR_Word * hlds__assertion__Q_6);

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

static MR_bool MR_CALL 
hlds__assertion__process_two_linked_calls_6_p_0(
  MR_Word hlds__assertion__Goals_7,
  MR_Word hlds__assertion__UniversiallyQuantifiedVars_8,
  MR_Word * hlds__assertion__PredId_9,
  MR_Word * hlds__assertion__LinkingVar_10,
  MR_Word * hlds__assertion__Vars_11,
  MR_Word * hlds__assertion__VarsA_12);

static MR_bool MR_CALL 
hlds__assertion__update_5_p_0_7(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1);

static MR_bool MR_CALL 
hlds__assertion__update_5_p_0_6(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1);

static MR_bool MR_CALL 
hlds__assertion__update_5_p_0_4(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1);

static void MR_CALL 
hlds__assertion__update_5_p_0_5(
  void * hlds__assertion__env_ptr_arg);

static void MR_CALL 
hlds__assertion__update_5_p_0_1(
  void * hlds__assertion__env_ptr_arg);

static void MR_CALL 
hlds__assertion__update_5_p_0_2(
  void * hlds__assertion__env_ptr_arg);

static void MR_CALL 
hlds__assertion__update_5_p_0_3(
  void * hlds__assertion__env_ptr_arg);

static void MR_CALL 
hlds__assertion__update_5_p_0(
  MR_Word hlds__assertion__PCalls_6,
  MR_Word hlds__assertion__QCalls_7,
  MR_Word hlds__assertion__UniversiallyQuantifiedVars_8,
  MR_Word hlds__assertion__CallVars_9,
  MR_Word * hlds__assertion__HeadVar__5_5,
  MR_Cont hlds__assertion__cont,
  void * hlds__assertion__cont_env_ptr);

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
  MR_Word * hlds__assertion__HeadVar__5_5);

static MR_bool MR_CALL 
hlds__assertion__commutative_var_ordering_2_6_p_0(
  MR_Word hlds__assertion__VarP_7,
  MR_Word hlds__assertion__VarQ_8,
  MR_Word hlds__assertion__HeadVar__3_3,
  MR_Word hlds__assertion__HeadVar__4_4,
  MR_Word hlds__assertion__HeadVar__5_5,
  MR_Word * hlds__assertion__CallVarB_15);

static MR_bool MR_CALL 
hlds__assertion__commutative_var_ordering_4_p_0(
  MR_Word hlds__assertion__HeadVar__1_1,
  MR_Word hlds__assertion__HeadVar__2_2,
  MR_Word hlds__assertion__HeadVar__3_3,
  MR_Word * hlds__assertion__CommutativeVars_11);

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

static void MR_CALL 
hlds__assertion__record_preds_used_in_4_p_0_1(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1,
  MR_Box hlds__assertion__wrapper_arg_2,
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

static const MR_FA_TypeInfo_Struct2 hlds__assertion__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__assertion__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

const MR_TypeCtorInfo_Struct hlds__assertion__hlds__assertion__type_ctor_info_subst_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static MR_bool MR_CALL 
hlds__assertion____Unify____subst_0_0_10001(
  MR_Box hlds__assertion__wrapper_arg_1,
  MR_Box hlds__assertion__wrapper_arg_2)
{
  {
    MR_bool hlds__assertion__succeeded;

    {
      hlds__assertion__succeeded = hlds__assertion____Unify____subst_0_0(((MR_Word) hlds__assertion__wrapper_arg_1), ((MR_Word) hlds__assertion__wrapper_arg_2));
    }
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

    {
      hlds__assertion____Compare____subst_0_0(&hlds__assertion__conv0_HeadVar__1_1, ((MR_Word) hlds__assertion__wrapper_arg_2), ((MR_Word) hlds__assertion__wrapper_arg_3));
    }
    *hlds__assertion__wrapper_arg_1 = ((MR_Box) (hlds__assertion__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0_1(
  void * hlds__assertion__env_ptr_arg)
{
  {
    struct hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_0_s *) hlds__assertion__env_ptr_arg;

    *((hlds__assertion__env_ptr)->hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__wrapper_arg_1) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__conv0_HeadVar__5_5));
    {
      ((hlds__assertion__env_ptr)->hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__cont)((hlds__assertion__env_ptr)->hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__cont_env_ptr);
    }
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

      {
        hlds__assertion__update_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 6))), &(hlds__assertion__env).hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_95_53_95_112_95_48_95_50_95_101_110_118_95_48__conv0_HeadVar__5_5, hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0_1, &hlds__assertion__env);
      }
    }
  }
}

MR_bool MR_CALL 
hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0(
  MR_Word hlds__assertion__Module_6,
  MR_Integer hlds__assertion__AssertId_7,
  MR_Word hlds__assertion__CallVars_9,
  MR_Word * hlds__assertion__HeadVar__5_5)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Word hlds__assertion__TypeInfo_26_26;
    MR_Word hlds__assertion__GoalInfo_13;
    MR_Word hlds__assertion__P_14;
    MR_Word hlds__assertion__Q_15;
    MR_Word hlds__assertion__UniversiallyQuantifiedVars_16;
    MR_Word hlds__assertion__PCalls_17;
    MR_Word hlds__assertion__QCalls_18;
    MR_Word hlds__assertion__V_20_20;
    MR_Word hlds__assertion__V_22_22;
    MR_Word hlds__assertion__V_23_23;
    MR_Word hlds__assertion__Goal_29;
    MR_Word hlds__assertion__V_31_31;
    MR_Word hlds__assertion__V_32_32;
    MR_Word hlds__assertion__GoalExpr0_35;
    MR_Word hlds__assertion__Goal_42;
    MR_Word hlds__assertion__V_44_44;
    MR_Word hlds__assertion__V_45_45;
    MR_Word hlds__assertion__GoalExpr0_48;
    MR_Word hlds__assertion__GoalExpr_12;
    MR_Word hlds__assertion___Context_36;
    MR_Word hlds__assertion__Goal1_38;
    MR_Word hlds__assertion__Reason_37;
    MR_Word hlds__assertion__V_39_39;
    MR_Word hlds__assertion__V_30_30;
    MR_Word hlds__assertion___Context_49;
    MR_Word hlds__assertion__Goal1_51;
    MR_Word hlds__assertion__Reason_50;
    MR_Word hlds__assertion__V_52_52;
    MR_Word hlds__assertion__V_43_43;
    MR_Word hlds__assertion__V_19_19;

    {
      hlds__assertion__assert_id_goal_3_p_0(hlds__assertion__Module_6, hlds__assertion__AssertId_7, &hlds__assertion__V_20_20);
    }
    hlds__assertion__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_20_20, (MR_Integer) 0)));
    hlds__assertion__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_20_20, (MR_Integer) 1)));
    {
      hlds__assertion__succeeded = hlds__assertion__goal_is_equivalence_3_p_0(hlds__assertion__V_20_20, &hlds__assertion__P_14, &hlds__assertion__Q_15);
    }
    if (hlds__assertion__succeeded)
      {
        {
          hlds__assertion__UniversiallyQuantifiedVars_16 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__assertion__GoalInfo_13);
        }
        hlds__assertion__GoalExpr0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_14, (MR_Integer) 0)));
        hlds__assertion___Context_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_14, (MR_Integer) 1)));
        hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExpr0_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_35, (MR_Integer) 0)))) == (MR_Integer) 5)));
        if (hlds__assertion__succeeded)
          {
            hlds__assertion__Reason_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_35, (MR_Integer) 1)));
            hlds__assertion__Goal1_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_35, (MR_Integer) 2)));
            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Reason_37)) == (MR_mktag((MR_Integer) 0)));
            if (hlds__assertion__succeeded)
              hlds__assertion__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Reason_37, (MR_Integer) 0)));
          }
        if (hlds__assertion__succeeded)
          hlds__assertion__Goal_29 = hlds__assertion__Goal1_38;
        else
          hlds__assertion__Goal_29 = hlds__assertion__P_14;
        hlds__assertion__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_29, (MR_Integer) 0)));
        hlds__assertion__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_29, (MR_Integer) 1)));
        hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_31_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_31_31, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (hlds__assertion__succeeded)
          {
            hlds__assertion__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_31_31, (MR_Integer) 1)));
            hlds__assertion__PCalls_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_31_31, (MR_Integer) 2)));
            hlds__assertion__succeeded = (hlds__assertion__V_32_32 == (MR_Integer) 0);
            if (hlds__assertion__succeeded)
              {
                hlds__assertion__GoalExpr0_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_15, (MR_Integer) 0)));
                hlds__assertion___Context_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_15, (MR_Integer) 1)));
                hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExpr0_48)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_48, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (hlds__assertion__succeeded)
                  {
                    hlds__assertion__Reason_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_48, (MR_Integer) 1)));
                    hlds__assertion__Goal1_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_48, (MR_Integer) 2)));
                    hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Reason_50)) == (MR_mktag((MR_Integer) 0)));
                    if (hlds__assertion__succeeded)
                      hlds__assertion__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Reason_50, (MR_Integer) 0)));
                  }
                if (hlds__assertion__succeeded)
                  hlds__assertion__Goal_42 = hlds__assertion__Goal1_51;
                else
                  hlds__assertion__Goal_42 = hlds__assertion__Q_15;
                hlds__assertion__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_42, (MR_Integer) 0)));
                hlds__assertion__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_42, (MR_Integer) 1)));
                hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_44_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_44_44, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (hlds__assertion__succeeded)
                  {
                    hlds__assertion__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_44_44, (MR_Integer) 1)));
                    hlds__assertion__QCalls_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_44_44, (MR_Integer) 2)));
                    hlds__assertion__succeeded = (hlds__assertion__V_45_45 == (MR_Integer) 0);
                    if (hlds__assertion__succeeded)
                      {
                        hlds__assertion__TypeInfo_26_26 = (MR_Word) &hlds__assertion_scalar_common_2[0];
                        {
                          hlds__assertion__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__assertion__V_22_22, 0) = ((MR_Box) (&hlds__assertion_scalar_common_6[0]));
                          MR_hl_field(MR_mktag(0), hlds__assertion__V_22_22, 1) = ((MR_Box) (hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0_2));
                          MR_hl_field(MR_mktag(0), hlds__assertion__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(0), hlds__assertion__V_22_22, 3) = ((MR_Box) (hlds__assertion__PCalls_17));
                          MR_hl_field(MR_mktag(0), hlds__assertion__V_22_22, 4) = ((MR_Box) (hlds__assertion__QCalls_18));
                          MR_hl_field(MR_mktag(0), hlds__assertion__V_22_22, 5) = ((MR_Box) (hlds__assertion__UniversiallyQuantifiedVars_16));
                          MR_hl_field(MR_mktag(0), hlds__assertion__V_22_22, 6) = ((MR_Box) (hlds__assertion__CallVars_9));
                        }
                        {
                          mercury__solutions__solutions_2_p_1(hlds__assertion__TypeInfo_26_26, hlds__assertion__V_22_22, &hlds__assertion__V_23_23);
                        }
                        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_23_23)) == (MR_mktag((MR_Integer) 1)));
                        if (hlds__assertion__succeeded)
                          {
                            *hlds__assertion__HeadVar__5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_23_23, (MR_Integer) 0)));
                            hlds__assertion__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_23_23, (MR_Integer) 1)));
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
hlds__assertion__IntroducedFrom__pred__predicate_call__415__1_1_p_0(
  MR_Word hlds__assertion__LambdaHeadVar__1_35)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Word hlds__assertion__UnifyRhs_18;
    MR_Word hlds__assertion__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_35, (MR_Integer) 0)));
    MR_Word hlds__assertion__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_35, (MR_Integer) 1)));
    MR_Word hlds__assertion__V_17_17;
    MR_Word hlds__assertion__V_19_19;
    MR_Word hlds__assertion__V_20_20;
    MR_Word hlds__assertion__V_21_21;
    MR_Word hlds__assertion__V_23_23;
    MR_Word hlds__assertion__V_24_24;
    MR_Word hlds__assertion__V_25_25;

    hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_36_36)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__assertion__succeeded)
      {
        hlds__assertion__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_36_36, (MR_Integer) 0)));
        hlds__assertion__UnifyRhs_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_36_36, (MR_Integer) 1)));
        hlds__assertion__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_36_36, (MR_Integer) 2)));
        hlds__assertion__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_36_36, (MR_Integer) 3)));
        hlds__assertion__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_36_36, (MR_Integer) 4)));
        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__UnifyRhs_18)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__assertion__succeeded)
          {
            hlds__assertion__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRhs_18, (MR_Integer) 0)));
            hlds__assertion__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRhs_18, (MR_Integer) 1)));
            hlds__assertion__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRhs_18, (MR_Integer) 2)));
          }
      }
    hlds__assertion__succeeded = !(hlds__assertion__succeeded);
    return hlds__assertion__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__update__337__1_2_p_0(
  MR_Word hlds__assertion__SA_15,
  MR_Word hlds__assertion__LambdaHeadVar__1_50)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Word hlds__assertion__X_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_50, (MR_Integer) 0)));
    MR_Word hlds__assertion___Y_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_50, (MR_Integer) 1)));

    {
      hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__X_59)), ((MR_Box) (hlds__assertion__SA_15)));
    }
    return hlds__assertion__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__update__335__1_2_p_0(
  MR_Word hlds__assertion__S0_25,
  MR_Word hlds__assertion__LambdaHeadVar__1_45)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Word hlds__assertion__X_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_45, (MR_Integer) 0)));
    MR_Word hlds__assertion___Y_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_45, (MR_Integer) 1)));

    {
      hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__X_56)), ((MR_Box) (hlds__assertion__S0_25)));
    }
    return hlds__assertion__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__update__324__1_1_p_0(
  MR_Word hlds__assertion__LambdaHeadVar__1_32)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Word hlds__assertion__X_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_32, (MR_Integer) 0)));
    MR_Word hlds__assertion__Y_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_32, (MR_Integer) 1)));

    {
      hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_2[0], ((MR_Box) (hlds__assertion__X_53)), ((MR_Box) (hlds__assertion__Y_54)));
    }
    hlds__assertion__succeeded = !(hlds__assertion__succeeded);
    return hlds__assertion__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__process_one_side__288__1_1_p_0(
  MR_Word hlds__assertion__LambdaHeadVar__1_17)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Word hlds__assertion__X_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_17, (MR_Integer) 0)));
    MR_Word hlds__assertion__Y_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_17, (MR_Integer) 1)));

    {
      hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__X_19)), ((MR_Box) (hlds__assertion__Y_20)));
    }
    hlds__assertion__succeeded = !(hlds__assertion__succeeded);
    return hlds__assertion__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__associative__250__1_2_p_0(
  MR_Word hlds__assertion__B_24,
  MR_Word hlds__assertion__LambdaHeadVar__1_59)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Word hlds__assertion__X_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_59, (MR_Integer) 0)));
    MR_Word hlds__assertion___Y_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_59, (MR_Integer) 1)));

    {
      hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__X_69)), ((MR_Box) (hlds__assertion__B_24)));
    }
    return hlds__assertion__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__associative__248__1_2_p_0(
  MR_Word hlds__assertion__A_23,
  MR_Word hlds__assertion__LambdaHeadVar__1_54)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Word hlds__assertion__X_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_54, (MR_Integer) 0)));
    MR_Word hlds__assertion___Y_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_54, (MR_Integer) 1)));

    {
      hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__X_66)), ((MR_Box) (hlds__assertion__A_23)));
    }
    return hlds__assertion__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__assertion__IntroducedFrom__pred__associative__246__1_2_p_0(
  MR_Word hlds__assertion__AB_16,
  MR_Word hlds__assertion__LambdaHeadVar__1_49)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Word hlds__assertion__X_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_49, (MR_Integer) 0)));
    MR_Word hlds__assertion___Y_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LambdaHeadVar__1_49, (MR_Integer) 1)));

    {
      hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__X_63)), ((MR_Box) (hlds__assertion__AB_16)));
    }
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
    MR_bool hlds__assertion__succeeded;
    MR_Word hlds__assertion__Cast_HeadVar1_4 = hlds__assertion__HeadVar__2_2;
    MR_Word hlds__assertion__Cast_HeadVar2_5 = hlds__assertion__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__assertion_scalar_common_2[2], hlds__assertion__HeadVar__1_1, ((MR_Box) (hlds__assertion__Cast_HeadVar1_4)), ((MR_Box) (hlds__assertion__Cast_HeadVar2_5)));
    }
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

    {
      hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_2[2], ((MR_Box) (hlds__assertion__Cast_HeadVar1_3)), ((MR_Box) (hlds__assertion__Cast_HeadVar2_4)));
    }
    return hlds__assertion__succeeded;
  }
}

static void MR_CALL 
hlds__assertion__normalise_goals_2_p_0(
  MR_Word hlds__assertion__HeadVar__1_1,
  MR_Word * hlds__assertion__HeadVar__2_2)
{
  {
    MR_bool hlds__assertion__succeeded;

    if ((hlds__assertion__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__assertion__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word hlds__assertion__Goal0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__assertion__Goals0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__assertion__Goal_5;
        MR_Word hlds__assertion__Goals_6;
        MR_Word hlds__assertion__GoalExpr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal0_3, (MR_Integer) 0)));
        MR_Word hlds__assertion__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal0_3, (MR_Integer) 1)));
        MR_Word hlds__assertion__GoalExpr_11;

        {
          hlds__assertion__normalise_goal_expr_2_p_0(hlds__assertion__GoalExpr0_9, &hlds__assertion__GoalExpr_11);
        }
        {
          hlds__assertion__Goal_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__assertion__Goal_5, 0) = ((MR_Box) (hlds__assertion__GoalExpr_11));
          MR_hl_field(MR_mktag(0), hlds__assertion__Goal_5, 1) = ((MR_Box) (hlds__assertion__GoalInfo_10));
        }
        {
          hlds__assertion__normalise_goals_2_p_0(hlds__assertion__Goals0_4, &hlds__assertion__Goals_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__assertion__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__assertion__Goal_5));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__assertion__Goals_6));
        }
      }
  }
}

static void MR_CALL 
hlds__assertion__normalise_cases_2_p_0(
  MR_Word hlds__assertion__HeadVar__1_1,
  MR_Word * hlds__assertion__HeadVar__2_2)
{
  {
    MR_bool hlds__assertion__succeeded;

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
        MR_Word hlds__assertion__GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal0_9, (MR_Integer) 0)));
        MR_Word hlds__assertion__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal0_9, (MR_Integer) 1)));
        MR_Word hlds__assertion__GoalExpr_15;

        {
          hlds__assertion__normalise_goal_expr_2_p_0(hlds__assertion__GoalExpr0_13, &hlds__assertion__GoalExpr_15);
        }
        {
          hlds__assertion__Goal_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__assertion__Goal_10, 0) = ((MR_Box) (hlds__assertion__GoalExpr_15));
          MR_hl_field(MR_mktag(0), hlds__assertion__Goal_10, 1) = ((MR_Box) (hlds__assertion__GoalInfo_14));
        }
        {
          hlds__assertion__Case_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__assertion__Case_5, 0) = ((MR_Box) (hlds__assertion__MainConsId_7));
          MR_hl_field(MR_mktag(0), hlds__assertion__Case_5, 1) = ((MR_Box) (hlds__assertion__OtherConsIds_8));
          MR_hl_field(MR_mktag(0), hlds__assertion__Case_5, 2) = ((MR_Box) (hlds__assertion__Goal_10));
        }
        {
          hlds__assertion__normalise_cases_2_p_0(hlds__assertion__Cases0_4, &hlds__assertion__Cases_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__assertion__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__assertion__Case_5));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__assertion__Cases_6));
        }
      }
  }
}

static void MR_CALL 
hlds__assertion__normalise_conj_2_p_0(
  MR_Word hlds__assertion__HeadVar__1_1,
  MR_Word * hlds__assertion__HeadVar__2_2)
{
  {
    MR_bool hlds__assertion__succeeded;

    if ((hlds__assertion__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__assertion__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word hlds__assertion__Goal0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__assertion__Goals0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__assertion__ConjGoals_6;
        MR_Word hlds__assertion__Goals1_7;

        {
          hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__assertion__Goal0_3, &hlds__assertion__ConjGoals_6);
        }
        {
          hlds__assertion__normalise_conj_2_p_0(hlds__assertion__Goals0_4, &hlds__assertion__Goals1_7);
        }
        {
          mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__assertion__ConjGoals_6, hlds__assertion__Goals1_7, hlds__assertion__HeadVar__2_2);
        }
      }
  }
}

static void MR_CALL 
hlds__assertion__normalise_goal_expr_2_p_0(
  MR_Word hlds__assertion__GoalExpr0_3,
  MR_Word * hlds__assertion__GoalExpr_4)
{
  {
    MR_bool hlds__assertion__succeeded;

    switch (MR_tag((MR_Word) hlds__assertion__GoalExpr0_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__assertion__SubGoal0_35 = (MR_Word) MR_body(((MR_Word) hlds__assertion__GoalExpr0_3), (MR_Integer) 0);
          MR_Word hlds__assertion__SubGoal_36;
          MR_Word hlds__assertion__GoalExpr0_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__SubGoal0_35, (MR_Integer) 0)));
          MR_Word hlds__assertion__GoalInfo_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__SubGoal0_35, (MR_Integer) 1)));
          MR_Word hlds__assertion__GoalExpr_93;

          {
            hlds__assertion__normalise_goal_expr_2_p_0(hlds__assertion__GoalExpr0_91, &hlds__assertion__GoalExpr_93);
          }
          {
            hlds__assertion__SubGoal_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__assertion__SubGoal_36, 0) = ((MR_Box) (hlds__assertion__GoalExpr_93));
            MR_hl_field(MR_mktag(0), hlds__assertion__SubGoal_36, 1) = ((MR_Box) (hlds__assertion__GoalInfo_92));
          }
          *hlds__assertion__GoalExpr_4 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__assertion__SubGoal_36);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *hlds__assertion__GoalExpr_4 = hlds__assertion__GoalExpr0_3;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *hlds__assertion__GoalExpr_4 = hlds__assertion__GoalExpr0_3;
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__assertion__ConjType_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 1)));
              MR_Word hlds__assertion__Goals0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 2)));
              MR_Word hlds__assertion__Goals_30;

              switch (hlds__assertion__ConjType_28) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    hlds__assertion__normalise_goals_2_p_0(hlds__assertion__Goals0_29, &hlds__assertion__Goals_30);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    hlds__assertion__normalise_conj_2_p_0(hlds__assertion__Goals0_29, &hlds__assertion__Goals_30);
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *hlds__assertion__GoalExpr_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__assertion__ConjType_28));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__assertion__Goals_30));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__assertion__Goals0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 1)));
              MR_Word hlds__assertion__Goals_62;

              {
                hlds__assertion__normalise_goals_2_p_0(hlds__assertion__Goals0_61, &hlds__assertion__Goals_62);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *hlds__assertion__GoalExpr_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__assertion__Goals_62));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__assertion__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 1)));
              MR_Word hlds__assertion__CanFail_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 2)));
              MR_Word hlds__assertion__Cases0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 3)));
              MR_Word hlds__assertion__Cases_34;

              {
                hlds__assertion__normalise_cases_2_p_0(hlds__assertion__Cases0_33, &hlds__assertion__Cases_34);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *hlds__assertion__GoalExpr_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__assertion__Var_31));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__assertion__CanFail_32));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (hlds__assertion__Cases_34));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__assertion__Reason_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 1)));
              MR_Word hlds__assertion__SubGoal0_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 2)));
              MR_Word hlds__assertion__SubGoal_64;
              MR_Word hlds__assertion__GoalExpr0_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__SubGoal0_63, (MR_Integer) 0)));
              MR_Word hlds__assertion__GoalInfo_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__SubGoal0_63, (MR_Integer) 1)));
              MR_Word hlds__assertion__GoalExpr_98;

              {
                hlds__assertion__normalise_goal_expr_2_p_0(hlds__assertion__GoalExpr0_96, &hlds__assertion__GoalExpr_98);
              }
              {
                hlds__assertion__SubGoal_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__assertion__SubGoal_64, 0) = ((MR_Box) (hlds__assertion__GoalExpr_98));
                MR_hl_field(MR_mktag(0), hlds__assertion__SubGoal_64, 1) = ((MR_Box) (hlds__assertion__GoalInfo_97));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *hlds__assertion__GoalExpr_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__assertion__Reason_37));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__assertion__SubGoal_64));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word hlds__assertion__Vars_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 1)));
              MR_Word hlds__assertion__Cond0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 2)));
              MR_Word hlds__assertion__Then0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 3)));
              MR_Word hlds__assertion__Else0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 4)));
              MR_Word hlds__assertion__Cond_42;
              MR_Word hlds__assertion__Then_43;
              MR_Word hlds__assertion__Else_44;
              MR_Word hlds__assertion__GoalExpr0_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Cond0_39, (MR_Integer) 0)));
              MR_Word hlds__assertion__GoalInfo_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Cond0_39, (MR_Integer) 1)));
              MR_Word hlds__assertion__GoalExpr_78;
              MR_Word hlds__assertion__GoalExpr0_81;
              MR_Word hlds__assertion__GoalInfo_82;
              MR_Word hlds__assertion__GoalExpr_83;
              MR_Word hlds__assertion__GoalExpr0_86;
              MR_Word hlds__assertion__GoalInfo_87;
              MR_Word hlds__assertion__GoalExpr_88;

              {
                hlds__assertion__normalise_goal_expr_2_p_0(hlds__assertion__GoalExpr0_76, &hlds__assertion__GoalExpr_78);
              }
              {
                hlds__assertion__Cond_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__assertion__Cond_42, 0) = ((MR_Box) (hlds__assertion__GoalExpr_78));
                MR_hl_field(MR_mktag(0), hlds__assertion__Cond_42, 1) = ((MR_Box) (hlds__assertion__GoalInfo_77));
              }
              hlds__assertion__GoalExpr0_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Then0_40, (MR_Integer) 0)));
              hlds__assertion__GoalInfo_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Then0_40, (MR_Integer) 1)));
              {
                hlds__assertion__normalise_goal_expr_2_p_0(hlds__assertion__GoalExpr0_81, &hlds__assertion__GoalExpr_83);
              }
              {
                hlds__assertion__Then_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__assertion__Then_43, 0) = ((MR_Box) (hlds__assertion__GoalExpr_83));
                MR_hl_field(MR_mktag(0), hlds__assertion__Then_43, 1) = ((MR_Box) (hlds__assertion__GoalInfo_82));
              }
              hlds__assertion__GoalExpr0_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Else0_41, (MR_Integer) 0)));
              hlds__assertion__GoalInfo_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Else0_41, (MR_Integer) 1)));
              {
                hlds__assertion__normalise_goal_expr_2_p_0(hlds__assertion__GoalExpr0_86, &hlds__assertion__GoalExpr_88);
              }
              {
                hlds__assertion__Else_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__assertion__Else_44, 0) = ((MR_Box) (hlds__assertion__GoalExpr_88));
                MR_hl_field(MR_mktag(0), hlds__assertion__Else_44, 1) = ((MR_Box) (hlds__assertion__GoalInfo_87));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *hlds__assertion__GoalExpr_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__assertion__Vars_38));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__assertion__Cond_42));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (hlds__assertion__Then_43));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (hlds__assertion__Else_44));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word hlds__assertion__ShortHand0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_3, (MR_Integer) 1)));
              MR_Word hlds__assertion__ShortHand_54;

              switch (MR_tag((MR_Word) hlds__assertion__ShortHand0_45)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word hlds__assertion__LHS0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__ShortHand0_45, (MR_Integer) 0)));
                    MR_Word hlds__assertion__RHS0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__ShortHand0_45, (MR_Integer) 1)));
                    MR_Word hlds__assertion__LHS_59;
                    MR_Word hlds__assertion__RHS_60;

                    {
                      hlds__assertion__normalise_goal_2_p_0(hlds__assertion__LHS0_57, &hlds__assertion__LHS_59);
                    }
                    {
                      hlds__assertion__normalise_goal_2_p_0(hlds__assertion__RHS0_58, &hlds__assertion__RHS_60);
                    }
                    {
                      hlds__assertion__ShortHand_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__assertion__ShortHand_54, 0) = ((MR_Box) (hlds__assertion__LHS_59));
                      MR_hl_field(MR_mktag(0), hlds__assertion__ShortHand_54, 1) = ((MR_Box) (hlds__assertion__RHS_60));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__assertion__GoalType_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand0_45, (MR_Integer) 0)));
                    MR_Word hlds__assertion__Outer_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand0_45, (MR_Integer) 1)));
                    MR_Word hlds__assertion__Inner_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand0_45, (MR_Integer) 2)));
                    MR_Word hlds__assertion__MainGoal0_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand0_45, (MR_Integer) 4)));
                    MR_Word hlds__assertion__OrElseAlternatives0_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand0_45, (MR_Integer) 5)));
                    MR_Word hlds__assertion__OrElseInners_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand0_45, (MR_Integer) 6)));
                    MR_Word hlds__assertion__MainGoal_52;
                    MR_Word hlds__assertion__OrElseAlternatives_53;
                    MR_Word hlds__assertion__Vars_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand0_45, (MR_Integer) 3)));

                    {
                      hlds__assertion__normalise_goal_2_p_0(hlds__assertion__MainGoal0_49, &hlds__assertion__MainGoal_52);
                    }
                    {
                      hlds__assertion__normalise_goals_2_p_0(hlds__assertion__OrElseAlternatives0_50, &hlds__assertion__OrElseAlternatives_53);
                    }
                    {
                      hlds__assertion__ShortHand_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand_54, 0) = ((MR_Box) (hlds__assertion__GoalType_46));
                      MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand_54, 1) = ((MR_Box) (hlds__assertion__Outer_47));
                      MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand_54, 2) = ((MR_Box) (hlds__assertion__Inner_48));
                      MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand_54, 3) = ((MR_Box) (hlds__assertion__Vars_65));
                      MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand_54, 4) = ((MR_Box) (hlds__assertion__MainGoal_52));
                      MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand_54, 5) = ((MR_Box) (hlds__assertion__OrElseAlternatives_53));
                      MR_hl_field(MR_mktag(1), hlds__assertion__ShortHand_54, 6) = ((MR_Box) (hlds__assertion__OrElseInners_51));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word hlds__assertion__MaybeIO_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__ShortHand0_45, (MR_Integer) 0)));
                    MR_Word hlds__assertion__ResultVar_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__ShortHand0_45, (MR_Integer) 1)));
                    MR_Word hlds__assertion__SubGoal0_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__ShortHand0_45, (MR_Integer) 2)));
                    MR_Word hlds__assertion__SubGoal_67;

                    {
                      hlds__assertion__normalise_goal_2_p_0(hlds__assertion__SubGoal0_66, &hlds__assertion__SubGoal_67);
                    }
                    {
                      hlds__assertion__ShortHand_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), hlds__assertion__ShortHand_54, 0) = ((MR_Box) (hlds__assertion__MaybeIO_55));
                      MR_hl_field(MR_mktag(2), hlds__assertion__ShortHand_54, 1) = ((MR_Box) (hlds__assertion__ResultVar_56));
                      MR_hl_field(MR_mktag(2), hlds__assertion__ShortHand_54, 2) = ((MR_Box) (hlds__assertion__SubGoal_67));
                    }
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *hlds__assertion__GoalExpr_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__assertion__ShortHand_54));
              }
            }
            break;
        }
        break;
    }
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
    MR_bool hlds__assertion__succeeded;
    MR_Word hlds__assertion__PredInfo0_8;
    MR_Word hlds__assertion__Assertions0_9;
    MR_Word hlds__assertion__Assertions_10;
    MR_Word hlds__assertion__PredInfo_11;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__assertion__STATE_VARIABLE_Module_0_12, hlds__assertion__PredId_6, &hlds__assertion__PredInfo0_8);
    }
    {
      hlds__hlds_pred__pred_info_get_assertions_2_p_0(hlds__assertion__PredInfo0_8, &hlds__assertion__Assertions0_9);
    }
    {
      mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (hlds__assertion__AssertId_5)), hlds__assertion__Assertions0_9, &hlds__assertion__Assertions_10);
    }
    {
      hlds__hlds_pred__pred_info_set_assertions_3_p_0(hlds__assertion__Assertions_10, hlds__assertion__PredInfo0_8, &hlds__assertion__PredInfo_11);
    }
    {
      hlds__hlds_module__module_info_set_pred_info_4_p_0(hlds__assertion__PredId_6, hlds__assertion__PredInfo_11, hlds__assertion__STATE_VARIABLE_Module_0_12, hlds__assertion__STATE_VARIABLE_Module_13);
    }
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
            MR_Word hlds__assertion__V_22_22;
            MR_Word hlds__assertion__V_23_23;
            MR_Word hlds__assertion__STATE_VARIABLE_Subst_24_24;
            MR_Word hlds__assertion__V_27_27;
            MR_Word hlds__assertion__GoalExprA_34;
            MR_Word hlds__assertion__GoalExprB_36;
            MR_Word hlds__assertion___GoalInfoA_35;
            MR_Word hlds__assertion___GoalInfoB_37;

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
                  hlds__assertion__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__assertion__V_22_22, 0) = ((MR_Box) (hlds__assertion__MainConsIdA_13));
                  MR_hl_field(MR_mktag(1), hlds__assertion__V_22_22, 1) = ((MR_Box) (hlds__assertion__OtherConsIdsA_14));
                }
                {
                  mercury__list__sort_2_p_0(hlds__assertion__TypeCtorInfo_26_26, hlds__assertion__V_22_22, &hlds__assertion__SortedConsIds_19);
                }
                {
                  hlds__assertion__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__assertion__V_23_23, 0) = ((MR_Box) (hlds__assertion__MainConsIdB_16));
                  MR_hl_field(MR_mktag(1), hlds__assertion__V_23_23, 1) = ((MR_Box) (hlds__assertion__OtherConsIdsB_17));
                }
                {
                  mercury__list__sort_2_p_0(hlds__assertion__TypeCtorInfo_26_26, hlds__assertion__V_23_23, &hlds__assertion__V_27_27);
                }
                hlds__assertion__TypeInfo_28_28 = (MR_Word) &hlds__assertion_scalar_common_1[6];
                {
                  hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_28_28, ((MR_Box) (hlds__assertion__SortedConsIds_19)), ((MR_Box) (hlds__assertion__V_27_27)));
                }
                if (hlds__assertion__succeeded)
                  {
                    hlds__assertion__GoalExprA_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalA_15, (MR_Integer) 0)));
                    hlds__assertion___GoalInfoA_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalA_15, (MR_Integer) 1)));
                    hlds__assertion__GoalExprB_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalB_18, (MR_Integer) 0)));
                    hlds__assertion___GoalInfoB_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalB_18, (MR_Integer) 1)));
                    {
                      hlds__assertion__succeeded = hlds__assertion__equal_goal_exprs_4_p_0(hlds__assertion__GoalExprA_34, hlds__assertion__GoalExprB_36, hlds__assertion__STATE_VARIABLE_Subst_0_3, &hlds__assertion__STATE_VARIABLE_Subst_24_24);
                    }
                    if (hlds__assertion__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word hlds__assertion__HeadVar__1__tmp_copy_1 = hlds__assertion__CaseAs_9;
                          MR_Word hlds__assertion__HeadVar__2__tmp_copy_2 = hlds__assertion__CaseBs_11;
                          MR_Word hlds__assertion__STATE_VARIABLE_Subst_0__tmp_copy_3 = hlds__assertion__STATE_VARIABLE_Subst_24_24;

                          hlds__assertion__STATE_VARIABLE_Subst_0_3 = hlds__assertion__STATE_VARIABLE_Subst_0__tmp_copy_3;
                          hlds__assertion__HeadVar__2_2 = hlds__assertion__HeadVar__2__tmp_copy_2;
                          hlds__assertion__HeadVar__1_1 = hlds__assertion__HeadVar__1__tmp_copy_1;
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
            MR_Word hlds__assertion__GoalExprA_22;
            MR_Word hlds__assertion__GoalExprB_24;
            MR_Word hlds__assertion___GoalInfoA_23;
            MR_Word hlds__assertion___GoalInfoB_25;

            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__assertion__succeeded)
              {
                hlds__assertion__GoalB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)));
                hlds__assertion__GoalBs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 1)));
                hlds__assertion__GoalExprA_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalA_8, (MR_Integer) 0)));
                hlds__assertion___GoalInfoA_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalA_8, (MR_Integer) 1)));
                hlds__assertion__GoalExprB_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalB_10, (MR_Integer) 0)));
                hlds__assertion___GoalInfoB_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalB_10, (MR_Integer) 1)));
                {
                  hlds__assertion__succeeded = hlds__assertion__equal_goal_exprs_4_p_0(hlds__assertion__GoalExprA_22, hlds__assertion__GoalExprB_24, hlds__assertion__STATE_VARIABLE_Subst_0_3, &hlds__assertion__STATE_VARIABLE_Subst_15_15);
                }
                if (hlds__assertion__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word hlds__assertion__HeadVar__1__tmp_copy_1 = hlds__assertion__GoalAs_9;
                      MR_Word hlds__assertion__HeadVar__2__tmp_copy_2 = hlds__assertion__GoalBs_11;
                      MR_Word hlds__assertion__STATE_VARIABLE_Subst_0__tmp_copy_3 = hlds__assertion__STATE_VARIABLE_Subst_15_15;

                      hlds__assertion__STATE_VARIABLE_Subst_0_3 = hlds__assertion__STATE_VARIABLE_Subst_0__tmp_copy_3;
                      hlds__assertion__HeadVar__2_2 = hlds__assertion__HeadVar__2__tmp_copy_2;
                      hlds__assertion__HeadVar__1_1 = hlds__assertion__HeadVar__1__tmp_copy_1;
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
  MR_Word hlds__assertion__HeadVar__1_1,
  MR_Word hlds__assertion__HeadVar__2_2,
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4)
{
  {
    MR_bool hlds__assertion__succeeded;

    switch (MR_tag((MR_Word) hlds__assertion__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__assertion__VA_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word hlds__assertion__VB_68;
          MR_Word hlds__assertion__VAs_67;
          MR_Word hlds__assertion__VBs_69;
          MR_Word hlds__assertion__SubstVA_80;
          MR_Word hlds__assertion__TypeInfo_12_82;
          MR_Box hlds__assertion__conv0_SubstVA_80;

          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
          if (hlds__assertion__succeeded)
            {
              hlds__assertion__VB_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)));
              hlds__assertion__VAs_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              hlds__assertion__VBs_69 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              hlds__assertion__TypeInfo_12_82 = (MR_Word) &hlds__assertion_scalar_common_1[0];
              {
                hlds__assertion__succeeded = mercury__map__search_3_p_0(hlds__assertion__TypeInfo_12_82, hlds__assertion__TypeInfo_12_82, hlds__assertion__STATE_VARIABLE_Subst_0_3, ((MR_Box) (hlds__assertion__VA_66)), &hlds__assertion__conv0_SubstVA_80);
              }
              if (hlds__assertion__succeeded)
                {
                  hlds__assertion__SubstVA_80 = ((MR_Word) hlds__assertion__conv0_SubstVA_80);
                  hlds__assertion__succeeded = MR_TRUE;
                }
              if (hlds__assertion__succeeded)
                {
                  {
                    hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__SubstVA_80)), ((MR_Box) (hlds__assertion__VB_68)));
                  }
                  if (hlds__assertion__succeeded)
                    {
                      *hlds__assertion__STATE_VARIABLE_Subst_4 = hlds__assertion__STATE_VARIABLE_Subst_0_3;
                      hlds__assertion__succeeded = MR_TRUE;
                    }
                }
              else
                {
                  MR_Word hlds__assertion__TypeInfo_13_83 = (MR_Word) &hlds__assertion_scalar_common_1[0];

                  {
                    hlds__assertion__succeeded = mercury__map__insert_4_p_0(hlds__assertion__TypeInfo_13_83, hlds__assertion__TypeInfo_13_83, ((MR_Box) (hlds__assertion__VA_66)), ((MR_Box) (hlds__assertion__VB_68)), hlds__assertion__STATE_VARIABLE_Subst_0_3, hlds__assertion__STATE_VARIABLE_Subst_4);
                  }
                }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__assertion__ConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word hlds__assertion__E_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word hlds__assertion__VarsA_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word hlds__assertion__VarsB_18;
          MR_Word hlds__assertion__V_43_43;
          MR_Word hlds__assertion__V_44_44;

          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
          if (hlds__assertion__succeeded)
            {
              hlds__assertion__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)));
              hlds__assertion__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 1)));
              hlds__assertion__VarsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__HeadVar__2_2, (MR_Integer) 2)));
              {
                hlds__assertion__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(hlds__assertion__ConsId_15, hlds__assertion__V_43_43);
              }
              if (hlds__assertion__succeeded)
                {
                  hlds__assertion__succeeded = (hlds__assertion__E_16 == hlds__assertion__V_44_44);
                  if (hlds__assertion__succeeded)
                    {
                      hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__VarsA_17, hlds__assertion__VarsB_18, hlds__assertion__STATE_VARIABLE_Subst_0_3, hlds__assertion__STATE_VARIABLE_Subst_4);
                    }
                }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__assertion__TypeInfo_52_52;
          MR_Word hlds__assertion__Purity_26 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 3);
          MR_Word hlds__assertion__Groundness_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word hlds__assertion__PredOrFunc_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          MR_Word hlds__assertion__NLVarsA_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word hlds__assertion__LVarsA_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__1_1, (MR_Integer) 3)));
          MR_Word hlds__assertion__Modes_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__1_1, (MR_Integer) 4)));
          MR_Word hlds__assertion__Det_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__1_1, (MR_Integer) 5)));
          MR_Word hlds__assertion__GoalA_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__1_1, (MR_Integer) 6)));
          MR_Word hlds__assertion__NLVarsB_35;
          MR_Word hlds__assertion__LVarsB_36;
          MR_Word hlds__assertion__GoalB_37;
          MR_Word hlds__assertion__STATE_VARIABLE_Subst_40_40;
          MR_Word hlds__assertion__STATE_VARIABLE_Subst_41_41;
          MR_Word hlds__assertion__V_45_45;
          MR_Word hlds__assertion__V_46_46;
          MR_Word hlds__assertion__V_47_47;
          MR_Word hlds__assertion__V_49_49;
          MR_Word hlds__assertion__V_50_50;
          MR_Word hlds__assertion__GoalExprA_58;
          MR_Word hlds__assertion__GoalExprB_60;
          MR_Word hlds__assertion___GoalInfoA_59;
          MR_Word hlds__assertion___GoalInfoB_61;

          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
          if (hlds__assertion__succeeded)
            {
              hlds__assertion__V_45_45 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 3);
              hlds__assertion__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              hlds__assertion__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              hlds__assertion__NLVarsB_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__2_2, (MR_Integer) 2)));
              hlds__assertion__LVarsB_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__2_2, (MR_Integer) 3)));
              hlds__assertion__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__2_2, (MR_Integer) 4)));
              hlds__assertion__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__2_2, (MR_Integer) 5)));
              hlds__assertion__GoalB_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__HeadVar__2_2, (MR_Integer) 6)));
              hlds__assertion__succeeded = (hlds__assertion__Purity_26 == hlds__assertion__V_45_45);
              if (hlds__assertion__succeeded)
                {
                  hlds__assertion__succeeded = (hlds__assertion__Groundness_27 == hlds__assertion__V_46_46);
                  if (hlds__assertion__succeeded)
                    {
                      hlds__assertion__succeeded = (hlds__assertion__PredOrFunc_28 == hlds__assertion__V_47_47);
                      if (hlds__assertion__succeeded)
                        {
                          hlds__assertion__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);
                          if (hlds__assertion__succeeded)
                            {
                              hlds__assertion__TypeInfo_52_52 = (MR_Word) &hlds__assertion_scalar_common_1[5];
                              {
                                hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_52_52, ((MR_Box) (hlds__assertion__Modes_32)), ((MR_Box) (hlds__assertion__V_49_49)));
                              }
                              if (hlds__assertion__succeeded)
                                {
                                  hlds__assertion__succeeded = (hlds__assertion__Det_33 == hlds__assertion__V_50_50);
                                  if (hlds__assertion__succeeded)
                                    {
                                      {
                                        hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__NLVarsA_30, hlds__assertion__NLVarsB_35, hlds__assertion__STATE_VARIABLE_Subst_0_3, &hlds__assertion__STATE_VARIABLE_Subst_40_40);
                                      }
                                      if (hlds__assertion__succeeded)
                                        {
                                          {
                                            hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__LVarsA_31, hlds__assertion__LVarsB_36, hlds__assertion__STATE_VARIABLE_Subst_40_40, &hlds__assertion__STATE_VARIABLE_Subst_41_41);
                                          }
                                          if (hlds__assertion__succeeded)
                                            {
                                              hlds__assertion__GoalExprA_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalA_34, (MR_Integer) 0)));
                                              hlds__assertion___GoalInfoA_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalA_34, (MR_Integer) 1)));
                                              hlds__assertion__GoalExprB_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalB_37, (MR_Integer) 0)));
                                              hlds__assertion___GoalInfoB_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalB_37, (MR_Integer) 1)));
                                              {
                                                hlds__assertion__succeeded = hlds__assertion__equal_goal_exprs_4_p_0(hlds__assertion__GoalExprA_58, hlds__assertion__GoalExprB_60, hlds__assertion__STATE_VARIABLE_Subst_41_41, hlds__assertion__STATE_VARIABLE_Subst_4);
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
                {
                  hlds__assertion__succeeded = mercury__map__search_3_p_0(hlds__assertion__TypeInfo_12_24, hlds__assertion__TypeInfo_12_24, hlds__assertion__STATE_VARIABLE_Subst_0_3, ((MR_Box) (hlds__assertion__VA_8)), &hlds__assertion__conv0_SubstVA_22);
                }
                if (hlds__assertion__succeeded)
                  {
                    hlds__assertion__SubstVA_22 = ((MR_Word) hlds__assertion__conv0_SubstVA_22);
                    hlds__assertion__succeeded = MR_TRUE;
                  }
                if (hlds__assertion__succeeded)
                  {
                    {
                      hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__SubstVA_22)), ((MR_Box) (hlds__assertion__VB_10)));
                    }
                    if (hlds__assertion__succeeded)
                      {
                        hlds__assertion__STATE_VARIABLE_Subst_15_15 = hlds__assertion__STATE_VARIABLE_Subst_0_3;
                        hlds__assertion__succeeded = MR_TRUE;
                      }
                  }
                else
                  {
                    MR_Word hlds__assertion__TypeInfo_13_25 = (MR_Word) &hlds__assertion_scalar_common_1[0];

                    {
                      hlds__assertion__succeeded = mercury__map__insert_4_p_0(hlds__assertion__TypeInfo_13_25, hlds__assertion__TypeInfo_13_25, ((MR_Box) (hlds__assertion__VA_8)), ((MR_Box) (hlds__assertion__VB_10)), hlds__assertion__STATE_VARIABLE_Subst_0_3, &hlds__assertion__STATE_VARIABLE_Subst_15_15);
                    }
                  }
                if (hlds__assertion__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word hlds__assertion__HeadVar__1__tmp_copy_1 = hlds__assertion__VAs_9;
                      MR_Word hlds__assertion__HeadVar__2__tmp_copy_2 = hlds__assertion__VBs_11;
                      MR_Word hlds__assertion__STATE_VARIABLE_Subst_0__tmp_copy_3 = hlds__assertion__STATE_VARIABLE_Subst_15_15;

                      hlds__assertion__STATE_VARIABLE_Subst_0_3 = hlds__assertion__STATE_VARIABLE_Subst_0__tmp_copy_3;
                      hlds__assertion__HeadVar__2_2 = hlds__assertion__HeadVar__2__tmp_copy_2;
                      hlds__assertion__HeadVar__1_1 = hlds__assertion__HeadVar__1__tmp_copy_1;
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

    {
      hlds__assertion__succeeded = mercury__map__search_3_p_0(hlds__assertion__TypeInfo_12_12, hlds__assertion__TypeInfo_12_12, hlds__assertion__STATE_VARIABLE_Subst_0_9, ((MR_Box) (hlds__assertion__VA_5)), &hlds__assertion__conv0_SubstVA_8);
    }
    if (hlds__assertion__succeeded)
      {
        hlds__assertion__SubstVA_8 = ((MR_Word) hlds__assertion__conv0_SubstVA_8);
        hlds__assertion__succeeded = MR_TRUE;
      }
    if (hlds__assertion__succeeded)
      {
        {
          hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__SubstVA_8)), ((MR_Box) (hlds__assertion__VB_6)));
        }
        if (hlds__assertion__succeeded)
          {
            *hlds__assertion__STATE_VARIABLE_Subst_10 = hlds__assertion__STATE_VARIABLE_Subst_0_9;
            hlds__assertion__succeeded = MR_TRUE;
          }
      }
    else
      {
        MR_Word hlds__assertion__TypeInfo_13_13 = (MR_Word) &hlds__assertion_scalar_common_1[0];

        {
          hlds__assertion__succeeded = mercury__map__insert_4_p_0(hlds__assertion__TypeInfo_13_13, hlds__assertion__TypeInfo_13_13, ((MR_Box) (hlds__assertion__VA_5)), ((MR_Box) (hlds__assertion__VB_6)), hlds__assertion__STATE_VARIABLE_Subst_0_9, hlds__assertion__STATE_VARIABLE_Subst_10);
        }
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
    MR_Word hlds__assertion__GoalExprA_21;
    MR_Word hlds__assertion__GoalExprB_23;
    MR_Word hlds__assertion__GoalExprA_31;
    MR_Word hlds__assertion__GoalExprB_33;
    MR_Word hlds__assertion___GoalInfoA_22;
    MR_Word hlds__assertion___GoalInfoB_24;
    MR_Word hlds__assertion___GoalInfoA_32;
    MR_Word hlds__assertion___GoalInfoB_34;

    if (hlds__assertion__succeeded)
      {
        hlds__assertion__LeftGoalA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__ShortHandA_5, (MR_Integer) 0)));
        hlds__assertion__RightGoalA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__ShortHandA_5, (MR_Integer) 1)));
        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__ShortHandB_6)) == (MR_mktag((MR_Integer) 0)));
        if (hlds__assertion__succeeded)
          {
            hlds__assertion__LeftGoalB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__ShortHandB_6, (MR_Integer) 0)));
            hlds__assertion__RightGoalB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__ShortHandB_6, (MR_Integer) 1)));
            hlds__assertion__GoalExprA_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LeftGoalA_8, (MR_Integer) 0)));
            hlds__assertion___GoalInfoA_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LeftGoalA_8, (MR_Integer) 1)));
            hlds__assertion__GoalExprB_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LeftGoalB_10, (MR_Integer) 0)));
            hlds__assertion___GoalInfoB_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__LeftGoalB_10, (MR_Integer) 1)));
            {
              hlds__assertion__succeeded = hlds__assertion__equal_goal_exprs_4_p_0(hlds__assertion__GoalExprA_21, hlds__assertion__GoalExprB_23, hlds__assertion__STATE_VARIABLE_Subst_0_12, &hlds__assertion__STATE_VARIABLE_Subst_14_14);
            }
            if (hlds__assertion__succeeded)
              {
                hlds__assertion__GoalExprA_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__RightGoalA_9, (MR_Integer) 0)));
                hlds__assertion___GoalInfoA_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__RightGoalA_9, (MR_Integer) 1)));
                hlds__assertion__GoalExprB_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__RightGoalB_11, (MR_Integer) 0)));
                hlds__assertion___GoalInfoB_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__RightGoalB_11, (MR_Integer) 1)));
                {
                  hlds__assertion__succeeded = hlds__assertion__equal_goal_exprs_4_p_0(hlds__assertion__GoalExprA_31, hlds__assertion__GoalExprB_33, hlds__assertion__STATE_VARIABLE_Subst_14_14, hlds__assertion__STATE_VARIABLE_Subst_13);
                }
              }
          }
      }
    return hlds__assertion__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__assertion__equal_reason_4_p_0(
  MR_Word hlds__assertion__HeadVar__1_1,
  MR_Word hlds__assertion__HeadVar__2_2,
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_3,
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_4)
{
  {
    MR_bool hlds__assertion__succeeded;

    switch (MR_tag((MR_Word) hlds__assertion__HeadVar__1_1)) {
      default:
        hlds__assertion__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word hlds__assertion__VarsA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word hlds__assertion__VarsB_6;

          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
          if (hlds__assertion__succeeded)
            {
              hlds__assertion__VarsB_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)));
              {
                hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__VarsA_5, hlds__assertion__VarsB_6, hlds__assertion__STATE_VARIABLE_Subst_0_3, hlds__assertion__STATE_VARIABLE_Subst_4);
              }
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__1_1, (MR_Integer) 0)))) {
          default:
            hlds__assertion__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__assertion__ForcePruning_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word hlds__assertion__V_27_27;

              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (hlds__assertion__succeeded)
                {
                  hlds__assertion__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__2_2, (MR_Integer) 1)));
                  hlds__assertion__succeeded = (hlds__assertion__ForcePruning_15 == hlds__assertion__V_27_27);
                  if (hlds__assertion__succeeded)
                    {
                      *hlds__assertion__STATE_VARIABLE_Subst_4 = hlds__assertion__STATE_VARIABLE_Subst_0_3;
                      hlds__assertion__succeeded = MR_TRUE;
                    }
                }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__assertion__Removable_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word hlds__assertion__V_26_26;

              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (hlds__assertion__succeeded)
                {
                  hlds__assertion__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__2_2, (MR_Integer) 1)));
                  hlds__assertion__succeeded = (hlds__assertion__Removable_11 == hlds__assertion__V_26_26);
                  if (hlds__assertion__succeeded)
                    {
                      *hlds__assertion__STATE_VARIABLE_Subst_4 = hlds__assertion__STATE_VARIABLE_Subst_0_3;
                      hlds__assertion__succeeded = MR_TRUE;
                    }
                }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__assertion__VarA_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word hlds__assertion__Kind_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word hlds__assertion__VarB_21;
              MR_Word hlds__assertion__V_28_28;
              MR_Word hlds__assertion__SubstVA_34;
              MR_Word hlds__assertion__TypeInfo_12_36;
              MR_Box hlds__assertion__conv0_SubstVA_34;

              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (hlds__assertion__succeeded)
                {
                  hlds__assertion__VarB_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__2_2, (MR_Integer) 1)));
                  hlds__assertion__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__HeadVar__2_2, (MR_Integer) 2)));
                  hlds__assertion__succeeded = (hlds__assertion__Kind_20 == hlds__assertion__V_28_28);
                  if (hlds__assertion__succeeded)
                    {
                      hlds__assertion__TypeInfo_12_36 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                      {
                        hlds__assertion__succeeded = mercury__map__search_3_p_0(hlds__assertion__TypeInfo_12_36, hlds__assertion__TypeInfo_12_36, hlds__assertion__STATE_VARIABLE_Subst_0_3, ((MR_Box) (hlds__assertion__VarA_19)), &hlds__assertion__conv0_SubstVA_34);
                      }
                      if (hlds__assertion__succeeded)
                        {
                          hlds__assertion__SubstVA_34 = ((MR_Word) hlds__assertion__conv0_SubstVA_34);
                          hlds__assertion__succeeded = MR_TRUE;
                        }
                      if (hlds__assertion__succeeded)
                        {
                          {
                            hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__SubstVA_34)), ((MR_Box) (hlds__assertion__VarB_21)));
                          }
                          if (hlds__assertion__succeeded)
                            {
                              *hlds__assertion__STATE_VARIABLE_Subst_4 = hlds__assertion__STATE_VARIABLE_Subst_0_3;
                              hlds__assertion__succeeded = MR_TRUE;
                            }
                        }
                      else
                        {
                          MR_Word hlds__assertion__TypeInfo_13_37 = (MR_Word) &hlds__assertion_scalar_common_1[0];

                          {
                            hlds__assertion__succeeded = mercury__map__insert_4_p_0(hlds__assertion__TypeInfo_13_37, hlds__assertion__TypeInfo_13_37, ((MR_Box) (hlds__assertion__VarA_19)), ((MR_Box) (hlds__assertion__VarB_21)), hlds__assertion__STATE_VARIABLE_Subst_0_3, hlds__assertion__STATE_VARIABLE_Subst_4);
                          }
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

static MR_Box MR_CALL 
hlds__assertion__equal_goal_exprs_4_p_0_2(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1)
{
  {
    MR_Box hlds__assertion__wrapper_arg_2;
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;
    MR_Word hlds__assertion__conv1_HeadVar__2_2;

    {
      hlds__assertion__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__assertion__wrapper_arg_1));
    }
    hlds__assertion__wrapper_arg_2 = ((MR_Box) (hlds__assertion__conv1_HeadVar__2_2));
    return hlds__assertion__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__assertion__equal_goal_exprs_4_p_0_1(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1)
{
  {
    MR_Box hlds__assertion__wrapper_arg_2;
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;
    MR_Word hlds__assertion__conv0_HeadVar__2_2;

    {
      hlds__assertion__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__assertion__wrapper_arg_1));
    }
    hlds__assertion__wrapper_arg_2 = ((MR_Box) (hlds__assertion__conv0_HeadVar__2_2));
    return hlds__assertion__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
hlds__assertion__equal_goal_exprs_4_p_0(
  MR_Word hlds__assertion__GoalExprA_5,
  MR_Word hlds__assertion__GoalExprB_6,
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_68,
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_69)
{
  {
    MR_bool hlds__assertion__succeeded;

    switch (MR_tag((MR_Word) hlds__assertion__GoalExprA_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__assertion__SubGoalA_43 = (MR_Word) MR_body(((MR_Word) hlds__assertion__GoalExprA_5), (MR_Integer) 0);
          MR_Word hlds__assertion__SubGoalB_44;

          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 0)));
          if (hlds__assertion__succeeded)
            {
              hlds__assertion__SubGoalB_44 = (MR_Word) MR_body(((MR_Word) hlds__assertion__GoalExprB_6), (MR_Integer) 0);
              {
                hlds__assertion__succeeded = hlds__assertion__equal_goals_4_p_0(hlds__assertion__SubGoalA_43, hlds__assertion__SubGoalB_44, hlds__assertion__STATE_VARIABLE_Subst_0_68, hlds__assertion__STATE_VARIABLE_Subst_69);
              }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__assertion__VarA_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprA_5, (MR_Integer) 0)));
          MR_Word hlds__assertion__RHSA_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprA_5, (MR_Integer) 1)));
          MR_Word hlds__assertion__VarB_38;
          MR_Word hlds__assertion__RHSB_39;
          MR_Word hlds__assertion__STATE_VARIABLE_Subst_82_82;
          MR_Word hlds__assertion__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprA_5, (MR_Integer) 2)));
          MR_Word hlds__assertion__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprA_5, (MR_Integer) 3)));
          MR_Word hlds__assertion__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprA_5, (MR_Integer) 4)));
          MR_Word hlds__assertion__V_40_40;
          MR_Word hlds__assertion__V_41_41;
          MR_Word hlds__assertion__V_42_42;

          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 1)));
          if (hlds__assertion__succeeded)
            {
              hlds__assertion__VarB_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprB_6, (MR_Integer) 0)));
              hlds__assertion__RHSB_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprB_6, (MR_Integer) 1)));
              hlds__assertion__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprB_6, (MR_Integer) 2)));
              hlds__assertion__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprB_6, (MR_Integer) 3)));
              hlds__assertion__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExprB_6, (MR_Integer) 4)));
              {
                hlds__assertion__succeeded = hlds__assertion__equal_var_4_p_0(hlds__assertion__VarA_33, hlds__assertion__VarB_38, hlds__assertion__STATE_VARIABLE_Subst_0_68, &hlds__assertion__STATE_VARIABLE_Subst_82_82);
              }
              if (hlds__assertion__succeeded)
                {
                  hlds__assertion__succeeded = hlds__assertion__equal_unification_4_p_0(hlds__assertion__RHSA_34, hlds__assertion__RHSB_39, hlds__assertion__STATE_VARIABLE_Subst_82_82, hlds__assertion__STATE_VARIABLE_Subst_69);
                }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__assertion__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprA_5, (MR_Integer) 0)));
          MR_Word hlds__assertion__ArgVarsA_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprA_5, (MR_Integer) 2)));
          MR_Word hlds__assertion__ArgVarsB_18;
          MR_Word hlds__assertion__V_104_104;
          MR_Integer hlds__assertion__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprA_5, (MR_Integer) 1)));
          MR_Word hlds__assertion__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprA_5, (MR_Integer) 3)));
          MR_Word hlds__assertion__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprA_5, (MR_Integer) 4)));
          MR_Word hlds__assertion__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprA_5, (MR_Integer) 5)));
          MR_Integer hlds__assertion__V_17_17;
          MR_Word hlds__assertion__V_19_19;
          MR_Word hlds__assertion__V_20_20;
          MR_Word hlds__assertion__V_21_21;

          hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 2)));
          if (hlds__assertion__succeeded)
            {
              hlds__assertion__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprB_6, (MR_Integer) 0)));
              hlds__assertion__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprB_6, (MR_Integer) 1)));
              hlds__assertion__ArgVarsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprB_6, (MR_Integer) 2)));
              hlds__assertion__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprB_6, (MR_Integer) 3)));
              hlds__assertion__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprB_6, (MR_Integer) 4)));
              hlds__assertion__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__GoalExprB_6, (MR_Integer) 5)));
              {
                hlds__assertion__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__assertion__PredId_11, hlds__assertion__V_104_104);
              }
              if (hlds__assertion__succeeded)
                {
                  hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__ArgVarsA_13, hlds__assertion__ArgVarsB_18, hlds__assertion__STATE_VARIABLE_Subst_0_68, hlds__assertion__STATE_VARIABLE_Subst_69);
                }
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__assertion__CallDetails_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 1)));
              MR_Word hlds__assertion__ArgVarsA_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 2)));
              MR_Word hlds__assertion__ArgVarsB_89;
              MR_Word hlds__assertion__V_105_105;
              MR_Word hlds__assertion__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 3)));
              MR_Word hlds__assertion__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 4)));
              MR_Word hlds__assertion__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 5)));
              MR_Word hlds__assertion__V_26_26;
              MR_Word hlds__assertion__V_27_27;
              MR_Word hlds__assertion__V_28_28;

              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (hlds__assertion__succeeded)
                {
                  hlds__assertion__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 1)));
                  hlds__assertion__ArgVarsB_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 2)));
                  hlds__assertion__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 3)));
                  hlds__assertion__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 4)));
                  hlds__assertion__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 5)));
                  {
                    hlds__assertion__succeeded = hlds__hlds_goal____Unify____generic_call_0_0(hlds__assertion__CallDetails_22, hlds__assertion__V_105_105);
                  }
                  if (hlds__assertion__succeeded)
                    {
                      hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__ArgVarsA_88, hlds__assertion__ArgVarsB_89, hlds__assertion__STATE_VARIABLE_Subst_0_68, hlds__assertion__STATE_VARIABLE_Subst_69);
                    }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__assertion__TypeCtorInfo_97_97;
              MR_Word hlds__assertion__TypeInfo_98_98;
              MR_Word hlds__assertion__Attributes_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 1)));
              MR_Word hlds__assertion__ArgsA_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 4)));
              MR_Word hlds__assertion__ExtraA_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 5)));
              MR_Word hlds__assertion__MaybeTraceA_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 6)));
              MR_Word hlds__assertion__ArgsB_62;
              MR_Word hlds__assertion__ExtraB_63;
              MR_Word hlds__assertion__MaybeTraceB_64;
              MR_Word hlds__assertion__V_71_71;
              MR_Word hlds__assertion__V_72_72;
              MR_Word hlds__assertion__PredId_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 2)));
              MR_Word hlds__assertion__VarsA_95;
              MR_Word hlds__assertion__VarsB_96;
              MR_Word hlds__assertion__V_108_108;
              MR_Word hlds__assertion__V_109_109;
              MR_Integer hlds__assertion__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 3)));
              MR_Word hlds__assertion__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 7)));
              MR_Integer hlds__assertion__V_61_61;
              MR_Word hlds__assertion__V_65_65;

              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (hlds__assertion__succeeded)
                {
                  hlds__assertion__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 1)));
                  hlds__assertion__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 2)));
                  hlds__assertion__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 3)));
                  hlds__assertion__ArgsB_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 4)));
                  hlds__assertion__ExtraB_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 5)));
                  hlds__assertion__MaybeTraceB_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 6)));
                  hlds__assertion__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 7)));
                  {
                    hlds__assertion__succeeded = parse_tree__prog_data____Unify____pragma_foreign_proc_attributes_0_0(hlds__assertion__Attributes_55, hlds__assertion__V_108_108);
                  }
                  if (hlds__assertion__succeeded)
                    {
                      {
                        hlds__assertion__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__assertion__PredId_94, hlds__assertion__V_109_109);
                      }
                      if (hlds__assertion__succeeded)
                        {
                          hlds__assertion__succeeded = (hlds__assertion__ExtraA_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (hlds__assertion__succeeded)
                            {
                              hlds__assertion__succeeded = (hlds__assertion__ExtraB_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (hlds__assertion__succeeded)
                                {
                                  hlds__assertion__succeeded = (hlds__assertion__MaybeTraceA_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (hlds__assertion__succeeded)
                                    {
                                      hlds__assertion__succeeded = (hlds__assertion__MaybeTraceB_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      if (hlds__assertion__succeeded)
                                        {
                                          hlds__assertion__TypeCtorInfo_97_97 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
                                          hlds__assertion__TypeInfo_98_98 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                                          hlds__assertion__V_71_71 = (MR_Word) &hlds__assertion_scalar_common_2[7];
                                          {
                                            hlds__assertion__VarsA_95 = mercury__list__map_2_f_0(hlds__assertion__TypeCtorInfo_97_97, hlds__assertion__TypeInfo_98_98, hlds__assertion__V_71_71, hlds__assertion__ArgsA_57);
                                          }
                                          hlds__assertion__V_72_72 = (MR_Word) &hlds__assertion_scalar_common_2[8];
                                          {
                                            hlds__assertion__VarsB_96 = mercury__list__map_2_f_0(hlds__assertion__TypeCtorInfo_97_97, hlds__assertion__TypeInfo_98_98, hlds__assertion__V_72_72, hlds__assertion__ArgsB_62);
                                          }
                                          {
                                            hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__VarsA_95, hlds__assertion__VarsB_96, hlds__assertion__STATE_VARIABLE_Subst_0_68, hlds__assertion__STATE_VARIABLE_Subst_69);
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
          case (MR_Integer) 2:
            {
              MR_Word hlds__assertion__ConjType_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 1)));
              MR_Word hlds__assertion__GoalsA_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 2)));
              MR_Word hlds__assertion__GoalsB_10;
              MR_Word hlds__assertion__V_103_103;

              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (hlds__assertion__succeeded)
                {
                  hlds__assertion__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 1)));
                  hlds__assertion__GoalsB_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 2)));
                  hlds__assertion__succeeded = (hlds__assertion__ConjType_8 == hlds__assertion__V_103_103);
                  if (hlds__assertion__succeeded)
                    {
                      hlds__assertion__succeeded = hlds__assertion__equal_goals_list_4_p_0(hlds__assertion__GoalsA_9, hlds__assertion__GoalsB_10, hlds__assertion__STATE_VARIABLE_Subst_0_68, hlds__assertion__STATE_VARIABLE_Subst_69);
                    }
                }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__assertion__GoalsA_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 1)));
              MR_Word hlds__assertion__GoalsB_91;

              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (hlds__assertion__succeeded)
                {
                  hlds__assertion__GoalsB_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 1)));
                  {
                    hlds__assertion__succeeded = hlds__assertion__equal_goals_list_4_p_0(hlds__assertion__GoalsA_90, hlds__assertion__GoalsB_91, hlds__assertion__STATE_VARIABLE_Subst_0_68, hlds__assertion__STATE_VARIABLE_Subst_69);
                  }
                }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__assertion__TypeInfo_114_114;
              MR_Word hlds__assertion__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 1)));
              MR_Word hlds__assertion__CanFail_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 2)));
              MR_Word hlds__assertion__CasesA_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 3)));
              MR_Word hlds__assertion__CasesB_32;
              MR_Word hlds__assertion__V_106_106;
              MR_Word hlds__assertion__V_107_107;

              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (hlds__assertion__succeeded)
                {
                  hlds__assertion__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 1)));
                  hlds__assertion__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 2)));
                  hlds__assertion__CasesB_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 3)));
                  hlds__assertion__TypeInfo_114_114 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                  {
                    hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_114_114, ((MR_Box) (hlds__assertion__Var_29)), ((MR_Box) (hlds__assertion__V_106_106)));
                  }
                  if (hlds__assertion__succeeded)
                    {
                      hlds__assertion__succeeded = (hlds__assertion__CanFail_30 == hlds__assertion__V_107_107);
                      if (hlds__assertion__succeeded)
                        {
                          hlds__assertion__succeeded = hlds__assertion__equal_goals_cases_4_p_0(hlds__assertion__CasesA_31, hlds__assertion__CasesB_32, hlds__assertion__STATE_VARIABLE_Subst_0_68, hlds__assertion__STATE_VARIABLE_Subst_69);
                        }
                    }
                }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__assertion__ReasonA_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 1)));
              MR_Word hlds__assertion__ReasonB_46;
              MR_Word hlds__assertion__STATE_VARIABLE_Subst_78_78;
              MR_Word hlds__assertion__SubGoalA_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 2)));
              MR_Word hlds__assertion__SubGoalB_93;

              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (hlds__assertion__succeeded)
                {
                  hlds__assertion__ReasonB_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 1)));
                  hlds__assertion__SubGoalB_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 2)));
                  {
                    hlds__assertion__succeeded = hlds__assertion__equal_reason_4_p_0(hlds__assertion__ReasonA_45, hlds__assertion__ReasonB_46, hlds__assertion__STATE_VARIABLE_Subst_0_68, &hlds__assertion__STATE_VARIABLE_Subst_78_78);
                  }
                  if (hlds__assertion__succeeded)
                    {
                      hlds__assertion__succeeded = hlds__assertion__equal_goals_4_p_0(hlds__assertion__SubGoalA_92, hlds__assertion__SubGoalB_93, hlds__assertion__STATE_VARIABLE_Subst_78_78, hlds__assertion__STATE_VARIABLE_Subst_69);
                    }
                }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word hlds__assertion__VarsA_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 1)));
              MR_Word hlds__assertion__CondA_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 2)));
              MR_Word hlds__assertion__ThenA_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 3)));
              MR_Word hlds__assertion__ElseA_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 4)));
              MR_Word hlds__assertion__VarsB_51;
              MR_Word hlds__assertion__CondB_52;
              MR_Word hlds__assertion__ThenB_53;
              MR_Word hlds__assertion__ElseB_54;
              MR_Word hlds__assertion__STATE_VARIABLE_Subst_74_74;
              MR_Word hlds__assertion__STATE_VARIABLE_Subst_75_75;
              MR_Word hlds__assertion__STATE_VARIABLE_Subst_76_76;

              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (hlds__assertion__succeeded)
                {
                  hlds__assertion__VarsB_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 1)));
                  hlds__assertion__CondB_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 2)));
                  hlds__assertion__ThenB_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 3)));
                  hlds__assertion__ElseB_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 4)));
                  {
                    hlds__assertion__succeeded = hlds__assertion__equal_vars_4_p_0(hlds__assertion__VarsA_47, hlds__assertion__VarsB_51, hlds__assertion__STATE_VARIABLE_Subst_0_68, &hlds__assertion__STATE_VARIABLE_Subst_74_74);
                  }
                  if (hlds__assertion__succeeded)
                    {
                      {
                        hlds__assertion__succeeded = hlds__assertion__equal_goals_4_p_0(hlds__assertion__CondA_48, hlds__assertion__CondB_52, hlds__assertion__STATE_VARIABLE_Subst_74_74, &hlds__assertion__STATE_VARIABLE_Subst_75_75);
                      }
                      if (hlds__assertion__succeeded)
                        {
                          {
                            hlds__assertion__succeeded = hlds__assertion__equal_goals_4_p_0(hlds__assertion__ThenA_49, hlds__assertion__ThenB_53, hlds__assertion__STATE_VARIABLE_Subst_75_75, &hlds__assertion__STATE_VARIABLE_Subst_76_76);
                          }
                          if (hlds__assertion__succeeded)
                            {
                              hlds__assertion__succeeded = hlds__assertion__equal_goals_4_p_0(hlds__assertion__ElseA_50, hlds__assertion__ElseB_54, hlds__assertion__STATE_VARIABLE_Subst_76_76, hlds__assertion__STATE_VARIABLE_Subst_69);
                            }
                        }
                    }
                }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word hlds__assertion__ShortHandA_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprA_5, (MR_Integer) 1)));
              MR_Word hlds__assertion__ShortHandB_67;

              hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExprB_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (hlds__assertion__succeeded)
                {
                  hlds__assertion__ShortHandB_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExprB_6, (MR_Integer) 1)));
                  {
                    hlds__assertion__succeeded = hlds__assertion__equal_goals_shorthand_4_p_0(hlds__assertion__ShortHandA_66, hlds__assertion__ShortHandB_67, hlds__assertion__STATE_VARIABLE_Subst_0_68, hlds__assertion__STATE_VARIABLE_Subst_69);
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
hlds__assertion__equal_goals_4_p_0(
  MR_Word hlds__assertion__GoalA_5,
  MR_Word hlds__assertion__GoalB_6,
  MR_Word hlds__assertion__STATE_VARIABLE_Subst_0_12,
  MR_Word * hlds__assertion__STATE_VARIABLE_Subst_13)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Word hlds__assertion__GoalExprA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalA_5, (MR_Integer) 0)));
    MR_Word hlds__assertion__GoalExprB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalB_6, (MR_Integer) 0)));
    MR_Word hlds__assertion___GoalInfoA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalA_5, (MR_Integer) 1)));
    MR_Word hlds__assertion___GoalInfoB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__GoalB_6, (MR_Integer) 1)));

    {
      hlds__assertion__succeeded = hlds__assertion__equal_goal_exprs_4_p_0(hlds__assertion__GoalExprA_8, hlds__assertion__GoalExprB_10, hlds__assertion__STATE_VARIABLE_Subst_0_12, hlds__assertion__STATE_VARIABLE_Subst_13);
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
    MR_Word hlds__assertion__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_4, (MR_Integer) 0)));
    MR_Word hlds__assertion__V_18_18;
    MR_Word hlds__assertion__V_19_19;
    MR_Word hlds__assertion__V_20_20;
    MR_Word hlds__assertion__V_21_21;
    MR_Word hlds__assertion__GoalList_26;
    MR_Word hlds__assertion__GI_28;
    MR_Word hlds__assertion__NotQ_29;
    MR_Word hlds__assertion__Ps_30;
    MR_Word hlds__assertion__V_33_33;
    MR_Word hlds__assertion__V_34_34;
    MR_Word hlds__assertion__V_35_35;
    MR_Word hlds__assertion__V_36_36;
    MR_Word hlds__assertion__V_37_37;
    MR_Word hlds__assertion__V_42_42;
    MR_Word hlds__assertion__GoalList_47;
    MR_Word hlds__assertion__GI_49;
    MR_Word hlds__assertion__NotQ_50;
    MR_Word hlds__assertion__Ps_51;
    MR_Word hlds__assertion__V_54_54;
    MR_Word hlds__assertion__V_55_55;
    MR_Word hlds__assertion__V_56_56;
    MR_Word hlds__assertion__V_57_57;
    MR_Word hlds__assertion__V_58_58;
    MR_Word hlds__assertion__V_63_63;
    MR_Word hlds__assertion__GoalExprA_70;
    MR_Word hlds__assertion__GoalExprB_72;
    MR_Word hlds__assertion__GoalExprA_80;
    MR_Word hlds__assertion__GoalExprB_82;
    MR_Word hlds__assertion___GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_4, (MR_Integer) 1)));
    MR_Word hlds__assertion__V_27_27;
    MR_Word hlds__assertion__P0_31;
    MR_Word hlds__assertion__V_38_38;
    MR_Word hlds__assertion__V_32_32;
    MR_Word hlds__assertion__V_48_48;
    MR_Word hlds__assertion__P0_52;
    MR_Word hlds__assertion__V_59_59;
    MR_Word hlds__assertion__V_53_53;
    MR_Word hlds__assertion___GoalInfoA_71;
    MR_Word hlds__assertion___GoalInfoB_73;
    MR_Word hlds__assertion__V_15_15;
    MR_Word hlds__assertion___GoalInfoA_81;
    MR_Word hlds__assertion___GoalInfoB_83;
    MR_Word hlds__assertion__V_16_16;

    hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_17_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_17_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (hlds__assertion__succeeded)
      {
        hlds__assertion__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_17_17, (MR_Integer) 1)));
        hlds__assertion__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_17_17, (MR_Integer) 2)));
        hlds__assertion__succeeded = (hlds__assertion__V_18_18 == (MR_Integer) 0);
        if (hlds__assertion__succeeded)
          {
            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_19_19)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__assertion__succeeded)
              {
                hlds__assertion__A_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_19_19, (MR_Integer) 0)));
                hlds__assertion__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_19_19, (MR_Integer) 1)));
                hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_20_20)) == (MR_mktag((MR_Integer) 1)));
                if (hlds__assertion__succeeded)
                  {
                    hlds__assertion__B_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_20_20, (MR_Integer) 0)));
                    hlds__assertion__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_20_20, (MR_Integer) 1)));
                    hlds__assertion__succeeded = (hlds__assertion__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (hlds__assertion__succeeded)
                      {
                        hlds__assertion__TypeInfo_22_22 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                        {
                          mercury__map__init_1_p_0(hlds__assertion__TypeInfo_22_22, hlds__assertion__TypeInfo_22_22, &hlds__assertion__Subst_10);
                        }
                        hlds__assertion__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__A_7, (MR_Integer) 0)));
                        hlds__assertion__GI_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__A_7, (MR_Integer) 1)));
                        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_33_33)) == (MR_mktag((MR_Integer) 0)));
                        if (hlds__assertion__succeeded)
                          {
                            hlds__assertion__V_34_34 = (MR_Word) MR_body(((MR_Word) hlds__assertion__V_33_33), (MR_Integer) 0);
                            hlds__assertion__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_34_34, (MR_Integer) 0)));
                            hlds__assertion__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_34_34, (MR_Integer) 1)));
                            hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_35_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_35_35, (MR_Integer) 0)))) == (MR_Integer) 2)));
                            if (hlds__assertion__succeeded)
                              {
                                hlds__assertion__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_35_35, (MR_Integer) 1)));
                                hlds__assertion__GoalList_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_35_35, (MR_Integer) 2)));
                                hlds__assertion__succeeded = (hlds__assertion__V_36_36 == (MR_Integer) 0);
                                if (hlds__assertion__succeeded)
                                  {
                                    hlds__assertion__TypeCtorInfo_24_43 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                                    {
                                      hlds__assertion__V_37_37 = mercury__list__reverse_1_f_0(hlds__assertion__TypeCtorInfo_24_43, hlds__assertion__GoalList_26);
                                    }
                                    hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_37_37)) == (MR_mktag((MR_Integer) 1)));
                                    if (hlds__assertion__succeeded)
                                      {
                                        hlds__assertion__NotQ_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_37_37, (MR_Integer) 0)));
                                        hlds__assertion__Ps_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_37_37, (MR_Integer) 1)));
                                        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Ps_30)) == (MR_mktag((MR_Integer) 1)));
                                        if (hlds__assertion__succeeded)
                                          {
                                            hlds__assertion__P0_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Ps_30, (MR_Integer) 0)));
                                            hlds__assertion__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Ps_30, (MR_Integer) 1)));
                                            hlds__assertion__succeeded = (hlds__assertion__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                          }
                                        if (hlds__assertion__succeeded)
                                          *hlds__assertion__P_5 = hlds__assertion__P0_31;
                                        else
                                          {
                                            MR_Word hlds__assertion__V_39_39;
                                            MR_Word hlds__assertion__V_41_41;

                                            {
                                              hlds__assertion__V_41_41 = mercury__list__reverse_1_f_0(hlds__assertion__TypeCtorInfo_24_43, hlds__assertion__Ps_30);
                                            }
                                            {
                                              hlds__assertion__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                              MR_hl_field(MR_mktag(3), hlds__assertion__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                              MR_hl_field(MR_mktag(3), hlds__assertion__V_39_39, 1) = ((MR_Box) ((MR_Integer) 0));
                                              MR_hl_field(MR_mktag(3), hlds__assertion__V_39_39, 2) = ((MR_Box) (hlds__assertion__V_41_41));
                                            }
                                            {
                                              MR_Word base;
                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                              *hlds__assertion__P_5 = base;
                                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__assertion__V_39_39));
                                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__GI_28));
                                            }
                                          }
                                        hlds__assertion__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__NotQ_29, (MR_Integer) 0)));
                                        hlds__assertion__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__NotQ_29, (MR_Integer) 1)));
                                        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_42_42)) == (MR_mktag((MR_Integer) 0)));
                                        if (hlds__assertion__succeeded)
                                          {
                                            *hlds__assertion__Q_6 = (MR_Word) MR_body(((MR_Word) hlds__assertion__V_42_42), (MR_Integer) 0);
                                            hlds__assertion__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__B_8, (MR_Integer) 0)));
                                            hlds__assertion__GI_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__B_8, (MR_Integer) 1)));
                                            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_54_54)) == (MR_mktag((MR_Integer) 0)));
                                            if (hlds__assertion__succeeded)
                                              {
                                                hlds__assertion__V_55_55 = (MR_Word) MR_body(((MR_Word) hlds__assertion__V_54_54), (MR_Integer) 0);
                                                hlds__assertion__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_55_55, (MR_Integer) 0)));
                                                hlds__assertion__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_55_55, (MR_Integer) 1)));
                                                hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_56_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_56_56, (MR_Integer) 0)))) == (MR_Integer) 2)));
                                                if (hlds__assertion__succeeded)
                                                  {
                                                    hlds__assertion__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_56_56, (MR_Integer) 1)));
                                                    hlds__assertion__GoalList_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_56_56, (MR_Integer) 2)));
                                                    hlds__assertion__succeeded = (hlds__assertion__V_57_57 == (MR_Integer) 0);
                                                    if (hlds__assertion__succeeded)
                                                      {
                                                        hlds__assertion__TypeCtorInfo_24_64 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                                                        {
                                                          hlds__assertion__V_58_58 = mercury__list__reverse_1_f_0(hlds__assertion__TypeCtorInfo_24_64, hlds__assertion__GoalList_47);
                                                        }
                                                        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_58_58)) == (MR_mktag((MR_Integer) 1)));
                                                        if (hlds__assertion__succeeded)
                                                          {
                                                            hlds__assertion__NotQ_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_58_58, (MR_Integer) 0)));
                                                            hlds__assertion__Ps_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_58_58, (MR_Integer) 1)));
                                                            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Ps_51)) == (MR_mktag((MR_Integer) 1)));
                                                            if (hlds__assertion__succeeded)
                                                              {
                                                                hlds__assertion__P0_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Ps_51, (MR_Integer) 0)));
                                                                hlds__assertion__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Ps_51, (MR_Integer) 1)));
                                                                hlds__assertion__succeeded = (hlds__assertion__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                              }
                                                            if (hlds__assertion__succeeded)
                                                              hlds__assertion__QB_13 = hlds__assertion__P0_52;
                                                            else
                                                              {
                                                                MR_Word hlds__assertion__V_60_60;
                                                                MR_Word hlds__assertion__V_62_62;

                                                                {
                                                                  hlds__assertion__V_62_62 = mercury__list__reverse_1_f_0(hlds__assertion__TypeCtorInfo_24_64, hlds__assertion__Ps_51);
                                                                }
                                                                {
                                                                  hlds__assertion__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                                                  MR_hl_field(MR_mktag(3), hlds__assertion__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                                  MR_hl_field(MR_mktag(3), hlds__assertion__V_60_60, 1) = ((MR_Box) ((MR_Integer) 0));
                                                                  MR_hl_field(MR_mktag(3), hlds__assertion__V_60_60, 2) = ((MR_Box) (hlds__assertion__V_62_62));
                                                                }
                                                                {
                                                                  hlds__assertion__QB_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                                  MR_hl_field(MR_mktag(0), hlds__assertion__QB_13, 0) = ((MR_Box) (hlds__assertion__V_60_60));
                                                                  MR_hl_field(MR_mktag(0), hlds__assertion__QB_13, 1) = ((MR_Box) (hlds__assertion__GI_49));
                                                                }
                                                              }
                                                            hlds__assertion__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__NotQ_50, (MR_Integer) 0)));
                                                            hlds__assertion__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__NotQ_50, (MR_Integer) 1)));
                                                            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_63_63)) == (MR_mktag((MR_Integer) 0)));
                                                            if (hlds__assertion__succeeded)
                                                              {
                                                                hlds__assertion__PB_14 = (MR_Word) MR_body(((MR_Word) hlds__assertion__V_63_63), (MR_Integer) 0);
                                                                hlds__assertion__GoalExprA_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), *hlds__assertion__P_5, (MR_Integer) 0)));
                                                                hlds__assertion___GoalInfoA_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), *hlds__assertion__P_5, (MR_Integer) 1)));
                                                                hlds__assertion__GoalExprB_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__PB_14, (MR_Integer) 0)));
                                                                hlds__assertion___GoalInfoB_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__PB_14, (MR_Integer) 1)));
                                                                {
                                                                  hlds__assertion__succeeded = hlds__assertion__equal_goal_exprs_4_p_0(hlds__assertion__GoalExprA_70, hlds__assertion__GoalExprB_72, hlds__assertion__Subst_10, &hlds__assertion__V_15_15);
                                                                }
                                                                if (hlds__assertion__succeeded)
                                                                  {
                                                                    hlds__assertion__GoalExprA_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), *hlds__assertion__Q_6, (MR_Integer) 0)));
                                                                    hlds__assertion___GoalInfoA_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), *hlds__assertion__Q_6, (MR_Integer) 1)));
                                                                    hlds__assertion__GoalExprB_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__QB_13, (MR_Integer) 0)));
                                                                    hlds__assertion___GoalInfoB_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__QB_13, (MR_Integer) 1)));
                                                                    {
                                                                      hlds__assertion__succeeded = hlds__assertion__equal_goal_exprs_4_p_0(hlds__assertion__GoalExprA_80, hlds__assertion__GoalExprB_82, hlds__assertion__Subst_10, &hlds__assertion__V_16_16);
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
    return hlds__assertion__succeeded;
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

    {
      hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__predicate_call__415__1_1_p_0(((MR_Word) hlds__assertion__wrapper_arg_1));
    }
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
    {
      hlds__assertion__predicate_call_2_p_0_2(hlds__assertion__env_ptr);
    }
  }
}

static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_4(
  void * hlds__assertion__env_ptr_arg)
{
  {
    struct hlds__assertion__predicate_call_2_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__predicate_call_2_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

    (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__P_15 = (MR_Word) &hlds__assertion_scalar_common_2[6];
    (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_37_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__TypeCtorInfo_40_40, (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__P_15, (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Unifications_14, &(hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_42_42);
    }
    (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__TypeInfo_45_45 = (MR_Word) &hlds__assertion_scalar_common_1[4];
    {
      (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__TypeInfo_45_45, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_37_37)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_42_42)));
    }
    if ((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded)
      {
        hlds__assertion__predicate_call_2_p_0_1(hlds__assertion__env_ptr);
      }
  }
}

static void MR_CALL 
hlds__assertion__predicate_call_2_p_0_2(
  void * hlds__assertion__env_ptr_arg)
{
  {
    struct hlds__assertion__predicate_call_2_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__predicate_call_2_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

    {
      MR_Word hlds__assertion__V_13_13;
      MR_Integer hlds__assertion__V_8_8;
      MR_Word hlds__assertion__V_9_9;
      MR_Word hlds__assertion__V_10_10;
      MR_Word hlds__assertion__V_11_11;
      MR_Word hlds__assertion__V_12_12;

      (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Call_7, (MR_Integer) 0)));
      hlds__assertion__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Call_7, (MR_Integer) 1)));
      (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_34_34)) == (MR_mktag((MR_Integer) 2)));
      if ((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded)
        {
          {
            (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_34_34, (MR_Integer) 0)));
            hlds__assertion__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_34_34, (MR_Integer) 1)));
            hlds__assertion__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_34_34, (MR_Integer) 2)));
            hlds__assertion__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_34_34, (MR_Integer) 3)));
            hlds__assertion__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_34_34, (MR_Integer) 4)));
            hlds__assertion__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_34_34, (MR_Integer) 5)));
          }
          {
            {
              (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__PredId_4, (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__V_41_41);
            }
            if ((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__succeeded)
              {
                mercury__list__delete_3_p_1((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__TypeCtorInfo_40_40, (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Goals_5, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Call_7)), &(hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Unifications_14, hlds__assertion__predicate_call_2_p_0_4, hlds__assertion__env_ptr);
              }
          }
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
        {
          mercury__list__member_2_p_1((hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__TypeCtorInfo_40_40, &(hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__conv0_Call_7, (hlds__assertion__env_ptr)->hlds__assertion__predicate_call_2_p_0_env_0__Goals_5, hlds__assertion__predicate_call_2_p_0_3, hlds__assertion__env_ptr);
        }
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
      MR_Word hlds__assertion__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_3, (MR_Integer) 0)));
      MR_Word hlds__assertion__V_33_33;
      MR_Word hlds__assertion__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_3, (MR_Integer) 1)));

      (hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_32_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_32_32, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if ((hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded)
        {
          hlds__assertion__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_32_32, (MR_Integer) 1)));
          (hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__Goals_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_32_32, (MR_Integer) 2)));
          (hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded = (hlds__assertion__V_33_33 == (MR_Integer) 0);
        }
      if ((hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded)
        {
          {
            hlds__assertion__predicate_call_2_p_0_6(&hlds__assertion__env);
          }
        }
      else
        {
          MR_Word hlds__assertion__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_3, (MR_Integer) 0)));
          MR_Word hlds__assertion__V_43_43;
          MR_Word hlds__assertion__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_3, (MR_Integer) 1)));
          MR_Integer hlds__assertion__V_26_26;
          MR_Word hlds__assertion__V_27_27;
          MR_Word hlds__assertion__V_28_28;
          MR_Word hlds__assertion__V_29_29;
          MR_Word hlds__assertion__V_30_30;

          (hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_38_38)) == (MR_mktag((MR_Integer) 2)));
          if ((hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded)
            {
              hlds__assertion__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_38_38, (MR_Integer) 0)));
              hlds__assertion__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__V_38_38, (MR_Integer) 1)));
              hlds__assertion__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_38_38, (MR_Integer) 2)));
              hlds__assertion__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_38_38, (MR_Integer) 3)));
              hlds__assertion__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_38_38, (MR_Integer) 4)));
              hlds__assertion__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_38_38, (MR_Integer) 5)));
              {
                (hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__PredId_4, hlds__assertion__V_43_43);
              }
            }
        }
      return (hlds__assertion__env).hlds__assertion__predicate_call_2_p_0_env_0__succeeded;
    }
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
    MR_Word hlds__assertion__V_27_27;
    MR_Word hlds__assertion__V_28_28;
    MR_Word hlds__assertion__V_29_29;
    MR_Word hlds__assertion__V_30_30;
    MR_Word hlds__assertion__V_31_31;
    MR_Word hlds__assertion__V_32_32;
    MR_Word hlds__assertion__V_33_33;
    MR_Word hlds__assertion__V_36_36;
    MR_Word hlds__assertion__V_17_17;
    MR_Integer hlds__assertion__V_13_13;
    MR_Word hlds__assertion__V_14_14;
    MR_Word hlds__assertion__V_15_15;
    MR_Word hlds__assertion__V_16_16;
    MR_Word hlds__assertion__V_23_23;
    MR_Integer hlds__assertion__V_18_18;
    MR_Word hlds__assertion__V_20_20;
    MR_Word hlds__assertion__V_21_21;
    MR_Word hlds__assertion__V_22_22;

    if (hlds__assertion__succeeded)
      {
        hlds__assertion__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Goals_7, (MR_Integer) 0)));
        hlds__assertion__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Goals_7, (MR_Integer) 1)));
        hlds__assertion__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_27_27, (MR_Integer) 0)));
        hlds__assertion__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_27_27, (MR_Integer) 1)));
        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_28_28)) == (MR_mktag((MR_Integer) 2)));
        if (hlds__assertion__succeeded)
          {
            *hlds__assertion__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_28_28, (MR_Integer) 0)));
            hlds__assertion__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__V_28_28, (MR_Integer) 1)));
            *hlds__assertion__VarsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_28_28, (MR_Integer) 2)));
            hlds__assertion__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_28_28, (MR_Integer) 3)));
            hlds__assertion__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_28_28, (MR_Integer) 4)));
            hlds__assertion__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_28_28, (MR_Integer) 5)));
            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_29_29)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__assertion__succeeded)
              {
                hlds__assertion__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_29_29, (MR_Integer) 0)));
                hlds__assertion__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_29_29, (MR_Integer) 1)));
                hlds__assertion__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_30_30, (MR_Integer) 0)));
                hlds__assertion__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_30_30, (MR_Integer) 1)));
                hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_31_31)) == (MR_mktag((MR_Integer) 2)));
                if (hlds__assertion__succeeded)
                  {
                    hlds__assertion__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_31_31, (MR_Integer) 0)));
                    hlds__assertion__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__V_31_31, (MR_Integer) 1)));
                    hlds__assertion__VarsB_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_31_31, (MR_Integer) 2)));
                    hlds__assertion__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_31_31, (MR_Integer) 3)));
                    hlds__assertion__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_31_31, (MR_Integer) 4)));
                    hlds__assertion__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_31_31, (MR_Integer) 5)));
                    {
                      hlds__assertion__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(*hlds__assertion__PredId_9, hlds__assertion__V_36_36);
                    }
                    if (hlds__assertion__succeeded)
                      {
                        hlds__assertion__succeeded = (hlds__assertion__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (hlds__assertion__succeeded)
                          {
                            hlds__assertion__TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                            {
                              hlds__assertion__SetVarsA_24 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__assertion__TypeCtorInfo_34_34, *hlds__assertion__VarsA_12);
                            }
                            {
                              hlds__assertion__SetVarsB_25 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__assertion__TypeCtorInfo_34_34, hlds__assertion__VarsB_19);
                            }
                            {
                              hlds__assertion__CommonVars_26 = parse_tree__set_of_var__intersect_2_f_0(hlds__assertion__TypeCtorInfo_34_34, hlds__assertion__SetVarsA_24, hlds__assertion__SetVarsB_25);
                            }
                            {
                              hlds__assertion__V_33_33 = parse_tree__set_of_var__difference_2_f_0(hlds__assertion__TypeCtorInfo_34_34, hlds__assertion__CommonVars_26, hlds__assertion__UniversiallyQuantifiedVars_8);
                            }
                            {
                              hlds__assertion__succeeded = parse_tree__set_of_var__is_singleton_2_p_0(hlds__assertion__TypeCtorInfo_34_34, hlds__assertion__V_33_33, hlds__assertion__LinkingVar_10);
                            }
                            if (hlds__assertion__succeeded)
                              {
                                hlds__assertion__TypeInfo_35_35 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                                {
                                  mercury__assoc_list__from_corresponding_lists_3_p_0(hlds__assertion__TypeInfo_35_35, hlds__assertion__TypeInfo_35_35, *hlds__assertion__VarsA_12, hlds__assertion__VarsB_19, hlds__assertion__Vars_11);
                                }
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
hlds__assertion__update_5_p_0_7(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

    {
      hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__update__337__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 3))), ((MR_Word) hlds__assertion__wrapper_arg_1));
    }
    return hlds__assertion__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__assertion__update_5_p_0_6(
  MR_Box hlds__assertion__closure_arg,
  MR_Box hlds__assertion__wrapper_arg_1)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Box hlds__assertion__closure = hlds__assertion__closure_arg;

    {
      hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__update__335__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 3))), ((MR_Word) hlds__assertion__wrapper_arg_1));
    }
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

    {
      hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__update__324__1_1_p_0(((MR_Word) hlds__assertion__wrapper_arg_1));
    }
    return hlds__assertion__succeeded;
  }
}

static void MR_CALL 
hlds__assertion__update_5_p_0_5(
  void * hlds__assertion__env_ptr_arg)
{
  {
    struct hlds__assertion__update_5_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__update_5_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

    {
      MR_Word hlds__assertion___S0_29;
      MR_Word hlds__assertion___SA_30;

      (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_34_34)) == (MR_mktag((MR_Integer) 1)));
      if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
        {
          {
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_34_34, (MR_Integer) 0)));
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_34_34, (MR_Integer) 1)));
          }
          {
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_35_35, (MR_Integer) 0)));
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_35_35, (MR_Integer) 1)));
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__S0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_36_36, (MR_Integer) 0)));
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_36_36, (MR_Integer) 1)));
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_76_76 = (MR_Word) &hlds__assertion_scalar_common_1[0];
            {
              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_76_76, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__SA_15)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_65_65)));
            }
            if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
              {
                (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_37_37, (MR_Integer) 0)));
                (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_37_37, (MR_Integer) 1)));
                (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_77_77 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                {
                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_77_77, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__SB_18)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_66_66)));
                }
                if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
                  {
                    (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_78_78 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                    {
                      (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_78_78, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__S0_25)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_67_67)));
                    }
                    if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
                      {
                        (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_38_38)) == (MR_mktag((MR_Integer) 1)));
                        if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
                          {
                            {
                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_38_38, (MR_Integer) 0)));
                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_38_38, (MR_Integer) 1)));
                            }
                            {
                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_79_79 = (MR_Word) &hlds__assertion_scalar_common_1[2];
                              {
                                (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_79_79, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_42_42)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_68_68)));
                              }
                              if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
                                {
                                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_39_39, (MR_Integer) 0)));
                                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_39_39, (MR_Integer) 1)));
                                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_40_40, (MR_Integer) 0)));
                                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__S_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_40_40, (MR_Integer) 1)));
                                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_80_80 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                                  {
                                    (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_80_80, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__SA_15)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_69_69)));
                                  }
                                  if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
                                    {
                                      (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_41_41, (MR_Integer) 0)));
                                      (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_41_41, (MR_Integer) 1)));
                                      (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_81_81 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                                      {
                                        (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_81_81, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__S_26)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_70_70)));
                                      }
                                      if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
                                        {
                                          (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_82_82 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                                          {
                                            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_82_82, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__SB_18)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_71_71)));
                                          }
                                          if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
                                            {
                                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_63_63 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                                              {
                                                mercury__assoc_list__from_corresponding_lists_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_63_63, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_63_63, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Vs_17, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__CallVars_9, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__AssocList_27);
                                              }
                                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_47_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                              {
                                                MR_Word base;
                                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                                (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_43_43 = base;
                                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&hlds__assertion_scalar_common_5[0]));
                                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__update_5_p_0_6));
                                                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__S0_25));
                                              }
                                              {
                                                mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_61_61, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_43_43, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__AssocList_27, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_44_44);
                                              }
                                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_44_44)) == (MR_mktag((MR_Integer) 1)));
                                              if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
                                                {
                                                  {
                                                    (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_44_44, (MR_Integer) 0)));
                                                    (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_44_44, (MR_Integer) 1)));
                                                  }
                                                  {
                                                    (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_84_84 = (MR_Word) &hlds__assertion_scalar_common_1[3];
                                                    {
                                                      (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_84_84, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_47_47)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_72_72)));
                                                    }
                                                    if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
                                                      {
                                                        hlds__assertion___S0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_46_46, (MR_Integer) 0)));
                                                        (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__StateA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_46_46, (MR_Integer) 1)));
                                                        (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_52_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                        {
                                                          MR_Word base;
                                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                                          (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_48_48 = base;
                                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&hlds__assertion_scalar_common_5[0]));
                                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__update_5_p_0_7));
                                                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__SA_15));
                                                        }
                                                        {
                                                          mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_61_61, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_48_48, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__AssocList_27, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_49_49);
                                                        }
                                                        (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_49_49)) == (MR_mktag((MR_Integer) 1)));
                                                        if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
                                                          {
                                                            {
                                                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_49_49, (MR_Integer) 0)));
                                                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_49_49, (MR_Integer) 1)));
                                                            }
                                                            {
                                                              (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_86_86 = (MR_Word) &hlds__assertion_scalar_common_1[3];
                                                              {
                                                                (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_86_86, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_52_52)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_73_73)));
                                                              }
                                                              if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
                                                                {
                                                                  hlds__assertion___SA_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_51_51, (MR_Integer) 0)));
                                                                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__StateB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_51_51, (MR_Integer) 1)));
                                                                  {
                                                                    MR_Word base;
                                                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                                    *((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__HeadVar__5_5) = base;
                                                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__StateA_10));
                                                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__StateB_11));
                                                                  }
                                                                  {
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
      MR_Word hlds__assertion__V_20_20;

      {
        (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = hlds__assertion__process_two_linked_calls_6_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__LHSCalls_12, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__UniversiallyQuantifiedVars_8, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__PredId_14, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__SA_15, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__PairsL_16, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Vs_17);
      }
      if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
        {
          {
            (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = hlds__assertion__process_two_linked_calls_6_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__RHSCalls_13, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__UniversiallyQuantifiedVars_8, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_64_64, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__SB_18, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__PairsR_19, &hlds__assertion__V_20_20);
          }
          if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
            {
              {
                (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__PredId_14, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_64_64);
              }
              if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
                {
                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_61_61 = (MR_Word) &hlds__assertion_scalar_common_2[0];
                  {
                    mercury__assoc_list__from_corresponding_lists_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_61_61, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_61_61, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__PairsL_16, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__PairsR_19, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Pairs0_21);
                  }
                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_31_31 = (MR_Word) &hlds__assertion_scalar_common_2[5];
                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_62_62 = (MR_Word) &hlds__assertion_scalar_common_2[1];
                  {
                    mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_62_62, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_31_31, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Pairs0_21, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Pairs_24);
                  }
                  {
                    (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_33_33 = mercury__list__length_1_f_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_62_62, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Pairs_24);
                  }
                  (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded = ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_33_33 == (MR_Integer) 2);
                  if ((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__succeeded)
                    {
                      (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      {
                        mercury__list__perm_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeInfo_62_62, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__Pairs_24, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__V_34_34, hlds__assertion__update_5_p_0_5, hlds__assertion__env_ptr);
                      }
                    }
                }
            }
        }
    }
  }
}

static void MR_CALL 
hlds__assertion__update_5_p_0_2(
  void * hlds__assertion__env_ptr_arg)
{
  {
    struct hlds__assertion__update_5_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__update_5_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

    {
      mercury__list__perm_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeCtorInfo_13_95, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__QCalls_7, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__RHSCalls_13, hlds__assertion__update_5_p_0_1, hlds__assertion__env_ptr);
    }
  }
}

static void MR_CALL 
hlds__assertion__update_5_p_0_3(
  void * hlds__assertion__env_ptr_arg)
{
  {
    struct hlds__assertion__update_5_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__update_5_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

    {
      mercury__list__perm_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__TypeCtorInfo_14_96, (hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__QCalls_7, &(hlds__assertion__env_ptr)->hlds__assertion__update_5_p_0_env_0__LHSCalls_12, hlds__assertion__update_5_p_0_1, hlds__assertion__env_ptr);
    }
  }
}

static void MR_CALL 
hlds__assertion__update_5_p_0(
  MR_Word hlds__assertion__PCalls_6,
  MR_Word hlds__assertion__QCalls_7,
  MR_Word hlds__assertion__UniversiallyQuantifiedVars_8,
  MR_Word hlds__assertion__CallVars_9,
  MR_Word * hlds__assertion__HeadVar__5_5,
  MR_Cont hlds__assertion__cont,
  void * hlds__assertion__cont_env_ptr)
{
  {
    struct hlds__assertion__update_5_p_0_env_0_s hlds__assertion__env;

    (hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__QCalls_7 = hlds__assertion__QCalls_7;
    (hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__UniversiallyQuantifiedVars_8 = hlds__assertion__UniversiallyQuantifiedVars_8;
    (hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__CallVars_9 = hlds__assertion__CallVars_9;
    (hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__HeadVar__5_5 = hlds__assertion__HeadVar__5_5;
    (hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__cont = hlds__assertion__cont;
    (hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__cont_env_ptr = hlds__assertion__cont_env_ptr;
    {
      (hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__TypeCtorInfo_13_95 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
      {
        mercury__list__perm_2_p_0((hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__TypeCtorInfo_13_95, hlds__assertion__PCalls_6, &(hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__LHSCalls_12, hlds__assertion__update_5_p_0_2, &hlds__assertion__env);
      }
    }
    {
      (hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__TypeCtorInfo_14_96 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
      {
        mercury__list__perm_2_p_0((hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__TypeCtorInfo_14_96, hlds__assertion__PCalls_6, &(hlds__assertion__env).hlds__assertion__update_5_p_0_env_0__RHSCalls_13, hlds__assertion__update_5_p_0_3, &hlds__assertion__env);
      }
    }
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

    {
      hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__process_one_side__288__1_1_p_0(((MR_Word) hlds__assertion__wrapper_arg_1));
    }
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
    MR_Word hlds__assertion__V_16_16;
    MR_Integer hlds__assertion__V_18_18;
    MR_Integer hlds__assertion__V_22_22;
    MR_Word hlds__assertion__VarsB_36;
    MR_Word hlds__assertion__SetVarsA_41;
    MR_Word hlds__assertion__SetVarsB_42;
    MR_Word hlds__assertion__CommonVars_43;
    MR_Word hlds__assertion__V_44_44;
    MR_Word hlds__assertion__V_45_45;
    MR_Word hlds__assertion__V_46_46;
    MR_Word hlds__assertion__V_47_47;
    MR_Word hlds__assertion__V_48_48;
    MR_Word hlds__assertion__V_49_49;
    MR_Word hlds__assertion__V_50_50;
    MR_Word hlds__assertion__V_53_53;
    MR_Word hlds__assertion__V_34_34;
    MR_Integer hlds__assertion__V_30_30;
    MR_Word hlds__assertion__V_31_31;
    MR_Word hlds__assertion__V_32_32;
    MR_Word hlds__assertion__V_33_33;
    MR_Word hlds__assertion__V_40_40;
    MR_Integer hlds__assertion__V_35_35;
    MR_Word hlds__assertion__V_37_37;
    MR_Word hlds__assertion__V_38_38;
    MR_Word hlds__assertion__V_39_39;

    if (hlds__assertion__succeeded)
      {
        hlds__assertion__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Goals_7, (MR_Integer) 0)));
        hlds__assertion__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Goals_7, (MR_Integer) 1)));
        hlds__assertion__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_44_44, (MR_Integer) 0)));
        hlds__assertion__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_44_44, (MR_Integer) 1)));
        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_45_45)) == (MR_mktag((MR_Integer) 2)));
        if (hlds__assertion__succeeded)
          {
            *hlds__assertion__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_45_45, (MR_Integer) 0)));
            hlds__assertion__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__V_45_45, (MR_Integer) 1)));
            *hlds__assertion__VarsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_45_45, (MR_Integer) 2)));
            hlds__assertion__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_45_45, (MR_Integer) 3)));
            hlds__assertion__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_45_45, (MR_Integer) 4)));
            hlds__assertion__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_45_45, (MR_Integer) 5)));
            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_46_46)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__assertion__succeeded)
              {
                hlds__assertion__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_46_46, (MR_Integer) 0)));
                hlds__assertion__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__V_46_46, (MR_Integer) 1)));
                hlds__assertion__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_47_47, (MR_Integer) 0)));
                hlds__assertion__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_47_47, (MR_Integer) 1)));
                hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_48_48)) == (MR_mktag((MR_Integer) 2)));
                if (hlds__assertion__succeeded)
                  {
                    hlds__assertion__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_48_48, (MR_Integer) 0)));
                    hlds__assertion__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__V_48_48, (MR_Integer) 1)));
                    hlds__assertion__VarsB_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_48_48, (MR_Integer) 2)));
                    hlds__assertion__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_48_48, (MR_Integer) 3)));
                    hlds__assertion__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_48_48, (MR_Integer) 4)));
                    hlds__assertion__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_48_48, (MR_Integer) 5)));
                    {
                      hlds__assertion__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(*hlds__assertion__PredId_9, hlds__assertion__V_53_53);
                    }
                    if (hlds__assertion__succeeded)
                      {
                        hlds__assertion__succeeded = (hlds__assertion__V_49_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (hlds__assertion__succeeded)
                          {
                            hlds__assertion__TypeCtorInfo_34_51 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                            {
                              hlds__assertion__SetVarsA_41 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__assertion__TypeCtorInfo_34_51, *hlds__assertion__VarsA_12);
                            }
                            {
                              hlds__assertion__SetVarsB_42 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__assertion__TypeCtorInfo_34_51, hlds__assertion__VarsB_36);
                            }
                            {
                              hlds__assertion__CommonVars_43 = parse_tree__set_of_var__intersect_2_f_0(hlds__assertion__TypeCtorInfo_34_51, hlds__assertion__SetVarsA_41, hlds__assertion__SetVarsB_42);
                            }
                            {
                              hlds__assertion__V_50_50 = parse_tree__set_of_var__difference_2_f_0(hlds__assertion__TypeCtorInfo_34_51, hlds__assertion__CommonVars_43, hlds__assertion__UniversiallyQuantifiedVars_8);
                            }
                            {
                              hlds__assertion__succeeded = parse_tree__set_of_var__is_singleton_2_p_0(hlds__assertion__TypeCtorInfo_34_51, hlds__assertion__V_50_50, hlds__assertion__LinkingVar_10);
                            }
                            if (hlds__assertion__succeeded)
                              {
                                hlds__assertion__TypeInfo_35_52 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                                {
                                  mercury__assoc_list__from_corresponding_lists_3_p_0(hlds__assertion__TypeInfo_35_52, hlds__assertion__TypeInfo_35_52, *hlds__assertion__VarsA_12, hlds__assertion__VarsB_36, &hlds__assertion__Vars0_13);
                                }
                                hlds__assertion__V_16_16 = (MR_Word) &hlds__assertion_scalar_common_2[4];
                                hlds__assertion__TypeInfo_21_21 = (MR_Word) &hlds__assertion_scalar_common_2[0];
                                {
                                  mercury__list__filter_3_p_0(hlds__assertion__TypeInfo_21_21, hlds__assertion__V_16_16, hlds__assertion__Vars0_13, hlds__assertion__Vars_11);
                                }
                                hlds__assertion__V_18_18 = (MR_Integer) 3;
                                {
                                  mercury__list__length_2_p_0(hlds__assertion__TypeInfo_21_21, *hlds__assertion__Vars_11, &hlds__assertion__V_22_22);
                                }
                                hlds__assertion__succeeded = (hlds__assertion__V_18_18 == hlds__assertion__V_22_22);
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

    {
      mercury__list__perm_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__TypeCtorInfo_13_13, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__QCalls_2, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__RHSCalls_4, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__cont, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
hlds__assertion__reorder_4_p_0_2(
  void * hlds__assertion__env_ptr_arg)
{
  {
    struct hlds__assertion__reorder_4_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__reorder_4_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

    {
      mercury__list__perm_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__TypeCtorInfo_14_14, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__QCalls_2, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__LHSCalls_3, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__cont, (hlds__assertion__env_ptr)->hlds__assertion__reorder_4_p_0_env_0__cont_env_ptr);
    }
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
      MR_bool hlds__assertion__succeeded;

      (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
      {
        mercury__list__perm_2_p_0((hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__TypeCtorInfo_13_13, hlds__assertion__PCalls_1, (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__LHSCalls_3, hlds__assertion__reorder_4_p_0_1, &hlds__assertion__env);
      }
      (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
      {
        mercury__list__perm_2_p_0((hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__TypeCtorInfo_14_14, hlds__assertion__PCalls_1, (hlds__assertion__env).hlds__assertion__reorder_4_p_0_env_0__RHSCalls_4, hlds__assertion__reorder_4_p_0_2, &hlds__assertion__env);
      }
    }
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

    {
      hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__associative__250__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 3))), ((MR_Word) hlds__assertion__wrapper_arg_1));
    }
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

    {
      hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__associative__248__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 3))), ((MR_Word) hlds__assertion__wrapper_arg_1));
    }
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

    {
      hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__associative__246__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 3))), ((MR_Word) hlds__assertion__wrapper_arg_1));
    }
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
      MR_Word hlds__assertion___AB_30;
      MR_Word hlds__assertion___A_31;
      MR_Word hlds__assertion___B_32;

      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_34_34)) == (MR_mktag((MR_Integer) 1)));
      if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
        {
          {
            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_34_34, (MR_Integer) 0)));
            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_34_34, (MR_Integer) 1)));
          }
          {
            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_35_35, (MR_Integer) 0)));
            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_35_35, (MR_Integer) 1)));
            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__A_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_36_36, (MR_Integer) 0)));
            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_36_36, (MR_Integer) 1)));
            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_88_88 = (MR_Word) &hlds__assertion_scalar_common_1[0];
            {
              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_88_88, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AB_16)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_75_75)));
            }
            if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
              {
                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__B_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_37_37, (MR_Integer) 0)));
                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_37_37, (MR_Integer) 1)));
                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_89_89 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                {
                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_89_89, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__A_23)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_76_76)));
                }
                if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
                  {
                    (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_38_38)) == (MR_mktag((MR_Integer) 1)));
                    if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
                      {
                        {
                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_38_38, (MR_Integer) 0)));
                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_38_38, (MR_Integer) 1)));
                        }
                        {
                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_39_39, (MR_Integer) 0)));
                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_39_39, (MR_Integer) 1)));
                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_40_40, (MR_Integer) 0)));
                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__C_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_40_40, (MR_Integer) 1)));
                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_90_90 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                          {
                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_90_90, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__B_24)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_77_77)));
                          }
                          if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
                            {
                              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_41_41, (MR_Integer) 0)));
                              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_41_41, (MR_Integer) 1)));
                              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_91_91 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                              {
                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_91_91, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__C_25)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_78_78)));
                              }
                              if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
                                {
                                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_92_92 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                                  {
                                    (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_92_92, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__BC_19)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_79_79)));
                                  }
                                  if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
                                    {
                                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_42_42)) == (MR_mktag((MR_Integer) 1)));
                                      if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
                                        {
                                          {
                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_42_42, (MR_Integer) 0)));
                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_42_42, (MR_Integer) 1)));
                                          }
                                          {
                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_93_93 = (MR_Word) &hlds__assertion_scalar_common_1[2];
                                            {
                                              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_93_93, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_46_46)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_80_80)));
                                            }
                                            if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
                                              {
                                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_43_43, (MR_Integer) 0)));
                                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_43_43, (MR_Integer) 1)));
                                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_44_44, (MR_Integer) 0)));
                                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__ABC_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_44_44, (MR_Integer) 1)));
                                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_94_94 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                                                {
                                                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_94_94, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AB_16)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_81_81)));
                                                }
                                                if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
                                                  {
                                                    (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_45_45, (MR_Integer) 0)));
                                                    (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_45_45, (MR_Integer) 1)));
                                                    (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_95_95 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                                                    {
                                                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_95_95, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__BC_19)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_82_82)));
                                                    }
                                                    if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
                                                      {
                                                        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_96_96 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                                                        {
                                                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_96_96, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__ABC_26)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_83_83)));
                                                        }
                                                        if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
                                                          {
                                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_73_73 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                                                            {
                                                              mercury__assoc_list__from_corresponding_lists_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_73_73, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_73_73, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Vs_18, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__CallVars_9, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AssocList_27);
                                                            }
                                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                            {
                                                              MR_Word base;
                                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                                              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_47_47 = base;
                                                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&hlds__assertion_scalar_common_5[0]));
                                                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__associative_5_p_0_4));
                                                              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AB_16));
                                                            }
                                                            {
                                                              mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_71_71, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_47_47, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AssocList_27, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_48_48);
                                                            }
                                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_48_48)) == (MR_mktag((MR_Integer) 1)));
                                                            if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
                                                              {
                                                                {
                                                                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_48_48, (MR_Integer) 0)));
                                                                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_48_48, (MR_Integer) 1)));
                                                                }
                                                                {
                                                                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_98_98 = (MR_Word) &hlds__assertion_scalar_common_1[3];
                                                                  {
                                                                    (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_98_98, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_51_51)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_84_84)));
                                                                  }
                                                                  if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
                                                                    {
                                                                      hlds__assertion___AB_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_50_50, (MR_Integer) 0)));
                                                                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__OutputVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_50_50, (MR_Integer) 1)));
                                                                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_56_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                                      {
                                                                        MR_Word base;
                                                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                                                        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_52_52 = base;
                                                                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&hlds__assertion_scalar_common_5[0]));
                                                                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__associative_5_p_0_5));
                                                                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                                        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__A_23));
                                                                      }
                                                                      {
                                                                        mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_71_71, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_52_52, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AssocList_27, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_53_53);
                                                                      }
                                                                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_53_53)) == (MR_mktag((MR_Integer) 1)));
                                                                      if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
                                                                        {
                                                                          {
                                                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_53_53, (MR_Integer) 0)));
                                                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_53_53, (MR_Integer) 1)));
                                                                          }
                                                                          {
                                                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_100_100 = (MR_Word) &hlds__assertion_scalar_common_1[3];
                                                                            {
                                                                              (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_100_100, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_56_56)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_85_85)));
                                                                            }
                                                                            if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
                                                                              {
                                                                                hlds__assertion___A_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_55_55, (MR_Integer) 0)));
                                                                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__CallVarA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_55_55, (MR_Integer) 1)));
                                                                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_61_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                                                {
                                                                                  MR_Word base;
                                                                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                                                                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_57_57 = base;
                                                                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&hlds__assertion_scalar_common_5[0]));
                                                                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__associative_5_p_0_6));
                                                                                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                                                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__B_24));
                                                                                }
                                                                                {
                                                                                  mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_71_71, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_57_57, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AssocList_27, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_58_58);
                                                                                }
                                                                                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_58_58)) == (MR_mktag((MR_Integer) 1)));
                                                                                if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
                                                                                  {
                                                                                    {
                                                                                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_58_58, (MR_Integer) 0)));
                                                                                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_58_58, (MR_Integer) 1)));
                                                                                    }
                                                                                    {
                                                                                      (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_102_102 = (MR_Word) &hlds__assertion_scalar_common_1[3];
                                                                                      {
                                                                                        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_102_102, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_61_61)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_86_86)));
                                                                                      }
                                                                                      if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
                                                                                        {
                                                                                          hlds__assertion___B_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_60_60, (MR_Integer) 0)));
                                                                                          (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__CallVarB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_60_60, (MR_Integer) 1)));
                                                                                          {
                                                                                            MR_Word base;
                                                                                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                                                            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_33_33 = base;
                                                                                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__CallVarA_10));
                                                                                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__CallVarB_11));
                                                                                          }
                                                                                          {
                                                                                            MR_Word base;
                                                                                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                                                            *((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__HeadVar__5_5) = base;
                                                                                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_33_33));
                                                                                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__OutputVar_12));
                                                                                          }
                                                                                          {
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
      MR_Word hlds__assertion__V_21_21;

      {
        (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = hlds__assertion__process_one_side_6_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__LHSCalls_13, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__UniversiallyQuantifiedVars_8, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__PredId_15, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__AB_16, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__PairsL_17, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Vs_18);
      }
      if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
        {
          {
            (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = hlds__assertion__process_one_side_6_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__RHSCalls_14, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__UniversiallyQuantifiedVars_8, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_74_74, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__BC_19, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__PairsR_20, &hlds__assertion__V_21_21);
          }
          if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
            {
              {
                (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__PredId_15, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_74_74);
              }
              if ((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__succeeded)
                {
                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_71_71 = (MR_Word) &hlds__assertion_scalar_common_2[0];
                  {
                    mercury__assoc_list__from_corresponding_lists_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_71_71, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_71_71, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__PairsL_17, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__PairsR_20, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Pairs_22);
                  }
                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_72_72 = (MR_Word) &hlds__assertion_scalar_common_2[1];
                  {
                    mercury__list__perm_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__TypeInfo_72_72, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__Pairs_22, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__V_34_34, hlds__assertion__associative_5_p_0_3, hlds__assertion__env_ptr);
                  }
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
        {
          hlds__assertion__reorder_4_p_0((hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__PCalls_6, (hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__QCalls_7, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__LHSCalls_13, &(hlds__assertion__env_ptr)->hlds__assertion__associative_5_p_0_env_0__RHSCalls_14, hlds__assertion__associative_5_p_0_2, hlds__assertion__env_ptr);
        }
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
  MR_Word * hlds__assertion__HeadVar__5_5)
{
  {
    struct hlds__assertion__associative_5_p_0_env_0_s hlds__assertion__env;

    (hlds__assertion__env).hlds__assertion__associative_5_p_0_env_0__PCalls_6 = hlds__assertion__PCalls_6;
    (hlds__assertion__env).hlds__assertion__associative_5_p_0_env_0__QCalls_7 = hlds__assertion__QCalls_7;
    (hlds__assertion__env).hlds__assertion__associative_5_p_0_env_0__UniversiallyQuantifiedVars_8 = hlds__assertion__UniversiallyQuantifiedVars_8;
    (hlds__assertion__env).hlds__assertion__associative_5_p_0_env_0__CallVars_9 = hlds__assertion__CallVars_9;
    (hlds__assertion__env).hlds__assertion__associative_5_p_0_env_0__HeadVar__5_5 = hlds__assertion__HeadVar__5_5;
    {
      hlds__assertion__associative_5_p_0_7(&hlds__assertion__env);
    }
    return (hlds__assertion__env).hlds__assertion__associative_5_p_0_env_0__succeeded;
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
                    {
                      hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_16_16, ((MR_Box) (hlds__assertion__P_9)), ((MR_Box) (hlds__assertion__Q_11)));
                    }
                    if (hlds__assertion__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word hlds__assertion__HeadVar__3__tmp_copy_3 = hlds__assertion__Ps_10;
                          MR_Word hlds__assertion__HeadVar__4__tmp_copy_4 = hlds__assertion__Qs_12;
                          MR_Word hlds__assertion__HeadVar__5__tmp_copy_5 = hlds__assertion__Vs_14;

                          hlds__assertion__HeadVar__5_5 = hlds__assertion__HeadVar__5__tmp_copy_5;
                          hlds__assertion__HeadVar__4_4 = hlds__assertion__HeadVar__4__tmp_copy_4;
                          hlds__assertion__HeadVar__3_3 = hlds__assertion__HeadVar__3__tmp_copy_3;
                        }
                        continue;
                      }
                    else
                      {
                        MR_Word hlds__assertion__TypeInfo_18_18;
                        MR_Word hlds__assertion__TypeInfo_19_19;

                        *hlds__assertion__CallVarB_15 = hlds__assertion__V_13;
                        {
                          hlds__assertion__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__assertion_scalar_common_1[0], ((MR_Box) (hlds__assertion__P_9)), ((MR_Box) (hlds__assertion__VarQ_8)));
                        }
                        if (hlds__assertion__succeeded)
                          {
                            hlds__assertion__TypeInfo_18_18 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                            {
                              hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_18_18, ((MR_Box) (hlds__assertion__Q_11)), ((MR_Box) (hlds__assertion__VarP_7)));
                            }
                            if (hlds__assertion__succeeded)
                              {
                                hlds__assertion__TypeInfo_19_19 = (MR_Word) &hlds__assertion_scalar_common_1[1];
                                {
                                  hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_19_19, ((MR_Box) (hlds__assertion__Ps_10)), ((MR_Box) (hlds__assertion__Qs_12)));
                                }
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
        MR_Word hlds__assertion__TypeInfo_13_13;

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
                    hlds__assertion__TypeInfo_13_13 = (MR_Word) &hlds__assertion_scalar_common_1[0];
                    {
                      hlds__assertion__succeeded = mercury__builtin__unify_2_p_0(hlds__assertion__TypeInfo_13_13, ((MR_Box) (hlds__assertion__P_5)), ((MR_Box) (hlds__assertion__Q_7)));
                    }
                    if (hlds__assertion__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word hlds__assertion__HeadVar__1__tmp_copy_1 = hlds__assertion__Ps_6;
                          MR_Word hlds__assertion__HeadVar__2__tmp_copy_2 = hlds__assertion__Qs_8;
                          MR_Word hlds__assertion__HeadVar__3__tmp_copy_3 = hlds__assertion__Vs_10;

                          hlds__assertion__HeadVar__3_3 = hlds__assertion__HeadVar__3__tmp_copy_3;
                          hlds__assertion__HeadVar__2_2 = hlds__assertion__HeadVar__2__tmp_copy_2;
                          hlds__assertion__HeadVar__1_1 = hlds__assertion__HeadVar__1__tmp_copy_1;
                        }
                        continue;
                      }
                    else
                      {
                        MR_Word hlds__assertion__CallVarB_12;

                        {
                          hlds__assertion__succeeded = hlds__assertion__commutative_var_ordering_2_6_p_0(hlds__assertion__P_5, hlds__assertion__Q_7, hlds__assertion__Ps_6, hlds__assertion__Qs_8, hlds__assertion__Vs_10, &hlds__assertion__CallVarB_12);
                        }
                        if (hlds__assertion__succeeded)
                          {
                            {
                              MR_Word base;
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              *hlds__assertion__CommutativeVars_11 = base;
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__assertion__V_9));
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__CallVarB_12));
                            }
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

void MR_CALL 
hlds__assertion__normalise_goal_2_p_0(
  MR_Word hlds__assertion__Goal0_3,
  MR_Word * hlds__assertion__Goal_4)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Word hlds__assertion__GoalExpr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal0_3, (MR_Integer) 0)));
    MR_Word hlds__assertion__GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal0_3, (MR_Integer) 1)));
    MR_Word hlds__assertion__GoalExpr_7;

    {
      hlds__assertion__normalise_goal_expr_2_p_0(hlds__assertion__GoalExpr0_5, &hlds__assertion__GoalExpr_7);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__assertion__Goal_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__assertion__GoalExpr_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__GoalInfo_6));
    }
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

    {
      hlds__assertion__succeeded = hlds__assertion__IntroducedFrom__pred__predicate_call__415__1_1_p_0(((MR_Word) hlds__assertion__wrapper_arg_1));
    }
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
    {
      hlds__assertion__is_construction_equivalence_assertion_4_p_0_2(hlds__assertion__env_ptr);
    }
  }
}

static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_4(
  void * hlds__assertion__env_ptr_arg)
{
  {
    struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

    (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__P_42 = (MR_Word) &hlds__assertion_scalar_common_2[3];
    (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_64_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__list__filter_3_p_0((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeCtorInfo_40_67, (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__P_42, (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Unifications_41, &(hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_69_69);
    }
    (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeInfo_45_72 = (MR_Word) &hlds__assertion_scalar_common_1[4];
    {
      (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeInfo_45_72, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_64_64)), ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_69_69)));
    }
    if ((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
      {
        hlds__assertion__is_construction_equivalence_assertion_4_p_0_1(hlds__assertion__env_ptr);
      }
  }
}

static void MR_CALL 
hlds__assertion__is_construction_equivalence_assertion_4_p_0_2(
  void * hlds__assertion__env_ptr_arg)
{
  {
    struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s * hlds__assertion__env_ptr = (struct hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0_s *) hlds__assertion__env_ptr_arg;

    {
      MR_Word hlds__assertion__V_40_40;
      MR_Integer hlds__assertion__V_35_35;
      MR_Word hlds__assertion__V_36_36;
      MR_Word hlds__assertion__V_37_37;
      MR_Word hlds__assertion__V_38_38;
      MR_Word hlds__assertion__V_39_39;

      (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Call_34, (MR_Integer) 0)));
      hlds__assertion__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Call_34, (MR_Integer) 1)));
      (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_61_61)) == (MR_mktag((MR_Integer) 2)));
      if ((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
        {
          {
            (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_61_61, (MR_Integer) 0)));
            hlds__assertion__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_61_61, (MR_Integer) 1)));
            hlds__assertion__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_61_61, (MR_Integer) 2)));
            hlds__assertion__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_61_61, (MR_Integer) 3)));
            hlds__assertion__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_61_61, (MR_Integer) 4)));
            hlds__assertion__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_61_61, (MR_Integer) 5)));
          }
          {
            {
              (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__PredId_8, (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__V_68_68);
            }
            if ((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
              {
                mercury__list__delete_3_p_1((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeCtorInfo_40_67, (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Goals_32, ((MR_Box) ((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Call_34)), &(hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Unifications_41, hlds__assertion__is_construction_equivalence_assertion_4_p_0_4, hlds__assertion__env_ptr);
              }
          }
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
        {
          mercury__list__member_2_p_1((hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__TypeCtorInfo_40_67, &(hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__conv0_Call_34, (hlds__assertion__env_ptr)->hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Goals_32, hlds__assertion__is_construction_equivalence_assertion_4_p_0_3, hlds__assertion__env_ptr);
        }
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
      MR_Word hlds__assertion__V_28_28;
      MR_Integer hlds__assertion__V_29_29;
      MR_Word hlds__assertion__V_15_15;
      MR_Word hlds__assertion__V_16_16;
      MR_Word hlds__assertion__V_18_18;
      MR_Word hlds__assertion__V_19_19;
      MR_Word hlds__assertion__V_20_20;
      MR_Word hlds__assertion__V_24_24;
      MR_Word hlds__assertion__V_25_25;
      MR_Word hlds__assertion___TypeCtorA_23;
      MR_Word hlds__assertion___TypeCtorB_27;

      {
        hlds__assertion__assert_id_goal_3_p_0(hlds__assertion__Module_5, hlds__assertion__AssertId_6, &hlds__assertion__Goal_9);
      }
      {
        (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = hlds__assertion__goal_is_equivalence_3_p_0(hlds__assertion__Goal_9, &hlds__assertion__P_10, &hlds__assertion__Q_11);
      }
      if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
        {
          hlds__assertion__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_10, (MR_Integer) 0)));
          hlds__assertion__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_10, (MR_Integer) 1)));
          (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__assertion__GoalExpr_14)) == (MR_mktag((MR_Integer) 1)));
          if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
            {
              hlds__assertion__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_14, (MR_Integer) 0)));
              hlds__assertion__UnifyRHS_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_14, (MR_Integer) 1)));
              hlds__assertion__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_14, (MR_Integer) 2)));
              hlds__assertion__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_14, (MR_Integer) 3)));
              hlds__assertion__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_14, (MR_Integer) 4)));
              (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__assertion__UnifyRHS_17)) == (MR_mktag((MR_Integer) 1)));
              if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
                {
                  hlds__assertion__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRHS_17, (MR_Integer) 0)));
                  hlds__assertion__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRHS_17, (MR_Integer) 1)));
                  hlds__assertion__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRHS_17, (MR_Integer) 2)));
                  (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_28_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_28_28, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
                    {
                      hlds__assertion__UnqualifiedSymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_28_28, (MR_Integer) 1)));
                      hlds__assertion__Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__assertion__V_28_28, (MR_Integer) 2)));
                      hlds__assertion___TypeCtorA_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_28_28, (MR_Integer) 3)));
                      (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__assertion__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
                      if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
                        {
                          hlds__assertion__QualifiedSymName_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 1)));
                          hlds__assertion__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 2)));
                          hlds__assertion___TypeCtorB_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 3)));
                          (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = (hlds__assertion__Arity_22 == hlds__assertion__V_29_29);
                          if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
                            {
                              (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(hlds__assertion__UnqualifiedSymName_21, hlds__assertion__QualifiedSymName_26);
                            }
                        }
                    }
                }
            }
          if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
            {
              MR_Word hlds__assertion__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 0)));
              MR_Word hlds__assertion__V_60_60;
              MR_Word hlds__assertion__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 1)));

              (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_59_59)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_59_59, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
                {
                  hlds__assertion__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_59_59, (MR_Integer) 1)));
                  (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__Goals_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_59_59, (MR_Integer) 2)));
                  (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = (hlds__assertion__V_60_60 == (MR_Integer) 0);
                }
              if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
                {
                  {
                    hlds__assertion__is_construction_equivalence_assertion_4_p_0_6(&hlds__assertion__env);
                  }
                }
              else
                {
                  MR_Word hlds__assertion__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 0)));
                  MR_Word hlds__assertion__V_70_70;
                  MR_Word hlds__assertion__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 1)));
                  MR_Integer hlds__assertion__V_53_53;
                  MR_Word hlds__assertion__V_54_54;
                  MR_Word hlds__assertion__V_55_55;
                  MR_Word hlds__assertion__V_56_56;
                  MR_Word hlds__assertion__V_57_57;

                  (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_65_65)) == (MR_mktag((MR_Integer) 2)));
                  if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
                    {
                      hlds__assertion__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_65_65, (MR_Integer) 0)));
                      hlds__assertion__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__V_65_65, (MR_Integer) 1)));
                      hlds__assertion__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_65_65, (MR_Integer) 2)));
                      hlds__assertion__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_65_65, (MR_Integer) 3)));
                      hlds__assertion__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_65_65, (MR_Integer) 4)));
                      hlds__assertion__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_65_65, (MR_Integer) 5)));
                      {
                        (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__PredId_8, hlds__assertion__V_70_70);
                      }
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
              MR_Word hlds__assertion__V_90_90;
              MR_Integer hlds__assertion__V_91_91;
              MR_Word hlds__assertion__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 1)));
              MR_Word hlds__assertion__V_78_78;
              MR_Word hlds__assertion__V_80_80;
              MR_Word hlds__assertion__V_81_81;
              MR_Word hlds__assertion__V_82_82;
              MR_Word hlds__assertion__V_86_86;
              MR_Word hlds__assertion__V_87_87;
              MR_Word hlds__assertion___TypeCtorA_85;
              MR_Word hlds__assertion___TypeCtorB_89;

              (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__assertion__GoalExpr_76)) == (MR_mktag((MR_Integer) 1)));
              if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
                {
                  hlds__assertion__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_76, (MR_Integer) 0)));
                  hlds__assertion__UnifyRHS_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_76, (MR_Integer) 1)));
                  hlds__assertion__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_76, (MR_Integer) 2)));
                  hlds__assertion__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_76, (MR_Integer) 3)));
                  hlds__assertion__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__GoalExpr_76, (MR_Integer) 4)));
                  (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__assertion__UnifyRHS_79)) == (MR_mktag((MR_Integer) 1)));
                  if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
                    {
                      hlds__assertion__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRHS_79, (MR_Integer) 0)));
                      hlds__assertion__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRHS_79, (MR_Integer) 1)));
                      hlds__assertion__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__UnifyRHS_79, (MR_Integer) 2)));
                      (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_90_90)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_90_90, (MR_Integer) 0)))) == (MR_Integer) 2)));
                      if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
                        {
                          hlds__assertion__UnqualifiedSymName_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_90_90, (MR_Integer) 1)));
                          hlds__assertion__Arity_84 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__assertion__V_90_90, (MR_Integer) 2)));
                          hlds__assertion___TypeCtorA_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_90_90, (MR_Integer) 3)));
                          (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__assertion__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
                          if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
                            {
                              hlds__assertion__QualifiedSymName_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 1)));
                              hlds__assertion__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 2)));
                              hlds__assertion___TypeCtorB_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__ConsId_7, (MR_Integer) 3)));
                              (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = (hlds__assertion__Arity_84 == hlds__assertion__V_91_91);
                              if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
                                {
                                  {
                                    (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(hlds__assertion__UnqualifiedSymName_83, hlds__assertion__QualifiedSymName_88);
                                  }
                                  if ((hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded)
                                    {
                                      (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__succeeded = hlds__assertion__predicate_call_2_p_0(hlds__assertion__P_10, (hlds__assertion__env).hlds__assertion__is_construction_equivalence_assertion_4_p_0_env_0__PredId_8);
                                    }
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

MR_bool MR_CALL 
hlds__assertion__is_update_assertion_5_p_0(
  MR_Word hlds__assertion__Module_6,
  MR_Integer hlds__assertion__AssertId_7,
  MR_Word hlds__assertion___PredId_8,
  MR_Word hlds__assertion__CallVars_9,
  MR_Word * hlds__assertion__HeadVar__5_5)
{
  {
    MR_bool hlds__assertion__succeeded;

    {
      hlds__assertion__succeeded = hlds__assertion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_p_0(hlds__assertion__Module_6, hlds__assertion__AssertId_7, hlds__assertion__CallVars_9, hlds__assertion__HeadVar__5_5);
    }
    return hlds__assertion__succeeded;
  }
}

MR_bool MR_CALL 
hlds__assertion__is_associativity_assertion_5_p_0(
  MR_Word hlds__assertion__Module_6,
  MR_Integer hlds__assertion__AssertId_7,
  MR_Word hlds__assertion__CallVars_8,
  MR_Word * hlds__assertion__AssociativeVars_9,
  MR_Word * hlds__assertion__OutputVar_10)
{
  {
    MR_bool hlds__assertion__succeeded;
    MR_Word hlds__assertion__GoalInfo_12;
    MR_Word hlds__assertion__P_13;
    MR_Word hlds__assertion__Q_14;
    MR_Word hlds__assertion__UniversiallyQuantifiedVars_15;
    MR_Word hlds__assertion__PCalls_16;
    MR_Word hlds__assertion__QCalls_17;
    MR_Word hlds__assertion__V_18_18;
    MR_Word hlds__assertion__Goal_23;
    MR_Word hlds__assertion__V_25_25;
    MR_Word hlds__assertion__V_26_26;
    MR_Word hlds__assertion__GoalExpr0_29;
    MR_Word hlds__assertion__Goal_36;
    MR_Word hlds__assertion__V_38_38;
    MR_Word hlds__assertion__V_39_39;
    MR_Word hlds__assertion__GoalExpr0_42;
    MR_Word hlds__assertion__GoalExpr_11;
    MR_Word hlds__assertion___Context_30;
    MR_Word hlds__assertion__Goal1_32;
    MR_Word hlds__assertion__Reason_31;
    MR_Word hlds__assertion__V_33_33;
    MR_Word hlds__assertion__V_24_24;
    MR_Word hlds__assertion___Context_43;
    MR_Word hlds__assertion__Goal1_45;
    MR_Word hlds__assertion__Reason_44;
    MR_Word hlds__assertion__V_46_46;
    MR_Word hlds__assertion__V_37_37;
    MR_Word hlds__assertion__V_20_20;

    {
      hlds__assertion__assert_id_goal_3_p_0(hlds__assertion__Module_6, hlds__assertion__AssertId_7, &hlds__assertion__V_18_18);
    }
    hlds__assertion__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_18_18, (MR_Integer) 0)));
    hlds__assertion__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_18_18, (MR_Integer) 1)));
    {
      hlds__assertion__succeeded = hlds__assertion__goal_is_equivalence_3_p_0(hlds__assertion__V_18_18, &hlds__assertion__P_13, &hlds__assertion__Q_14);
    }
    if (hlds__assertion__succeeded)
      {
        {
          hlds__assertion__UniversiallyQuantifiedVars_15 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__assertion__GoalInfo_12);
        }
        hlds__assertion__GoalExpr0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_13, (MR_Integer) 0)));
        hlds__assertion___Context_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_13, (MR_Integer) 1)));
        hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExpr0_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_29, (MR_Integer) 0)))) == (MR_Integer) 5)));
        if (hlds__assertion__succeeded)
          {
            hlds__assertion__Reason_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_29, (MR_Integer) 1)));
            hlds__assertion__Goal1_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_29, (MR_Integer) 2)));
            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Reason_31)) == (MR_mktag((MR_Integer) 0)));
            if (hlds__assertion__succeeded)
              hlds__assertion__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Reason_31, (MR_Integer) 0)));
          }
        if (hlds__assertion__succeeded)
          hlds__assertion__Goal_23 = hlds__assertion__Goal1_32;
        else
          hlds__assertion__Goal_23 = hlds__assertion__P_13;
        hlds__assertion__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_23, (MR_Integer) 0)));
        hlds__assertion__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_23, (MR_Integer) 1)));
        hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_25_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_25_25, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (hlds__assertion__succeeded)
          {
            hlds__assertion__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_25_25, (MR_Integer) 1)));
            hlds__assertion__PCalls_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_25_25, (MR_Integer) 2)));
            hlds__assertion__succeeded = (hlds__assertion__V_26_26 == (MR_Integer) 0);
            if (hlds__assertion__succeeded)
              {
                hlds__assertion__GoalExpr0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_14, (MR_Integer) 0)));
                hlds__assertion___Context_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_14, (MR_Integer) 1)));
                hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__GoalExpr0_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_42, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (hlds__assertion__succeeded)
                  {
                    hlds__assertion__Reason_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_42, (MR_Integer) 1)));
                    hlds__assertion__Goal1_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__GoalExpr0_42, (MR_Integer) 2)));
                    hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__Reason_44)) == (MR_mktag((MR_Integer) 0)));
                    if (hlds__assertion__succeeded)
                      hlds__assertion__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Reason_44, (MR_Integer) 0)));
                  }
                if (hlds__assertion__succeeded)
                  hlds__assertion__Goal_36 = hlds__assertion__Goal1_45;
                else
                  hlds__assertion__Goal_36 = hlds__assertion__Q_14;
                hlds__assertion__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_36, (MR_Integer) 0)));
                hlds__assertion__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal_36, (MR_Integer) 1)));
                hlds__assertion__succeeded = ((((MR_tag((MR_Word) hlds__assertion__V_38_38)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_38_38, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (hlds__assertion__succeeded)
                  {
                    hlds__assertion__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_38_38, (MR_Integer) 1)));
                    hlds__assertion__QCalls_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__assertion__V_38_38, (MR_Integer) 2)));
                    hlds__assertion__succeeded = (hlds__assertion__V_39_39 == (MR_Integer) 0);
                    if (hlds__assertion__succeeded)
                      {
                        {
                          hlds__assertion__succeeded = hlds__assertion__associative_5_p_0(hlds__assertion__PCalls_16, hlds__assertion__QCalls_17, hlds__assertion__UniversiallyQuantifiedVars_15, hlds__assertion__CallVars_8, &hlds__assertion__V_20_20);
                        }
                        if (hlds__assertion__succeeded)
                          {
                            *hlds__assertion__AssociativeVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_20_20, (MR_Integer) 0)));
                            *hlds__assertion__OutputVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__V_20_20, (MR_Integer) 1)));
                            hlds__assertion__succeeded = MR_TRUE;
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
    MR_Word hlds__assertion__V_25_25;
    MR_Word hlds__assertion__V_26_26;
    MR_Word hlds__assertion__V_27_27;
    MR_Word hlds__assertion__V_18_18;
    MR_Integer hlds__assertion__V_13_13;
    MR_Word hlds__assertion__V_15_15;
    MR_Word hlds__assertion__V_16_16;
    MR_Word hlds__assertion__V_17_17;
    MR_Word hlds__assertion__V_24_24;
    MR_Integer hlds__assertion__V_19_19;
    MR_Word hlds__assertion__V_21_21;
    MR_Word hlds__assertion__V_22_22;
    MR_Word hlds__assertion__V_23_23;

    {
      hlds__assertion__assert_id_goal_3_p_0(hlds__assertion__Module_5, hlds__assertion__AssertId_6, &hlds__assertion__Goal_9);
    }
    {
      hlds__assertion__succeeded = hlds__assertion__goal_is_equivalence_3_p_0(hlds__assertion__Goal_9, &hlds__assertion__P_10, &hlds__assertion__Q_11);
    }
    if (hlds__assertion__succeeded)
      {
        hlds__assertion__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_10, (MR_Integer) 0)));
        hlds__assertion__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__P_10, (MR_Integer) 1)));
        hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_25_25)) == (MR_mktag((MR_Integer) 2)));
        if (hlds__assertion__succeeded)
          {
            hlds__assertion__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_25_25, (MR_Integer) 0)));
            hlds__assertion__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__V_25_25, (MR_Integer) 1)));
            hlds__assertion__VarsP_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_25_25, (MR_Integer) 2)));
            hlds__assertion__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_25_25, (MR_Integer) 3)));
            hlds__assertion__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_25_25, (MR_Integer) 4)));
            hlds__assertion__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_25_25, (MR_Integer) 5)));
            hlds__assertion__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 0)));
            hlds__assertion__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Q_11, (MR_Integer) 1)));
            hlds__assertion__succeeded = ((MR_tag((MR_Word) hlds__assertion__V_26_26)) == (MR_mktag((MR_Integer) 2)));
            if (hlds__assertion__succeeded)
              {
                hlds__assertion__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_26_26, (MR_Integer) 0)));
                hlds__assertion__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__assertion__V_26_26, (MR_Integer) 1)));
                hlds__assertion__VarsQ_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_26_26, (MR_Integer) 2)));
                hlds__assertion__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_26_26, (MR_Integer) 3)));
                hlds__assertion__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_26_26, (MR_Integer) 4)));
                hlds__assertion__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__assertion__V_26_26, (MR_Integer) 5)));
                {
                  hlds__assertion__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__assertion__PredId_12, hlds__assertion__V_27_27);
                }
                if (hlds__assertion__succeeded)
                  {
                    hlds__assertion__succeeded = hlds__assertion__commutative_var_ordering_4_p_0(hlds__assertion__VarsP_14, hlds__assertion__VarsQ_20, hlds__assertion__CallVars_7, hlds__assertion__CommutativeVars_8);
                  }
              }
          }
      }
    return hlds__assertion__succeeded;
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

    {
      hlds__assertion__update_pred_info_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__assertion__closure, (MR_Integer) 3))), ((MR_Word) hlds__assertion__wrapper_arg_1), ((MR_Word) hlds__assertion__wrapper_arg_2), &hlds__assertion__conv0_STATE_VARIABLE_Module_13);
    }
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
    MR_Word hlds__assertion__V_15_15;
    MR_Word hlds__assertion__V_11_11;
    MR_Box hlds__assertion__conv1_STATE_VARIABLE_Module_10;

    {
      hlds__goal_util__predids_from_goal_2_p_0(hlds__assertion__Goal_5, &hlds__assertion__PredIds_8);
    }
    {
      hlds__assertion__V_11_11 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
    {
      hlds__assertion__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (hlds__assertion__V_11_11)), hlds__assertion__PredIds_8);
    }
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
      hlds__assertion__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__assertion__V_15_15, 0) = ((MR_Box) (&hlds__assertion_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), hlds__assertion__V_15_15, 1) = ((MR_Box) (hlds__assertion__record_preds_used_in_4_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__assertion__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__assertion__V_15_15, 3) = ((MR_Box) (hlds__assertion__AssertId_6));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, hlds__assertion__V_15_15, hlds__assertion__PredIds_8, ((MR_Box) (hlds__assertion__STATE_VARIABLE_Module_0_9)), &hlds__assertion__conv1_STATE_VARIABLE_Module_10);
    }
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
    MR_bool hlds__assertion__succeeded;
    MR_Word hlds__assertion__AssertTable_7;
    MR_Word hlds__assertion__PredId_8;
    MR_Word hlds__assertion__PredInfo_9;
    MR_Word hlds__assertion__ClausesInfo_10;
    MR_Word hlds__assertion__ClausesRep_11;
    MR_Word hlds__assertion__Clauses_13;
    MR_Word hlds__assertion___ItemNumbers_12;

    {
      hlds__hlds_module__module_info_get_assertion_table_2_p_0(hlds__assertion__Module_4, &hlds__assertion__AssertTable_7);
    }
    {
      hlds__hlds_data__assertion_table_lookup_3_p_0(hlds__assertion__AssertTable_7, hlds__assertion__AssertId_5, &hlds__assertion__PredId_8);
    }
    {
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__assertion__Module_4, hlds__assertion__PredId_8, &hlds__assertion__PredInfo_9);
    }
    {
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__assertion__PredInfo_9, &hlds__assertion__ClausesInfo_10);
    }
    {
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(hlds__assertion__ClausesInfo_10, &hlds__assertion__ClausesRep_11, &hlds__assertion___ItemNumbers_12);
    }
    {
      hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(hlds__assertion__ClausesRep_11, &hlds__assertion__Clauses_13);
    }
    if ((hlds__assertion__Clauses_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.assertion", (MR_String) "predicate \140hlds.assertion.assert_id_goal\'/3", (MR_String) "goal is not an assertion");
          return;
        }
      }
    else
      {
        MR_Word hlds__assertion__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Clauses_13, (MR_Integer) 1)));
        MR_Word hlds__assertion__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__assertion__Clauses_13, (MR_Integer) 0)));

        if ((hlds__assertion__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word hlds__assertion__Goal0_15;
            MR_Word hlds__assertion__GoalExpr0_34;
            MR_Word hlds__assertion__GoalInfo_35;
            MR_Word hlds__assertion__GoalExpr_36;

            {
              hlds__assertion__Goal0_15 = hlds__hlds_clauses__clause_body_1_f_0(hlds__assertion__V_31_31);
            }
            hlds__assertion__GoalExpr0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal0_15, (MR_Integer) 0)));
            hlds__assertion__GoalInfo_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__assertion__Goal0_15, (MR_Integer) 1)));
            {
              hlds__assertion__normalise_goal_expr_2_p_0(hlds__assertion__GoalExpr0_34, &hlds__assertion__GoalExpr_36);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *hlds__assertion__Goal_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__assertion__GoalExpr_36));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__assertion__GoalInfo_35));
            }
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
