/*
** Automatically generated from `prog_io_type_defn.m'
** by the Mercury compiler,
** version 14.01.2-beta-2015-02-18, configured for x86_64-apple-darwin13.4.0.
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


/* :- module parse_tree.prog_io_type_defn. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io_type_defn__init
ENDINIT
*/

#include "parse_tree.prog_io_type_defn.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_mutable.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_typeclass.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 671 "prog_io_type_defn.m"
struct parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0_s {
#line 680 "prog_io_type_defn.m"
  MR_bool parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0__succeeded;
#line 680 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0__SolverTypeDetails_21;
#line 686 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0__Params_25;
#line 688 "prog_io_type_defn.m"
  jmp_buf parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0__commit_0;
#line 688 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0__Var_27;
#line 671 "prog_io_type_defn.m"
};

#line 38 "prog_io_type_defn.m"
struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s {
#line 1274 "prog_io_type_defn.m"
  MR_bool parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded;
#line 1305 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__Params0_21;
#line 1293 "prog_io_type_defn.m"
  jmp_buf parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__commit_0;
#line 1293 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__TypeInfo_100_100;
#line 1293 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__Param_23;
#line 1293 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__OtherParams_24;
#line 1293 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__V_30_30;
#line 1293 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__V_22_22;
#line 1293 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__conv0_V_22_22;
#line 38 "prog_io_type_defn.m"
};

#line 31 "prog_io_type_defn.m"
struct parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0_s {
#line 100 "prog_io_type_defn.m"
  MR_bool parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded;
#line 83 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__BeforeCondTerm_20;
#line 550 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__Params_38;
#line 553 "prog_io_type_defn.m"
  jmp_buf parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__commit_0;
#line 553 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TypeCtorInfo_65_81;
#line 553 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TypeCtorInfo_66_82;
#line 553 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__Var_39;
#line 553 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TVar_40;
#line 31 "prog_io_type_defn.m"
};


#line 195 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 198 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 201 "parse_tree.prog_io_type_defn.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_type_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 204 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 207 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 210 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 213 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0;

#line 216 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 219 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;

#line 893 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_49_44_32_52_93_95_48_3_f_0(
#line 893 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 893 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 893 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 893 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 893 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 893 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 893 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_57_95_95_91_51_93_95_48_3_f_0(
#line 893 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 893 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 893 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 893 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(
#line 893 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 893 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 893 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 893 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 829 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_57_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(
#line 829 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 829 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 829 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_54,
#line 829 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_98);

#line 820 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_48_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(
#line 820 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 820 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_42,
#line 820 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_82);

#line 817 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_55_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 817 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_38,
#line 817 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_77);

#line 814 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_52_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 814 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_34,
#line 814 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_71);

#line 826 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_54_95_95_49_95_95_104_111_49_51_95_95_91_52_93_95_48_3_f_0(
#line 826 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 826 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 826 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_50,
#line 826 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_93);

#line 823 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_51_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(
#line 823 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 823 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 823 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_46,
#line 823 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_88);

#line 808 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_48_56_95_95_49_95_95_104_111_49_49_95_95_91_49_44_32_52_93_95_48_3_f_0(
#line 808 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 808 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_28,
#line 808 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_62);

#line 859 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0(
#line 859 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 859 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_56_95_95_91_51_93_95_48_4_p_0(
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_26_26,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_27_27,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 859 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 859 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 859 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_54_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 859 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 859 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0(
#line 859 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 859 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0(
#line 859 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 859 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_52_93_95_48_4_p_0(
#line 859 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 859 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 859 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 893 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(
#line 893 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 893 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 893 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 893 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 1120 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_109_97_121_98_101_95_119_104_101_114_101_95_100_101_116_97_105_108_115_95_50_95_95_91_49_49_93_95_48_12_f_0(
#line 1120 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_14,
#line 1120 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_15,
#line 1120 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__RepresentationIs_16,
#line 1120 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__InitialisationIs_17,
#line 1120 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__GroundIs_18,
#line 1120 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__AnyIs_19,
#line 1120 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__CStoreIs_20,
#line 1120 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__EqualityIs_21,
#line 1120 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ComparisonIs_22,
#line 1120 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__DirectArgIs_23,
#line 1120 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__WhereTerm_25);

#line 970 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_2_f_0(
#line 970 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5);

#line 859 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_attribute__ho10_4_p_0(
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 457 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__457__1_2_p_0(
#line 457 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ExistQVars_19,
#line 457 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_280);

#line 429 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__429__1_2_p_0(
#line 429 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_125,
#line 429 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_268);

#line 425 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__425__1_1_f_0(
#line 425 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_122);

#line 380 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__380__1_2_p_0(
#line 380 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_60,
#line 380 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_254);

#line 377 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__377__1_1_f_0(
#line 377 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_57);

#line 227 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_constructor__227__1_2_p_0(
#line 227 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_46,
#line 227 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_47);

#line 1302 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_type_defn_head__1302__1_2_p_0(
#line 1302 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_101,
#line 1302 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_102);

#line 1254 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__maybe_unify_compare_2_f_0(
#line 1254 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeEqPred_4,
#line 1254 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCmpPred_5);

#line 1074 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__make_maybe_where_details_12_f_0(
#line 1074 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_14,
#line 1074 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_15,
#line 1074 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeRepresentationIs_16,
#line 1074 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeInitialisationIs_17,
#line 1074 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeGroundIs_18,
#line 1074 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeAnyIs_19,
#line 1074 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCStoreIs_20,
#line 1074 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeEqualityIs_21,
#line 1074 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeComparisonIs_22,
#line 1074 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgIs_23,
#line 1074 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeWhereEnd_24,
#line 1074 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__WhereTerm_25);

#line 1065 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_end_2_p_0(
#line 1065 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 1065 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_2);

#line 1049 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_direct_arg_functor_4_p_0(
#line 1049 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 1049 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 1049 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7,
#line 1049 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeFunctor_8);

#line 1038 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0_1(
#line 1038 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1038 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1038 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2);

#line 1033 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0(
#line 1033 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 1033 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 1033 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 1015 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_mutable_decl_term_3_p_0(
#line 1015 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_4,
#line 1015 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5,
#line 1015 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeMutableInfo_6);

#line 1006 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0_1(
#line 1006 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1006 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1006 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2);

#line 992 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0(
#line 992 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_4,
#line 992 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5);

#line 926 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_initialisation_is_3_f_0(
#line 926 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 926 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 926 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 917 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(
#line 917 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_3);

#line 793 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_type_decl_where_term_4_f_0(
#line 793 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_6,
#line 793 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_7,
#line 793 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_8,
#line 793 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm0_9);

#line 724 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_abstract_type_defn_8_p_0(
#line 724 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_9,
#line 724 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_10,
#line 724 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_11,
#line 724 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes0_12,
#line 724 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Condition_13,
#line 724 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_14,
#line 724 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_15,
#line 724 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_16);

#line 688 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_1(
#line 688 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 688 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_2(
#line 688 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 688 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_3(
#line 688 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 671 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0(
#line 671 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_11,
#line 671 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_12,
#line 671 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_13,
#line 671 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_14,
#line 671 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeUserEqComp_15,
#line 671 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes_16,
#line 671 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Condition_17,
#line 671 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_18,
#line 671 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_19,
#line 671 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_20);

#line 628 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_type_is_abstract_enum_8_p_0(
#line 628 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_9,
#line 628 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_10,
#line 628 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_11,
#line 628 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_12,
#line 628 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Condition_13,
#line 628 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_14,
#line 628 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_15,
#line 628 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_16);

#line 589 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_block_type_defn_9_p_0(
#line 589 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_10,
#line 589 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_11,
#line 589 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_12,
#line 589 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_13,
#line 589 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes0_14,
#line 589 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Condition_15,
#line 589 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_16,
#line 589 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_17,
#line 589 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_18);

#line 521 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__find_constructor_4_p_0(
#line 521 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 521 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__SymName_7,
#line 521 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__Arity_8,
#line 521 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Ctor_9);

#line 482 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__check_direct_arg_ctors_5_p_0(
#line 482 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 482 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_2,
#line 482 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3,
#line 482 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4,
#line 482 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_5);

#line 457 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_6(
#line 457 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 457 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 453 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_5(
#line 453 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 453 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 429 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_4(
#line 429 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 429 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 425 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_3(
#line 425 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 425 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 380 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_2(
#line 380 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 380 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 377 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_1(
#line 377 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 377 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 367 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0(
#line 367 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 367 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_2,
#line 367 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_3,
#line 367 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__4_4,
#line 367 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5,
#line 367 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_6);

#line 341 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__convert_constructor_arg_list_2_5_f_0(
#line 341 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_7,
#line 341 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_8,
#line 341 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeFieldName_9,
#line 341 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TypeTerm_10,
#line 341 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Terms_11);

#line 303 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__convert_constructor_arg_list_3_f_0(
#line 303 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_1,
#line 303 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_2,
#line 303 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3);

#line 244 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_constructor_2_4_f_0(
#line 244 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_6,
#line 244 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_7,
#line 244 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ExistQVars_8,
#line 244 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_9);

#line 227 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_constructors_2_3_f_0_1(
#line 227 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 227 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 227 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2);

#line 203 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_constructors_2_3_f_0(
#line 203 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 203 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_2,
#line 203 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3);

#line 175 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__du_type_rhs_ctors_and_where_terms_3_p_0(
#line 175 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_4,
#line 175 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__CtorsTerm_5,
#line 175 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeWhereTerm_6);

#line 113 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_du_type_defn_9_p_0(
#line 113 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_10,
#line 113 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_11,
#line 113 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_12,
#line 113 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_13,
#line 113 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes0_14,
#line 113 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Condition_15,
#line 113 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_16,
#line 113 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_17,
#line 113 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_18);

#line 1302 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_5(
#line 1302 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1302 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1302 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2);

#line 1293 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_1(
#line 1293 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 1293 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_3(
#line 1293 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 1293 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_2(
#line 1293 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 1293 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_4(
#line 1293 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 553 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_1(
#line 553 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 553 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_2(
#line 553 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 553 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_3(
#line 553 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);


static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_1[156][2];

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_2[40][1];

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_3[4][5];

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_4[6][3];

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_5[1][6];

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_6[1][7];




static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_1[156][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_solver_type_details_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_compare_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_1[6]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_1[9]))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in LHS of type definition."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: repeated type parameters"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: variable on LHS of type definition."))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "cannot have data constructors."))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: a solver type"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: syntax error in constructor name."))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in RHS of type definition."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "(explicit type quantifier shadows argument type)."))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "overlapping scopes"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[33])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in arguments or constraints of constructor."))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_defn_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[21])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "using"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "must be explicitly existentially quantified"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_defn_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[42])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "introduced with"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[43])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is not 1."))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "attribute contains a function symbol whose arity"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[47])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_defn_scalar_common_2[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[49])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[50])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "with existentially quantified type variables."))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "which is not in the type definition."))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "attribute."))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_defn_scalar_common_2[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[58])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "cannot have a"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[59])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: solver type definitions"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[61])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "type_is_abstract_enum."))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: invalid argument for"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[65])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "attributes for abstract non-solver type."))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_defn_scalar_common_2[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[69])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: invalid"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[70])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Solver type with no solver_type_details."))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_defn_scalar_common_2[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[21])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[75])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in solver type definition."))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: unknown attribute"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[79])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: expected a ground, unconstrained inst."))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "or a list of mutable declarations."))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: expected a mutable declaration"))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[85])))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: expected a mutable declaration."))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: malformed functors list in"))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[59])))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "or contain an unrecognised attribute."))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: attributes are either badly ordered"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[93])))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "for non-solver type."))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: solver type attribute given"))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[97])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "attributes."))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_defn_scalar_common_2[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[101])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: solver type definitions cannot have"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[102])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_defn_scalar_common_2[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[58])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: solver type definitions must have a"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[105])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_defn_scalar_common_2[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[101])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "excludes other"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[108])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_defn_scalar_common_2[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[110])))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[112]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[111])))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: free type parameter"))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in RHS of type definition:"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In type definition:"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[116]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 118 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: type parameters must be variables:"))
  },
  /* row 120 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[8])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 121 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[9])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: syntax error in variable list at"))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In constructor definition:"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In field name:"))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[125]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 127 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[13])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: free type"))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in existential quantifier"))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in class constraints,"))
  },
  /* row 132 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[14])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "attribute contains a function symbol"))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "attribute lists the function symbol"))
  },
  /* row 136 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[15])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 137 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[16])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 138 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[17])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 139 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[18])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: free type variable"))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in representation type:"))
  },
  /* row 142 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[24])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 143 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[25])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 144 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[26])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 145 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[27])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: expected functor"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "name/arity for"))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "attribute, not"))
  },
  /* row 149 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[28])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 150 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[29])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 151 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[30])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 152 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[31])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 153 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[32])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 154 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[33])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 155 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[35])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_2[40][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "some"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "=>"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "direct_arg"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "where ..."))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "representation"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "where type_is_abstract_noncanonical"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[19])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[23])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[27])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[29])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[52])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[63])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[67])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[72])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[74])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[21])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[81])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[87])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[89])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[91])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[95])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[83])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[99])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[104])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[107])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[113])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[77])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_3[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_4[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[0])),
    ((MR_Box) (parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[0])),
    ((MR_Box) (parse_tree__prog_io_type_defn__parse_constructors_2_3_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[1])),
    ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[1])),
    ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[3])),
    ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
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



#line 2098 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2106 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2114 "parse_tree.prog_io_type_defn.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_type_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2122 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_type_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2130 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2138 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2146 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0
  }
};

#line 2154 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2162 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0
  }
};

#line 893 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_49_44_32_52_93_95_48_3_f_0(
#line 893 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 893 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 893 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 893 "prog_io_type_defn.m"
{
#line 910 "prog_io_type_defn.m"
  {
#line 910 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 910 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 910 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LHS_9;
#line 910 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RHS_10;
#line 897 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 897 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_19_19;
#line 897 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 897 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 897 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 897 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 897 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 897 "prog_io_type_defn.m"
      {
#line 897 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 897 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 897 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 897 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 897 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 897 "prog_io_type_defn.m"
          {
#line 897 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 897 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_19_19, (MR_String) "is") == 0);
#line 897 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 897 "prog_io_type_defn.m"
              {
#line 897 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 897 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 897 "prog_io_type_defn.m"
                  {
#line 897 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 897 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 897 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 897 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 897 "prog_io_type_defn.m"
                      {
#line 897 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 897 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 897 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 897 "prog_io_type_defn.m"
                      }
#line 897 "prog_io_type_defn.m"
                  }
#line 897 "prog_io_type_defn.m"
              }
#line 897 "prog_io_type_defn.m"
          }
#line 897 "prog_io_type_defn.m"
      }
#line 910 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 907 "prog_io_type_defn.m"
      {
#line 898 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 898 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 898 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 898 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 898 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 898 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 898 "prog_io_type_defn.m"
          {
#line 898 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 0)));
#line 898 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 1)));
#line 898 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 2)));
#line 898 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 898 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 898 "prog_io_type_defn.m"
              {
#line 898 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 898 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 898 "prog_io_type_defn.m"
                  {
#line 898 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 898 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__Name_5, parse_tree__prog_io_type_defn__V_51_51) == 0);
#line 898 "prog_io_type_defn.m"
                  }
#line 898 "prog_io_type_defn.m"
              }
#line 898 "prog_io_type_defn.m"
          }
#line 907 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 899 "prog_io_type_defn.m"
          {
#line 899 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__RHSResult_13;

#line 990 "prog_io_type_defn.m"
            {
#line 990 "prog_io_type_defn.m"
              parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_type_defn__RHS_10, parse_tree__prog_io_type_defn__V_53_53, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_type_defn__RHSResult_13);
            }
#line 903 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
#line 905 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = (MR_Word) parse_tree__prog_io_type_defn__RHSResult_13;
#line 903 "prog_io_type_defn.m"
            else
#line 901 "prog_io_type_defn.m"
              {
#line 901 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RHSResult_13, (MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 902 "prog_io_type_defn.m"
                {
#line 902 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 902 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ParsedRHS_14));
#line 902 "prog_io_type_defn.m"
                }
#line 902 "prog_io_type_defn.m"
                {
#line 902 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 902 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 902 "prog_io_type_defn.m"
                }
#line 901 "prog_io_type_defn.m"
              }
#line 899 "prog_io_type_defn.m"
          }
#line 907 "prog_io_type_defn.m"
        else
#line 908 "prog_io_type_defn.m"
          {
#line 908 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[39]);
#line 908 "prog_io_type_defn.m"
          }
#line 907 "prog_io_type_defn.m"
      }
#line 910 "prog_io_type_defn.m"
    else
#line 911 "prog_io_type_defn.m"
      {
#line 911 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 911 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 911 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 911 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 911 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 913 "prog_io_type_defn.m"
        {
#line 913 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 913 "prog_io_type_defn.m"
        {
#line 913 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 913 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 913 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[155])));
#line 913 "prog_io_type_defn.m"
        }
#line 912 "prog_io_type_defn.m"
        {
#line 912 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 912 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 912 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 912 "prog_io_type_defn.m"
        }
#line 912 "prog_io_type_defn.m"
        {
#line 912 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 912 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 912 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 912 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 912 "prog_io_type_defn.m"
        }
#line 914 "prog_io_type_defn.m"
        {
#line 914 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 914 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 914 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 914 "prog_io_type_defn.m"
        }
#line 914 "prog_io_type_defn.m"
        {
#line 914 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 914 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 914 "prog_io_type_defn.m"
        }
#line 911 "prog_io_type_defn.m"
      }
#line 910 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 910 "prog_io_type_defn.m"
  }
#line 893 "prog_io_type_defn.m"
}

#line 893 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 893 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 893 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 893 "prog_io_type_defn.m"
{
#line 910 "prog_io_type_defn.m"
  {
#line 910 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 910 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 910 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LHS_9;
#line 910 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RHS_10;
#line 897 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 897 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_19_19;
#line 897 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 897 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 897 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 897 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 897 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 897 "prog_io_type_defn.m"
      {
#line 897 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 897 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 897 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 897 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 897 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 897 "prog_io_type_defn.m"
          {
#line 897 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 897 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_19_19, (MR_String) "is") == 0);
#line 897 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 897 "prog_io_type_defn.m"
              {
#line 897 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 897 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 897 "prog_io_type_defn.m"
                  {
#line 897 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 897 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 897 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 897 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 897 "prog_io_type_defn.m"
                      {
#line 897 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 897 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 897 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 897 "prog_io_type_defn.m"
                      }
#line 897 "prog_io_type_defn.m"
                  }
#line 897 "prog_io_type_defn.m"
              }
#line 897 "prog_io_type_defn.m"
          }
#line 897 "prog_io_type_defn.m"
      }
#line 910 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 907 "prog_io_type_defn.m"
      {
#line 898 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 898 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 898 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 898 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 898 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 898 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 898 "prog_io_type_defn.m"
          {
#line 898 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 0)));
#line 898 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 1)));
#line 898 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 2)));
#line 898 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 898 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 898 "prog_io_type_defn.m"
              {
#line 898 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 898 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 898 "prog_io_type_defn.m"
                  {
#line 898 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 898 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__Name_5, parse_tree__prog_io_type_defn__V_51_51) == 0);
#line 898 "prog_io_type_defn.m"
                  }
#line 898 "prog_io_type_defn.m"
              }
#line 898 "prog_io_type_defn.m"
          }
#line 907 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 899 "prog_io_type_defn.m"
          {
#line 899 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__RHSResult_13;

#line 899 "prog_io_type_defn.m"
            {
#line 899 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__RHSResult_13 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_2_f_0(parse_tree__prog_io_type_defn__RHS_10);
            }
#line 903 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
#line 905 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = (MR_Word) parse_tree__prog_io_type_defn__RHSResult_13;
#line 903 "prog_io_type_defn.m"
            else
#line 901 "prog_io_type_defn.m"
              {
#line 901 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RHSResult_13, (MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 902 "prog_io_type_defn.m"
                {
#line 902 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 902 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ParsedRHS_14));
#line 902 "prog_io_type_defn.m"
                }
#line 902 "prog_io_type_defn.m"
                {
#line 902 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 902 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 902 "prog_io_type_defn.m"
                }
#line 901 "prog_io_type_defn.m"
              }
#line 899 "prog_io_type_defn.m"
          }
#line 907 "prog_io_type_defn.m"
        else
#line 908 "prog_io_type_defn.m"
          {
#line 908 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[38]);
#line 908 "prog_io_type_defn.m"
          }
#line 907 "prog_io_type_defn.m"
      }
#line 910 "prog_io_type_defn.m"
    else
#line 911 "prog_io_type_defn.m"
      {
#line 911 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 911 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 911 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 911 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 911 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 913 "prog_io_type_defn.m"
        {
#line 913 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 913 "prog_io_type_defn.m"
        {
#line 913 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 913 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 913 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[155])));
#line 913 "prog_io_type_defn.m"
        }
#line 912 "prog_io_type_defn.m"
        {
#line 912 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 912 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 912 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 912 "prog_io_type_defn.m"
        }
#line 912 "prog_io_type_defn.m"
        {
#line 912 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 912 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 912 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 912 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 912 "prog_io_type_defn.m"
        }
#line 914 "prog_io_type_defn.m"
        {
#line 914 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 914 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 914 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 914 "prog_io_type_defn.m"
        }
#line 914 "prog_io_type_defn.m"
        {
#line 914 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 914 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 914 "prog_io_type_defn.m"
        }
#line 911 "prog_io_type_defn.m"
      }
#line 910 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 910 "prog_io_type_defn.m"
  }
#line 893 "prog_io_type_defn.m"
}

#line 893 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_57_95_95_91_51_93_95_48_3_f_0(
#line 893 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 893 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 893 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 893 "prog_io_type_defn.m"
{
#line 910 "prog_io_type_defn.m"
  {
#line 910 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 910 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 910 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LHS_9;
#line 910 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RHS_10;
#line 897 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 897 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_19_19;
#line 897 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 897 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 897 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 897 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 897 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 897 "prog_io_type_defn.m"
      {
#line 897 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 897 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 897 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 897 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 897 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 897 "prog_io_type_defn.m"
          {
#line 897 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 897 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_19_19, (MR_String) "is") == 0);
#line 897 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 897 "prog_io_type_defn.m"
              {
#line 897 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 897 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 897 "prog_io_type_defn.m"
                  {
#line 897 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 897 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 897 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 897 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 897 "prog_io_type_defn.m"
                      {
#line 897 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 897 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 897 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 897 "prog_io_type_defn.m"
                      }
#line 897 "prog_io_type_defn.m"
                  }
#line 897 "prog_io_type_defn.m"
              }
#line 897 "prog_io_type_defn.m"
          }
#line 897 "prog_io_type_defn.m"
      }
#line 910 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 907 "prog_io_type_defn.m"
      {
#line 898 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 898 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 898 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 898 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 898 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 898 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 898 "prog_io_type_defn.m"
          {
#line 898 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 0)));
#line 898 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 1)));
#line 898 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 2)));
#line 898 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 898 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 898 "prog_io_type_defn.m"
              {
#line 898 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 898 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 898 "prog_io_type_defn.m"
                  {
#line 898 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 898 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__Name_5, parse_tree__prog_io_type_defn__V_51_51) == 0);
#line 898 "prog_io_type_defn.m"
                  }
#line 898 "prog_io_type_defn.m"
              }
#line 898 "prog_io_type_defn.m"
          }
#line 907 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 899 "prog_io_type_defn.m"
          {
#line 899 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__RHSResult_13;

#line 899 "prog_io_type_defn.m"
            {
#line 899 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__RHSResult_13 = parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0(parse_tree__prog_io_type_defn__V_52_52, parse_tree__prog_io_type_defn__RHS_10);
            }
#line 903 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
#line 905 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = (MR_Word) parse_tree__prog_io_type_defn__RHSResult_13;
#line 903 "prog_io_type_defn.m"
            else
#line 901 "prog_io_type_defn.m"
              {
#line 901 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RHSResult_13, (MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 902 "prog_io_type_defn.m"
                {
#line 902 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 902 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ParsedRHS_14));
#line 902 "prog_io_type_defn.m"
                }
#line 902 "prog_io_type_defn.m"
                {
#line 902 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 902 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 902 "prog_io_type_defn.m"
                }
#line 901 "prog_io_type_defn.m"
              }
#line 899 "prog_io_type_defn.m"
          }
#line 907 "prog_io_type_defn.m"
        else
#line 908 "prog_io_type_defn.m"
          {
#line 908 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[37]);
#line 908 "prog_io_type_defn.m"
          }
#line 907 "prog_io_type_defn.m"
      }
#line 910 "prog_io_type_defn.m"
    else
#line 911 "prog_io_type_defn.m"
      {
#line 911 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 911 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 911 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 911 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 911 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 913 "prog_io_type_defn.m"
        {
#line 913 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 913 "prog_io_type_defn.m"
        {
#line 913 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 913 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 913 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[155])));
#line 913 "prog_io_type_defn.m"
        }
#line 912 "prog_io_type_defn.m"
        {
#line 912 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 912 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 912 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 912 "prog_io_type_defn.m"
        }
#line 912 "prog_io_type_defn.m"
        {
#line 912 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 912 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 912 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 912 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 912 "prog_io_type_defn.m"
        }
#line 914 "prog_io_type_defn.m"
        {
#line 914 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 914 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 914 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 914 "prog_io_type_defn.m"
        }
#line 914 "prog_io_type_defn.m"
        {
#line 914 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 914 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 914 "prog_io_type_defn.m"
        }
#line 911 "prog_io_type_defn.m"
      }
#line 910 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 910 "prog_io_type_defn.m"
  }
#line 893 "prog_io_type_defn.m"
}

#line 893 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(
#line 893 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 893 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 893 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 893 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 893 "prog_io_type_defn.m"
{
#line 910 "prog_io_type_defn.m"
  {
#line 910 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 910 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 910 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LHS_9;
#line 910 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RHS_10;
#line 897 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 897 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_19_19;
#line 897 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 897 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 897 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 897 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 897 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 897 "prog_io_type_defn.m"
      {
#line 897 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 897 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 897 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 897 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 897 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 897 "prog_io_type_defn.m"
          {
#line 897 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 897 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_19_19, (MR_String) "is") == 0);
#line 897 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 897 "prog_io_type_defn.m"
              {
#line 897 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 897 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 897 "prog_io_type_defn.m"
                  {
#line 897 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 897 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 897 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 897 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 897 "prog_io_type_defn.m"
                      {
#line 897 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 897 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 897 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 897 "prog_io_type_defn.m"
                      }
#line 897 "prog_io_type_defn.m"
                  }
#line 897 "prog_io_type_defn.m"
              }
#line 897 "prog_io_type_defn.m"
          }
#line 897 "prog_io_type_defn.m"
      }
#line 910 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 907 "prog_io_type_defn.m"
      {
#line 898 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 898 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 898 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 898 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 898 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 898 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 898 "prog_io_type_defn.m"
          {
#line 898 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 0)));
#line 898 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 1)));
#line 898 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 2)));
#line 898 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 898 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 898 "prog_io_type_defn.m"
              {
#line 898 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 898 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 898 "prog_io_type_defn.m"
                  {
#line 898 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 898 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__Name_5, parse_tree__prog_io_type_defn__V_51_51) == 0);
#line 898 "prog_io_type_defn.m"
                  }
#line 898 "prog_io_type_defn.m"
              }
#line 898 "prog_io_type_defn.m"
          }
#line 907 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 899 "prog_io_type_defn.m"
          {
#line 899 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__RHSResult_13;

#line 899 "prog_io_type_defn.m"
            {
#line 899 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__RHSResult_13 = parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0(parse_tree__prog_io_type_defn__V_52_52, parse_tree__prog_io_type_defn__V_53_53, parse_tree__prog_io_type_defn__RHS_10);
            }
#line 903 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
#line 905 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = (MR_Word) parse_tree__prog_io_type_defn__RHSResult_13;
#line 903 "prog_io_type_defn.m"
            else
#line 901 "prog_io_type_defn.m"
              {
#line 901 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RHSResult_13, (MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 902 "prog_io_type_defn.m"
                {
#line 902 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 902 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ParsedRHS_14));
#line 902 "prog_io_type_defn.m"
                }
#line 902 "prog_io_type_defn.m"
                {
#line 902 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 902 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 902 "prog_io_type_defn.m"
                }
#line 901 "prog_io_type_defn.m"
              }
#line 899 "prog_io_type_defn.m"
          }
#line 907 "prog_io_type_defn.m"
        else
#line 908 "prog_io_type_defn.m"
          {
#line 908 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[36]);
#line 908 "prog_io_type_defn.m"
          }
#line 907 "prog_io_type_defn.m"
      }
#line 910 "prog_io_type_defn.m"
    else
#line 911 "prog_io_type_defn.m"
      {
#line 911 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 911 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 911 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 911 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 911 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 913 "prog_io_type_defn.m"
        {
#line 913 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 913 "prog_io_type_defn.m"
        {
#line 913 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 913 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 913 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[155])));
#line 913 "prog_io_type_defn.m"
        }
#line 912 "prog_io_type_defn.m"
        {
#line 912 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 912 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 912 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 912 "prog_io_type_defn.m"
        }
#line 912 "prog_io_type_defn.m"
        {
#line 912 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 912 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 912 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 912 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 912 "prog_io_type_defn.m"
        }
#line 914 "prog_io_type_defn.m"
        {
#line 914 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 914 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 914 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 914 "prog_io_type_defn.m"
        }
#line 914 "prog_io_type_defn.m"
        {
#line 914 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 914 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 914 "prog_io_type_defn.m"
        }
#line 911 "prog_io_type_defn.m"
      }
#line 910 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 910 "prog_io_type_defn.m"
  }
#line 893 "prog_io_type_defn.m"
}

#line 829 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_57_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(
#line 829 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 829 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 829 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_54,
#line 829 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_98)
#line 829 "prog_io_type_defn.m"
{
#line 829 "prog_io_type_defn.m"
  {
#line 829 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 829 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_99;

#line 829 "prog_io_type_defn.m"
    {
#line 829 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__4_99 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_104_104, parse_tree__prog_io_type_defn__V_105_105, parse_tree__prog_io_type_defn__HeadVar__1_54, parse_tree__prog_io_type_defn__HeadVar__3_98);
    }
#line 829 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_99;
#line 829 "prog_io_type_defn.m"
  }
#line 829 "prog_io_type_defn.m"
}

#line 820 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_48_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(
#line 820 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 820 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_42,
#line 820 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_82)
#line 820 "prog_io_type_defn.m"
{
#line 820 "prog_io_type_defn.m"
  {
#line 820 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 820 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_83;

#line 820 "prog_io_type_defn.m"
    {
#line 820 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__4_83 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_57_95_95_91_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_104_104, parse_tree__prog_io_type_defn__HeadVar__1_42, parse_tree__prog_io_type_defn__HeadVar__3_82);
    }
#line 820 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_83;
#line 820 "prog_io_type_defn.m"
  }
#line 820 "prog_io_type_defn.m"
}

#line 817 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_55_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 817 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_38,
#line 817 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_77)
#line 817 "prog_io_type_defn.m"
{
#line 817 "prog_io_type_defn.m"
  {
#line 817 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 817 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_78;

#line 817 "prog_io_type_defn.m"
    {
#line 817 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__4_78 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__HeadVar__1_38, parse_tree__prog_io_type_defn__HeadVar__3_77);
    }
#line 817 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_78;
#line 817 "prog_io_type_defn.m"
  }
#line 817 "prog_io_type_defn.m"
}

#line 814 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_52_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 814 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_34,
#line 814 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_71)
#line 814 "prog_io_type_defn.m"
{
#line 814 "prog_io_type_defn.m"
  {
#line 814 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 814 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_72;

#line 814 "prog_io_type_defn.m"
    {
#line 814 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__4_72 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__HeadVar__1_34, parse_tree__prog_io_type_defn__HeadVar__3_71);
    }
#line 814 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_72;
#line 814 "prog_io_type_defn.m"
  }
#line 814 "prog_io_type_defn.m"
}

#line 826 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_54_95_95_49_95_95_104_111_49_51_95_95_91_52_93_95_48_3_f_0(
#line 826 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 826 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 826 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_50,
#line 826 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_93)
#line 826 "prog_io_type_defn.m"
{
#line 826 "prog_io_type_defn.m"
  {
#line 826 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 826 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_94;

#line 826 "prog_io_type_defn.m"
    {
#line 826 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__4_94 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_104_104, parse_tree__prog_io_type_defn__V_105_105, parse_tree__prog_io_type_defn__HeadVar__1_50, parse_tree__prog_io_type_defn__HeadVar__3_93);
    }
#line 826 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_94;
#line 826 "prog_io_type_defn.m"
  }
#line 826 "prog_io_type_defn.m"
}

#line 823 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_51_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(
#line 823 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 823 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 823 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_46,
#line 823 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_88)
#line 823 "prog_io_type_defn.m"
{
#line 823 "prog_io_type_defn.m"
  {
#line 823 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 823 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_89;

#line 823 "prog_io_type_defn.m"
    {
#line 823 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__4_89 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_104_104, parse_tree__prog_io_type_defn__V_105_105, parse_tree__prog_io_type_defn__HeadVar__1_46, parse_tree__prog_io_type_defn__HeadVar__3_88);
    }
#line 823 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_89;
#line 823 "prog_io_type_defn.m"
  }
#line 823 "prog_io_type_defn.m"
}

#line 808 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_48_56_95_95_49_95_95_104_111_49_49_95_95_91_49_44_32_52_93_95_48_3_f_0(
#line 808 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 808 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_28,
#line 808 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_62)
#line 808 "prog_io_type_defn.m"
{
#line 808 "prog_io_type_defn.m"
  {
#line 808 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 808 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_63;

#line 808 "prog_io_type_defn.m"
    {
#line 808 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__4_63 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_49_44_32_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_105_105, parse_tree__prog_io_type_defn__HeadVar__1_28, parse_tree__prog_io_type_defn__HeadVar__3_62);
    }
#line 808 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_63;
#line 808 "prog_io_type_defn.m"
  }
#line 808 "prog_io_type_defn.m"
}

#line 859 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0(
#line 859 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 859 "prog_io_type_defn.m"
{
#line 867 "prog_io_type_defn.m"
  {
#line 867 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 867 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 864 "prog_io_type_defn.m"
      {
#line 865 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[39]);
#line 864 "prog_io_type_defn.m"
      }
#line 867 "prog_io_type_defn.m"
    else
#line 868 "prog_io_type_defn.m"
      {
#line 868 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 868 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 870 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 870 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
          {
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
              {
#line 870 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 870 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
                  {
#line 870 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
                      {
#line 870 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
                          {
#line 870 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 870 "prog_io_type_defn.m"
                          }
#line 870 "prog_io_type_defn.m"
                      }
#line 870 "prog_io_type_defn.m"
                  }
#line 870 "prog_io_type_defn.m"
              }
#line 870 "prog_io_type_defn.m"
          }
#line 874 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 872 "prog_io_type_defn.m"
          {
#line 872 "prog_io_type_defn.m"
            {
#line 872 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_48_56_95_95_49_95_95_104_111_49_49_95_95_91_49_44_32_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 873 "prog_io_type_defn.m"
            {
#line 873 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 873 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 873 "prog_io_type_defn.m"
            }
#line 872 "prog_io_type_defn.m"
          }
#line 874 "prog_io_type_defn.m"
        else
#line 875 "prog_io_type_defn.m"
          {
#line 875 "prog_io_type_defn.m"
            {
#line 875 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_48_56_95_95_49_95_95_104_111_49_49_95_95_91_49_44_32_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 876 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 875 "prog_io_type_defn.m"
          }
#line 881 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 880 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 881 "prog_io_type_defn.m"
        else
#line 881 "prog_io_type_defn.m"
          {
#line 881 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 881 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 883 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 881 "prog_io_type_defn.m"
            else
#line 886 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 881 "prog_io_type_defn.m"
          }
#line 868 "prog_io_type_defn.m"
      }
#line 867 "prog_io_type_defn.m"
  }
#line 859 "prog_io_type_defn.m"
}

#line 859 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_56_95_95_91_51_93_95_48_4_p_0(
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_26_26,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_27_27,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 859 "prog_io_type_defn.m"
{
#line 867 "prog_io_type_defn.m"
  {
#line 867 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 867 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 864 "prog_io_type_defn.m"
      {
#line 865 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[34]);
#line 864 "prog_io_type_defn.m"
      }
#line 867 "prog_io_type_defn.m"
    else
#line 868 "prog_io_type_defn.m"
      {
#line 868 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 868 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 870 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 870 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
          {
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
              {
#line 870 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 870 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
                  {
#line 870 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
                      {
#line 870 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
                          {
#line 870 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 870 "prog_io_type_defn.m"
                          }
#line 870 "prog_io_type_defn.m"
                      }
#line 870 "prog_io_type_defn.m"
                  }
#line 870 "prog_io_type_defn.m"
              }
#line 870 "prog_io_type_defn.m"
          }
#line 874 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 872 "prog_io_type_defn.m"
          {
#line 872 "prog_io_type_defn.m"
            {
#line 872 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__parse_where_initialisation_is_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__V_27_27, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 873 "prog_io_type_defn.m"
            {
#line 873 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 873 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 873 "prog_io_type_defn.m"
            }
#line 872 "prog_io_type_defn.m"
          }
#line 874 "prog_io_type_defn.m"
        else
#line 875 "prog_io_type_defn.m"
          {
#line 875 "prog_io_type_defn.m"
            {
#line 875 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__parse_where_initialisation_is_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__V_27_27, parse_tree__prog_io_type_defn__Term_9);
            }
#line 876 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 875 "prog_io_type_defn.m"
          }
#line 881 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 880 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 881 "prog_io_type_defn.m"
        else
#line 881 "prog_io_type_defn.m"
          {
#line 881 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 881 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 883 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 881 "prog_io_type_defn.m"
            else
#line 886 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 881 "prog_io_type_defn.m"
          }
#line 868 "prog_io_type_defn.m"
      }
#line 867 "prog_io_type_defn.m"
  }
#line 859 "prog_io_type_defn.m"
}

#line 859 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 859 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 859 "prog_io_type_defn.m"
{
#line 867 "prog_io_type_defn.m"
  {
#line 867 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 867 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 864 "prog_io_type_defn.m"
      {
#line 865 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[34]);
#line 864 "prog_io_type_defn.m"
      }
#line 867 "prog_io_type_defn.m"
    else
#line 868 "prog_io_type_defn.m"
      {
#line 868 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 868 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 870 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 870 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
          {
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
              {
#line 870 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 870 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
                  {
#line 870 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
                      {
#line 870 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
                          {
#line 870 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 870 "prog_io_type_defn.m"
                          }
#line 870 "prog_io_type_defn.m"
                      }
#line 870 "prog_io_type_defn.m"
                  }
#line 870 "prog_io_type_defn.m"
              }
#line 870 "prog_io_type_defn.m"
          }
#line 874 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 872 "prog_io_type_defn.m"
          {
#line 872 "prog_io_type_defn.m"
            {
#line 872 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_51_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 873 "prog_io_type_defn.m"
            {
#line 873 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 873 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 873 "prog_io_type_defn.m"
            }
#line 872 "prog_io_type_defn.m"
          }
#line 874 "prog_io_type_defn.m"
        else
#line 875 "prog_io_type_defn.m"
          {
#line 875 "prog_io_type_defn.m"
            {
#line 875 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_51_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 876 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 875 "prog_io_type_defn.m"
          }
#line 881 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 880 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 881 "prog_io_type_defn.m"
        else
#line 881 "prog_io_type_defn.m"
          {
#line 881 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 881 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 883 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 881 "prog_io_type_defn.m"
            else
#line 886 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 881 "prog_io_type_defn.m"
          }
#line 868 "prog_io_type_defn.m"
      }
#line 867 "prog_io_type_defn.m"
  }
#line 859 "prog_io_type_defn.m"
}

#line 859 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_54_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 859 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 859 "prog_io_type_defn.m"
{
#line 867 "prog_io_type_defn.m"
  {
#line 867 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 867 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 864 "prog_io_type_defn.m"
      {
#line 865 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[34]);
#line 864 "prog_io_type_defn.m"
      }
#line 867 "prog_io_type_defn.m"
    else
#line 868 "prog_io_type_defn.m"
      {
#line 868 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 868 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 870 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 870 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
          {
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
              {
#line 870 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 870 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
                  {
#line 870 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
                      {
#line 870 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
                          {
#line 870 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 870 "prog_io_type_defn.m"
                          }
#line 870 "prog_io_type_defn.m"
                      }
#line 870 "prog_io_type_defn.m"
                  }
#line 870 "prog_io_type_defn.m"
              }
#line 870 "prog_io_type_defn.m"
          }
#line 874 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 872 "prog_io_type_defn.m"
          {
#line 872 "prog_io_type_defn.m"
            {
#line 872 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_54_95_95_49_95_95_104_111_49_51_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 873 "prog_io_type_defn.m"
            {
#line 873 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 873 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 873 "prog_io_type_defn.m"
            }
#line 872 "prog_io_type_defn.m"
          }
#line 874 "prog_io_type_defn.m"
        else
#line 875 "prog_io_type_defn.m"
          {
#line 875 "prog_io_type_defn.m"
            {
#line 875 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_54_95_95_49_95_95_104_111_49_51_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 876 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 875 "prog_io_type_defn.m"
          }
#line 881 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 880 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 881 "prog_io_type_defn.m"
        else
#line 881 "prog_io_type_defn.m"
          {
#line 881 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 881 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 883 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 881 "prog_io_type_defn.m"
            else
#line 886 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 881 "prog_io_type_defn.m"
          }
#line 868 "prog_io_type_defn.m"
      }
#line 867 "prog_io_type_defn.m"
  }
#line 859 "prog_io_type_defn.m"
}

#line 859 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0(
#line 859 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 859 "prog_io_type_defn.m"
{
#line 867 "prog_io_type_defn.m"
  {
#line 867 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 867 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 864 "prog_io_type_defn.m"
      {
#line 865 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[38]);
#line 864 "prog_io_type_defn.m"
      }
#line 867 "prog_io_type_defn.m"
    else
#line 868 "prog_io_type_defn.m"
      {
#line 868 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 868 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 870 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 870 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
          {
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
              {
#line 870 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 870 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
                  {
#line 870 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
                      {
#line 870 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
                          {
#line 870 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 870 "prog_io_type_defn.m"
                          }
#line 870 "prog_io_type_defn.m"
                      }
#line 870 "prog_io_type_defn.m"
                  }
#line 870 "prog_io_type_defn.m"
              }
#line 870 "prog_io_type_defn.m"
          }
#line 874 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 872 "prog_io_type_defn.m"
          {
#line 872 "prog_io_type_defn.m"
            {
#line 872 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_52_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 873 "prog_io_type_defn.m"
            {
#line 873 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 873 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 873 "prog_io_type_defn.m"
            }
#line 872 "prog_io_type_defn.m"
          }
#line 874 "prog_io_type_defn.m"
        else
#line 875 "prog_io_type_defn.m"
          {
#line 875 "prog_io_type_defn.m"
            {
#line 875 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_52_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 876 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 875 "prog_io_type_defn.m"
          }
#line 881 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 880 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 881 "prog_io_type_defn.m"
        else
#line 881 "prog_io_type_defn.m"
          {
#line 881 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 881 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 883 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 881 "prog_io_type_defn.m"
            else
#line 886 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 881 "prog_io_type_defn.m"
          }
#line 868 "prog_io_type_defn.m"
      }
#line 867 "prog_io_type_defn.m"
  }
#line 859 "prog_io_type_defn.m"
}

#line 859 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0(
#line 859 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 859 "prog_io_type_defn.m"
{
#line 867 "prog_io_type_defn.m"
  {
#line 867 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 867 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 864 "prog_io_type_defn.m"
      {
#line 865 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[38]);
#line 864 "prog_io_type_defn.m"
      }
#line 867 "prog_io_type_defn.m"
    else
#line 868 "prog_io_type_defn.m"
      {
#line 868 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 868 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 870 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 870 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
          {
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
              {
#line 870 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 870 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
                  {
#line 870 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
                      {
#line 870 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
                          {
#line 870 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 870 "prog_io_type_defn.m"
                          }
#line 870 "prog_io_type_defn.m"
                      }
#line 870 "prog_io_type_defn.m"
                  }
#line 870 "prog_io_type_defn.m"
              }
#line 870 "prog_io_type_defn.m"
          }
#line 874 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 872 "prog_io_type_defn.m"
          {
#line 872 "prog_io_type_defn.m"
            {
#line 872 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_55_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 873 "prog_io_type_defn.m"
            {
#line 873 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 873 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 873 "prog_io_type_defn.m"
            }
#line 872 "prog_io_type_defn.m"
          }
#line 874 "prog_io_type_defn.m"
        else
#line 875 "prog_io_type_defn.m"
          {
#line 875 "prog_io_type_defn.m"
            {
#line 875 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_55_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 876 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 875 "prog_io_type_defn.m"
          }
#line 881 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 880 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 881 "prog_io_type_defn.m"
        else
#line 881 "prog_io_type_defn.m"
          {
#line 881 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 881 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 883 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 881 "prog_io_type_defn.m"
            else
#line 886 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 881 "prog_io_type_defn.m"
          }
#line 868 "prog_io_type_defn.m"
      }
#line 867 "prog_io_type_defn.m"
  }
#line 859 "prog_io_type_defn.m"
}

#line 859 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_52_93_95_48_4_p_0(
#line 859 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 859 "prog_io_type_defn.m"
{
#line 867 "prog_io_type_defn.m"
  {
#line 867 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 867 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 864 "prog_io_type_defn.m"
      {
#line 865 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[37]);
#line 864 "prog_io_type_defn.m"
      }
#line 867 "prog_io_type_defn.m"
    else
#line 868 "prog_io_type_defn.m"
      {
#line 868 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 868 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 870 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 870 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
          {
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
              {
#line 870 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 870 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
                  {
#line 870 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
                      {
#line 870 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
                          {
#line 870 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 870 "prog_io_type_defn.m"
                          }
#line 870 "prog_io_type_defn.m"
                      }
#line 870 "prog_io_type_defn.m"
                  }
#line 870 "prog_io_type_defn.m"
              }
#line 870 "prog_io_type_defn.m"
          }
#line 874 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 872 "prog_io_type_defn.m"
          {
#line 872 "prog_io_type_defn.m"
            {
#line 872 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_48_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 873 "prog_io_type_defn.m"
            {
#line 873 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 873 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 873 "prog_io_type_defn.m"
            }
#line 872 "prog_io_type_defn.m"
          }
#line 874 "prog_io_type_defn.m"
        else
#line 875 "prog_io_type_defn.m"
          {
#line 875 "prog_io_type_defn.m"
            {
#line 875 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_48_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 876 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 875 "prog_io_type_defn.m"
          }
#line 881 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 880 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 881 "prog_io_type_defn.m"
        else
#line 881 "prog_io_type_defn.m"
          {
#line 881 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 881 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 883 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 881 "prog_io_type_defn.m"
            else
#line 886 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 881 "prog_io_type_defn.m"
          }
#line 868 "prog_io_type_defn.m"
      }
#line 867 "prog_io_type_defn.m"
  }
#line 859 "prog_io_type_defn.m"
}

#line 859 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 859 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 859 "prog_io_type_defn.m"
{
#line 867 "prog_io_type_defn.m"
  {
#line 867 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 867 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 864 "prog_io_type_defn.m"
      {
#line 865 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[36]);
#line 864 "prog_io_type_defn.m"
      }
#line 867 "prog_io_type_defn.m"
    else
#line 868 "prog_io_type_defn.m"
      {
#line 868 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 868 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 870 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 870 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
          {
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
              {
#line 870 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 870 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
                  {
#line 870 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
                      {
#line 870 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
                          {
#line 870 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 870 "prog_io_type_defn.m"
                          }
#line 870 "prog_io_type_defn.m"
                      }
#line 870 "prog_io_type_defn.m"
                  }
#line 870 "prog_io_type_defn.m"
              }
#line 870 "prog_io_type_defn.m"
          }
#line 874 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 872 "prog_io_type_defn.m"
          {
#line 872 "prog_io_type_defn.m"
            {
#line 872 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_57_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 873 "prog_io_type_defn.m"
            {
#line 873 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 873 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 873 "prog_io_type_defn.m"
            }
#line 872 "prog_io_type_defn.m"
          }
#line 874 "prog_io_type_defn.m"
        else
#line 875 "prog_io_type_defn.m"
          {
#line 875 "prog_io_type_defn.m"
            {
#line 875 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_57_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 876 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 875 "prog_io_type_defn.m"
          }
#line 881 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 880 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 881 "prog_io_type_defn.m"
        else
#line 881 "prog_io_type_defn.m"
          {
#line 881 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 881 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 883 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 881 "prog_io_type_defn.m"
            else
#line 886 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 881 "prog_io_type_defn.m"
          }
#line 868 "prog_io_type_defn.m"
      }
#line 867 "prog_io_type_defn.m"
  }
#line 859 "prog_io_type_defn.m"
}

#line 893 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(
#line 893 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 893 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 893 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 893 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 893 "prog_io_type_defn.m"
{
#line 910 "prog_io_type_defn.m"
  {
#line 910 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 910 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 910 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LHS_9;
#line 910 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RHS_10;
#line 897 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 897 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_19_19;
#line 897 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 897 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 897 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 897 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 897 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 897 "prog_io_type_defn.m"
      {
#line 897 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 897 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 897 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 897 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 897 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 897 "prog_io_type_defn.m"
          {
#line 897 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 897 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_19_19, (MR_String) "is") == 0);
#line 897 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 897 "prog_io_type_defn.m"
              {
#line 897 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 897 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 897 "prog_io_type_defn.m"
                  {
#line 897 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 897 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 897 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 897 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 897 "prog_io_type_defn.m"
                      {
#line 897 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 897 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 897 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 897 "prog_io_type_defn.m"
                      }
#line 897 "prog_io_type_defn.m"
                  }
#line 897 "prog_io_type_defn.m"
              }
#line 897 "prog_io_type_defn.m"
          }
#line 897 "prog_io_type_defn.m"
      }
#line 910 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 907 "prog_io_type_defn.m"
      {
#line 898 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 898 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 898 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 898 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 898 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 898 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 898 "prog_io_type_defn.m"
          {
#line 898 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 0)));
#line 898 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 1)));
#line 898 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 2)));
#line 898 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 898 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 898 "prog_io_type_defn.m"
              {
#line 898 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 898 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 898 "prog_io_type_defn.m"
                  {
#line 898 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 898 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__Name_5, parse_tree__prog_io_type_defn__V_51_51) == 0);
#line 898 "prog_io_type_defn.m"
                  }
#line 898 "prog_io_type_defn.m"
              }
#line 898 "prog_io_type_defn.m"
          }
#line 907 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 899 "prog_io_type_defn.m"
          {
#line 899 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__RHSResult_13;

#line 967 "prog_io_type_defn.m"
            {
#line 967 "prog_io_type_defn.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(parse_tree__prog_io_type_defn__V_52_52, parse_tree__prog_io_type_defn__V_53_53, parse_tree__prog_io_type_defn__RHS_10, &parse_tree__prog_io_type_defn__RHSResult_13);
            }
#line 903 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
#line 905 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = (MR_Word) parse_tree__prog_io_type_defn__RHSResult_13;
#line 903 "prog_io_type_defn.m"
            else
#line 901 "prog_io_type_defn.m"
              {
#line 901 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RHSResult_13, (MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 902 "prog_io_type_defn.m"
                {
#line 902 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 902 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ParsedRHS_14));
#line 902 "prog_io_type_defn.m"
                }
#line 902 "prog_io_type_defn.m"
                {
#line 902 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 902 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 902 "prog_io_type_defn.m"
                }
#line 901 "prog_io_type_defn.m"
              }
#line 899 "prog_io_type_defn.m"
          }
#line 907 "prog_io_type_defn.m"
        else
#line 908 "prog_io_type_defn.m"
          {
#line 908 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[34]);
#line 908 "prog_io_type_defn.m"
          }
#line 907 "prog_io_type_defn.m"
      }
#line 910 "prog_io_type_defn.m"
    else
#line 911 "prog_io_type_defn.m"
      {
#line 911 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 911 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 911 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 911 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 911 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 913 "prog_io_type_defn.m"
        {
#line 913 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 913 "prog_io_type_defn.m"
        {
#line 913 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 913 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 913 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[155])));
#line 913 "prog_io_type_defn.m"
        }
#line 912 "prog_io_type_defn.m"
        {
#line 912 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 912 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 912 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 912 "prog_io_type_defn.m"
        }
#line 912 "prog_io_type_defn.m"
        {
#line 912 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 912 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 912 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 912 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 912 "prog_io_type_defn.m"
        }
#line 914 "prog_io_type_defn.m"
        {
#line 914 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 914 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 914 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 914 "prog_io_type_defn.m"
        }
#line 914 "prog_io_type_defn.m"
        {
#line 914 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 914 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 914 "prog_io_type_defn.m"
        }
#line 911 "prog_io_type_defn.m"
      }
#line 910 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 910 "prog_io_type_defn.m"
  }
#line 893 "prog_io_type_defn.m"
}

#line 1120 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_109_97_121_98_101_95_119_104_101_114_101_95_100_101_116_97_105_108_115_95_50_95_95_91_49_49_93_95_48_12_f_0(
#line 1120 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_14,
#line 1120 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_15,
#line 1120 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__RepresentationIs_16,
#line 1120 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__InitialisationIs_17,
#line 1120 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__GroundIs_18,
#line 1120 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__AnyIs_19,
#line 1120 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__CStoreIs_20,
#line 1120 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__EqualityIs_21,
#line 1120 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ComparisonIs_22,
#line 1120 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__DirectArgIs_23,
#line 1120 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__WhereTerm_25)
#line 1120 "prog_io_type_defn.m"
{
#line 1133 "prog_io_type_defn.m"
  {
#line 1133 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 1133 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeWhereDetails_26;

#line 1133 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1231 "prog_io_type_defn.m"
      if ((parse_tree__prog_io_type_defn__IsSolverType_14 == (MR_Integer) 0))
#line 1247 "prog_io_type_defn.m"
        {
#line 1234 "prog_io_type_defn.m"
          {
#line 1234 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_46_46;

#line 1234 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RepresentationIs_16)) == (MR_mktag((MR_Integer) 1)));
#line 1234 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1234 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RepresentationIs_16, (MR_Integer) 0)));
#line 1234 "prog_io_type_defn.m"
          }
#line 1235 "prog_io_type_defn.m"
          if (!(parse_tree__prog_io_type_defn__succeeded))
#line 1235 "prog_io_type_defn.m"
            {
#line 1235 "prog_io_type_defn.m"
              {
#line 1235 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 1235 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__InitialisationIs_17)) == (MR_mktag((MR_Integer) 1)));
#line 1235 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1235 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__InitialisationIs_17, (MR_Integer) 0)));
#line 1235 "prog_io_type_defn.m"
              }
#line 1235 "prog_io_type_defn.m"
              if (!(parse_tree__prog_io_type_defn__succeeded))
#line 1235 "prog_io_type_defn.m"
                {
#line 1236 "prog_io_type_defn.m"
                  {
#line 1236 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_48_48;

#line 1236 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__GroundIs_18)) == (MR_mktag((MR_Integer) 1)));
#line 1236 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1236 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__GroundIs_18, (MR_Integer) 0)));
#line 1236 "prog_io_type_defn.m"
                  }
#line 1235 "prog_io_type_defn.m"
                  if (!(parse_tree__prog_io_type_defn__succeeded))
#line 1235 "prog_io_type_defn.m"
                    {
#line 1237 "prog_io_type_defn.m"
                      {
#line 1237 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_49_49;

#line 1237 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__AnyIs_19)) == (MR_mktag((MR_Integer) 1)));
#line 1237 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 1237 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__AnyIs_19, (MR_Integer) 0)));
#line 1237 "prog_io_type_defn.m"
                      }
#line 1235 "prog_io_type_defn.m"
                      if (!(parse_tree__prog_io_type_defn__succeeded))
#line 1238 "prog_io_type_defn.m"
                        {
#line 1238 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_50_50;

#line 1238 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__CStoreIs_20)) == (MR_mktag((MR_Integer) 1)));
#line 1238 "prog_io_type_defn.m"
                          if (parse_tree__prog_io_type_defn__succeeded)
#line 1238 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__CStoreIs_20, (MR_Integer) 0)));
#line 1238 "prog_io_type_defn.m"
                        }
#line 1235 "prog_io_type_defn.m"
                    }
#line 1235 "prog_io_type_defn.m"
                }
#line 1235 "prog_io_type_defn.m"
            }
#line 1247 "prog_io_type_defn.m"
          if (parse_tree__prog_io_type_defn__succeeded)
#line 1242 "prog_io_type_defn.m"
            {
#line 1242 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__V_62_62;
#line 1242 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__V_63_63;
#line 1242 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__V_64_64;
#line 1242 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__V_69_69;
#line 1242 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__Spec_168;

#line 1244 "prog_io_type_defn.m"
              {
#line 1244 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_64_64 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__WhereTerm_25);
              }
#line 1245 "prog_io_type_defn.m"
              {
#line 1245 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1245 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_64_64));
#line 1245 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[151])));
#line 1245 "prog_io_type_defn.m"
              }
#line 1243 "prog_io_type_defn.m"
              {
#line 1243 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1243 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_63_63));
#line 1243 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1243 "prog_io_type_defn.m"
              }
#line 1243 "prog_io_type_defn.m"
              {
#line 1243 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__Spec_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1243 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_168, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1243 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_168, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1243 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_168, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_62_62));
#line 1243 "prog_io_type_defn.m"
              }
#line 1246 "prog_io_type_defn.m"
              {
#line 1246 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_168));
#line 1246 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1246 "prog_io_type_defn.m"
              }
#line 1246 "prog_io_type_defn.m"
              {
#line 1246 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1246 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_69_69));
#line 1246 "prog_io_type_defn.m"
              }
#line 1242 "prog_io_type_defn.m"
            }
#line 1247 "prog_io_type_defn.m"
          else
#line 1248 "prog_io_type_defn.m"
            {
#line 1248 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__MaybeUC_51;

#line 1248 "prog_io_type_defn.m"
              {
#line 1248 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__MaybeUC_51 = parse_tree__prog_io_type_defn__maybe_unify_compare_2_f_0(parse_tree__prog_io_type_defn__EqualityIs_21, parse_tree__prog_io_type_defn__ComparisonIs_22);
              }
#line 1249 "prog_io_type_defn.m"
              {
#line 1249 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1249 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1249 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeUC_51));
#line 1249 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__DirectArgIs_23));
#line 1249 "prog_io_type_defn.m"
              }
#line 1248 "prog_io_type_defn.m"
            }
#line 1247 "prog_io_type_defn.m"
        }
#line 1231 "prog_io_type_defn.m"
      else
#line 1170 "prog_io_type_defn.m"
        {
#line 1162 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_30_30;

#line 1162 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__DirectArgIs_23)) == (MR_mktag((MR_Integer) 1)));
#line 1162 "prog_io_type_defn.m"
          if (parse_tree__prog_io_type_defn__succeeded)
#line 1162 "prog_io_type_defn.m"
            {
#line 1162 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__DirectArgIs_23, (MR_Integer) 0)));
#line 1165 "prog_io_type_defn.m"
              {
#line 1165 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_85_85;
#line 1165 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_86_86;
#line 1165 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_87_87;
#line 1165 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_92_92;
#line 1165 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_156;

#line 1167 "prog_io_type_defn.m"
                {
#line 1167 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_87_87 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__WhereTerm_25);
                }
#line 1168 "prog_io_type_defn.m"
                {
#line 1168 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1168 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_87_87));
#line 1168 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[152])));
#line 1168 "prog_io_type_defn.m"
                }
#line 1166 "prog_io_type_defn.m"
                {
#line 1166 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1166 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_86_86));
#line 1166 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1166 "prog_io_type_defn.m"
                }
#line 1166 "prog_io_type_defn.m"
                {
#line 1166 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1166 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_156, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1166 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1166 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_156, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_85_85));
#line 1166 "prog_io_type_defn.m"
                }
#line 1169 "prog_io_type_defn.m"
                {
#line 1169 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1169 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_92_92, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_156));
#line 1169 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1169 "prog_io_type_defn.m"
                }
#line 1169 "prog_io_type_defn.m"
                {
#line 1169 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1169 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_92_92));
#line 1169 "prog_io_type_defn.m"
                }
#line 1165 "prog_io_type_defn.m"
              }
#line 1162 "prog_io_type_defn.m"
            }
#line 1162 "prog_io_type_defn.m"
          else
#line 1218 "prog_io_type_defn.m"
            {
#line 1218 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__RepnType_31;
#line 1218 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__MaybeInitialisation_32;
#line 1218 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__MaybeGroundInst_33;
#line 1218 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__MaybeAnyInst_34;
#line 1218 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__MaybeEqPred_35;
#line 1218 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__MaybeCmpPred_36;
#line 1218 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__MaybeMutableInfos_37;

#line 1171 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RepresentationIs_16)) == (MR_mktag((MR_Integer) 1)));
#line 1171 "prog_io_type_defn.m"
              if (parse_tree__prog_io_type_defn__succeeded)
#line 1171 "prog_io_type_defn.m"
                {
#line 1171 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__RepnType_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RepresentationIs_16, (MR_Integer) 0)));
#line 1172 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeInitialisation_32 = parse_tree__prog_io_type_defn__InitialisationIs_17;
#line 1173 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeGroundInst_33 = parse_tree__prog_io_type_defn__GroundIs_18;
#line 1174 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeAnyInst_34 = parse_tree__prog_io_type_defn__AnyIs_19;
#line 1175 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeEqPred_35 = parse_tree__prog_io_type_defn__EqualityIs_21;
#line 1176 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeCmpPred_36 = parse_tree__prog_io_type_defn__ComparisonIs_22;
#line 1177 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeMutableInfos_37 = parse_tree__prog_io_type_defn__CStoreIs_20;
#line 1177 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__succeeded = MR_TRUE;
#line 1171 "prog_io_type_defn.m"
                }
#line 1218 "prog_io_type_defn.m"
              if (parse_tree__prog_io_type_defn__succeeded)
#line 1184 "prog_io_type_defn.m"
                {
#line 1184 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__GroundInst_38;
#line 1184 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__AnyInst_39;
#line 1184 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__MutableInfos_40;
#line 1184 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__HowToInit_42;
#line 1184 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__SolverTypeDetails_43;
#line 1184 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_44;
#line 1184 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__MaybeUnifyCompare_45;

#line 1181 "prog_io_type_defn.m"
                  if ((parse_tree__prog_io_type_defn__MaybeGroundInst_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1183 "prog_io_type_defn.m"
                    {
#line 1183 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__GroundInst_38 = parse_tree__prog_mode__ground_inst_0_f_0();
                    }
#line 1181 "prog_io_type_defn.m"
                  else
#line 1180 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__GroundInst_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeGroundInst_33, (MR_Integer) 0)));
#line 1187 "prog_io_type_defn.m"
                  if ((parse_tree__prog_io_type_defn__MaybeAnyInst_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1189 "prog_io_type_defn.m"
                    {
#line 1189 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__AnyInst_39 = parse_tree__prog_mode__ground_inst_0_f_0();
                    }
#line 1187 "prog_io_type_defn.m"
                  else
#line 1186 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__AnyInst_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeAnyInst_34, (MR_Integer) 0)));
#line 1193 "prog_io_type_defn.m"
                  if ((parse_tree__prog_io_type_defn__MaybeMutableInfos_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1195 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MutableInfos_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1193 "prog_io_type_defn.m"
                  else
#line 1192 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MutableInfos_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeMutableInfos_37, (MR_Integer) 0)));
#line 1200 "prog_io_type_defn.m"
                  if ((parse_tree__prog_io_type_defn__MaybeInitialisation_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1202 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__HowToInit_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1200 "prog_io_type_defn.m"
                  else
#line 1198 "prog_io_type_defn.m"
                    {
#line 1198 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__InitPred_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeInitialisation_32, (MR_Integer) 0)));

#line 1199 "prog_io_type_defn.m"
                      {
#line 1199 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HowToInit_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1199 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HowToInit_42, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__InitPred_41));
#line 1199 "prog_io_type_defn.m"
                      }
#line 1198 "prog_io_type_defn.m"
                    }
#line 1204 "prog_io_type_defn.m"
                  {
#line 1204 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__SolverTypeDetails_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1204 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails_43, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__RepnType_31));
#line 1204 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails_43, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__HowToInit_42));
#line 1204 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails_43, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__GroundInst_38));
#line 1204 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails_43, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__AnyInst_39));
#line 1204 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails_43, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__MutableInfos_40));
#line 1204 "prog_io_type_defn.m"
                  }
#line 1206 "prog_io_type_defn.m"
                  {
#line 1206 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1206 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_44, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__SolverTypeDetails_43));
#line 1206 "prog_io_type_defn.m"
                  }
#line 1208 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__MaybeEqPred_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1208 "prog_io_type_defn.m"
                  if (parse_tree__prog_io_type_defn__succeeded)
#line 1209 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__MaybeCmpPred_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1212 "prog_io_type_defn.m"
                  if (parse_tree__prog_io_type_defn__succeeded)
#line 1211 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeUnifyCompare_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1212 "prog_io_type_defn.m"
                  else
#line 1213 "prog_io_type_defn.m"
                    {
#line 1213 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__V_94_94;

#line 1213 "prog_io_type_defn.m"
                      {
#line 1213 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1213 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_94_94, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeEqPred_35));
#line 1213 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_94_94, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeCmpPred_36));
#line 1213 "prog_io_type_defn.m"
                      }
#line 1213 "prog_io_type_defn.m"
                      {
#line 1213 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__MaybeUnifyCompare_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1213 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeUnifyCompare_45, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_94_94));
#line 1213 "prog_io_type_defn.m"
                      }
#line 1213 "prog_io_type_defn.m"
                    }
#line 1216 "prog_io_type_defn.m"
                  {
#line 1216 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1216 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_44));
#line 1216 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeUnifyCompare_45));
#line 1216 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1216 "prog_io_type_defn.m"
                  }
#line 1184 "prog_io_type_defn.m"
                }
#line 1218 "prog_io_type_defn.m"
              else
#line 1227 "prog_io_type_defn.m"
                {
#line 1219 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__RepresentationIs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1227 "prog_io_type_defn.m"
                  if (parse_tree__prog_io_type_defn__succeeded)
#line 1222 "prog_io_type_defn.m"
                    {
#line 1222 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__V_109_109;
#line 1222 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__V_110_110;
#line 1222 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__V_111_111;
#line 1222 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__V_116_116;
#line 1222 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__Spec_158;

#line 1224 "prog_io_type_defn.m"
                      {
#line 1224 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_111_111 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__WhereTerm_25);
                      }
#line 1225 "prog_io_type_defn.m"
                      {
#line 1225 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1225 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_110_110, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_111_111));
#line 1225 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[153])));
#line 1225 "prog_io_type_defn.m"
                      }
#line 1223 "prog_io_type_defn.m"
                      {
#line 1223 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_109_109, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_110_110));
#line 1223 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1223 "prog_io_type_defn.m"
                      }
#line 1223 "prog_io_type_defn.m"
                      {
#line 1223 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__Spec_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1223 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_158, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1223 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1223 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_158, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_109_109));
#line 1223 "prog_io_type_defn.m"
                      }
#line 1226 "prog_io_type_defn.m"
                      {
#line 1226 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1226 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_116_116, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_158));
#line 1226 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1226 "prog_io_type_defn.m"
                      }
#line 1226 "prog_io_type_defn.m"
                      {
#line 1226 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1226 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_116_116));
#line 1226 "prog_io_type_defn.m"
                      }
#line 1222 "prog_io_type_defn.m"
                    }
#line 1227 "prog_io_type_defn.m"
                  else
#line 1228 "prog_io_type_defn.m"
                    {
#line 1228 "prog_io_type_defn.m"
                      {
#line 1228 "prog_io_type_defn.m"
                        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_io_type_defn", (MR_String) "function \140parse_tree.prog_io_type_defn.make_maybe_where_details_2\'/12", (MR_String) "make_maybe_where_details_2: shouldn\'t have reached this point! (1)");
                      }
#line 1228 "prog_io_type_defn.m"
                    }
#line 1227 "prog_io_type_defn.m"
                }
#line 1218 "prog_io_type_defn.m"
            }
#line 1170 "prog_io_type_defn.m"
        }
#line 1133 "prog_io_type_defn.m"
    else
#line 1148 "prog_io_type_defn.m"
      {
#line 1137 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__RepresentationIs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1137 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1137 "prog_io_type_defn.m"
          {
#line 1138 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__InitialisationIs_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1137 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1137 "prog_io_type_defn.m"
              {
#line 1139 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__GroundIs_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1137 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1137 "prog_io_type_defn.m"
                  {
#line 1140 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__AnyIs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1137 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1137 "prog_io_type_defn.m"
                      {
#line 1141 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__EqualityIs_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1137 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 1137 "prog_io_type_defn.m"
                          {
#line 1142 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__ComparisonIs_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1137 "prog_io_type_defn.m"
                            if (parse_tree__prog_io_type_defn__succeeded)
#line 1137 "prog_io_type_defn.m"
                              {
#line 1143 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__CStoreIs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1137 "prog_io_type_defn.m"
                                if (parse_tree__prog_io_type_defn__succeeded)
#line 1144 "prog_io_type_defn.m"
                                  parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__DirectArgIs_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1137 "prog_io_type_defn.m"
                              }
#line 1137 "prog_io_type_defn.m"
                          }
#line 1137 "prog_io_type_defn.m"
                      }
#line 1137 "prog_io_type_defn.m"
                  }
#line 1137 "prog_io_type_defn.m"
              }
#line 1137 "prog_io_type_defn.m"
          }
#line 1148 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1146 "prog_io_type_defn.m"
          {
#line 1146 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_124_124;
#line 1146 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_125_125;

#line 1147 "prog_io_type_defn.m"
            {
#line 1147 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_125_125, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__IsSolverType_14));
#line 1147 "prog_io_type_defn.m"
            }
#line 1147 "prog_io_type_defn.m"
            {
#line 1147 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_124_124, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_125_125));
#line 1147 "prog_io_type_defn.m"
            }
#line 1146 "prog_io_type_defn.m"
            {
#line 1146 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1146 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_124_124));
#line 1146 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1146 "prog_io_type_defn.m"
            }
#line 1146 "prog_io_type_defn.m"
          }
#line 1148 "prog_io_type_defn.m"
        else
#line 1152 "prog_io_type_defn.m"
          {
#line 1152 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Spec_29;
#line 1152 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_146_146;
#line 1152 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_147_147;
#line 1152 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_148_148;
#line 1152 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_153_153;

#line 1154 "prog_io_type_defn.m"
            {
#line 1154 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_148_148 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__WhereTerm_25);
            }
#line 1154 "prog_io_type_defn.m"
            {
#line 1154 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_147_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1154 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_147_147, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_148_148));
#line 1154 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_147_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[154])));
#line 1154 "prog_io_type_defn.m"
            }
#line 1153 "prog_io_type_defn.m"
            {
#line 1153 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_146_146, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_147_147));
#line 1153 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_146_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1153 "prog_io_type_defn.m"
            }
#line 1153 "prog_io_type_defn.m"
            {
#line 1153 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Spec_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1153 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1153 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1153 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_29, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_146_146));
#line 1153 "prog_io_type_defn.m"
            }
#line 1155 "prog_io_type_defn.m"
            {
#line 1155 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_153_153, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_29));
#line 1155 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_153_153, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1155 "prog_io_type_defn.m"
            }
#line 1155 "prog_io_type_defn.m"
            {
#line 1155 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1155 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_153_153));
#line 1155 "prog_io_type_defn.m"
            }
#line 1152 "prog_io_type_defn.m"
          }
#line 1148 "prog_io_type_defn.m"
      }
#line 1133 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeWhereDetails_26;
#line 1133 "prog_io_type_defn.m"
  }
#line 1120 "prog_io_type_defn.m"
}

#line 970 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_2_f_0(
#line 970 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5)
#line 970 "prog_io_type_defn.m"
{
#line 978 "prog_io_type_defn.m"
  {
#line 978 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 978 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeInst_6;
#line 978 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Inst_7;

#line 974 "prog_io_type_defn.m"
    {
#line 974 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 1, parse_tree__prog_io_type_defn__Term_5, &parse_tree__prog_io_type_defn__Inst_7);
    }
#line 974 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 974 "prog_io_type_defn.m"
      {
#line 975 "prog_io_type_defn.m"
        {
#line 975 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__prog_io_type_defn__Inst_7);
        }
#line 975 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = !(parse_tree__prog_io_type_defn__succeeded);
#line 974 "prog_io_type_defn.m"
      }
#line 978 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 977 "prog_io_type_defn.m"
      {
#line 977 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__MaybeInst_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 977 "prog_io_type_defn.m"
        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeInst_6, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Inst_7));
#line 977 "prog_io_type_defn.m"
      }
#line 978 "prog_io_type_defn.m"
    else
#line 979 "prog_io_type_defn.m"
      {
#line 979 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_9;
#line 979 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 979 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 979 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 979 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 981 "prog_io_type_defn.m"
        {
#line 981 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_20_20 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_5);
        }
#line 981 "prog_io_type_defn.m"
        {
#line 981 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 981 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_20_20));
#line 981 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[150])));
#line 981 "prog_io_type_defn.m"
        }
#line 980 "prog_io_type_defn.m"
        {
#line 980 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 980 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_19_19));
#line 980 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 980 "prog_io_type_defn.m"
        }
#line 980 "prog_io_type_defn.m"
        {
#line 980 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 980 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 980 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 980 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_9, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_18_18));
#line 980 "prog_io_type_defn.m"
        }
#line 982 "prog_io_type_defn.m"
        {
#line 982 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 982 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_9));
#line 982 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 982 "prog_io_type_defn.m"
        }
#line 982 "prog_io_type_defn.m"
        {
#line 982 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeInst_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 982 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeInst_6, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 982 "prog_io_type_defn.m"
        }
#line 979 "prog_io_type_defn.m"
      }
#line 978 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeInst_6;
#line 978 "prog_io_type_defn.m"
  }
#line 970 "prog_io_type_defn.m"
}

#line 859 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_attribute__ho10_4_p_0(
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 859 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 859 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 859 "prog_io_type_defn.m"
{
#line 867 "prog_io_type_defn.m"
  {
#line 867 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 867 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 864 "prog_io_type_defn.m"
      {
#line 865 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[23]);
#line 864 "prog_io_type_defn.m"
      }
#line 867 "prog_io_type_defn.m"
    else
#line 868 "prog_io_type_defn.m"
      {
#line 868 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 868 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 870 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 870 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 870 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
          {
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 870 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
              {
#line 870 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 870 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
                  {
#line 870 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
                      {
#line 870 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 870 "prog_io_type_defn.m"
                          {
#line 870 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 870 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 870 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 870 "prog_io_type_defn.m"
                          }
#line 870 "prog_io_type_defn.m"
                      }
#line 870 "prog_io_type_defn.m"
                  }
#line 870 "prog_io_type_defn.m"
              }
#line 870 "prog_io_type_defn.m"
          }
#line 874 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 872 "prog_io_type_defn.m"
          {
#line 872 "prog_io_type_defn.m"
            {
#line 872 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 873 "prog_io_type_defn.m"
            {
#line 873 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 873 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 873 "prog_io_type_defn.m"
            }
#line 872 "prog_io_type_defn.m"
          }
#line 874 "prog_io_type_defn.m"
        else
#line 875 "prog_io_type_defn.m"
          {
#line 875 "prog_io_type_defn.m"
            {
#line 875 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(parse_tree__prog_io_type_defn__Term_9);
            }
#line 876 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 875 "prog_io_type_defn.m"
          }
#line 881 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 880 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 881 "prog_io_type_defn.m"
        else
#line 881 "prog_io_type_defn.m"
          {
#line 881 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 881 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 883 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 881 "prog_io_type_defn.m"
            else
#line 886 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 881 "prog_io_type_defn.m"
          }
#line 868 "prog_io_type_defn.m"
      }
#line 867 "prog_io_type_defn.m"
  }
#line 859 "prog_io_type_defn.m"
}

#line 457 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__457__1_2_p_0(
#line 457 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ExistQVars_19,
#line 457 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_280)
#line 457 "prog_io_type_defn.m"
{
#line 457 "prog_io_type_defn.m"
  {
#line 457 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 457 "prog_io_type_defn.m"
    {
#line 457 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], parse_tree__prog_io_type_defn__ExistQVars_19, ((MR_Box) (parse_tree__prog_io_type_defn__HeadVar__2_280)));
    }
#line 457 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 457 "prog_io_type_defn.m"
  }
#line 457 "prog_io_type_defn.m"
}

#line 429 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__429__1_2_p_0(
#line 429 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_125,
#line 429 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_268)
#line 429 "prog_io_type_defn.m"
{
#line 429 "prog_io_type_defn.m"
  {
#line 429 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 429 "prog_io_type_defn.m"
    {
#line 429 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], parse_tree__prog_io_type_defn__HeadVar__1_125, ((MR_Box) (parse_tree__prog_io_type_defn__HeadVar__2_268)));
    }
#line 429 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 429 "prog_io_type_defn.m"
  }
#line 429 "prog_io_type_defn.m"
}

#line 425 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__425__1_1_f_0(
#line 425 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_122)
#line 425 "prog_io_type_defn.m"
{
#line 425 "prog_io_type_defn.m"
  {
#line 425 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 425 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__2_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_122, (MR_Integer) 1)));
#line 425 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_122, (MR_Integer) 0)));
#line 425 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_122, (MR_Integer) 2)));
#line 425 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_122, (MR_Integer) 3)));

#line 425 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__2_123;
#line 425 "prog_io_type_defn.m"
  }
#line 425 "prog_io_type_defn.m"
}

#line 380 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__380__1_2_p_0(
#line 380 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_60,
#line 380 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_254)
#line 380 "prog_io_type_defn.m"
{
#line 380 "prog_io_type_defn.m"
  {
#line 380 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 380 "prog_io_type_defn.m"
    {
#line 380 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], parse_tree__prog_io_type_defn__HeadVar__1_60, ((MR_Box) (parse_tree__prog_io_type_defn__HeadVar__2_254)));
    }
#line 380 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 380 "prog_io_type_defn.m"
  }
#line 380 "prog_io_type_defn.m"
}

#line 377 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__377__1_1_f_0(
#line 377 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_57)
#line 377 "prog_io_type_defn.m"
{
#line 377 "prog_io_type_defn.m"
  {
#line 377 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 377 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__2_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_57, (MR_Integer) 1)));
#line 377 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_57, (MR_Integer) 0)));
#line 377 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_57, (MR_Integer) 2)));
#line 377 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_57, (MR_Integer) 3)));

#line 377 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__2_58;
#line 377 "prog_io_type_defn.m"
  }
#line 377 "prog_io_type_defn.m"
}

#line 227 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_constructor__227__1_2_p_0(
#line 227 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_46,
#line 227 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_47)
#line 227 "prog_io_type_defn.m"
{
#line 227 "prog_io_type_defn.m"
  {
#line 227 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 227 "prog_io_type_defn.m"
    {
#line 227 "prog_io_type_defn.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__HeadVar__1_46, parse_tree__prog_io_type_defn__HeadVar__2_47);
#line 227 "prog_io_type_defn.m"
      return;
    }
#line 227 "prog_io_type_defn.m"
  }
#line 227 "prog_io_type_defn.m"
}

#line 1302 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_type_defn_head__1302__1_2_p_0(
#line 1302 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_101,
#line 1302 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_102)
#line 1302 "prog_io_type_defn.m"
{
#line 1302 "prog_io_type_defn.m"
  {
#line 1302 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 1302 "prog_io_type_defn.m"
    {
#line 1302 "prog_io_type_defn.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__HeadVar__1_101, parse_tree__prog_io_type_defn__HeadVar__2_102);
#line 1302 "prog_io_type_defn.m"
      return;
    }
#line 1302 "prog_io_type_defn.m"
  }
#line 1302 "prog_io_type_defn.m"
}

#line 1254 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__maybe_unify_compare_2_f_0(
#line 1254 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeEqPred_4,
#line 1254 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCmpPred_5)
#line 1254 "prog_io_type_defn.m"
{
#line 1257 "prog_io_type_defn.m"
  {
#line 1257 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__MaybeEqPred_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1257 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3;

#line 1259 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1260 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__MaybeCmpPred_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1257 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1257 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1257 "prog_io_type_defn.m"
    else
#line 1264 "prog_io_type_defn.m"
      {
#line 1264 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_6_6;

#line 1264 "prog_io_type_defn.m"
        {
#line 1264 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1264 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_6_6, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeEqPred_4));
#line 1264 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_6_6, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeCmpPred_5));
#line 1264 "prog_io_type_defn.m"
        }
#line 1257 "prog_io_type_defn.m"
        {
#line 1257 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1257 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_6_6));
#line 1257 "prog_io_type_defn.m"
        }
#line 1264 "prog_io_type_defn.m"
      }
#line 1257 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__3_3;
#line 1257 "prog_io_type_defn.m"
  }
#line 1254 "prog_io_type_defn.m"
}

#line 1074 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__make_maybe_where_details_12_f_0(
#line 1074 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_14,
#line 1074 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_15,
#line 1074 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeRepresentationIs_16,
#line 1074 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeInitialisationIs_17,
#line 1074 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeGroundIs_18,
#line 1074 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeAnyIs_19,
#line 1074 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCStoreIs_20,
#line 1074 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeEqualityIs_21,
#line 1074 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeComparisonIs_22,
#line 1074 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgIs_23,
#line 1074 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeWhereEnd_24,
#line 1074 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__WhereTerm_25)
#line 1074 "prog_io_type_defn.m"
{
#line 1105 "prog_io_type_defn.m"
  {
#line 1105 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_15)) == (MR_mktag((MR_Integer) 1)));
#line 1105 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeWhereDetails_26;
#line 1105 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_27;
#line 1105 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RepresentationIs_28;
#line 1105 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__InitialisationIs_29;
#line 1105 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__GroundIs_30;
#line 1105 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__AnyIs_31;
#line 1105 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__CStoreIs_32;
#line 1105 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__EqualityIs_33;
#line 1105 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__ComparisonIs_34;
#line 1105 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__DirectArgIs_35;
#line 1099 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__WhereEnd_36;

#line 1090 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1090 "prog_io_type_defn.m"
      {
#line 1090 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_15, (MR_Integer) 0)));
#line 1091 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeRepresentationIs_16)) == (MR_mktag((MR_Integer) 1)));
#line 1091 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1091 "prog_io_type_defn.m"
          {
#line 1091 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__RepresentationIs_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeRepresentationIs_16, (MR_Integer) 0)));
#line 1092 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeInitialisationIs_17)) == (MR_mktag((MR_Integer) 1)));
#line 1092 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1092 "prog_io_type_defn.m"
              {
#line 1092 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__InitialisationIs_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeInitialisationIs_17, (MR_Integer) 0)));
#line 1093 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeGroundIs_18)) == (MR_mktag((MR_Integer) 1)));
#line 1093 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1093 "prog_io_type_defn.m"
                  {
#line 1093 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__GroundIs_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeGroundIs_18, (MR_Integer) 0)));
#line 1094 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeAnyIs_19)) == (MR_mktag((MR_Integer) 1)));
#line 1094 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1094 "prog_io_type_defn.m"
                      {
#line 1094 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__AnyIs_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeAnyIs_19, (MR_Integer) 0)));
#line 1095 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeCStoreIs_20)) == (MR_mktag((MR_Integer) 1)));
#line 1095 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 1095 "prog_io_type_defn.m"
                          {
#line 1095 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__CStoreIs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeCStoreIs_20, (MR_Integer) 0)));
#line 1096 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeEqualityIs_21)) == (MR_mktag((MR_Integer) 1)));
#line 1096 "prog_io_type_defn.m"
                            if (parse_tree__prog_io_type_defn__succeeded)
#line 1096 "prog_io_type_defn.m"
                              {
#line 1096 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__EqualityIs_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeEqualityIs_21, (MR_Integer) 0)));
#line 1097 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeComparisonIs_22)) == (MR_mktag((MR_Integer) 1)));
#line 1097 "prog_io_type_defn.m"
                                if (parse_tree__prog_io_type_defn__succeeded)
#line 1097 "prog_io_type_defn.m"
                                  {
#line 1097 "prog_io_type_defn.m"
                                    parse_tree__prog_io_type_defn__ComparisonIs_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeComparisonIs_22, (MR_Integer) 0)));
#line 1098 "prog_io_type_defn.m"
                                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeDirectArgIs_23)) == (MR_mktag((MR_Integer) 1)));
#line 1098 "prog_io_type_defn.m"
                                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1098 "prog_io_type_defn.m"
                                      {
#line 1098 "prog_io_type_defn.m"
                                        parse_tree__prog_io_type_defn__DirectArgIs_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeDirectArgIs_23, (MR_Integer) 0)));
#line 1099 "prog_io_type_defn.m"
                                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeWhereEnd_24)) == (MR_mktag((MR_Integer) 1)));
#line 1099 "prog_io_type_defn.m"
                                        if (parse_tree__prog_io_type_defn__succeeded)
#line 1099 "prog_io_type_defn.m"
                                          parse_tree__prog_io_type_defn__WhereEnd_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereEnd_24, (MR_Integer) 0)));
#line 1098 "prog_io_type_defn.m"
                                      }
#line 1097 "prog_io_type_defn.m"
                                  }
#line 1096 "prog_io_type_defn.m"
                              }
#line 1095 "prog_io_type_defn.m"
                          }
#line 1094 "prog_io_type_defn.m"
                      }
#line 1093 "prog_io_type_defn.m"
                  }
#line 1092 "prog_io_type_defn.m"
              }
#line 1091 "prog_io_type_defn.m"
          }
#line 1090 "prog_io_type_defn.m"
      }
#line 1105 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1101 "prog_io_type_defn.m"
      {
#line 1101 "prog_io_type_defn.m"
        return parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_109_97_121_98_101_95_119_104_101_114_101_95_100_101_116_97_105_108_115_95_50_95_95_91_49_49_93_95_48_12_f_0(parse_tree__prog_io_type_defn__IsSolverType_14, parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_27, parse_tree__prog_io_type_defn__RepresentationIs_28, parse_tree__prog_io_type_defn__InitialisationIs_29, parse_tree__prog_io_type_defn__GroundIs_30, parse_tree__prog_io_type_defn__AnyIs_31, parse_tree__prog_io_type_defn__CStoreIs_32, parse_tree__prog_io_type_defn__EqualityIs_33, parse_tree__prog_io_type_defn__ComparisonIs_34, parse_tree__prog_io_type_defn__DirectArgIs_35, parse_tree__prog_io_type_defn__WhereTerm_25);
      }
#line 1105 "prog_io_type_defn.m"
    else
#line 1116 "prog_io_type_defn.m"
      {
#line 1116 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 1116 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeInfo_57_57 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[10];
#line 1116 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeInfo_59_59;
#line 1116 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeInfo_60_60;
#line 1116 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Specs_37;
#line 1116 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_38_38;
#line 1116 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_39_39;
#line 1116 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 1116 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 1116 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 1116 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_43_43;
#line 1116 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_44_44;
#line 1116 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_45_45;
#line 1116 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_46_46;
#line 1116 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;
#line 1116 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_48_48;
#line 1116 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_49_49;
#line 1116 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_50_50;
#line 1116 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_51_51;
#line 1116 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 1116 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_53_53;
#line 1116 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_54_54;
#line 1116 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_55_55;

#line 1107 "prog_io_type_defn.m"
        {
#line 1107 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_38_38 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_57_57, parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_15);
        }
#line 1108 "prog_io_type_defn.m"
        {
#line 1108 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[11], parse_tree__prog_io_type_defn__MaybeRepresentationIs_16);
        }
#line 6650 "parse_tree.prog_io_type_defn.c"
        parse_tree__prog_io_type_defn__TypeInfo_59_59 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[12];
#line 1109 "prog_io_type_defn.m"
        {
#line 1109 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_59_59, parse_tree__prog_io_type_defn__MaybeInitialisationIs_17);
        }
#line 6657 "parse_tree.prog_io_type_defn.c"
        parse_tree__prog_io_type_defn__TypeInfo_60_60 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[13];
#line 1110 "prog_io_type_defn.m"
        {
#line 1110 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_44_44 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_60_60, parse_tree__prog_io_type_defn__MaybeGroundIs_18);
        }
#line 1111 "prog_io_type_defn.m"
        {
#line 1111 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_46_46 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_60_60, parse_tree__prog_io_type_defn__MaybeAnyIs_19);
        }
#line 1112 "prog_io_type_defn.m"
        {
#line 1112 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_48_48 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[14], parse_tree__prog_io_type_defn__MaybeCStoreIs_20);
        }
#line 1113 "prog_io_type_defn.m"
        {
#line 1113 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_50_50 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_59_59, parse_tree__prog_io_type_defn__MaybeEqualityIs_21);
        }
#line 1114 "prog_io_type_defn.m"
        {
#line 1114 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_52_52 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_59_59, parse_tree__prog_io_type_defn__MaybeComparisonIs_22);
        }
#line 1115 "prog_io_type_defn.m"
        {
#line 1115 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_54_54 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[7], parse_tree__prog_io_type_defn__MaybeDirectArgIs_23);
        }
#line 1115 "prog_io_type_defn.m"
        {
#line 1115 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_55_55 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_57_57, parse_tree__prog_io_type_defn__MaybeWhereEnd_24);
        }
#line 1114 "prog_io_type_defn.m"
        {
#line 1114 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_53_53 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_54_54, parse_tree__prog_io_type_defn__V_55_55);
        }
#line 1113 "prog_io_type_defn.m"
        {
#line 1113 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_51_51 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_52_52, parse_tree__prog_io_type_defn__V_53_53);
        }
#line 1112 "prog_io_type_defn.m"
        {
#line 1112 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_49_49 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_50_50, parse_tree__prog_io_type_defn__V_51_51);
        }
#line 1111 "prog_io_type_defn.m"
        {
#line 1111 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_48_48, parse_tree__prog_io_type_defn__V_49_49);
        }
#line 1110 "prog_io_type_defn.m"
        {
#line 1110 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_45_45 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_46_46, parse_tree__prog_io_type_defn__V_47_47);
        }
#line 1109 "prog_io_type_defn.m"
        {
#line 1109 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_43_43 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_44_44, parse_tree__prog_io_type_defn__V_45_45);
        }
#line 1108 "prog_io_type_defn.m"
        {
#line 1108 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_42_42, parse_tree__prog_io_type_defn__V_43_43);
        }
#line 1107 "prog_io_type_defn.m"
        {
#line 1107 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_39_39 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_40_40, parse_tree__prog_io_type_defn__V_41_41);
        }
#line 1106 "prog_io_type_defn.m"
        {
#line 1106 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Specs_37 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_38_38, parse_tree__prog_io_type_defn__V_39_39);
        }
#line 1117 "prog_io_type_defn.m"
        {
#line 1117 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1117 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_37));
#line 1117 "prog_io_type_defn.m"
        }
#line 1116 "prog_io_type_defn.m"
      }
#line 1105 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeWhereDetails_26;
#line 1105 "prog_io_type_defn.m"
  }
#line 1074 "prog_io_type_defn.m"
}

#line 1065 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_end_2_p_0(
#line 1065 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 1065 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_2)
#line 1065 "prog_io_type_defn.m"
{
#line 1067 "prog_io_type_defn.m"
  {
#line 1067 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 1067 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1067 "prog_io_type_defn.m"
      {
#line 1067 "prog_io_type_defn.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1067 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[22]);
#line 1067 "prog_io_type_defn.m"
      }
#line 1067 "prog_io_type_defn.m"
    else
#line 1068 "prog_io_type_defn.m"
      {
#line 1068 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__1_1, (MR_Integer) 0)));
#line 1068 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_6;
#line 1068 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_8_8;
#line 1068 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 1068 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 1068 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_22_22;

#line 1072 "prog_io_type_defn.m"
        {
#line 1072 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_22_22 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_5);
        }
#line 1072 "prog_io_type_defn.m"
        {
#line 1072 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1072 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_21_21, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_22_22));
#line 1072 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[149])));
#line 1072 "prog_io_type_defn.m"
        }
#line 1071 "prog_io_type_defn.m"
        {
#line 1071 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1071 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_21_21));
#line 1071 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1071 "prog_io_type_defn.m"
        }
#line 1071 "prog_io_type_defn.m"
        {
#line 1071 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1071 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1071 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1071 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_6, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_20_20));
#line 1071 "prog_io_type_defn.m"
        }
#line 1068 "prog_io_type_defn.m"
        {
#line 1068 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1068 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_8_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_6));
#line 1068 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1068 "prog_io_type_defn.m"
        }
#line 1068 "prog_io_type_defn.m"
        {
#line 1068 "prog_io_type_defn.m"
          MR_Word base;
#line 1068 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1068 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__HeadVar__2_2 = base;
#line 1068 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_8_8));
#line 1068 "prog_io_type_defn.m"
        }
#line 1068 "prog_io_type_defn.m"
      }
#line 1067 "prog_io_type_defn.m"
  }
#line 1065 "prog_io_type_defn.m"
}

#line 1049 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_direct_arg_functor_4_p_0(
#line 1049 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 1049 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 1049 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7,
#line 1049 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeFunctor_8)
#line 1049 "prog_io_type_defn.m"
{
#line 1055 "prog_io_type_defn.m"
  {
#line 1055 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 1055 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Name_9;
#line 1055 "prog_io_type_defn.m"
    MR_Integer parse_tree__prog_io_type_defn__Arity_10;

#line 1053 "prog_io_type_defn.m"
    {
#line 1053 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_util__parse_name_and_arity_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__Term_7, &parse_tree__prog_io_type_defn__Name_9, &parse_tree__prog_io_type_defn__Arity_10);
    }
#line 1055 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1054 "prog_io_type_defn.m"
      {
#line 1054 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_14_14;

#line 1054 "prog_io_type_defn.m"
        {
#line 1054 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1054 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_14_14, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_9));
#line 1054 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Arity_10));
#line 1054 "prog_io_type_defn.m"
        }
#line 1054 "prog_io_type_defn.m"
        {
#line 1054 "prog_io_type_defn.m"
          MR_Word base;
#line 1054 "prog_io_type_defn.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1054 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeFunctor_8 = base;
#line 1054 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_14_14));
#line 1054 "prog_io_type_defn.m"
        }
#line 1054 "prog_io_type_defn.m"
      }
#line 1055 "prog_io_type_defn.m"
    else
#line 1056 "prog_io_type_defn.m"
      {
#line 1056 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_46_46 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1056 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__TermStr_11;
#line 1056 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Pieces_12;
#line 1056 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_13;
#line 1056 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_17_17;
#line 1056 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 1056 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 1056 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_26_26;
#line 1056 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_27_27;
#line 1056 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_36_36;
#line 1056 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_37_37;
#line 1056 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_38_38;
#line 1056 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_39_39;
#line 1056 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 1056 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_43_43;

#line 1056 "prog_io_type_defn.m"
        {
#line 1056 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__TermStr_11 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_46_46, parse_tree__prog_io_type_defn__VarSet_6, parse_tree__prog_io_type_defn__Term_7);
        }
#line 1059 "prog_io_type_defn.m"
        {
#line 1059 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_27_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(2), parse_tree__prog_io_type_defn__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TermStr_11));
#line 1059 "prog_io_type_defn.m"
        }
#line 1059 "prog_io_type_defn.m"
        {
#line 1059 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_27_27));
#line 1059 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[21])));
#line 1059 "prog_io_type_defn.m"
        }
#line 1058 "prog_io_type_defn.m"
        {
#line 1058 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_23_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[148])));
#line 1058 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_23_23, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_26_26));
#line 1058 "prog_io_type_defn.m"
        }
#line 1058 "prog_io_type_defn.m"
        {
#line 1058 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_defn_scalar_common_2[2])));
#line 1058 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_23_23));
#line 1058 "prog_io_type_defn.m"
        }
#line 1057 "prog_io_type_defn.m"
        {
#line 1057 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1057 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[147])));
#line 1057 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_20_20));
#line 1057 "prog_io_type_defn.m"
        }
#line 1057 "prog_io_type_defn.m"
        {
#line 1057 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1057 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[146])));
#line 1057 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_12, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_17_17));
#line 1057 "prog_io_type_defn.m"
        }
#line 1061 "prog_io_type_defn.m"
        {
#line 1061 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_38_38 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_46_46, parse_tree__prog_io_type_defn__Term_7);
        }
#line 1061 "prog_io_type_defn.m"
        {
#line 1061 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1061 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_12));
#line 1061 "prog_io_type_defn.m"
        }
#line 1061 "prog_io_type_defn.m"
        {
#line 1061 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1061 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 1061 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1061 "prog_io_type_defn.m"
        }
#line 1061 "prog_io_type_defn.m"
        {
#line 1061 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1061 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_38_38));
#line 1061 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_37_37, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_39_39));
#line 1061 "prog_io_type_defn.m"
        }
#line 1060 "prog_io_type_defn.m"
        {
#line 1060 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1060 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_37_37));
#line 1060 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1060 "prog_io_type_defn.m"
        }
#line 1060 "prog_io_type_defn.m"
        {
#line 1060 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1060 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1060 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1060 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_13, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_36_36));
#line 1060 "prog_io_type_defn.m"
        }
#line 1062 "prog_io_type_defn.m"
        {
#line 1062 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1062 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_13));
#line 1062 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1062 "prog_io_type_defn.m"
        }
#line 1062 "prog_io_type_defn.m"
        {
#line 1062 "prog_io_type_defn.m"
          MR_Word base;
#line 1062 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1062 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeFunctor_8 = base;
#line 1062 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_43_43));
#line 1062 "prog_io_type_defn.m"
        }
#line 1056 "prog_io_type_defn.m"
      }
#line 1055 "prog_io_type_defn.m"
  }
#line 1049 "prog_io_type_defn.m"
}

#line 1038 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0_1(
#line 1038 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1038 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1038 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2)
#line 1038 "prog_io_type_defn.m"
{
#line 1038 "prog_io_type_defn.m"
  {
#line 1038 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 1038 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv0_MaybeFunctor_8;

#line 1038 "prog_io_type_defn.m"
    {
#line 1038 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_direct_arg_functor_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1), &parse_tree__prog_io_type_defn__conv0_MaybeFunctor_8);
    }
#line 1038 "prog_io_type_defn.m"
    *parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv0_MaybeFunctor_8));
#line 1038 "prog_io_type_defn.m"
  }
#line 1038 "prog_io_type_defn.m"
}

#line 1033 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0(
#line 1033 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 1033 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 1033 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 1033 "prog_io_type_defn.m"
{
#line 1040 "prog_io_type_defn.m"
  {
#line 1040 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 1040 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgCtors_8;
#line 1040 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__FunctorsTerms_9;

#line 1037 "prog_io_type_defn.m"
    {
#line 1037 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_type_defn__Term_7, &parse_tree__prog_io_type_defn__FunctorsTerms_9);
    }
#line 1040 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1038 "prog_io_type_defn.m"
      {
#line 1038 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 1038 "prog_io_type_defn.m"
        {
#line 1038 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1038 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_12_12, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_6[0]));
#line 1038 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_12_12, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0_1));
#line 1038 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1038 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_12_12, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__ModuleName_5));
#line 1038 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_12_12, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__VarSet_6));
#line 1038 "prog_io_type_defn.m"
        }
#line 1038 "prog_io_type_defn.m"
        {
#line 1038 "prog_io_type_defn.m"
          parse_tree__prog_io_util__map_parser_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0, parse_tree__prog_io_type_defn__V_12_12, parse_tree__prog_io_type_defn__FunctorsTerms_9, &parse_tree__prog_io_type_defn__MaybeDirectArgCtors_8);
        }
#line 1038 "prog_io_type_defn.m"
      }
#line 1040 "prog_io_type_defn.m"
    else
#line 1042 "prog_io_type_defn.m"
      {
#line 1042 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_11;
#line 1042 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_26_26;
#line 1042 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_27_27;
#line 1042 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_28_28;
#line 1042 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_33_33;

#line 1044 "prog_io_type_defn.m"
        {
#line 1044 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_28_28 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 1045 "prog_io_type_defn.m"
        {
#line 1045 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1045 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_28_28));
#line 1045 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[145])));
#line 1045 "prog_io_type_defn.m"
        }
#line 1043 "prog_io_type_defn.m"
        {
#line 1043 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1043 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_27_27));
#line 1043 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1043 "prog_io_type_defn.m"
        }
#line 1043 "prog_io_type_defn.m"
        {
#line 1043 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1043 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1043 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1043 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_11, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_26_26));
#line 1043 "prog_io_type_defn.m"
        }
#line 1046 "prog_io_type_defn.m"
        {
#line 1046 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1046 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_11));
#line 1046 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1046 "prog_io_type_defn.m"
        }
#line 1046 "prog_io_type_defn.m"
        {
#line 1046 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeDirectArgCtors_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1046 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeDirectArgCtors_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_33_33));
#line 1046 "prog_io_type_defn.m"
        }
#line 1042 "prog_io_type_defn.m"
      }
#line 1040 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeDirectArgCtors_8;
#line 1040 "prog_io_type_defn.m"
  }
#line 1033 "prog_io_type_defn.m"
}

#line 1015 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_mutable_decl_term_3_p_0(
#line 1015 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_4,
#line 1015 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5,
#line 1015 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeMutableInfo_6)
#line 1015 "prog_io_type_defn.m"
{
#line 1026 "prog_io_type_defn.m"
  {
#line 1026 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1026 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeMutableInfoPrime_10;
#line 1020 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_32_32;
#line 1020 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Args_7;
#line 1020 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Context_8;
#line 1020 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__VarSet_9;
#line 1020 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_13_13;
#line 1020 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_14_14;
#line 1020 "prog_io_type_defn.m"
    MR_Integer parse_tree__prog_io_type_defn__V_15_15;

#line 1020 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1020 "prog_io_type_defn.m"
      {
#line 1020 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 0)));
#line 1020 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Args_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 1)));
#line 1020 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 2)));
#line 1020 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 1020 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1020 "prog_io_type_defn.m"
          {
#line 1020 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_13_13, (MR_Integer) 0)));
#line 1020 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_14_14, (MR_String) "mutable") == 0);
#line 1020 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1020 "prog_io_type_defn.m"
              {
#line 7323 "parse_tree.prog_io_type_defn.c"
                parse_tree__prog_io_type_defn__TypeCtorInfo_32_32 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1021 "prog_io_type_defn.m"
                {
#line 1021 "prog_io_type_defn.m"
                  mercury__varset__init_1_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_32_32, &parse_tree__prog_io_type_defn__VarSet_9);
                }
#line 1022 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_15_15 = (MR_Integer) -1;
#line 1022 "prog_io_type_defn.m"
                {
#line 1022 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_mutable__parse_mutable_decl_info_6_p_0(parse_tree__prog_io_type_defn__ModuleName_4, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__Args_7, parse_tree__prog_io_type_defn__Context_8, parse_tree__prog_io_type_defn__V_15_15, &parse_tree__prog_io_type_defn__MaybeMutableInfoPrime_10);
                }
#line 1020 "prog_io_type_defn.m"
              }
#line 1020 "prog_io_type_defn.m"
          }
#line 1020 "prog_io_type_defn.m"
      }
#line 1026 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1025 "prog_io_type_defn.m"
      *parse_tree__prog_io_type_defn__MaybeMutableInfo_6 = parse_tree__prog_io_type_defn__MaybeMutableInfoPrime_10;
#line 1026 "prog_io_type_defn.m"
    else
#line 1027 "prog_io_type_defn.m"
      {
#line 1027 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_12;
#line 1027 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 1027 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 1027 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_25_25;
#line 1027 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_30_30;

#line 1029 "prog_io_type_defn.m"
        {
#line 1029 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_25_25 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_5);
        }
#line 1029 "prog_io_type_defn.m"
        {
#line 1029 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1029 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_24_24, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 1029 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[144])));
#line 1029 "prog_io_type_defn.m"
        }
#line 1028 "prog_io_type_defn.m"
        {
#line 1028 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_23_23, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_24_24));
#line 1028 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1028 "prog_io_type_defn.m"
        }
#line 1028 "prog_io_type_defn.m"
        {
#line 1028 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1028 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1028 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1028 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_23_23));
#line 1028 "prog_io_type_defn.m"
        }
#line 1030 "prog_io_type_defn.m"
        {
#line 1030 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_12));
#line 1030 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1030 "prog_io_type_defn.m"
        }
#line 1030 "prog_io_type_defn.m"
        {
#line 1030 "prog_io_type_defn.m"
          MR_Word base;
#line 1030 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1030 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeMutableInfo_6 = base;
#line 1030 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_30_30));
#line 1030 "prog_io_type_defn.m"
        }
#line 1027 "prog_io_type_defn.m"
      }
#line 1026 "prog_io_type_defn.m"
  }
#line 1015 "prog_io_type_defn.m"
}

#line 1006 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0_1(
#line 1006 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1006 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1006 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2)
#line 1006 "prog_io_type_defn.m"
{
#line 1006 "prog_io_type_defn.m"
  {
#line 1006 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 1006 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv0_MaybeMutableInfo_6;

#line 1006 "prog_io_type_defn.m"
    {
#line 1006 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_mutable_decl_term_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1), &parse_tree__prog_io_type_defn__conv0_MaybeMutableInfo_6);
    }
#line 1006 "prog_io_type_defn.m"
    *parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv0_MaybeMutableInfo_6));
#line 1006 "prog_io_type_defn.m"
  }
#line 1006 "prog_io_type_defn.m"
}

#line 992 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0(
#line 992 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_4,
#line 992 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5)
#line 992 "prog_io_type_defn.m"
{
#line 1005 "prog_io_type_defn.m"
  {
#line 1005 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1005 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeItems_6;
#line 996 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_15_15;
#line 996 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_16_16;
#line 996 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_7_7;
#line 996 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_8_8;

#line 996 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
      {
#line 996 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 2)));
#line 996 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_15_15)) == (MR_mktag((MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
          {
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_15_15, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_16_16, (MR_String) "mutable") == 0);
#line 996 "prog_io_type_defn.m"
          }
#line 996 "prog_io_type_defn.m"
      }
#line 1005 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 997 "prog_io_type_defn.m"
      {
#line 997 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeItem_9;

#line 997 "prog_io_type_defn.m"
        {
#line 997 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_mutable_decl_term_3_p_0(parse_tree__prog_io_type_defn__ModuleName_4, parse_tree__prog_io_type_defn__Term_5, &parse_tree__prog_io_type_defn__MaybeItem_9);
        }
#line 1001 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeItem_9)) == (MR_mktag((MR_Integer) 0))))
#line 1003 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeItems_6 = (MR_Word) parse_tree__prog_io_type_defn__MaybeItem_9;
#line 1001 "prog_io_type_defn.m"
        else
#line 999 "prog_io_type_defn.m"
          {
#line 999 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Mutable_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItem_9, (MR_Integer) 0)));
#line 999 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_17_17;

#line 1000 "prog_io_type_defn.m"
            {
#line 1000 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Mutable_10));
#line 1000 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1000 "prog_io_type_defn.m"
            }
#line 1000 "prog_io_type_defn.m"
            {
#line 1000 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeItems_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItems_6, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_17_17));
#line 1000 "prog_io_type_defn.m"
            }
#line 999 "prog_io_type_defn.m"
          }
#line 997 "prog_io_type_defn.m"
      }
#line 1005 "prog_io_type_defn.m"
    else
#line 1007 "prog_io_type_defn.m"
      {
#line 1007 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Terms_12;

#line 1005 "prog_io_type_defn.m"
        {
#line 1005 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_type_defn__Term_5, &parse_tree__prog_io_type_defn__Terms_12);
        }
#line 1007 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1006 "prog_io_type_defn.m"
          {
#line 1006 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_19_19;

#line 1006 "prog_io_type_defn.m"
            {
#line 1006 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1006 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_5[0]));
#line 1006 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0_1));
#line 1006 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1006 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__ModuleName_4));
#line 1006 "prog_io_type_defn.m"
            }
#line 1006 "prog_io_type_defn.m"
            {
#line 1006 "prog_io_type_defn.m"
              parse_tree__prog_io_util__map_parser_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0, parse_tree__prog_io_type_defn__V_19_19, parse_tree__prog_io_type_defn__Terms_12, &parse_tree__prog_io_type_defn__MaybeItems_6);
            }
#line 1006 "prog_io_type_defn.m"
          }
#line 1007 "prog_io_type_defn.m"
        else
#line 1009 "prog_io_type_defn.m"
          {
#line 1009 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Spec_14;
#line 1009 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_30_30;
#line 1009 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_31_31;
#line 1009 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_32_32;
#line 1009 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_37_37;

#line 1011 "prog_io_type_defn.m"
            {
#line 1011 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_32_32 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_5);
            }
#line 1011 "prog_io_type_defn.m"
            {
#line 1011 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1011 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_32_32));
#line 1011 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[143])));
#line 1011 "prog_io_type_defn.m"
            }
#line 1010 "prog_io_type_defn.m"
            {
#line 1010 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1010 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_31_31));
#line 1010 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1010 "prog_io_type_defn.m"
            }
#line 1010 "prog_io_type_defn.m"
            {
#line 1010 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1010 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1010 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1010 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_30_30));
#line 1010 "prog_io_type_defn.m"
            }
#line 1012 "prog_io_type_defn.m"
            {
#line 1012 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1012 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_14));
#line 1012 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1012 "prog_io_type_defn.m"
            }
#line 1012 "prog_io_type_defn.m"
            {
#line 1012 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeItems_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1012 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeItems_6, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_37_37));
#line 1012 "prog_io_type_defn.m"
            }
#line 1009 "prog_io_type_defn.m"
          }
#line 1007 "prog_io_type_defn.m"
      }
#line 1005 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeItems_6;
#line 1005 "prog_io_type_defn.m"
  }
#line 992 "prog_io_type_defn.m"
}

#line 926 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_initialisation_is_3_f_0(
#line 926 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 926 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 926 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 926 "prog_io_type_defn.m"
{
#line 929 "prog_io_type_defn.m"
  {
#line 929 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 929 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 929 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result0_9;
#line 929 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result1_10;
#line 933 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;

#line 930 "prog_io_type_defn.m"
    {
#line 930 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__Result0_9 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__VarSet_6, (MR_String) "initialisation", parse_tree__prog_io_type_defn__Term_7);
    }
#line 933 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Result0_9)) == (MR_mktag((MR_Integer) 1)));
#line 933 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 933 "prog_io_type_defn.m"
      {
#line 933 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result0_9, (MR_Integer) 0)));
#line 933 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 933 "prog_io_type_defn.m"
      }
#line 937 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 935 "prog_io_type_defn.m"
      {
#line 935 "prog_io_type_defn.m"
        {
#line 935 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result1_10 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__VarSet_6, (MR_String) "initialization", parse_tree__prog_io_type_defn__Term_7);
        }
#line 935 "prog_io_type_defn.m"
      }
#line 937 "prog_io_type_defn.m"
    else
#line 938 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__Result1_10 = parse_tree__prog_io_type_defn__Result0_9;
#line 956 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Result1_10)) == (MR_mktag((MR_Integer) 0))))
#line 960 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__Result_8 = parse_tree__prog_io_type_defn__Result1_10;
#line 956 "prog_io_type_defn.m"
    else
#line 956 "prog_io_type_defn.m"
      {
#line 956 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result1_10, (MR_Integer) 0)));

#line 956 "prog_io_type_defn.m"
        if ((parse_tree__prog_io_type_defn__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 960 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = parse_tree__prog_io_type_defn__Result1_10;
#line 956 "prog_io_type_defn.m"
        else
#line 942 "prog_io_type_defn.m"
          {
#line 942 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__AutoInitSupported_12;

#line 943 "prog_io_type_defn.m"
            {
#line 943 "prog_io_type_defn.m"
              libs__globals__semipure_get_solver_auto_init_supported_1_p_0(&parse_tree__prog_io_type_defn__AutoInitSupported_12);
            }
#line 948 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__AutoInitSupported_12 == (MR_Integer) 0))
#line 949 "prog_io_type_defn.m"
              {
#line 949 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_14;
#line 949 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_33_33;
#line 949 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_34_34;
#line 949 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_35_35;
#line 949 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_40_40;

#line 953 "prog_io_type_defn.m"
                {
#line 953 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_35_35 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
                }
#line 953 "prog_io_type_defn.m"
                {
#line 953 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 953 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_35_35));
#line 953 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[142])));
#line 953 "prog_io_type_defn.m"
                }
#line 952 "prog_io_type_defn.m"
                {
#line 952 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 952 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_34_34));
#line 952 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 952 "prog_io_type_defn.m"
                }
#line 952 "prog_io_type_defn.m"
                {
#line 952 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 952 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 952 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 952 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_33_33));
#line 952 "prog_io_type_defn.m"
                }
#line 954 "prog_io_type_defn.m"
                {
#line 954 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 954 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_14));
#line 954 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 954 "prog_io_type_defn.m"
                }
#line 954 "prog_io_type_defn.m"
                {
#line 954 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 954 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 954 "prog_io_type_defn.m"
                }
#line 949 "prog_io_type_defn.m"
              }
#line 948 "prog_io_type_defn.m"
            else
#line 946 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = parse_tree__prog_io_type_defn__Result1_10;
#line 942 "prog_io_type_defn.m"
          }
#line 956 "prog_io_type_defn.m"
      }
#line 929 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 929 "prog_io_type_defn.m"
  }
#line 926 "prog_io_type_defn.m"
}

#line 917 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(
#line 917 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_3)
#line 917 "prog_io_type_defn.m"
{
#line 919 "prog_io_type_defn.m"
  {
#line 919 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 919 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__2_2;
#line 920 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_5_5;
#line 920 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_6_6;
#line 920 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_7_7;
#line 920 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_4_4;

#line 920 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 920 "prog_io_type_defn.m"
      {
#line 920 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_3, (MR_Integer) 0)));
#line 920 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_3, (MR_Integer) 1)));
#line 920 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_3, (MR_Integer) 2)));
#line 920 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 920 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 920 "prog_io_type_defn.m"
          {
#line 920 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_5_5)) == (MR_mktag((MR_Integer) 0)));
#line 920 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 920 "prog_io_type_defn.m"
              {
#line 920 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_5_5, (MR_Integer) 0)));
#line 920 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_6_6, (MR_String) "type_is_abstract_noncanonical") == 0);
#line 920 "prog_io_type_defn.m"
              }
#line 920 "prog_io_type_defn.m"
          }
#line 920 "prog_io_type_defn.m"
      }
#line 919 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 921 "prog_io_type_defn.m"
      {
#line 921 "prog_io_type_defn.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 919 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[22]);
#line 921 "prog_io_type_defn.m"
      }
#line 919 "prog_io_type_defn.m"
    else
#line 923 "prog_io_type_defn.m"
      {
#line 919 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[23]);
#line 923 "prog_io_type_defn.m"
      }
#line 919 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__2_2;
#line 919 "prog_io_type_defn.m"
  }
#line 917 "prog_io_type_defn.m"
}

#line 793 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_type_decl_where_term_4_f_0(
#line 793 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_6,
#line 793 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_7,
#line 793 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_8,
#line 793 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm0_9)
#line 793 "prog_io_type_defn.m"
{
#line 800 "prog_io_type_defn.m"
  {
#line 800 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 800 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeWhereDetails_10;

#line 800 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 800 "prog_io_type_defn.m"
      {
#line 801 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__MaybeWhereDetails_10 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_4[1]);
#line 800 "prog_io_type_defn.m"
      }
#line 800 "prog_io_type_defn.m"
    else
#line 803 "prog_io_type_defn.m"
      {
#line 803 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm0_9, (MR_Integer) 0)));
#line 803 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_13;
#line 803 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeRepresentationIs_14;
#line 803 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeInitialisationIs_15;
#line 803 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeGroundIs_16;
#line 803 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeAnyIs_17;
#line 803 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeCStoreIs_18;
#line 803 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeEqualityIs_19;
#line 803 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeComparisonIs_20;
#line 803 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgIs_21;
#line 803 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeWhereEnd_22;
#line 803 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_25_25;
#line 803 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_27_27;
#line 803 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_31_31;
#line 803 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_33_33;
#line 803 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_37_37;
#line 803 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_41_41;
#line 803 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_45_45;
#line 803 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_49_49;
#line 803 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_53_53;

#line 806 "prog_io_type_defn.m"
        {
#line 806 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_where_attribute__ho10_4_p_0(&parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_13, parse_tree__prog_io_type_defn__MaybeTerm0_9, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_25_25);
        }
#line 808 "prog_io_type_defn.m"
        {
#line 808 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0((MR_String) "representation", parse_tree__prog_io_type_defn__VarSet_8, &parse_tree__prog_io_type_defn__MaybeRepresentationIs_14, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_25_25, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_27_27);
        }
#line 811 "prog_io_type_defn.m"
        {
#line 811 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_56_95_95_91_51_93_95_48_4_p_0(parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, &parse_tree__prog_io_type_defn__MaybeInitialisationIs_15, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_27_27, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_31_31);
        }
#line 814 "prog_io_type_defn.m"
        {
#line 814 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0((MR_String) "ground", &parse_tree__prog_io_type_defn__MaybeGroundIs_16, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_31_31, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_33_33);
        }
#line 817 "prog_io_type_defn.m"
        {
#line 817 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0((MR_String) "any", &parse_tree__prog_io_type_defn__MaybeAnyIs_17, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_33_33, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_37_37);
        }
#line 820 "prog_io_type_defn.m"
        {
#line 820 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_52_93_95_48_4_p_0((MR_String) "constraint_store", parse_tree__prog_io_type_defn__ModuleName_7, &parse_tree__prog_io_type_defn__MaybeCStoreIs_18, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_37_37, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_41_41);
        }
#line 823 "prog_io_type_defn.m"
        {
#line 823 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "equality", parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, &parse_tree__prog_io_type_defn__MaybeEqualityIs_19, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_41_41, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_45_45);
        }
#line 826 "prog_io_type_defn.m"
        {
#line 826 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_54_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "comparison", parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, &parse_tree__prog_io_type_defn__MaybeComparisonIs_20, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_45_45, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_49_49);
        }
#line 829 "prog_io_type_defn.m"
        {
#line 829 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "direct_arg", parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, &parse_tree__prog_io_type_defn__MaybeDirectArgIs_21, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_49_49, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_53_53);
        }
#line 832 "prog_io_type_defn.m"
        {
#line 832 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_where_end_2_p_0(parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_53_53, &parse_tree__prog_io_type_defn__MaybeWhereEnd_22);
        }
#line 834 "prog_io_type_defn.m"
        {
#line 834 "prog_io_type_defn.m"
          return parse_tree__prog_io_type_defn__MaybeWhereDetails_10 = parse_tree__prog_io_type_defn__make_maybe_where_details_12_f_0(parse_tree__prog_io_type_defn__IsSolverType_6, parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_13, parse_tree__prog_io_type_defn__MaybeRepresentationIs_14, parse_tree__prog_io_type_defn__MaybeInitialisationIs_15, parse_tree__prog_io_type_defn__MaybeGroundIs_16, parse_tree__prog_io_type_defn__MaybeAnyIs_17, parse_tree__prog_io_type_defn__MaybeCStoreIs_18, parse_tree__prog_io_type_defn__MaybeEqualityIs_19, parse_tree__prog_io_type_defn__MaybeComparisonIs_20, parse_tree__prog_io_type_defn__MaybeDirectArgIs_21, parse_tree__prog_io_type_defn__MaybeWhereEnd_22, parse_tree__prog_io_type_defn__Term0_11);
        }
#line 803 "prog_io_type_defn.m"
      }
#line 800 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeWhereDetails_10;
#line 800 "prog_io_type_defn.m"
  }
#line 793 "prog_io_type_defn.m"
}

#line 724 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_abstract_type_defn_8_p_0(
#line 724 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_9,
#line 724 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_10,
#line 724 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_11,
#line 724 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes0_12,
#line 724 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Condition_13,
#line 724 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_14,
#line 724 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_15,
#line 724 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_16)
#line 724 "prog_io_type_defn.m"
{
#line 729 "prog_io_type_defn.m"
  {
#line 729 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 729 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_17;
#line 729 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__IsSolverType_18;
#line 729 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Attributes_19;
#line 1324 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_38;
#line 1322 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_39_39;
#line 1322 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 1322 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_37_37;

#line 730 "prog_io_type_defn.m"
    {
#line 730 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(parse_tree__prog_io_type_defn__ModuleName_9, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__HeadTerm_11, &parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_17);
    }
#line 1322 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Attributes0_12)) == (MR_mktag((MR_Integer) 1)));
#line 1322 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1322 "prog_io_type_defn.m"
      {
#line 1322 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Attributes0_12, (MR_Integer) 0)));
#line 1322 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Attributes0_12, (MR_Integer) 1)));
#line 1322 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_39_39, (MR_Integer) 0)));
#line 1322 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_39_39, (MR_Integer) 1)));
#line 1322 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1322 "prog_io_type_defn.m"
      }
#line 1324 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1323 "prog_io_type_defn.m"
      {
#line 1323 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Attributes_19 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_38;
#line 1323 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__IsSolverType_18 = (MR_Integer) 1;
#line 1323 "prog_io_type_defn.m"
      }
#line 1324 "prog_io_type_defn.m"
    else
#line 1325 "prog_io_type_defn.m"
      {
#line 1325 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__IsSolverType_18 = (MR_Integer) 0;
#line 1325 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Attributes_19 = parse_tree__prog_io_type_defn__Attributes0_12;
#line 1325 "prog_io_type_defn.m"
      }
#line 735 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_17)) == (MR_mktag((MR_Integer) 0))))
#line 733 "prog_io_type_defn.m"
      {
#line 733 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Specs_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_17, (MR_Integer) 0)));

#line 734 "prog_io_type_defn.m"
        {
#line 734 "prog_io_type_defn.m"
          MR_Word base;
#line 734 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 734 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeItem_16 = base;
#line 734 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_20));
#line 734 "prog_io_type_defn.m"
        }
#line 733 "prog_io_type_defn.m"
      }
#line 735 "prog_io_type_defn.m"
    else
#line 736 "prog_io_type_defn.m"
      {
#line 736 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_17, (MR_Integer) 0)));
#line 736 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Params_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_17, (MR_Integer) 1)));
#line 736 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeVarSet_23;
#line 736 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeDefn_24;
#line 736 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__ItemTypeDefn_25;
#line 736 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Item_26;
#line 736 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeItem0_27;

#line 737 "prog_io_type_defn.m"
        {
#line 737 "prog_io_type_defn.m"
          mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_10, &parse_tree__prog_io_type_defn__TypeVarSet_23);
        }
#line 741 "prog_io_type_defn.m"
        if ((parse_tree__prog_io_type_defn__IsSolverType_18 == (MR_Integer) 0))
#line 739 "prog_io_type_defn.m"
          {
#line 740 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__TypeDefn_24 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_defn_scalar_common_2[19]);
#line 739 "prog_io_type_defn.m"
          }
#line 741 "prog_io_type_defn.m"
        else
#line 742 "prog_io_type_defn.m"
          {
#line 743 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__TypeDefn_24 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_defn_scalar_common_2[20]);
#line 742 "prog_io_type_defn.m"
          }
#line 745 "prog_io_type_defn.m"
        {
#line 745 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__ItemTypeDefn_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 745 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeVarSet_23));
#line 745 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_25, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_21));
#line 745 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_25, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__Params_22));
#line 745 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_25, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn_24));
#line 745 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_25, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__Condition_13));
#line 745 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_25, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_14));
#line 745 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_25, 6) = ((MR_Box) (parse_tree__prog_io_type_defn__SeqNum_15));
#line 745 "prog_io_type_defn.m"
        }
#line 747 "prog_io_type_defn.m"
        {
#line 747 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Item_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 747 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__Item_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 747 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__Item_26, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__ItemTypeDefn_25));
#line 747 "prog_io_type_defn.m"
        }
#line 748 "prog_io_type_defn.m"
        {
#line 748 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeItem0_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 748 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItem0_27, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Item_26));
#line 748 "prog_io_type_defn.m"
        }
#line 749 "prog_io_type_defn.m"
        {
#line 749 "prog_io_type_defn.m"
          parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_type_defn__MaybeItem0_27, parse_tree__prog_io_type_defn__Attributes_19, parse_tree__prog_io_type_defn__MaybeItem_16);
#line 749 "prog_io_type_defn.m"
          return;
        }
#line 736 "prog_io_type_defn.m"
      }
#line 729 "prog_io_type_defn.m"
  }
#line 724 "prog_io_type_defn.m"
}

#line 688 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_1(
#line 688 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 688 "prog_io_type_defn.m"
{
#line 688 "prog_io_type_defn.m"
  {
#line 688 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 688 "prog_io_type_defn.m"
    MR_builtin_longjmp((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0__commit_0, 1);
#line 688 "prog_io_type_defn.m"
  }
#line 688 "prog_io_type_defn.m"
}

#line 688 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_2(
#line 688 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 688 "prog_io_type_defn.m"
{
#line 688 "prog_io_type_defn.m"
  {
#line 688 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 688 "prog_io_type_defn.m"
    {
#line 690 "prog_io_type_defn.m"
      {
#line 690 "prog_io_type_defn.m"
        (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], ((MR_Box) ((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0__Var_27)), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0__Params_25);
      }
#line 690 "prog_io_type_defn.m"
      (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0__succeeded = !((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0__succeeded);
#line 690 "prog_io_type_defn.m"
      if ((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0__succeeded)
#line 690 "prog_io_type_defn.m"
        {
#line 690 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_1(parse_tree__prog_io_type_defn__env_ptr);
#line 690 "prog_io_type_defn.m"
          return;
        }
#line 688 "prog_io_type_defn.m"
    }
#line 688 "prog_io_type_defn.m"
  }
#line 688 "prog_io_type_defn.m"
}

#line 688 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_3(
#line 688 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 688 "prog_io_type_defn.m"
{
#line 688 "prog_io_type_defn.m"
  {
#line 688 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 688 "prog_io_type_defn.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0__commit_0) == 0)
#line 688 "prog_io_type_defn.m"
      {
#line 688 "prog_io_type_defn.m"
        {
#line 688 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__RepnType_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0__SolverTypeDetails_21, (MR_Integer) 0)));
#line 688 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0__SolverTypeDetails_21, (MR_Integer) 1)));
#line 688 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0__SolverTypeDetails_21, (MR_Integer) 2)));
#line 688 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0__SolverTypeDetails_21, (MR_Integer) 3)));
#line 688 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0__SolverTypeDetails_21, (MR_Integer) 4)));

#line 689 "prog_io_type_defn.m"
          {
#line 689 "prog_io_type_defn.m"
            parse_tree__prog_type__type_contains_var_2_p_0(parse_tree__prog_io_type_defn__RepnType_26, &(parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0__Var_27, parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_2, parse_tree__prog_io_type_defn__env_ptr);
          }
#line 688 "prog_io_type_defn.m"
        }
#line 688 "prog_io_type_defn.m"
        (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0__succeeded = MR_FALSE;
#line 688 "prog_io_type_defn.m"
      }
#line 688 "prog_io_type_defn.m"
    else
#line 688 "prog_io_type_defn.m"
      (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0__succeeded = MR_TRUE;
#line 688 "prog_io_type_defn.m"
  }
#line 688 "prog_io_type_defn.m"
}

#line 671 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0(
#line 671 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_11,
#line 671 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_12,
#line 671 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_13,
#line 671 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_14,
#line 671 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeUserEqComp_15,
#line 671 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes_16,
#line 671 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Condition_17,
#line 671 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_18,
#line 671 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_19,
#line 671 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_20)
#line 671 "prog_io_type_defn.m"
{
#line 671 "prog_io_type_defn.m"
  {
#line 671 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0_s parse_tree__prog_io_type_defn__env;

#line 680 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 712 "prog_io_type_defn.m"
      {
#line 712 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_43_43;
#line 712 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_44_44;
#line 712 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_45_45;
#line 712 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_50_50;
#line 712 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_77;

#line 715 "prog_io_type_defn.m"
        {
#line 715 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_45_45 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadTerm_13);
        }
#line 715 "prog_io_type_defn.m"
        {
#line 715 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 715 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_45_45));
#line 715 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[139])));
#line 715 "prog_io_type_defn.m"
        }
#line 714 "prog_io_type_defn.m"
        {
#line 714 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 714 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_44_44));
#line 714 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 714 "prog_io_type_defn.m"
        }
#line 714 "prog_io_type_defn.m"
        {
#line 714 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 714 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 714 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 714 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_77, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_43_43));
#line 714 "prog_io_type_defn.m"
        }
#line 716 "prog_io_type_defn.m"
        {
#line 716 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_77));
#line 716 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 716 "prog_io_type_defn.m"
        }
#line 716 "prog_io_type_defn.m"
        {
#line 716 "prog_io_type_defn.m"
          MR_Word base;
#line 716 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 716 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeItem_20 = base;
#line 716 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_50_50));
#line 716 "prog_io_type_defn.m"
        }
#line 712 "prog_io_type_defn.m"
      }
#line 680 "prog_io_type_defn.m"
    else
#line 680 "prog_io_type_defn.m"
      {
#line 680 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeNameParams_22;

#line 680 "prog_io_type_defn.m"
        (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0__SolverTypeDetails_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_14, (MR_Integer) 0)));
#line 681 "prog_io_type_defn.m"
        {
#line 681 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(parse_tree__prog_io_type_defn__ModuleName_11, parse_tree__prog_io_type_defn__VarSet_12, parse_tree__prog_io_type_defn__HeadTerm_13, &parse_tree__prog_io_type_defn__MaybeNameParams_22);
        }
#line 685 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeNameParams_22)) == (MR_mktag((MR_Integer) 0))))
#line 683 "prog_io_type_defn.m"
          {
#line 683 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Specs_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeNameParams_22, (MR_Integer) 0)));

#line 684 "prog_io_type_defn.m"
            {
#line 684 "prog_io_type_defn.m"
              MR_Word base;
#line 684 "prog_io_type_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 684 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeItem_20 = base;
#line 684 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_23));
#line 684 "prog_io_type_defn.m"
            }
#line 683 "prog_io_type_defn.m"
          }
#line 685 "prog_io_type_defn.m"
        else
#line 686 "prog_io_type_defn.m"
          {
#line 686 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Name_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameParams_22, (MR_Integer) 0)));

#line 686 "prog_io_type_defn.m"
            (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0__Params_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameParams_22, (MR_Integer) 1)));
#line 688 "prog_io_type_defn.m"
            {
#line 688 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_3(&parse_tree__prog_io_type_defn__env);
            }
#line 700 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0__succeeded)
#line 692 "prog_io_type_defn.m"
              {
#line 692 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_83_83 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 692 "prog_io_type_defn.m"
                MR_String parse_tree__prog_io_type_defn__HeadTermStr_28;
#line 692 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Pieces_29;
#line 692 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_30;
#line 692 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_54_54;
#line 692 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_57_57;
#line 692 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_58_58;
#line 692 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_67_67;
#line 692 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_68_68;
#line 692 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_69_69;
#line 692 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_70_70;
#line 692 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_71_71;
#line 692 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_74_74;

#line 692 "prog_io_type_defn.m"
                {
#line 692 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__HeadTermStr_28 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_83_83, parse_tree__prog_io_type_defn__VarSet_12, parse_tree__prog_io_type_defn__HeadTerm_13);
                }
#line 695 "prog_io_type_defn.m"
                {
#line 695 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 695 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 695 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_58_58, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__HeadTermStr_28));
#line 695 "prog_io_type_defn.m"
                }
#line 694 "prog_io_type_defn.m"
                {
#line 694 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_58_58));
#line 694 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[21])));
#line 694 "prog_io_type_defn.m"
                }
#line 693 "prog_io_type_defn.m"
                {
#line 693 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 693 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[141])));
#line 693 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_57_57));
#line 693 "prog_io_type_defn.m"
                }
#line 693 "prog_io_type_defn.m"
                {
#line 693 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Pieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 693 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[140])));
#line 693 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_29, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_54_54));
#line 693 "prog_io_type_defn.m"
                }
#line 697 "prog_io_type_defn.m"
                {
#line 697 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_69_69 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_83_83, parse_tree__prog_io_type_defn__HeadTerm_13);
                }
#line 698 "prog_io_type_defn.m"
                {
#line 698 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 698 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_71_71, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_29));
#line 698 "prog_io_type_defn.m"
                }
#line 697 "prog_io_type_defn.m"
                {
#line 697 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_71_71));
#line 697 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 697 "prog_io_type_defn.m"
                }
#line 698 "prog_io_type_defn.m"
                {
#line 698 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 698 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_69_69));
#line 698 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_68_68, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_70_70));
#line 698 "prog_io_type_defn.m"
                }
#line 696 "prog_io_type_defn.m"
                {
#line 696 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_68_68));
#line 696 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 696 "prog_io_type_defn.m"
                }
#line 696 "prog_io_type_defn.m"
                {
#line 696 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 696 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 696 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 696 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_30, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_67_67));
#line 696 "prog_io_type_defn.m"
                }
#line 699 "prog_io_type_defn.m"
                {
#line 699 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_30));
#line 699 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 699 "prog_io_type_defn.m"
                }
#line 699 "prog_io_type_defn.m"
                {
#line 699 "prog_io_type_defn.m"
                  MR_Word base;
#line 699 "prog_io_type_defn.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 699 "prog_io_type_defn.m"
                  *parse_tree__prog_io_type_defn__MaybeItem_20 = base;
#line 699 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_74_74));
#line 699 "prog_io_type_defn.m"
                }
#line 692 "prog_io_type_defn.m"
              }
#line 700 "prog_io_type_defn.m"
            else
#line 701 "prog_io_type_defn.m"
              {
#line 701 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeVarSet_31;
#line 701 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeDefn_32;
#line 701 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ItemTypeDefn_33;
#line 701 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Item_34;
#line 701 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeItem0_35;

#line 701 "prog_io_type_defn.m"
                {
#line 701 "prog_io_type_defn.m"
                  mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_12, &parse_tree__prog_io_type_defn__TypeVarSet_31);
                }
#line 702 "prog_io_type_defn.m"
                {
#line 702 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__TypeDefn_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 702 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__TypeDefn_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 702 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__TypeDefn_32, 1) = ((MR_Box) ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0__SolverTypeDetails_21));
#line 702 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__TypeDefn_32, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeUserEqComp_15));
#line 702 "prog_io_type_defn.m"
                }
#line 704 "prog_io_type_defn.m"
                {
#line 704 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__ItemTypeDefn_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 704 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_33, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeVarSet_31));
#line 704 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_33, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_24));
#line 704 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_33, 2) = ((MR_Box) ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0_env_0__Params_25));
#line 704 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_33, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn_32));
#line 704 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_33, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__Condition_17));
#line 704 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_33, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_18));
#line 704 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_33, 6) = ((MR_Box) (parse_tree__prog_io_type_defn__SeqNum_19));
#line 704 "prog_io_type_defn.m"
                }
#line 706 "prog_io_type_defn.m"
                {
#line 706 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Item_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__Item_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 706 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__Item_34, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__ItemTypeDefn_33));
#line 706 "prog_io_type_defn.m"
                }
#line 707 "prog_io_type_defn.m"
                {
#line 707 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeItem0_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 707 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItem0_35, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Item_34));
#line 707 "prog_io_type_defn.m"
                }
#line 708 "prog_io_type_defn.m"
                {
#line 708 "prog_io_type_defn.m"
                  parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_type_defn__MaybeItem0_35, parse_tree__prog_io_type_defn__Attributes_16, parse_tree__prog_io_type_defn__MaybeItem_20);
#line 708 "prog_io_type_defn.m"
                  return;
                }
#line 701 "prog_io_type_defn.m"
              }
#line 686 "prog_io_type_defn.m"
          }
#line 680 "prog_io_type_defn.m"
      }
#line 671 "prog_io_type_defn.m"
  }
#line 671 "prog_io_type_defn.m"
}

#line 628 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_type_is_abstract_enum_8_p_0(
#line 628 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_9,
#line 628 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_10,
#line 628 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_11,
#line 628 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_12,
#line 628 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Condition_13,
#line 628 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_14,
#line 628 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_15,
#line 628 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_16)
#line 628 "prog_io_type_defn.m"
{
#line 633 "prog_io_type_defn.m"
  {
#line 633 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 633 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeNameParams_17;

#line 634 "prog_io_type_defn.m"
    {
#line 634 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(parse_tree__prog_io_type_defn__ModuleName_9, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__HeadTerm_11, &parse_tree__prog_io_type_defn__MaybeNameParams_17);
    }
#line 638 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeNameParams_17)) == (MR_mktag((MR_Integer) 0))))
#line 636 "prog_io_type_defn.m"
      {
#line 636 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Specs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeNameParams_17, (MR_Integer) 0)));

#line 637 "prog_io_type_defn.m"
        {
#line 637 "prog_io_type_defn.m"
          MR_Word base;
#line 637 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 637 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeItem_16 = base;
#line 637 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_18));
#line 637 "prog_io_type_defn.m"
        }
#line 636 "prog_io_type_defn.m"
      }
#line 638 "prog_io_type_defn.m"
    else
#line 639 "prog_io_type_defn.m"
      {
#line 639 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Name_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameParams_17, (MR_Integer) 0)));
#line 639 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Params_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameParams_17, (MR_Integer) 1)));
#line 662 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Args_21;
#line 641 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_32_32;
#line 641 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_33_33;
#line 641 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_22_22;

#line 641 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__BodyTerm_12)) == (MR_mktag((MR_Integer) 0)));
#line 641 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 641 "prog_io_type_defn.m"
          {
#line 641 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BodyTerm_12, (MR_Integer) 0)));
#line 641 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BodyTerm_12, (MR_Integer) 1)));
#line 641 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BodyTerm_12, (MR_Integer) 2)));
#line 641 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_32_32)) == (MR_mktag((MR_Integer) 0)));
#line 641 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 641 "prog_io_type_defn.m"
              {
#line 641 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_32_32, (MR_Integer) 0)));
#line 641 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_33_33, (MR_String) "type_is_abstract_enum") == 0);
#line 641 "prog_io_type_defn.m"
              }
#line 641 "prog_io_type_defn.m"
          }
#line 662 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 655 "prog_io_type_defn.m"
          {
#line 655 "prog_io_type_defn.m"
            MR_Integer parse_tree__prog_io_type_defn__NumBits_24;
#line 645 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Arg_23;
#line 645 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_34_34;
#line 645 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_35_35;
#line 645 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_36_36;
#line 646 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 645 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Args_21)) == (MR_mktag((MR_Integer) 1)));
#line 645 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 645 "prog_io_type_defn.m"
              {
#line 645 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__Arg_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Args_21, (MR_Integer) 0)));
#line 645 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Args_21, (MR_Integer) 1)));
#line 645 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 645 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 645 "prog_io_type_defn.m"
                  {
#line 646 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Arg_23)) == (MR_mktag((MR_Integer) 0)));
#line 646 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 646 "prog_io_type_defn.m"
                      {
#line 646 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_23, (MR_Integer) 0)));
#line 646 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_23, (MR_Integer) 1)));
#line 646 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_23, (MR_Integer) 2)));
#line 646 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 645 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 645 "prog_io_type_defn.m"
                          {
#line 646 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 646 "prog_io_type_defn.m"
                            if (parse_tree__prog_io_type_defn__succeeded)
#line 646 "prog_io_type_defn.m"
                              parse_tree__prog_io_type_defn__NumBits_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_35_35, (MR_Integer) 0)));
#line 645 "prog_io_type_defn.m"
                          }
#line 646 "prog_io_type_defn.m"
                      }
#line 645 "prog_io_type_defn.m"
                  }
#line 645 "prog_io_type_defn.m"
              }
#line 655 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 648 "prog_io_type_defn.m"
              {
#line 648 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeVarSet_26;
#line 648 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeDefn_27;
#line 648 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ItemTypeDefn_28;
#line 648 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Item_29;
#line 648 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_37_37;

#line 648 "prog_io_type_defn.m"
                {
#line 648 "prog_io_type_defn.m"
                  mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_10, &parse_tree__prog_io_type_defn__TypeVarSet_26);
                }
#line 649 "prog_io_type_defn.m"
                {
#line 649 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 649 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__NumBits_24));
#line 649 "prog_io_type_defn.m"
                }
#line 649 "prog_io_type_defn.m"
                {
#line 649 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__TypeDefn_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 649 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(2), parse_tree__prog_io_type_defn__TypeDefn_27, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_37_37));
#line 649 "prog_io_type_defn.m"
                }
#line 651 "prog_io_type_defn.m"
                {
#line 651 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__ItemTypeDefn_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 651 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_28, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeVarSet_26));
#line 651 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_28, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_19));
#line 651 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_28, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__Params_20));
#line 651 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_28, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn_27));
#line 651 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_28, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__Condition_13));
#line 651 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_28, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_14));
#line 651 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_28, 6) = ((MR_Box) (parse_tree__prog_io_type_defn__SeqNum_15));
#line 651 "prog_io_type_defn.m"
                }
#line 653 "prog_io_type_defn.m"
                {
#line 653 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Item_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 653 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__Item_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 653 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__Item_29, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__ItemTypeDefn_28));
#line 653 "prog_io_type_defn.m"
                }
#line 654 "prog_io_type_defn.m"
                {
#line 654 "prog_io_type_defn.m"
                  MR_Word base;
#line 654 "prog_io_type_defn.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 654 "prog_io_type_defn.m"
                  *parse_tree__prog_io_type_defn__MaybeItem_16 = base;
#line 654 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Item_29));
#line 654 "prog_io_type_defn.m"
                }
#line 648 "prog_io_type_defn.m"
              }
#line 655 "prog_io_type_defn.m"
            else
#line 657 "prog_io_type_defn.m"
              {
#line 657 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_31;
#line 657 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_48_48;
#line 657 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_49_49;
#line 657 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_54_54;

#line 659 "prog_io_type_defn.m"
                {
#line 659 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 659 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_14));
#line 659 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[137])));
#line 659 "prog_io_type_defn.m"
                }
#line 658 "prog_io_type_defn.m"
                {
#line 658 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 658 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_49_49));
#line 658 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 658 "prog_io_type_defn.m"
                }
#line 658 "prog_io_type_defn.m"
                {
#line 658 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 658 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 658 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 658 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_31, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_48_48));
#line 658 "prog_io_type_defn.m"
                }
#line 660 "prog_io_type_defn.m"
                {
#line 660 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_31));
#line 660 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 660 "prog_io_type_defn.m"
                }
#line 660 "prog_io_type_defn.m"
                {
#line 660 "prog_io_type_defn.m"
                  MR_Word base;
#line 660 "prog_io_type_defn.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 660 "prog_io_type_defn.m"
                  *parse_tree__prog_io_type_defn__MaybeItem_16 = base;
#line 660 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_54_54));
#line 660 "prog_io_type_defn.m"
                }
#line 657 "prog_io_type_defn.m"
              }
#line 655 "prog_io_type_defn.m"
          }
#line 662 "prog_io_type_defn.m"
        else
#line 664 "prog_io_type_defn.m"
          {
#line 664 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_69_69;
#line 664 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_70_70;
#line 664 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_75_75;
#line 664 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Spec_78;

#line 666 "prog_io_type_defn.m"
            {
#line 666 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 666 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_14));
#line 666 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[138])));
#line 666 "prog_io_type_defn.m"
            }
#line 665 "prog_io_type_defn.m"
            {
#line 665 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_70_70));
#line 665 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 665 "prog_io_type_defn.m"
            }
#line 665 "prog_io_type_defn.m"
            {
#line 665 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Spec_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 665 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 665 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 665 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_78, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_69_69));
#line 665 "prog_io_type_defn.m"
            }
#line 667 "prog_io_type_defn.m"
            {
#line 667 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_78));
#line 667 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 667 "prog_io_type_defn.m"
            }
#line 667 "prog_io_type_defn.m"
            {
#line 667 "prog_io_type_defn.m"
              MR_Word base;
#line 667 "prog_io_type_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 667 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeItem_16 = base;
#line 667 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_75_75));
#line 667 "prog_io_type_defn.m"
            }
#line 664 "prog_io_type_defn.m"
          }
#line 639 "prog_io_type_defn.m"
      }
#line 633 "prog_io_type_defn.m"
  }
#line 628 "prog_io_type_defn.m"
}

#line 589 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_block_type_defn_9_p_0(
#line 589 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_10,
#line 589 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_11,
#line 589 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_12,
#line 589 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_13,
#line 589 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes0_14,
#line 589 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Condition_15,
#line 589 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_16,
#line 589 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_17,
#line 589 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_18)
#line 589 "prog_io_type_defn.m"
{
#line 9171 "parse_tree.prog_io_type_defn.c"
  {
#line 9173 "parse_tree.prog_io_type_defn.c"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Attributes0_14)) == (MR_mktag((MR_Integer) 1)));
#line 9175 "parse_tree.prog_io_type_defn.c"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_62;
#line 1322 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_63_63;
#line 1322 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_64_64;
#line 1322 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_61_61;

#line 1322 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1322 "prog_io_type_defn.m"
      {
#line 1322 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Attributes0_14, (MR_Integer) 0)));
#line 1322 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Attributes0_14, (MR_Integer) 1)));
#line 1322 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_63_63, (MR_Integer) 0)));
#line 1322 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_63_63, (MR_Integer) 1)));
#line 1322 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_64_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1322 "prog_io_type_defn.m"
      }
#line 9200 "parse_tree.prog_io_type_defn.c"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 9202 "parse_tree.prog_io_type_defn.c"
      {
#line 9204 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__MaybeWhere_21;
#line 9206 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__V_30_30;

#line 602 "prog_io_type_defn.m"
        {
#line 602 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 602 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__BodyTerm_13));
#line 602 "prog_io_type_defn.m"
        }
#line 602 "prog_io_type_defn.m"
        {
#line 602 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeWhere_21 = parse_tree__prog_io_type_defn__parse_type_decl_where_term_4_f_0((MR_Integer) 1, parse_tree__prog_io_type_defn__ModuleName_10, parse_tree__prog_io_type_defn__VarSet_11, parse_tree__prog_io_type_defn__V_30_30);
        }
#line 607 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeWhere_21)) == (MR_mktag((MR_Integer) 0))))
#line 605 "prog_io_type_defn.m"
          {
#line 605 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Specs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhere_21, (MR_Integer) 0)));

#line 606 "prog_io_type_defn.m"
            {
#line 606 "prog_io_type_defn.m"
              MR_Word base;
#line 606 "prog_io_type_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 606 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeItem_18 = base;
#line 606 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_22));
#line 606 "prog_io_type_defn.m"
            }
#line 605 "prog_io_type_defn.m"
          }
#line 607 "prog_io_type_defn.m"
        else
#line 609 "prog_io_type_defn.m"
          {
#line 609 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_21, (MR_Integer) 0)));
#line 609 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__MaybeUserEqComp_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_21, (MR_Integer) 1)));
#line 609 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgCtors_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_21, (MR_Integer) 2)));

#line 619 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__MaybeDirectArgCtors_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 621 "prog_io_type_defn.m"
              {
#line 621 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__parse_solver_type_base_10_p_0(parse_tree__prog_io_type_defn__ModuleName_10, parse_tree__prog_io_type_defn__VarSet_11, parse_tree__prog_io_type_defn__HeadTerm_12, parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_23, parse_tree__prog_io_type_defn__MaybeUserEqComp_24, parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_62, parse_tree__prog_io_type_defn__Condition_15, parse_tree__prog_io_type_defn__Context_16, parse_tree__prog_io_type_defn__SeqNum_17, parse_tree__prog_io_type_defn__MaybeItem_18);
#line 621 "prog_io_type_defn.m"
                return;
              }
#line 619 "prog_io_type_defn.m"
            else
#line 611 "prog_io_type_defn.m"
              {
#line 611 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_28;
#line 611 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_47_47;
#line 611 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_48_48;
#line 611 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_49_49;
#line 611 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_54_54;

#line 616 "prog_io_type_defn.m"
                {
#line 616 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_49_49 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadTerm_12);
                }
#line 617 "prog_io_type_defn.m"
                {
#line 617 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 617 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_49_49));
#line 617 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[136])));
#line 617 "prog_io_type_defn.m"
                }
#line 615 "prog_io_type_defn.m"
                {
#line 615 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 615 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_48_48));
#line 615 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 615 "prog_io_type_defn.m"
                }
#line 615 "prog_io_type_defn.m"
                {
#line 615 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 615 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 615 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 615 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_28, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 615 "prog_io_type_defn.m"
                }
#line 618 "prog_io_type_defn.m"
                {
#line 618 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_28));
#line 618 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 618 "prog_io_type_defn.m"
                }
#line 618 "prog_io_type_defn.m"
                {
#line 618 "prog_io_type_defn.m"
                  MR_Word base;
#line 618 "prog_io_type_defn.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 618 "prog_io_type_defn.m"
                  *parse_tree__prog_io_type_defn__MaybeItem_18 = base;
#line 618 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_54_54));
#line 618 "prog_io_type_defn.m"
                }
#line 611 "prog_io_type_defn.m"
              }
#line 609 "prog_io_type_defn.m"
          }
#line 9341 "parse_tree.prog_io_type_defn.c"
      }
#line 9343 "parse_tree.prog_io_type_defn.c"
    else
#line 598 "prog_io_type_defn.m"
      {
#line 598 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__parse_where_type_is_abstract_enum_8_p_0(parse_tree__prog_io_type_defn__ModuleName_10, parse_tree__prog_io_type_defn__VarSet_11, parse_tree__prog_io_type_defn__HeadTerm_12, parse_tree__prog_io_type_defn__BodyTerm_13, parse_tree__prog_io_type_defn__Condition_15, parse_tree__prog_io_type_defn__Context_16, parse_tree__prog_io_type_defn__SeqNum_17, parse_tree__prog_io_type_defn__MaybeItem_18);
#line 598 "prog_io_type_defn.m"
        return;
      }
#line 9352 "parse_tree.prog_io_type_defn.c"
  }
#line 589 "prog_io_type_defn.m"
}

#line 521 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__find_constructor_4_p_0(
#line 521 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 521 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__SymName_7,
#line 521 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__Arity_8,
#line 521 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Ctor_9)
#line 521 "prog_io_type_defn.m"
{
#line 524 "prog_io_type_defn.m"
  while (MR_TRUE)
#line 524 "prog_io_type_defn.m"
    {
#line 524 "prog_io_type_defn.m"
      /* tailcall optimized into a loop */
#line 524 "prog_io_type_defn.m"
      {
#line 524 "prog_io_type_defn.m"
        MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 524 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__H_5;
#line 524 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__T_6;
#line 526 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_14_14;
#line 526 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Args_12;
#line 526 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_15_15;
#line 526 "prog_io_type_defn.m"
        MR_Integer parse_tree__prog_io_type_defn__V_16_16;
#line 526 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_10_10;
#line 526 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_11_11;
#line 526 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_13_13;

#line 524 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 524 "prog_io_type_defn.m"
          {
#line 524 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__H_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__1_1, (MR_Integer) 0)));
#line 524 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__1_1, (MR_Integer) 1)));
#line 526 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__H_5, (MR_Integer) 0)));
#line 526 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__H_5, (MR_Integer) 1)));
#line 526 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__H_5, (MR_Integer) 2)));
#line 526 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__H_5, (MR_Integer) 3)));
#line 526 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__H_5, (MR_Integer) 4)));
#line 526 "prog_io_type_defn.m"
            {
#line 526 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__prog_io_type_defn__SymName_7, parse_tree__prog_io_type_defn__V_15_15);
            }
#line 526 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 526 "prog_io_type_defn.m"
              {
#line 9426 "parse_tree.prog_io_type_defn.c"
                parse_tree__prog_io_type_defn__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 527 "prog_io_type_defn.m"
                {
#line 527 "prog_io_type_defn.m"
                  mercury__list__length_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_14_14, parse_tree__prog_io_type_defn__Args_12, &parse_tree__prog_io_type_defn__V_16_16);
                }
#line 527 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__Arity_8 == parse_tree__prog_io_type_defn__V_16_16);
#line 526 "prog_io_type_defn.m"
              }
#line 530 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 529 "prog_io_type_defn.m"
              {
#line 529 "prog_io_type_defn.m"
                *parse_tree__prog_io_type_defn__Ctor_9 = parse_tree__prog_io_type_defn__H_5;
#line 529 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = MR_TRUE;
#line 529 "prog_io_type_defn.m"
              }
#line 530 "prog_io_type_defn.m"
            else
#line 531 "prog_io_type_defn.m"
              {
#line 531 "prog_io_type_defn.m"
                /* direct tailcall eliminated */
#line 531 "prog_io_type_defn.m"
                {
#line 531 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__HeadVar__1__tmp_copy_1 = parse_tree__prog_io_type_defn__T_6;

#line 531 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__HeadVar__1_1 = parse_tree__prog_io_type_defn__HeadVar__1__tmp_copy_1;
#line 531 "prog_io_type_defn.m"
                }
#line 531 "prog_io_type_defn.m"
                continue;
#line 531 "prog_io_type_defn.m"
              }
#line 524 "prog_io_type_defn.m"
          }
#line 524 "prog_io_type_defn.m"
        return parse_tree__prog_io_type_defn__succeeded;
#line 524 "prog_io_type_defn.m"
      }
#line 524 "prog_io_type_defn.m"
      break;
#line 524 "prog_io_type_defn.m"
    }
#line 521 "prog_io_type_defn.m"
}

#line 482 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__check_direct_arg_ctors_5_p_0(
#line 482 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 482 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_2,
#line 482 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3,
#line 482 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4,
#line 482 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_5)
#line 482 "prog_io_type_defn.m"
{
#line 486 "prog_io_type_defn.m"
  while (MR_TRUE)
#line 486 "prog_io_type_defn.m"
    {
#line 486 "prog_io_type_defn.m"
      /* tailcall optimized into a loop */
#line 486 "prog_io_type_defn.m"
      {
#line 486 "prog_io_type_defn.m"
        MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 486 "prog_io_type_defn.m"
        if ((parse_tree__prog_io_type_defn__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_5 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4;
#line 486 "prog_io_type_defn.m"
        else
#line 488 "prog_io_type_defn.m"
          {
#line 488 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__DirectArgCtor_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__2_2, (MR_Integer) 0)));
#line 488 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__DirectArgCtors_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__2_2, (MR_Integer) 1)));
#line 488 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__DirectArgCtor_12, (MR_Integer) 0)));
#line 488 "prog_io_type_defn.m"
            MR_Integer parse_tree__prog_io_type_defn__Arity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__DirectArgCtor_12, (MR_Integer) 1)));
#line 488 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_53_53;
#line 510 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Ctor_18;

#line 490 "prog_io_type_defn.m"
            {
#line 490 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_type_defn__find_constructor_4_p_0(parse_tree__prog_io_type_defn__HeadVar__1_1, parse_tree__prog_io_type_defn__SymName_16, parse_tree__prog_io_type_defn__Arity_17, &parse_tree__prog_io_type_defn__Ctor_18);
            }
#line 510 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 491 "prog_io_type_defn.m"
              {
#line 491 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ExistQVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 0)));
#line 491 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn___Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 1)));
#line 491 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn___SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 2)));
#line 491 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn___Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 3)));
#line 491 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn___Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 4)));

#line 492 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__Arity_17 == (MR_Integer) 1);
#line 492 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = !(parse_tree__prog_io_type_defn__succeeded);
#line 499 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 495 "prog_io_type_defn.m"
                  {
#line 495 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Spec_25;
#line 495 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_46_46;
#line 495 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_47_47;
#line 495 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_48_48;

#line 497 "prog_io_type_defn.m"
                    {
#line 497 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_48_48 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadVar__3_3);
                    }
#line 497 "prog_io_type_defn.m"
                    {
#line 497 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 497 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_48_48));
#line 497 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[132])));
#line 497 "prog_io_type_defn.m"
                    }
#line 496 "prog_io_type_defn.m"
                    {
#line 496 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 496 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 496 "prog_io_type_defn.m"
                    }
#line 496 "prog_io_type_defn.m"
                    {
#line 496 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 496 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 496 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 496 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_25, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_46_46));
#line 496 "prog_io_type_defn.m"
                    }
#line 498 "prog_io_type_defn.m"
                    {
#line 498 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 498 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_53_53, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_25));
#line 498 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_53_53, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4));
#line 498 "prog_io_type_defn.m"
                    }
#line 495 "prog_io_type_defn.m"
                  }
#line 499 "prog_io_type_defn.m"
                else
#line 507 "prog_io_type_defn.m"
                  {
#line 499 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_26_26;
#line 499 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_27_27;

#line 499 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__ExistQVars_19)) == (MR_mktag((MR_Integer) 1)));
#line 499 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 499 "prog_io_type_defn.m"
                      {
#line 499 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__ExistQVars_19, (MR_Integer) 0)));
#line 499 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__ExistQVars_19, (MR_Integer) 1)));
#line 503 "prog_io_type_defn.m"
                        {
#line 503 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_56_56;
#line 503 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_59_59;
#line 503 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_62_62;
#line 503 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_63_63;
#line 503 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_72_72;
#line 503 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_73_73;
#line 503 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_74_74;
#line 503 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_75_75;
#line 503 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_76_76;
#line 503 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__Pieces_107;
#line 503 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__Spec_108;

#line 502 "prog_io_type_defn.m"
                          {
#line 502 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 502 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__DirectArgCtor_12));
#line 502 "prog_io_type_defn.m"
                          }
#line 501 "prog_io_type_defn.m"
                          {
#line 501 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_63_63));
#line 501 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[54])));
#line 501 "prog_io_type_defn.m"
                          }
#line 500 "prog_io_type_defn.m"
                          {
#line 500 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_59_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[134])));
#line 500 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_59_59, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_62_62));
#line 500 "prog_io_type_defn.m"
                          }
#line 500 "prog_io_type_defn.m"
                          {
#line 500 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_56_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_defn_scalar_common_2[2])));
#line 500 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_59_59));
#line 500 "prog_io_type_defn.m"
                          }
#line 500 "prog_io_type_defn.m"
                          {
#line 500 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__Pieces_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_107, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[133])));
#line 500 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_107, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_56_56));
#line 500 "prog_io_type_defn.m"
                          }
#line 505 "prog_io_type_defn.m"
                          {
#line 505 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_74_74 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadVar__3_3);
                          }
#line 505 "prog_io_type_defn.m"
                          {
#line 505 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 505 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_107));
#line 505 "prog_io_type_defn.m"
                          }
#line 505 "prog_io_type_defn.m"
                          {
#line 505 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_76_76));
#line 505 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 505 "prog_io_type_defn.m"
                          }
#line 505 "prog_io_type_defn.m"
                          {
#line 505 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 505 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_74_74));
#line 505 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_73_73, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_75_75));
#line 505 "prog_io_type_defn.m"
                          }
#line 504 "prog_io_type_defn.m"
                          {
#line 504 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 504 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_73_73));
#line 504 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 504 "prog_io_type_defn.m"
                          }
#line 504 "prog_io_type_defn.m"
                          {
#line 504 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__Spec_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 504 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_108, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 504 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 504 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_108, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_72_72));
#line 504 "prog_io_type_defn.m"
                          }
#line 506 "prog_io_type_defn.m"
                          {
#line 506 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 506 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_53_53, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_108));
#line 506 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_53_53, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4));
#line 506 "prog_io_type_defn.m"
                          }
#line 503 "prog_io_type_defn.m"
                        }
#line 499 "prog_io_type_defn.m"
                      }
#line 499 "prog_io_type_defn.m"
                    else
#line 506 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_53_53 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4;
#line 507 "prog_io_type_defn.m"
                  }
#line 491 "prog_io_type_defn.m"
              }
#line 510 "prog_io_type_defn.m"
            else
#line 514 "prog_io_type_defn.m"
              {
#line 514 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_82_82;
#line 514 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_85_85;
#line 514 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_88_88;
#line 514 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_89_89;
#line 514 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_98_98;
#line 514 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_99_99;
#line 514 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_100_100;
#line 514 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_101_101;
#line 514 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_102_102;
#line 514 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Pieces_111;
#line 514 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_112;

#line 513 "prog_io_type_defn.m"
                {
#line 513 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_89_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_89_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 513 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_89_89, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__DirectArgCtor_12));
#line 513 "prog_io_type_defn.m"
                }
#line 512 "prog_io_type_defn.m"
                {
#line 512 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_88_88, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_89_89));
#line 512 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[56])));
#line 512 "prog_io_type_defn.m"
                }
#line 511 "prog_io_type_defn.m"
                {
#line 511 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_85_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[135])));
#line 511 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_85_85, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_88_88));
#line 511 "prog_io_type_defn.m"
                }
#line 511 "prog_io_type_defn.m"
                {
#line 511 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_82_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_defn_scalar_common_2[2])));
#line 511 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_82_82, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_85_85));
#line 511 "prog_io_type_defn.m"
                }
#line 511 "prog_io_type_defn.m"
                {
#line 511 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Pieces_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_111, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[133])));
#line 511 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_111, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_82_82));
#line 511 "prog_io_type_defn.m"
                }
#line 516 "prog_io_type_defn.m"
                {
#line 516 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_100_100 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadVar__3_3);
                }
#line 516 "prog_io_type_defn.m"
                {
#line 516 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 516 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_102_102, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_111));
#line 516 "prog_io_type_defn.m"
                }
#line 516 "prog_io_type_defn.m"
                {
#line 516 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 516 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_101_101, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_102_102));
#line 516 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 516 "prog_io_type_defn.m"
                }
#line 516 "prog_io_type_defn.m"
                {
#line 516 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 516 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_99_99, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_100_100));
#line 516 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_99_99, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_101_101));
#line 516 "prog_io_type_defn.m"
                }
#line 515 "prog_io_type_defn.m"
                {
#line 515 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_98_98, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_99_99));
#line 515 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 515 "prog_io_type_defn.m"
                }
#line 515 "prog_io_type_defn.m"
                {
#line 515 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 515 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 515 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 515 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_112, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_98_98));
#line 515 "prog_io_type_defn.m"
                }
#line 517 "prog_io_type_defn.m"
                {
#line 517 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 517 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_53_53, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_112));
#line 517 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_53_53, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4));
#line 517 "prog_io_type_defn.m"
                }
#line 514 "prog_io_type_defn.m"
              }
#line 519 "prog_io_type_defn.m"
            /* direct tailcall eliminated */
#line 519 "prog_io_type_defn.m"
            {
#line 519 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__HeadVar__2__tmp_copy_2 = parse_tree__prog_io_type_defn__DirectArgCtors_13;
#line 519 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0__tmp_copy_4 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_53_53;

#line 519 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0__tmp_copy_4;
#line 519 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__HeadVar__2_2 = parse_tree__prog_io_type_defn__HeadVar__2__tmp_copy_2;
#line 519 "prog_io_type_defn.m"
            }
#line 519 "prog_io_type_defn.m"
            continue;
#line 488 "prog_io_type_defn.m"
          }
#line 486 "prog_io_type_defn.m"
      }
#line 486 "prog_io_type_defn.m"
      break;
#line 486 "prog_io_type_defn.m"
    }
#line 482 "prog_io_type_defn.m"
}

#line 457 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_6(
#line 457 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 457 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 457 "prog_io_type_defn.m"
{
#line 457 "prog_io_type_defn.m"
  {
#line 457 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 457 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;

#line 457 "prog_io_type_defn.m"
    {
#line 457 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__457__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 457 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 457 "prog_io_type_defn.m"
  }
#line 457 "prog_io_type_defn.m"
}

#line 453 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_5(
#line 453 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 453 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 453 "prog_io_type_defn.m"
{
#line 453 "prog_io_type_defn.m"
  {
#line 453 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 453 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 453 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv7_HeadVar__2_2;

#line 453 "prog_io_type_defn.m"
    {
#line 453 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv7_HeadVar__2_2 = parse_tree__prog_data__prog_constraint_get_arg_types_1_f_0(((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 453 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv7_HeadVar__2_2));
#line 453 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 453 "prog_io_type_defn.m"
  }
#line 453 "prog_io_type_defn.m"
}

#line 429 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_4(
#line 429 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 429 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 429 "prog_io_type_defn.m"
{
#line 429 "prog_io_type_defn.m"
  {
#line 429 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 429 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;

#line 429 "prog_io_type_defn.m"
    {
#line 429 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__429__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 429 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 429 "prog_io_type_defn.m"
  }
#line 429 "prog_io_type_defn.m"
}

#line 425 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_3(
#line 425 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 425 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 425 "prog_io_type_defn.m"
{
#line 425 "prog_io_type_defn.m"
  {
#line 425 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 425 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 425 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv4_HeadVar__2_123;

#line 425 "prog_io_type_defn.m"
    {
#line 425 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv4_HeadVar__2_123 = parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__425__1_1_f_0(((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 425 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv4_HeadVar__2_123));
#line 425 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 425 "prog_io_type_defn.m"
  }
#line 425 "prog_io_type_defn.m"
}

#line 380 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_2(
#line 380 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 380 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 380 "prog_io_type_defn.m"
{
#line 380 "prog_io_type_defn.m"
  {
#line 380 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 380 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;

#line 380 "prog_io_type_defn.m"
    {
#line 380 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__380__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 380 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 380 "prog_io_type_defn.m"
  }
#line 380 "prog_io_type_defn.m"
}

#line 377 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_1(
#line 377 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 377 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 377 "prog_io_type_defn.m"
{
#line 377 "prog_io_type_defn.m"
  {
#line 377 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 377 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 377 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv0_HeadVar__2_58;

#line 377 "prog_io_type_defn.m"
    {
#line 377 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv0_HeadVar__2_58 = parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__377__1_1_f_0(((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 377 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv0_HeadVar__2_58));
#line 377 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 377 "prog_io_type_defn.m"
  }
#line 377 "prog_io_type_defn.m"
}

#line 367 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0(
#line 367 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 367 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_2,
#line 367 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_3,
#line 367 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__4_4,
#line 367 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5,
#line 367 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_6)
#line 367 "prog_io_type_defn.m"
{
#line 370 "prog_io_type_defn.m"
  while (MR_TRUE)
#line 370 "prog_io_type_defn.m"
    {
#line 370 "prog_io_type_defn.m"
      /* tailcall optimized into a loop */
#line 370 "prog_io_type_defn.m"
      {
#line 370 "prog_io_type_defn.m"
        MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 370 "prog_io_type_defn.m"
        if ((parse_tree__prog_io_type_defn__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 370 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_6 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5;
#line 370 "prog_io_type_defn.m"
        else
#line 371 "prog_io_type_defn.m"
          {
#line 371 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Ctor_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__4_4, (MR_Integer) 0)));
#line 371 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Ctors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__4_4, (MR_Integer) 1)));
#line 371 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ExistQVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 0)));
#line 371 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 1)));
#line 371 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__CtorArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 3)));
#line 371 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86;
#line 372 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn___CtorName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 2)));
#line 372 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn___Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 4)));
#line 396 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__NotExistQOrParamVars_29;
#line 377 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__TypeInfo_253_253;
#line 377 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__CtorArgTypes_24;
#line 377 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_26;
#line 377 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes_27;
#line 377 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_59_59;
#line 377 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_60_60;
#line 380 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn___ExistQOrParamVars_28;
#line 382 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_30_30;
#line 382 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_31_31;

#line 377 "prog_io_type_defn.m"
            {
#line 377 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__CtorArgTypes_24 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_4[3], parse_tree__prog_io_type_defn__CtorArgs_22);
            }
#line 378 "prog_io_type_defn.m"
            {
#line 378 "prog_io_type_defn.m"
              parse_tree__prog_type__type_vars_list_2_p_0(parse_tree__prog_io_type_defn__CtorArgTypes_24, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_26);
            }
#line 10218 "parse_tree.prog_io_type_defn.c"
            parse_tree__prog_io_type_defn__TypeInfo_253_253 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 379 "prog_io_type_defn.m"
            {
#line 379 "prog_io_type_defn.m"
              mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_253_253, parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_26, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes_27);
            }
#line 380 "prog_io_type_defn.m"
            {
#line 380 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_60_60 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeInfo_253_253, parse_tree__prog_io_type_defn__ExistQVars_19, parse_tree__prog_io_type_defn__HeadVar__1_1);
            }
#line 380 "prog_io_type_defn.m"
            {
#line 380 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 380 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_59_59, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[2]));
#line 380 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_59_59, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_2));
#line 380 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 380 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_59_59, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__V_60_60));
#line 380 "prog_io_type_defn.m"
            }
#line 380 "prog_io_type_defn.m"
            {
#line 380 "prog_io_type_defn.m"
              mercury__list__filter_4_p_0(parse_tree__prog_io_type_defn__TypeInfo_253_253, parse_tree__prog_io_type_defn__V_59_59, parse_tree__prog_io_type_defn__VarsInCtorArgTypes_27, &parse_tree__prog_io_type_defn___ExistQOrParamVars_28, &parse_tree__prog_io_type_defn__NotExistQOrParamVars_29);
            }
#line 382 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__NotExistQOrParamVars_29)) == (MR_mktag((MR_Integer) 1)));
#line 382 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 382 "prog_io_type_defn.m"
              {
#line 382 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotExistQOrParamVars_29, (MR_Integer) 0)));
#line 382 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotExistQOrParamVars_29, (MR_Integer) 1)));
#line 385 "prog_io_type_defn.m"
                {
#line 385 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_256_256 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 385 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_257_257 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 385 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__GenericVarSet_32;
#line 385 "prog_io_type_defn.m"
                  MR_String parse_tree__prog_io_type_defn__NotExistQOrParamVarsStr_33;
#line 385 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__Pieces_34;
#line 385 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__Spec_35;
#line 385 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_64_64;
#line 385 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_65_65;
#line 385 "prog_io_type_defn.m"
                  MR_String parse_tree__prog_io_type_defn__V_66_66;
#line 385 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_69_69;
#line 385 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_70_70;
#line 385 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_79_79;
#line 385 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_80_80;
#line 385 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_81_81;
#line 385 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_82_82;
#line 385 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_83_83;
#line 389 "prog_io_type_defn.m"
                  MR_Box parse_tree__prog_io_type_defn__conv1_V_66_66;

#line 385 "prog_io_type_defn.m"
                  {
#line 385 "prog_io_type_defn.m"
                    mercury__varset__coerce_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_256_256, parse_tree__prog_io_type_defn__TypeCtorInfo_257_257, parse_tree__prog_io_type_defn__VarSet_2, &parse_tree__prog_io_type_defn__GenericVarSet_32);
                  }
#line 386 "prog_io_type_defn.m"
                  {
#line 386 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__NotExistQOrParamVarsStr_33 = parse_tree__mercury_to_mercury__mercury_vars_to_string_3_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_257_257, parse_tree__prog_io_type_defn__GenericVarSet_32, (MR_Integer) 0, parse_tree__prog_io_type_defn__NotExistQOrParamVars_29);
                  }
#line 389 "prog_io_type_defn.m"
                  {
#line 389 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__conv1_V_66_66 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_io_type_defn__NotExistQOrParamVars_29, ((MR_Box) ((MR_String) "parameter")), ((MR_Box) ((MR_String) "parameters")));
                  }
#line 389 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_66_66 = ((MR_String) parse_tree__prog_io_type_defn__conv1_V_66_66);
#line 390 "prog_io_type_defn.m"
                  {
#line 390 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 390 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_65_65, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_66_66));
#line 390 "prog_io_type_defn.m"
                  }
#line 391 "prog_io_type_defn.m"
                  {
#line 391 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 391 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_70_70, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__NotExistQOrParamVarsStr_33));
#line 391 "prog_io_type_defn.m"
                  }
#line 390 "prog_io_type_defn.m"
                  {
#line 390 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_70_70));
#line 390 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[31])));
#line 390 "prog_io_type_defn.m"
                  }
#line 388 "prog_io_type_defn.m"
                  {
#line 388 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_65_65));
#line 388 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_64_64, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_69_69));
#line 388 "prog_io_type_defn.m"
                  }
#line 388 "prog_io_type_defn.m"
                  {
#line 388 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__Pieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[128])));
#line 388 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_34, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_64_64));
#line 388 "prog_io_type_defn.m"
                  }
#line 394 "prog_io_type_defn.m"
                  {
#line 394 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_81_81 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_256_256, parse_tree__prog_io_type_defn__BodyTerm_3);
                  }
#line 394 "prog_io_type_defn.m"
                  {
#line 394 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 394 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_34));
#line 394 "prog_io_type_defn.m"
                  }
#line 394 "prog_io_type_defn.m"
                  {
#line 394 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_82_82, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_83_83));
#line 394 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 394 "prog_io_type_defn.m"
                  }
#line 394 "prog_io_type_defn.m"
                  {
#line 394 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 394 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_81_81));
#line 394 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_80_80, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_82_82));
#line 394 "prog_io_type_defn.m"
                  }
#line 393 "prog_io_type_defn.m"
                  {
#line 393 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 393 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_80_80));
#line 393 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 393 "prog_io_type_defn.m"
                  }
#line 393 "prog_io_type_defn.m"
                  {
#line 393 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__Spec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 393 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 393 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 393 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_35, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_79_79));
#line 393 "prog_io_type_defn.m"
                  }
#line 395 "prog_io_type_defn.m"
                  {
#line 395 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_35));
#line 395 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5));
#line 395 "prog_io_type_defn.m"
                  }
#line 385 "prog_io_type_defn.m"
                }
#line 382 "prog_io_type_defn.m"
              }
#line 382 "prog_io_type_defn.m"
            else
#line 421 "prog_io_type_defn.m"
              {
#line 421 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ExistQParamsSet_38;
#line 401 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeInfo_260_260 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 401 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ExistQVarsSet_36;
#line 401 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParamsSet_37;

#line 401 "prog_io_type_defn.m"
                {
#line 401 "prog_io_type_defn.m"
                  mercury__set__list_to_set_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_260_260, parse_tree__prog_io_type_defn__ExistQVars_19, &parse_tree__prog_io_type_defn__ExistQVarsSet_36);
                }
#line 402 "prog_io_type_defn.m"
                {
#line 402 "prog_io_type_defn.m"
                  mercury__set__list_to_set_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_260_260, parse_tree__prog_io_type_defn__HeadVar__1_1, &parse_tree__prog_io_type_defn__ParamsSet_37);
                }
#line 403 "prog_io_type_defn.m"
                {
#line 403 "prog_io_type_defn.m"
                  mercury__set__intersect_3_p_0(parse_tree__prog_io_type_defn__TypeInfo_260_260, parse_tree__prog_io_type_defn__ExistQVarsSet_36, parse_tree__prog_io_type_defn__ParamsSet_37, &parse_tree__prog_io_type_defn__ExistQParamsSet_38);
                }
#line 404 "prog_io_type_defn.m"
                {
#line 404 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__succeeded = mercury__set__non_empty_1_p_0(parse_tree__prog_io_type_defn__TypeInfo_260_260, parse_tree__prog_io_type_defn__ExistQParamsSet_38);
                }
#line 421 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 407 "prog_io_type_defn.m"
                  {
#line 407 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeInfo_261_261 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 407 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_262_262;
#line 407 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_263_263;
#line 407 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_264_264;
#line 407 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__ExistQParams_39;
#line 407 "prog_io_type_defn.m"
                    MR_String parse_tree__prog_io_type_defn__ExistQParamVarsStr_40;
#line 407 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_90_90;
#line 407 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_91_91;
#line 407 "prog_io_type_defn.m"
                    MR_String parse_tree__prog_io_type_defn__V_92_92;
#line 407 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_95_95;
#line 407 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_96_96;
#line 407 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_97_97;
#line 407 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_98_98;
#line 407 "prog_io_type_defn.m"
                    MR_String parse_tree__prog_io_type_defn__V_99_99;
#line 407 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_113_113;
#line 407 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_114_114;
#line 407 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_115_115;
#line 407 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_116_116;
#line 407 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_117_117;
#line 407 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__GenericVarSet_213;
#line 407 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Pieces_214;
#line 407 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Spec_215;
#line 412 "prog_io_type_defn.m"
                    MR_Box parse_tree__prog_io_type_defn__conv2_V_92_92;
#line 415 "prog_io_type_defn.m"
                    MR_Box parse_tree__prog_io_type_defn__conv3_V_99_99;

#line 407 "prog_io_type_defn.m"
                    {
#line 407 "prog_io_type_defn.m"
                      mercury__set__to_sorted_list_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_261_261, parse_tree__prog_io_type_defn__ExistQParamsSet_38, &parse_tree__prog_io_type_defn__ExistQParams_39);
                    }
#line 10523 "parse_tree.prog_io_type_defn.c"
                    parse_tree__prog_io_type_defn__TypeCtorInfo_262_262 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 10525 "parse_tree.prog_io_type_defn.c"
                    parse_tree__prog_io_type_defn__TypeCtorInfo_263_263 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 408 "prog_io_type_defn.m"
                    {
#line 408 "prog_io_type_defn.m"
                      mercury__varset__coerce_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_262_262, parse_tree__prog_io_type_defn__TypeCtorInfo_263_263, parse_tree__prog_io_type_defn__VarSet_2, &parse_tree__prog_io_type_defn__GenericVarSet_213);
                    }
#line 409 "prog_io_type_defn.m"
                    {
#line 409 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__ExistQParamVarsStr_40 = parse_tree__mercury_to_mercury__mercury_vars_to_string_3_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_263_263, parse_tree__prog_io_type_defn__GenericVarSet_213, (MR_Integer) 0, parse_tree__prog_io_type_defn__ExistQParams_39);
                    }
#line 10537 "parse_tree.prog_io_type_defn.c"
                    parse_tree__prog_io_type_defn__TypeCtorInfo_264_264 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 412 "prog_io_type_defn.m"
                    {
#line 412 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__conv2_V_92_92 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_261_261, parse_tree__prog_io_type_defn__TypeCtorInfo_264_264, parse_tree__prog_io_type_defn__ExistQParams_39, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
                    }
#line 412 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_92_92 = ((MR_String) parse_tree__prog_io_type_defn__conv2_V_92_92);
#line 413 "prog_io_type_defn.m"
                    {
#line 413 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_91_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_91_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 413 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_91_91, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_92_92));
#line 413 "prog_io_type_defn.m"
                    }
#line 414 "prog_io_type_defn.m"
                    {
#line 414 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_96_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_96_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 414 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_96_96, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__ExistQParamVarsStr_40));
#line 414 "prog_io_type_defn.m"
                    }
#line 415 "prog_io_type_defn.m"
                    {
#line 415 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__conv3_V_99_99 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_261_261, parse_tree__prog_io_type_defn__TypeCtorInfo_264_264, parse_tree__prog_io_type_defn__ExistQParams_39, ((MR_Box) ((MR_String) "has")), ((MR_Box) ((MR_String) "have")));
                    }
#line 415 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_99_99 = ((MR_String) parse_tree__prog_io_type_defn__conv3_V_99_99);
#line 415 "prog_io_type_defn.m"
                    {
#line 415 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 415 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_98_98, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_99_99));
#line 415 "prog_io_type_defn.m"
                    }
#line 414 "prog_io_type_defn.m"
                    {
#line 414 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_97_97, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_98_98));
#line 414 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[35])));
#line 414 "prog_io_type_defn.m"
                    }
#line 413 "prog_io_type_defn.m"
                    {
#line 413 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_95_95, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_96_96));
#line 413 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_95_95, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_97_97));
#line 413 "prog_io_type_defn.m"
                    }
#line 411 "prog_io_type_defn.m"
                    {
#line 411 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_91_91));
#line 411 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_90_90, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_95_95));
#line 411 "prog_io_type_defn.m"
                    }
#line 411 "prog_io_type_defn.m"
                    {
#line 411 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Pieces_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_214, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[129])));
#line 411 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_214, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_90_90));
#line 411 "prog_io_type_defn.m"
                    }
#line 419 "prog_io_type_defn.m"
                    {
#line 419 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_115_115 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_262_262, parse_tree__prog_io_type_defn__BodyTerm_3);
                    }
#line 419 "prog_io_type_defn.m"
                    {
#line 419 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 419 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_117_117, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_214));
#line 419 "prog_io_type_defn.m"
                    }
#line 419 "prog_io_type_defn.m"
                    {
#line 419 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 419 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_116_116, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_117_117));
#line 419 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 419 "prog_io_type_defn.m"
                    }
#line 419 "prog_io_type_defn.m"
                    {
#line 419 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 419 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_114_114, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_115_115));
#line 419 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_114_114, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_116_116));
#line 419 "prog_io_type_defn.m"
                    }
#line 418 "prog_io_type_defn.m"
                    {
#line 418 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_113_113, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_114_114));
#line 418 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 418 "prog_io_type_defn.m"
                    }
#line 418 "prog_io_type_defn.m"
                    {
#line 418 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Spec_215 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 418 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_215, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 418 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_215, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 418 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_215, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_113_113));
#line 418 "prog_io_type_defn.m"
                    }
#line 420 "prog_io_type_defn.m"
                    {
#line 420 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_215));
#line 420 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5));
#line 420 "prog_io_type_defn.m"
                    }
#line 407 "prog_io_type_defn.m"
                  }
#line 421 "prog_io_type_defn.m"
                else
#line 448 "prog_io_type_defn.m"
                  {
#line 448 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__NotOccursExistQVars_43;
#line 425 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeInfo_267_267;
#line 425 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__ConstraintTVars_41;
#line 425 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_124_124;
#line 425 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_125_125;
#line 425 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__CtorArgTypes_217;
#line 425 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_218;
#line 425 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes_219;
#line 429 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn___OccursExistQVars_42;
#line 431 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_44_44;
#line 431 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_45_45;

#line 425 "prog_io_type_defn.m"
                    {
#line 425 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__CtorArgTypes_217 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_4[4], parse_tree__prog_io_type_defn__CtorArgs_22);
                    }
#line 426 "prog_io_type_defn.m"
                    {
#line 426 "prog_io_type_defn.m"
                      parse_tree__prog_type__type_vars_list_2_p_0(parse_tree__prog_io_type_defn__CtorArgTypes_217, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_218);
                    }
#line 10727 "parse_tree.prog_io_type_defn.c"
                    parse_tree__prog_io_type_defn__TypeInfo_267_267 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 427 "prog_io_type_defn.m"
                    {
#line 427 "prog_io_type_defn.m"
                      mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_267_267, parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_218, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes_219);
                    }
#line 428 "prog_io_type_defn.m"
                    {
#line 428 "prog_io_type_defn.m"
                      parse_tree__prog_type__constraint_list_get_tvars_2_p_0(parse_tree__prog_io_type_defn__Constraints_20, &parse_tree__prog_io_type_defn__ConstraintTVars_41);
                    }
#line 429 "prog_io_type_defn.m"
                    {
#line 429 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_125_125 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeInfo_267_267, parse_tree__prog_io_type_defn__VarsInCtorArgTypes_219, parse_tree__prog_io_type_defn__ConstraintTVars_41);
                    }
#line 429 "prog_io_type_defn.m"
                    {
#line 429 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 429 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_124_124, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[2]));
#line 429 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_124_124, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_4));
#line 429 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_124_124, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 429 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_124_124, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__V_125_125));
#line 429 "prog_io_type_defn.m"
                    }
#line 429 "prog_io_type_defn.m"
                    {
#line 429 "prog_io_type_defn.m"
                      mercury__list__filter_4_p_0(parse_tree__prog_io_type_defn__TypeInfo_267_267, parse_tree__prog_io_type_defn__V_124_124, parse_tree__prog_io_type_defn__ExistQVars_19, &parse_tree__prog_io_type_defn___OccursExistQVars_42, &parse_tree__prog_io_type_defn__NotOccursExistQVars_43);
                    }
#line 431 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__NotOccursExistQVars_43)) == (MR_mktag((MR_Integer) 1)));
#line 431 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 431 "prog_io_type_defn.m"
                      {
#line 431 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotOccursExistQVars_43, (MR_Integer) 0)));
#line 431 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotOccursExistQVars_43, (MR_Integer) 1)));
#line 434 "prog_io_type_defn.m"
                        {
#line 434 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_270_270 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 434 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_271_271 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 434 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__TypeInfo_272_272;
#line 434 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_273_273;
#line 434 "prog_io_type_defn.m"
                          MR_String parse_tree__prog_io_type_defn__NotOccursExistQVarsStr_46;
#line 434 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_129_129;
#line 434 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_130_130;
#line 434 "prog_io_type_defn.m"
                          MR_String parse_tree__prog_io_type_defn__V_131_131;
#line 434 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_134_134;
#line 434 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_135_135;
#line 434 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_136_136;
#line 434 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_139_139;
#line 434 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_140_140;
#line 434 "prog_io_type_defn.m"
                          MR_String parse_tree__prog_io_type_defn__V_141_141;
#line 434 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_152_152;
#line 434 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_153_153;
#line 434 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_154_154;
#line 434 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_155_155;
#line 434 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_156_156;
#line 434 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__GenericVarSet_220;
#line 434 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__Pieces_221;
#line 434 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__Spec_222;
#line 438 "prog_io_type_defn.m"
                          MR_Box parse_tree__prog_io_type_defn__conv5_V_131_131;
#line 442 "prog_io_type_defn.m"
                          MR_Box parse_tree__prog_io_type_defn__conv6_V_141_141;

#line 434 "prog_io_type_defn.m"
                          {
#line 434 "prog_io_type_defn.m"
                            mercury__varset__coerce_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_270_270, parse_tree__prog_io_type_defn__TypeCtorInfo_271_271, parse_tree__prog_io_type_defn__VarSet_2, &parse_tree__prog_io_type_defn__GenericVarSet_220);
                          }
#line 435 "prog_io_type_defn.m"
                          {
#line 435 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__NotOccursExistQVarsStr_46 = parse_tree__mercury_to_mercury__mercury_vars_to_string_3_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_271_271, parse_tree__prog_io_type_defn__GenericVarSet_220, (MR_Integer) 0, parse_tree__prog_io_type_defn__NotOccursExistQVars_43);
                          }
#line 10834 "parse_tree.prog_io_type_defn.c"
                          parse_tree__prog_io_type_defn__TypeInfo_272_272 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 10836 "parse_tree.prog_io_type_defn.c"
                          parse_tree__prog_io_type_defn__TypeCtorInfo_273_273 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 438 "prog_io_type_defn.m"
                          {
#line 438 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__conv5_V_131_131 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_272_272, parse_tree__prog_io_type_defn__TypeCtorInfo_273_273, parse_tree__prog_io_type_defn__NotOccursExistQVars_43, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
                          }
#line 438 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_131_131 = ((MR_String) parse_tree__prog_io_type_defn__conv5_V_131_131);
#line 439 "prog_io_type_defn.m"
                          {
#line 439 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_130_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_130_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 439 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_130_130, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_131_131));
#line 439 "prog_io_type_defn.m"
                          }
#line 440 "prog_io_type_defn.m"
                          {
#line 440 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_135_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_135_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 440 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_135_135, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__NotOccursExistQVarsStr_46));
#line 440 "prog_io_type_defn.m"
                          }
#line 442 "prog_io_type_defn.m"
                          {
#line 442 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__conv6_V_141_141 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_272_272, parse_tree__prog_io_type_defn__TypeCtorInfo_273_273, parse_tree__prog_io_type_defn__NotOccursExistQVars_43, ((MR_Box) ((MR_String) "does not occur")), ((MR_Box) ((MR_String) "do not occur")));
                          }
#line 442 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_141_141 = ((MR_String) parse_tree__prog_io_type_defn__conv6_V_141_141);
#line 443 "prog_io_type_defn.m"
                          {
#line 443 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_140_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_140_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 443 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_140_140, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_141_141));
#line 443 "prog_io_type_defn.m"
                          }
#line 441 "prog_io_type_defn.m"
                          {
#line 441 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_139_139, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_140_140));
#line 441 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_139_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[37])));
#line 441 "prog_io_type_defn.m"
                          }
#line 440 "prog_io_type_defn.m"
                          {
#line 440 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_136_136, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[130])));
#line 440 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_136_136, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_139_139));
#line 440 "prog_io_type_defn.m"
                          }
#line 439 "prog_io_type_defn.m"
                          {
#line 439 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_134_134, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_135_135));
#line 439 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_134_134, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_136_136));
#line 439 "prog_io_type_defn.m"
                          }
#line 437 "prog_io_type_defn.m"
                          {
#line 437 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_129_129, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_130_130));
#line 437 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_129_129, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_134_134));
#line 437 "prog_io_type_defn.m"
                          }
#line 437 "prog_io_type_defn.m"
                          {
#line 437 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__Pieces_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_221, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[129])));
#line 437 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_221, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_129_129));
#line 437 "prog_io_type_defn.m"
                          }
#line 446 "prog_io_type_defn.m"
                          {
#line 446 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_154_154 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_270_270, parse_tree__prog_io_type_defn__BodyTerm_3);
                          }
#line 446 "prog_io_type_defn.m"
                          {
#line 446 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_156_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 446 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_156_156, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_221));
#line 446 "prog_io_type_defn.m"
                          }
#line 446 "prog_io_type_defn.m"
                          {
#line 446 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_155_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_155_155, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_156_156));
#line 446 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_155_155, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 446 "prog_io_type_defn.m"
                          }
#line 446 "prog_io_type_defn.m"
                          {
#line 446 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_153_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 446 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_153_153, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_154_154));
#line 446 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_153_153, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_155_155));
#line 446 "prog_io_type_defn.m"
                          }
#line 445 "prog_io_type_defn.m"
                          {
#line 445 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 445 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_152_152, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_153_153));
#line 445 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_152_152, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 445 "prog_io_type_defn.m"
                          }
#line 445 "prog_io_type_defn.m"
                          {
#line 445 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__Spec_222 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 445 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_222, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 445 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_222, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 445 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_222, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_152_152));
#line 445 "prog_io_type_defn.m"
                          }
#line 447 "prog_io_type_defn.m"
                          {
#line 447 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_222));
#line 447 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5));
#line 447 "prog_io_type_defn.m"
                          }
#line 434 "prog_io_type_defn.m"
                        }
#line 431 "prog_io_type_defn.m"
                      }
#line 431 "prog_io_type_defn.m"
                    else
#line 477 "prog_io_type_defn.m"
                      {
#line 477 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__NotExistQArgTypes_50;
#line 453 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__TypeInfo_279_279;
#line 453 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__ConstraintArgTypeLists_47;
#line 453 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__ConstraintArgTypes_48;
#line 453 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_161_161;
#line 453 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_223;
#line 453 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes_224;
#line 457 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn___ExistQArgTypes_49;
#line 459 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_51_51;
#line 459 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_52_52;

#line 452 "prog_io_type_defn.m"
                        {
#line 452 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__ConstraintArgTypeLists_47 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[8], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_4[5], parse_tree__prog_io_type_defn__Constraints_20);
                        }
#line 454 "prog_io_type_defn.m"
                        {
#line 454 "prog_io_type_defn.m"
                          mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_io_type_defn__ConstraintArgTypeLists_47, &parse_tree__prog_io_type_defn__ConstraintArgTypes_48);
                        }
#line 455 "prog_io_type_defn.m"
                        {
#line 455 "prog_io_type_defn.m"
                          parse_tree__prog_type__type_vars_list_2_p_0(parse_tree__prog_io_type_defn__ConstraintArgTypes_48, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_223);
                        }
#line 11041 "parse_tree.prog_io_type_defn.c"
                        parse_tree__prog_io_type_defn__TypeInfo_279_279 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 456 "prog_io_type_defn.m"
                        {
#line 456 "prog_io_type_defn.m"
                          mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_279_279, parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_223, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes_224);
                        }
#line 457 "prog_io_type_defn.m"
                        {
#line 457 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_161_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 457 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_161_161, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[2]));
#line 457 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_161_161, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_6));
#line 457 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_161_161, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 457 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_161_161, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__ExistQVars_19));
#line 457 "prog_io_type_defn.m"
                        }
#line 457 "prog_io_type_defn.m"
                        {
#line 457 "prog_io_type_defn.m"
                          mercury__list__filter_4_p_0(parse_tree__prog_io_type_defn__TypeInfo_279_279, parse_tree__prog_io_type_defn__V_161_161, parse_tree__prog_io_type_defn__VarsInCtorArgTypes_224, &parse_tree__prog_io_type_defn___ExistQArgTypes_49, &parse_tree__prog_io_type_defn__NotExistQArgTypes_50);
                        }
#line 459 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__NotExistQArgTypes_50)) == (MR_mktag((MR_Integer) 1)));
#line 459 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 459 "prog_io_type_defn.m"
                          {
#line 459 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotExistQArgTypes_50, (MR_Integer) 0)));
#line 459 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotExistQArgTypes_50, (MR_Integer) 1)));
#line 461 "prog_io_type_defn.m"
                            {
#line 461 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_282_282 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 461 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_283_283 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 461 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__TypeInfo_284_284;
#line 461 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_285_285;
#line 461 "prog_io_type_defn.m"
                              MR_String parse_tree__prog_io_type_defn__NotExistQArgTypesStr_53;
#line 461 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_165_165;
#line 461 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_166_166;
#line 461 "prog_io_type_defn.m"
                              MR_String parse_tree__prog_io_type_defn__V_167_167;
#line 461 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_170_170;
#line 461 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_171_171;
#line 461 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_172_172;
#line 461 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_175_175;
#line 461 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_176_176;
#line 461 "prog_io_type_defn.m"
                              MR_String parse_tree__prog_io_type_defn__V_177_177;
#line 461 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_203_203;
#line 461 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_204_204;
#line 461 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_205_205;
#line 461 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_206_206;
#line 461 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_207_207;
#line 461 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__GenericVarSet_225;
#line 461 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__Pieces_226;
#line 461 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__Spec_227;
#line 465 "prog_io_type_defn.m"
                              MR_Box parse_tree__prog_io_type_defn__conv8_V_167_167;
#line 469 "prog_io_type_defn.m"
                              MR_Box parse_tree__prog_io_type_defn__conv9_V_177_177;

#line 461 "prog_io_type_defn.m"
                              {
#line 461 "prog_io_type_defn.m"
                                mercury__varset__coerce_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_282_282, parse_tree__prog_io_type_defn__TypeCtorInfo_283_283, parse_tree__prog_io_type_defn__VarSet_2, &parse_tree__prog_io_type_defn__GenericVarSet_225);
                              }
#line 462 "prog_io_type_defn.m"
                              {
#line 462 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__NotExistQArgTypesStr_53 = parse_tree__mercury_to_mercury__mercury_vars_to_string_3_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_283_283, parse_tree__prog_io_type_defn__GenericVarSet_225, (MR_Integer) 0, parse_tree__prog_io_type_defn__NotExistQArgTypes_50);
                              }
#line 11138 "parse_tree.prog_io_type_defn.c"
                              parse_tree__prog_io_type_defn__TypeInfo_284_284 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 11140 "parse_tree.prog_io_type_defn.c"
                              parse_tree__prog_io_type_defn__TypeCtorInfo_285_285 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 465 "prog_io_type_defn.m"
                              {
#line 465 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__conv8_V_167_167 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_284_284, parse_tree__prog_io_type_defn__TypeCtorInfo_285_285, parse_tree__prog_io_type_defn__NotExistQArgTypes_50, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
                              }
#line 465 "prog_io_type_defn.m"
                              parse_tree__prog_io_type_defn__V_167_167 = ((MR_String) parse_tree__prog_io_type_defn__conv8_V_167_167);
#line 466 "prog_io_type_defn.m"
                              {
#line 466 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_166_166 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_166_166, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 466 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_166_166, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_167_167));
#line 466 "prog_io_type_defn.m"
                              }
#line 467 "prog_io_type_defn.m"
                              {
#line 467 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_171_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_171_171, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 467 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_171_171, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__NotExistQArgTypesStr_53));
#line 467 "prog_io_type_defn.m"
                              }
#line 469 "prog_io_type_defn.m"
                              {
#line 469 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__conv9_V_177_177 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_284_284, parse_tree__prog_io_type_defn__TypeCtorInfo_285_285, parse_tree__prog_io_type_defn__NotExistQArgTypes_50, ((MR_Box) ((MR_String) "which was")), ((MR_Box) ((MR_String) "which were")));
                              }
#line 469 "prog_io_type_defn.m"
                              parse_tree__prog_io_type_defn__V_177_177 = ((MR_String) parse_tree__prog_io_type_defn__conv9_V_177_177);
#line 470 "prog_io_type_defn.m"
                              {
#line 470 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_176_176 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_176_176, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 470 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_176_176, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_177_177));
#line 470 "prog_io_type_defn.m"
                              }
#line 468 "prog_io_type_defn.m"
                              {
#line 468 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_175_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_175_175, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_176_176));
#line 468 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_175_175, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[45])));
#line 468 "prog_io_type_defn.m"
                              }
#line 467 "prog_io_type_defn.m"
                              {
#line 467 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_172_172, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[131])));
#line 467 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_172_172, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_175_175));
#line 467 "prog_io_type_defn.m"
                              }
#line 466 "prog_io_type_defn.m"
                              {
#line 466 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_170_170, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_171_171));
#line 466 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_170_170, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_172_172));
#line 466 "prog_io_type_defn.m"
                              }
#line 464 "prog_io_type_defn.m"
                              {
#line 464 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 464 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_165_165, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_166_166));
#line 464 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_165_165, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_170_170));
#line 464 "prog_io_type_defn.m"
                              }
#line 464 "prog_io_type_defn.m"
                              {
#line 464 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__Pieces_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 464 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_226, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[129])));
#line 464 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_226, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_165_165));
#line 464 "prog_io_type_defn.m"
                              }
#line 475 "prog_io_type_defn.m"
                              {
#line 475 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_205_205 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_282_282, parse_tree__prog_io_type_defn__BodyTerm_3);
                              }
#line 475 "prog_io_type_defn.m"
                              {
#line 475 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_207_207 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 475 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_207_207, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_226));
#line 475 "prog_io_type_defn.m"
                              }
#line 475 "prog_io_type_defn.m"
                              {
#line 475 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_206_206, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_207_207));
#line 475 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_206_206, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 475 "prog_io_type_defn.m"
                              }
#line 475 "prog_io_type_defn.m"
                              {
#line 475 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_204_204 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 475 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_204_204, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_205_205));
#line 475 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_204_204, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_206_206));
#line 475 "prog_io_type_defn.m"
                              }
#line 474 "prog_io_type_defn.m"
                              {
#line 474 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 474 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_203_203, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_204_204));
#line 474 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_203_203, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 474 "prog_io_type_defn.m"
                              }
#line 474 "prog_io_type_defn.m"
                              {
#line 474 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__Spec_227 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 474 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_227, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 474 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_227, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 474 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_227, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_203_203));
#line 474 "prog_io_type_defn.m"
                              }
#line 476 "prog_io_type_defn.m"
                              {
#line 476 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 476 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_227));
#line 476 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5));
#line 476 "prog_io_type_defn.m"
                              }
#line 461 "prog_io_type_defn.m"
                            }
#line 459 "prog_io_type_defn.m"
                          }
#line 459 "prog_io_type_defn.m"
                        else
#line 476 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5;
#line 477 "prog_io_type_defn.m"
                      }
#line 448 "prog_io_type_defn.m"
                  }
#line 421 "prog_io_type_defn.m"
              }
#line 480 "prog_io_type_defn.m"
            /* direct tailcall eliminated */
#line 480 "prog_io_type_defn.m"
            {
#line 480 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__HeadVar__4__tmp_copy_4 = parse_tree__prog_io_type_defn__Ctors_17;
#line 480 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0__tmp_copy_5 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86;

#line 480 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 480 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__HeadVar__4_4 = parse_tree__prog_io_type_defn__HeadVar__4__tmp_copy_4;
#line 480 "prog_io_type_defn.m"
            }
#line 480 "prog_io_type_defn.m"
            continue;
#line 371 "prog_io_type_defn.m"
          }
#line 370 "prog_io_type_defn.m"
      }
#line 370 "prog_io_type_defn.m"
      break;
#line 370 "prog_io_type_defn.m"
    }
#line 367 "prog_io_type_defn.m"
}

#line 341 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__convert_constructor_arg_list_2_5_f_0(
#line 341 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_7,
#line 341 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_8,
#line 341 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeFieldName_9,
#line 341 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TypeTerm_10,
#line 341 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Terms_11)
#line 341 "prog_io_type_defn.m"
{
#line 345 "prog_io_type_defn.m"
  {
#line 345 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 345 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeArgs_12;
#line 345 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeType_14;

#line 347 "prog_io_type_defn.m"
    {
#line 347 "prog_io_type_defn.m"
      parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_type_defn__TypeTerm_10, parse_tree__prog_io_type_defn__VarSet_8, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[117]), &parse_tree__prog_io_type_defn__MaybeType_14);
    }
#line 362 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeType_14)) == (MR_mktag((MR_Integer) 0))))
#line 364 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__MaybeArgs_12 = (MR_Word) parse_tree__prog_io_type_defn__MaybeType_14;
#line 362 "prog_io_type_defn.m"
    else
#line 349 "prog_io_type_defn.m"
      {
#line 349 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeType_14, (MR_Integer) 0)));
#line 349 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Context_16;
#line 349 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Arg_17;
#line 349 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailArgs_18;

#line 350 "prog_io_type_defn.m"
        {
#line 350 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Context_16 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__TypeTerm_10);
        }
#line 352 "prog_io_type_defn.m"
        {
#line 352 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Arg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 352 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_17, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeFieldName_9));
#line 352 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_17, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Type_15));
#line 352 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_17, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 352 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_17, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_16));
#line 352 "prog_io_type_defn.m"
        }
#line 306 "prog_io_type_defn.m"
        if ((parse_tree__prog_io_type_defn__Terms_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 306 "prog_io_type_defn.m"
          {
#line 306 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailArgs_18 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[12]);
#line 306 "prog_io_type_defn.m"
          }
#line 306 "prog_io_type_defn.m"
        else
#line 308 "prog_io_type_defn.m"
          {
#line 308 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Term_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Terms_11, (MR_Integer) 0)));
#line 308 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Terms_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Terms_11, (MR_Integer) 1)));
#line 334 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__NameTerm_36;
#line 334 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__TypeTerm_37;
#line 309 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_49_49;
#line 309 "prog_io_type_defn.m"
            MR_String parse_tree__prog_io_type_defn__V_50_50;
#line 309 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_51_51;
#line 309 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 309 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_53_53;
#line 309 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_38_38;

#line 309 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_33)) == (MR_mktag((MR_Integer) 0)));
#line 309 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 309 "prog_io_type_defn.m"
              {
#line 309 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_33, (MR_Integer) 0)));
#line 309 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_33, (MR_Integer) 1)));
#line 309 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_33, (MR_Integer) 2)));
#line 309 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_49_49)) == (MR_mktag((MR_Integer) 0)));
#line 309 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 309 "prog_io_type_defn.m"
                  {
#line 309 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_49_49, (MR_Integer) 0)));
#line 309 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_50_50, (MR_String) "::") == 0);
#line 309 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 309 "prog_io_type_defn.m"
                      {
#line 309 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_51_51)) == (MR_mktag((MR_Integer) 1)));
#line 309 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 309 "prog_io_type_defn.m"
                          {
#line 309 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__NameTerm_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_51_51, (MR_Integer) 0)));
#line 309 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_51_51, (MR_Integer) 1)));
#line 309 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 309 "prog_io_type_defn.m"
                            if (parse_tree__prog_io_type_defn__succeeded)
#line 309 "prog_io_type_defn.m"
                              {
#line 309 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__TypeTerm_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, (MR_Integer) 0)));
#line 309 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, (MR_Integer) 1)));
#line 309 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 309 "prog_io_type_defn.m"
                              }
#line 309 "prog_io_type_defn.m"
                          }
#line 309 "prog_io_type_defn.m"
                      }
#line 309 "prog_io_type_defn.m"
                  }
#line 309 "prog_io_type_defn.m"
              }
#line 334 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 310 "prog_io_type_defn.m"
              {
#line 310 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_52_75 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 310 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_40;

#line 311 "prog_io_type_defn.m"
                {
#line 311 "prog_io_type_defn.m"
                  parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_52_75, parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__NameTerm_36, parse_tree__prog_io_type_defn__VarSet_8, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[126]), &parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_40);
                }
#line 316 "prog_io_type_defn.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_40)) == (MR_mktag((MR_Integer) 0))))
#line 314 "prog_io_type_defn.m"
                  {
#line 314 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Specs_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_40, (MR_Integer) 0)));

#line 315 "prog_io_type_defn.m"
                    {
#line 315 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MaybeTailArgs_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 315 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeTailArgs_18, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_41));
#line 315 "prog_io_type_defn.m"
                    }
#line 314 "prog_io_type_defn.m"
                  }
#line 316 "prog_io_type_defn.m"
                else
#line 317 "prog_io_type_defn.m"
                  {
#line 317 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__SymName_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_40, (MR_Integer) 0)));
#line 317 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__SymNameArgs_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_40, (MR_Integer) 1)));

#line 326 "prog_io_type_defn.m"
                    if ((parse_tree__prog_io_type_defn__SymNameArgs_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 327 "prog_io_type_defn.m"
                      {
#line 327 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__MaybeFieldName_48;

#line 328 "prog_io_type_defn.m"
                        {
#line 328 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__MaybeFieldName_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 328 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeFieldName_48, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__SymName_42));
#line 328 "prog_io_type_defn.m"
                        }
#line 329 "prog_io_type_defn.m"
                        {
#line 329 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__MaybeTailArgs_18 = parse_tree__prog_io_type_defn__convert_constructor_arg_list_2_5_f_0(parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, parse_tree__prog_io_type_defn__MaybeFieldName_48, parse_tree__prog_io_type_defn__TypeTerm_37, parse_tree__prog_io_type_defn__Terms_34);
                        }
#line 327 "prog_io_type_defn.m"
                      }
#line 326 "prog_io_type_defn.m"
                    else
#line 319 "prog_io_type_defn.m"
                      {
#line 319 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__Spec_47;
#line 319 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_64_64;
#line 319 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_65_65;
#line 319 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_66_66;
#line 319 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_71_71;

#line 324 "prog_io_type_defn.m"
                        {
#line 324 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_66_66 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_52_75, parse_tree__prog_io_type_defn__Term_33);
                        }
#line 324 "prog_io_type_defn.m"
                        {
#line 324 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 324 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_66_66));
#line 324 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[127])));
#line 324 "prog_io_type_defn.m"
                        }
#line 323 "prog_io_type_defn.m"
                        {
#line 323 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_65_65));
#line 323 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 323 "prog_io_type_defn.m"
                        }
#line 323 "prog_io_type_defn.m"
                        {
#line 323 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__Spec_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 323 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 323 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 323 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_47, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_64_64));
#line 323 "prog_io_type_defn.m"
                        }
#line 325 "prog_io_type_defn.m"
                        {
#line 325 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_71_71, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_47));
#line 325 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 325 "prog_io_type_defn.m"
                        }
#line 325 "prog_io_type_defn.m"
                        {
#line 325 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__MaybeTailArgs_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 325 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeTailArgs_18, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_71_71));
#line 325 "prog_io_type_defn.m"
                        }
#line 319 "prog_io_type_defn.m"
                      }
#line 317 "prog_io_type_defn.m"
                  }
#line 310 "prog_io_type_defn.m"
              }
#line 334 "prog_io_type_defn.m"
            else
#line 335 "prog_io_type_defn.m"
              {
#line 337 "prog_io_type_defn.m"
                {
#line 337 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeTailArgs_18 = parse_tree__prog_io_type_defn__convert_constructor_arg_list_2_5_f_0(parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_type_defn__Term_33, parse_tree__prog_io_type_defn__Terms_34);
                }
#line 335 "prog_io_type_defn.m"
              }
#line 308 "prog_io_type_defn.m"
          }
#line 358 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeTailArgs_18)) == (MR_mktag((MR_Integer) 0))))
#line 357 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeArgs_12 = parse_tree__prog_io_type_defn__MaybeTailArgs_18;
#line 358 "prog_io_type_defn.m"
        else
#line 359 "prog_io_type_defn.m"
          {
#line 359 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailArgs_18, (MR_Integer) 0)));
#line 359 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 360 "prog_io_type_defn.m"
            {
#line 360 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 360 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Arg_17));
#line 360 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Args_20));
#line 360 "prog_io_type_defn.m"
            }
#line 360 "prog_io_type_defn.m"
            {
#line 360 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeArgs_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 360 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeArgs_12, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 360 "prog_io_type_defn.m"
            }
#line 359 "prog_io_type_defn.m"
          }
#line 349 "prog_io_type_defn.m"
      }
#line 345 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeArgs_12;
#line 345 "prog_io_type_defn.m"
  }
#line 341 "prog_io_type_defn.m"
}

#line 303 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__convert_constructor_arg_list_3_f_0(
#line 303 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_1,
#line 303 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_2,
#line 303 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3)
#line 303 "prog_io_type_defn.m"
{
#line 306 "prog_io_type_defn.m"
  {
#line 306 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 306 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_4;

#line 306 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 306 "prog_io_type_defn.m"
      {
#line 306 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[12]);
#line 306 "prog_io_type_defn.m"
      }
#line 306 "prog_io_type_defn.m"
    else
#line 308 "prog_io_type_defn.m"
      {
#line 308 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__3_3, (MR_Integer) 0)));
#line 308 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Terms_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__3_3, (MR_Integer) 1)));
#line 334 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__NameTerm_13;
#line 334 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeTerm_14;
#line 309 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_26_26;
#line 309 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_27_27;
#line 309 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_28_28;
#line 309 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_29_29;
#line 309 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_30_30;
#line 309 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_15_15;

#line 309 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_10)) == (MR_mktag((MR_Integer) 0)));
#line 309 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 309 "prog_io_type_defn.m"
          {
#line 309 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 0)));
#line 309 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 1)));
#line 309 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 2)));
#line 309 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_26_26)) == (MR_mktag((MR_Integer) 0)));
#line 309 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 309 "prog_io_type_defn.m"
              {
#line 309 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_26_26, (MR_Integer) 0)));
#line 309 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_27_27, (MR_String) "::") == 0);
#line 309 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 309 "prog_io_type_defn.m"
                  {
#line 309 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 309 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 309 "prog_io_type_defn.m"
                      {
#line 309 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__NameTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_28_28, (MR_Integer) 0)));
#line 309 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_28_28, (MR_Integer) 1)));
#line 309 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 309 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 309 "prog_io_type_defn.m"
                          {
#line 309 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TypeTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_29_29, (MR_Integer) 0)));
#line 309 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_29_29, (MR_Integer) 1)));
#line 309 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 309 "prog_io_type_defn.m"
                          }
#line 309 "prog_io_type_defn.m"
                      }
#line 309 "prog_io_type_defn.m"
                  }
#line 309 "prog_io_type_defn.m"
              }
#line 309 "prog_io_type_defn.m"
          }
#line 334 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 310 "prog_io_type_defn.m"
          {
#line 310 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_52_52 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 310 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_17;

#line 311 "prog_io_type_defn.m"
            {
#line 311 "prog_io_type_defn.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_52_52, parse_tree__prog_io_type_defn__ModuleName_1, parse_tree__prog_io_type_defn__NameTerm_13, parse_tree__prog_io_type_defn__VarSet_2, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[126]), &parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_17);
            }
#line 316 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_17)) == (MR_mktag((MR_Integer) 0))))
#line 314 "prog_io_type_defn.m"
              {
#line 314 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Specs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_17, (MR_Integer) 0)));

#line 315 "prog_io_type_defn.m"
                {
#line 315 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 315 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_18));
#line 315 "prog_io_type_defn.m"
                }
#line 314 "prog_io_type_defn.m"
              }
#line 316 "prog_io_type_defn.m"
            else
#line 317 "prog_io_type_defn.m"
              {
#line 317 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__SymName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_17, (MR_Integer) 0)));
#line 317 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__SymNameArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_17, (MR_Integer) 1)));

#line 326 "prog_io_type_defn.m"
                if ((parse_tree__prog_io_type_defn__SymNameArgs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 327 "prog_io_type_defn.m"
                  {
#line 327 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__MaybeFieldName_25;

#line 328 "prog_io_type_defn.m"
                    {
#line 328 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MaybeFieldName_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 328 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeFieldName_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__SymName_19));
#line 328 "prog_io_type_defn.m"
                    }
#line 329 "prog_io_type_defn.m"
                    {
#line 329 "prog_io_type_defn.m"
                      return parse_tree__prog_io_type_defn__HeadVar__4_4 = parse_tree__prog_io_type_defn__convert_constructor_arg_list_2_5_f_0(parse_tree__prog_io_type_defn__ModuleName_1, parse_tree__prog_io_type_defn__VarSet_2, parse_tree__prog_io_type_defn__MaybeFieldName_25, parse_tree__prog_io_type_defn__TypeTerm_14, parse_tree__prog_io_type_defn__Terms_11);
                    }
#line 327 "prog_io_type_defn.m"
                  }
#line 326 "prog_io_type_defn.m"
                else
#line 319 "prog_io_type_defn.m"
                  {
#line 319 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Spec_24;
#line 319 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 319 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 319 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_43_43;
#line 319 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_48_48;

#line 324 "prog_io_type_defn.m"
                    {
#line 324 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_43_43 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_52_52, parse_tree__prog_io_type_defn__Term_10);
                    }
#line 324 "prog_io_type_defn.m"
                    {
#line 324 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 324 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_43_43));
#line 324 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[127])));
#line 324 "prog_io_type_defn.m"
                    }
#line 323 "prog_io_type_defn.m"
                    {
#line 323 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 323 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 323 "prog_io_type_defn.m"
                    }
#line 323 "prog_io_type_defn.m"
                    {
#line 323 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 323 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 323 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 323 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_24, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 323 "prog_io_type_defn.m"
                    }
#line 325 "prog_io_type_defn.m"
                    {
#line 325 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_24));
#line 325 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 325 "prog_io_type_defn.m"
                    }
#line 325 "prog_io_type_defn.m"
                    {
#line 325 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 325 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_48_48));
#line 325 "prog_io_type_defn.m"
                    }
#line 319 "prog_io_type_defn.m"
                  }
#line 317 "prog_io_type_defn.m"
              }
#line 310 "prog_io_type_defn.m"
          }
#line 334 "prog_io_type_defn.m"
        else
#line 335 "prog_io_type_defn.m"
          {
#line 337 "prog_io_type_defn.m"
            {
#line 337 "prog_io_type_defn.m"
              return parse_tree__prog_io_type_defn__HeadVar__4_4 = parse_tree__prog_io_type_defn__convert_constructor_arg_list_2_5_f_0(parse_tree__prog_io_type_defn__ModuleName_1, parse_tree__prog_io_type_defn__VarSet_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_type_defn__Term_10, parse_tree__prog_io_type_defn__Terms_11);
            }
#line 335 "prog_io_type_defn.m"
          }
#line 308 "prog_io_type_defn.m"
      }
#line 306 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_4;
#line 306 "prog_io_type_defn.m"
  }
#line 303 "prog_io_type_defn.m"
}

#line 244 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_constructor_2_4_f_0(
#line 244 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_6,
#line 244 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_7,
#line 244 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ExistQVars_8,
#line 244 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_9)
#line 244 "prog_io_type_defn.m"
{
#line 247 "prog_io_type_defn.m"
  {
#line 247 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 247 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeConstructor_10;
#line 247 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11;
#line 247 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeConstraints_12;
#line 299 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__ExistentialConstraints_46;
#line 299 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_PredTypeTerm_17_51;
#line 294 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_48_48;
#line 294 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_49_49;
#line 294 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_50_50;
#line 294 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 294 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_53_53;
#line 294 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 294 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 294 "prog_io_type_defn.m"
      {
#line 294 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 294 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 294 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 294 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_48_48)) == (MR_mktag((MR_Integer) 0)));
#line 294 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 294 "prog_io_type_defn.m"
          {
#line 294 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_48_48, (MR_Integer) 0)));
#line 294 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_49_49, (MR_String) "=>") == 0);
#line 294 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 294 "prog_io_type_defn.m"
              {
#line 294 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_50_50)) == (MR_mktag((MR_Integer) 1)));
#line 294 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 294 "prog_io_type_defn.m"
                  {
#line 294 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__STATE_VARIABLE_PredTypeTerm_17_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_50_50, (MR_Integer) 0)));
#line 294 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_50_50, (MR_Integer) 1)));
#line 295 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 295 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 295 "prog_io_type_defn.m"
                      {
#line 295 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__ExistentialConstraints_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, (MR_Integer) 0)));
#line 295 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, (MR_Integer) 1)));
#line 295 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 295 "prog_io_type_defn.m"
                      }
#line 294 "prog_io_type_defn.m"
                  }
#line 294 "prog_io_type_defn.m"
              }
#line 294 "prog_io_type_defn.m"
          }
#line 294 "prog_io_type_defn.m"
      }
#line 299 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 297 "prog_io_type_defn.m"
      {
#line 297 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11 = parse_tree__prog_io_type_defn__STATE_VARIABLE_PredTypeTerm_17_51;
#line 297 "prog_io_type_defn.m"
        {
#line 297 "prog_io_type_defn.m"
          parse_tree__prog_io_typeclass__parse_class_constraints_4_p_0(parse_tree__prog_io_type_defn__ModuleName_6, parse_tree__prog_io_type_defn__VarSet_7, parse_tree__prog_io_type_defn__ExistentialConstraints_46, &parse_tree__prog_io_type_defn__MaybeConstraints_12);
        }
#line 297 "prog_io_type_defn.m"
      }
#line 299 "prog_io_type_defn.m"
    else
#line 300 "prog_io_type_defn.m"
      {
#line 300 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__MaybeConstraints_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[11]);
#line 300 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11 = parse_tree__prog_io_type_defn__Term_9;
#line 300 "prog_io_type_defn.m"
      }
#line 253 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeConstraints_12)) == (MR_mktag((MR_Integer) 0))))
#line 252 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__MaybeConstructor_10 = (MR_Word) parse_tree__prog_io_type_defn__MaybeConstraints_12;
#line 253 "prog_io_type_defn.m"
    else
#line 254 "prog_io_type_defn.m"
      {
#line 254 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_39_39;
#line 254 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeConstraints_12, (MR_Integer) 0)));
#line 254 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MainTerm_17;
#line 254 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19;
#line 263 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__InsideBracesTerm_15;
#line 259 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_25_25;
#line 259 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_26_26;
#line 259 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_27_27;
#line 259 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_28_28;
#line 259 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn___Context_16;

#line 259 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11)) == (MR_mktag((MR_Integer) 0)));
#line 259 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 259 "prog_io_type_defn.m"
          {
#line 259 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11, (MR_Integer) 0)));
#line 259 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11, (MR_Integer) 1)));
#line 259 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn___Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11, (MR_Integer) 2)));
#line 259 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_25_25)) == (MR_mktag((MR_Integer) 0)));
#line 259 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 259 "prog_io_type_defn.m"
              {
#line 259 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_25_25, (MR_Integer) 0)));
#line 259 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_26_26, (MR_String) "{}") == 0);
#line 259 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 259 "prog_io_type_defn.m"
                  {
#line 259 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 259 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 259 "prog_io_type_defn.m"
                      {
#line 259 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__InsideBracesTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_27_27, (MR_Integer) 0)));
#line 259 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_27_27, (MR_Integer) 1)));
#line 260 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 259 "prog_io_type_defn.m"
                      }
#line 259 "prog_io_type_defn.m"
                  }
#line 259 "prog_io_type_defn.m"
              }
#line 259 "prog_io_type_defn.m"
          }
#line 263 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 262 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MainTerm_17 = parse_tree__prog_io_type_defn__InsideBracesTerm_15;
#line 263 "prog_io_type_defn.m"
        else
#line 264 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MainTerm_17 = parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11;
#line 12161 "parse_tree.prog_io_type_defn.c"
        parse_tree__prog_io_type_defn__TypeCtorInfo_39_39 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 267 "prog_io_type_defn.m"
        {
#line 267 "prog_io_type_defn.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_39_39, parse_tree__prog_io_type_defn__ModuleName_6, parse_tree__prog_io_type_defn__MainTerm_17, parse_tree__prog_io_type_defn__VarSet_7, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[124]), &parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19);
        }
#line 272 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19)) == (MR_mktag((MR_Integer) 0))))
#line 270 "prog_io_type_defn.m"
          {
#line 270 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Specs_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19, (MR_Integer) 0)));

#line 271 "prog_io_type_defn.m"
            {
#line 271 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeConstructor_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 271 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeConstructor_10, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_33));
#line 271 "prog_io_type_defn.m"
            }
#line 270 "prog_io_type_defn.m"
          }
#line 272 "prog_io_type_defn.m"
        else
#line 273 "prog_io_type_defn.m"
          {
#line 273 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Functor_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19, (MR_Integer) 0)));
#line 273 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ArgTerms_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19, (MR_Integer) 1)));
#line 273 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__MaybeConstructorArgs_22;

#line 274 "prog_io_type_defn.m"
            {
#line 274 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeConstructorArgs_22 = parse_tree__prog_io_type_defn__convert_constructor_arg_list_3_f_0(parse_tree__prog_io_type_defn__ModuleName_6, parse_tree__prog_io_type_defn__VarSet_7, parse_tree__prog_io_type_defn__ArgTerms_21);
            }
#line 279 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeConstructorArgs_22)) == (MR_mktag((MR_Integer) 0))))
#line 278 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeConstructor_10 = (MR_Word) parse_tree__prog_io_type_defn__MaybeConstructorArgs_22;
#line 279 "prog_io_type_defn.m"
            else
#line 280 "prog_io_type_defn.m"
              {
#line 280 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ConstructorArgs_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeConstructorArgs_22, (MR_Integer) 0)));
#line 280 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Ctor_24;
#line 280 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_32_32;

#line 281 "prog_io_type_defn.m"
                {
#line 281 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_32_32 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_39_39, parse_tree__prog_io_type_defn__MainTerm_17);
                }
#line 281 "prog_io_type_defn.m"
                {
#line 281 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Ctor_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 281 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_24, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ExistQVars_8));
#line 281 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_24, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Constraints_14));
#line 281 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_24, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__Functor_20));
#line 281 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_24, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__ConstructorArgs_23));
#line 281 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_24, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__V_32_32));
#line 281 "prog_io_type_defn.m"
                }
#line 283 "prog_io_type_defn.m"
                {
#line 283 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeConstructor_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 283 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeConstructor_10, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Ctor_24));
#line 283 "prog_io_type_defn.m"
                }
#line 280 "prog_io_type_defn.m"
              }
#line 273 "prog_io_type_defn.m"
          }
#line 254 "prog_io_type_defn.m"
      }
#line 247 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeConstructor_10;
#line 247 "prog_io_type_defn.m"
  }
#line 244 "prog_io_type_defn.m"
}

#line 227 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_constructors_2_3_f_0_1(
#line 227 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 227 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 227 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2)
#line 227 "prog_io_type_defn.m"
{
#line 227 "prog_io_type_defn.m"
  {
#line 227 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 227 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv0_HeadVar__2_47;

#line 227 "prog_io_type_defn.m"
    {
#line 227 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_constructor__227__1_2_p_0(((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1), &parse_tree__prog_io_type_defn__conv0_HeadVar__2_47);
    }
#line 227 "prog_io_type_defn.m"
    *parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv0_HeadVar__2_47));
#line 227 "prog_io_type_defn.m"
  }
#line 227 "prog_io_type_defn.m"
}

#line 203 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_constructors_2_3_f_0(
#line 203 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 203 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_2,
#line 203 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3)
#line 203 "prog_io_type_defn.m"
{
#line 206 "prog_io_type_defn.m"
  {
#line 206 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 206 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_4;

#line 206 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 206 "prog_io_type_defn.m"
      {
#line 206 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[10]);
#line 206 "prog_io_type_defn.m"
      }
#line 206 "prog_io_type_defn.m"
    else
#line 207 "prog_io_type_defn.m"
      {
#line 207 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Head_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__3_3, (MR_Integer) 0)));
#line 207 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Tail_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__3_3, (MR_Integer) 1)));
#line 207 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeHeadConstructor_13;
#line 207 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailConstructors_14;
#line 238 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__VarsTerm_28;
#line 238 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__SubTerm_29;
#line 225 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_36_36;
#line 225 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_37_37;
#line 225 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_38_38;
#line 225 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_39_39;
#line 225 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 225 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_30_30;
#line 216 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadConstructor_15;
#line 216 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailConstructors_16;

#line 225 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Head_10)) == (MR_mktag((MR_Integer) 0)));
#line 225 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 225 "prog_io_type_defn.m"
          {
#line 225 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Head_10, (MR_Integer) 0)));
#line 225 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Head_10, (MR_Integer) 1)));
#line 225 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Head_10, (MR_Integer) 2)));
#line 225 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_36_36)) == (MR_mktag((MR_Integer) 0)));
#line 225 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 225 "prog_io_type_defn.m"
              {
#line 225 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_36_36, (MR_Integer) 0)));
#line 225 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_37_37, (MR_String) "some") == 0);
#line 225 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 225 "prog_io_type_defn.m"
                  {
#line 225 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 225 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 225 "prog_io_type_defn.m"
                      {
#line 225 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__VarsTerm_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_38_38, (MR_Integer) 0)));
#line 225 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_38_38, (MR_Integer) 1)));
#line 225 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 225 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 225 "prog_io_type_defn.m"
                          {
#line 225 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__SubTerm_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_39_39, (MR_Integer) 0)));
#line 225 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_39_39, (MR_Integer) 1)));
#line 225 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 225 "prog_io_type_defn.m"
                          }
#line 225 "prog_io_type_defn.m"
                      }
#line 225 "prog_io_type_defn.m"
                  }
#line 225 "prog_io_type_defn.m"
              }
#line 225 "prog_io_type_defn.m"
          }
#line 238 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 230 "prog_io_type_defn.m"
          {
#line 230 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ExistQVars_31;

#line 226 "prog_io_type_defn.m"
            {
#line 226 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_util__parse_list_of_vars_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__VarsTerm_28, &parse_tree__prog_io_type_defn__ExistQVars_31);
            }
#line 230 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 227 "prog_io_type_defn.m"
              {
#line 227 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ExistQTVars_32;

#line 227 "prog_io_type_defn.m"
                {
#line 227 "prog_io_type_defn.m"
                  mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_4[2], parse_tree__prog_io_type_defn__ExistQVars_31, &parse_tree__prog_io_type_defn__ExistQTVars_32);
                }
#line 228 "prog_io_type_defn.m"
                {
#line 228 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeHeadConstructor_13 = parse_tree__prog_io_type_defn__parse_constructor_2_4_f_0(parse_tree__prog_io_type_defn__HeadVar__1_1, parse_tree__prog_io_type_defn__VarSet_2, parse_tree__prog_io_type_defn__ExistQTVars_32, parse_tree__prog_io_type_defn__SubTerm_29);
                }
#line 227 "prog_io_type_defn.m"
              }
#line 230 "prog_io_type_defn.m"
            else
#line 231 "prog_io_type_defn.m"
              {
#line 231 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_52_71 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 231 "prog_io_type_defn.m"
                MR_String parse_tree__prog_io_type_defn__TermStr_33;
#line 231 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Pieces_34;
#line 231 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_35;
#line 231 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_44_44;
#line 231 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_45_45;
#line 231 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_54_54;
#line 231 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_55_55;
#line 231 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_56_56;
#line 231 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_57_57;
#line 231 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_58_58;
#line 231 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_61_61;

#line 231 "prog_io_type_defn.m"
                {
#line 231 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__TermStr_33 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_52_71, parse_tree__prog_io_type_defn__VarSet_2, parse_tree__prog_io_type_defn__Head_10);
                }
#line 233 "prog_io_type_defn.m"
                {
#line 233 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 233 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_45_45, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__TermStr_33));
#line 233 "prog_io_type_defn.m"
                }
#line 232 "prog_io_type_defn.m"
                {
#line 232 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_45_45));
#line 232 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[21])));
#line 232 "prog_io_type_defn.m"
                }
#line 232 "prog_io_type_defn.m"
                {
#line 232 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Pieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[122])));
#line 232 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_34, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_44_44));
#line 232 "prog_io_type_defn.m"
                }
#line 235 "prog_io_type_defn.m"
                {
#line 235 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_56_56 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_52_71, parse_tree__prog_io_type_defn__VarsTerm_28);
                }
#line 235 "prog_io_type_defn.m"
                {
#line 235 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 235 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_58_58, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_34));
#line 235 "prog_io_type_defn.m"
                }
#line 235 "prog_io_type_defn.m"
                {
#line 235 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 235 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_58_58));
#line 235 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 235 "prog_io_type_defn.m"
                }
#line 235 "prog_io_type_defn.m"
                {
#line 235 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 235 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_56_56));
#line 235 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_55_55, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_57_57));
#line 235 "prog_io_type_defn.m"
                }
#line 234 "prog_io_type_defn.m"
                {
#line 234 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 234 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_55_55));
#line 234 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 234 "prog_io_type_defn.m"
                }
#line 234 "prog_io_type_defn.m"
                {
#line 234 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 234 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 234 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 234 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_35, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_54_54));
#line 234 "prog_io_type_defn.m"
                }
#line 236 "prog_io_type_defn.m"
                {
#line 236 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_35));
#line 236 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 236 "prog_io_type_defn.m"
                }
#line 236 "prog_io_type_defn.m"
                {
#line 236 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeHeadConstructor_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 236 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeHeadConstructor_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_61_61));
#line 236 "prog_io_type_defn.m"
                }
#line 231 "prog_io_type_defn.m"
              }
#line 230 "prog_io_type_defn.m"
          }
#line 238 "prog_io_type_defn.m"
        else
#line 239 "prog_io_type_defn.m"
          {
#line 240 "prog_io_type_defn.m"
            {
#line 240 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeHeadConstructor_13 = parse_tree__prog_io_type_defn__parse_constructor_2_4_f_0(parse_tree__prog_io_type_defn__HeadVar__1_1, parse_tree__prog_io_type_defn__VarSet_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_type_defn__Head_10);
            }
#line 239 "prog_io_type_defn.m"
          }
#line 209 "prog_io_type_defn.m"
        {
#line 209 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeTailConstructors_14 = parse_tree__prog_io_type_defn__parse_constructors_2_3_f_0(parse_tree__prog_io_type_defn__HeadVar__1_1, parse_tree__prog_io_type_defn__VarSet_2, parse_tree__prog_io_type_defn__Tail_11);
        }
#line 211 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeHeadConstructor_13)) == (MR_mktag((MR_Integer) 1)));
#line 211 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 211 "prog_io_type_defn.m"
          {
#line 211 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__HeadConstructor_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeHeadConstructor_13, (MR_Integer) 0)));
#line 212 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeTailConstructors_14)) == (MR_mktag((MR_Integer) 1)));
#line 212 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 212 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__TailConstructors_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailConstructors_14, (MR_Integer) 0)));
#line 211 "prog_io_type_defn.m"
          }
#line 216 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 214 "prog_io_type_defn.m"
          {
#line 214 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Constructors_17;

#line 214 "prog_io_type_defn.m"
            {
#line 214 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Constructors_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Constructors_17, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__HeadConstructor_15));
#line 214 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Constructors_17, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__TailConstructors_16));
#line 214 "prog_io_type_defn.m"
            }
#line 215 "prog_io_type_defn.m"
            {
#line 215 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Constructors_17));
#line 215 "prog_io_type_defn.m"
            }
#line 214 "prog_io_type_defn.m"
          }
#line 216 "prog_io_type_defn.m"
        else
#line 218 "prog_io_type_defn.m"
          {
#line 218 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Specs_18;
#line 218 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 218 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_20_20;

#line 217 "prog_io_type_defn.m"
            {
#line 217 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_19_19 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, parse_tree__prog_io_type_defn__MaybeHeadConstructor_13);
            }
#line 217 "prog_io_type_defn.m"
            {
#line 217 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_20_20 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[3], parse_tree__prog_io_type_defn__MaybeTailConstructors_14);
            }
#line 217 "prog_io_type_defn.m"
            {
#line 217 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Specs_18 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_type_defn__V_19_19, parse_tree__prog_io_type_defn__V_20_20);
            }
#line 219 "prog_io_type_defn.m"
            {
#line 219 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 219 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_18));
#line 219 "prog_io_type_defn.m"
            }
#line 218 "prog_io_type_defn.m"
          }
#line 207 "prog_io_type_defn.m"
      }
#line 206 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_4;
#line 206 "prog_io_type_defn.m"
  }
#line 203 "prog_io_type_defn.m"
}

#line 175 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__du_type_rhs_ctors_and_where_terms_3_p_0(
#line 175 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_4,
#line 175 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__CtorsTerm_5,
#line 175 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeWhereTerm_6)
#line 175 "prog_io_type_defn.m"
{
#line 185 "prog_io_type_defn.m"
  {
#line 185 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_4)) == (MR_mktag((MR_Integer) 0)));
#line 185 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__CtorsTerm0_9;
#line 185 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__WhereTerm_10;
#line 180 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Args_7;
#line 180 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;
#line 180 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_12_12;
#line 180 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_13_13;
#line 180 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_14_14;
#line 180 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn___Context_8;

#line 180 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 180 "prog_io_type_defn.m"
      {
#line 180 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_4, (MR_Integer) 0)));
#line 180 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Args_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_4, (MR_Integer) 1)));
#line 180 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_4, (MR_Integer) 2)));
#line 180 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_11_11)) == (MR_mktag((MR_Integer) 0)));
#line 180 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 180 "prog_io_type_defn.m"
          {
#line 180 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_11_11, (MR_Integer) 0)));
#line 180 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_12_12, (MR_String) "where") == 0);
#line 180 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 180 "prog_io_type_defn.m"
              {
#line 181 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Args_7)) == (MR_mktag((MR_Integer) 1)));
#line 181 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 181 "prog_io_type_defn.m"
                  {
#line 181 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__CtorsTerm0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Args_7, (MR_Integer) 0)));
#line 181 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Args_7, (MR_Integer) 1)));
#line 181 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 181 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 181 "prog_io_type_defn.m"
                      {
#line 181 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__WhereTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_13_13, (MR_Integer) 0)));
#line 181 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_13_13, (MR_Integer) 1)));
#line 181 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 181 "prog_io_type_defn.m"
                      }
#line 181 "prog_io_type_defn.m"
                  }
#line 180 "prog_io_type_defn.m"
              }
#line 180 "prog_io_type_defn.m"
          }
#line 180 "prog_io_type_defn.m"
      }
#line 185 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 183 "prog_io_type_defn.m"
      {
#line 183 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__CtorsTerm_5 = parse_tree__prog_io_type_defn__CtorsTerm0_9;
#line 184 "prog_io_type_defn.m"
        {
#line 184 "prog_io_type_defn.m"
          MR_Word base;
#line 184 "prog_io_type_defn.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 184 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeWhereTerm_6 = base;
#line 184 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__WhereTerm_10));
#line 184 "prog_io_type_defn.m"
        }
#line 183 "prog_io_type_defn.m"
      }
#line 185 "prog_io_type_defn.m"
    else
#line 186 "prog_io_type_defn.m"
      {
#line 186 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__CtorsTerm_5 = parse_tree__prog_io_type_defn__Term_4;
#line 187 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeWhereTerm_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 186 "prog_io_type_defn.m"
      }
#line 185 "prog_io_type_defn.m"
  }
#line 175 "prog_io_type_defn.m"
}

#line 113 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_du_type_defn_9_p_0(
#line 113 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_10,
#line 113 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_11,
#line 113 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_12,
#line 113 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_13,
#line 113 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes0_14,
#line 113 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Condition_15,
#line 113 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_16,
#line 113 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_17,
#line 113 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_18)
#line 113 "prog_io_type_defn.m"
{
#line 12827 "parse_tree.prog_io_type_defn.c"
  {
#line 12829 "parse_tree.prog_io_type_defn.c"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Attributes0_14)) == (MR_mktag((MR_Integer) 1)));
#line 1322 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_87_87;
#line 1322 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_88_88;
#line 1322 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_86;
#line 1322 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_85_85;

#line 1322 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1322 "prog_io_type_defn.m"
      {
#line 1322 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Attributes0_14, (MR_Integer) 0)));
#line 1322 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Attributes0_14, (MR_Integer) 1)));
#line 1322 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_87_87, (MR_Integer) 0)));
#line 1322 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_87_87, (MR_Integer) 1)));
#line 1322 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_88_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1322 "prog_io_type_defn.m"
      }
#line 12856 "parse_tree.prog_io_type_defn.c"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 12858 "parse_tree.prog_io_type_defn.c"
      {
#line 12860 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__Spec_22;
#line 12862 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__V_61_61;
#line 12864 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__V_62_62;
#line 12866 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__V_63_63;
#line 12868 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__V_68_68;

#line 125 "prog_io_type_defn.m"
        {
#line 125 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_63_63 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadTerm_12);
        }
#line 125 "prog_io_type_defn.m"
        {
#line 125 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 125 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_63_63));
#line 125 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[121])));
#line 125 "prog_io_type_defn.m"
        }
#line 124 "prog_io_type_defn.m"
        {
#line 124 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 124 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_62_62));
#line 124 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 124 "prog_io_type_defn.m"
        }
#line 124 "prog_io_type_defn.m"
        {
#line 124 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 124 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 124 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 124 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_22, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_61_61));
#line 124 "prog_io_type_defn.m"
        }
#line 126 "prog_io_type_defn.m"
        {
#line 126 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 126 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_22));
#line 126 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 126 "prog_io_type_defn.m"
        }
#line 126 "prog_io_type_defn.m"
        {
#line 126 "prog_io_type_defn.m"
          MR_Word base;
#line 126 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 126 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeItem_18 = base;
#line 126 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_68_68));
#line 126 "prog_io_type_defn.m"
        }
#line 12930 "parse_tree.prog_io_type_defn.c"
      }
#line 12932 "parse_tree.prog_io_type_defn.c"
    else
#line 12934 "parse_tree.prog_io_type_defn.c"
      {
#line 12936 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_23;
#line 12938 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__CtorsTerm_24;
#line 12940 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__MaybeWhereTerm_25;
#line 12942 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__MaybeCtors_26;
#line 12944 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__MaybeWhere_27;
#line 12946 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__BodyTermList_94;
#line 168 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Name_28;
#line 168 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Params_29;
#line 168 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Ctors_30;
#line 168 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeUserEqComp_32;
#line 168 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgIs_33;
#line 142 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn___NoSolverTypeDetails_31;

#line 129 "prog_io_type_defn.m"
        {
#line 129 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(parse_tree__prog_io_type_defn__ModuleName_10, parse_tree__prog_io_type_defn__VarSet_11, parse_tree__prog_io_type_defn__HeadTerm_12, &parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_23);
        }
#line 131 "prog_io_type_defn.m"
        {
#line 131 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__du_type_rhs_ctors_and_where_terms_3_p_0(parse_tree__prog_io_type_defn__BodyTerm_13, &parse_tree__prog_io_type_defn__CtorsTerm_24, &parse_tree__prog_io_type_defn__MaybeWhereTerm_25);
        }
#line 198 "prog_io_type_defn.m"
        {
#line 198 "prog_io_type_defn.m"
          parse_tree__prog_io_util__disjunction_to_list_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__CtorsTerm_24, &parse_tree__prog_io_type_defn__BodyTermList_94);
        }
#line 199 "prog_io_type_defn.m"
        {
#line 199 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeCtors_26 = parse_tree__prog_io_type_defn__parse_constructors_2_3_f_0(parse_tree__prog_io_type_defn__ModuleName_10, parse_tree__prog_io_type_defn__VarSet_11, parse_tree__prog_io_type_defn__BodyTermList_94);
        }
#line 133 "prog_io_type_defn.m"
        {
#line 133 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeWhere_27 = parse_tree__prog_io_type_defn__parse_type_decl_where_term_4_f_0((MR_Integer) 0, parse_tree__prog_io_type_defn__ModuleName_10, parse_tree__prog_io_type_defn__VarSet_11, parse_tree__prog_io_type_defn__MaybeWhereTerm_25);
        }
#line 140 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_23)) == (MR_mktag((MR_Integer) 1)));
#line 140 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 140 "prog_io_type_defn.m"
          {
#line 140 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Name_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_23, (MR_Integer) 0)));
#line 140 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Params_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_23, (MR_Integer) 1)));
#line 141 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeCtors_26)) == (MR_mktag((MR_Integer) 1)));
#line 141 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 141 "prog_io_type_defn.m"
              {
#line 141 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__Ctors_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeCtors_26, (MR_Integer) 0)));
#line 142 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeWhere_27)) == (MR_mktag((MR_Integer) 1)));
#line 142 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 142 "prog_io_type_defn.m"
                  {
#line 142 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn___NoSolverTypeDetails_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_27, (MR_Integer) 0)));
#line 142 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeUserEqComp_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_27, (MR_Integer) 1)));
#line 142 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeDirectArgIs_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_27, (MR_Integer) 2)));
#line 142 "prog_io_type_defn.m"
                  }
#line 141 "prog_io_type_defn.m"
              }
#line 140 "prog_io_type_defn.m"
          }
#line 168 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 145 "prog_io_type_defn.m"
          {
#line 145 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__CtorsSpecs_34;
#line 145 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ErrorSpecs_36;

#line 145 "prog_io_type_defn.m"
            {
#line 145 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__process_du_ctors_6_p_0(parse_tree__prog_io_type_defn__Params_29, parse_tree__prog_io_type_defn__VarSet_11, parse_tree__prog_io_type_defn__BodyTerm_13, parse_tree__prog_io_type_defn__Ctors_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_type_defn__CtorsSpecs_34);
            }
#line 150 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__MaybeDirectArgIs_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 152 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__ErrorSpecs_36 = parse_tree__prog_io_type_defn__CtorsSpecs_34;
#line 150 "prog_io_type_defn.m"
            else
#line 147 "prog_io_type_defn.m"
              {
#line 147 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__DirectArgCtors_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeDirectArgIs_33, (MR_Integer) 0)));

#line 148 "prog_io_type_defn.m"
                {
#line 148 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__check_direct_arg_ctors_5_p_0(parse_tree__prog_io_type_defn__Ctors_30, parse_tree__prog_io_type_defn__DirectArgCtors_35, parse_tree__prog_io_type_defn__BodyTerm_13, parse_tree__prog_io_type_defn__CtorsSpecs_34, &parse_tree__prog_io_type_defn__ErrorSpecs_36);
                }
#line 147 "prog_io_type_defn.m"
              }
#line 164 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__ErrorSpecs_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 155 "prog_io_type_defn.m"
              {
#line 155 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeVarSet_37;
#line 155 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeDefn_38;
#line 155 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ItemTypeDefn_39;
#line 155 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Item_40;
#line 155 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeItem0_41;

#line 156 "prog_io_type_defn.m"
                {
#line 156 "prog_io_type_defn.m"
                  mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_11, &parse_tree__prog_io_type_defn__TypeVarSet_37);
                }
#line 157 "prog_io_type_defn.m"
                {
#line 157 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__TypeDefn_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 157 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__TypeDefn_38, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Ctors_30));
#line 157 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__TypeDefn_38, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeUserEqComp_32));
#line 157 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__TypeDefn_38, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeDirectArgIs_33));
#line 157 "prog_io_type_defn.m"
                }
#line 159 "prog_io_type_defn.m"
                {
#line 159 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__ItemTypeDefn_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 159 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_39, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeVarSet_37));
#line 159 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_39, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_28));
#line 159 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_39, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__Params_29));
#line 159 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_39, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn_38));
#line 159 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_39, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__Condition_15));
#line 159 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_39, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_16));
#line 159 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_39, 6) = ((MR_Box) (parse_tree__prog_io_type_defn__SeqNum_17));
#line 159 "prog_io_type_defn.m"
                }
#line 161 "prog_io_type_defn.m"
                {
#line 161 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Item_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 161 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__Item_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 161 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__Item_40, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__ItemTypeDefn_39));
#line 161 "prog_io_type_defn.m"
                }
#line 162 "prog_io_type_defn.m"
                {
#line 162 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeItem0_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 162 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItem0_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Item_40));
#line 162 "prog_io_type_defn.m"
                }
#line 163 "prog_io_type_defn.m"
                {
#line 163 "prog_io_type_defn.m"
                  parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_type_defn__MaybeItem0_41, parse_tree__prog_io_type_defn__Attributes0_14, parse_tree__prog_io_type_defn__MaybeItem_18);
#line 163 "prog_io_type_defn.m"
                  return;
                }
#line 155 "prog_io_type_defn.m"
              }
#line 164 "prog_io_type_defn.m"
            else
#line 166 "prog_io_type_defn.m"
              {
#line 166 "prog_io_type_defn.m"
                MR_Word base;
#line 166 "prog_io_type_defn.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 166 "prog_io_type_defn.m"
                *parse_tree__prog_io_type_defn__MaybeItem_18 = base;
#line 166 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ErrorSpecs_36));
#line 166 "prog_io_type_defn.m"
              }
#line 145 "prog_io_type_defn.m"
          }
#line 168 "prog_io_type_defn.m"
        else
#line 170 "prog_io_type_defn.m"
          {
#line 170 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 170 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Specs_44;
#line 170 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_47_47;
#line 170 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_48_48;
#line 170 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_49_49;
#line 170 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_50_50;

#line 169 "prog_io_type_defn.m"
            {
#line 169 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_47_47 = parse_tree__prog_io_util__get_any_errors2_1_f_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[2], parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_23);
            }
#line 170 "prog_io_type_defn.m"
            {
#line 170 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_49_49 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[3], parse_tree__prog_io_type_defn__MaybeCtors_26);
            }
#line 170 "prog_io_type_defn.m"
            {
#line 170 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_50_50 = parse_tree__prog_io_util__get_any_errors3_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[4], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[5], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[7], parse_tree__prog_io_type_defn__MaybeWhere_27);
            }
#line 169 "prog_io_type_defn.m"
            {
#line 169 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_48_48 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_74_74, parse_tree__prog_io_type_defn__V_49_49, parse_tree__prog_io_type_defn__V_50_50);
            }
#line 169 "prog_io_type_defn.m"
            {
#line 169 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Specs_44 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_74_74, parse_tree__prog_io_type_defn__V_47_47, parse_tree__prog_io_type_defn__V_48_48);
            }
#line 171 "prog_io_type_defn.m"
            {
#line 171 "prog_io_type_defn.m"
              MR_Word base;
#line 171 "prog_io_type_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 171 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeItem_18 = base;
#line 171 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_44));
#line 171 "prog_io_type_defn.m"
            }
#line 170 "prog_io_type_defn.m"
          }
#line 13205 "parse_tree.prog_io_type_defn.c"
      }
#line 13207 "parse_tree.prog_io_type_defn.c"
  }
#line 113 "prog_io_type_defn.m"
}

#line 48 "prog_io_type_defn.m"
void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_decl_where_part_if_present_6_p_0(
#line 48 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_7,
#line 48 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_8,
#line 48 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_9,
#line 48 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_10,
#line 48 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__BeforeWhereTerm_11,
#line 48 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeWhereDetails_12)
#line 48 "prog_io_type_defn.m"
{
#line 784 "prog_io_type_defn.m"
  {
#line 784 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_10)) == (MR_mktag((MR_Integer) 0)));
#line 784 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__BeforeWhereTermPrime_13;
#line 784 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__WhereTerm_14;
#line 778 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 778 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 778 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 778 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 778 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 778 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_15_15;

#line 778 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 778 "prog_io_type_defn.m"
      {
#line 778 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 0)));
#line 778 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 1)));
#line 778 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 2)));
#line 778 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 778 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 778 "prog_io_type_defn.m"
          {
#line 778 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 778 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) "where") == 0);
#line 778 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 778 "prog_io_type_defn.m"
              {
#line 778 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 778 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 778 "prog_io_type_defn.m"
                  {
#line 778 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__BeforeWhereTermPrime_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 778 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 779 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 779 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 779 "prog_io_type_defn.m"
                      {
#line 779 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__WhereTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 779 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 779 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 779 "prog_io_type_defn.m"
                      }
#line 778 "prog_io_type_defn.m"
                  }
#line 778 "prog_io_type_defn.m"
              }
#line 778 "prog_io_type_defn.m"
          }
#line 778 "prog_io_type_defn.m"
      }
#line 784 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 781 "prog_io_type_defn.m"
      {
#line 781 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_21_21;

#line 781 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__BeforeWhereTerm_11 = parse_tree__prog_io_type_defn__BeforeWhereTermPrime_13;
#line 782 "prog_io_type_defn.m"
        {
#line 782 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 782 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__WhereTerm_14));
#line 782 "prog_io_type_defn.m"
        }
#line 782 "prog_io_type_defn.m"
        {
#line 782 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeWhereDetails_12 = parse_tree__prog_io_type_defn__parse_type_decl_where_term_4_f_0(parse_tree__prog_io_type_defn__IsSolverType_7, parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__V_21_21);
        }
#line 781 "prog_io_type_defn.m"
      }
#line 784 "prog_io_type_defn.m"
    else
#line 785 "prog_io_type_defn.m"
      {
#line 785 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__BeforeWhereTerm_11 = parse_tree__prog_io_type_defn__Term_10;
#line 786 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeWhereDetails_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_4[1]);
#line 785 "prog_io_type_defn.m"
      }
#line 784 "prog_io_type_defn.m"
  }
#line 48 "prog_io_type_defn.m"
}

#line 1302 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_5(
#line 1302 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1302 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1302 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2)
#line 1302 "prog_io_type_defn.m"
{
#line 1302 "prog_io_type_defn.m"
  {
#line 1302 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 1302 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv1_HeadVar__2_102;

#line 1302 "prog_io_type_defn.m"
    {
#line 1302 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_type_defn_head__1302__1_2_p_0(((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1), &parse_tree__prog_io_type_defn__conv1_HeadVar__2_102);
    }
#line 1302 "prog_io_type_defn.m"
    *parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv1_HeadVar__2_102));
#line 1302 "prog_io_type_defn.m"
  }
#line 1302 "prog_io_type_defn.m"
}

#line 1293 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_1(
#line 1293 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 1293 "prog_io_type_defn.m"
{
#line 1293 "prog_io_type_defn.m"
  {
#line 1293 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 1293 "prog_io_type_defn.m"
    MR_builtin_longjmp((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__commit_0, 1);
#line 1293 "prog_io_type_defn.m"
  }
#line 1293 "prog_io_type_defn.m"
}

#line 1293 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_3(
#line 1293 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 1293 "prog_io_type_defn.m"
{
#line 1293 "prog_io_type_defn.m"
  {
#line 1293 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 1293 "prog_io_type_defn.m"
    (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__V_22_22 = ((MR_Word) (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__conv0_V_22_22);
#line 1293 "prog_io_type_defn.m"
    {
#line 1293 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_2(parse_tree__prog_io_type_defn__env_ptr);
#line 1293 "prog_io_type_defn.m"
      return;
    }
#line 1293 "prog_io_type_defn.m"
  }
#line 1293 "prog_io_type_defn.m"
}

#line 1293 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_2(
#line 1293 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 1293 "prog_io_type_defn.m"
{
#line 1293 "prog_io_type_defn.m"
  {
#line 1293 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 1293 "prog_io_type_defn.m"
    (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 1293 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded)
#line 1293 "prog_io_type_defn.m"
      {
#line 1293 "prog_io_type_defn.m"
        {
#line 1293 "prog_io_type_defn.m"
          (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__Param_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__V_30_30, (MR_Integer) 0)));
#line 1293 "prog_io_type_defn.m"
          (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__OtherParams_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__V_30_30, (MR_Integer) 1)));
#line 1293 "prog_io_type_defn.m"
        }
#line 1293 "prog_io_type_defn.m"
        {
#line 1294 "prog_io_type_defn.m"
          {
#line 1294 "prog_io_type_defn.m"
            (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded = mercury__list__member_2_p_0((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__TypeInfo_100_100, ((MR_Box) ((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__Param_23)), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__OtherParams_24);
          }
#line 1294 "prog_io_type_defn.m"
          if ((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded)
#line 1294 "prog_io_type_defn.m"
            {
#line 1294 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_1(parse_tree__prog_io_type_defn__env_ptr);
#line 1294 "prog_io_type_defn.m"
              return;
            }
#line 1293 "prog_io_type_defn.m"
        }
#line 1293 "prog_io_type_defn.m"
      }
#line 1293 "prog_io_type_defn.m"
  }
#line 1293 "prog_io_type_defn.m"
}

#line 1293 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_4(
#line 1293 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 1293 "prog_io_type_defn.m"
{
#line 1293 "prog_io_type_defn.m"
  {
#line 1293 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 1293 "prog_io_type_defn.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__commit_0) == 0)
#line 1293 "prog_io_type_defn.m"
      {
#line 13487 "parse_tree.prog_io_type_defn.c"
        (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__TypeInfo_100_100 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[0];
#line 1293 "prog_io_type_defn.m"
        {
#line 1293 "prog_io_type_defn.m"
          mercury__list__member_3_p_0((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__TypeInfo_100_100, &(parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__conv0_V_22_22, (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__Params0_21, &(parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__V_30_30, parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_3, parse_tree__prog_io_type_defn__env_ptr);
        }
#line 1293 "prog_io_type_defn.m"
        (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded = MR_FALSE;
#line 1293 "prog_io_type_defn.m"
      }
#line 1293 "prog_io_type_defn.m"
    else
#line 1293 "prog_io_type_defn.m"
      (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded = MR_TRUE;
#line 1293 "prog_io_type_defn.m"
  }
#line 1293 "prog_io_type_defn.m"
}

#line 38 "prog_io_type_defn.m"
void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(
#line 38 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 38 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 38 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_7,
#line 38 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8)
#line 38 "prog_io_type_defn.m"
{
#line 38 "prog_io_type_defn.m"
  {
#line 38 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s parse_tree__prog_io_type_defn__env;

#line 1274 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__HeadTerm_7)) == (MR_mktag((MR_Integer) 0))))
#line 1280 "prog_io_type_defn.m"
      {
#line 1280 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_99_99 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1280 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadTerm_7, (MR_Integer) 2)));
#line 1280 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadResult_17;
#line 1280 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadTerm_7, (MR_Integer) 0)));
#line 1280 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadTerm_7, (MR_Integer) 1)));

#line 1282 "prog_io_type_defn.m"
        {
#line 1282 "prog_io_type_defn.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_99_99, parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__HeadTerm_7, parse_tree__prog_io_type_defn__VarSet_6, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[117]), &parse_tree__prog_io_type_defn__HeadResult_17);
        }
#line 1287 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__HeadResult_17)) == (MR_mktag((MR_Integer) 0))))
#line 1286 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = (MR_Word) parse_tree__prog_io_type_defn__HeadResult_17;
#line 1287 "prog_io_type_defn.m"
        else
#line 1288 "prog_io_type_defn.m"
          {
#line 1288 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Name_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadResult_17, (MR_Integer) 0)));
#line 1288 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ArgTerms_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadResult_17, (MR_Integer) 1)));

#line 1290 "prog_io_type_defn.m"
            {
#line 1290 "prog_io_type_defn.m"
              (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_99_99, parse_tree__prog_io_type_defn__ArgTerms_20, &(parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__Params0_21);
            }
#line 1305 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded)
#line 1301 "prog_io_type_defn.m"
              {
#line 1293 "prog_io_type_defn.m"
                {
#line 1293 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_4(&parse_tree__prog_io_type_defn__env);
                }
#line 1301 "prog_io_type_defn.m"
                if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded)
#line 1297 "prog_io_type_defn.m"
                  {
#line 1297 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 1297 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 1297 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_47_47;
#line 1297 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Spec_86;

#line 1299 "prog_io_type_defn.m"
                    {
#line 1299 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1299 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__HeadContext_15));
#line 1299 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[118])));
#line 1299 "prog_io_type_defn.m"
                    }
#line 1298 "prog_io_type_defn.m"
                    {
#line 1298 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1298 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 1298 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1298 "prog_io_type_defn.m"
                    }
#line 1298 "prog_io_type_defn.m"
                    {
#line 1298 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Spec_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1298 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1298 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1298 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_86, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 1298 "prog_io_type_defn.m"
                    }
#line 1300 "prog_io_type_defn.m"
                    {
#line 1300 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1300 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_86));
#line 1300 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1300 "prog_io_type_defn.m"
                    }
#line 1300 "prog_io_type_defn.m"
                    {
#line 1300 "prog_io_type_defn.m"
                      MR_Word base;
#line 1300 "prog_io_type_defn.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1300 "prog_io_type_defn.m"
                      *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = base;
#line 1300 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 1300 "prog_io_type_defn.m"
                    }
#line 1297 "prog_io_type_defn.m"
                  }
#line 1301 "prog_io_type_defn.m"
                else
#line 1302 "prog_io_type_defn.m"
                  {
#line 1302 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Params_25;

#line 1302 "prog_io_type_defn.m"
                    {
#line 1302 "prog_io_type_defn.m"
                      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_4[0], (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__Params0_21, &parse_tree__prog_io_type_defn__Params_25);
                    }
#line 1303 "prog_io_type_defn.m"
                    {
#line 1303 "prog_io_type_defn.m"
                      MR_Word base;
#line 1303 "prog_io_type_defn.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1303 "prog_io_type_defn.m"
                      *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = base;
#line 1303 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_19));
#line 1303 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Params_25));
#line 1303 "prog_io_type_defn.m"
                    }
#line 1302 "prog_io_type_defn.m"
                  }
#line 1301 "prog_io_type_defn.m"
              }
#line 1305 "prog_io_type_defn.m"
            else
#line 1306 "prog_io_type_defn.m"
              {
#line 1306 "prog_io_type_defn.m"
                MR_String parse_tree__prog_io_type_defn__HeadTermStr_26;
#line 1306 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 1306 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_53_53;
#line 1306 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_62_62;
#line 1306 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_63_63;
#line 1306 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_64_64;
#line 1306 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_65_65;
#line 1306 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_68_68;
#line 1306 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Pieces_89;
#line 1306 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_90;

#line 1306 "prog_io_type_defn.m"
                {
#line 1306 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__HeadTermStr_26 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_99_99, parse_tree__prog_io_type_defn__VarSet_6, parse_tree__prog_io_type_defn__HeadTerm_7);
                }
#line 1308 "prog_io_type_defn.m"
                {
#line 1308 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1308 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1308 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_53_53, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__HeadTermStr_26));
#line 1308 "prog_io_type_defn.m"
                }
#line 1307 "prog_io_type_defn.m"
                {
#line 1307 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1307 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_53_53));
#line 1307 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[21])));
#line 1307 "prog_io_type_defn.m"
                }
#line 1307 "prog_io_type_defn.m"
                {
#line 1307 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Pieces_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1307 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[119])));
#line 1307 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_89, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_52_52));
#line 1307 "prog_io_type_defn.m"
                }
#line 1310 "prog_io_type_defn.m"
                {
#line 1310 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1310 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_89));
#line 1310 "prog_io_type_defn.m"
                }
#line 1310 "prog_io_type_defn.m"
                {
#line 1310 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1310 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_65_65));
#line 1310 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1310 "prog_io_type_defn.m"
                }
#line 1310 "prog_io_type_defn.m"
                {
#line 1310 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1310 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__HeadContext_15));
#line 1310 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_64_64));
#line 1310 "prog_io_type_defn.m"
                }
#line 1309 "prog_io_type_defn.m"
                {
#line 1309 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1309 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_63_63));
#line 1309 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1309 "prog_io_type_defn.m"
                }
#line 1309 "prog_io_type_defn.m"
                {
#line 1309 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1309 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_90, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1309 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1309 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_90, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_62_62));
#line 1309 "prog_io_type_defn.m"
                }
#line 1311 "prog_io_type_defn.m"
                {
#line 1311 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1311 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_90));
#line 1311 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1311 "prog_io_type_defn.m"
                }
#line 1311 "prog_io_type_defn.m"
                {
#line 1311 "prog_io_type_defn.m"
                  MR_Word base;
#line 1311 "prog_io_type_defn.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1311 "prog_io_type_defn.m"
                  *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = base;
#line 1311 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_68_68));
#line 1311 "prog_io_type_defn.m"
                }
#line 1306 "prog_io_type_defn.m"
              }
#line 1288 "prog_io_type_defn.m"
          }
#line 1280 "prog_io_type_defn.m"
      }
#line 1274 "prog_io_type_defn.m"
    else
#line 1274 "prog_io_type_defn.m"
      {
#line 1274 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadTerm_7, (MR_Integer) 1)));
#line 1274 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_12;
#line 1274 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_77_77;
#line 1274 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_78_78;
#line 1274 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_83_83;
#line 1274 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadTerm_7, (MR_Integer) 0)));

#line 1277 "prog_io_type_defn.m"
        {
#line 1277 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1277 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_10));
#line 1277 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[120])));
#line 1277 "prog_io_type_defn.m"
        }
#line 1276 "prog_io_type_defn.m"
        {
#line 1276 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1276 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_78_78));
#line 1276 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1276 "prog_io_type_defn.m"
        }
#line 1276 "prog_io_type_defn.m"
        {
#line 1276 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1276 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1276 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1276 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_77_77));
#line 1276 "prog_io_type_defn.m"
        }
#line 1278 "prog_io_type_defn.m"
        {
#line 1278 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1278 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_12));
#line 1278 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1278 "prog_io_type_defn.m"
        }
#line 1278 "prog_io_type_defn.m"
        {
#line 1278 "prog_io_type_defn.m"
          MR_Word base;
#line 1278 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1278 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = base;
#line 1278 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_83_83));
#line 1278 "prog_io_type_defn.m"
        }
#line 1274 "prog_io_type_defn.m"
      }
#line 38 "prog_io_type_defn.m"
  }
#line 38 "prog_io_type_defn.m"
}

#line 553 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_1(
#line 553 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 553 "prog_io_type_defn.m"
{
#line 553 "prog_io_type_defn.m"
  {
#line 553 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 553 "prog_io_type_defn.m"
    MR_builtin_longjmp((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__commit_0, 1);
#line 553 "prog_io_type_defn.m"
  }
#line 553 "prog_io_type_defn.m"
}

#line 553 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_2(
#line 553 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 553 "prog_io_type_defn.m"
{
#line 553 "prog_io_type_defn.m"
  {
#line 553 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 553 "prog_io_type_defn.m"
    {
#line 13920 "parse_tree.prog_io_type_defn.c"
      (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TypeCtorInfo_66_82 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 554 "prog_io_type_defn.m"
      {
#line 554 "prog_io_type_defn.m"
        mercury__term__coerce_var_2_p_0((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TypeCtorInfo_65_81, (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TypeCtorInfo_66_82, (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__Var_39, &(parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TVar_40);
      }
#line 555 "prog_io_type_defn.m"
      {
#line 555 "prog_io_type_defn.m"
        (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], ((MR_Box) ((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TVar_40)), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__Params_38);
      }
#line 555 "prog_io_type_defn.m"
      (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = !((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded);
#line 555 "prog_io_type_defn.m"
      if ((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded)
#line 555 "prog_io_type_defn.m"
        {
#line 555 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_1(parse_tree__prog_io_type_defn__env_ptr);
#line 555 "prog_io_type_defn.m"
          return;
        }
#line 553 "prog_io_type_defn.m"
    }
#line 553 "prog_io_type_defn.m"
  }
#line 553 "prog_io_type_defn.m"
}

#line 553 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_3(
#line 553 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 553 "prog_io_type_defn.m"
{
#line 553 "prog_io_type_defn.m"
  {
#line 553 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 553 "prog_io_type_defn.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__commit_0) == 0)
#line 553 "prog_io_type_defn.m"
      {
#line 13966 "parse_tree.prog_io_type_defn.c"
        (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TypeCtorInfo_65_81 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 553 "prog_io_type_defn.m"
        {
#line 553 "prog_io_type_defn.m"
          mercury__term__contains_var_2_p_1((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TypeCtorInfo_65_81, (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__BeforeCondTerm_20, &(parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__Var_39, parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_2, parse_tree__prog_io_type_defn__env_ptr);
        }
#line 553 "prog_io_type_defn.m"
        (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = MR_FALSE;
#line 553 "prog_io_type_defn.m"
      }
#line 553 "prog_io_type_defn.m"
    else
#line 553 "prog_io_type_defn.m"
      (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = MR_TRUE;
#line 553 "prog_io_type_defn.m"
  }
#line 553 "prog_io_type_defn.m"
}

#line 31 "prog_io_type_defn.m"
void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_7_p_0(
#line 31 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_8,
#line 31 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_9,
#line 31 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TypeDefnTerm_10,
#line 31 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes_11,
#line 31 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_12,
#line 31 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_13,
#line 31 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_14)
#line 31 "prog_io_type_defn.m"
{
#line 31 "prog_io_type_defn.m"
  {
#line 31 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0_s parse_tree__prog_io_type_defn__env;

#line 100 "prog_io_type_defn.m"
    {
#line 100 "prog_io_type_defn.m"
      MR_String parse_tree__prog_io_type_defn__Name_15;
#line 100 "prog_io_type_defn.m"
      MR_Word parse_tree__prog_io_type_defn__HeadTerm_18;
#line 100 "prog_io_type_defn.m"
      MR_Word parse_tree__prog_io_type_defn__BodyTerm_19;
#line 76 "prog_io_type_defn.m"
      MR_Word parse_tree__prog_io_type_defn__ArgTerms_16;
#line 76 "prog_io_type_defn.m"
      MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 76 "prog_io_type_defn.m"
      MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 76 "prog_io_type_defn.m"
      MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 76 "prog_io_type_defn.m"
      MR_Word parse_tree__prog_io_type_defn__V_17_17;

#line 76 "prog_io_type_defn.m"
      (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__TypeDefnTerm_10)) == (MR_mktag((MR_Integer) 0)));
#line 76 "prog_io_type_defn.m"
      if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded)
#line 76 "prog_io_type_defn.m"
        {
#line 76 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__TypeDefnTerm_10, (MR_Integer) 0)));
#line 76 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__ArgTerms_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__TypeDefnTerm_10, (MR_Integer) 1)));
#line 76 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__TypeDefnTerm_10, (MR_Integer) 2)));
#line 76 "prog_io_type_defn.m"
          (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_22_22)) == (MR_mktag((MR_Integer) 0)));
#line 76 "prog_io_type_defn.m"
          if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded)
#line 76 "prog_io_type_defn.m"
            {
#line 76 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Name_15 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_22_22, (MR_Integer) 0)));
#line 79 "prog_io_type_defn.m"
              if ((strcmp(parse_tree__prog_io_type_defn__Name_15, (MR_String) "==") == 0))
#line 79 "prog_io_type_defn.m"
                (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = MR_TRUE;
#line 79 "prog_io_type_defn.m"
              else
#line 79 "prog_io_type_defn.m"
                if ((strcmp(parse_tree__prog_io_type_defn__Name_15, (MR_String) "--->") == 0))
#line 78 "prog_io_type_defn.m"
                  (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = MR_TRUE;
#line 79 "prog_io_type_defn.m"
                else
#line 79 "prog_io_type_defn.m"
                  if ((strcmp(parse_tree__prog_io_type_defn__Name_15, (MR_String) "where") == 0))
#line 80 "prog_io_type_defn.m"
                    (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = MR_TRUE;
#line 79 "prog_io_type_defn.m"
                  else
#line 79 "prog_io_type_defn.m"
                    (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = MR_FALSE;
#line 76 "prog_io_type_defn.m"
              if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded)
#line 76 "prog_io_type_defn.m"
                {
#line 77 "prog_io_type_defn.m"
                  (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__ArgTerms_16)) == (MR_mktag((MR_Integer) 1)));
#line 77 "prog_io_type_defn.m"
                  if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded)
#line 77 "prog_io_type_defn.m"
                    {
#line 77 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__HeadTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__ArgTerms_16, (MR_Integer) 0)));
#line 77 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__ArgTerms_16, (MR_Integer) 1)));
#line 77 "prog_io_type_defn.m"
                      (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 77 "prog_io_type_defn.m"
                      if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded)
#line 77 "prog_io_type_defn.m"
                        {
#line 77 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__BodyTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 77 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 1)));
#line 77 "prog_io_type_defn.m"
                          (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 77 "prog_io_type_defn.m"
                        }
#line 77 "prog_io_type_defn.m"
                    }
#line 76 "prog_io_type_defn.m"
                }
#line 76 "prog_io_type_defn.m"
            }
#line 76 "prog_io_type_defn.m"
        }
#line 100 "prog_io_type_defn.m"
      if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded)
#line 83 "prog_io_type_defn.m"
        {
#line 83 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__Condition_21;

#line 83 "prog_io_type_defn.m"
          {
#line 83 "prog_io_type_defn.m"
            parse_tree__prog_io_util__parse_condition_suffix_3_p_0(parse_tree__prog_io_type_defn__BodyTerm_19, &(parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__BeforeCondTerm_20, &parse_tree__prog_io_type_defn__Condition_21);
          }
#line 89 "prog_io_type_defn.m"
          if ((strcmp(parse_tree__prog_io_type_defn__Name_15, (MR_String) "==") == 0))
#line 543 "prog_io_type_defn.m"
            {
#line 543 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__MaybeNameAndParams_35;

#line 544 "prog_io_type_defn.m"
              {
#line 544 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__HeadTerm_18, &parse_tree__prog_io_type_defn__MaybeNameAndParams_35);
              }
#line 549 "prog_io_type_defn.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeNameAndParams_35)) == (MR_mktag((MR_Integer) 0))))
#line 547 "prog_io_type_defn.m"
                {
#line 547 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__Specs_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeNameAndParams_35, (MR_Integer) 0)));

#line 548 "prog_io_type_defn.m"
                  {
#line 548 "prog_io_type_defn.m"
                    MR_Word base;
#line 548 "prog_io_type_defn.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 548 "prog_io_type_defn.m"
                    *parse_tree__prog_io_type_defn__MaybeItem_14 = base;
#line 548 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_36));
#line 548 "prog_io_type_defn.m"
                  }
#line 547 "prog_io_type_defn.m"
                }
#line 549 "prog_io_type_defn.m"
              else
#line 550 "prog_io_type_defn.m"
                {
#line 550 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__Name_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameAndParams_35, (MR_Integer) 0)));

#line 550 "prog_io_type_defn.m"
                  (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__Params_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameAndParams_35, (MR_Integer) 1)));
#line 553 "prog_io_type_defn.m"
                  {
#line 553 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_3(&parse_tree__prog_io_type_defn__env);
                  }
#line 564 "prog_io_type_defn.m"
                  if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded)
#line 557 "prog_io_type_defn.m"
                    {
#line 557 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_68_84 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 557 "prog_io_type_defn.m"
                      MR_String parse_tree__prog_io_type_defn__BodyTermStr_41;
#line 557 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__Pieces_42;
#line 557 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__Spec_43;
#line 557 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__V_54_54;
#line 557 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__V_57_57;
#line 557 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__V_58_58;
#line 557 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__V_67_67;
#line 557 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__V_68_68;
#line 557 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__V_69_69;
#line 557 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__V_70_70;
#line 557 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__V_71_71;
#line 557 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__V_74_74;

#line 557 "prog_io_type_defn.m"
                      {
#line 557 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__BodyTermStr_41 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_68_84, parse_tree__prog_io_type_defn__VarSet_9, (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__BeforeCondTerm_20);
                      }
#line 560 "prog_io_type_defn.m"
                      {
#line 560 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 560 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 560 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_58_58, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__BodyTermStr_41));
#line 560 "prog_io_type_defn.m"
                      }
#line 559 "prog_io_type_defn.m"
                      {
#line 559 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_58_58));
#line 559 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[21])));
#line 559 "prog_io_type_defn.m"
                      }
#line 558 "prog_io_type_defn.m"
                      {
#line 558 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 558 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[115])));
#line 558 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_57_57));
#line 558 "prog_io_type_defn.m"
                      }
#line 558 "prog_io_type_defn.m"
                      {
#line 558 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__Pieces_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 558 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[114])));
#line 558 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_42, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_54_54));
#line 558 "prog_io_type_defn.m"
                      }
#line 562 "prog_io_type_defn.m"
                      {
#line 562 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_69_69 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_68_84, (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__BeforeCondTerm_20);
                      }
#line 562 "prog_io_type_defn.m"
                      {
#line 562 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 562 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_71_71, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_42));
#line 562 "prog_io_type_defn.m"
                      }
#line 562 "prog_io_type_defn.m"
                      {
#line 562 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 562 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_71_71));
#line 562 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 562 "prog_io_type_defn.m"
                      }
#line 562 "prog_io_type_defn.m"
                      {
#line 562 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 562 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_69_69));
#line 562 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_68_68, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_70_70));
#line 562 "prog_io_type_defn.m"
                      }
#line 561 "prog_io_type_defn.m"
                      {
#line 561 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 561 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_68_68));
#line 561 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 561 "prog_io_type_defn.m"
                      }
#line 561 "prog_io_type_defn.m"
                      {
#line 561 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__Spec_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 561 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 561 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 561 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_43, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_67_67));
#line 561 "prog_io_type_defn.m"
                      }
#line 563 "prog_io_type_defn.m"
                      {
#line 563 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_43));
#line 563 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 563 "prog_io_type_defn.m"
                      }
#line 563 "prog_io_type_defn.m"
                      {
#line 563 "prog_io_type_defn.m"
                        MR_Word base;
#line 563 "prog_io_type_defn.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 563 "prog_io_type_defn.m"
                        *parse_tree__prog_io_type_defn__MaybeItem_14 = base;
#line 563 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_74_74));
#line 563 "prog_io_type_defn.m"
                      }
#line 557 "prog_io_type_defn.m"
                    }
#line 564 "prog_io_type_defn.m"
                  else
#line 566 "prog_io_type_defn.m"
                    {
#line 566 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__MaybeType_45;

#line 567 "prog_io_type_defn.m"
                      {
#line 567 "prog_io_type_defn.m"
                        parse_tree__prog_io_util__parse_type_4_p_0((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__BeforeCondTerm_20, parse_tree__prog_io_type_defn__VarSet_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_type_defn__MaybeType_45);
                      }
#line 577 "prog_io_type_defn.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeType_45)) == (MR_mktag((MR_Integer) 0))))
#line 579 "prog_io_type_defn.m"
                        *parse_tree__prog_io_type_defn__MaybeItem_14 = (MR_Word) parse_tree__prog_io_type_defn__MaybeType_45;
#line 577 "prog_io_type_defn.m"
                      else
#line 569 "prog_io_type_defn.m"
                        {
#line 569 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__Type_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeType_45, (MR_Integer) 0)));
#line 569 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__TypeVarSet_47;
#line 569 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__TypeDefn_48;
#line 569 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__ItemTypeDefn_49;
#line 569 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__Item_50;
#line 569 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__MaybeItem0_51;

#line 570 "prog_io_type_defn.m"
                          {
#line 570 "prog_io_type_defn.m"
                            mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_9, &parse_tree__prog_io_type_defn__TypeVarSet_47);
                          }
#line 571 "prog_io_type_defn.m"
                          {
#line 571 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TypeDefn_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 571 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__TypeDefn_48, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Type_46));
#line 571 "prog_io_type_defn.m"
                          }
#line 572 "prog_io_type_defn.m"
                          {
#line 572 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__ItemTypeDefn_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 572 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_49, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeVarSet_47));
#line 572 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_49, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_37));
#line 572 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_49, 2) = ((MR_Box) ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__Params_38));
#line 572 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_49, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn_48));
#line 572 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_49, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__Condition_21));
#line 572 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_49, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_12));
#line 572 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_49, 6) = ((MR_Box) (parse_tree__prog_io_type_defn__SeqNum_13));
#line 572 "prog_io_type_defn.m"
                          }
#line 574 "prog_io_type_defn.m"
                          {
#line 574 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__Item_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__Item_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 574 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__Item_50, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__ItemTypeDefn_49));
#line 574 "prog_io_type_defn.m"
                          }
#line 575 "prog_io_type_defn.m"
                          {
#line 575 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__MaybeItem0_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 575 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItem0_51, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Item_50));
#line 575 "prog_io_type_defn.m"
                          }
#line 576 "prog_io_type_defn.m"
                          {
#line 576 "prog_io_type_defn.m"
                            parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_type_defn__MaybeItem0_51, parse_tree__prog_io_type_defn__Attributes_11, parse_tree__prog_io_type_defn__MaybeItem_14);
#line 576 "prog_io_type_defn.m"
                            return;
                          }
#line 569 "prog_io_type_defn.m"
                        }
#line 566 "prog_io_type_defn.m"
                    }
#line 550 "prog_io_type_defn.m"
                }
#line 543 "prog_io_type_defn.m"
            }
#line 89 "prog_io_type_defn.m"
          else
#line 89 "prog_io_type_defn.m"
            if ((strcmp(parse_tree__prog_io_type_defn__Name_15, (MR_String) "--->") == 0))
#line 86 "prog_io_type_defn.m"
              {
#line 86 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__parse_du_type_defn_9_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__HeadTerm_18, (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__BeforeCondTerm_20, parse_tree__prog_io_type_defn__Attributes_11, parse_tree__prog_io_type_defn__Condition_21, parse_tree__prog_io_type_defn__Context_12, parse_tree__prog_io_type_defn__SeqNum_13, parse_tree__prog_io_type_defn__MaybeItem_14);
#line 86 "prog_io_type_defn.m"
                return;
              }
#line 89 "prog_io_type_defn.m"
            else
#line 96 "prog_io_type_defn.m"
              {
#line 96 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__parse_where_block_type_defn_9_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__HeadTerm_18, (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__BeforeCondTerm_20, parse_tree__prog_io_type_defn__Attributes_11, parse_tree__prog_io_type_defn__Condition_21, parse_tree__prog_io_type_defn__Context_12, parse_tree__prog_io_type_defn__SeqNum_13, parse_tree__prog_io_type_defn__MaybeItem_14);
#line 96 "prog_io_type_defn.m"
                return;
              }
#line 83 "prog_io_type_defn.m"
        }
#line 100 "prog_io_type_defn.m"
      else
#line 102 "prog_io_type_defn.m"
        {
#line 101 "prog_io_type_defn.m"
          {
#line 101 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__parse_abstract_type_defn_8_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__TypeDefnTerm_10, parse_tree__prog_io_type_defn__Attributes_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_type_defn__Context_12, parse_tree__prog_io_type_defn__SeqNum_13, parse_tree__prog_io_type_defn__MaybeItem_14);
#line 101 "prog_io_type_defn.m"
            return;
          }
#line 102 "prog_io_type_defn.m"
        }
#line 100 "prog_io_type_defn.m"
    }
#line 31 "prog_io_type_defn.m"
  }
#line 31 "prog_io_type_defn.m"
}

void mercury__parse_tree__prog_io_type_defn__init(void)
{
}

void mercury__parse_tree__prog_io_type_defn__init_type_tables(void)
{
}

void mercury__parse_tree__prog_io_type_defn__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_io_type_defn. */
