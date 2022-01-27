/*
** Automatically generated from `prog_io_type_defn.m'
** by the Mercury compiler,
** version rotd-2015-01-28
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
#include "cord.mih"
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
#include "set_tree234.mih"
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
#include "mdbcomp.sym_name.mih"
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



#line 664 "prog_io_type_defn.m"
struct parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0_s {
#line 672 "prog_io_type_defn.m"
  MR_bool parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__succeeded;
#line 672 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__SolverTypeDetails_19;
#line 678 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__Params_23;
#line 680 "prog_io_type_defn.m"
  jmp_buf parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__commit_0;
#line 680 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__Var_25;
#line 664 "prog_io_type_defn.m"
};

#line 38 "prog_io_type_defn.m"
struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s {
#line 1265 "prog_io_type_defn.m"
  MR_bool parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded;
#line 1296 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__Params0_21;
#line 1284 "prog_io_type_defn.m"
  jmp_buf parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__commit_0;
#line 1284 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__TypeInfo_100_100;
#line 1284 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__Param_23;
#line 1284 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__OtherParams_24;
#line 1284 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__V_30_30;
#line 1284 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__V_22_22;
#line 1284 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__conv0_V_22_22;
#line 38 "prog_io_type_defn.m"
};

#line 31 "prog_io_type_defn.m"
struct parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0_s {
#line 96 "prog_io_type_defn.m"
  MR_bool parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded;
#line 96 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__BodyTerm_19;
#line 544 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__Params_34;
#line 547 "prog_io_type_defn.m"
  jmp_buf parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__commit_0;
#line 547 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TypeCtorInfo_63_77;
#line 547 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TypeCtorInfo_64_78;
#line 547 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__Var_35;
#line 547 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TVar_36;
#line 31 "prog_io_type_defn.m"
};


#line 199 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 202 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 205 "parse_tree.prog_io_type_defn.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_type_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 208 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 211 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 214 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 217 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 220 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0;

#line 223 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 226 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;

#line 884 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_49_44_32_52_93_95_48_3_f_0(
#line 884 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 884 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 884 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 884 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 884 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 884 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 884 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_57_95_95_91_51_93_95_48_3_f_0(
#line 884 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 884 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 884 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 884 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(
#line 884 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 884 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 884 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 884 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 820 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_48_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(
#line 820 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 820 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 820 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_54,
#line 820 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_98);

#line 811 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_49_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(
#line 811 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 811 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_42,
#line 811 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_82);

#line 808 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_48_56_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 808 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_38,
#line 808 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_77);

#line 805 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_48_53_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 805 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_34,
#line 805 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_71);

#line 817 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_55_95_95_49_95_95_104_111_49_51_95_95_91_52_93_95_48_3_f_0(
#line 817 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 817 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 817 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_50,
#line 817 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_93);

#line 814 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_52_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(
#line 814 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 814 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 814 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_46,
#line 814 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_88);

#line 799 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_55_57_57_95_95_49_95_95_104_111_49_49_95_95_91_49_44_32_52_93_95_48_3_f_0(
#line 799 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 799 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_28,
#line 799 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_62);

#line 850 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0(
#line 850 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 850 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_56_95_95_91_51_93_95_48_4_p_0(
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_26_26,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_27_27,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 850 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 850 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 850 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_54_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 850 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 850 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0(
#line 850 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 850 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0(
#line 850 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 850 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_52_93_95_48_4_p_0(
#line 850 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 850 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 850 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 884 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(
#line 884 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 884 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 884 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 884 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 1111 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_109_97_121_98_101_95_119_104_101_114_101_95_100_101_116_97_105_108_115_95_50_95_95_91_49_49_93_95_48_12_f_0(
#line 1111 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_14,
#line 1111 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_15,
#line 1111 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__RepresentationIs_16,
#line 1111 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__InitialisationIs_17,
#line 1111 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__GroundIs_18,
#line 1111 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__AnyIs_19,
#line 1111 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__CStoreIs_20,
#line 1111 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__EqualityIs_21,
#line 1111 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ComparisonIs_22,
#line 1111 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__DirectArgIs_23,
#line 1111 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__WhereTerm_25);

#line 961 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_2_f_0(
#line 961 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5);

#line 850 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_attribute__ho10_4_p_0(
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 452 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__452__1_2_p_0(
#line 452 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ExistQVars_19,
#line 452 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_287);

#line 424 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__424__1_2_p_0(
#line 424 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_128,
#line 424 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_275);

#line 420 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__420__1_1_f_0(
#line 420 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_125);

#line 404 "prog_io_type_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__404__1_3_f_0(
#line 404 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_88,
#line 404 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__GenericVarSet_216,
#line 404 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_268);

#line 375 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__375__1_2_p_0(
#line 375 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_60,
#line 375 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_257);

#line 372 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__372__1_1_f_0(
#line 372 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_57);

#line 221 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_constructor__221__1_2_p_0(
#line 221 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_46,
#line 221 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_47);

#line 1293 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_type_defn_head__1293__1_2_p_0(
#line 1293 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_101,
#line 1293 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_102);

#line 1245 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__maybe_unify_compare_2_f_0(
#line 1245 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeEqPred_4,
#line 1245 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCmpPred_5);

#line 1065 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__make_maybe_where_details_12_f_0(
#line 1065 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_14,
#line 1065 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_15,
#line 1065 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeRepresentationIs_16,
#line 1065 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeInitialisationIs_17,
#line 1065 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeGroundIs_18,
#line 1065 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeAnyIs_19,
#line 1065 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCStoreIs_20,
#line 1065 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeEqualityIs_21,
#line 1065 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeComparisonIs_22,
#line 1065 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgIs_23,
#line 1065 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeWhereEnd_24,
#line 1065 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__WhereTerm_25);

#line 1056 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_end_2_p_0(
#line 1056 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 1056 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_2);

#line 1040 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_direct_arg_functor_4_p_0(
#line 1040 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 1040 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 1040 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7,
#line 1040 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeFunctor_8);

#line 1029 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0_1(
#line 1029 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1029 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1029 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2);

#line 1024 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0(
#line 1024 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 1024 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 1024 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 1006 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_mutable_decl_term_3_p_0(
#line 1006 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_4,
#line 1006 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5,
#line 1006 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeMutableInfo_6);

#line 997 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0_1(
#line 997 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 997 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 997 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2);

#line 983 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0(
#line 983 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_4,
#line 983 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5);

#line 917 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_initialisation_is_3_f_0(
#line 917 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 917 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 917 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 908 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(
#line 908 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_3);

#line 784 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_type_decl_where_term_4_f_0(
#line 784 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_6,
#line 784 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_7,
#line 784 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_8,
#line 784 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm0_9);

#line 716 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_abstract_type_defn_7_p_0(
#line 716 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_8,
#line 716 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_9,
#line 716 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_10,
#line 716 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes0_11,
#line 716 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_12,
#line 716 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_13,
#line 716 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_14);

#line 680 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_1(
#line 680 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 680 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_2(
#line 680 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 680 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_3(
#line 680 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 664 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0(
#line 664 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_10,
#line 664 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_11,
#line 664 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_12,
#line 664 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_13,
#line 664 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeUserEqComp_14,
#line 664 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes_15,
#line 664 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_16,
#line 664 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_17,
#line 664 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_18);

#line 622 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_type_is_abstract_enum_7_p_0(
#line 622 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_8,
#line 622 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_9,
#line 622 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_10,
#line 622 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_11,
#line 622 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_12,
#line 622 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_13,
#line 622 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_14);

#line 583 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_block_type_defn_8_p_0(
#line 583 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_9,
#line 583 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_10,
#line 583 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_11,
#line 583 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_12,
#line 583 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes0_13,
#line 583 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_14,
#line 583 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_15,
#line 583 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_16);

#line 516 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__find_constructor_4_p_0(
#line 516 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 516 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__SymName_7,
#line 516 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__Arity_8,
#line 516 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Ctor_9);

#line 477 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__check_direct_arg_ctors_5_p_0(
#line 477 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 477 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_2,
#line 477 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3,
#line 477 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4,
#line 477 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_5);

#line 452 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_7(
#line 452 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 452 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 448 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_6(
#line 448 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 448 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 424 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_5(
#line 424 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 424 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 420 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_4(
#line 420 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 420 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 404 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_3(
#line 404 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 404 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 375 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_2(
#line 375 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 375 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 372 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_1(
#line 372 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 372 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 362 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0(
#line 362 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 362 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_2,
#line 362 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_3,
#line 362 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__4_4,
#line 362 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5,
#line 362 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_6);

#line 336 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__convert_constructor_arg_list_2_5_f_0(
#line 336 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_7,
#line 336 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_8,
#line 336 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCtorFieldName_9,
#line 336 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TypeTerm_10,
#line 336 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Terms_11);

#line 297 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__convert_constructor_arg_list_3_f_0(
#line 297 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_1,
#line 297 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_2,
#line 297 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3);

#line 238 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_constructor_2_4_f_0(
#line 238 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_6,
#line 238 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_7,
#line 238 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ExistQVars_8,
#line 238 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_9);

#line 221 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_constructors_2_3_f_0_1(
#line 221 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 221 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 221 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2);

#line 197 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_constructors_2_3_f_0(
#line 197 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 197 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_2,
#line 197 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3);

#line 169 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__du_type_rhs_ctors_and_where_terms_3_p_0(
#line 169 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_4,
#line 169 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__CtorsTerm_5,
#line 169 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeWhereTerm_6);

#line 108 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_du_type_defn_8_p_0(
#line 108 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_9,
#line 108 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_10,
#line 108 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_11,
#line 108 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_12,
#line 108 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes0_13,
#line 108 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_14,
#line 108 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_15,
#line 108 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_16);

#line 1293 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_5(
#line 1293 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1293 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1293 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2);

#line 1284 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_1(
#line 1284 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 1284 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_3(
#line 1284 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 1284 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_2(
#line 1284 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 1284 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_4(
#line 1284 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 547 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_1(
#line 547 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 547 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_2(
#line 547 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 547 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_3(
#line 547 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);


static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_1[156][2];

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_2[40][1];

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_3[4][5];

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_4[6][3];

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_5[2][7];

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_6[1][6];




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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
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
    ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[3])),
    ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_5[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
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



#line 2123 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2131 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2139 "parse_tree.prog_io_type_defn.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_type_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2147 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_type_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2155 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2163 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2171 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2179 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0
  }
};

#line 2187 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2195 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0
  }
};

#line 884 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_49_44_32_52_93_95_48_3_f_0(
#line 884 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 884 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 884 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 884 "prog_io_type_defn.m"
{
#line 901 "prog_io_type_defn.m"
  {
#line 901 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LHS_9;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RHS_10;
#line 888 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 888 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_19_19;
#line 888 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 888 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 888 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 888 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 888 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
      {
#line 888 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 888 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 888 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
          {
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_19_19, (MR_String) "is") == 0);
#line 888 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
              {
#line 888 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 888 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
                  {
#line 888 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 888 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 888 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
                      {
#line 888 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 888 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 888 "prog_io_type_defn.m"
                      }
#line 888 "prog_io_type_defn.m"
                  }
#line 888 "prog_io_type_defn.m"
              }
#line 888 "prog_io_type_defn.m"
          }
#line 888 "prog_io_type_defn.m"
      }
#line 901 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 898 "prog_io_type_defn.m"
      {
#line 889 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 889 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 889 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 889 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 889 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 889 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 889 "prog_io_type_defn.m"
          {
#line 889 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 0)));
#line 889 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 1)));
#line 889 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 2)));
#line 889 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 889 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 889 "prog_io_type_defn.m"
              {
#line 889 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 889 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 889 "prog_io_type_defn.m"
                  {
#line 889 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 889 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__Name_5, parse_tree__prog_io_type_defn__V_51_51) == 0);
#line 889 "prog_io_type_defn.m"
                  }
#line 889 "prog_io_type_defn.m"
              }
#line 889 "prog_io_type_defn.m"
          }
#line 898 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 890 "prog_io_type_defn.m"
          {
#line 890 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__RHSResult_13;

#line 981 "prog_io_type_defn.m"
            {
#line 981 "prog_io_type_defn.m"
              parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_type_defn__RHS_10, parse_tree__prog_io_type_defn__V_53_53, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_type_defn__RHSResult_13);
            }
#line 894 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
#line 896 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = (MR_Word) parse_tree__prog_io_type_defn__RHSResult_13;
#line 894 "prog_io_type_defn.m"
            else
#line 892 "prog_io_type_defn.m"
              {
#line 892 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RHSResult_13, (MR_Integer) 0)));
#line 892 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 893 "prog_io_type_defn.m"
                {
#line 893 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 893 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ParsedRHS_14));
#line 893 "prog_io_type_defn.m"
                }
#line 893 "prog_io_type_defn.m"
                {
#line 893 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 893 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 893 "prog_io_type_defn.m"
                }
#line 892 "prog_io_type_defn.m"
              }
#line 890 "prog_io_type_defn.m"
          }
#line 898 "prog_io_type_defn.m"
        else
#line 899 "prog_io_type_defn.m"
          {
#line 899 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[39]);
#line 899 "prog_io_type_defn.m"
          }
#line 898 "prog_io_type_defn.m"
      }
#line 901 "prog_io_type_defn.m"
    else
#line 902 "prog_io_type_defn.m"
      {
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 904 "prog_io_type_defn.m"
        {
#line 904 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 904 "prog_io_type_defn.m"
        {
#line 904 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[155])));
#line 904 "prog_io_type_defn.m"
        }
#line 904 "prog_io_type_defn.m"
        {
#line 904 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 904 "prog_io_type_defn.m"
        }
#line 903 "prog_io_type_defn.m"
        {
#line 903 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 903 "prog_io_type_defn.m"
        }
#line 905 "prog_io_type_defn.m"
        {
#line 905 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 905 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 905 "prog_io_type_defn.m"
        }
#line 905 "prog_io_type_defn.m"
        {
#line 905 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 905 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 905 "prog_io_type_defn.m"
        }
#line 902 "prog_io_type_defn.m"
      }
#line 901 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 901 "prog_io_type_defn.m"
  }
#line 884 "prog_io_type_defn.m"
}

#line 884 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 884 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 884 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 884 "prog_io_type_defn.m"
{
#line 901 "prog_io_type_defn.m"
  {
#line 901 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LHS_9;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RHS_10;
#line 888 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 888 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_19_19;
#line 888 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 888 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 888 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 888 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 888 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
      {
#line 888 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 888 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 888 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
          {
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_19_19, (MR_String) "is") == 0);
#line 888 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
              {
#line 888 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 888 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
                  {
#line 888 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 888 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 888 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
                      {
#line 888 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 888 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 888 "prog_io_type_defn.m"
                      }
#line 888 "prog_io_type_defn.m"
                  }
#line 888 "prog_io_type_defn.m"
              }
#line 888 "prog_io_type_defn.m"
          }
#line 888 "prog_io_type_defn.m"
      }
#line 901 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 898 "prog_io_type_defn.m"
      {
#line 889 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 889 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 889 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 889 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 889 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 889 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 889 "prog_io_type_defn.m"
          {
#line 889 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 0)));
#line 889 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 1)));
#line 889 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 2)));
#line 889 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 889 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 889 "prog_io_type_defn.m"
              {
#line 889 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 889 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 889 "prog_io_type_defn.m"
                  {
#line 889 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 889 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__Name_5, parse_tree__prog_io_type_defn__V_51_51) == 0);
#line 889 "prog_io_type_defn.m"
                  }
#line 889 "prog_io_type_defn.m"
              }
#line 889 "prog_io_type_defn.m"
          }
#line 898 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 890 "prog_io_type_defn.m"
          {
#line 890 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__RHSResult_13;

#line 890 "prog_io_type_defn.m"
            {
#line 890 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__RHSResult_13 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_2_f_0(parse_tree__prog_io_type_defn__RHS_10);
            }
#line 894 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
#line 896 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = (MR_Word) parse_tree__prog_io_type_defn__RHSResult_13;
#line 894 "prog_io_type_defn.m"
            else
#line 892 "prog_io_type_defn.m"
              {
#line 892 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RHSResult_13, (MR_Integer) 0)));
#line 892 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 893 "prog_io_type_defn.m"
                {
#line 893 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 893 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ParsedRHS_14));
#line 893 "prog_io_type_defn.m"
                }
#line 893 "prog_io_type_defn.m"
                {
#line 893 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 893 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 893 "prog_io_type_defn.m"
                }
#line 892 "prog_io_type_defn.m"
              }
#line 890 "prog_io_type_defn.m"
          }
#line 898 "prog_io_type_defn.m"
        else
#line 899 "prog_io_type_defn.m"
          {
#line 899 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[38]);
#line 899 "prog_io_type_defn.m"
          }
#line 898 "prog_io_type_defn.m"
      }
#line 901 "prog_io_type_defn.m"
    else
#line 902 "prog_io_type_defn.m"
      {
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 904 "prog_io_type_defn.m"
        {
#line 904 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 904 "prog_io_type_defn.m"
        {
#line 904 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[155])));
#line 904 "prog_io_type_defn.m"
        }
#line 904 "prog_io_type_defn.m"
        {
#line 904 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 904 "prog_io_type_defn.m"
        }
#line 903 "prog_io_type_defn.m"
        {
#line 903 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 903 "prog_io_type_defn.m"
        }
#line 905 "prog_io_type_defn.m"
        {
#line 905 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 905 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 905 "prog_io_type_defn.m"
        }
#line 905 "prog_io_type_defn.m"
        {
#line 905 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 905 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 905 "prog_io_type_defn.m"
        }
#line 902 "prog_io_type_defn.m"
      }
#line 901 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 901 "prog_io_type_defn.m"
  }
#line 884 "prog_io_type_defn.m"
}

#line 884 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_57_95_95_91_51_93_95_48_3_f_0(
#line 884 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 884 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 884 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 884 "prog_io_type_defn.m"
{
#line 901 "prog_io_type_defn.m"
  {
#line 901 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LHS_9;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RHS_10;
#line 888 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 888 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_19_19;
#line 888 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 888 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 888 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 888 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 888 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
      {
#line 888 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 888 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 888 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
          {
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_19_19, (MR_String) "is") == 0);
#line 888 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
              {
#line 888 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 888 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
                  {
#line 888 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 888 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 888 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
                      {
#line 888 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 888 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 888 "prog_io_type_defn.m"
                      }
#line 888 "prog_io_type_defn.m"
                  }
#line 888 "prog_io_type_defn.m"
              }
#line 888 "prog_io_type_defn.m"
          }
#line 888 "prog_io_type_defn.m"
      }
#line 901 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 898 "prog_io_type_defn.m"
      {
#line 889 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 889 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 889 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 889 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 889 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 889 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 889 "prog_io_type_defn.m"
          {
#line 889 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 0)));
#line 889 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 1)));
#line 889 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 2)));
#line 889 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 889 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 889 "prog_io_type_defn.m"
              {
#line 889 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 889 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 889 "prog_io_type_defn.m"
                  {
#line 889 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 889 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__Name_5, parse_tree__prog_io_type_defn__V_51_51) == 0);
#line 889 "prog_io_type_defn.m"
                  }
#line 889 "prog_io_type_defn.m"
              }
#line 889 "prog_io_type_defn.m"
          }
#line 898 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 890 "prog_io_type_defn.m"
          {
#line 890 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__RHSResult_13;

#line 890 "prog_io_type_defn.m"
            {
#line 890 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__RHSResult_13 = parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0(parse_tree__prog_io_type_defn__V_52_52, parse_tree__prog_io_type_defn__RHS_10);
            }
#line 894 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
#line 896 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = (MR_Word) parse_tree__prog_io_type_defn__RHSResult_13;
#line 894 "prog_io_type_defn.m"
            else
#line 892 "prog_io_type_defn.m"
              {
#line 892 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RHSResult_13, (MR_Integer) 0)));
#line 892 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 893 "prog_io_type_defn.m"
                {
#line 893 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 893 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ParsedRHS_14));
#line 893 "prog_io_type_defn.m"
                }
#line 893 "prog_io_type_defn.m"
                {
#line 893 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 893 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 893 "prog_io_type_defn.m"
                }
#line 892 "prog_io_type_defn.m"
              }
#line 890 "prog_io_type_defn.m"
          }
#line 898 "prog_io_type_defn.m"
        else
#line 899 "prog_io_type_defn.m"
          {
#line 899 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[37]);
#line 899 "prog_io_type_defn.m"
          }
#line 898 "prog_io_type_defn.m"
      }
#line 901 "prog_io_type_defn.m"
    else
#line 902 "prog_io_type_defn.m"
      {
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 904 "prog_io_type_defn.m"
        {
#line 904 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 904 "prog_io_type_defn.m"
        {
#line 904 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[155])));
#line 904 "prog_io_type_defn.m"
        }
#line 904 "prog_io_type_defn.m"
        {
#line 904 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 904 "prog_io_type_defn.m"
        }
#line 903 "prog_io_type_defn.m"
        {
#line 903 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 903 "prog_io_type_defn.m"
        }
#line 905 "prog_io_type_defn.m"
        {
#line 905 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 905 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 905 "prog_io_type_defn.m"
        }
#line 905 "prog_io_type_defn.m"
        {
#line 905 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 905 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 905 "prog_io_type_defn.m"
        }
#line 902 "prog_io_type_defn.m"
      }
#line 901 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 901 "prog_io_type_defn.m"
  }
#line 884 "prog_io_type_defn.m"
}

#line 884 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(
#line 884 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 884 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 884 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 884 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 884 "prog_io_type_defn.m"
{
#line 901 "prog_io_type_defn.m"
  {
#line 901 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LHS_9;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RHS_10;
#line 888 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 888 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_19_19;
#line 888 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 888 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 888 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 888 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 888 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
      {
#line 888 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 888 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 888 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
          {
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_19_19, (MR_String) "is") == 0);
#line 888 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
              {
#line 888 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 888 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
                  {
#line 888 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 888 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 888 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
                      {
#line 888 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 888 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 888 "prog_io_type_defn.m"
                      }
#line 888 "prog_io_type_defn.m"
                  }
#line 888 "prog_io_type_defn.m"
              }
#line 888 "prog_io_type_defn.m"
          }
#line 888 "prog_io_type_defn.m"
      }
#line 901 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 898 "prog_io_type_defn.m"
      {
#line 889 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 889 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 889 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 889 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 889 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 889 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 889 "prog_io_type_defn.m"
          {
#line 889 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 0)));
#line 889 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 1)));
#line 889 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 2)));
#line 889 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 889 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 889 "prog_io_type_defn.m"
              {
#line 889 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 889 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 889 "prog_io_type_defn.m"
                  {
#line 889 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 889 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__Name_5, parse_tree__prog_io_type_defn__V_51_51) == 0);
#line 889 "prog_io_type_defn.m"
                  }
#line 889 "prog_io_type_defn.m"
              }
#line 889 "prog_io_type_defn.m"
          }
#line 898 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 890 "prog_io_type_defn.m"
          {
#line 890 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__RHSResult_13;

#line 890 "prog_io_type_defn.m"
            {
#line 890 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__RHSResult_13 = parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0(parse_tree__prog_io_type_defn__V_52_52, parse_tree__prog_io_type_defn__V_53_53, parse_tree__prog_io_type_defn__RHS_10);
            }
#line 894 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
#line 896 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = (MR_Word) parse_tree__prog_io_type_defn__RHSResult_13;
#line 894 "prog_io_type_defn.m"
            else
#line 892 "prog_io_type_defn.m"
              {
#line 892 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RHSResult_13, (MR_Integer) 0)));
#line 892 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 893 "prog_io_type_defn.m"
                {
#line 893 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 893 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ParsedRHS_14));
#line 893 "prog_io_type_defn.m"
                }
#line 893 "prog_io_type_defn.m"
                {
#line 893 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 893 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 893 "prog_io_type_defn.m"
                }
#line 892 "prog_io_type_defn.m"
              }
#line 890 "prog_io_type_defn.m"
          }
#line 898 "prog_io_type_defn.m"
        else
#line 899 "prog_io_type_defn.m"
          {
#line 899 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[36]);
#line 899 "prog_io_type_defn.m"
          }
#line 898 "prog_io_type_defn.m"
      }
#line 901 "prog_io_type_defn.m"
    else
#line 902 "prog_io_type_defn.m"
      {
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 904 "prog_io_type_defn.m"
        {
#line 904 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 904 "prog_io_type_defn.m"
        {
#line 904 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[155])));
#line 904 "prog_io_type_defn.m"
        }
#line 904 "prog_io_type_defn.m"
        {
#line 904 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 904 "prog_io_type_defn.m"
        }
#line 903 "prog_io_type_defn.m"
        {
#line 903 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 903 "prog_io_type_defn.m"
        }
#line 905 "prog_io_type_defn.m"
        {
#line 905 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 905 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 905 "prog_io_type_defn.m"
        }
#line 905 "prog_io_type_defn.m"
        {
#line 905 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 905 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 905 "prog_io_type_defn.m"
        }
#line 902 "prog_io_type_defn.m"
      }
#line 901 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 901 "prog_io_type_defn.m"
  }
#line 884 "prog_io_type_defn.m"
}

#line 820 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_48_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(
#line 820 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 820 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 820 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_54,
#line 820 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_98)
#line 820 "prog_io_type_defn.m"
{
#line 820 "prog_io_type_defn.m"
  {
#line 820 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 820 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_99;

#line 820 "prog_io_type_defn.m"
    {
#line 820 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__4_99 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_104_104, parse_tree__prog_io_type_defn__V_105_105, parse_tree__prog_io_type_defn__HeadVar__1_54, parse_tree__prog_io_type_defn__HeadVar__3_98);
    }
#line 820 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_99;
#line 820 "prog_io_type_defn.m"
  }
#line 820 "prog_io_type_defn.m"
}

#line 811 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_49_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(
#line 811 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 811 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_42,
#line 811 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_82)
#line 811 "prog_io_type_defn.m"
{
#line 811 "prog_io_type_defn.m"
  {
#line 811 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 811 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_83;

#line 811 "prog_io_type_defn.m"
    {
#line 811 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__4_83 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_57_95_95_91_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_104_104, parse_tree__prog_io_type_defn__HeadVar__1_42, parse_tree__prog_io_type_defn__HeadVar__3_82);
    }
#line 811 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_83;
#line 811 "prog_io_type_defn.m"
  }
#line 811 "prog_io_type_defn.m"
}

#line 808 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_48_56_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 808 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_38,
#line 808 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_77)
#line 808 "prog_io_type_defn.m"
{
#line 808 "prog_io_type_defn.m"
  {
#line 808 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 808 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_78;

#line 808 "prog_io_type_defn.m"
    {
#line 808 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__4_78 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__HeadVar__1_38, parse_tree__prog_io_type_defn__HeadVar__3_77);
    }
#line 808 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_78;
#line 808 "prog_io_type_defn.m"
  }
#line 808 "prog_io_type_defn.m"
}

#line 805 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_48_53_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 805 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_34,
#line 805 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_71)
#line 805 "prog_io_type_defn.m"
{
#line 805 "prog_io_type_defn.m"
  {
#line 805 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 805 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_72;

#line 805 "prog_io_type_defn.m"
    {
#line 805 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__4_72 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__HeadVar__1_34, parse_tree__prog_io_type_defn__HeadVar__3_71);
    }
#line 805 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_72;
#line 805 "prog_io_type_defn.m"
  }
#line 805 "prog_io_type_defn.m"
}

#line 817 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_55_95_95_49_95_95_104_111_49_51_95_95_91_52_93_95_48_3_f_0(
#line 817 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 817 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 817 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_50,
#line 817 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_93)
#line 817 "prog_io_type_defn.m"
{
#line 817 "prog_io_type_defn.m"
  {
#line 817 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 817 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_94;

#line 817 "prog_io_type_defn.m"
    {
#line 817 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__4_94 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_104_104, parse_tree__prog_io_type_defn__V_105_105, parse_tree__prog_io_type_defn__HeadVar__1_50, parse_tree__prog_io_type_defn__HeadVar__3_93);
    }
#line 817 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_94;
#line 817 "prog_io_type_defn.m"
  }
#line 817 "prog_io_type_defn.m"
}

#line 814 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_52_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(
#line 814 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 814 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 814 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_46,
#line 814 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_88)
#line 814 "prog_io_type_defn.m"
{
#line 814 "prog_io_type_defn.m"
  {
#line 814 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 814 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_89;

#line 814 "prog_io_type_defn.m"
    {
#line 814 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__4_89 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_104_104, parse_tree__prog_io_type_defn__V_105_105, parse_tree__prog_io_type_defn__HeadVar__1_46, parse_tree__prog_io_type_defn__HeadVar__3_88);
    }
#line 814 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_89;
#line 814 "prog_io_type_defn.m"
  }
#line 814 "prog_io_type_defn.m"
}

#line 799 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_55_57_57_95_95_49_95_95_104_111_49_49_95_95_91_49_44_32_52_93_95_48_3_f_0(
#line 799 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 799 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_28,
#line 799 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_62)
#line 799 "prog_io_type_defn.m"
{
#line 799 "prog_io_type_defn.m"
  {
#line 799 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 799 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_63;

#line 799 "prog_io_type_defn.m"
    {
#line 799 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__4_63 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_49_44_32_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_105_105, parse_tree__prog_io_type_defn__HeadVar__1_28, parse_tree__prog_io_type_defn__HeadVar__3_62);
    }
#line 799 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_63;
#line 799 "prog_io_type_defn.m"
  }
#line 799 "prog_io_type_defn.m"
}

#line 850 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0(
#line 850 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 850 "prog_io_type_defn.m"
{
#line 858 "prog_io_type_defn.m"
  {
#line 858 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 858 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 855 "prog_io_type_defn.m"
      {
#line 856 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 857 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[39]);
#line 855 "prog_io_type_defn.m"
      }
#line 858 "prog_io_type_defn.m"
    else
#line 859 "prog_io_type_defn.m"
      {
#line 859 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 859 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 865 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 865 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 861 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 861 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
          {
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
              {
#line 861 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 861 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
                  {
#line 861 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
                      {
#line 861 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
                          {
#line 861 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 861 "prog_io_type_defn.m"
                          }
#line 861 "prog_io_type_defn.m"
                      }
#line 861 "prog_io_type_defn.m"
                  }
#line 861 "prog_io_type_defn.m"
              }
#line 861 "prog_io_type_defn.m"
          }
#line 865 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 863 "prog_io_type_defn.m"
          {
#line 863 "prog_io_type_defn.m"
            {
#line 863 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_55_57_57_95_95_49_95_95_104_111_49_49_95_95_91_49_44_32_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 864 "prog_io_type_defn.m"
            {
#line 864 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 864 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 864 "prog_io_type_defn.m"
            }
#line 863 "prog_io_type_defn.m"
          }
#line 865 "prog_io_type_defn.m"
        else
#line 866 "prog_io_type_defn.m"
          {
#line 866 "prog_io_type_defn.m"
            {
#line 866 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_55_57_57_95_95_49_95_95_104_111_49_49_95_95_91_49_44_32_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 867 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "prog_io_type_defn.m"
          }
#line 872 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 871 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 872 "prog_io_type_defn.m"
        else
#line 872 "prog_io_type_defn.m"
          {
#line 872 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 872 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 874 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 872 "prog_io_type_defn.m"
            else
#line 877 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 872 "prog_io_type_defn.m"
          }
#line 859 "prog_io_type_defn.m"
      }
#line 858 "prog_io_type_defn.m"
  }
#line 850 "prog_io_type_defn.m"
}

#line 850 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_56_95_95_91_51_93_95_48_4_p_0(
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_26_26,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_27_27,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 850 "prog_io_type_defn.m"
{
#line 858 "prog_io_type_defn.m"
  {
#line 858 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 858 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 855 "prog_io_type_defn.m"
      {
#line 856 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 857 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[34]);
#line 855 "prog_io_type_defn.m"
      }
#line 858 "prog_io_type_defn.m"
    else
#line 859 "prog_io_type_defn.m"
      {
#line 859 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 859 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 865 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 865 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 861 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 861 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
          {
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
              {
#line 861 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 861 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
                  {
#line 861 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
                      {
#line 861 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
                          {
#line 861 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 861 "prog_io_type_defn.m"
                          }
#line 861 "prog_io_type_defn.m"
                      }
#line 861 "prog_io_type_defn.m"
                  }
#line 861 "prog_io_type_defn.m"
              }
#line 861 "prog_io_type_defn.m"
          }
#line 865 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 863 "prog_io_type_defn.m"
          {
#line 863 "prog_io_type_defn.m"
            {
#line 863 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__parse_where_initialisation_is_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__V_27_27, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 864 "prog_io_type_defn.m"
            {
#line 864 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 864 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 864 "prog_io_type_defn.m"
            }
#line 863 "prog_io_type_defn.m"
          }
#line 865 "prog_io_type_defn.m"
        else
#line 866 "prog_io_type_defn.m"
          {
#line 866 "prog_io_type_defn.m"
            {
#line 866 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__parse_where_initialisation_is_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__V_27_27, parse_tree__prog_io_type_defn__Term_9);
            }
#line 867 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "prog_io_type_defn.m"
          }
#line 872 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 871 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 872 "prog_io_type_defn.m"
        else
#line 872 "prog_io_type_defn.m"
          {
#line 872 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 872 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 874 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 872 "prog_io_type_defn.m"
            else
#line 877 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 872 "prog_io_type_defn.m"
          }
#line 859 "prog_io_type_defn.m"
      }
#line 858 "prog_io_type_defn.m"
  }
#line 850 "prog_io_type_defn.m"
}

#line 850 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 850 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 850 "prog_io_type_defn.m"
{
#line 858 "prog_io_type_defn.m"
  {
#line 858 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 858 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 855 "prog_io_type_defn.m"
      {
#line 856 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 857 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[34]);
#line 855 "prog_io_type_defn.m"
      }
#line 858 "prog_io_type_defn.m"
    else
#line 859 "prog_io_type_defn.m"
      {
#line 859 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 859 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 865 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 865 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 861 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 861 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
          {
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
              {
#line 861 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 861 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
                  {
#line 861 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
                      {
#line 861 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
                          {
#line 861 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 861 "prog_io_type_defn.m"
                          }
#line 861 "prog_io_type_defn.m"
                      }
#line 861 "prog_io_type_defn.m"
                  }
#line 861 "prog_io_type_defn.m"
              }
#line 861 "prog_io_type_defn.m"
          }
#line 865 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 863 "prog_io_type_defn.m"
          {
#line 863 "prog_io_type_defn.m"
            {
#line 863 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_52_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 864 "prog_io_type_defn.m"
            {
#line 864 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 864 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 864 "prog_io_type_defn.m"
            }
#line 863 "prog_io_type_defn.m"
          }
#line 865 "prog_io_type_defn.m"
        else
#line 866 "prog_io_type_defn.m"
          {
#line 866 "prog_io_type_defn.m"
            {
#line 866 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_52_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 867 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "prog_io_type_defn.m"
          }
#line 872 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 871 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 872 "prog_io_type_defn.m"
        else
#line 872 "prog_io_type_defn.m"
          {
#line 872 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 872 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 874 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 872 "prog_io_type_defn.m"
            else
#line 877 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 872 "prog_io_type_defn.m"
          }
#line 859 "prog_io_type_defn.m"
      }
#line 858 "prog_io_type_defn.m"
  }
#line 850 "prog_io_type_defn.m"
}

#line 850 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_54_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 850 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 850 "prog_io_type_defn.m"
{
#line 858 "prog_io_type_defn.m"
  {
#line 858 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 858 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 855 "prog_io_type_defn.m"
      {
#line 856 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 857 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[34]);
#line 855 "prog_io_type_defn.m"
      }
#line 858 "prog_io_type_defn.m"
    else
#line 859 "prog_io_type_defn.m"
      {
#line 859 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 859 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 865 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 865 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 861 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 861 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
          {
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
              {
#line 861 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 861 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
                  {
#line 861 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
                      {
#line 861 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
                          {
#line 861 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 861 "prog_io_type_defn.m"
                          }
#line 861 "prog_io_type_defn.m"
                      }
#line 861 "prog_io_type_defn.m"
                  }
#line 861 "prog_io_type_defn.m"
              }
#line 861 "prog_io_type_defn.m"
          }
#line 865 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 863 "prog_io_type_defn.m"
          {
#line 863 "prog_io_type_defn.m"
            {
#line 863 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_55_95_95_49_95_95_104_111_49_51_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 864 "prog_io_type_defn.m"
            {
#line 864 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 864 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 864 "prog_io_type_defn.m"
            }
#line 863 "prog_io_type_defn.m"
          }
#line 865 "prog_io_type_defn.m"
        else
#line 866 "prog_io_type_defn.m"
          {
#line 866 "prog_io_type_defn.m"
            {
#line 866 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_55_95_95_49_95_95_104_111_49_51_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 867 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "prog_io_type_defn.m"
          }
#line 872 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 871 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 872 "prog_io_type_defn.m"
        else
#line 872 "prog_io_type_defn.m"
          {
#line 872 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 872 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 874 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 872 "prog_io_type_defn.m"
            else
#line 877 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 872 "prog_io_type_defn.m"
          }
#line 859 "prog_io_type_defn.m"
      }
#line 858 "prog_io_type_defn.m"
  }
#line 850 "prog_io_type_defn.m"
}

#line 850 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0(
#line 850 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 850 "prog_io_type_defn.m"
{
#line 858 "prog_io_type_defn.m"
  {
#line 858 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 858 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 855 "prog_io_type_defn.m"
      {
#line 856 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 857 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[38]);
#line 855 "prog_io_type_defn.m"
      }
#line 858 "prog_io_type_defn.m"
    else
#line 859 "prog_io_type_defn.m"
      {
#line 859 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 859 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 865 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 865 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 861 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 861 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
          {
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
              {
#line 861 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 861 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
                  {
#line 861 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
                      {
#line 861 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
                          {
#line 861 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 861 "prog_io_type_defn.m"
                          }
#line 861 "prog_io_type_defn.m"
                      }
#line 861 "prog_io_type_defn.m"
                  }
#line 861 "prog_io_type_defn.m"
              }
#line 861 "prog_io_type_defn.m"
          }
#line 865 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 863 "prog_io_type_defn.m"
          {
#line 863 "prog_io_type_defn.m"
            {
#line 863 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_48_53_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 864 "prog_io_type_defn.m"
            {
#line 864 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 864 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 864 "prog_io_type_defn.m"
            }
#line 863 "prog_io_type_defn.m"
          }
#line 865 "prog_io_type_defn.m"
        else
#line 866 "prog_io_type_defn.m"
          {
#line 866 "prog_io_type_defn.m"
            {
#line 866 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_48_53_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 867 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "prog_io_type_defn.m"
          }
#line 872 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 871 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 872 "prog_io_type_defn.m"
        else
#line 872 "prog_io_type_defn.m"
          {
#line 872 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 872 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 874 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 872 "prog_io_type_defn.m"
            else
#line 877 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 872 "prog_io_type_defn.m"
          }
#line 859 "prog_io_type_defn.m"
      }
#line 858 "prog_io_type_defn.m"
  }
#line 850 "prog_io_type_defn.m"
}

#line 850 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0(
#line 850 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 850 "prog_io_type_defn.m"
{
#line 858 "prog_io_type_defn.m"
  {
#line 858 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 858 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 855 "prog_io_type_defn.m"
      {
#line 856 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 857 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[38]);
#line 855 "prog_io_type_defn.m"
      }
#line 858 "prog_io_type_defn.m"
    else
#line 859 "prog_io_type_defn.m"
      {
#line 859 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 859 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 865 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 865 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 861 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 861 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
          {
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
              {
#line 861 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 861 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
                  {
#line 861 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
                      {
#line 861 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
                          {
#line 861 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 861 "prog_io_type_defn.m"
                          }
#line 861 "prog_io_type_defn.m"
                      }
#line 861 "prog_io_type_defn.m"
                  }
#line 861 "prog_io_type_defn.m"
              }
#line 861 "prog_io_type_defn.m"
          }
#line 865 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 863 "prog_io_type_defn.m"
          {
#line 863 "prog_io_type_defn.m"
            {
#line 863 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_48_56_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 864 "prog_io_type_defn.m"
            {
#line 864 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 864 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 864 "prog_io_type_defn.m"
            }
#line 863 "prog_io_type_defn.m"
          }
#line 865 "prog_io_type_defn.m"
        else
#line 866 "prog_io_type_defn.m"
          {
#line 866 "prog_io_type_defn.m"
            {
#line 866 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_48_56_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 867 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "prog_io_type_defn.m"
          }
#line 872 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 871 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 872 "prog_io_type_defn.m"
        else
#line 872 "prog_io_type_defn.m"
          {
#line 872 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 872 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 874 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 872 "prog_io_type_defn.m"
            else
#line 877 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 872 "prog_io_type_defn.m"
          }
#line 859 "prog_io_type_defn.m"
      }
#line 858 "prog_io_type_defn.m"
  }
#line 850 "prog_io_type_defn.m"
}

#line 850 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_52_93_95_48_4_p_0(
#line 850 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 850 "prog_io_type_defn.m"
{
#line 858 "prog_io_type_defn.m"
  {
#line 858 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 858 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 855 "prog_io_type_defn.m"
      {
#line 856 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 857 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[37]);
#line 855 "prog_io_type_defn.m"
      }
#line 858 "prog_io_type_defn.m"
    else
#line 859 "prog_io_type_defn.m"
      {
#line 859 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 859 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 865 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 865 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 861 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 861 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
          {
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
              {
#line 861 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 861 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
                  {
#line 861 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
                      {
#line 861 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
                          {
#line 861 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 861 "prog_io_type_defn.m"
                          }
#line 861 "prog_io_type_defn.m"
                      }
#line 861 "prog_io_type_defn.m"
                  }
#line 861 "prog_io_type_defn.m"
              }
#line 861 "prog_io_type_defn.m"
          }
#line 865 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 863 "prog_io_type_defn.m"
          {
#line 863 "prog_io_type_defn.m"
            {
#line 863 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_49_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 864 "prog_io_type_defn.m"
            {
#line 864 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 864 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 864 "prog_io_type_defn.m"
            }
#line 863 "prog_io_type_defn.m"
          }
#line 865 "prog_io_type_defn.m"
        else
#line 866 "prog_io_type_defn.m"
          {
#line 866 "prog_io_type_defn.m"
            {
#line 866 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_49_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 867 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "prog_io_type_defn.m"
          }
#line 872 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 871 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 872 "prog_io_type_defn.m"
        else
#line 872 "prog_io_type_defn.m"
          {
#line 872 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 872 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 874 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 872 "prog_io_type_defn.m"
            else
#line 877 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 872 "prog_io_type_defn.m"
          }
#line 859 "prog_io_type_defn.m"
      }
#line 858 "prog_io_type_defn.m"
  }
#line 850 "prog_io_type_defn.m"
}

#line 850 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 850 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 850 "prog_io_type_defn.m"
{
#line 858 "prog_io_type_defn.m"
  {
#line 858 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 858 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 855 "prog_io_type_defn.m"
      {
#line 856 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 857 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[36]);
#line 855 "prog_io_type_defn.m"
      }
#line 858 "prog_io_type_defn.m"
    else
#line 859 "prog_io_type_defn.m"
      {
#line 859 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 859 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 865 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 865 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 861 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 861 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
          {
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
              {
#line 861 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 861 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
                  {
#line 861 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
                      {
#line 861 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
                          {
#line 861 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 861 "prog_io_type_defn.m"
                          }
#line 861 "prog_io_type_defn.m"
                      }
#line 861 "prog_io_type_defn.m"
                  }
#line 861 "prog_io_type_defn.m"
              }
#line 861 "prog_io_type_defn.m"
          }
#line 865 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 863 "prog_io_type_defn.m"
          {
#line 863 "prog_io_type_defn.m"
            {
#line 863 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_48_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 864 "prog_io_type_defn.m"
            {
#line 864 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 864 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 864 "prog_io_type_defn.m"
            }
#line 863 "prog_io_type_defn.m"
          }
#line 865 "prog_io_type_defn.m"
        else
#line 866 "prog_io_type_defn.m"
          {
#line 866 "prog_io_type_defn.m"
            {
#line 866 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_48_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 867 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "prog_io_type_defn.m"
          }
#line 872 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 871 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 872 "prog_io_type_defn.m"
        else
#line 872 "prog_io_type_defn.m"
          {
#line 872 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 872 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 874 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 872 "prog_io_type_defn.m"
            else
#line 877 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 872 "prog_io_type_defn.m"
          }
#line 859 "prog_io_type_defn.m"
      }
#line 858 "prog_io_type_defn.m"
  }
#line 850 "prog_io_type_defn.m"
}

#line 884 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(
#line 884 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 884 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 884 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 884 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 884 "prog_io_type_defn.m"
{
#line 901 "prog_io_type_defn.m"
  {
#line 901 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LHS_9;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RHS_10;
#line 888 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 888 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_19_19;
#line 888 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 888 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 888 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 888 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 888 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
      {
#line 888 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 888 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 888 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
          {
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_19_19, (MR_String) "is") == 0);
#line 888 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
              {
#line 888 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 888 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
                  {
#line 888 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 888 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 888 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
                      {
#line 888 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 888 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 888 "prog_io_type_defn.m"
                      }
#line 888 "prog_io_type_defn.m"
                  }
#line 888 "prog_io_type_defn.m"
              }
#line 888 "prog_io_type_defn.m"
          }
#line 888 "prog_io_type_defn.m"
      }
#line 901 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 898 "prog_io_type_defn.m"
      {
#line 889 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 889 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 889 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 889 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 889 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 889 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 889 "prog_io_type_defn.m"
          {
#line 889 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 0)));
#line 889 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 1)));
#line 889 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 2)));
#line 889 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 889 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 889 "prog_io_type_defn.m"
              {
#line 889 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 889 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 889 "prog_io_type_defn.m"
                  {
#line 889 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 889 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__Name_5, parse_tree__prog_io_type_defn__V_51_51) == 0);
#line 889 "prog_io_type_defn.m"
                  }
#line 889 "prog_io_type_defn.m"
              }
#line 889 "prog_io_type_defn.m"
          }
#line 898 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 890 "prog_io_type_defn.m"
          {
#line 890 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__RHSResult_13;

#line 958 "prog_io_type_defn.m"
            {
#line 958 "prog_io_type_defn.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(parse_tree__prog_io_type_defn__V_52_52, parse_tree__prog_io_type_defn__V_53_53, parse_tree__prog_io_type_defn__RHS_10, &parse_tree__prog_io_type_defn__RHSResult_13);
            }
#line 894 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
#line 896 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = (MR_Word) parse_tree__prog_io_type_defn__RHSResult_13;
#line 894 "prog_io_type_defn.m"
            else
#line 892 "prog_io_type_defn.m"
              {
#line 892 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RHSResult_13, (MR_Integer) 0)));
#line 892 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 893 "prog_io_type_defn.m"
                {
#line 893 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 893 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ParsedRHS_14));
#line 893 "prog_io_type_defn.m"
                }
#line 893 "prog_io_type_defn.m"
                {
#line 893 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 893 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 893 "prog_io_type_defn.m"
                }
#line 892 "prog_io_type_defn.m"
              }
#line 890 "prog_io_type_defn.m"
          }
#line 898 "prog_io_type_defn.m"
        else
#line 899 "prog_io_type_defn.m"
          {
#line 899 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[34]);
#line 899 "prog_io_type_defn.m"
          }
#line 898 "prog_io_type_defn.m"
      }
#line 901 "prog_io_type_defn.m"
    else
#line 902 "prog_io_type_defn.m"
      {
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 904 "prog_io_type_defn.m"
        {
#line 904 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 904 "prog_io_type_defn.m"
        {
#line 904 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[155])));
#line 904 "prog_io_type_defn.m"
        }
#line 904 "prog_io_type_defn.m"
        {
#line 904 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 904 "prog_io_type_defn.m"
        }
#line 903 "prog_io_type_defn.m"
        {
#line 903 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 903 "prog_io_type_defn.m"
        }
#line 905 "prog_io_type_defn.m"
        {
#line 905 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 905 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 905 "prog_io_type_defn.m"
        }
#line 905 "prog_io_type_defn.m"
        {
#line 905 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 905 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 905 "prog_io_type_defn.m"
        }
#line 902 "prog_io_type_defn.m"
      }
#line 901 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 901 "prog_io_type_defn.m"
  }
#line 884 "prog_io_type_defn.m"
}

#line 1111 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_109_97_121_98_101_95_119_104_101_114_101_95_100_101_116_97_105_108_115_95_50_95_95_91_49_49_93_95_48_12_f_0(
#line 1111 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_14,
#line 1111 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_15,
#line 1111 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__RepresentationIs_16,
#line 1111 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__InitialisationIs_17,
#line 1111 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__GroundIs_18,
#line 1111 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__AnyIs_19,
#line 1111 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__CStoreIs_20,
#line 1111 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__EqualityIs_21,
#line 1111 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ComparisonIs_22,
#line 1111 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__DirectArgIs_23,
#line 1111 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__WhereTerm_25)
#line 1111 "prog_io_type_defn.m"
{
#line 1124 "prog_io_type_defn.m"
  {
#line 1124 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 1124 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeWhereDetails_26;

#line 1124 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1222 "prog_io_type_defn.m"
      if ((parse_tree__prog_io_type_defn__IsSolverType_14 == (MR_Integer) 0))
#line 1238 "prog_io_type_defn.m"
        {
#line 1225 "prog_io_type_defn.m"
          {
#line 1225 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_46_46;

#line 1225 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RepresentationIs_16)) == (MR_mktag((MR_Integer) 1)));
#line 1225 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1225 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RepresentationIs_16, (MR_Integer) 0)));
#line 1225 "prog_io_type_defn.m"
          }
#line 1226 "prog_io_type_defn.m"
          if (!(parse_tree__prog_io_type_defn__succeeded))
#line 1226 "prog_io_type_defn.m"
            {
#line 1226 "prog_io_type_defn.m"
              {
#line 1226 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 1226 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__InitialisationIs_17)) == (MR_mktag((MR_Integer) 1)));
#line 1226 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1226 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__InitialisationIs_17, (MR_Integer) 0)));
#line 1226 "prog_io_type_defn.m"
              }
#line 1226 "prog_io_type_defn.m"
              if (!(parse_tree__prog_io_type_defn__succeeded))
#line 1226 "prog_io_type_defn.m"
                {
#line 1227 "prog_io_type_defn.m"
                  {
#line 1227 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_48_48;

#line 1227 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__GroundIs_18)) == (MR_mktag((MR_Integer) 1)));
#line 1227 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1227 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__GroundIs_18, (MR_Integer) 0)));
#line 1227 "prog_io_type_defn.m"
                  }
#line 1226 "prog_io_type_defn.m"
                  if (!(parse_tree__prog_io_type_defn__succeeded))
#line 1226 "prog_io_type_defn.m"
                    {
#line 1228 "prog_io_type_defn.m"
                      {
#line 1228 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_49_49;

#line 1228 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__AnyIs_19)) == (MR_mktag((MR_Integer) 1)));
#line 1228 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 1228 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__AnyIs_19, (MR_Integer) 0)));
#line 1228 "prog_io_type_defn.m"
                      }
#line 1226 "prog_io_type_defn.m"
                      if (!(parse_tree__prog_io_type_defn__succeeded))
#line 1229 "prog_io_type_defn.m"
                        {
#line 1229 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_50_50;

#line 1229 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__CStoreIs_20)) == (MR_mktag((MR_Integer) 1)));
#line 1229 "prog_io_type_defn.m"
                          if (parse_tree__prog_io_type_defn__succeeded)
#line 1229 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__CStoreIs_20, (MR_Integer) 0)));
#line 1229 "prog_io_type_defn.m"
                        }
#line 1226 "prog_io_type_defn.m"
                    }
#line 1226 "prog_io_type_defn.m"
                }
#line 1226 "prog_io_type_defn.m"
            }
#line 1238 "prog_io_type_defn.m"
          if (parse_tree__prog_io_type_defn__succeeded)
#line 1233 "prog_io_type_defn.m"
            {
#line 1233 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__V_62_62;
#line 1233 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__V_63_63;
#line 1233 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__V_64_64;
#line 1233 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__V_69_69;
#line 1233 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__Spec_168;

#line 1235 "prog_io_type_defn.m"
              {
#line 1235 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_64_64 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__WhereTerm_25);
              }
#line 1235 "prog_io_type_defn.m"
              {
#line 1235 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1235 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_64_64));
#line 1235 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[151])));
#line 1235 "prog_io_type_defn.m"
              }
#line 1236 "prog_io_type_defn.m"
              {
#line 1236 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_63_63));
#line 1236 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1236 "prog_io_type_defn.m"
              }
#line 1234 "prog_io_type_defn.m"
              {
#line 1234 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__Spec_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1234 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_168, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1234 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_168, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1234 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_168, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_62_62));
#line 1234 "prog_io_type_defn.m"
              }
#line 1237 "prog_io_type_defn.m"
              {
#line 1237 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1237 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_168));
#line 1237 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1237 "prog_io_type_defn.m"
              }
#line 1237 "prog_io_type_defn.m"
              {
#line 1237 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1237 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_69_69));
#line 1237 "prog_io_type_defn.m"
              }
#line 1233 "prog_io_type_defn.m"
            }
#line 1238 "prog_io_type_defn.m"
          else
#line 1239 "prog_io_type_defn.m"
            {
#line 1239 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__MaybeUC_51;

#line 1239 "prog_io_type_defn.m"
              {
#line 1239 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__MaybeUC_51 = parse_tree__prog_io_type_defn__maybe_unify_compare_2_f_0(parse_tree__prog_io_type_defn__EqualityIs_21, parse_tree__prog_io_type_defn__ComparisonIs_22);
              }
#line 1240 "prog_io_type_defn.m"
              {
#line 1240 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1240 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1240 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeUC_51));
#line 1240 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__DirectArgIs_23));
#line 1240 "prog_io_type_defn.m"
              }
#line 1239 "prog_io_type_defn.m"
            }
#line 1238 "prog_io_type_defn.m"
        }
#line 1222 "prog_io_type_defn.m"
      else
#line 1161 "prog_io_type_defn.m"
        {
#line 1153 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_30_30;

#line 1153 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__DirectArgIs_23)) == (MR_mktag((MR_Integer) 1)));
#line 1153 "prog_io_type_defn.m"
          if (parse_tree__prog_io_type_defn__succeeded)
#line 1153 "prog_io_type_defn.m"
            {
#line 1153 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__DirectArgIs_23, (MR_Integer) 0)));
#line 1156 "prog_io_type_defn.m"
              {
#line 1156 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_85_85;
#line 1156 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_86_86;
#line 1156 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_87_87;
#line 1156 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_92_92;
#line 1156 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_156;

#line 1158 "prog_io_type_defn.m"
                {
#line 1158 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_87_87 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__WhereTerm_25);
                }
#line 1158 "prog_io_type_defn.m"
                {
#line 1158 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1158 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_87_87));
#line 1158 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[152])));
#line 1158 "prog_io_type_defn.m"
                }
#line 1159 "prog_io_type_defn.m"
                {
#line 1159 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1159 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_86_86));
#line 1159 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1159 "prog_io_type_defn.m"
                }
#line 1157 "prog_io_type_defn.m"
                {
#line 1157 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1157 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_156, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1157 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1157 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_156, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_85_85));
#line 1157 "prog_io_type_defn.m"
                }
#line 1160 "prog_io_type_defn.m"
                {
#line 1160 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1160 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_92_92, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_156));
#line 1160 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1160 "prog_io_type_defn.m"
                }
#line 1160 "prog_io_type_defn.m"
                {
#line 1160 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1160 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_92_92));
#line 1160 "prog_io_type_defn.m"
                }
#line 1156 "prog_io_type_defn.m"
              }
#line 1153 "prog_io_type_defn.m"
            }
#line 1153 "prog_io_type_defn.m"
          else
#line 1209 "prog_io_type_defn.m"
            {
#line 1209 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__RepnType_31;
#line 1209 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__MaybeInitialisation_32;
#line 1209 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__MaybeGroundInst_33;
#line 1209 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__MaybeAnyInst_34;
#line 1209 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__MaybeEqPred_35;
#line 1209 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__MaybeCmpPred_36;
#line 1209 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__MaybeMutableInfos_37;

#line 1162 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RepresentationIs_16)) == (MR_mktag((MR_Integer) 1)));
#line 1162 "prog_io_type_defn.m"
              if (parse_tree__prog_io_type_defn__succeeded)
#line 1162 "prog_io_type_defn.m"
                {
#line 1162 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__RepnType_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RepresentationIs_16, (MR_Integer) 0)));
#line 1163 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeInitialisation_32 = parse_tree__prog_io_type_defn__InitialisationIs_17;
#line 1164 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeGroundInst_33 = parse_tree__prog_io_type_defn__GroundIs_18;
#line 1165 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeAnyInst_34 = parse_tree__prog_io_type_defn__AnyIs_19;
#line 1166 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeEqPred_35 = parse_tree__prog_io_type_defn__EqualityIs_21;
#line 1167 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeCmpPred_36 = parse_tree__prog_io_type_defn__ComparisonIs_22;
#line 1168 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeMutableInfos_37 = parse_tree__prog_io_type_defn__CStoreIs_20;
#line 1168 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__succeeded = MR_TRUE;
#line 1162 "prog_io_type_defn.m"
                }
#line 1209 "prog_io_type_defn.m"
              if (parse_tree__prog_io_type_defn__succeeded)
#line 1175 "prog_io_type_defn.m"
                {
#line 1175 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__GroundInst_38;
#line 1175 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__AnyInst_39;
#line 1175 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__MutableInfos_40;
#line 1175 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__HowToInit_42;
#line 1175 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__SolverTypeDetails_43;
#line 1175 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_44;
#line 1175 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__MaybeUnifyCompare_45;

#line 1172 "prog_io_type_defn.m"
                  if ((parse_tree__prog_io_type_defn__MaybeGroundInst_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1174 "prog_io_type_defn.m"
                    {
#line 1174 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__GroundInst_38 = parse_tree__prog_mode__ground_inst_0_f_0();
                    }
#line 1172 "prog_io_type_defn.m"
                  else
#line 1171 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__GroundInst_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeGroundInst_33, (MR_Integer) 0)));
#line 1178 "prog_io_type_defn.m"
                  if ((parse_tree__prog_io_type_defn__MaybeAnyInst_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1180 "prog_io_type_defn.m"
                    {
#line 1180 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__AnyInst_39 = parse_tree__prog_mode__ground_inst_0_f_0();
                    }
#line 1178 "prog_io_type_defn.m"
                  else
#line 1177 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__AnyInst_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeAnyInst_34, (MR_Integer) 0)));
#line 1184 "prog_io_type_defn.m"
                  if ((parse_tree__prog_io_type_defn__MaybeMutableInfos_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1186 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MutableInfos_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1184 "prog_io_type_defn.m"
                  else
#line 1183 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MutableInfos_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeMutableInfos_37, (MR_Integer) 0)));
#line 1191 "prog_io_type_defn.m"
                  if ((parse_tree__prog_io_type_defn__MaybeInitialisation_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1193 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__HowToInit_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1191 "prog_io_type_defn.m"
                  else
#line 1189 "prog_io_type_defn.m"
                    {
#line 1189 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__InitPred_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeInitialisation_32, (MR_Integer) 0)));

#line 1190 "prog_io_type_defn.m"
                      {
#line 1190 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HowToInit_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1190 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HowToInit_42, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__InitPred_41));
#line 1190 "prog_io_type_defn.m"
                      }
#line 1189 "prog_io_type_defn.m"
                    }
#line 1195 "prog_io_type_defn.m"
                  {
#line 1195 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__SolverTypeDetails_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1195 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails_43, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__RepnType_31));
#line 1195 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails_43, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__HowToInit_42));
#line 1195 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails_43, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__GroundInst_38));
#line 1195 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails_43, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__AnyInst_39));
#line 1195 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails_43, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__MutableInfos_40));
#line 1195 "prog_io_type_defn.m"
                  }
#line 1197 "prog_io_type_defn.m"
                  {
#line 1197 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1197 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_44, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__SolverTypeDetails_43));
#line 1197 "prog_io_type_defn.m"
                  }
#line 1199 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__MaybeEqPred_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1199 "prog_io_type_defn.m"
                  if (parse_tree__prog_io_type_defn__succeeded)
#line 1200 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__MaybeCmpPred_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1203 "prog_io_type_defn.m"
                  if (parse_tree__prog_io_type_defn__succeeded)
#line 1202 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeUnifyCompare_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1203 "prog_io_type_defn.m"
                  else
#line 1204 "prog_io_type_defn.m"
                    {
#line 1204 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__V_94_94;

#line 1204 "prog_io_type_defn.m"
                      {
#line 1204 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1204 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_94_94, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeEqPred_35));
#line 1204 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_94_94, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeCmpPred_36));
#line 1204 "prog_io_type_defn.m"
                      }
#line 1204 "prog_io_type_defn.m"
                      {
#line 1204 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__MaybeUnifyCompare_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1204 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeUnifyCompare_45, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_94_94));
#line 1204 "prog_io_type_defn.m"
                      }
#line 1204 "prog_io_type_defn.m"
                    }
#line 1207 "prog_io_type_defn.m"
                  {
#line 1207 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1207 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_44));
#line 1207 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeUnifyCompare_45));
#line 1207 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1207 "prog_io_type_defn.m"
                  }
#line 1175 "prog_io_type_defn.m"
                }
#line 1209 "prog_io_type_defn.m"
              else
#line 1218 "prog_io_type_defn.m"
                {
#line 1210 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__RepresentationIs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1218 "prog_io_type_defn.m"
                  if (parse_tree__prog_io_type_defn__succeeded)
#line 1213 "prog_io_type_defn.m"
                    {
#line 1213 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__V_109_109;
#line 1213 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__V_110_110;
#line 1213 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__V_111_111;
#line 1213 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__V_116_116;
#line 1213 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__Spec_158;

#line 1215 "prog_io_type_defn.m"
                      {
#line 1215 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_111_111 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__WhereTerm_25);
                      }
#line 1215 "prog_io_type_defn.m"
                      {
#line 1215 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1215 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_110_110, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_111_111));
#line 1215 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[153])));
#line 1215 "prog_io_type_defn.m"
                      }
#line 1216 "prog_io_type_defn.m"
                      {
#line 1216 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1216 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_109_109, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_110_110));
#line 1216 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1216 "prog_io_type_defn.m"
                      }
#line 1214 "prog_io_type_defn.m"
                      {
#line 1214 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__Spec_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1214 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_158, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1214 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1214 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_158, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_109_109));
#line 1214 "prog_io_type_defn.m"
                      }
#line 1217 "prog_io_type_defn.m"
                      {
#line 1217 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1217 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_116_116, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_158));
#line 1217 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1217 "prog_io_type_defn.m"
                      }
#line 1217 "prog_io_type_defn.m"
                      {
#line 1217 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1217 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_116_116));
#line 1217 "prog_io_type_defn.m"
                      }
#line 1213 "prog_io_type_defn.m"
                    }
#line 1218 "prog_io_type_defn.m"
                  else
#line 1219 "prog_io_type_defn.m"
                    {
#line 1219 "prog_io_type_defn.m"
                      {
#line 1219 "prog_io_type_defn.m"
                        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_io_type_defn", (MR_String) "function \140parse_tree.prog_io_type_defn.make_maybe_where_details_2\'/12", (MR_String) "make_maybe_where_details_2: shouldn\'t have reached this point! (1)");
                      }
#line 1219 "prog_io_type_defn.m"
                    }
#line 1218 "prog_io_type_defn.m"
                }
#line 1209 "prog_io_type_defn.m"
            }
#line 1161 "prog_io_type_defn.m"
        }
#line 1124 "prog_io_type_defn.m"
    else
#line 1139 "prog_io_type_defn.m"
      {
#line 1128 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__RepresentationIs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1128 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1128 "prog_io_type_defn.m"
          {
#line 1129 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__InitialisationIs_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1128 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1128 "prog_io_type_defn.m"
              {
#line 1130 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__GroundIs_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1128 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1128 "prog_io_type_defn.m"
                  {
#line 1131 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__AnyIs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1128 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1128 "prog_io_type_defn.m"
                      {
#line 1132 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__EqualityIs_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1128 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 1128 "prog_io_type_defn.m"
                          {
#line 1133 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__ComparisonIs_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1128 "prog_io_type_defn.m"
                            if (parse_tree__prog_io_type_defn__succeeded)
#line 1128 "prog_io_type_defn.m"
                              {
#line 1134 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__CStoreIs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1128 "prog_io_type_defn.m"
                                if (parse_tree__prog_io_type_defn__succeeded)
#line 1135 "prog_io_type_defn.m"
                                  parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__DirectArgIs_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1128 "prog_io_type_defn.m"
                              }
#line 1128 "prog_io_type_defn.m"
                          }
#line 1128 "prog_io_type_defn.m"
                      }
#line 1128 "prog_io_type_defn.m"
                  }
#line 1128 "prog_io_type_defn.m"
              }
#line 1128 "prog_io_type_defn.m"
          }
#line 1139 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1137 "prog_io_type_defn.m"
          {
#line 1137 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_124_124;
#line 1137 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_125_125;

#line 1138 "prog_io_type_defn.m"
            {
#line 1138 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1138 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_125_125, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__IsSolverType_14));
#line 1138 "prog_io_type_defn.m"
            }
#line 1138 "prog_io_type_defn.m"
            {
#line 1138 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1138 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_124_124, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_125_125));
#line 1138 "prog_io_type_defn.m"
            }
#line 1138 "prog_io_type_defn.m"
            {
#line 1138 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1138 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1138 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_124_124));
#line 1138 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1138 "prog_io_type_defn.m"
            }
#line 1137 "prog_io_type_defn.m"
          }
#line 1139 "prog_io_type_defn.m"
        else
#line 1143 "prog_io_type_defn.m"
          {
#line 1143 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Spec_29;
#line 1143 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_146_146;
#line 1143 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_147_147;
#line 1143 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_148_148;
#line 1143 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_153_153;

#line 1145 "prog_io_type_defn.m"
            {
#line 1145 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_148_148 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__WhereTerm_25);
            }
#line 1145 "prog_io_type_defn.m"
            {
#line 1145 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_147_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1145 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_147_147, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_148_148));
#line 1145 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_147_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[154])));
#line 1145 "prog_io_type_defn.m"
            }
#line 1145 "prog_io_type_defn.m"
            {
#line 1145 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_146_146, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_147_147));
#line 1145 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_146_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1145 "prog_io_type_defn.m"
            }
#line 1144 "prog_io_type_defn.m"
            {
#line 1144 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Spec_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1144 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1144 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1144 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_29, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_146_146));
#line 1144 "prog_io_type_defn.m"
            }
#line 1146 "prog_io_type_defn.m"
            {
#line 1146 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_153_153, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_29));
#line 1146 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_153_153, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1146 "prog_io_type_defn.m"
            }
#line 1146 "prog_io_type_defn.m"
            {
#line 1146 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1146 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_153_153));
#line 1146 "prog_io_type_defn.m"
            }
#line 1143 "prog_io_type_defn.m"
          }
#line 1139 "prog_io_type_defn.m"
      }
#line 1124 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeWhereDetails_26;
#line 1124 "prog_io_type_defn.m"
  }
#line 1111 "prog_io_type_defn.m"
}

#line 961 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_2_f_0(
#line 961 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5)
#line 961 "prog_io_type_defn.m"
{
#line 969 "prog_io_type_defn.m"
  {
#line 969 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 969 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeInst_6;
#line 969 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Inst_7;

#line 965 "prog_io_type_defn.m"
    {
#line 965 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 1, parse_tree__prog_io_type_defn__Term_5, &parse_tree__prog_io_type_defn__Inst_7);
    }
#line 965 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 965 "prog_io_type_defn.m"
      {
#line 966 "prog_io_type_defn.m"
        {
#line 966 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__prog_io_type_defn__Inst_7);
        }
#line 966 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = !(parse_tree__prog_io_type_defn__succeeded);
#line 965 "prog_io_type_defn.m"
      }
#line 969 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 968 "prog_io_type_defn.m"
      {
#line 968 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__MaybeInst_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 968 "prog_io_type_defn.m"
        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeInst_6, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Inst_7));
#line 968 "prog_io_type_defn.m"
      }
#line 969 "prog_io_type_defn.m"
    else
#line 970 "prog_io_type_defn.m"
      {
#line 970 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_9;
#line 970 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 970 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 970 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 970 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 972 "prog_io_type_defn.m"
        {
#line 972 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_20_20 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_5);
        }
#line 972 "prog_io_type_defn.m"
        {
#line 972 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 972 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_20_20));
#line 972 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[150])));
#line 972 "prog_io_type_defn.m"
        }
#line 972 "prog_io_type_defn.m"
        {
#line 972 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 972 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_19_19));
#line 972 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 972 "prog_io_type_defn.m"
        }
#line 971 "prog_io_type_defn.m"
        {
#line 971 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 971 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 971 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 971 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_9, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_18_18));
#line 971 "prog_io_type_defn.m"
        }
#line 973 "prog_io_type_defn.m"
        {
#line 973 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 973 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_9));
#line 973 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 973 "prog_io_type_defn.m"
        }
#line 973 "prog_io_type_defn.m"
        {
#line 973 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeInst_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 973 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeInst_6, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 973 "prog_io_type_defn.m"
        }
#line 970 "prog_io_type_defn.m"
      }
#line 969 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeInst_6;
#line 969 "prog_io_type_defn.m"
  }
#line 961 "prog_io_type_defn.m"
}

#line 850 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_attribute__ho10_4_p_0(
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 850 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 850 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 850 "prog_io_type_defn.m"
{
#line 858 "prog_io_type_defn.m"
  {
#line 858 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 858 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 855 "prog_io_type_defn.m"
      {
#line 856 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 857 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[23]);
#line 855 "prog_io_type_defn.m"
      }
#line 858 "prog_io_type_defn.m"
    else
#line 859 "prog_io_type_defn.m"
      {
#line 859 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 859 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 865 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 865 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 861 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 861 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 861 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
          {
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 861 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
              {
#line 861 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 861 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
                  {
#line 861 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
                      {
#line 861 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 861 "prog_io_type_defn.m"
                          {
#line 861 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 861 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 861 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 861 "prog_io_type_defn.m"
                          }
#line 861 "prog_io_type_defn.m"
                      }
#line 861 "prog_io_type_defn.m"
                  }
#line 861 "prog_io_type_defn.m"
              }
#line 861 "prog_io_type_defn.m"
          }
#line 865 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 863 "prog_io_type_defn.m"
          {
#line 863 "prog_io_type_defn.m"
            {
#line 863 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 864 "prog_io_type_defn.m"
            {
#line 864 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 864 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 864 "prog_io_type_defn.m"
            }
#line 863 "prog_io_type_defn.m"
          }
#line 865 "prog_io_type_defn.m"
        else
#line 866 "prog_io_type_defn.m"
          {
#line 866 "prog_io_type_defn.m"
            {
#line 866 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(parse_tree__prog_io_type_defn__Term_9);
            }
#line 867 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "prog_io_type_defn.m"
          }
#line 872 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 871 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 872 "prog_io_type_defn.m"
        else
#line 872 "prog_io_type_defn.m"
          {
#line 872 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 872 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 874 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 872 "prog_io_type_defn.m"
            else
#line 877 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 872 "prog_io_type_defn.m"
          }
#line 859 "prog_io_type_defn.m"
      }
#line 858 "prog_io_type_defn.m"
  }
#line 850 "prog_io_type_defn.m"
}

#line 452 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__452__1_2_p_0(
#line 452 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ExistQVars_19,
#line 452 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_287)
#line 452 "prog_io_type_defn.m"
{
#line 452 "prog_io_type_defn.m"
  {
#line 452 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 452 "prog_io_type_defn.m"
    {
#line 452 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], parse_tree__prog_io_type_defn__ExistQVars_19, ((MR_Box) (parse_tree__prog_io_type_defn__HeadVar__2_287)));
    }
#line 452 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 452 "prog_io_type_defn.m"
  }
#line 452 "prog_io_type_defn.m"
}

#line 424 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__424__1_2_p_0(
#line 424 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_128,
#line 424 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_275)
#line 424 "prog_io_type_defn.m"
{
#line 424 "prog_io_type_defn.m"
  {
#line 424 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 424 "prog_io_type_defn.m"
    {
#line 424 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], parse_tree__prog_io_type_defn__HeadVar__1_128, ((MR_Box) (parse_tree__prog_io_type_defn__HeadVar__2_275)));
    }
#line 424 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 424 "prog_io_type_defn.m"
  }
#line 424 "prog_io_type_defn.m"
}

#line 420 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__420__1_1_f_0(
#line 420 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_125)
#line 420 "prog_io_type_defn.m"
{
#line 420 "prog_io_type_defn.m"
  {
#line 420 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 420 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__2_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_125, (MR_Integer) 1)));
#line 420 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_125, (MR_Integer) 0)));
#line 420 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_125, (MR_Integer) 2)));
#line 420 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_125, (MR_Integer) 3)));

#line 420 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__2_126;
#line 420 "prog_io_type_defn.m"
  }
#line 420 "prog_io_type_defn.m"
}

#line 404 "prog_io_type_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__404__1_3_f_0(
#line 404 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_88,
#line 404 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__GenericVarSet_216,
#line 404 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_268)
#line 404 "prog_io_type_defn.m"
{
#line 404 "prog_io_type_defn.m"
  {
#line 404 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 404 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__HeadVar__4_269;

#line 404 "prog_io_type_defn.m"
    {
#line 404 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__4_269 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__GenericVarSet_216, parse_tree__prog_io_type_defn__HeadVar__1_88, parse_tree__prog_io_type_defn__HeadVar__3_268);
    }
#line 404 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_269;
#line 404 "prog_io_type_defn.m"
  }
#line 404 "prog_io_type_defn.m"
}

#line 375 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__375__1_2_p_0(
#line 375 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_60,
#line 375 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_257)
#line 375 "prog_io_type_defn.m"
{
#line 375 "prog_io_type_defn.m"
  {
#line 375 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 375 "prog_io_type_defn.m"
    {
#line 375 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], parse_tree__prog_io_type_defn__HeadVar__1_60, ((MR_Box) (parse_tree__prog_io_type_defn__HeadVar__2_257)));
    }
#line 375 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 375 "prog_io_type_defn.m"
  }
#line 375 "prog_io_type_defn.m"
}

#line 372 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__372__1_1_f_0(
#line 372 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_57)
#line 372 "prog_io_type_defn.m"
{
#line 372 "prog_io_type_defn.m"
  {
#line 372 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 372 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__2_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_57, (MR_Integer) 1)));
#line 372 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_57, (MR_Integer) 0)));
#line 372 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_57, (MR_Integer) 2)));
#line 372 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_57, (MR_Integer) 3)));

#line 372 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__2_58;
#line 372 "prog_io_type_defn.m"
  }
#line 372 "prog_io_type_defn.m"
}

#line 221 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_constructor__221__1_2_p_0(
#line 221 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_46,
#line 221 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_47)
#line 221 "prog_io_type_defn.m"
{
#line 221 "prog_io_type_defn.m"
  {
#line 221 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 221 "prog_io_type_defn.m"
    {
#line 221 "prog_io_type_defn.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__HeadVar__1_46, parse_tree__prog_io_type_defn__HeadVar__2_47);
#line 221 "prog_io_type_defn.m"
      return;
    }
#line 221 "prog_io_type_defn.m"
  }
#line 221 "prog_io_type_defn.m"
}

#line 1293 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_type_defn_head__1293__1_2_p_0(
#line 1293 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_101,
#line 1293 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_102)
#line 1293 "prog_io_type_defn.m"
{
#line 1293 "prog_io_type_defn.m"
  {
#line 1293 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 1293 "prog_io_type_defn.m"
    {
#line 1293 "prog_io_type_defn.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__HeadVar__1_101, parse_tree__prog_io_type_defn__HeadVar__2_102);
#line 1293 "prog_io_type_defn.m"
      return;
    }
#line 1293 "prog_io_type_defn.m"
  }
#line 1293 "prog_io_type_defn.m"
}

#line 1245 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__maybe_unify_compare_2_f_0(
#line 1245 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeEqPred_4,
#line 1245 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCmpPred_5)
#line 1245 "prog_io_type_defn.m"
{
#line 1248 "prog_io_type_defn.m"
  {
#line 1248 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__MaybeEqPred_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1248 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3;

#line 1250 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1251 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__MaybeCmpPred_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1248 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1253 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1248 "prog_io_type_defn.m"
    else
#line 1255 "prog_io_type_defn.m"
      {
#line 1255 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_6_6;

#line 1255 "prog_io_type_defn.m"
        {
#line 1255 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1255 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_6_6, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeEqPred_4));
#line 1255 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_6_6, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeCmpPred_5));
#line 1255 "prog_io_type_defn.m"
        }
#line 1255 "prog_io_type_defn.m"
        {
#line 1255 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1255 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_6_6));
#line 1255 "prog_io_type_defn.m"
        }
#line 1255 "prog_io_type_defn.m"
      }
#line 1248 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__3_3;
#line 1248 "prog_io_type_defn.m"
  }
#line 1245 "prog_io_type_defn.m"
}

#line 1065 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__make_maybe_where_details_12_f_0(
#line 1065 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_14,
#line 1065 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_15,
#line 1065 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeRepresentationIs_16,
#line 1065 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeInitialisationIs_17,
#line 1065 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeGroundIs_18,
#line 1065 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeAnyIs_19,
#line 1065 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCStoreIs_20,
#line 1065 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeEqualityIs_21,
#line 1065 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeComparisonIs_22,
#line 1065 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgIs_23,
#line 1065 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeWhereEnd_24,
#line 1065 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__WhereTerm_25)
#line 1065 "prog_io_type_defn.m"
{
#line 1096 "prog_io_type_defn.m"
  {
#line 1096 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_15)) == (MR_mktag((MR_Integer) 1)));
#line 1096 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeWhereDetails_26;
#line 1096 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_27;
#line 1096 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RepresentationIs_28;
#line 1096 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__InitialisationIs_29;
#line 1096 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__GroundIs_30;
#line 1096 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__AnyIs_31;
#line 1096 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__CStoreIs_32;
#line 1096 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__EqualityIs_33;
#line 1096 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__ComparisonIs_34;
#line 1096 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__DirectArgIs_35;
#line 1090 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__WhereEnd_36;

#line 1081 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1081 "prog_io_type_defn.m"
      {
#line 1081 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_15, (MR_Integer) 0)));
#line 1082 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeRepresentationIs_16)) == (MR_mktag((MR_Integer) 1)));
#line 1082 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1082 "prog_io_type_defn.m"
          {
#line 1082 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__RepresentationIs_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeRepresentationIs_16, (MR_Integer) 0)));
#line 1083 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeInitialisationIs_17)) == (MR_mktag((MR_Integer) 1)));
#line 1083 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1083 "prog_io_type_defn.m"
              {
#line 1083 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__InitialisationIs_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeInitialisationIs_17, (MR_Integer) 0)));
#line 1084 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeGroundIs_18)) == (MR_mktag((MR_Integer) 1)));
#line 1084 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1084 "prog_io_type_defn.m"
                  {
#line 1084 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__GroundIs_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeGroundIs_18, (MR_Integer) 0)));
#line 1085 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeAnyIs_19)) == (MR_mktag((MR_Integer) 1)));
#line 1085 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1085 "prog_io_type_defn.m"
                      {
#line 1085 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__AnyIs_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeAnyIs_19, (MR_Integer) 0)));
#line 1086 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeCStoreIs_20)) == (MR_mktag((MR_Integer) 1)));
#line 1086 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 1086 "prog_io_type_defn.m"
                          {
#line 1086 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__CStoreIs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeCStoreIs_20, (MR_Integer) 0)));
#line 1087 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeEqualityIs_21)) == (MR_mktag((MR_Integer) 1)));
#line 1087 "prog_io_type_defn.m"
                            if (parse_tree__prog_io_type_defn__succeeded)
#line 1087 "prog_io_type_defn.m"
                              {
#line 1087 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__EqualityIs_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeEqualityIs_21, (MR_Integer) 0)));
#line 1088 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeComparisonIs_22)) == (MR_mktag((MR_Integer) 1)));
#line 1088 "prog_io_type_defn.m"
                                if (parse_tree__prog_io_type_defn__succeeded)
#line 1088 "prog_io_type_defn.m"
                                  {
#line 1088 "prog_io_type_defn.m"
                                    parse_tree__prog_io_type_defn__ComparisonIs_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeComparisonIs_22, (MR_Integer) 0)));
#line 1089 "prog_io_type_defn.m"
                                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeDirectArgIs_23)) == (MR_mktag((MR_Integer) 1)));
#line 1089 "prog_io_type_defn.m"
                                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1089 "prog_io_type_defn.m"
                                      {
#line 1089 "prog_io_type_defn.m"
                                        parse_tree__prog_io_type_defn__DirectArgIs_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeDirectArgIs_23, (MR_Integer) 0)));
#line 1090 "prog_io_type_defn.m"
                                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeWhereEnd_24)) == (MR_mktag((MR_Integer) 1)));
#line 1090 "prog_io_type_defn.m"
                                        if (parse_tree__prog_io_type_defn__succeeded)
#line 1090 "prog_io_type_defn.m"
                                          parse_tree__prog_io_type_defn__WhereEnd_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereEnd_24, (MR_Integer) 0)));
#line 1089 "prog_io_type_defn.m"
                                      }
#line 1088 "prog_io_type_defn.m"
                                  }
#line 1087 "prog_io_type_defn.m"
                              }
#line 1086 "prog_io_type_defn.m"
                          }
#line 1085 "prog_io_type_defn.m"
                      }
#line 1084 "prog_io_type_defn.m"
                  }
#line 1083 "prog_io_type_defn.m"
              }
#line 1082 "prog_io_type_defn.m"
          }
#line 1081 "prog_io_type_defn.m"
      }
#line 1096 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1092 "prog_io_type_defn.m"
      {
#line 1092 "prog_io_type_defn.m"
        return parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_109_97_121_98_101_95_119_104_101_114_101_95_100_101_116_97_105_108_115_95_50_95_95_91_49_49_93_95_48_12_f_0(parse_tree__prog_io_type_defn__IsSolverType_14, parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_27, parse_tree__prog_io_type_defn__RepresentationIs_28, parse_tree__prog_io_type_defn__InitialisationIs_29, parse_tree__prog_io_type_defn__GroundIs_30, parse_tree__prog_io_type_defn__AnyIs_31, parse_tree__prog_io_type_defn__CStoreIs_32, parse_tree__prog_io_type_defn__EqualityIs_33, parse_tree__prog_io_type_defn__ComparisonIs_34, parse_tree__prog_io_type_defn__DirectArgIs_35, parse_tree__prog_io_type_defn__WhereTerm_25);
      }
#line 1096 "prog_io_type_defn.m"
    else
#line 1107 "prog_io_type_defn.m"
      {
#line 1107 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 1107 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeInfo_57_57 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[10];
#line 1107 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeInfo_59_59;
#line 1107 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeInfo_60_60;
#line 1107 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Specs_37;
#line 1107 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_38_38;
#line 1107 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_39_39;
#line 1107 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 1107 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 1107 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 1107 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_43_43;
#line 1107 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_44_44;
#line 1107 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_45_45;
#line 1107 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_46_46;
#line 1107 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;
#line 1107 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_48_48;
#line 1107 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_49_49;
#line 1107 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_50_50;
#line 1107 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_51_51;
#line 1107 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 1107 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_53_53;
#line 1107 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_54_54;
#line 1107 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_55_55;

#line 1098 "prog_io_type_defn.m"
        {
#line 1098 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_38_38 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_57_57, parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_15);
        }
#line 1099 "prog_io_type_defn.m"
        {
#line 1099 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[11], parse_tree__prog_io_type_defn__MaybeRepresentationIs_16);
        }
#line 6713 "parse_tree.prog_io_type_defn.c"
        parse_tree__prog_io_type_defn__TypeInfo_59_59 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[12];
#line 1100 "prog_io_type_defn.m"
        {
#line 1100 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_59_59, parse_tree__prog_io_type_defn__MaybeInitialisationIs_17);
        }
#line 6720 "parse_tree.prog_io_type_defn.c"
        parse_tree__prog_io_type_defn__TypeInfo_60_60 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[13];
#line 1101 "prog_io_type_defn.m"
        {
#line 1101 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_44_44 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_60_60, parse_tree__prog_io_type_defn__MaybeGroundIs_18);
        }
#line 1102 "prog_io_type_defn.m"
        {
#line 1102 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_46_46 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_60_60, parse_tree__prog_io_type_defn__MaybeAnyIs_19);
        }
#line 1103 "prog_io_type_defn.m"
        {
#line 1103 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_48_48 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[14], parse_tree__prog_io_type_defn__MaybeCStoreIs_20);
        }
#line 1104 "prog_io_type_defn.m"
        {
#line 1104 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_50_50 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_59_59, parse_tree__prog_io_type_defn__MaybeEqualityIs_21);
        }
#line 1105 "prog_io_type_defn.m"
        {
#line 1105 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_52_52 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_59_59, parse_tree__prog_io_type_defn__MaybeComparisonIs_22);
        }
#line 1106 "prog_io_type_defn.m"
        {
#line 1106 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_54_54 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[7], parse_tree__prog_io_type_defn__MaybeDirectArgIs_23);
        }
#line 1107 "prog_io_type_defn.m"
        {
#line 1107 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_55_55 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_57_57, parse_tree__prog_io_type_defn__MaybeWhereEnd_24);
        }
#line 1106 "prog_io_type_defn.m"
        {
#line 1106 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_53_53 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_54_54, parse_tree__prog_io_type_defn__V_55_55);
        }
#line 1105 "prog_io_type_defn.m"
        {
#line 1105 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_51_51 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_52_52, parse_tree__prog_io_type_defn__V_53_53);
        }
#line 1104 "prog_io_type_defn.m"
        {
#line 1104 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_49_49 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_50_50, parse_tree__prog_io_type_defn__V_51_51);
        }
#line 1103 "prog_io_type_defn.m"
        {
#line 1103 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_48_48, parse_tree__prog_io_type_defn__V_49_49);
        }
#line 1102 "prog_io_type_defn.m"
        {
#line 1102 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_45_45 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_46_46, parse_tree__prog_io_type_defn__V_47_47);
        }
#line 1101 "prog_io_type_defn.m"
        {
#line 1101 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_43_43 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_44_44, parse_tree__prog_io_type_defn__V_45_45);
        }
#line 1100 "prog_io_type_defn.m"
        {
#line 1100 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_42_42, parse_tree__prog_io_type_defn__V_43_43);
        }
#line 1099 "prog_io_type_defn.m"
        {
#line 1099 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_39_39 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_40_40, parse_tree__prog_io_type_defn__V_41_41);
        }
#line 1098 "prog_io_type_defn.m"
        {
#line 1098 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Specs_37 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_38_38, parse_tree__prog_io_type_defn__V_39_39);
        }
#line 1108 "prog_io_type_defn.m"
        {
#line 1108 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1108 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_37));
#line 1108 "prog_io_type_defn.m"
        }
#line 1107 "prog_io_type_defn.m"
      }
#line 1096 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeWhereDetails_26;
#line 1096 "prog_io_type_defn.m"
  }
#line 1065 "prog_io_type_defn.m"
}

#line 1056 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_end_2_p_0(
#line 1056 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 1056 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_2)
#line 1056 "prog_io_type_defn.m"
{
#line 1058 "prog_io_type_defn.m"
  {
#line 1058 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 1058 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1058 "prog_io_type_defn.m"
      {
#line 1058 "prog_io_type_defn.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1058 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[22]);
#line 1058 "prog_io_type_defn.m"
      }
#line 1058 "prog_io_type_defn.m"
    else
#line 1059 "prog_io_type_defn.m"
      {
#line 1059 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__1_1, (MR_Integer) 0)));
#line 1059 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_6;
#line 1059 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_8_8;
#line 1059 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 1059 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 1059 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_22_22;

#line 1063 "prog_io_type_defn.m"
        {
#line 1063 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_22_22 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_5);
        }
#line 1063 "prog_io_type_defn.m"
        {
#line 1063 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1063 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_21_21, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_22_22));
#line 1063 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[149])));
#line 1063 "prog_io_type_defn.m"
        }
#line 1063 "prog_io_type_defn.m"
        {
#line 1063 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1063 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_21_21));
#line 1063 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1063 "prog_io_type_defn.m"
        }
#line 1062 "prog_io_type_defn.m"
        {
#line 1062 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1062 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1062 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1062 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_6, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_20_20));
#line 1062 "prog_io_type_defn.m"
        }
#line 1059 "prog_io_type_defn.m"
        {
#line 1059 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_8_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_6));
#line 1059 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1059 "prog_io_type_defn.m"
        }
#line 1059 "prog_io_type_defn.m"
        {
#line 1059 "prog_io_type_defn.m"
          MR_Word base;
#line 1059 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1059 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__HeadVar__2_2 = base;
#line 1059 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_8_8));
#line 1059 "prog_io_type_defn.m"
        }
#line 1059 "prog_io_type_defn.m"
      }
#line 1058 "prog_io_type_defn.m"
  }
#line 1056 "prog_io_type_defn.m"
}

#line 1040 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_direct_arg_functor_4_p_0(
#line 1040 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 1040 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 1040 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7,
#line 1040 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeFunctor_8)
#line 1040 "prog_io_type_defn.m"
{
#line 1046 "prog_io_type_defn.m"
  {
#line 1046 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 1046 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Name_9;
#line 1046 "prog_io_type_defn.m"
    MR_Integer parse_tree__prog_io_type_defn__Arity_10;

#line 1044 "prog_io_type_defn.m"
    {
#line 1044 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_util__parse_name_and_arity_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__Term_7, &parse_tree__prog_io_type_defn__Name_9, &parse_tree__prog_io_type_defn__Arity_10);
    }
#line 1046 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1045 "prog_io_type_defn.m"
      {
#line 1045 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_14_14;

#line 1045 "prog_io_type_defn.m"
        {
#line 1045 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1045 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_14_14, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_9));
#line 1045 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Arity_10));
#line 1045 "prog_io_type_defn.m"
        }
#line 1045 "prog_io_type_defn.m"
        {
#line 1045 "prog_io_type_defn.m"
          MR_Word base;
#line 1045 "prog_io_type_defn.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1045 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeFunctor_8 = base;
#line 1045 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_14_14));
#line 1045 "prog_io_type_defn.m"
        }
#line 1045 "prog_io_type_defn.m"
      }
#line 1046 "prog_io_type_defn.m"
    else
#line 1047 "prog_io_type_defn.m"
      {
#line 1047 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_46_46 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1047 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__TermStr_11;
#line 1047 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Pieces_12;
#line 1047 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_13;
#line 1047 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_17_17;
#line 1047 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 1047 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 1047 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_26_26;
#line 1047 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_27_27;
#line 1047 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_36_36;
#line 1047 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_37_37;
#line 1047 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_38_38;
#line 1047 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_39_39;
#line 1047 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 1047 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_43_43;

#line 1047 "prog_io_type_defn.m"
        {
#line 1047 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__TermStr_11 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_46_46, parse_tree__prog_io_type_defn__VarSet_6, parse_tree__prog_io_type_defn__Term_7);
        }
#line 1050 "prog_io_type_defn.m"
        {
#line 1050 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_27_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1050 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(2), parse_tree__prog_io_type_defn__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TermStr_11));
#line 1050 "prog_io_type_defn.m"
        }
#line 1050 "prog_io_type_defn.m"
        {
#line 1050 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1050 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_27_27));
#line 1050 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[21])));
#line 1050 "prog_io_type_defn.m"
        }
#line 1050 "prog_io_type_defn.m"
        {
#line 1050 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1050 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_23_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[148])));
#line 1050 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_23_23, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_26_26));
#line 1050 "prog_io_type_defn.m"
        }
#line 1049 "prog_io_type_defn.m"
        {
#line 1049 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1049 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_defn_scalar_common_2[2])));
#line 1049 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_23_23));
#line 1049 "prog_io_type_defn.m"
        }
#line 1049 "prog_io_type_defn.m"
        {
#line 1049 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1049 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[147])));
#line 1049 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_20_20));
#line 1049 "prog_io_type_defn.m"
        }
#line 1048 "prog_io_type_defn.m"
        {
#line 1048 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1048 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[146])));
#line 1048 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_12, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_17_17));
#line 1048 "prog_io_type_defn.m"
        }
#line 1052 "prog_io_type_defn.m"
        {
#line 1052 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_38_38 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_46_46, parse_tree__prog_io_type_defn__Term_7);
        }
#line 1052 "prog_io_type_defn.m"
        {
#line 1052 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1052 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_12));
#line 1052 "prog_io_type_defn.m"
        }
#line 1052 "prog_io_type_defn.m"
        {
#line 1052 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1052 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 1052 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1052 "prog_io_type_defn.m"
        }
#line 1052 "prog_io_type_defn.m"
        {
#line 1052 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1052 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_38_38));
#line 1052 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_37_37, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_39_39));
#line 1052 "prog_io_type_defn.m"
        }
#line 1052 "prog_io_type_defn.m"
        {
#line 1052 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1052 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_37_37));
#line 1052 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1052 "prog_io_type_defn.m"
        }
#line 1051 "prog_io_type_defn.m"
        {
#line 1051 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1051 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1051 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1051 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_13, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_36_36));
#line 1051 "prog_io_type_defn.m"
        }
#line 1053 "prog_io_type_defn.m"
        {
#line 1053 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1053 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_13));
#line 1053 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1053 "prog_io_type_defn.m"
        }
#line 1053 "prog_io_type_defn.m"
        {
#line 1053 "prog_io_type_defn.m"
          MR_Word base;
#line 1053 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1053 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeFunctor_8 = base;
#line 1053 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_43_43));
#line 1053 "prog_io_type_defn.m"
        }
#line 1047 "prog_io_type_defn.m"
      }
#line 1046 "prog_io_type_defn.m"
  }
#line 1040 "prog_io_type_defn.m"
}

#line 1029 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0_1(
#line 1029 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1029 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1029 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2)
#line 1029 "prog_io_type_defn.m"
{
#line 1029 "prog_io_type_defn.m"
  {
#line 1029 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 1029 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv0_MaybeFunctor_8;

#line 1029 "prog_io_type_defn.m"
    {
#line 1029 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_direct_arg_functor_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1), &parse_tree__prog_io_type_defn__conv0_MaybeFunctor_8);
    }
#line 1029 "prog_io_type_defn.m"
    *parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv0_MaybeFunctor_8));
#line 1029 "prog_io_type_defn.m"
  }
#line 1029 "prog_io_type_defn.m"
}

#line 1024 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0(
#line 1024 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 1024 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 1024 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 1024 "prog_io_type_defn.m"
{
#line 1031 "prog_io_type_defn.m"
  {
#line 1031 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 1031 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgCtors_8;
#line 1031 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__FunctorsTerms_9;

#line 1028 "prog_io_type_defn.m"
    {
#line 1028 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_type_defn__Term_7, &parse_tree__prog_io_type_defn__FunctorsTerms_9);
    }
#line 1031 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1029 "prog_io_type_defn.m"
      {
#line 1029 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 1029 "prog_io_type_defn.m"
        {
#line 1029 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1029 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_12_12, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_5[1]));
#line 1029 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_12_12, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0_1));
#line 1029 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1029 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_12_12, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__ModuleName_5));
#line 1029 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_12_12, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__VarSet_6));
#line 1029 "prog_io_type_defn.m"
        }
#line 1029 "prog_io_type_defn.m"
        {
#line 1029 "prog_io_type_defn.m"
          parse_tree__prog_io_util__map_parser_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0, parse_tree__prog_io_type_defn__V_12_12, parse_tree__prog_io_type_defn__FunctorsTerms_9, &parse_tree__prog_io_type_defn__MaybeDirectArgCtors_8);
        }
#line 1029 "prog_io_type_defn.m"
      }
#line 1031 "prog_io_type_defn.m"
    else
#line 1033 "prog_io_type_defn.m"
      {
#line 1033 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_11;
#line 1033 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_26_26;
#line 1033 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_27_27;
#line 1033 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_28_28;
#line 1033 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_33_33;

#line 1035 "prog_io_type_defn.m"
        {
#line 1035 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_28_28 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 1035 "prog_io_type_defn.m"
        {
#line 1035 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1035 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_28_28));
#line 1035 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[145])));
#line 1035 "prog_io_type_defn.m"
        }
#line 1036 "prog_io_type_defn.m"
        {
#line 1036 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1036 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_27_27));
#line 1036 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1036 "prog_io_type_defn.m"
        }
#line 1034 "prog_io_type_defn.m"
        {
#line 1034 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1034 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1034 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1034 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_11, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_26_26));
#line 1034 "prog_io_type_defn.m"
        }
#line 1037 "prog_io_type_defn.m"
        {
#line 1037 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1037 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_11));
#line 1037 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1037 "prog_io_type_defn.m"
        }
#line 1037 "prog_io_type_defn.m"
        {
#line 1037 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeDirectArgCtors_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1037 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeDirectArgCtors_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_33_33));
#line 1037 "prog_io_type_defn.m"
        }
#line 1033 "prog_io_type_defn.m"
      }
#line 1031 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeDirectArgCtors_8;
#line 1031 "prog_io_type_defn.m"
  }
#line 1024 "prog_io_type_defn.m"
}

#line 1006 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_mutable_decl_term_3_p_0(
#line 1006 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_4,
#line 1006 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5,
#line 1006 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeMutableInfo_6)
#line 1006 "prog_io_type_defn.m"
{
#line 1017 "prog_io_type_defn.m"
  {
#line 1017 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1017 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeMutableInfoPrime_10;
#line 1011 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_32_32;
#line 1011 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Args_7;
#line 1011 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Context_8;
#line 1011 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__VarSet_9;
#line 1011 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_13_13;
#line 1011 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_14_14;
#line 1011 "prog_io_type_defn.m"
    MR_Integer parse_tree__prog_io_type_defn__V_15_15;

#line 1011 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1011 "prog_io_type_defn.m"
      {
#line 1011 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 0)));
#line 1011 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Args_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 1)));
#line 1011 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 2)));
#line 1011 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 1011 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1011 "prog_io_type_defn.m"
          {
#line 1011 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_13_13, (MR_Integer) 0)));
#line 1011 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_14_14, (MR_String) "mutable") == 0);
#line 1011 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1011 "prog_io_type_defn.m"
              {
#line 7386 "parse_tree.prog_io_type_defn.c"
                parse_tree__prog_io_type_defn__TypeCtorInfo_32_32 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1012 "prog_io_type_defn.m"
                {
#line 1012 "prog_io_type_defn.m"
                  mercury__varset__init_1_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_32_32, &parse_tree__prog_io_type_defn__VarSet_9);
                }
#line 1013 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_15_15 = (MR_Integer) -1;
#line 1013 "prog_io_type_defn.m"
                {
#line 1013 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_mutable__parse_mutable_decl_info_6_p_0(parse_tree__prog_io_type_defn__ModuleName_4, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__Args_7, parse_tree__prog_io_type_defn__Context_8, parse_tree__prog_io_type_defn__V_15_15, &parse_tree__prog_io_type_defn__MaybeMutableInfoPrime_10);
                }
#line 1011 "prog_io_type_defn.m"
              }
#line 1011 "prog_io_type_defn.m"
          }
#line 1011 "prog_io_type_defn.m"
      }
#line 1017 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1016 "prog_io_type_defn.m"
      *parse_tree__prog_io_type_defn__MaybeMutableInfo_6 = parse_tree__prog_io_type_defn__MaybeMutableInfoPrime_10;
#line 1017 "prog_io_type_defn.m"
    else
#line 1018 "prog_io_type_defn.m"
      {
#line 1018 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_12;
#line 1018 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 1018 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 1018 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_25_25;
#line 1018 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_30_30;

#line 1020 "prog_io_type_defn.m"
        {
#line 1020 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_25_25 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_5);
        }
#line 1020 "prog_io_type_defn.m"
        {
#line 1020 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1020 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_24_24, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 1020 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[144])));
#line 1020 "prog_io_type_defn.m"
        }
#line 1020 "prog_io_type_defn.m"
        {
#line 1020 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1020 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_23_23, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_24_24));
#line 1020 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1020 "prog_io_type_defn.m"
        }
#line 1019 "prog_io_type_defn.m"
        {
#line 1019 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1019 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1019 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1019 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_23_23));
#line 1019 "prog_io_type_defn.m"
        }
#line 1021 "prog_io_type_defn.m"
        {
#line 1021 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_12));
#line 1021 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1021 "prog_io_type_defn.m"
        }
#line 1021 "prog_io_type_defn.m"
        {
#line 1021 "prog_io_type_defn.m"
          MR_Word base;
#line 1021 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1021 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeMutableInfo_6 = base;
#line 1021 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_30_30));
#line 1021 "prog_io_type_defn.m"
        }
#line 1018 "prog_io_type_defn.m"
      }
#line 1017 "prog_io_type_defn.m"
  }
#line 1006 "prog_io_type_defn.m"
}

#line 997 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0_1(
#line 997 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 997 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 997 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2)
#line 997 "prog_io_type_defn.m"
{
#line 997 "prog_io_type_defn.m"
  {
#line 997 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 997 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv0_MaybeMutableInfo_6;

#line 997 "prog_io_type_defn.m"
    {
#line 997 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_mutable_decl_term_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1), &parse_tree__prog_io_type_defn__conv0_MaybeMutableInfo_6);
    }
#line 997 "prog_io_type_defn.m"
    *parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv0_MaybeMutableInfo_6));
#line 997 "prog_io_type_defn.m"
  }
#line 997 "prog_io_type_defn.m"
}

#line 983 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0(
#line 983 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_4,
#line 983 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5)
#line 983 "prog_io_type_defn.m"
{
#line 996 "prog_io_type_defn.m"
  {
#line 996 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeItems_6;
#line 987 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_15_15;
#line 987 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_16_16;
#line 987 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_7_7;
#line 987 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_8_8;

#line 987 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 987 "prog_io_type_defn.m"
      {
#line 987 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 0)));
#line 987 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 1)));
#line 987 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 2)));
#line 987 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_15_15)) == (MR_mktag((MR_Integer) 0)));
#line 987 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 987 "prog_io_type_defn.m"
          {
#line 987 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_15_15, (MR_Integer) 0)));
#line 987 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_16_16, (MR_String) "mutable") == 0);
#line 987 "prog_io_type_defn.m"
          }
#line 987 "prog_io_type_defn.m"
      }
#line 996 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 988 "prog_io_type_defn.m"
      {
#line 988 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeItem_9;

#line 988 "prog_io_type_defn.m"
        {
#line 988 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_mutable_decl_term_3_p_0(parse_tree__prog_io_type_defn__ModuleName_4, parse_tree__prog_io_type_defn__Term_5, &parse_tree__prog_io_type_defn__MaybeItem_9);
        }
#line 992 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeItem_9)) == (MR_mktag((MR_Integer) 0))))
#line 994 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeItems_6 = (MR_Word) parse_tree__prog_io_type_defn__MaybeItem_9;
#line 992 "prog_io_type_defn.m"
        else
#line 990 "prog_io_type_defn.m"
          {
#line 990 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Mutable_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItem_9, (MR_Integer) 0)));
#line 990 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_17_17;

#line 991 "prog_io_type_defn.m"
            {
#line 991 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 991 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Mutable_10));
#line 991 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 991 "prog_io_type_defn.m"
            }
#line 991 "prog_io_type_defn.m"
            {
#line 991 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeItems_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 991 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItems_6, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_17_17));
#line 991 "prog_io_type_defn.m"
            }
#line 990 "prog_io_type_defn.m"
          }
#line 988 "prog_io_type_defn.m"
      }
#line 996 "prog_io_type_defn.m"
    else
#line 998 "prog_io_type_defn.m"
      {
#line 998 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Terms_12;

#line 996 "prog_io_type_defn.m"
        {
#line 996 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_type_defn__Term_5, &parse_tree__prog_io_type_defn__Terms_12);
        }
#line 998 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 997 "prog_io_type_defn.m"
          {
#line 997 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_19_19;

#line 997 "prog_io_type_defn.m"
            {
#line 997 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 997 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_6[0]));
#line 997 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0_1));
#line 997 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 997 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__ModuleName_4));
#line 997 "prog_io_type_defn.m"
            }
#line 997 "prog_io_type_defn.m"
            {
#line 997 "prog_io_type_defn.m"
              parse_tree__prog_io_util__map_parser_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0, parse_tree__prog_io_type_defn__V_19_19, parse_tree__prog_io_type_defn__Terms_12, &parse_tree__prog_io_type_defn__MaybeItems_6);
            }
#line 997 "prog_io_type_defn.m"
          }
#line 998 "prog_io_type_defn.m"
        else
#line 1000 "prog_io_type_defn.m"
          {
#line 1000 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Spec_14;
#line 1000 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_30_30;
#line 1000 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_31_31;
#line 1000 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_32_32;
#line 1000 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_37_37;

#line 1002 "prog_io_type_defn.m"
            {
#line 1002 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_32_32 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_5);
            }
#line 1002 "prog_io_type_defn.m"
            {
#line 1002 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1002 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_32_32));
#line 1002 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[143])));
#line 1002 "prog_io_type_defn.m"
            }
#line 1002 "prog_io_type_defn.m"
            {
#line 1002 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1002 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_31_31));
#line 1002 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1002 "prog_io_type_defn.m"
            }
#line 1001 "prog_io_type_defn.m"
            {
#line 1001 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1001 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1001 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1001 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_30_30));
#line 1001 "prog_io_type_defn.m"
            }
#line 1003 "prog_io_type_defn.m"
            {
#line 1003 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_14));
#line 1003 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1003 "prog_io_type_defn.m"
            }
#line 1003 "prog_io_type_defn.m"
            {
#line 1003 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeItems_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1003 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeItems_6, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_37_37));
#line 1003 "prog_io_type_defn.m"
            }
#line 1000 "prog_io_type_defn.m"
          }
#line 998 "prog_io_type_defn.m"
      }
#line 996 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeItems_6;
#line 996 "prog_io_type_defn.m"
  }
#line 983 "prog_io_type_defn.m"
}

#line 917 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_initialisation_is_3_f_0(
#line 917 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 917 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 917 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 917 "prog_io_type_defn.m"
{
#line 920 "prog_io_type_defn.m"
  {
#line 920 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 920 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 920 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result0_9;
#line 920 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result1_10;
#line 924 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;

#line 921 "prog_io_type_defn.m"
    {
#line 921 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__Result0_9 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__VarSet_6, (MR_String) "initialisation", parse_tree__prog_io_type_defn__Term_7);
    }
#line 924 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Result0_9)) == (MR_mktag((MR_Integer) 1)));
#line 924 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 924 "prog_io_type_defn.m"
      {
#line 924 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result0_9, (MR_Integer) 0)));
#line 924 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 924 "prog_io_type_defn.m"
      }
#line 928 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 926 "prog_io_type_defn.m"
      {
#line 926 "prog_io_type_defn.m"
        {
#line 926 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result1_10 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__VarSet_6, (MR_String) "initialization", parse_tree__prog_io_type_defn__Term_7);
        }
#line 926 "prog_io_type_defn.m"
      }
#line 928 "prog_io_type_defn.m"
    else
#line 929 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__Result1_10 = parse_tree__prog_io_type_defn__Result0_9;
#line 947 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Result1_10)) == (MR_mktag((MR_Integer) 0))))
#line 951 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__Result_8 = parse_tree__prog_io_type_defn__Result1_10;
#line 947 "prog_io_type_defn.m"
    else
#line 947 "prog_io_type_defn.m"
      {
#line 947 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result1_10, (MR_Integer) 0)));

#line 947 "prog_io_type_defn.m"
        if ((parse_tree__prog_io_type_defn__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 951 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = parse_tree__prog_io_type_defn__Result1_10;
#line 947 "prog_io_type_defn.m"
        else
#line 933 "prog_io_type_defn.m"
          {
#line 933 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__AutoInitSupported_12;

#line 934 "prog_io_type_defn.m"
            {
#line 934 "prog_io_type_defn.m"
              libs__globals__semipure_get_solver_auto_init_supported_1_p_0(&parse_tree__prog_io_type_defn__AutoInitSupported_12);
            }
#line 939 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__AutoInitSupported_12 == (MR_Integer) 0))
#line 940 "prog_io_type_defn.m"
              {
#line 940 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_14;
#line 940 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_33_33;
#line 940 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_34_34;
#line 940 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_35_35;
#line 940 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_40_40;

#line 944 "prog_io_type_defn.m"
                {
#line 944 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_35_35 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
                }
#line 944 "prog_io_type_defn.m"
                {
#line 944 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 944 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_35_35));
#line 944 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[142])));
#line 944 "prog_io_type_defn.m"
                }
#line 944 "prog_io_type_defn.m"
                {
#line 944 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 944 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_34_34));
#line 944 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 944 "prog_io_type_defn.m"
                }
#line 943 "prog_io_type_defn.m"
                {
#line 943 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 943 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 943 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 943 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_33_33));
#line 943 "prog_io_type_defn.m"
                }
#line 945 "prog_io_type_defn.m"
                {
#line 945 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 945 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_14));
#line 945 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 945 "prog_io_type_defn.m"
                }
#line 945 "prog_io_type_defn.m"
                {
#line 945 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 945 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 945 "prog_io_type_defn.m"
                }
#line 940 "prog_io_type_defn.m"
              }
#line 939 "prog_io_type_defn.m"
            else
#line 937 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = parse_tree__prog_io_type_defn__Result1_10;
#line 933 "prog_io_type_defn.m"
          }
#line 947 "prog_io_type_defn.m"
      }
#line 920 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 920 "prog_io_type_defn.m"
  }
#line 917 "prog_io_type_defn.m"
}

#line 908 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(
#line 908 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_3)
#line 908 "prog_io_type_defn.m"
{
#line 910 "prog_io_type_defn.m"
  {
#line 910 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 910 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__2_2;
#line 911 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_5_5;
#line 911 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_6_6;
#line 911 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_7_7;
#line 911 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_4_4;

#line 911 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 911 "prog_io_type_defn.m"
      {
#line 911 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_3, (MR_Integer) 0)));
#line 911 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_3, (MR_Integer) 1)));
#line 911 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_3, (MR_Integer) 2)));
#line 911 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 911 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 911 "prog_io_type_defn.m"
          {
#line 911 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_5_5)) == (MR_mktag((MR_Integer) 0)));
#line 911 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 911 "prog_io_type_defn.m"
              {
#line 911 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_5_5, (MR_Integer) 0)));
#line 911 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_6_6, (MR_String) "type_is_abstract_noncanonical") == 0);
#line 911 "prog_io_type_defn.m"
              }
#line 911 "prog_io_type_defn.m"
          }
#line 911 "prog_io_type_defn.m"
      }
#line 910 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 912 "prog_io_type_defn.m"
      {
#line 912 "prog_io_type_defn.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 912 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[22]);
#line 912 "prog_io_type_defn.m"
      }
#line 910 "prog_io_type_defn.m"
    else
#line 914 "prog_io_type_defn.m"
      {
#line 914 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[23]);
#line 914 "prog_io_type_defn.m"
      }
#line 910 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__2_2;
#line 910 "prog_io_type_defn.m"
  }
#line 908 "prog_io_type_defn.m"
}

#line 784 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_type_decl_where_term_4_f_0(
#line 784 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_6,
#line 784 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_7,
#line 784 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_8,
#line 784 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm0_9)
#line 784 "prog_io_type_defn.m"
{
#line 791 "prog_io_type_defn.m"
  {
#line 791 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 791 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeWhereDetails_10;

#line 791 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 791 "prog_io_type_defn.m"
      {
#line 792 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__MaybeWhereDetails_10 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_4[1]);
#line 791 "prog_io_type_defn.m"
      }
#line 791 "prog_io_type_defn.m"
    else
#line 794 "prog_io_type_defn.m"
      {
#line 794 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm0_9, (MR_Integer) 0)));
#line 794 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_13;
#line 794 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeRepresentationIs_14;
#line 794 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeInitialisationIs_15;
#line 794 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeGroundIs_16;
#line 794 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeAnyIs_17;
#line 794 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeCStoreIs_18;
#line 794 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeEqualityIs_19;
#line 794 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeComparisonIs_20;
#line 794 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgIs_21;
#line 794 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeWhereEnd_22;
#line 794 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_25_25;
#line 794 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_27_27;
#line 794 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_31_31;
#line 794 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_33_33;
#line 794 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_37_37;
#line 794 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_41_41;
#line 794 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_45_45;
#line 794 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_49_49;
#line 794 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_53_53;

#line 797 "prog_io_type_defn.m"
        {
#line 797 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_where_attribute__ho10_4_p_0(&parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_13, parse_tree__prog_io_type_defn__MaybeTerm0_9, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_25_25);
        }
#line 799 "prog_io_type_defn.m"
        {
#line 799 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0((MR_String) "representation", parse_tree__prog_io_type_defn__VarSet_8, &parse_tree__prog_io_type_defn__MaybeRepresentationIs_14, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_25_25, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_27_27);
        }
#line 802 "prog_io_type_defn.m"
        {
#line 802 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_56_95_95_91_51_93_95_48_4_p_0(parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, &parse_tree__prog_io_type_defn__MaybeInitialisationIs_15, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_27_27, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_31_31);
        }
#line 805 "prog_io_type_defn.m"
        {
#line 805 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0((MR_String) "ground", &parse_tree__prog_io_type_defn__MaybeGroundIs_16, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_31_31, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_33_33);
        }
#line 808 "prog_io_type_defn.m"
        {
#line 808 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0((MR_String) "any", &parse_tree__prog_io_type_defn__MaybeAnyIs_17, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_33_33, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_37_37);
        }
#line 811 "prog_io_type_defn.m"
        {
#line 811 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_52_93_95_48_4_p_0((MR_String) "constraint_store", parse_tree__prog_io_type_defn__ModuleName_7, &parse_tree__prog_io_type_defn__MaybeCStoreIs_18, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_37_37, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_41_41);
        }
#line 814 "prog_io_type_defn.m"
        {
#line 814 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "equality", parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, &parse_tree__prog_io_type_defn__MaybeEqualityIs_19, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_41_41, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_45_45);
        }
#line 817 "prog_io_type_defn.m"
        {
#line 817 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_54_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "comparison", parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, &parse_tree__prog_io_type_defn__MaybeComparisonIs_20, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_45_45, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_49_49);
        }
#line 820 "prog_io_type_defn.m"
        {
#line 820 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "direct_arg", parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, &parse_tree__prog_io_type_defn__MaybeDirectArgIs_21, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_49_49, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_53_53);
        }
#line 823 "prog_io_type_defn.m"
        {
#line 823 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_where_end_2_p_0(parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_53_53, &parse_tree__prog_io_type_defn__MaybeWhereEnd_22);
        }
#line 825 "prog_io_type_defn.m"
        {
#line 825 "prog_io_type_defn.m"
          return parse_tree__prog_io_type_defn__MaybeWhereDetails_10 = parse_tree__prog_io_type_defn__make_maybe_where_details_12_f_0(parse_tree__prog_io_type_defn__IsSolverType_6, parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_13, parse_tree__prog_io_type_defn__MaybeRepresentationIs_14, parse_tree__prog_io_type_defn__MaybeInitialisationIs_15, parse_tree__prog_io_type_defn__MaybeGroundIs_16, parse_tree__prog_io_type_defn__MaybeAnyIs_17, parse_tree__prog_io_type_defn__MaybeCStoreIs_18, parse_tree__prog_io_type_defn__MaybeEqualityIs_19, parse_tree__prog_io_type_defn__MaybeComparisonIs_20, parse_tree__prog_io_type_defn__MaybeDirectArgIs_21, parse_tree__prog_io_type_defn__MaybeWhereEnd_22, parse_tree__prog_io_type_defn__Term0_11);
        }
#line 794 "prog_io_type_defn.m"
      }
#line 791 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeWhereDetails_10;
#line 791 "prog_io_type_defn.m"
  }
#line 784 "prog_io_type_defn.m"
}

#line 716 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_abstract_type_defn_7_p_0(
#line 716 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_8,
#line 716 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_9,
#line 716 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_10,
#line 716 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes0_11,
#line 716 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_12,
#line 716 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_13,
#line 716 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_14)
#line 716 "prog_io_type_defn.m"
{
#line 720 "prog_io_type_defn.m"
  {
#line 720 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 720 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_15;
#line 720 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__IsSolverType_16;
#line 720 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Attributes_17;
#line 1315 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_36;
#line 1313 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_37_37;
#line 1313 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_38_38;
#line 1313 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_35_35;

#line 721 "prog_io_type_defn.m"
    {
#line 721 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__HeadTerm_10, &parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_15);
    }
#line 1313 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Attributes0_11)) == (MR_mktag((MR_Integer) 1)));
#line 1313 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1313 "prog_io_type_defn.m"
      {
#line 1313 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Attributes0_11, (MR_Integer) 0)));
#line 1313 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Attributes0_11, (MR_Integer) 1)));
#line 1313 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_37_37, (MR_Integer) 0)));
#line 1313 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_37_37, (MR_Integer) 1)));
#line 1313 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1313 "prog_io_type_defn.m"
      }
#line 1315 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1314 "prog_io_type_defn.m"
      {
#line 1314 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Attributes_17 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_36;
#line 1314 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__IsSolverType_16 = (MR_Integer) 1;
#line 1314 "prog_io_type_defn.m"
      }
#line 1315 "prog_io_type_defn.m"
    else
#line 1316 "prog_io_type_defn.m"
      {
#line 1316 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__IsSolverType_16 = (MR_Integer) 0;
#line 1316 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Attributes_17 = parse_tree__prog_io_type_defn__Attributes0_11;
#line 1316 "prog_io_type_defn.m"
      }
#line 726 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_15)) == (MR_mktag((MR_Integer) 0))))
#line 724 "prog_io_type_defn.m"
      {
#line 724 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Specs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_15, (MR_Integer) 0)));

#line 725 "prog_io_type_defn.m"
        {
#line 725 "prog_io_type_defn.m"
          MR_Word base;
#line 725 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 725 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeItem_14 = base;
#line 725 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_18));
#line 725 "prog_io_type_defn.m"
        }
#line 724 "prog_io_type_defn.m"
      }
#line 726 "prog_io_type_defn.m"
    else
#line 727 "prog_io_type_defn.m"
      {
#line 727 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Name_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_15, (MR_Integer) 0)));
#line 727 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Params_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_15, (MR_Integer) 1)));
#line 727 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeVarSet_21;
#line 727 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeDefn_22;
#line 727 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__ItemTypeDefn_23;
#line 727 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Item_24;
#line 727 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeItem0_25;

#line 728 "prog_io_type_defn.m"
        {
#line 728 "prog_io_type_defn.m"
          mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_9, &parse_tree__prog_io_type_defn__TypeVarSet_21);
        }
#line 732 "prog_io_type_defn.m"
        if ((parse_tree__prog_io_type_defn__IsSolverType_16 == (MR_Integer) 0))
#line 730 "prog_io_type_defn.m"
          {
#line 731 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__TypeDefn_22 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_defn_scalar_common_2[19]);
#line 730 "prog_io_type_defn.m"
          }
#line 732 "prog_io_type_defn.m"
        else
#line 733 "prog_io_type_defn.m"
          {
#line 734 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__TypeDefn_22 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_defn_scalar_common_2[20]);
#line 733 "prog_io_type_defn.m"
          }
#line 736 "prog_io_type_defn.m"
        {
#line 736 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__ItemTypeDefn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 736 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_23, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeVarSet_21));
#line 736 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_23, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_19));
#line 736 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_23, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__Params_20));
#line 736 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_23, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn_22));
#line 736 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_23, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_12));
#line 736 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_23, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__SeqNum_13));
#line 736 "prog_io_type_defn.m"
        }
#line 738 "prog_io_type_defn.m"
        {
#line 738 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Item_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 738 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__Item_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 738 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__Item_24, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__ItemTypeDefn_23));
#line 738 "prog_io_type_defn.m"
        }
#line 739 "prog_io_type_defn.m"
        {
#line 739 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeItem0_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 739 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItem0_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Item_24));
#line 739 "prog_io_type_defn.m"
        }
#line 740 "prog_io_type_defn.m"
        {
#line 740 "prog_io_type_defn.m"
          parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_type_defn__MaybeItem0_25, parse_tree__prog_io_type_defn__Attributes_17, parse_tree__prog_io_type_defn__MaybeItem_14);
#line 740 "prog_io_type_defn.m"
          return;
        }
#line 727 "prog_io_type_defn.m"
      }
#line 720 "prog_io_type_defn.m"
  }
#line 716 "prog_io_type_defn.m"
}

#line 680 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_1(
#line 680 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 680 "prog_io_type_defn.m"
{
#line 680 "prog_io_type_defn.m"
  {
#line 680 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 680 "prog_io_type_defn.m"
    MR_builtin_longjmp((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__commit_0, 1);
#line 680 "prog_io_type_defn.m"
  }
#line 680 "prog_io_type_defn.m"
}

#line 680 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_2(
#line 680 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 680 "prog_io_type_defn.m"
{
#line 680 "prog_io_type_defn.m"
  {
#line 680 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 680 "prog_io_type_defn.m"
    {
#line 682 "prog_io_type_defn.m"
      {
#line 682 "prog_io_type_defn.m"
        (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], ((MR_Box) ((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__Var_25)), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__Params_23);
      }
#line 682 "prog_io_type_defn.m"
      (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__succeeded = !((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__succeeded);
#line 682 "prog_io_type_defn.m"
      if ((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__succeeded)
#line 682 "prog_io_type_defn.m"
        {
#line 682 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_1(parse_tree__prog_io_type_defn__env_ptr);
#line 682 "prog_io_type_defn.m"
          return;
        }
#line 680 "prog_io_type_defn.m"
    }
#line 680 "prog_io_type_defn.m"
  }
#line 680 "prog_io_type_defn.m"
}

#line 680 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_3(
#line 680 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 680 "prog_io_type_defn.m"
{
#line 680 "prog_io_type_defn.m"
  {
#line 680 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 680 "prog_io_type_defn.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__commit_0) == 0)
#line 680 "prog_io_type_defn.m"
      {
#line 680 "prog_io_type_defn.m"
        {
#line 680 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__RepnType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__SolverTypeDetails_19, (MR_Integer) 0)));
#line 680 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__SolverTypeDetails_19, (MR_Integer) 1)));
#line 680 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__SolverTypeDetails_19, (MR_Integer) 2)));
#line 680 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__SolverTypeDetails_19, (MR_Integer) 3)));
#line 680 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__SolverTypeDetails_19, (MR_Integer) 4)));

#line 681 "prog_io_type_defn.m"
          {
#line 681 "prog_io_type_defn.m"
            parse_tree__prog_type__type_contains_var_2_p_0(parse_tree__prog_io_type_defn__RepnType_24, &(parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__Var_25, parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_2, parse_tree__prog_io_type_defn__env_ptr);
          }
#line 680 "prog_io_type_defn.m"
        }
#line 680 "prog_io_type_defn.m"
        (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__succeeded = MR_FALSE;
#line 680 "prog_io_type_defn.m"
      }
#line 680 "prog_io_type_defn.m"
    else
#line 680 "prog_io_type_defn.m"
      (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__succeeded = MR_TRUE;
#line 680 "prog_io_type_defn.m"
  }
#line 680 "prog_io_type_defn.m"
}

#line 664 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0(
#line 664 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_10,
#line 664 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_11,
#line 664 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_12,
#line 664 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_13,
#line 664 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeUserEqComp_14,
#line 664 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes_15,
#line 664 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_16,
#line 664 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_17,
#line 664 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_18)
#line 664 "prog_io_type_defn.m"
{
#line 664 "prog_io_type_defn.m"
  {
#line 664 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0_s parse_tree__prog_io_type_defn__env;

#line 672 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 704 "prog_io_type_defn.m"
      {
#line 704 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 704 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 704 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_43_43;
#line 704 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_48_48;
#line 704 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_75;

#line 707 "prog_io_type_defn.m"
        {
#line 707 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_43_43 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadTerm_12);
        }
#line 707 "prog_io_type_defn.m"
        {
#line 707 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 707 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_43_43));
#line 707 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[139])));
#line 707 "prog_io_type_defn.m"
        }
#line 707 "prog_io_type_defn.m"
        {
#line 707 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 707 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 707 "prog_io_type_defn.m"
        }
#line 706 "prog_io_type_defn.m"
        {
#line 706 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 706 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 706 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 706 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_75, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 706 "prog_io_type_defn.m"
        }
#line 708 "prog_io_type_defn.m"
        {
#line 708 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_75));
#line 708 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 708 "prog_io_type_defn.m"
        }
#line 708 "prog_io_type_defn.m"
        {
#line 708 "prog_io_type_defn.m"
          MR_Word base;
#line 708 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 708 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeItem_18 = base;
#line 708 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_48_48));
#line 708 "prog_io_type_defn.m"
        }
#line 704 "prog_io_type_defn.m"
      }
#line 672 "prog_io_type_defn.m"
    else
#line 672 "prog_io_type_defn.m"
      {
#line 672 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeNameParams_20;

#line 672 "prog_io_type_defn.m"
        (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__SolverTypeDetails_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_13, (MR_Integer) 0)));
#line 673 "prog_io_type_defn.m"
        {
#line 673 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(parse_tree__prog_io_type_defn__ModuleName_10, parse_tree__prog_io_type_defn__VarSet_11, parse_tree__prog_io_type_defn__HeadTerm_12, &parse_tree__prog_io_type_defn__MaybeNameParams_20);
        }
#line 677 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeNameParams_20)) == (MR_mktag((MR_Integer) 0))))
#line 675 "prog_io_type_defn.m"
          {
#line 675 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Specs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeNameParams_20, (MR_Integer) 0)));

#line 676 "prog_io_type_defn.m"
            {
#line 676 "prog_io_type_defn.m"
              MR_Word base;
#line 676 "prog_io_type_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 676 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeItem_18 = base;
#line 676 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_21));
#line 676 "prog_io_type_defn.m"
            }
#line 675 "prog_io_type_defn.m"
          }
#line 677 "prog_io_type_defn.m"
        else
#line 678 "prog_io_type_defn.m"
          {
#line 678 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Name_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameParams_20, (MR_Integer) 0)));

#line 678 "prog_io_type_defn.m"
            (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__Params_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameParams_20, (MR_Integer) 1)));
#line 680 "prog_io_type_defn.m"
            {
#line 680 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_3(&parse_tree__prog_io_type_defn__env);
            }
#line 692 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__succeeded)
#line 684 "prog_io_type_defn.m"
              {
#line 684 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_81_81 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 684 "prog_io_type_defn.m"
                MR_String parse_tree__prog_io_type_defn__HeadTermStr_26;
#line 684 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Pieces_27;
#line 684 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_28;
#line 684 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 684 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_55_55;
#line 684 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_56_56;
#line 684 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_65_65;
#line 684 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_66_66;
#line 684 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_67_67;
#line 684 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_68_68;
#line 684 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_69_69;
#line 684 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_72_72;

#line 684 "prog_io_type_defn.m"
                {
#line 684 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__HeadTermStr_26 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_81_81, parse_tree__prog_io_type_defn__VarSet_11, parse_tree__prog_io_type_defn__HeadTerm_12);
                }
#line 687 "prog_io_type_defn.m"
                {
#line 687 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 687 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 687 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__HeadTermStr_26));
#line 687 "prog_io_type_defn.m"
                }
#line 687 "prog_io_type_defn.m"
                {
#line 687 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 687 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_56_56));
#line 687 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[21])));
#line 687 "prog_io_type_defn.m"
                }
#line 686 "prog_io_type_defn.m"
                {
#line 686 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[141])));
#line 686 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_55_55));
#line 686 "prog_io_type_defn.m"
                }
#line 685 "prog_io_type_defn.m"
                {
#line 685 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Pieces_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[140])));
#line 685 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_27, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_52_52));
#line 685 "prog_io_type_defn.m"
                }
#line 689 "prog_io_type_defn.m"
                {
#line 689 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_67_67 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_81_81, parse_tree__prog_io_type_defn__HeadTerm_12);
                }
#line 690 "prog_io_type_defn.m"
                {
#line 690 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 690 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_27));
#line 690 "prog_io_type_defn.m"
                }
#line 690 "prog_io_type_defn.m"
                {
#line 690 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 690 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_69_69));
#line 690 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 690 "prog_io_type_defn.m"
                }
#line 689 "prog_io_type_defn.m"
                {
#line 689 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 689 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_67_67));
#line 689 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_66_66, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_68_68));
#line 689 "prog_io_type_defn.m"
                }
#line 690 "prog_io_type_defn.m"
                {
#line 690 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 690 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_66_66));
#line 690 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 690 "prog_io_type_defn.m"
                }
#line 688 "prog_io_type_defn.m"
                {
#line 688 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 688 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 688 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 688 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_28, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_65_65));
#line 688 "prog_io_type_defn.m"
                }
#line 691 "prog_io_type_defn.m"
                {
#line 691 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_28));
#line 691 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 691 "prog_io_type_defn.m"
                }
#line 691 "prog_io_type_defn.m"
                {
#line 691 "prog_io_type_defn.m"
                  MR_Word base;
#line 691 "prog_io_type_defn.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 691 "prog_io_type_defn.m"
                  *parse_tree__prog_io_type_defn__MaybeItem_18 = base;
#line 691 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_72_72));
#line 691 "prog_io_type_defn.m"
                }
#line 684 "prog_io_type_defn.m"
              }
#line 692 "prog_io_type_defn.m"
            else
#line 693 "prog_io_type_defn.m"
              {
#line 693 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeVarSet_29;
#line 693 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeDefn_30;
#line 693 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ItemTypeDefn_31;
#line 693 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Item_32;
#line 693 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeItem0_33;

#line 693 "prog_io_type_defn.m"
                {
#line 693 "prog_io_type_defn.m"
                  mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_11, &parse_tree__prog_io_type_defn__TypeVarSet_29);
                }
#line 694 "prog_io_type_defn.m"
                {
#line 694 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__TypeDefn_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 694 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__TypeDefn_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 694 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__TypeDefn_30, 1) = ((MR_Box) ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__SolverTypeDetails_19));
#line 694 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__TypeDefn_30, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeUserEqComp_14));
#line 694 "prog_io_type_defn.m"
                }
#line 696 "prog_io_type_defn.m"
                {
#line 696 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__ItemTypeDefn_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 696 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_31, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeVarSet_29));
#line 696 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_31, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_22));
#line 696 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_31, 2) = ((MR_Box) ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__Params_23));
#line 696 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_31, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn_30));
#line 696 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_31, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_16));
#line 696 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_31, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__SeqNum_17));
#line 696 "prog_io_type_defn.m"
                }
#line 698 "prog_io_type_defn.m"
                {
#line 698 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Item_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__Item_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 698 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__Item_32, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__ItemTypeDefn_31));
#line 698 "prog_io_type_defn.m"
                }
#line 699 "prog_io_type_defn.m"
                {
#line 699 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeItem0_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 699 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItem0_33, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Item_32));
#line 699 "prog_io_type_defn.m"
                }
#line 700 "prog_io_type_defn.m"
                {
#line 700 "prog_io_type_defn.m"
                  parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_type_defn__MaybeItem0_33, parse_tree__prog_io_type_defn__Attributes_15, parse_tree__prog_io_type_defn__MaybeItem_18);
#line 700 "prog_io_type_defn.m"
                  return;
                }
#line 693 "prog_io_type_defn.m"
              }
#line 678 "prog_io_type_defn.m"
          }
#line 672 "prog_io_type_defn.m"
      }
#line 664 "prog_io_type_defn.m"
  }
#line 664 "prog_io_type_defn.m"
}

#line 622 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_type_is_abstract_enum_7_p_0(
#line 622 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_8,
#line 622 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_9,
#line 622 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_10,
#line 622 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_11,
#line 622 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_12,
#line 622 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_13,
#line 622 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_14)
#line 622 "prog_io_type_defn.m"
{
#line 626 "prog_io_type_defn.m"
  {
#line 626 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 626 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeNameParams_15;

#line 627 "prog_io_type_defn.m"
    {
#line 627 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__HeadTerm_10, &parse_tree__prog_io_type_defn__MaybeNameParams_15);
    }
#line 631 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeNameParams_15)) == (MR_mktag((MR_Integer) 0))))
#line 629 "prog_io_type_defn.m"
      {
#line 629 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Specs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeNameParams_15, (MR_Integer) 0)));

#line 630 "prog_io_type_defn.m"
        {
#line 630 "prog_io_type_defn.m"
          MR_Word base;
#line 630 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 630 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeItem_14 = base;
#line 630 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_16));
#line 630 "prog_io_type_defn.m"
        }
#line 629 "prog_io_type_defn.m"
      }
#line 631 "prog_io_type_defn.m"
    else
#line 632 "prog_io_type_defn.m"
      {
#line 632 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Name_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameParams_15, (MR_Integer) 0)));
#line 632 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Params_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameParams_15, (MR_Integer) 1)));
#line 655 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Args_19;
#line 634 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_30_30;
#line 634 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_31_31;
#line 634 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;

#line 634 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__BodyTerm_11)) == (MR_mktag((MR_Integer) 0)));
#line 634 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 634 "prog_io_type_defn.m"
          {
#line 634 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BodyTerm_11, (MR_Integer) 0)));
#line 634 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Args_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BodyTerm_11, (MR_Integer) 1)));
#line 634 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BodyTerm_11, (MR_Integer) 2)));
#line 634 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 634 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 634 "prog_io_type_defn.m"
              {
#line 634 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_30_30, (MR_Integer) 0)));
#line 634 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_31_31, (MR_String) "type_is_abstract_enum") == 0);
#line 634 "prog_io_type_defn.m"
              }
#line 634 "prog_io_type_defn.m"
          }
#line 655 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 648 "prog_io_type_defn.m"
          {
#line 648 "prog_io_type_defn.m"
            MR_Integer parse_tree__prog_io_type_defn__NumBits_22;
#line 638 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Arg_21;
#line 638 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_32_32;
#line 638 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_33_33;
#line 638 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_34_34;
#line 639 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_23_23;

#line 638 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Args_19)) == (MR_mktag((MR_Integer) 1)));
#line 638 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 638 "prog_io_type_defn.m"
              {
#line 638 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__Arg_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Args_19, (MR_Integer) 0)));
#line 638 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Args_19, (MR_Integer) 1)));
#line 638 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 638 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 638 "prog_io_type_defn.m"
                  {
#line 639 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Arg_21)) == (MR_mktag((MR_Integer) 0)));
#line 639 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 639 "prog_io_type_defn.m"
                      {
#line 639 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_21, (MR_Integer) 0)));
#line 639 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_21, (MR_Integer) 1)));
#line 639 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_21, (MR_Integer) 2)));
#line 639 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 638 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 638 "prog_io_type_defn.m"
                          {
#line 639 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 639 "prog_io_type_defn.m"
                            if (parse_tree__prog_io_type_defn__succeeded)
#line 639 "prog_io_type_defn.m"
                              parse_tree__prog_io_type_defn__NumBits_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_33_33, (MR_Integer) 0)));
#line 638 "prog_io_type_defn.m"
                          }
#line 639 "prog_io_type_defn.m"
                      }
#line 638 "prog_io_type_defn.m"
                  }
#line 638 "prog_io_type_defn.m"
              }
#line 648 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 641 "prog_io_type_defn.m"
              {
#line 641 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeVarSet_24;
#line 641 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeDefn_25;
#line 641 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ItemTypeDefn_26;
#line 641 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Item_27;
#line 641 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_35_35;

#line 641 "prog_io_type_defn.m"
                {
#line 641 "prog_io_type_defn.m"
                  mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_9, &parse_tree__prog_io_type_defn__TypeVarSet_24);
                }
#line 643 "prog_io_type_defn.m"
                {
#line 643 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 643 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__NumBits_22));
#line 643 "prog_io_type_defn.m"
                }
#line 642 "prog_io_type_defn.m"
                {
#line 642 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__TypeDefn_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 642 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(2), parse_tree__prog_io_type_defn__TypeDefn_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_35_35));
#line 642 "prog_io_type_defn.m"
                }
#line 644 "prog_io_type_defn.m"
                {
#line 644 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__ItemTypeDefn_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 644 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeVarSet_24));
#line 644 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_26, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_17));
#line 644 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_26, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__Params_18));
#line 644 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_26, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn_25));
#line 644 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_26, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_12));
#line 644 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_26, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__SeqNum_13));
#line 644 "prog_io_type_defn.m"
                }
#line 646 "prog_io_type_defn.m"
                {
#line 646 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Item_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 646 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__Item_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 646 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__Item_27, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__ItemTypeDefn_26));
#line 646 "prog_io_type_defn.m"
                }
#line 647 "prog_io_type_defn.m"
                {
#line 647 "prog_io_type_defn.m"
                  MR_Word base;
#line 647 "prog_io_type_defn.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 647 "prog_io_type_defn.m"
                  *parse_tree__prog_io_type_defn__MaybeItem_14 = base;
#line 647 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Item_27));
#line 647 "prog_io_type_defn.m"
                }
#line 641 "prog_io_type_defn.m"
              }
#line 648 "prog_io_type_defn.m"
            else
#line 650 "prog_io_type_defn.m"
              {
#line 650 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_29;
#line 650 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_46_46;
#line 650 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_47_47;
#line 650 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_52_52;

#line 652 "prog_io_type_defn.m"
                {
#line 652 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 652 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_12));
#line 652 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[137])));
#line 652 "prog_io_type_defn.m"
                }
#line 652 "prog_io_type_defn.m"
                {
#line 652 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 652 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 652 "prog_io_type_defn.m"
                }
#line 651 "prog_io_type_defn.m"
                {
#line 651 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 651 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 651 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 651 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_29, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_46_46));
#line 651 "prog_io_type_defn.m"
                }
#line 653 "prog_io_type_defn.m"
                {
#line 653 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 653 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_29));
#line 653 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 653 "prog_io_type_defn.m"
                }
#line 653 "prog_io_type_defn.m"
                {
#line 653 "prog_io_type_defn.m"
                  MR_Word base;
#line 653 "prog_io_type_defn.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 653 "prog_io_type_defn.m"
                  *parse_tree__prog_io_type_defn__MaybeItem_14 = base;
#line 653 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_52_52));
#line 653 "prog_io_type_defn.m"
                }
#line 650 "prog_io_type_defn.m"
              }
#line 648 "prog_io_type_defn.m"
          }
#line 655 "prog_io_type_defn.m"
        else
#line 657 "prog_io_type_defn.m"
          {
#line 657 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_67_67;
#line 657 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_68_68;
#line 657 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_73_73;
#line 657 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Spec_76;

#line 659 "prog_io_type_defn.m"
            {
#line 659 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 659 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_12));
#line 659 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[138])));
#line 659 "prog_io_type_defn.m"
            }
#line 659 "prog_io_type_defn.m"
            {
#line 659 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_68_68));
#line 659 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 659 "prog_io_type_defn.m"
            }
#line 658 "prog_io_type_defn.m"
            {
#line 658 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Spec_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 658 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 658 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 658 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_76, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_67_67));
#line 658 "prog_io_type_defn.m"
            }
#line 660 "prog_io_type_defn.m"
            {
#line 660 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_76));
#line 660 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 660 "prog_io_type_defn.m"
            }
#line 660 "prog_io_type_defn.m"
            {
#line 660 "prog_io_type_defn.m"
              MR_Word base;
#line 660 "prog_io_type_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 660 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeItem_14 = base;
#line 660 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_73_73));
#line 660 "prog_io_type_defn.m"
            }
#line 657 "prog_io_type_defn.m"
          }
#line 632 "prog_io_type_defn.m"
      }
#line 626 "prog_io_type_defn.m"
  }
#line 622 "prog_io_type_defn.m"
}

#line 583 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_block_type_defn_8_p_0(
#line 583 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_9,
#line 583 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_10,
#line 583 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_11,
#line 583 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_12,
#line 583 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes0_13,
#line 583 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_14,
#line 583 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_15,
#line 583 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_16)
#line 583 "prog_io_type_defn.m"
{
#line 9220 "parse_tree.prog_io_type_defn.c"
  {
#line 9222 "parse_tree.prog_io_type_defn.c"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Attributes0_13)) == (MR_mktag((MR_Integer) 1)));
#line 9224 "parse_tree.prog_io_type_defn.c"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_60;
#line 1313 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_61_61;
#line 1313 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_62_62;
#line 1313 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_59_59;

#line 1313 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1313 "prog_io_type_defn.m"
      {
#line 1313 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Attributes0_13, (MR_Integer) 0)));
#line 1313 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Attributes0_13, (MR_Integer) 1)));
#line 1313 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_61_61, (MR_Integer) 0)));
#line 1313 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_61_61, (MR_Integer) 1)));
#line 1313 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1313 "prog_io_type_defn.m"
      }
#line 9249 "parse_tree.prog_io_type_defn.c"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 9251 "parse_tree.prog_io_type_defn.c"
      {
#line 9253 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__MaybeWhere_19;
#line 9255 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__V_28_28;

#line 597 "prog_io_type_defn.m"
        {
#line 597 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 597 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__BodyTerm_12));
#line 597 "prog_io_type_defn.m"
        }
#line 596 "prog_io_type_defn.m"
        {
#line 596 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeWhere_19 = parse_tree__prog_io_type_defn__parse_type_decl_where_term_4_f_0((MR_Integer) 1, parse_tree__prog_io_type_defn__ModuleName_9, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__V_28_28);
        }
#line 601 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeWhere_19)) == (MR_mktag((MR_Integer) 0))))
#line 599 "prog_io_type_defn.m"
          {
#line 599 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Specs_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhere_19, (MR_Integer) 0)));

#line 600 "prog_io_type_defn.m"
            {
#line 600 "prog_io_type_defn.m"
              MR_Word base;
#line 600 "prog_io_type_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 600 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeItem_16 = base;
#line 600 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_20));
#line 600 "prog_io_type_defn.m"
            }
#line 599 "prog_io_type_defn.m"
          }
#line 601 "prog_io_type_defn.m"
        else
#line 603 "prog_io_type_defn.m"
          {
#line 603 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_19, (MR_Integer) 0)));
#line 603 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__MaybeUserEqComp_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_19, (MR_Integer) 1)));
#line 603 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgCtors_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_19, (MR_Integer) 2)));

#line 613 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__MaybeDirectArgCtors_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "prog_io_type_defn.m"
              {
#line 615 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0(parse_tree__prog_io_type_defn__ModuleName_9, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__HeadTerm_11, parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_21, parse_tree__prog_io_type_defn__MaybeUserEqComp_22, parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_60, parse_tree__prog_io_type_defn__Context_14, parse_tree__prog_io_type_defn__SeqNum_15, parse_tree__prog_io_type_defn__MaybeItem_16);
#line 615 "prog_io_type_defn.m"
                return;
              }
#line 613 "prog_io_type_defn.m"
            else
#line 605 "prog_io_type_defn.m"
              {
#line 605 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_26;
#line 605 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_45_45;
#line 605 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_46_46;
#line 605 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_47_47;
#line 605 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_52_52;

#line 610 "prog_io_type_defn.m"
                {
#line 610 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_47_47 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadTerm_11);
                }
#line 610 "prog_io_type_defn.m"
                {
#line 610 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 610 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 610 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[136])));
#line 610 "prog_io_type_defn.m"
                }
#line 611 "prog_io_type_defn.m"
                {
#line 611 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_46_46));
#line 611 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 611 "prog_io_type_defn.m"
                }
#line 609 "prog_io_type_defn.m"
                {
#line 609 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 609 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 609 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 609 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_26, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_45_45));
#line 609 "prog_io_type_defn.m"
                }
#line 612 "prog_io_type_defn.m"
                {
#line 612 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_26));
#line 612 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 612 "prog_io_type_defn.m"
                }
#line 612 "prog_io_type_defn.m"
                {
#line 612 "prog_io_type_defn.m"
                  MR_Word base;
#line 612 "prog_io_type_defn.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 612 "prog_io_type_defn.m"
                  *parse_tree__prog_io_type_defn__MaybeItem_16 = base;
#line 612 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_52_52));
#line 612 "prog_io_type_defn.m"
                }
#line 605 "prog_io_type_defn.m"
              }
#line 603 "prog_io_type_defn.m"
          }
#line 9390 "parse_tree.prog_io_type_defn.c"
      }
#line 9392 "parse_tree.prog_io_type_defn.c"
    else
#line 592 "prog_io_type_defn.m"
      {
#line 592 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__parse_where_type_is_abstract_enum_7_p_0(parse_tree__prog_io_type_defn__ModuleName_9, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__HeadTerm_11, parse_tree__prog_io_type_defn__BodyTerm_12, parse_tree__prog_io_type_defn__Context_14, parse_tree__prog_io_type_defn__SeqNum_15, parse_tree__prog_io_type_defn__MaybeItem_16);
#line 592 "prog_io_type_defn.m"
        return;
      }
#line 9401 "parse_tree.prog_io_type_defn.c"
  }
#line 583 "prog_io_type_defn.m"
}

#line 516 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__find_constructor_4_p_0(
#line 516 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 516 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__SymName_7,
#line 516 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__Arity_8,
#line 516 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Ctor_9)
#line 516 "prog_io_type_defn.m"
{
#line 519 "prog_io_type_defn.m"
  while (MR_TRUE)
#line 519 "prog_io_type_defn.m"
    {
#line 519 "prog_io_type_defn.m"
      /* tailcall optimized into a loop */
#line 519 "prog_io_type_defn.m"
      {
#line 519 "prog_io_type_defn.m"
        MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 519 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__H_5;
#line 519 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__T_6;
#line 521 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_14_14;
#line 521 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Args_12;
#line 521 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_15_15;
#line 521 "prog_io_type_defn.m"
        MR_Integer parse_tree__prog_io_type_defn__V_16_16;
#line 521 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_10_10;
#line 521 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_11_11;
#line 521 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_13_13;

#line 519 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 519 "prog_io_type_defn.m"
          {
#line 519 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__H_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__1_1, (MR_Integer) 0)));
#line 519 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__1_1, (MR_Integer) 1)));
#line 521 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__H_5, (MR_Integer) 0)));
#line 521 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__H_5, (MR_Integer) 1)));
#line 521 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__H_5, (MR_Integer) 2)));
#line 521 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__H_5, (MR_Integer) 3)));
#line 521 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__H_5, (MR_Integer) 4)));
#line 521 "prog_io_type_defn.m"
            {
#line 521 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_type_defn__SymName_7, parse_tree__prog_io_type_defn__V_15_15);
            }
#line 521 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 521 "prog_io_type_defn.m"
              {
#line 9475 "parse_tree.prog_io_type_defn.c"
                parse_tree__prog_io_type_defn__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 522 "prog_io_type_defn.m"
                {
#line 522 "prog_io_type_defn.m"
                  mercury__list__length_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_14_14, parse_tree__prog_io_type_defn__Args_12, &parse_tree__prog_io_type_defn__V_16_16);
                }
#line 522 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__Arity_8 == parse_tree__prog_io_type_defn__V_16_16);
#line 521 "prog_io_type_defn.m"
              }
#line 525 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 524 "prog_io_type_defn.m"
              {
#line 524 "prog_io_type_defn.m"
                *parse_tree__prog_io_type_defn__Ctor_9 = parse_tree__prog_io_type_defn__H_5;
#line 524 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = MR_TRUE;
#line 524 "prog_io_type_defn.m"
              }
#line 525 "prog_io_type_defn.m"
            else
#line 526 "prog_io_type_defn.m"
              {
#line 526 "prog_io_type_defn.m"
                /* direct tailcall eliminated */
#line 526 "prog_io_type_defn.m"
                {
#line 526 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__HeadVar__1__tmp_copy_1 = parse_tree__prog_io_type_defn__T_6;

#line 526 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__HeadVar__1_1 = parse_tree__prog_io_type_defn__HeadVar__1__tmp_copy_1;
#line 526 "prog_io_type_defn.m"
                }
#line 526 "prog_io_type_defn.m"
                continue;
#line 526 "prog_io_type_defn.m"
              }
#line 519 "prog_io_type_defn.m"
          }
#line 519 "prog_io_type_defn.m"
        return parse_tree__prog_io_type_defn__succeeded;
#line 519 "prog_io_type_defn.m"
      }
#line 519 "prog_io_type_defn.m"
      break;
#line 519 "prog_io_type_defn.m"
    }
#line 516 "prog_io_type_defn.m"
}

#line 477 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__check_direct_arg_ctors_5_p_0(
#line 477 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 477 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_2,
#line 477 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3,
#line 477 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4,
#line 477 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_5)
#line 477 "prog_io_type_defn.m"
{
#line 481 "prog_io_type_defn.m"
  while (MR_TRUE)
#line 481 "prog_io_type_defn.m"
    {
#line 481 "prog_io_type_defn.m"
      /* tailcall optimized into a loop */
#line 481 "prog_io_type_defn.m"
      {
#line 481 "prog_io_type_defn.m"
        MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 481 "prog_io_type_defn.m"
        if ((parse_tree__prog_io_type_defn__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 481 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_5 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4;
#line 481 "prog_io_type_defn.m"
        else
#line 483 "prog_io_type_defn.m"
          {
#line 483 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__DirectArgCtor_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__2_2, (MR_Integer) 0)));
#line 483 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__DirectArgCtors_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__2_2, (MR_Integer) 1)));
#line 483 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__DirectArgCtor_12, (MR_Integer) 0)));
#line 483 "prog_io_type_defn.m"
            MR_Integer parse_tree__prog_io_type_defn__Arity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__DirectArgCtor_12, (MR_Integer) 1)));
#line 483 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_53_53;
#line 505 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Ctor_18;

#line 485 "prog_io_type_defn.m"
            {
#line 485 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_type_defn__find_constructor_4_p_0(parse_tree__prog_io_type_defn__HeadVar__1_1, parse_tree__prog_io_type_defn__SymName_16, parse_tree__prog_io_type_defn__Arity_17, &parse_tree__prog_io_type_defn__Ctor_18);
            }
#line 505 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 486 "prog_io_type_defn.m"
              {
#line 486 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ExistQVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 0)));
#line 486 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn___Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 1)));
#line 486 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn___SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 2)));
#line 486 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn___Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 3)));
#line 486 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn___Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 4)));

#line 487 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__Arity_17 == (MR_Integer) 1);
#line 487 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = !(parse_tree__prog_io_type_defn__succeeded);
#line 494 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 490 "prog_io_type_defn.m"
                  {
#line 490 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Spec_25;
#line 490 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_46_46;
#line 490 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_47_47;
#line 490 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_48_48;

#line 492 "prog_io_type_defn.m"
                    {
#line 492 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_48_48 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadVar__3_3);
                    }
#line 492 "prog_io_type_defn.m"
                    {
#line 492 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 492 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_48_48));
#line 492 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[132])));
#line 492 "prog_io_type_defn.m"
                    }
#line 492 "prog_io_type_defn.m"
                    {
#line 492 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 492 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 492 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 492 "prog_io_type_defn.m"
                    }
#line 491 "prog_io_type_defn.m"
                    {
#line 491 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 491 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 491 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 491 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_25, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_46_46));
#line 491 "prog_io_type_defn.m"
                    }
#line 493 "prog_io_type_defn.m"
                    {
#line 493 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 493 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_53_53, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_25));
#line 493 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_53_53, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4));
#line 493 "prog_io_type_defn.m"
                    }
#line 490 "prog_io_type_defn.m"
                  }
#line 494 "prog_io_type_defn.m"
                else
#line 502 "prog_io_type_defn.m"
                  {
#line 494 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_26_26;
#line 494 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_27_27;

#line 494 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__ExistQVars_19)) == (MR_mktag((MR_Integer) 1)));
#line 494 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 494 "prog_io_type_defn.m"
                      {
#line 494 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__ExistQVars_19, (MR_Integer) 0)));
#line 494 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__ExistQVars_19, (MR_Integer) 1)));
#line 498 "prog_io_type_defn.m"
                        {
#line 498 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_56_56;
#line 498 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_59_59;
#line 498 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_62_62;
#line 498 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_63_63;
#line 498 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_72_72;
#line 498 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_73_73;
#line 498 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_74_74;
#line 498 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_75_75;
#line 498 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_76_76;
#line 498 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__Pieces_107;
#line 498 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__Spec_108;

#line 497 "prog_io_type_defn.m"
                          {
#line 497 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 497 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 497 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__DirectArgCtor_12));
#line 497 "prog_io_type_defn.m"
                          }
#line 497 "prog_io_type_defn.m"
                          {
#line 497 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 497 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_63_63));
#line 497 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[54])));
#line 497 "prog_io_type_defn.m"
                          }
#line 496 "prog_io_type_defn.m"
                          {
#line 496 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_59_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[134])));
#line 496 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_59_59, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_62_62));
#line 496 "prog_io_type_defn.m"
                          }
#line 495 "prog_io_type_defn.m"
                          {
#line 495 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_56_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_defn_scalar_common_2[2])));
#line 495 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_59_59));
#line 495 "prog_io_type_defn.m"
                          }
#line 495 "prog_io_type_defn.m"
                          {
#line 495 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__Pieces_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_107, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[133])));
#line 495 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_107, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_56_56));
#line 495 "prog_io_type_defn.m"
                          }
#line 500 "prog_io_type_defn.m"
                          {
#line 500 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_74_74 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadVar__3_3);
                          }
#line 500 "prog_io_type_defn.m"
                          {
#line 500 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 500 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_107));
#line 500 "prog_io_type_defn.m"
                          }
#line 500 "prog_io_type_defn.m"
                          {
#line 500 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_76_76));
#line 500 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 500 "prog_io_type_defn.m"
                          }
#line 500 "prog_io_type_defn.m"
                          {
#line 500 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 500 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_74_74));
#line 500 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_73_73, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_75_75));
#line 500 "prog_io_type_defn.m"
                          }
#line 500 "prog_io_type_defn.m"
                          {
#line 500 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_73_73));
#line 500 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 500 "prog_io_type_defn.m"
                          }
#line 499 "prog_io_type_defn.m"
                          {
#line 499 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__Spec_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 499 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_108, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 499 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 499 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_108, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_72_72));
#line 499 "prog_io_type_defn.m"
                          }
#line 501 "prog_io_type_defn.m"
                          {
#line 501 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_53_53, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_108));
#line 501 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_53_53, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4));
#line 501 "prog_io_type_defn.m"
                          }
#line 498 "prog_io_type_defn.m"
                        }
#line 494 "prog_io_type_defn.m"
                      }
#line 494 "prog_io_type_defn.m"
                    else
#line 502 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_53_53 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4;
#line 502 "prog_io_type_defn.m"
                  }
#line 486 "prog_io_type_defn.m"
              }
#line 505 "prog_io_type_defn.m"
            else
#line 509 "prog_io_type_defn.m"
              {
#line 509 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_82_82;
#line 509 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_85_85;
#line 509 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_88_88;
#line 509 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_89_89;
#line 509 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_98_98;
#line 509 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_99_99;
#line 509 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_100_100;
#line 509 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_101_101;
#line 509 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_102_102;
#line 509 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Pieces_111;
#line 509 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_112;

#line 508 "prog_io_type_defn.m"
                {
#line 508 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_89_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 508 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_89_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 508 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_89_89, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__DirectArgCtor_12));
#line 508 "prog_io_type_defn.m"
                }
#line 508 "prog_io_type_defn.m"
                {
#line 508 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 508 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_88_88, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_89_89));
#line 508 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[56])));
#line 508 "prog_io_type_defn.m"
                }
#line 507 "prog_io_type_defn.m"
                {
#line 507 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 507 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_85_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[135])));
#line 507 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_85_85, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_88_88));
#line 507 "prog_io_type_defn.m"
                }
#line 506 "prog_io_type_defn.m"
                {
#line 506 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 506 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_82_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_defn_scalar_common_2[2])));
#line 506 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_82_82, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_85_85));
#line 506 "prog_io_type_defn.m"
                }
#line 506 "prog_io_type_defn.m"
                {
#line 506 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Pieces_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 506 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_111, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[133])));
#line 506 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_111, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_82_82));
#line 506 "prog_io_type_defn.m"
                }
#line 511 "prog_io_type_defn.m"
                {
#line 511 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_100_100 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadVar__3_3);
                }
#line 511 "prog_io_type_defn.m"
                {
#line 511 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 511 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_102_102, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_111));
#line 511 "prog_io_type_defn.m"
                }
#line 511 "prog_io_type_defn.m"
                {
#line 511 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_101_101, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_102_102));
#line 511 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 511 "prog_io_type_defn.m"
                }
#line 511 "prog_io_type_defn.m"
                {
#line 511 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 511 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_99_99, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_100_100));
#line 511 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_99_99, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_101_101));
#line 511 "prog_io_type_defn.m"
                }
#line 511 "prog_io_type_defn.m"
                {
#line 511 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_98_98, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_99_99));
#line 511 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 511 "prog_io_type_defn.m"
                }
#line 510 "prog_io_type_defn.m"
                {
#line 510 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 510 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 510 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 510 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_112, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_98_98));
#line 510 "prog_io_type_defn.m"
                }
#line 512 "prog_io_type_defn.m"
                {
#line 512 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_53_53, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_112));
#line 512 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_53_53, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4));
#line 512 "prog_io_type_defn.m"
                }
#line 509 "prog_io_type_defn.m"
              }
#line 514 "prog_io_type_defn.m"
            /* direct tailcall eliminated */
#line 514 "prog_io_type_defn.m"
            {
#line 514 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__HeadVar__2__tmp_copy_2 = parse_tree__prog_io_type_defn__DirectArgCtors_13;
#line 514 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0__tmp_copy_4 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_53_53;

#line 514 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0__tmp_copy_4;
#line 514 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__HeadVar__2_2 = parse_tree__prog_io_type_defn__HeadVar__2__tmp_copy_2;
#line 514 "prog_io_type_defn.m"
            }
#line 514 "prog_io_type_defn.m"
            continue;
#line 483 "prog_io_type_defn.m"
          }
#line 481 "prog_io_type_defn.m"
      }
#line 481 "prog_io_type_defn.m"
      break;
#line 481 "prog_io_type_defn.m"
    }
#line 477 "prog_io_type_defn.m"
}

#line 452 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_7(
#line 452 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 452 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 452 "prog_io_type_defn.m"
{
#line 452 "prog_io_type_defn.m"
  {
#line 452 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 452 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;

#line 452 "prog_io_type_defn.m"
    {
#line 452 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__452__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 452 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 452 "prog_io_type_defn.m"
  }
#line 452 "prog_io_type_defn.m"
}

#line 448 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_6(
#line 448 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 448 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 448 "prog_io_type_defn.m"
{
#line 448 "prog_io_type_defn.m"
  {
#line 448 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 448 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 448 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv8_HeadVar__2_2;

#line 448 "prog_io_type_defn.m"
    {
#line 448 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv8_HeadVar__2_2 = parse_tree__prog_data__prog_constraint_get_arg_types_1_f_0(((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 448 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv8_HeadVar__2_2));
#line 448 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 448 "prog_io_type_defn.m"
  }
#line 448 "prog_io_type_defn.m"
}

#line 424 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_5(
#line 424 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 424 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 424 "prog_io_type_defn.m"
{
#line 424 "prog_io_type_defn.m"
  {
#line 424 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 424 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;

#line 424 "prog_io_type_defn.m"
    {
#line 424 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__424__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 424 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 424 "prog_io_type_defn.m"
  }
#line 424 "prog_io_type_defn.m"
}

#line 420 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_4(
#line 420 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 420 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 420 "prog_io_type_defn.m"
{
#line 420 "prog_io_type_defn.m"
  {
#line 420 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 420 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 420 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv5_HeadVar__2_126;

#line 420 "prog_io_type_defn.m"
    {
#line 420 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv5_HeadVar__2_126 = parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__420__1_1_f_0(((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 420 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv5_HeadVar__2_126));
#line 420 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 420 "prog_io_type_defn.m"
  }
#line 420 "prog_io_type_defn.m"
}

#line 404 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_3(
#line 404 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 404 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 404 "prog_io_type_defn.m"
{
#line 404 "prog_io_type_defn.m"
  {
#line 404 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 404 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 404 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__conv2_HeadVar__4_269;

#line 404 "prog_io_type_defn.m"
    {
#line 404 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv2_HeadVar__4_269 = parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__404__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 404 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv2_HeadVar__4_269));
#line 404 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 404 "prog_io_type_defn.m"
  }
#line 404 "prog_io_type_defn.m"
}

#line 375 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_2(
#line 375 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 375 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 375 "prog_io_type_defn.m"
{
#line 375 "prog_io_type_defn.m"
  {
#line 375 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 375 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;

#line 375 "prog_io_type_defn.m"
    {
#line 375 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__375__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 375 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 375 "prog_io_type_defn.m"
  }
#line 375 "prog_io_type_defn.m"
}

#line 372 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_1(
#line 372 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 372 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 372 "prog_io_type_defn.m"
{
#line 372 "prog_io_type_defn.m"
  {
#line 372 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 372 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 372 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv0_HeadVar__2_58;

#line 372 "prog_io_type_defn.m"
    {
#line 372 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv0_HeadVar__2_58 = parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__372__1_1_f_0(((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 372 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv0_HeadVar__2_58));
#line 372 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 372 "prog_io_type_defn.m"
  }
#line 372 "prog_io_type_defn.m"
}

#line 362 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0(
#line 362 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 362 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_2,
#line 362 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_3,
#line 362 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__4_4,
#line 362 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5,
#line 362 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_6)
#line 362 "prog_io_type_defn.m"
{
#line 365 "prog_io_type_defn.m"
  while (MR_TRUE)
#line 365 "prog_io_type_defn.m"
    {
#line 365 "prog_io_type_defn.m"
      /* tailcall optimized into a loop */
#line 365 "prog_io_type_defn.m"
      {
#line 365 "prog_io_type_defn.m"
        MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 365 "prog_io_type_defn.m"
        if ((parse_tree__prog_io_type_defn__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 365 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_6 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5;
#line 365 "prog_io_type_defn.m"
        else
#line 366 "prog_io_type_defn.m"
          {
#line 366 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Ctor_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__4_4, (MR_Integer) 0)));
#line 366 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Ctors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__4_4, (MR_Integer) 1)));
#line 366 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ExistQVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 0)));
#line 366 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 1)));
#line 366 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__CtorArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 3)));
#line 366 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86;
#line 367 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn___CtorName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 2)));
#line 367 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn___Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 4)));
#line 391 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__NotExistQOrParamVars_29;
#line 372 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__TypeInfo_256_256;
#line 372 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__CtorArgTypes_24;
#line 372 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_26;
#line 372 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes_27;
#line 372 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_59_59;
#line 372 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_60_60;
#line 375 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn___ExistQOrParamVars_28;
#line 377 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_30_30;
#line 377 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_31_31;

#line 372 "prog_io_type_defn.m"
            {
#line 372 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__CtorArgTypes_24 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_4[3], parse_tree__prog_io_type_defn__CtorArgs_22);
            }
#line 373 "prog_io_type_defn.m"
            {
#line 373 "prog_io_type_defn.m"
              parse_tree__prog_type__type_vars_list_2_p_0(parse_tree__prog_io_type_defn__CtorArgTypes_24, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_26);
            }
#line 10299 "parse_tree.prog_io_type_defn.c"
            parse_tree__prog_io_type_defn__TypeInfo_256_256 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 374 "prog_io_type_defn.m"
            {
#line 374 "prog_io_type_defn.m"
              mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_256_256, parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_26, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes_27);
            }
#line 375 "prog_io_type_defn.m"
            {
#line 375 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_60_60 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeInfo_256_256, parse_tree__prog_io_type_defn__ExistQVars_19, parse_tree__prog_io_type_defn__HeadVar__1_1);
            }
#line 375 "prog_io_type_defn.m"
            {
#line 375 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 375 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_59_59, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[2]));
#line 375 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_59_59, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_2));
#line 375 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 375 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_59_59, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__V_60_60));
#line 375 "prog_io_type_defn.m"
            }
#line 375 "prog_io_type_defn.m"
            {
#line 375 "prog_io_type_defn.m"
              mercury__list__filter_4_p_0(parse_tree__prog_io_type_defn__TypeInfo_256_256, parse_tree__prog_io_type_defn__V_59_59, parse_tree__prog_io_type_defn__VarsInCtorArgTypes_27, &parse_tree__prog_io_type_defn___ExistQOrParamVars_28, &parse_tree__prog_io_type_defn__NotExistQOrParamVars_29);
            }
#line 377 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__NotExistQOrParamVars_29)) == (MR_mktag((MR_Integer) 1)));
#line 377 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 377 "prog_io_type_defn.m"
              {
#line 377 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotExistQOrParamVars_29, (MR_Integer) 0)));
#line 377 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotExistQOrParamVars_29, (MR_Integer) 1)));
#line 380 "prog_io_type_defn.m"
                {
#line 380 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_259_259 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 380 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_260_260 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 380 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__GenericVarSet_32;
#line 380 "prog_io_type_defn.m"
                  MR_String parse_tree__prog_io_type_defn__NotExistQOrParamVarsStr_33;
#line 380 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__Pieces_34;
#line 380 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__Spec_35;
#line 380 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_64_64;
#line 380 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_65_65;
#line 380 "prog_io_type_defn.m"
                  MR_String parse_tree__prog_io_type_defn__V_66_66;
#line 380 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_69_69;
#line 380 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_70_70;
#line 380 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_79_79;
#line 380 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_80_80;
#line 380 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_81_81;
#line 380 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_82_82;
#line 380 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_83_83;
#line 384 "prog_io_type_defn.m"
                  MR_Box parse_tree__prog_io_type_defn__conv1_V_66_66;

#line 380 "prog_io_type_defn.m"
                  {
#line 380 "prog_io_type_defn.m"
                    mercury__varset__coerce_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_259_259, parse_tree__prog_io_type_defn__TypeCtorInfo_260_260, parse_tree__prog_io_type_defn__VarSet_2, &parse_tree__prog_io_type_defn__GenericVarSet_32);
                  }
#line 382 "prog_io_type_defn.m"
                  {
#line 382 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__NotExistQOrParamVarsStr_33 = parse_tree__mercury_to_mercury__mercury_vars_to_string_3_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_260_260, parse_tree__prog_io_type_defn__GenericVarSet_32, (MR_Integer) 0, parse_tree__prog_io_type_defn__NotExistQOrParamVars_29);
                  }
#line 384 "prog_io_type_defn.m"
                  {
#line 384 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__conv1_V_66_66 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_io_type_defn__NotExistQOrParamVars_29, ((MR_Box) ((MR_String) "parameter")), ((MR_Box) ((MR_String) "parameters")));
                  }
#line 384 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_66_66 = ((MR_String) parse_tree__prog_io_type_defn__conv1_V_66_66);
#line 384 "prog_io_type_defn.m"
                  {
#line 384 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 384 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_65_65, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_66_66));
#line 384 "prog_io_type_defn.m"
                  }
#line 386 "prog_io_type_defn.m"
                  {
#line 386 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 386 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 386 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_70_70, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__NotExistQOrParamVarsStr_33));
#line 386 "prog_io_type_defn.m"
                  }
#line 386 "prog_io_type_defn.m"
                  {
#line 386 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 386 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_70_70));
#line 386 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[31])));
#line 386 "prog_io_type_defn.m"
                  }
#line 385 "prog_io_type_defn.m"
                  {
#line 385 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 385 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_65_65));
#line 385 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_64_64, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_69_69));
#line 385 "prog_io_type_defn.m"
                  }
#line 383 "prog_io_type_defn.m"
                  {
#line 383 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__Pieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 383 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[128])));
#line 383 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_34, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_64_64));
#line 383 "prog_io_type_defn.m"
                  }
#line 389 "prog_io_type_defn.m"
                  {
#line 389 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_81_81 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_259_259, parse_tree__prog_io_type_defn__BodyTerm_3);
                  }
#line 389 "prog_io_type_defn.m"
                  {
#line 389 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 389 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_34));
#line 389 "prog_io_type_defn.m"
                  }
#line 389 "prog_io_type_defn.m"
                  {
#line 389 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_82_82, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_83_83));
#line 389 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 389 "prog_io_type_defn.m"
                  }
#line 389 "prog_io_type_defn.m"
                  {
#line 389 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 389 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_81_81));
#line 389 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_80_80, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_82_82));
#line 389 "prog_io_type_defn.m"
                  }
#line 389 "prog_io_type_defn.m"
                  {
#line 389 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_80_80));
#line 389 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 389 "prog_io_type_defn.m"
                  }
#line 388 "prog_io_type_defn.m"
                  {
#line 388 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__Spec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 388 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 388 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 388 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_35, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_79_79));
#line 388 "prog_io_type_defn.m"
                  }
#line 390 "prog_io_type_defn.m"
                  {
#line 390 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_35));
#line 390 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5));
#line 390 "prog_io_type_defn.m"
                  }
#line 380 "prog_io_type_defn.m"
                }
#line 377 "prog_io_type_defn.m"
              }
#line 377 "prog_io_type_defn.m"
            else
#line 416 "prog_io_type_defn.m"
              {
#line 416 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ExistQParamsSet_38;
#line 396 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeInfo_263_263 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 396 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ExistQVarsSet_36;
#line 396 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParamsSet_37;

#line 396 "prog_io_type_defn.m"
                {
#line 396 "prog_io_type_defn.m"
                  mercury__set__list_to_set_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_263_263, parse_tree__prog_io_type_defn__ExistQVars_19, &parse_tree__prog_io_type_defn__ExistQVarsSet_36);
                }
#line 397 "prog_io_type_defn.m"
                {
#line 397 "prog_io_type_defn.m"
                  mercury__set__list_to_set_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_263_263, parse_tree__prog_io_type_defn__HeadVar__1_1, &parse_tree__prog_io_type_defn__ParamsSet_37);
                }
#line 398 "prog_io_type_defn.m"
                {
#line 398 "prog_io_type_defn.m"
                  mercury__set__intersect_3_p_0(parse_tree__prog_io_type_defn__TypeInfo_263_263, parse_tree__prog_io_type_defn__ExistQVarsSet_36, parse_tree__prog_io_type_defn__ParamsSet_37, &parse_tree__prog_io_type_defn__ExistQParamsSet_38);
                }
#line 399 "prog_io_type_defn.m"
                {
#line 399 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__succeeded = mercury__set__is_non_empty_1_p_0(parse_tree__prog_io_type_defn__TypeInfo_263_263, parse_tree__prog_io_type_defn__ExistQParamsSet_38);
                }
#line 416 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 402 "prog_io_type_defn.m"
                  {
#line 402 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeInfo_264_264 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 402 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_265_265;
#line 402 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_267_267;
#line 402 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_271_271;
#line 402 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__ExistQParams_39;
#line 402 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__ExistQParamVarsStrs_40;
#line 402 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_87_87;
#line 402 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_89_89;
#line 402 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_92_92;
#line 402 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_93_93;
#line 402 "prog_io_type_defn.m"
                    MR_String parse_tree__prog_io_type_defn__V_94_94;
#line 402 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_98_98;
#line 402 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_99_99;
#line 402 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_100_100;
#line 402 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_101_101;
#line 402 "prog_io_type_defn.m"
                    MR_String parse_tree__prog_io_type_defn__V_102_102;
#line 402 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_116_116;
#line 402 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_117_117;
#line 402 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_118_118;
#line 402 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_119_119;
#line 402 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_120_120;
#line 402 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__GenericVarSet_216;
#line 402 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Pieces_217;
#line 402 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Spec_218;
#line 407 "prog_io_type_defn.m"
                    MR_Box parse_tree__prog_io_type_defn__conv3_V_94_94;
#line 410 "prog_io_type_defn.m"
                    MR_Box parse_tree__prog_io_type_defn__conv4_V_102_102;

#line 402 "prog_io_type_defn.m"
                    {
#line 402 "prog_io_type_defn.m"
                      mercury__set__to_sorted_list_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_264_264, parse_tree__prog_io_type_defn__ExistQParamsSet_38, &parse_tree__prog_io_type_defn__ExistQParams_39);
                    }
#line 10608 "parse_tree.prog_io_type_defn.c"
                    parse_tree__prog_io_type_defn__TypeCtorInfo_265_265 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 403 "prog_io_type_defn.m"
                    {
#line 403 "prog_io_type_defn.m"
                      mercury__varset__coerce_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_265_265, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_2, &parse_tree__prog_io_type_defn__GenericVarSet_216);
                    }
#line 10615 "parse_tree.prog_io_type_defn.c"
                    parse_tree__prog_io_type_defn__TypeCtorInfo_267_267 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 404 "prog_io_type_defn.m"
                    {
#line 404 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 404 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_87_87, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_5[0]));
#line 404 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_87_87, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_3));
#line 404 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_87_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 404 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_87_87, 3) = ((MR_Box) ((MR_Integer) 0));
#line 404 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_87_87, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__GenericVarSet_216));
#line 404 "prog_io_type_defn.m"
                    }
#line 404 "prog_io_type_defn.m"
                    {
#line 404 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__ExistQParamVarsStrs_40 = mercury__list__map_2_f_0(parse_tree__prog_io_type_defn__TypeInfo_264_264, parse_tree__prog_io_type_defn__TypeCtorInfo_267_267, parse_tree__prog_io_type_defn__V_87_87, parse_tree__prog_io_type_defn__ExistQParams_39);
                    }
#line 10638 "parse_tree.prog_io_type_defn.c"
                    parse_tree__prog_io_type_defn__TypeCtorInfo_271_271 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 407 "prog_io_type_defn.m"
                    {
#line 407 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__conv3_V_94_94 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_264_264, parse_tree__prog_io_type_defn__TypeCtorInfo_267_267, parse_tree__prog_io_type_defn__ExistQParams_39, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
                    }
#line 407 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_94_94 = ((MR_String) parse_tree__prog_io_type_defn__conv3_V_94_94);
#line 407 "prog_io_type_defn.m"
                    {
#line 407 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_93_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_93_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 407 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_93_93, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_94_94));
#line 407 "prog_io_type_defn.m"
                    }
#line 408 "prog_io_type_defn.m"
                    {
#line 408 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_92_92, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_93_93));
#line 408 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 408 "prog_io_type_defn.m"
                    }
#line 406 "prog_io_type_defn.m"
                    {
#line 406 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_89_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[129])));
#line 406 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_89_89, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_92_92));
#line 406 "prog_io_type_defn.m"
                    }
#line 409 "prog_io_type_defn.m"
                    {
#line 409 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_99_99 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(parse_tree__prog_io_type_defn__ExistQParamVarsStrs_40);
                    }
#line 410 "prog_io_type_defn.m"
                    {
#line 410 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__conv4_V_102_102 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_264_264, parse_tree__prog_io_type_defn__TypeCtorInfo_267_267, parse_tree__prog_io_type_defn__ExistQParams_39, ((MR_Box) ((MR_String) "has")), ((MR_Box) ((MR_String) "have")));
                    }
#line 410 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_102_102 = ((MR_String) parse_tree__prog_io_type_defn__conv4_V_102_102);
#line 410 "prog_io_type_defn.m"
                    {
#line 410 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_101_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 410 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_101_101, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_102_102));
#line 410 "prog_io_type_defn.m"
                    }
#line 410 "prog_io_type_defn.m"
                    {
#line 410 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_100_100, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_101_101));
#line 410 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[35])));
#line 410 "prog_io_type_defn.m"
                    }
#line 409 "prog_io_type_defn.m"
                    {
#line 409 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_98_98 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_271_271, parse_tree__prog_io_type_defn__V_99_99, parse_tree__prog_io_type_defn__V_100_100);
                    }
#line 408 "prog_io_type_defn.m"
                    {
#line 408 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Pieces_217 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_271_271, parse_tree__prog_io_type_defn__V_89_89, parse_tree__prog_io_type_defn__V_98_98);
                    }
#line 414 "prog_io_type_defn.m"
                    {
#line 414 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_118_118 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_265_265, parse_tree__prog_io_type_defn__BodyTerm_3);
                    }
#line 414 "prog_io_type_defn.m"
                    {
#line 414 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 414 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_120_120, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_217));
#line 414 "prog_io_type_defn.m"
                    }
#line 414 "prog_io_type_defn.m"
                    {
#line 414 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_119_119, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_120_120));
#line 414 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_119_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 414 "prog_io_type_defn.m"
                    }
#line 414 "prog_io_type_defn.m"
                    {
#line 414 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 414 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_117_117, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_118_118));
#line 414 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_117_117, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_119_119));
#line 414 "prog_io_type_defn.m"
                    }
#line 414 "prog_io_type_defn.m"
                    {
#line 414 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_116_116, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_117_117));
#line 414 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 414 "prog_io_type_defn.m"
                    }
#line 413 "prog_io_type_defn.m"
                    {
#line 413 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Spec_218 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 413 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_218, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 413 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_218, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 413 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_218, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_116_116));
#line 413 "prog_io_type_defn.m"
                    }
#line 415 "prog_io_type_defn.m"
                    {
#line 415 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_218));
#line 415 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5));
#line 415 "prog_io_type_defn.m"
                    }
#line 402 "prog_io_type_defn.m"
                  }
#line 416 "prog_io_type_defn.m"
                else
#line 443 "prog_io_type_defn.m"
                  {
#line 443 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__NotOccursExistQVars_43;
#line 420 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeInfo_274_274;
#line 420 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__ConstraintTVars_41;
#line 420 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_127_127;
#line 420 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_128_128;
#line 420 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__CtorArgTypes_220;
#line 420 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_221;
#line 420 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes_222;
#line 424 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn___OccursExistQVars_42;
#line 426 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_44_44;
#line 426 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_45_45;

#line 420 "prog_io_type_defn.m"
                    {
#line 420 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__CtorArgTypes_220 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_4[4], parse_tree__prog_io_type_defn__CtorArgs_22);
                    }
#line 421 "prog_io_type_defn.m"
                    {
#line 421 "prog_io_type_defn.m"
                      parse_tree__prog_type__type_vars_list_2_p_0(parse_tree__prog_io_type_defn__CtorArgTypes_220, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_221);
                    }
#line 10823 "parse_tree.prog_io_type_defn.c"
                    parse_tree__prog_io_type_defn__TypeInfo_274_274 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 422 "prog_io_type_defn.m"
                    {
#line 422 "prog_io_type_defn.m"
                      mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_274_274, parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_221, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes_222);
                    }
#line 423 "prog_io_type_defn.m"
                    {
#line 423 "prog_io_type_defn.m"
                      parse_tree__prog_type__constraint_list_get_tvars_2_p_0(parse_tree__prog_io_type_defn__Constraints_20, &parse_tree__prog_io_type_defn__ConstraintTVars_41);
                    }
#line 424 "prog_io_type_defn.m"
                    {
#line 424 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_128_128 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeInfo_274_274, parse_tree__prog_io_type_defn__VarsInCtorArgTypes_222, parse_tree__prog_io_type_defn__ConstraintTVars_41);
                    }
#line 424 "prog_io_type_defn.m"
                    {
#line 424 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 424 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_127_127, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[2]));
#line 424 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_127_127, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_5));
#line 424 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_127_127, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 424 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_127_127, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__V_128_128));
#line 424 "prog_io_type_defn.m"
                    }
#line 424 "prog_io_type_defn.m"
                    {
#line 424 "prog_io_type_defn.m"
                      mercury__list__filter_4_p_0(parse_tree__prog_io_type_defn__TypeInfo_274_274, parse_tree__prog_io_type_defn__V_127_127, parse_tree__prog_io_type_defn__ExistQVars_19, &parse_tree__prog_io_type_defn___OccursExistQVars_42, &parse_tree__prog_io_type_defn__NotOccursExistQVars_43);
                    }
#line 426 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__NotOccursExistQVars_43)) == (MR_mktag((MR_Integer) 1)));
#line 426 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 426 "prog_io_type_defn.m"
                      {
#line 426 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotOccursExistQVars_43, (MR_Integer) 0)));
#line 426 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotOccursExistQVars_43, (MR_Integer) 1)));
#line 429 "prog_io_type_defn.m"
                        {
#line 429 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_277_277 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 429 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_278_278 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 429 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__TypeInfo_279_279;
#line 429 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_280_280;
#line 429 "prog_io_type_defn.m"
                          MR_String parse_tree__prog_io_type_defn__NotOccursExistQVarsStr_46;
#line 429 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_132_132;
#line 429 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_133_133;
#line 429 "prog_io_type_defn.m"
                          MR_String parse_tree__prog_io_type_defn__V_134_134;
#line 429 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_137_137;
#line 429 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_138_138;
#line 429 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_139_139;
#line 429 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_142_142;
#line 429 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_143_143;
#line 429 "prog_io_type_defn.m"
                          MR_String parse_tree__prog_io_type_defn__V_144_144;
#line 429 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_155_155;
#line 429 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_156_156;
#line 429 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_157_157;
#line 429 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_158_158;
#line 429 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_159_159;
#line 429 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__GenericVarSet_223;
#line 429 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__Pieces_224;
#line 429 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__Spec_225;
#line 433 "prog_io_type_defn.m"
                          MR_Box parse_tree__prog_io_type_defn__conv6_V_134_134;
#line 437 "prog_io_type_defn.m"
                          MR_Box parse_tree__prog_io_type_defn__conv7_V_144_144;

#line 429 "prog_io_type_defn.m"
                          {
#line 429 "prog_io_type_defn.m"
                            mercury__varset__coerce_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_277_277, parse_tree__prog_io_type_defn__TypeCtorInfo_278_278, parse_tree__prog_io_type_defn__VarSet_2, &parse_tree__prog_io_type_defn__GenericVarSet_223);
                          }
#line 431 "prog_io_type_defn.m"
                          {
#line 431 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__NotOccursExistQVarsStr_46 = parse_tree__mercury_to_mercury__mercury_vars_to_string_3_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_278_278, parse_tree__prog_io_type_defn__GenericVarSet_223, (MR_Integer) 0, parse_tree__prog_io_type_defn__NotOccursExistQVars_43);
                          }
#line 10930 "parse_tree.prog_io_type_defn.c"
                          parse_tree__prog_io_type_defn__TypeInfo_279_279 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 10932 "parse_tree.prog_io_type_defn.c"
                          parse_tree__prog_io_type_defn__TypeCtorInfo_280_280 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 433 "prog_io_type_defn.m"
                          {
#line 433 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__conv6_V_134_134 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_279_279, parse_tree__prog_io_type_defn__TypeCtorInfo_280_280, parse_tree__prog_io_type_defn__NotOccursExistQVars_43, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
                          }
#line 433 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_134_134 = ((MR_String) parse_tree__prog_io_type_defn__conv6_V_134_134);
#line 433 "prog_io_type_defn.m"
                          {
#line 433 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_133_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_133_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 433 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_133_133, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_134_134));
#line 433 "prog_io_type_defn.m"
                          }
#line 435 "prog_io_type_defn.m"
                          {
#line 435 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_138_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_138_138, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 435 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_138_138, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__NotOccursExistQVarsStr_46));
#line 435 "prog_io_type_defn.m"
                          }
#line 437 "prog_io_type_defn.m"
                          {
#line 437 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__conv7_V_144_144 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_279_279, parse_tree__prog_io_type_defn__TypeCtorInfo_280_280, parse_tree__prog_io_type_defn__NotOccursExistQVars_43, ((MR_Box) ((MR_String) "does not occur")), ((MR_Box) ((MR_String) "do not occur")));
                          }
#line 437 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_144_144 = ((MR_String) parse_tree__prog_io_type_defn__conv7_V_144_144);
#line 437 "prog_io_type_defn.m"
                          {
#line 437 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_143_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_143_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 437 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_143_143, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_144_144));
#line 437 "prog_io_type_defn.m"
                          }
#line 438 "prog_io_type_defn.m"
                          {
#line 438 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 438 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_142_142, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_143_143));
#line 438 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[37])));
#line 438 "prog_io_type_defn.m"
                          }
#line 436 "prog_io_type_defn.m"
                          {
#line 436 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_139_139, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[130])));
#line 436 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_139_139, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_142_142));
#line 436 "prog_io_type_defn.m"
                          }
#line 435 "prog_io_type_defn.m"
                          {
#line 435 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_137_137, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_138_138));
#line 435 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_137_137, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_139_139));
#line 435 "prog_io_type_defn.m"
                          }
#line 434 "prog_io_type_defn.m"
                          {
#line 434 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_132_132, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_133_133));
#line 434 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_132_132, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_137_137));
#line 434 "prog_io_type_defn.m"
                          }
#line 432 "prog_io_type_defn.m"
                          {
#line 432 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__Pieces_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 432 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_224, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[129])));
#line 432 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_224, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_132_132));
#line 432 "prog_io_type_defn.m"
                          }
#line 441 "prog_io_type_defn.m"
                          {
#line 441 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_157_157 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_277_277, parse_tree__prog_io_type_defn__BodyTerm_3);
                          }
#line 441 "prog_io_type_defn.m"
                          {
#line 441 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 441 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_159_159, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_224));
#line 441 "prog_io_type_defn.m"
                          }
#line 441 "prog_io_type_defn.m"
                          {
#line 441 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_158_158, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_159_159));
#line 441 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_158_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 441 "prog_io_type_defn.m"
                          }
#line 441 "prog_io_type_defn.m"
                          {
#line 441 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_156_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 441 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_156_156, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_157_157));
#line 441 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_156_156, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_158_158));
#line 441 "prog_io_type_defn.m"
                          }
#line 441 "prog_io_type_defn.m"
                          {
#line 441 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_155_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_155_155, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_156_156));
#line 441 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_155_155, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 441 "prog_io_type_defn.m"
                          }
#line 440 "prog_io_type_defn.m"
                          {
#line 440 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__Spec_225 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 440 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_225, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 440 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_225, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 440 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_225, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_155_155));
#line 440 "prog_io_type_defn.m"
                          }
#line 442 "prog_io_type_defn.m"
                          {
#line 442 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_225));
#line 442 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5));
#line 442 "prog_io_type_defn.m"
                          }
#line 429 "prog_io_type_defn.m"
                        }
#line 426 "prog_io_type_defn.m"
                      }
#line 426 "prog_io_type_defn.m"
                    else
#line 472 "prog_io_type_defn.m"
                      {
#line 472 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__NotExistQArgTypes_50;
#line 448 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__TypeInfo_286_286;
#line 448 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__ConstraintArgTypeLists_47;
#line 448 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__ConstraintArgTypes_48;
#line 448 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_164_164;
#line 448 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_226;
#line 448 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes_227;
#line 452 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn___ExistQArgTypes_49;
#line 454 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_51_51;
#line 454 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_52_52;

#line 448 "prog_io_type_defn.m"
                        {
#line 448 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__ConstraintArgTypeLists_47 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[8], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_4[5], parse_tree__prog_io_type_defn__Constraints_20);
                        }
#line 449 "prog_io_type_defn.m"
                        {
#line 449 "prog_io_type_defn.m"
                          mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_io_type_defn__ConstraintArgTypeLists_47, &parse_tree__prog_io_type_defn__ConstraintArgTypes_48);
                        }
#line 450 "prog_io_type_defn.m"
                        {
#line 450 "prog_io_type_defn.m"
                          parse_tree__prog_type__type_vars_list_2_p_0(parse_tree__prog_io_type_defn__ConstraintArgTypes_48, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_226);
                        }
#line 11137 "parse_tree.prog_io_type_defn.c"
                        parse_tree__prog_io_type_defn__TypeInfo_286_286 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 451 "prog_io_type_defn.m"
                        {
#line 451 "prog_io_type_defn.m"
                          mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_286_286, parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_226, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes_227);
                        }
#line 452 "prog_io_type_defn.m"
                        {
#line 452 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_164_164 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 452 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_164_164, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[2]));
#line 452 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_164_164, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_7));
#line 452 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_164_164, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 452 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_164_164, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__ExistQVars_19));
#line 452 "prog_io_type_defn.m"
                        }
#line 452 "prog_io_type_defn.m"
                        {
#line 452 "prog_io_type_defn.m"
                          mercury__list__filter_4_p_0(parse_tree__prog_io_type_defn__TypeInfo_286_286, parse_tree__prog_io_type_defn__V_164_164, parse_tree__prog_io_type_defn__VarsInCtorArgTypes_227, &parse_tree__prog_io_type_defn___ExistQArgTypes_49, &parse_tree__prog_io_type_defn__NotExistQArgTypes_50);
                        }
#line 454 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__NotExistQArgTypes_50)) == (MR_mktag((MR_Integer) 1)));
#line 454 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 454 "prog_io_type_defn.m"
                          {
#line 454 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotExistQArgTypes_50, (MR_Integer) 0)));
#line 454 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotExistQArgTypes_50, (MR_Integer) 1)));
#line 456 "prog_io_type_defn.m"
                            {
#line 456 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_289_289 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 456 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_290_290 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 456 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__TypeInfo_291_291;
#line 456 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_292_292;
#line 456 "prog_io_type_defn.m"
                              MR_String parse_tree__prog_io_type_defn__NotExistQArgTypesStr_53;
#line 456 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_168_168;
#line 456 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_169_169;
#line 456 "prog_io_type_defn.m"
                              MR_String parse_tree__prog_io_type_defn__V_170_170;
#line 456 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_173_173;
#line 456 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_174_174;
#line 456 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_175_175;
#line 456 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_178_178;
#line 456 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_179_179;
#line 456 "prog_io_type_defn.m"
                              MR_String parse_tree__prog_io_type_defn__V_180_180;
#line 456 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_206_206;
#line 456 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_207_207;
#line 456 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_208_208;
#line 456 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_209_209;
#line 456 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_210_210;
#line 456 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__GenericVarSet_228;
#line 456 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__Pieces_229;
#line 456 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__Spec_230;
#line 460 "prog_io_type_defn.m"
                              MR_Box parse_tree__prog_io_type_defn__conv9_V_170_170;
#line 464 "prog_io_type_defn.m"
                              MR_Box parse_tree__prog_io_type_defn__conv10_V_180_180;

#line 456 "prog_io_type_defn.m"
                              {
#line 456 "prog_io_type_defn.m"
                                mercury__varset__coerce_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_289_289, parse_tree__prog_io_type_defn__TypeCtorInfo_290_290, parse_tree__prog_io_type_defn__VarSet_2, &parse_tree__prog_io_type_defn__GenericVarSet_228);
                              }
#line 458 "prog_io_type_defn.m"
                              {
#line 458 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__NotExistQArgTypesStr_53 = parse_tree__mercury_to_mercury__mercury_vars_to_string_3_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_290_290, parse_tree__prog_io_type_defn__GenericVarSet_228, (MR_Integer) 0, parse_tree__prog_io_type_defn__NotExistQArgTypes_50);
                              }
#line 11234 "parse_tree.prog_io_type_defn.c"
                              parse_tree__prog_io_type_defn__TypeInfo_291_291 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 11236 "parse_tree.prog_io_type_defn.c"
                              parse_tree__prog_io_type_defn__TypeCtorInfo_292_292 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 460 "prog_io_type_defn.m"
                              {
#line 460 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__conv9_V_170_170 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_291_291, parse_tree__prog_io_type_defn__TypeCtorInfo_292_292, parse_tree__prog_io_type_defn__NotExistQArgTypes_50, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
                              }
#line 460 "prog_io_type_defn.m"
                              parse_tree__prog_io_type_defn__V_170_170 = ((MR_String) parse_tree__prog_io_type_defn__conv9_V_170_170);
#line 460 "prog_io_type_defn.m"
                              {
#line 460 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_169_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 460 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_169_169, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 460 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_169_169, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_170_170));
#line 460 "prog_io_type_defn.m"
                              }
#line 462 "prog_io_type_defn.m"
                              {
#line 462 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_174_174 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_174_174, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 462 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_174_174, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__NotExistQArgTypesStr_53));
#line 462 "prog_io_type_defn.m"
                              }
#line 464 "prog_io_type_defn.m"
                              {
#line 464 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__conv10_V_180_180 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_291_291, parse_tree__prog_io_type_defn__TypeCtorInfo_292_292, parse_tree__prog_io_type_defn__NotExistQArgTypes_50, ((MR_Box) ((MR_String) "which was")), ((MR_Box) ((MR_String) "which were")));
                              }
#line 464 "prog_io_type_defn.m"
                              parse_tree__prog_io_type_defn__V_180_180 = ((MR_String) parse_tree__prog_io_type_defn__conv10_V_180_180);
#line 464 "prog_io_type_defn.m"
                              {
#line 464 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_179_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 464 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_179_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 464 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_179_179, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_180_180));
#line 464 "prog_io_type_defn.m"
                              }
#line 465 "prog_io_type_defn.m"
                              {
#line 465 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_178_178, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_179_179));
#line 465 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_178_178, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[45])));
#line 465 "prog_io_type_defn.m"
                              }
#line 463 "prog_io_type_defn.m"
                              {
#line 463 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_175_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 463 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_175_175, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[131])));
#line 463 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_175_175, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_178_178));
#line 463 "prog_io_type_defn.m"
                              }
#line 462 "prog_io_type_defn.m"
                              {
#line 462 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_173_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_173_173, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_174_174));
#line 462 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_173_173, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_175_175));
#line 462 "prog_io_type_defn.m"
                              }
#line 461 "prog_io_type_defn.m"
                              {
#line 461 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_168_168, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_169_169));
#line 461 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_168_168, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_173_173));
#line 461 "prog_io_type_defn.m"
                              }
#line 459 "prog_io_type_defn.m"
                              {
#line 459 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__Pieces_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_229, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[129])));
#line 459 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_229, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_168_168));
#line 459 "prog_io_type_defn.m"
                              }
#line 470 "prog_io_type_defn.m"
                              {
#line 470 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_208_208 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_289_289, parse_tree__prog_io_type_defn__BodyTerm_3);
                              }
#line 470 "prog_io_type_defn.m"
                              {
#line 470 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_210_210 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 470 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_210_210, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_229));
#line 470 "prog_io_type_defn.m"
                              }
#line 470 "prog_io_type_defn.m"
                              {
#line 470 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_209_209, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_210_210));
#line 470 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_209_209, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 470 "prog_io_type_defn.m"
                              }
#line 470 "prog_io_type_defn.m"
                              {
#line 470 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_207_207 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 470 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_207_207, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_208_208));
#line 470 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_207_207, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_209_209));
#line 470 "prog_io_type_defn.m"
                              }
#line 470 "prog_io_type_defn.m"
                              {
#line 470 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_206_206, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_207_207));
#line 470 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_206_206, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 470 "prog_io_type_defn.m"
                              }
#line 469 "prog_io_type_defn.m"
                              {
#line 469 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__Spec_230 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 469 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_230, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 469 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_230, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 469 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_230, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_206_206));
#line 469 "prog_io_type_defn.m"
                              }
#line 471 "prog_io_type_defn.m"
                              {
#line 471 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_230));
#line 471 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5));
#line 471 "prog_io_type_defn.m"
                              }
#line 456 "prog_io_type_defn.m"
                            }
#line 454 "prog_io_type_defn.m"
                          }
#line 454 "prog_io_type_defn.m"
                        else
#line 472 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5;
#line 472 "prog_io_type_defn.m"
                      }
#line 443 "prog_io_type_defn.m"
                  }
#line 416 "prog_io_type_defn.m"
              }
#line 475 "prog_io_type_defn.m"
            /* direct tailcall eliminated */
#line 475 "prog_io_type_defn.m"
            {
#line 475 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__HeadVar__4__tmp_copy_4 = parse_tree__prog_io_type_defn__Ctors_17;
#line 475 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0__tmp_copy_5 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86;

#line 475 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 475 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__HeadVar__4_4 = parse_tree__prog_io_type_defn__HeadVar__4__tmp_copy_4;
#line 475 "prog_io_type_defn.m"
            }
#line 475 "prog_io_type_defn.m"
            continue;
#line 366 "prog_io_type_defn.m"
          }
#line 365 "prog_io_type_defn.m"
      }
#line 365 "prog_io_type_defn.m"
      break;
#line 365 "prog_io_type_defn.m"
    }
#line 362 "prog_io_type_defn.m"
}

#line 336 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__convert_constructor_arg_list_2_5_f_0(
#line 336 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_7,
#line 336 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_8,
#line 336 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCtorFieldName_9,
#line 336 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TypeTerm_10,
#line 336 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Terms_11)
#line 336 "prog_io_type_defn.m"
{
#line 340 "prog_io_type_defn.m"
  {
#line 340 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 340 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeArgs_12;
#line 340 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeType_14;

#line 342 "prog_io_type_defn.m"
    {
#line 342 "prog_io_type_defn.m"
      parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_type_defn__TypeTerm_10, parse_tree__prog_io_type_defn__VarSet_8, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[117]), &parse_tree__prog_io_type_defn__MaybeType_14);
    }
#line 357 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeType_14)) == (MR_mktag((MR_Integer) 0))))
#line 359 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__MaybeArgs_12 = (MR_Word) parse_tree__prog_io_type_defn__MaybeType_14;
#line 357 "prog_io_type_defn.m"
    else
#line 344 "prog_io_type_defn.m"
      {
#line 344 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeType_14, (MR_Integer) 0)));
#line 344 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Context_16;
#line 344 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Arg_17;
#line 344 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailArgs_18;

#line 345 "prog_io_type_defn.m"
        {
#line 345 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Context_16 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__TypeTerm_10);
        }
#line 347 "prog_io_type_defn.m"
        {
#line 347 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Arg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 347 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_17, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeCtorFieldName_9));
#line 347 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_17, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Type_15));
#line 347 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_17, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_17, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_16));
#line 347 "prog_io_type_defn.m"
        }
#line 300 "prog_io_type_defn.m"
        if ((parse_tree__prog_io_type_defn__Terms_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 300 "prog_io_type_defn.m"
          {
#line 300 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailArgs_18 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[12]);
#line 300 "prog_io_type_defn.m"
          }
#line 300 "prog_io_type_defn.m"
        else
#line 302 "prog_io_type_defn.m"
          {
#line 302 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Term_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Terms_11, (MR_Integer) 0)));
#line 302 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Terms_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Terms_11, (MR_Integer) 1)));
#line 329 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__NameTerm_36;
#line 329 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__TypeTerm_37;
#line 303 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_50_50;
#line 303 "prog_io_type_defn.m"
            MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 303 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 303 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_53_53;
#line 303 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_54_54;
#line 303 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_38_38;

#line 303 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_33)) == (MR_mktag((MR_Integer) 0)));
#line 303 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 303 "prog_io_type_defn.m"
              {
#line 303 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_33, (MR_Integer) 0)));
#line 303 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_33, (MR_Integer) 1)));
#line 303 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_33, (MR_Integer) 2)));
#line 303 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_50_50)) == (MR_mktag((MR_Integer) 0)));
#line 303 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 303 "prog_io_type_defn.m"
                  {
#line 303 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_50_50, (MR_Integer) 0)));
#line 303 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_51_51, (MR_String) "::") == 0);
#line 303 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 303 "prog_io_type_defn.m"
                      {
#line 303 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 303 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 303 "prog_io_type_defn.m"
                          {
#line 303 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__NameTerm_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, (MR_Integer) 0)));
#line 303 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, (MR_Integer) 1)));
#line 303 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_53_53)) == (MR_mktag((MR_Integer) 1)));
#line 303 "prog_io_type_defn.m"
                            if (parse_tree__prog_io_type_defn__succeeded)
#line 303 "prog_io_type_defn.m"
                              {
#line 303 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__TypeTerm_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_53_53, (MR_Integer) 0)));
#line 303 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_53_53, (MR_Integer) 1)));
#line 303 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 303 "prog_io_type_defn.m"
                              }
#line 303 "prog_io_type_defn.m"
                          }
#line 303 "prog_io_type_defn.m"
                      }
#line 303 "prog_io_type_defn.m"
                  }
#line 303 "prog_io_type_defn.m"
              }
#line 329 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 304 "prog_io_type_defn.m"
              {
#line 304 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_54_77 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 304 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_40;

#line 305 "prog_io_type_defn.m"
                {
#line 305 "prog_io_type_defn.m"
                  parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_54_77, parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__NameTerm_36, parse_tree__prog_io_type_defn__VarSet_8, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[126]), &parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_40);
                }
#line 310 "prog_io_type_defn.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_40)) == (MR_mktag((MR_Integer) 0))))
#line 308 "prog_io_type_defn.m"
                  {
#line 308 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Specs_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_40, (MR_Integer) 0)));

#line 309 "prog_io_type_defn.m"
                    {
#line 309 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MaybeTailArgs_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 309 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeTailArgs_18, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_41));
#line 309 "prog_io_type_defn.m"
                    }
#line 308 "prog_io_type_defn.m"
                  }
#line 310 "prog_io_type_defn.m"
                else
#line 311 "prog_io_type_defn.m"
                  {
#line 311 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__SymName_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_40, (MR_Integer) 0)));
#line 311 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__SymNameArgs_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_40, (MR_Integer) 1)));

#line 320 "prog_io_type_defn.m"
                    if ((parse_tree__prog_io_type_defn__SymNameArgs_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 321 "prog_io_type_defn.m"
                      {
#line 321 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__NameCtxt_48;
#line 321 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__MaybeCtorFieldName_49;
#line 321 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_58_58;

#line 322 "prog_io_type_defn.m"
                        {
#line 322 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__NameCtxt_48 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_54_77, parse_tree__prog_io_type_defn__NameTerm_36);
                        }
#line 323 "prog_io_type_defn.m"
                        {
#line 323 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 323 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_58_58, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__SymName_42));
#line 323 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_58_58, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__NameCtxt_48));
#line 323 "prog_io_type_defn.m"
                        }
#line 323 "prog_io_type_defn.m"
                        {
#line 323 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__MaybeCtorFieldName_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 323 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeCtorFieldName_49, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_58_58));
#line 323 "prog_io_type_defn.m"
                        }
#line 324 "prog_io_type_defn.m"
                        {
#line 324 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__MaybeTailArgs_18 = parse_tree__prog_io_type_defn__convert_constructor_arg_list_2_5_f_0(parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, parse_tree__prog_io_type_defn__MaybeCtorFieldName_49, parse_tree__prog_io_type_defn__TypeTerm_37, parse_tree__prog_io_type_defn__Terms_34);
                        }
#line 321 "prog_io_type_defn.m"
                      }
#line 320 "prog_io_type_defn.m"
                    else
#line 313 "prog_io_type_defn.m"
                      {
#line 313 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__Spec_47;
#line 313 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_66_66;
#line 313 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_67_67;
#line 313 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_68_68;
#line 313 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_73_73;

#line 318 "prog_io_type_defn.m"
                        {
#line 318 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_68_68 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_54_77, parse_tree__prog_io_type_defn__Term_33);
                        }
#line 318 "prog_io_type_defn.m"
                        {
#line 318 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 318 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_68_68));
#line 318 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[127])));
#line 318 "prog_io_type_defn.m"
                        }
#line 318 "prog_io_type_defn.m"
                        {
#line 318 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_67_67));
#line 318 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 318 "prog_io_type_defn.m"
                        }
#line 317 "prog_io_type_defn.m"
                        {
#line 317 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__Spec_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 317 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 317 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 317 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_47, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_66_66));
#line 317 "prog_io_type_defn.m"
                        }
#line 319 "prog_io_type_defn.m"
                        {
#line 319 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_47));
#line 319 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 319 "prog_io_type_defn.m"
                        }
#line 319 "prog_io_type_defn.m"
                        {
#line 319 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__MaybeTailArgs_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 319 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeTailArgs_18, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_73_73));
#line 319 "prog_io_type_defn.m"
                        }
#line 313 "prog_io_type_defn.m"
                      }
#line 311 "prog_io_type_defn.m"
                  }
#line 304 "prog_io_type_defn.m"
              }
#line 329 "prog_io_type_defn.m"
            else
#line 330 "prog_io_type_defn.m"
              {
#line 332 "prog_io_type_defn.m"
                {
#line 332 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeTailArgs_18 = parse_tree__prog_io_type_defn__convert_constructor_arg_list_2_5_f_0(parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_type_defn__Term_33, parse_tree__prog_io_type_defn__Terms_34);
                }
#line 330 "prog_io_type_defn.m"
              }
#line 302 "prog_io_type_defn.m"
          }
#line 353 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeTailArgs_18)) == (MR_mktag((MR_Integer) 0))))
#line 352 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeArgs_12 = parse_tree__prog_io_type_defn__MaybeTailArgs_18;
#line 353 "prog_io_type_defn.m"
        else
#line 354 "prog_io_type_defn.m"
          {
#line 354 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailArgs_18, (MR_Integer) 0)));
#line 354 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 355 "prog_io_type_defn.m"
            {
#line 355 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 355 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Arg_17));
#line 355 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Args_20));
#line 355 "prog_io_type_defn.m"
            }
#line 355 "prog_io_type_defn.m"
            {
#line 355 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeArgs_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 355 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeArgs_12, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 355 "prog_io_type_defn.m"
            }
#line 354 "prog_io_type_defn.m"
          }
#line 344 "prog_io_type_defn.m"
      }
#line 340 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeArgs_12;
#line 340 "prog_io_type_defn.m"
  }
#line 336 "prog_io_type_defn.m"
}

#line 297 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__convert_constructor_arg_list_3_f_0(
#line 297 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_1,
#line 297 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_2,
#line 297 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3)
#line 297 "prog_io_type_defn.m"
{
#line 300 "prog_io_type_defn.m"
  {
#line 300 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 300 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_4;

#line 300 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 300 "prog_io_type_defn.m"
      {
#line 300 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[12]);
#line 300 "prog_io_type_defn.m"
      }
#line 300 "prog_io_type_defn.m"
    else
#line 302 "prog_io_type_defn.m"
      {
#line 302 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__3_3, (MR_Integer) 0)));
#line 302 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Terms_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__3_3, (MR_Integer) 1)));
#line 329 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__NameTerm_13;
#line 329 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeTerm_14;
#line 303 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_27_27;
#line 303 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_28_28;
#line 303 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_29_29;
#line 303 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_30_30;
#line 303 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_31_31;
#line 303 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_15_15;

#line 303 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_10)) == (MR_mktag((MR_Integer) 0)));
#line 303 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 303 "prog_io_type_defn.m"
          {
#line 303 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 0)));
#line 303 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 1)));
#line 303 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 2)));
#line 303 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_27_27)) == (MR_mktag((MR_Integer) 0)));
#line 303 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 303 "prog_io_type_defn.m"
              {
#line 303 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_27_27, (MR_Integer) 0)));
#line 303 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_28_28, (MR_String) "::") == 0);
#line 303 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 303 "prog_io_type_defn.m"
                  {
#line 303 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 303 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 303 "prog_io_type_defn.m"
                      {
#line 303 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__NameTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_29_29, (MR_Integer) 0)));
#line 303 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_29_29, (MR_Integer) 1)));
#line 303 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 303 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 303 "prog_io_type_defn.m"
                          {
#line 303 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TypeTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, (MR_Integer) 0)));
#line 303 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, (MR_Integer) 1)));
#line 303 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 303 "prog_io_type_defn.m"
                          }
#line 303 "prog_io_type_defn.m"
                      }
#line 303 "prog_io_type_defn.m"
                  }
#line 303 "prog_io_type_defn.m"
              }
#line 303 "prog_io_type_defn.m"
          }
#line 329 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 304 "prog_io_type_defn.m"
          {
#line 304 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_54_54 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 304 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_17;

#line 305 "prog_io_type_defn.m"
            {
#line 305 "prog_io_type_defn.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_54_54, parse_tree__prog_io_type_defn__ModuleName_1, parse_tree__prog_io_type_defn__NameTerm_13, parse_tree__prog_io_type_defn__VarSet_2, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[126]), &parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_17);
            }
#line 310 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_17)) == (MR_mktag((MR_Integer) 0))))
#line 308 "prog_io_type_defn.m"
              {
#line 308 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Specs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_17, (MR_Integer) 0)));

#line 309 "prog_io_type_defn.m"
                {
#line 309 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 309 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_18));
#line 309 "prog_io_type_defn.m"
                }
#line 308 "prog_io_type_defn.m"
              }
#line 310 "prog_io_type_defn.m"
            else
#line 311 "prog_io_type_defn.m"
              {
#line 311 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__SymName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_17, (MR_Integer) 0)));
#line 311 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__SymNameArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_17, (MR_Integer) 1)));

#line 320 "prog_io_type_defn.m"
                if ((parse_tree__prog_io_type_defn__SymNameArgs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 321 "prog_io_type_defn.m"
                  {
#line 321 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__NameCtxt_25;
#line 321 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__MaybeCtorFieldName_26;
#line 321 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_35_35;

#line 322 "prog_io_type_defn.m"
                    {
#line 322 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__NameCtxt_25 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_54_54, parse_tree__prog_io_type_defn__NameTerm_13);
                    }
#line 323 "prog_io_type_defn.m"
                    {
#line 323 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 323 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__SymName_19));
#line 323 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_35_35, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__NameCtxt_25));
#line 323 "prog_io_type_defn.m"
                    }
#line 323 "prog_io_type_defn.m"
                    {
#line 323 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MaybeCtorFieldName_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 323 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeCtorFieldName_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_35_35));
#line 323 "prog_io_type_defn.m"
                    }
#line 324 "prog_io_type_defn.m"
                    {
#line 324 "prog_io_type_defn.m"
                      return parse_tree__prog_io_type_defn__HeadVar__4_4 = parse_tree__prog_io_type_defn__convert_constructor_arg_list_2_5_f_0(parse_tree__prog_io_type_defn__ModuleName_1, parse_tree__prog_io_type_defn__VarSet_2, parse_tree__prog_io_type_defn__MaybeCtorFieldName_26, parse_tree__prog_io_type_defn__TypeTerm_14, parse_tree__prog_io_type_defn__Terms_11);
                    }
#line 321 "prog_io_type_defn.m"
                  }
#line 320 "prog_io_type_defn.m"
                else
#line 313 "prog_io_type_defn.m"
                  {
#line 313 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Spec_24;
#line 313 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_43_43;
#line 313 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_44_44;
#line 313 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_45_45;
#line 313 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_50_50;

#line 318 "prog_io_type_defn.m"
                    {
#line 318 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_45_45 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_54_54, parse_tree__prog_io_type_defn__Term_10);
                    }
#line 318 "prog_io_type_defn.m"
                    {
#line 318 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 318 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_45_45));
#line 318 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[127])));
#line 318 "prog_io_type_defn.m"
                    }
#line 318 "prog_io_type_defn.m"
                    {
#line 318 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_44_44));
#line 318 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 318 "prog_io_type_defn.m"
                    }
#line 317 "prog_io_type_defn.m"
                    {
#line 317 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 317 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 317 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 317 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_24, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_43_43));
#line 317 "prog_io_type_defn.m"
                    }
#line 319 "prog_io_type_defn.m"
                    {
#line 319 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_24));
#line 319 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 319 "prog_io_type_defn.m"
                    }
#line 319 "prog_io_type_defn.m"
                    {
#line 319 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 319 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_50_50));
#line 319 "prog_io_type_defn.m"
                    }
#line 313 "prog_io_type_defn.m"
                  }
#line 311 "prog_io_type_defn.m"
              }
#line 304 "prog_io_type_defn.m"
          }
#line 329 "prog_io_type_defn.m"
        else
#line 330 "prog_io_type_defn.m"
          {
#line 332 "prog_io_type_defn.m"
            {
#line 332 "prog_io_type_defn.m"
              return parse_tree__prog_io_type_defn__HeadVar__4_4 = parse_tree__prog_io_type_defn__convert_constructor_arg_list_2_5_f_0(parse_tree__prog_io_type_defn__ModuleName_1, parse_tree__prog_io_type_defn__VarSet_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_type_defn__Term_10, parse_tree__prog_io_type_defn__Terms_11);
            }
#line 330 "prog_io_type_defn.m"
          }
#line 302 "prog_io_type_defn.m"
      }
#line 300 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_4;
#line 300 "prog_io_type_defn.m"
  }
#line 297 "prog_io_type_defn.m"
}

#line 238 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_constructor_2_4_f_0(
#line 238 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_6,
#line 238 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_7,
#line 238 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ExistQVars_8,
#line 238 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_9)
#line 238 "prog_io_type_defn.m"
{
#line 241 "prog_io_type_defn.m"
  {
#line 241 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 241 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeConstructor_10;
#line 241 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11;
#line 241 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeConstraints_12;
#line 293 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__ExistentialConstraints_46;
#line 293 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_PredTypeTerm_17_51;
#line 288 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_48_48;
#line 288 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_49_49;
#line 288 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_50_50;
#line 288 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 288 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_53_53;
#line 288 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 288 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 288 "prog_io_type_defn.m"
      {
#line 288 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 288 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 288 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 288 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_48_48)) == (MR_mktag((MR_Integer) 0)));
#line 288 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 288 "prog_io_type_defn.m"
          {
#line 288 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_48_48, (MR_Integer) 0)));
#line 288 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_49_49, (MR_String) "=>") == 0);
#line 288 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 288 "prog_io_type_defn.m"
              {
#line 289 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_50_50)) == (MR_mktag((MR_Integer) 1)));
#line 289 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 289 "prog_io_type_defn.m"
                  {
#line 289 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__STATE_VARIABLE_PredTypeTerm_17_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_50_50, (MR_Integer) 0)));
#line 289 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_50_50, (MR_Integer) 1)));
#line 289 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 289 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 289 "prog_io_type_defn.m"
                      {
#line 289 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__ExistentialConstraints_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, (MR_Integer) 0)));
#line 289 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, (MR_Integer) 1)));
#line 289 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 289 "prog_io_type_defn.m"
                      }
#line 289 "prog_io_type_defn.m"
                  }
#line 288 "prog_io_type_defn.m"
              }
#line 288 "prog_io_type_defn.m"
          }
#line 288 "prog_io_type_defn.m"
      }
#line 293 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 291 "prog_io_type_defn.m"
      {
#line 291 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11 = parse_tree__prog_io_type_defn__STATE_VARIABLE_PredTypeTerm_17_51;
#line 291 "prog_io_type_defn.m"
        {
#line 291 "prog_io_type_defn.m"
          parse_tree__prog_io_typeclass__parse_class_constraints_4_p_0(parse_tree__prog_io_type_defn__ModuleName_6, parse_tree__prog_io_type_defn__VarSet_7, parse_tree__prog_io_type_defn__ExistentialConstraints_46, &parse_tree__prog_io_type_defn__MaybeConstraints_12);
        }
#line 291 "prog_io_type_defn.m"
      }
#line 293 "prog_io_type_defn.m"
    else
#line 294 "prog_io_type_defn.m"
      {
#line 294 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__MaybeConstraints_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[11]);
#line 294 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11 = parse_tree__prog_io_type_defn__Term_9;
#line 294 "prog_io_type_defn.m"
      }
#line 247 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeConstraints_12)) == (MR_mktag((MR_Integer) 0))))
#line 246 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__MaybeConstructor_10 = (MR_Word) parse_tree__prog_io_type_defn__MaybeConstraints_12;
#line 247 "prog_io_type_defn.m"
    else
#line 248 "prog_io_type_defn.m"
      {
#line 248 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_39_39;
#line 248 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeConstraints_12, (MR_Integer) 0)));
#line 248 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MainTerm_17;
#line 248 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19;
#line 257 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__InsideBracesTerm_15;
#line 253 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_25_25;
#line 253 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_26_26;
#line 253 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_27_27;
#line 253 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_28_28;
#line 253 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn___Context_16;

#line 253 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11)) == (MR_mktag((MR_Integer) 0)));
#line 253 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 253 "prog_io_type_defn.m"
          {
#line 253 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11, (MR_Integer) 0)));
#line 253 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11, (MR_Integer) 1)));
#line 253 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn___Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11, (MR_Integer) 2)));
#line 253 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_25_25)) == (MR_mktag((MR_Integer) 0)));
#line 253 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 253 "prog_io_type_defn.m"
              {
#line 253 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_25_25, (MR_Integer) 0)));
#line 253 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_26_26, (MR_String) "{}") == 0);
#line 253 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 253 "prog_io_type_defn.m"
                  {
#line 254 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 254 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 254 "prog_io_type_defn.m"
                      {
#line 254 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__InsideBracesTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_27_27, (MR_Integer) 0)));
#line 254 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_27_27, (MR_Integer) 1)));
#line 254 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 254 "prog_io_type_defn.m"
                      }
#line 253 "prog_io_type_defn.m"
                  }
#line 253 "prog_io_type_defn.m"
              }
#line 253 "prog_io_type_defn.m"
          }
#line 257 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 256 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MainTerm_17 = parse_tree__prog_io_type_defn__InsideBracesTerm_15;
#line 257 "prog_io_type_defn.m"
        else
#line 258 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MainTerm_17 = parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11;
#line 12295 "parse_tree.prog_io_type_defn.c"
        parse_tree__prog_io_type_defn__TypeCtorInfo_39_39 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 261 "prog_io_type_defn.m"
        {
#line 261 "prog_io_type_defn.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_39_39, parse_tree__prog_io_type_defn__ModuleName_6, parse_tree__prog_io_type_defn__MainTerm_17, parse_tree__prog_io_type_defn__VarSet_7, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[124]), &parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19);
        }
#line 266 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19)) == (MR_mktag((MR_Integer) 0))))
#line 264 "prog_io_type_defn.m"
          {
#line 264 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Specs_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19, (MR_Integer) 0)));

#line 265 "prog_io_type_defn.m"
            {
#line 265 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeConstructor_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 265 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeConstructor_10, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_33));
#line 265 "prog_io_type_defn.m"
            }
#line 264 "prog_io_type_defn.m"
          }
#line 266 "prog_io_type_defn.m"
        else
#line 267 "prog_io_type_defn.m"
          {
#line 267 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Functor_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19, (MR_Integer) 0)));
#line 267 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ArgTerms_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19, (MR_Integer) 1)));
#line 267 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__MaybeConstructorArgs_22;

#line 268 "prog_io_type_defn.m"
            {
#line 268 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeConstructorArgs_22 = parse_tree__prog_io_type_defn__convert_constructor_arg_list_3_f_0(parse_tree__prog_io_type_defn__ModuleName_6, parse_tree__prog_io_type_defn__VarSet_7, parse_tree__prog_io_type_defn__ArgTerms_21);
            }
#line 273 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeConstructorArgs_22)) == (MR_mktag((MR_Integer) 0))))
#line 272 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeConstructor_10 = (MR_Word) parse_tree__prog_io_type_defn__MaybeConstructorArgs_22;
#line 273 "prog_io_type_defn.m"
            else
#line 274 "prog_io_type_defn.m"
              {
#line 274 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ConstructorArgs_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeConstructorArgs_22, (MR_Integer) 0)));
#line 274 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Ctor_24;
#line 274 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_32_32;

#line 276 "prog_io_type_defn.m"
                {
#line 276 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_32_32 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_39_39, parse_tree__prog_io_type_defn__MainTerm_17);
                }
#line 275 "prog_io_type_defn.m"
                {
#line 275 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Ctor_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 275 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_24, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ExistQVars_8));
#line 275 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_24, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Constraints_14));
#line 275 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_24, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__Functor_20));
#line 275 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_24, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__ConstructorArgs_23));
#line 275 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_24, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__V_32_32));
#line 275 "prog_io_type_defn.m"
                }
#line 277 "prog_io_type_defn.m"
                {
#line 277 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeConstructor_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 277 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeConstructor_10, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Ctor_24));
#line 277 "prog_io_type_defn.m"
                }
#line 274 "prog_io_type_defn.m"
              }
#line 267 "prog_io_type_defn.m"
          }
#line 248 "prog_io_type_defn.m"
      }
#line 241 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeConstructor_10;
#line 241 "prog_io_type_defn.m"
  }
#line 238 "prog_io_type_defn.m"
}

#line 221 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_constructors_2_3_f_0_1(
#line 221 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 221 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 221 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2)
#line 221 "prog_io_type_defn.m"
{
#line 221 "prog_io_type_defn.m"
  {
#line 221 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 221 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv0_HeadVar__2_47;

#line 221 "prog_io_type_defn.m"
    {
#line 221 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_constructor__221__1_2_p_0(((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1), &parse_tree__prog_io_type_defn__conv0_HeadVar__2_47);
    }
#line 221 "prog_io_type_defn.m"
    *parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv0_HeadVar__2_47));
#line 221 "prog_io_type_defn.m"
  }
#line 221 "prog_io_type_defn.m"
}

#line 197 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_constructors_2_3_f_0(
#line 197 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 197 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_2,
#line 197 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3)
#line 197 "prog_io_type_defn.m"
{
#line 200 "prog_io_type_defn.m"
  {
#line 200 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 200 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_4;

#line 200 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 200 "prog_io_type_defn.m"
      {
#line 200 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[10]);
#line 200 "prog_io_type_defn.m"
      }
#line 200 "prog_io_type_defn.m"
    else
#line 201 "prog_io_type_defn.m"
      {
#line 201 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Head_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__3_3, (MR_Integer) 0)));
#line 201 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Tail_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__3_3, (MR_Integer) 1)));
#line 201 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeHeadConstructor_13;
#line 201 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailConstructors_14;
#line 232 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__VarsTerm_28;
#line 232 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__SubTerm_29;
#line 219 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_36_36;
#line 219 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_37_37;
#line 219 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_38_38;
#line 219 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_39_39;
#line 219 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 219 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_30_30;
#line 210 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadConstructor_15;
#line 210 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailConstructors_16;

#line 219 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Head_10)) == (MR_mktag((MR_Integer) 0)));
#line 219 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 219 "prog_io_type_defn.m"
          {
#line 219 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Head_10, (MR_Integer) 0)));
#line 219 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Head_10, (MR_Integer) 1)));
#line 219 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Head_10, (MR_Integer) 2)));
#line 219 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_36_36)) == (MR_mktag((MR_Integer) 0)));
#line 219 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 219 "prog_io_type_defn.m"
              {
#line 219 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_36_36, (MR_Integer) 0)));
#line 219 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_37_37, (MR_String) "some") == 0);
#line 219 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 219 "prog_io_type_defn.m"
                  {
#line 219 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 219 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 219 "prog_io_type_defn.m"
                      {
#line 219 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__VarsTerm_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_38_38, (MR_Integer) 0)));
#line 219 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_38_38, (MR_Integer) 1)));
#line 219 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 219 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 219 "prog_io_type_defn.m"
                          {
#line 219 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__SubTerm_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_39_39, (MR_Integer) 0)));
#line 219 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_39_39, (MR_Integer) 1)));
#line 219 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 219 "prog_io_type_defn.m"
                          }
#line 219 "prog_io_type_defn.m"
                      }
#line 219 "prog_io_type_defn.m"
                  }
#line 219 "prog_io_type_defn.m"
              }
#line 219 "prog_io_type_defn.m"
          }
#line 232 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 224 "prog_io_type_defn.m"
          {
#line 224 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ExistQVars_31;

#line 220 "prog_io_type_defn.m"
            {
#line 220 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_util__parse_list_of_vars_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__VarsTerm_28, &parse_tree__prog_io_type_defn__ExistQVars_31);
            }
#line 224 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 221 "prog_io_type_defn.m"
              {
#line 221 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ExistQTVars_32;

#line 221 "prog_io_type_defn.m"
                {
#line 221 "prog_io_type_defn.m"
                  mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_4[2], parse_tree__prog_io_type_defn__ExistQVars_31, &parse_tree__prog_io_type_defn__ExistQTVars_32);
                }
#line 222 "prog_io_type_defn.m"
                {
#line 222 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeHeadConstructor_13 = parse_tree__prog_io_type_defn__parse_constructor_2_4_f_0(parse_tree__prog_io_type_defn__HeadVar__1_1, parse_tree__prog_io_type_defn__VarSet_2, parse_tree__prog_io_type_defn__ExistQTVars_32, parse_tree__prog_io_type_defn__SubTerm_29);
                }
#line 221 "prog_io_type_defn.m"
              }
#line 224 "prog_io_type_defn.m"
            else
#line 225 "prog_io_type_defn.m"
              {
#line 225 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_52_71 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 225 "prog_io_type_defn.m"
                MR_String parse_tree__prog_io_type_defn__TermStr_33;
#line 225 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Pieces_34;
#line 225 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_35;
#line 225 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_44_44;
#line 225 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_45_45;
#line 225 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_54_54;
#line 225 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_55_55;
#line 225 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_56_56;
#line 225 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_57_57;
#line 225 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_58_58;
#line 225 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_61_61;

#line 225 "prog_io_type_defn.m"
                {
#line 225 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__TermStr_33 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_52_71, parse_tree__prog_io_type_defn__VarSet_2, parse_tree__prog_io_type_defn__Head_10);
                }
#line 227 "prog_io_type_defn.m"
                {
#line 227 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 227 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_45_45, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__TermStr_33));
#line 227 "prog_io_type_defn.m"
                }
#line 227 "prog_io_type_defn.m"
                {
#line 227 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_45_45));
#line 227 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[21])));
#line 227 "prog_io_type_defn.m"
                }
#line 226 "prog_io_type_defn.m"
                {
#line 226 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Pieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[122])));
#line 226 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_34, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_44_44));
#line 226 "prog_io_type_defn.m"
                }
#line 229 "prog_io_type_defn.m"
                {
#line 229 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_56_56 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_52_71, parse_tree__prog_io_type_defn__VarsTerm_28);
                }
#line 229 "prog_io_type_defn.m"
                {
#line 229 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 229 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_58_58, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_34));
#line 229 "prog_io_type_defn.m"
                }
#line 229 "prog_io_type_defn.m"
                {
#line 229 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_58_58));
#line 229 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 229 "prog_io_type_defn.m"
                }
#line 229 "prog_io_type_defn.m"
                {
#line 229 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 229 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_56_56));
#line 229 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_55_55, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_57_57));
#line 229 "prog_io_type_defn.m"
                }
#line 229 "prog_io_type_defn.m"
                {
#line 229 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_55_55));
#line 229 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 229 "prog_io_type_defn.m"
                }
#line 228 "prog_io_type_defn.m"
                {
#line 228 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 228 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 228 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 228 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_35, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_54_54));
#line 228 "prog_io_type_defn.m"
                }
#line 230 "prog_io_type_defn.m"
                {
#line 230 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_35));
#line 230 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 230 "prog_io_type_defn.m"
                }
#line 230 "prog_io_type_defn.m"
                {
#line 230 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeHeadConstructor_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 230 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeHeadConstructor_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_61_61));
#line 230 "prog_io_type_defn.m"
                }
#line 225 "prog_io_type_defn.m"
              }
#line 224 "prog_io_type_defn.m"
          }
#line 232 "prog_io_type_defn.m"
        else
#line 233 "prog_io_type_defn.m"
          {
#line 234 "prog_io_type_defn.m"
            {
#line 234 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeHeadConstructor_13 = parse_tree__prog_io_type_defn__parse_constructor_2_4_f_0(parse_tree__prog_io_type_defn__HeadVar__1_1, parse_tree__prog_io_type_defn__VarSet_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_type_defn__Head_10);
            }
#line 233 "prog_io_type_defn.m"
          }
#line 203 "prog_io_type_defn.m"
        {
#line 203 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeTailConstructors_14 = parse_tree__prog_io_type_defn__parse_constructors_2_3_f_0(parse_tree__prog_io_type_defn__HeadVar__1_1, parse_tree__prog_io_type_defn__VarSet_2, parse_tree__prog_io_type_defn__Tail_11);
        }
#line 205 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeHeadConstructor_13)) == (MR_mktag((MR_Integer) 1)));
#line 205 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 205 "prog_io_type_defn.m"
          {
#line 205 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__HeadConstructor_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeHeadConstructor_13, (MR_Integer) 0)));
#line 206 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeTailConstructors_14)) == (MR_mktag((MR_Integer) 1)));
#line 206 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 206 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__TailConstructors_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailConstructors_14, (MR_Integer) 0)));
#line 205 "prog_io_type_defn.m"
          }
#line 210 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 208 "prog_io_type_defn.m"
          {
#line 208 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Constructors_17;

#line 208 "prog_io_type_defn.m"
            {
#line 208 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Constructors_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Constructors_17, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__HeadConstructor_15));
#line 208 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Constructors_17, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__TailConstructors_16));
#line 208 "prog_io_type_defn.m"
            }
#line 209 "prog_io_type_defn.m"
            {
#line 209 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 209 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Constructors_17));
#line 209 "prog_io_type_defn.m"
            }
#line 208 "prog_io_type_defn.m"
          }
#line 210 "prog_io_type_defn.m"
        else
#line 212 "prog_io_type_defn.m"
          {
#line 212 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Specs_18;
#line 212 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 212 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_20_20;

#line 211 "prog_io_type_defn.m"
            {
#line 211 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_19_19 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, parse_tree__prog_io_type_defn__MaybeHeadConstructor_13);
            }
#line 212 "prog_io_type_defn.m"
            {
#line 212 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_20_20 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[3], parse_tree__prog_io_type_defn__MaybeTailConstructors_14);
            }
#line 211 "prog_io_type_defn.m"
            {
#line 211 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Specs_18 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_type_defn__V_19_19, parse_tree__prog_io_type_defn__V_20_20);
            }
#line 213 "prog_io_type_defn.m"
            {
#line 213 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 213 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_18));
#line 213 "prog_io_type_defn.m"
            }
#line 212 "prog_io_type_defn.m"
          }
#line 201 "prog_io_type_defn.m"
      }
#line 200 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_4;
#line 200 "prog_io_type_defn.m"
  }
#line 197 "prog_io_type_defn.m"
}

#line 169 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__du_type_rhs_ctors_and_where_terms_3_p_0(
#line 169 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_4,
#line 169 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__CtorsTerm_5,
#line 169 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeWhereTerm_6)
#line 169 "prog_io_type_defn.m"
{
#line 179 "prog_io_type_defn.m"
  {
#line 179 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_4)) == (MR_mktag((MR_Integer) 0)));
#line 179 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__CtorsTerm0_9;
#line 179 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__WhereTerm_10;
#line 174 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Args_7;
#line 174 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;
#line 174 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_12_12;
#line 174 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_13_13;
#line 174 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_14_14;
#line 174 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn___Context_8;

#line 174 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 174 "prog_io_type_defn.m"
      {
#line 174 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_4, (MR_Integer) 0)));
#line 174 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Args_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_4, (MR_Integer) 1)));
#line 174 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_4, (MR_Integer) 2)));
#line 174 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_11_11)) == (MR_mktag((MR_Integer) 0)));
#line 174 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 174 "prog_io_type_defn.m"
          {
#line 174 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_11_11, (MR_Integer) 0)));
#line 174 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_12_12, (MR_String) "where") == 0);
#line 174 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 174 "prog_io_type_defn.m"
              {
#line 175 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Args_7)) == (MR_mktag((MR_Integer) 1)));
#line 175 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 175 "prog_io_type_defn.m"
                  {
#line 175 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__CtorsTerm0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Args_7, (MR_Integer) 0)));
#line 175 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Args_7, (MR_Integer) 1)));
#line 175 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 175 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 175 "prog_io_type_defn.m"
                      {
#line 175 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__WhereTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_13_13, (MR_Integer) 0)));
#line 175 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_13_13, (MR_Integer) 1)));
#line 175 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 175 "prog_io_type_defn.m"
                      }
#line 175 "prog_io_type_defn.m"
                  }
#line 174 "prog_io_type_defn.m"
              }
#line 174 "prog_io_type_defn.m"
          }
#line 174 "prog_io_type_defn.m"
      }
#line 179 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 177 "prog_io_type_defn.m"
      {
#line 177 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__CtorsTerm_5 = parse_tree__prog_io_type_defn__CtorsTerm0_9;
#line 178 "prog_io_type_defn.m"
        {
#line 178 "prog_io_type_defn.m"
          MR_Word base;
#line 178 "prog_io_type_defn.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 178 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeWhereTerm_6 = base;
#line 178 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__WhereTerm_10));
#line 178 "prog_io_type_defn.m"
        }
#line 177 "prog_io_type_defn.m"
      }
#line 179 "prog_io_type_defn.m"
    else
#line 180 "prog_io_type_defn.m"
      {
#line 180 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__CtorsTerm_5 = parse_tree__prog_io_type_defn__Term_4;
#line 181 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeWhereTerm_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 180 "prog_io_type_defn.m"
      }
#line 179 "prog_io_type_defn.m"
  }
#line 169 "prog_io_type_defn.m"
}

#line 108 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_du_type_defn_8_p_0(
#line 108 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_9,
#line 108 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_10,
#line 108 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_11,
#line 108 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_12,
#line 108 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes0_13,
#line 108 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_14,
#line 108 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_15,
#line 108 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_16)
#line 108 "prog_io_type_defn.m"
{
#line 12959 "parse_tree.prog_io_type_defn.c"
  {
#line 12961 "parse_tree.prog_io_type_defn.c"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Attributes0_13)) == (MR_mktag((MR_Integer) 1)));
#line 1313 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_85_85;
#line 1313 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_86_86;
#line 1313 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_84;
#line 1313 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_83_83;

#line 1313 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1313 "prog_io_type_defn.m"
      {
#line 1313 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Attributes0_13, (MR_Integer) 0)));
#line 1313 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Attributes0_13, (MR_Integer) 1)));
#line 1313 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_85_85, (MR_Integer) 0)));
#line 1313 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_85_85, (MR_Integer) 1)));
#line 1313 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_86_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1313 "prog_io_type_defn.m"
      }
#line 12988 "parse_tree.prog_io_type_defn.c"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 12990 "parse_tree.prog_io_type_defn.c"
      {
#line 12992 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__Spec_20;
#line 12994 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__V_59_59;
#line 12996 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__V_60_60;
#line 12998 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__V_61_61;
#line 13000 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__V_66_66;

#line 119 "prog_io_type_defn.m"
        {
#line 119 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_61_61 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadTerm_11);
        }
#line 119 "prog_io_type_defn.m"
        {
#line 119 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 119 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_61_61));
#line 119 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[121])));
#line 119 "prog_io_type_defn.m"
        }
#line 119 "prog_io_type_defn.m"
        {
#line 119 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 119 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_59_59, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_60_60));
#line 119 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 119 "prog_io_type_defn.m"
        }
#line 118 "prog_io_type_defn.m"
        {
#line 118 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 118 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 118 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 118 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_20, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_59_59));
#line 118 "prog_io_type_defn.m"
        }
#line 120 "prog_io_type_defn.m"
        {
#line 120 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 120 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_20));
#line 120 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 120 "prog_io_type_defn.m"
        }
#line 120 "prog_io_type_defn.m"
        {
#line 120 "prog_io_type_defn.m"
          MR_Word base;
#line 120 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 120 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeItem_16 = base;
#line 120 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_66_66));
#line 120 "prog_io_type_defn.m"
        }
#line 13062 "parse_tree.prog_io_type_defn.c"
      }
#line 13064 "parse_tree.prog_io_type_defn.c"
    else
#line 13066 "parse_tree.prog_io_type_defn.c"
      {
#line 13068 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_21;
#line 13070 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__CtorsTerm_22;
#line 13072 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__MaybeWhereTerm_23;
#line 13074 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__MaybeCtors_24;
#line 13076 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__MaybeWhere_25;
#line 13078 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__BodyTermList_92;
#line 162 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Name_26;
#line 162 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Params_27;
#line 162 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Ctors_28;
#line 162 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeUserEqComp_30;
#line 162 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgIs_31;
#line 136 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn___NoSolverTypeDetails_29;

#line 123 "prog_io_type_defn.m"
        {
#line 123 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(parse_tree__prog_io_type_defn__ModuleName_9, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__HeadTerm_11, &parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_21);
        }
#line 125 "prog_io_type_defn.m"
        {
#line 125 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__du_type_rhs_ctors_and_where_terms_3_p_0(parse_tree__prog_io_type_defn__BodyTerm_12, &parse_tree__prog_io_type_defn__CtorsTerm_22, &parse_tree__prog_io_type_defn__MaybeWhereTerm_23);
        }
#line 192 "prog_io_type_defn.m"
        {
#line 192 "prog_io_type_defn.m"
          parse_tree__prog_io_util__disjunction_to_list_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__CtorsTerm_22, &parse_tree__prog_io_type_defn__BodyTermList_92);
        }
#line 193 "prog_io_type_defn.m"
        {
#line 193 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeCtors_24 = parse_tree__prog_io_type_defn__parse_constructors_2_3_f_0(parse_tree__prog_io_type_defn__ModuleName_9, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__BodyTermList_92);
        }
#line 127 "prog_io_type_defn.m"
        {
#line 127 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeWhere_25 = parse_tree__prog_io_type_defn__parse_type_decl_where_term_4_f_0((MR_Integer) 0, parse_tree__prog_io_type_defn__ModuleName_9, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__MaybeWhereTerm_23);
        }
#line 134 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_21)) == (MR_mktag((MR_Integer) 1)));
#line 134 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 134 "prog_io_type_defn.m"
          {
#line 134 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Name_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_21, (MR_Integer) 0)));
#line 134 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Params_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_21, (MR_Integer) 1)));
#line 135 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeCtors_24)) == (MR_mktag((MR_Integer) 1)));
#line 135 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 135 "prog_io_type_defn.m"
              {
#line 135 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__Ctors_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeCtors_24, (MR_Integer) 0)));
#line 136 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeWhere_25)) == (MR_mktag((MR_Integer) 1)));
#line 136 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 136 "prog_io_type_defn.m"
                  {
#line 136 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn___NoSolverTypeDetails_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_25, (MR_Integer) 0)));
#line 136 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeUserEqComp_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_25, (MR_Integer) 1)));
#line 136 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeDirectArgIs_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_25, (MR_Integer) 2)));
#line 136 "prog_io_type_defn.m"
                  }
#line 135 "prog_io_type_defn.m"
              }
#line 134 "prog_io_type_defn.m"
          }
#line 162 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 139 "prog_io_type_defn.m"
          {
#line 139 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__CtorsSpecs_32;
#line 139 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ErrorSpecs_34;

#line 139 "prog_io_type_defn.m"
            {
#line 139 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__process_du_ctors_6_p_0(parse_tree__prog_io_type_defn__Params_27, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__BodyTerm_12, parse_tree__prog_io_type_defn__Ctors_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_type_defn__CtorsSpecs_32);
            }
#line 144 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__MaybeDirectArgIs_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 146 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__ErrorSpecs_34 = parse_tree__prog_io_type_defn__CtorsSpecs_32;
#line 144 "prog_io_type_defn.m"
            else
#line 141 "prog_io_type_defn.m"
              {
#line 141 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__DirectArgCtors_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeDirectArgIs_31, (MR_Integer) 0)));

#line 142 "prog_io_type_defn.m"
                {
#line 142 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__check_direct_arg_ctors_5_p_0(parse_tree__prog_io_type_defn__Ctors_28, parse_tree__prog_io_type_defn__DirectArgCtors_33, parse_tree__prog_io_type_defn__BodyTerm_12, parse_tree__prog_io_type_defn__CtorsSpecs_32, &parse_tree__prog_io_type_defn__ErrorSpecs_34);
                }
#line 141 "prog_io_type_defn.m"
              }
#line 158 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__ErrorSpecs_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 149 "prog_io_type_defn.m"
              {
#line 149 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeVarSet_35;
#line 149 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeDefn_36;
#line 149 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ItemTypeDefn_37;
#line 149 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Item_38;
#line 149 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeItem0_39;

#line 150 "prog_io_type_defn.m"
                {
#line 150 "prog_io_type_defn.m"
                  mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_10, &parse_tree__prog_io_type_defn__TypeVarSet_35);
                }
#line 151 "prog_io_type_defn.m"
                {
#line 151 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__TypeDefn_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 151 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__TypeDefn_36, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Ctors_28));
#line 151 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__TypeDefn_36, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeUserEqComp_30));
#line 151 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__TypeDefn_36, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeDirectArgIs_31));
#line 151 "prog_io_type_defn.m"
                }
#line 153 "prog_io_type_defn.m"
                {
#line 153 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__ItemTypeDefn_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 153 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_37, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeVarSet_35));
#line 153 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_37, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_26));
#line 153 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_37, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__Params_27));
#line 153 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_37, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn_36));
#line 153 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_37, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_14));
#line 153 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_37, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__SeqNum_15));
#line 153 "prog_io_type_defn.m"
                }
#line 155 "prog_io_type_defn.m"
                {
#line 155 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Item_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 155 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__Item_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 155 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__Item_38, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__ItemTypeDefn_37));
#line 155 "prog_io_type_defn.m"
                }
#line 156 "prog_io_type_defn.m"
                {
#line 156 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeItem0_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 156 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItem0_39, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Item_38));
#line 156 "prog_io_type_defn.m"
                }
#line 157 "prog_io_type_defn.m"
                {
#line 157 "prog_io_type_defn.m"
                  parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_type_defn__MaybeItem0_39, parse_tree__prog_io_type_defn__Attributes0_13, parse_tree__prog_io_type_defn__MaybeItem_16);
#line 157 "prog_io_type_defn.m"
                  return;
                }
#line 149 "prog_io_type_defn.m"
              }
#line 158 "prog_io_type_defn.m"
            else
#line 160 "prog_io_type_defn.m"
              {
#line 160 "prog_io_type_defn.m"
                MR_Word base;
#line 160 "prog_io_type_defn.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 160 "prog_io_type_defn.m"
                *parse_tree__prog_io_type_defn__MaybeItem_16 = base;
#line 160 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ErrorSpecs_34));
#line 160 "prog_io_type_defn.m"
              }
#line 139 "prog_io_type_defn.m"
          }
#line 162 "prog_io_type_defn.m"
        else
#line 164 "prog_io_type_defn.m"
          {
#line 164 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_72_72 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 164 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Specs_42;
#line 164 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_45_45;
#line 164 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_46_46;
#line 164 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_47_47;
#line 164 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_48_48;

#line 163 "prog_io_type_defn.m"
            {
#line 163 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_45_45 = parse_tree__prog_io_util__get_any_errors2_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[2], parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_21);
            }
#line 164 "prog_io_type_defn.m"
            {
#line 164 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_47_47 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[3], parse_tree__prog_io_type_defn__MaybeCtors_24);
            }
#line 164 "prog_io_type_defn.m"
            {
#line 164 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_48_48 = parse_tree__prog_io_util__get_any_errors3_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[4], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[5], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[7], parse_tree__prog_io_type_defn__MaybeWhere_25);
            }
#line 164 "prog_io_type_defn.m"
            {
#line 164 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_46_46 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_72_72, parse_tree__prog_io_type_defn__V_47_47, parse_tree__prog_io_type_defn__V_48_48);
            }
#line 163 "prog_io_type_defn.m"
            {
#line 163 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Specs_42 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_72_72, parse_tree__prog_io_type_defn__V_45_45, parse_tree__prog_io_type_defn__V_46_46);
            }
#line 165 "prog_io_type_defn.m"
            {
#line 165 "prog_io_type_defn.m"
              MR_Word base;
#line 165 "prog_io_type_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 165 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeItem_16 = base;
#line 165 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_42));
#line 165 "prog_io_type_defn.m"
            }
#line 164 "prog_io_type_defn.m"
          }
#line 13335 "parse_tree.prog_io_type_defn.c"
      }
#line 13337 "parse_tree.prog_io_type_defn.c"
  }
#line 108 "prog_io_type_defn.m"
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
#line 775 "prog_io_type_defn.m"
  {
#line 775 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_10)) == (MR_mktag((MR_Integer) 0)));
#line 775 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__BeforeWhereTermPrime_13;
#line 775 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__WhereTerm_14;
#line 769 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 769 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 769 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 769 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 769 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 769 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_15_15;

#line 769 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 769 "prog_io_type_defn.m"
      {
#line 769 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 0)));
#line 769 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 1)));
#line 769 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 2)));
#line 769 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 769 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 769 "prog_io_type_defn.m"
          {
#line 769 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 769 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) "where") == 0);
#line 769 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 769 "prog_io_type_defn.m"
              {
#line 770 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 770 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 770 "prog_io_type_defn.m"
                  {
#line 770 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__BeforeWhereTermPrime_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 770 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 770 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 770 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 770 "prog_io_type_defn.m"
                      {
#line 770 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__WhereTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 770 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 770 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 770 "prog_io_type_defn.m"
                      }
#line 770 "prog_io_type_defn.m"
                  }
#line 769 "prog_io_type_defn.m"
              }
#line 769 "prog_io_type_defn.m"
          }
#line 769 "prog_io_type_defn.m"
      }
#line 775 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 772 "prog_io_type_defn.m"
      {
#line 772 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_21_21;

#line 772 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__BeforeWhereTerm_11 = parse_tree__prog_io_type_defn__BeforeWhereTermPrime_13;
#line 774 "prog_io_type_defn.m"
        {
#line 774 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 774 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__WhereTerm_14));
#line 774 "prog_io_type_defn.m"
        }
#line 773 "prog_io_type_defn.m"
        {
#line 773 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeWhereDetails_12 = parse_tree__prog_io_type_defn__parse_type_decl_where_term_4_f_0(parse_tree__prog_io_type_defn__IsSolverType_7, parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__V_21_21);
        }
#line 772 "prog_io_type_defn.m"
      }
#line 775 "prog_io_type_defn.m"
    else
#line 776 "prog_io_type_defn.m"
      {
#line 776 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__BeforeWhereTerm_11 = parse_tree__prog_io_type_defn__Term_10;
#line 777 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeWhereDetails_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_4[1]);
#line 776 "prog_io_type_defn.m"
      }
#line 775 "prog_io_type_defn.m"
  }
#line 48 "prog_io_type_defn.m"
}

#line 1293 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_5(
#line 1293 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1293 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1293 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2)
#line 1293 "prog_io_type_defn.m"
{
#line 1293 "prog_io_type_defn.m"
  {
#line 1293 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 1293 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv1_HeadVar__2_102;

#line 1293 "prog_io_type_defn.m"
    {
#line 1293 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_type_defn_head__1293__1_2_p_0(((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1), &parse_tree__prog_io_type_defn__conv1_HeadVar__2_102);
    }
#line 1293 "prog_io_type_defn.m"
    *parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv1_HeadVar__2_102));
#line 1293 "prog_io_type_defn.m"
  }
#line 1293 "prog_io_type_defn.m"
}

#line 1284 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_1(
#line 1284 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 1284 "prog_io_type_defn.m"
{
#line 1284 "prog_io_type_defn.m"
  {
#line 1284 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 1284 "prog_io_type_defn.m"
    MR_builtin_longjmp((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__commit_0, 1);
#line 1284 "prog_io_type_defn.m"
  }
#line 1284 "prog_io_type_defn.m"
}

#line 1284 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_3(
#line 1284 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 1284 "prog_io_type_defn.m"
{
#line 1284 "prog_io_type_defn.m"
  {
#line 1284 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 1284 "prog_io_type_defn.m"
    (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__V_22_22 = ((MR_Word) (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__conv0_V_22_22);
#line 1284 "prog_io_type_defn.m"
    {
#line 1284 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_2(parse_tree__prog_io_type_defn__env_ptr);
#line 1284 "prog_io_type_defn.m"
      return;
    }
#line 1284 "prog_io_type_defn.m"
  }
#line 1284 "prog_io_type_defn.m"
}

#line 1284 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_2(
#line 1284 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 1284 "prog_io_type_defn.m"
{
#line 1284 "prog_io_type_defn.m"
  {
#line 1284 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 1284 "prog_io_type_defn.m"
    (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 1284 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded)
#line 1284 "prog_io_type_defn.m"
      {
#line 1284 "prog_io_type_defn.m"
        {
#line 1284 "prog_io_type_defn.m"
          (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__Param_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__V_30_30, (MR_Integer) 0)));
#line 1284 "prog_io_type_defn.m"
          (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__OtherParams_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__V_30_30, (MR_Integer) 1)));
#line 1284 "prog_io_type_defn.m"
        }
#line 1284 "prog_io_type_defn.m"
        {
#line 1285 "prog_io_type_defn.m"
          {
#line 1285 "prog_io_type_defn.m"
            (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded = mercury__list__member_2_p_0((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__TypeInfo_100_100, ((MR_Box) ((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__Param_23)), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__OtherParams_24);
          }
#line 1285 "prog_io_type_defn.m"
          if ((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded)
#line 1285 "prog_io_type_defn.m"
            {
#line 1285 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_1(parse_tree__prog_io_type_defn__env_ptr);
#line 1285 "prog_io_type_defn.m"
              return;
            }
#line 1284 "prog_io_type_defn.m"
        }
#line 1284 "prog_io_type_defn.m"
      }
#line 1284 "prog_io_type_defn.m"
  }
#line 1284 "prog_io_type_defn.m"
}

#line 1284 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_4(
#line 1284 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 1284 "prog_io_type_defn.m"
{
#line 1284 "prog_io_type_defn.m"
  {
#line 1284 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 1284 "prog_io_type_defn.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__commit_0) == 0)
#line 1284 "prog_io_type_defn.m"
      {
#line 13617 "parse_tree.prog_io_type_defn.c"
        (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__TypeInfo_100_100 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[0];
#line 1284 "prog_io_type_defn.m"
        {
#line 1284 "prog_io_type_defn.m"
          mercury__list__member_3_p_0((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__TypeInfo_100_100, &(parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__conv0_V_22_22, (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__Params0_21, &(parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__V_30_30, parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_3, parse_tree__prog_io_type_defn__env_ptr);
        }
#line 1284 "prog_io_type_defn.m"
        (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded = MR_FALSE;
#line 1284 "prog_io_type_defn.m"
      }
#line 1284 "prog_io_type_defn.m"
    else
#line 1284 "prog_io_type_defn.m"
      (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded = MR_TRUE;
#line 1284 "prog_io_type_defn.m"
  }
#line 1284 "prog_io_type_defn.m"
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

#line 1265 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__HeadTerm_7)) == (MR_mktag((MR_Integer) 0))))
#line 1271 "prog_io_type_defn.m"
      {
#line 1271 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_99_99 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1271 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadTerm_7, (MR_Integer) 2)));
#line 1271 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadResult_17;
#line 1271 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadTerm_7, (MR_Integer) 0)));
#line 1271 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadTerm_7, (MR_Integer) 1)));

#line 1273 "prog_io_type_defn.m"
        {
#line 1273 "prog_io_type_defn.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_99_99, parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__HeadTerm_7, parse_tree__prog_io_type_defn__VarSet_6, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[117]), &parse_tree__prog_io_type_defn__HeadResult_17);
        }
#line 1278 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__HeadResult_17)) == (MR_mktag((MR_Integer) 0))))
#line 1277 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = (MR_Word) parse_tree__prog_io_type_defn__HeadResult_17;
#line 1278 "prog_io_type_defn.m"
        else
#line 1279 "prog_io_type_defn.m"
          {
#line 1279 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Name_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadResult_17, (MR_Integer) 0)));
#line 1279 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ArgTerms_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadResult_17, (MR_Integer) 1)));

#line 1281 "prog_io_type_defn.m"
            {
#line 1281 "prog_io_type_defn.m"
              (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_99_99, parse_tree__prog_io_type_defn__ArgTerms_20, &(parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__Params0_21);
            }
#line 1296 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded)
#line 1292 "prog_io_type_defn.m"
              {
#line 1284 "prog_io_type_defn.m"
                {
#line 1284 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_4(&parse_tree__prog_io_type_defn__env);
                }
#line 1292 "prog_io_type_defn.m"
                if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded)
#line 1288 "prog_io_type_defn.m"
                  {
#line 1288 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 1288 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 1288 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_47_47;
#line 1288 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Spec_86;

#line 1290 "prog_io_type_defn.m"
                    {
#line 1290 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1290 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__HeadContext_15));
#line 1290 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[118])));
#line 1290 "prog_io_type_defn.m"
                    }
#line 1290 "prog_io_type_defn.m"
                    {
#line 1290 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1290 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 1290 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1290 "prog_io_type_defn.m"
                    }
#line 1289 "prog_io_type_defn.m"
                    {
#line 1289 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Spec_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1289 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1289 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1289 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_86, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 1289 "prog_io_type_defn.m"
                    }
#line 1291 "prog_io_type_defn.m"
                    {
#line 1291 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1291 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_86));
#line 1291 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1291 "prog_io_type_defn.m"
                    }
#line 1291 "prog_io_type_defn.m"
                    {
#line 1291 "prog_io_type_defn.m"
                      MR_Word base;
#line 1291 "prog_io_type_defn.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1291 "prog_io_type_defn.m"
                      *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = base;
#line 1291 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 1291 "prog_io_type_defn.m"
                    }
#line 1288 "prog_io_type_defn.m"
                  }
#line 1292 "prog_io_type_defn.m"
                else
#line 1293 "prog_io_type_defn.m"
                  {
#line 1293 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Params_25;

#line 1293 "prog_io_type_defn.m"
                    {
#line 1293 "prog_io_type_defn.m"
                      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_4[0], (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__Params0_21, &parse_tree__prog_io_type_defn__Params_25);
                    }
#line 1294 "prog_io_type_defn.m"
                    {
#line 1294 "prog_io_type_defn.m"
                      MR_Word base;
#line 1294 "prog_io_type_defn.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1294 "prog_io_type_defn.m"
                      *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = base;
#line 1294 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_19));
#line 1294 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Params_25));
#line 1294 "prog_io_type_defn.m"
                    }
#line 1293 "prog_io_type_defn.m"
                  }
#line 1292 "prog_io_type_defn.m"
              }
#line 1296 "prog_io_type_defn.m"
            else
#line 1297 "prog_io_type_defn.m"
              {
#line 1297 "prog_io_type_defn.m"
                MR_String parse_tree__prog_io_type_defn__HeadTermStr_26;
#line 1297 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 1297 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_53_53;
#line 1297 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_62_62;
#line 1297 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_63_63;
#line 1297 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_64_64;
#line 1297 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_65_65;
#line 1297 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_68_68;
#line 1297 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Pieces_89;
#line 1297 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_90;

#line 1297 "prog_io_type_defn.m"
                {
#line 1297 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__HeadTermStr_26 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_99_99, parse_tree__prog_io_type_defn__VarSet_6, parse_tree__prog_io_type_defn__HeadTerm_7);
                }
#line 1299 "prog_io_type_defn.m"
                {
#line 1299 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1299 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1299 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_53_53, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__HeadTermStr_26));
#line 1299 "prog_io_type_defn.m"
                }
#line 1299 "prog_io_type_defn.m"
                {
#line 1299 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1299 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_53_53));
#line 1299 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[21])));
#line 1299 "prog_io_type_defn.m"
                }
#line 1298 "prog_io_type_defn.m"
                {
#line 1298 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Pieces_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1298 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[119])));
#line 1298 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_89, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_52_52));
#line 1298 "prog_io_type_defn.m"
                }
#line 1301 "prog_io_type_defn.m"
                {
#line 1301 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1301 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_89));
#line 1301 "prog_io_type_defn.m"
                }
#line 1301 "prog_io_type_defn.m"
                {
#line 1301 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1301 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_65_65));
#line 1301 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1301 "prog_io_type_defn.m"
                }
#line 1301 "prog_io_type_defn.m"
                {
#line 1301 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1301 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__HeadContext_15));
#line 1301 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_64_64));
#line 1301 "prog_io_type_defn.m"
                }
#line 1301 "prog_io_type_defn.m"
                {
#line 1301 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1301 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_63_63));
#line 1301 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1301 "prog_io_type_defn.m"
                }
#line 1300 "prog_io_type_defn.m"
                {
#line 1300 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1300 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_90, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1300 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1300 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_90, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_62_62));
#line 1300 "prog_io_type_defn.m"
                }
#line 1302 "prog_io_type_defn.m"
                {
#line 1302 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1302 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_90));
#line 1302 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1302 "prog_io_type_defn.m"
                }
#line 1302 "prog_io_type_defn.m"
                {
#line 1302 "prog_io_type_defn.m"
                  MR_Word base;
#line 1302 "prog_io_type_defn.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1302 "prog_io_type_defn.m"
                  *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = base;
#line 1302 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_68_68));
#line 1302 "prog_io_type_defn.m"
                }
#line 1297 "prog_io_type_defn.m"
              }
#line 1279 "prog_io_type_defn.m"
          }
#line 1271 "prog_io_type_defn.m"
      }
#line 1265 "prog_io_type_defn.m"
    else
#line 1265 "prog_io_type_defn.m"
      {
#line 1265 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadTerm_7, (MR_Integer) 1)));
#line 1265 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_12;
#line 1265 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_77_77;
#line 1265 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_78_78;
#line 1265 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_83_83;
#line 1265 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadTerm_7, (MR_Integer) 0)));

#line 1268 "prog_io_type_defn.m"
        {
#line 1268 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1268 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_10));
#line 1268 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[120])));
#line 1268 "prog_io_type_defn.m"
        }
#line 1268 "prog_io_type_defn.m"
        {
#line 1268 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1268 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_78_78));
#line 1268 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1268 "prog_io_type_defn.m"
        }
#line 1267 "prog_io_type_defn.m"
        {
#line 1267 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1267 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1267 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1267 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_77_77));
#line 1267 "prog_io_type_defn.m"
        }
#line 1269 "prog_io_type_defn.m"
        {
#line 1269 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1269 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_12));
#line 1269 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1269 "prog_io_type_defn.m"
        }
#line 1269 "prog_io_type_defn.m"
        {
#line 1269 "prog_io_type_defn.m"
          MR_Word base;
#line 1269 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1269 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = base;
#line 1269 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_83_83));
#line 1269 "prog_io_type_defn.m"
        }
#line 1265 "prog_io_type_defn.m"
      }
#line 38 "prog_io_type_defn.m"
  }
#line 38 "prog_io_type_defn.m"
}

#line 547 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_1(
#line 547 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 547 "prog_io_type_defn.m"
{
#line 547 "prog_io_type_defn.m"
  {
#line 547 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 547 "prog_io_type_defn.m"
    MR_builtin_longjmp((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__commit_0, 1);
#line 547 "prog_io_type_defn.m"
  }
#line 547 "prog_io_type_defn.m"
}

#line 547 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_2(
#line 547 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 547 "prog_io_type_defn.m"
{
#line 547 "prog_io_type_defn.m"
  {
#line 547 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 547 "prog_io_type_defn.m"
    {
#line 14050 "parse_tree.prog_io_type_defn.c"
      (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TypeCtorInfo_64_78 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 548 "prog_io_type_defn.m"
      {
#line 548 "prog_io_type_defn.m"
        mercury__term__coerce_var_2_p_0((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TypeCtorInfo_63_77, (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TypeCtorInfo_64_78, (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__Var_35, &(parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TVar_36);
      }
#line 549 "prog_io_type_defn.m"
      {
#line 549 "prog_io_type_defn.m"
        (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], ((MR_Box) ((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TVar_36)), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__Params_34);
      }
#line 549 "prog_io_type_defn.m"
      (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = !((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded);
#line 549 "prog_io_type_defn.m"
      if ((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded)
#line 549 "prog_io_type_defn.m"
        {
#line 549 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_1(parse_tree__prog_io_type_defn__env_ptr);
#line 549 "prog_io_type_defn.m"
          return;
        }
#line 547 "prog_io_type_defn.m"
    }
#line 547 "prog_io_type_defn.m"
  }
#line 547 "prog_io_type_defn.m"
}

#line 547 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_3(
#line 547 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 547 "prog_io_type_defn.m"
{
#line 547 "prog_io_type_defn.m"
  {
#line 547 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 547 "prog_io_type_defn.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__commit_0) == 0)
#line 547 "prog_io_type_defn.m"
      {
#line 14096 "parse_tree.prog_io_type_defn.c"
        (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TypeCtorInfo_63_77 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 547 "prog_io_type_defn.m"
        {
#line 547 "prog_io_type_defn.m"
          mercury__term__contains_var_2_p_1((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TypeCtorInfo_63_77, (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__BodyTerm_19, &(parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__Var_35, parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_2, parse_tree__prog_io_type_defn__env_ptr);
        }
#line 547 "prog_io_type_defn.m"
        (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = MR_FALSE;
#line 547 "prog_io_type_defn.m"
      }
#line 547 "prog_io_type_defn.m"
    else
#line 547 "prog_io_type_defn.m"
      (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = MR_TRUE;
#line 547 "prog_io_type_defn.m"
  }
#line 547 "prog_io_type_defn.m"
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

#line 96 "prog_io_type_defn.m"
    {
#line 96 "prog_io_type_defn.m"
      MR_String parse_tree__prog_io_type_defn__Name_15;
#line 96 "prog_io_type_defn.m"
      MR_Word parse_tree__prog_io_type_defn__HeadTerm_18;
#line 76 "prog_io_type_defn.m"
      MR_Word parse_tree__prog_io_type_defn__ArgTerms_16;
#line 76 "prog_io_type_defn.m"
      MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 76 "prog_io_type_defn.m"
      MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 76 "prog_io_type_defn.m"
      MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 76 "prog_io_type_defn.m"
      MR_Word parse_tree__prog_io_type_defn__V_17_17;

#line 76 "prog_io_type_defn.m"
      (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__TypeDefnTerm_10)) == (MR_mktag((MR_Integer) 0)));
#line 76 "prog_io_type_defn.m"
      if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded)
#line 76 "prog_io_type_defn.m"
        {
#line 76 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__TypeDefnTerm_10, (MR_Integer) 0)));
#line 76 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__ArgTerms_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__TypeDefnTerm_10, (MR_Integer) 1)));
#line 76 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__TypeDefnTerm_10, (MR_Integer) 2)));
#line 76 "prog_io_type_defn.m"
          (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 0)));
#line 76 "prog_io_type_defn.m"
          if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded)
#line 76 "prog_io_type_defn.m"
            {
#line 76 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Name_15 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
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
                      parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__ArgTerms_16, (MR_Integer) 1)));
#line 77 "prog_io_type_defn.m"
                      (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 77 "prog_io_type_defn.m"
                      if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded)
#line 77 "prog_io_type_defn.m"
                        {
#line 77 "prog_io_type_defn.m"
                          (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__BodyTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 77 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 77 "prog_io_type_defn.m"
                          (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
#line 96 "prog_io_type_defn.m"
      if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded)
#line 87 "prog_io_type_defn.m"
        if ((strcmp(parse_tree__prog_io_type_defn__Name_15, (MR_String) "==") == 0))
#line 537 "prog_io_type_defn.m"
          {
#line 537 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__MaybeNameAndParams_31;

#line 538 "prog_io_type_defn.m"
            {
#line 538 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__HeadTerm_18, &parse_tree__prog_io_type_defn__MaybeNameAndParams_31);
            }
#line 543 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeNameAndParams_31)) == (MR_mktag((MR_Integer) 0))))
#line 541 "prog_io_type_defn.m"
              {
#line 541 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Specs_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeNameAndParams_31, (MR_Integer) 0)));

#line 542 "prog_io_type_defn.m"
                {
#line 542 "prog_io_type_defn.m"
                  MR_Word base;
#line 542 "prog_io_type_defn.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 542 "prog_io_type_defn.m"
                  *parse_tree__prog_io_type_defn__MaybeItem_14 = base;
#line 542 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_32));
#line 542 "prog_io_type_defn.m"
                }
#line 541 "prog_io_type_defn.m"
              }
#line 543 "prog_io_type_defn.m"
            else
#line 544 "prog_io_type_defn.m"
              {
#line 544 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Name_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameAndParams_31, (MR_Integer) 0)));

#line 544 "prog_io_type_defn.m"
                (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__Params_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameAndParams_31, (MR_Integer) 1)));
#line 547 "prog_io_type_defn.m"
                {
#line 547 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_3(&parse_tree__prog_io_type_defn__env);
                }
#line 558 "prog_io_type_defn.m"
                if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded)
#line 551 "prog_io_type_defn.m"
                  {
#line 551 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_66_80 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 551 "prog_io_type_defn.m"
                    MR_String parse_tree__prog_io_type_defn__BodyTermStr_37;
#line 551 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Pieces_38;
#line 551 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Spec_39;
#line 551 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_50_50;
#line 551 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_53_53;
#line 551 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_54_54;
#line 551 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_63_63;
#line 551 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_64_64;
#line 551 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_65_65;
#line 551 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_66_66;
#line 551 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_67_67;
#line 551 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_70_70;

#line 551 "prog_io_type_defn.m"
                    {
#line 551 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__BodyTermStr_37 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_66_80, parse_tree__prog_io_type_defn__VarSet_9, (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__BodyTerm_19);
                    }
#line 554 "prog_io_type_defn.m"
                    {
#line 554 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 554 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 554 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__BodyTermStr_37));
#line 554 "prog_io_type_defn.m"
                    }
#line 554 "prog_io_type_defn.m"
                    {
#line 554 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 554 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_54_54));
#line 554 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[21])));
#line 554 "prog_io_type_defn.m"
                    }
#line 553 "prog_io_type_defn.m"
                    {
#line 553 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 553 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_50_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[115])));
#line 553 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_50_50, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_53_53));
#line 553 "prog_io_type_defn.m"
                    }
#line 552 "prog_io_type_defn.m"
                    {
#line 552 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Pieces_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 552 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[114])));
#line 552 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_38, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_50_50));
#line 552 "prog_io_type_defn.m"
                    }
#line 556 "prog_io_type_defn.m"
                    {
#line 556 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_65_65 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_66_80, (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__BodyTerm_19);
                    }
#line 556 "prog_io_type_defn.m"
                    {
#line 556 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 556 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_38));
#line 556 "prog_io_type_defn.m"
                    }
#line 556 "prog_io_type_defn.m"
                    {
#line 556 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 556 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_67_67));
#line 556 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 556 "prog_io_type_defn.m"
                    }
#line 556 "prog_io_type_defn.m"
                    {
#line 556 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 556 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_65_65));
#line 556 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_64_64, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_66_66));
#line 556 "prog_io_type_defn.m"
                    }
#line 556 "prog_io_type_defn.m"
                    {
#line 556 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 556 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_64_64));
#line 556 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 556 "prog_io_type_defn.m"
                    }
#line 555 "prog_io_type_defn.m"
                    {
#line 555 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Spec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 555 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 555 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 555 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_39, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_63_63));
#line 555 "prog_io_type_defn.m"
                    }
#line 557 "prog_io_type_defn.m"
                    {
#line 557 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_39));
#line 557 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 557 "prog_io_type_defn.m"
                    }
#line 557 "prog_io_type_defn.m"
                    {
#line 557 "prog_io_type_defn.m"
                      MR_Word base;
#line 557 "prog_io_type_defn.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 557 "prog_io_type_defn.m"
                      *parse_tree__prog_io_type_defn__MaybeItem_14 = base;
#line 557 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_70_70));
#line 557 "prog_io_type_defn.m"
                    }
#line 551 "prog_io_type_defn.m"
                  }
#line 558 "prog_io_type_defn.m"
                else
#line 560 "prog_io_type_defn.m"
                  {
#line 560 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__MaybeType_41;

#line 561 "prog_io_type_defn.m"
                    {
#line 561 "prog_io_type_defn.m"
                      parse_tree__prog_io_util__parse_type_4_p_0((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__BodyTerm_19, parse_tree__prog_io_type_defn__VarSet_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_type_defn__MaybeType_41);
                    }
#line 571 "prog_io_type_defn.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeType_41)) == (MR_mktag((MR_Integer) 0))))
#line 573 "prog_io_type_defn.m"
                      *parse_tree__prog_io_type_defn__MaybeItem_14 = (MR_Word) parse_tree__prog_io_type_defn__MaybeType_41;
#line 571 "prog_io_type_defn.m"
                    else
#line 563 "prog_io_type_defn.m"
                      {
#line 563 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__Type_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeType_41, (MR_Integer) 0)));
#line 563 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__TypeVarSet_43;
#line 563 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__TypeDefn_44;
#line 563 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__ItemTypeDefn_45;
#line 563 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__Item_46;
#line 563 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__MaybeItem0_47;

#line 564 "prog_io_type_defn.m"
                        {
#line 564 "prog_io_type_defn.m"
                          mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_9, &parse_tree__prog_io_type_defn__TypeVarSet_43);
                        }
#line 565 "prog_io_type_defn.m"
                        {
#line 565 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__TypeDefn_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 565 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__TypeDefn_44, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Type_42));
#line 565 "prog_io_type_defn.m"
                        }
#line 566 "prog_io_type_defn.m"
                        {
#line 566 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__ItemTypeDefn_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 566 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_45, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeVarSet_43));
#line 566 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_45, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_33));
#line 566 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_45, 2) = ((MR_Box) ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__Params_34));
#line 566 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_45, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn_44));
#line 566 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_45, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_12));
#line 566 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_45, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__SeqNum_13));
#line 566 "prog_io_type_defn.m"
                        }
#line 568 "prog_io_type_defn.m"
                        {
#line 568 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__Item_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 568 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__Item_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 568 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__Item_46, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__ItemTypeDefn_45));
#line 568 "prog_io_type_defn.m"
                        }
#line 569 "prog_io_type_defn.m"
                        {
#line 569 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__MaybeItem0_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 569 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItem0_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Item_46));
#line 569 "prog_io_type_defn.m"
                        }
#line 570 "prog_io_type_defn.m"
                        {
#line 570 "prog_io_type_defn.m"
                          parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_type_defn__MaybeItem0_47, parse_tree__prog_io_type_defn__Attributes_11, parse_tree__prog_io_type_defn__MaybeItem_14);
#line 570 "prog_io_type_defn.m"
                          return;
                        }
#line 563 "prog_io_type_defn.m"
                      }
#line 560 "prog_io_type_defn.m"
                  }
#line 544 "prog_io_type_defn.m"
              }
#line 537 "prog_io_type_defn.m"
          }
#line 87 "prog_io_type_defn.m"
        else
#line 87 "prog_io_type_defn.m"
          if ((strcmp(parse_tree__prog_io_type_defn__Name_15, (MR_String) "--->") == 0))
#line 85 "prog_io_type_defn.m"
            {
#line 85 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__parse_du_type_defn_8_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__HeadTerm_18, (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__BodyTerm_19, parse_tree__prog_io_type_defn__Attributes_11, parse_tree__prog_io_type_defn__Context_12, parse_tree__prog_io_type_defn__SeqNum_13, parse_tree__prog_io_type_defn__MaybeItem_14);
#line 85 "prog_io_type_defn.m"
              return;
            }
#line 87 "prog_io_type_defn.m"
          else
#line 93 "prog_io_type_defn.m"
            {
#line 93 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__parse_where_block_type_defn_8_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__HeadTerm_18, (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__BodyTerm_19, parse_tree__prog_io_type_defn__Attributes_11, parse_tree__prog_io_type_defn__Context_12, parse_tree__prog_io_type_defn__SeqNum_13, parse_tree__prog_io_type_defn__MaybeItem_14);
#line 93 "prog_io_type_defn.m"
              return;
            }
#line 96 "prog_io_type_defn.m"
      else
#line 97 "prog_io_type_defn.m"
        {
#line 97 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_abstract_type_defn_7_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__TypeDefnTerm_10, parse_tree__prog_io_type_defn__Attributes_11, parse_tree__prog_io_type_defn__Context_12, parse_tree__prog_io_type_defn__SeqNum_13, parse_tree__prog_io_type_defn__MaybeItem_14);
#line 97 "prog_io_type_defn.m"
          return;
        }
#line 96 "prog_io_type_defn.m"
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
