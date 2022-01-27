/*
** Automatically generated from `prog_io_type_defn.m'
** by the Mercury compiler,
** version rotd-2015-07-01
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
#include "integer.mih"
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



#line 663 "prog_io_type_defn.m"
struct parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0_s {
#line 671 "prog_io_type_defn.m"
  MR_bool parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__succeeded;
#line 671 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__SolverTypeDetails_19;
#line 677 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__Params_23;
#line 679 "prog_io_type_defn.m"
  jmp_buf parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__commit_0;
#line 679 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__Var_25;
#line 663 "prog_io_type_defn.m"
};

#line 38 "prog_io_type_defn.m"
struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s {
#line 1264 "prog_io_type_defn.m"
  MR_bool parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded;
#line 1295 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__Params0_21;
#line 1283 "prog_io_type_defn.m"
  jmp_buf parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__commit_0;
#line 1283 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__TypeInfo_100_100;
#line 1283 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__Param_23;
#line 1283 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__OtherParams_24;
#line 1283 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__V_30_30;
#line 1283 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__V_22_22;
#line 1283 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__conv0_V_22_22;
#line 38 "prog_io_type_defn.m"
};

#line 31 "prog_io_type_defn.m"
struct parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0_s {
#line 96 "prog_io_type_defn.m"
  MR_bool parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded;
#line 96 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__BodyTerm_19;
#line 543 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__Params_34;
#line 546 "prog_io_type_defn.m"
  jmp_buf parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__commit_0;
#line 546 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TypeCtorInfo_63_77;
#line 546 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TypeCtorInfo_64_78;
#line 546 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__Var_35;
#line 546 "prog_io_type_defn.m"
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

#line 883 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_49_44_32_52_93_95_48_3_f_0(
#line 883 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 883 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 883 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 883 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 883 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 883 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 883 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_57_95_95_91_51_93_95_48_3_f_0(
#line 883 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 883 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 883 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 883 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(
#line 883 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 883 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 883 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 883 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 819 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_57_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(
#line 819 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 819 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 819 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_54,
#line 819 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_98);

#line 810 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_48_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(
#line 810 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 810 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_42,
#line 810 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_82);

#line 807 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_48_55_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 807 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_38,
#line 807 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_77);

#line 804 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_48_52_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 804 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_34,
#line 804 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_71);

#line 816 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_54_95_95_49_95_95_104_111_49_51_95_95_91_52_93_95_48_3_f_0(
#line 816 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 816 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 816 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_50,
#line 816 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_93);

#line 813 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_51_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(
#line 813 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 813 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 813 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_46,
#line 813 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_88);

#line 798 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_55_57_56_95_95_49_95_95_104_111_49_49_95_95_91_49_44_32_52_93_95_48_3_f_0(
#line 798 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 798 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_28,
#line 798 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_62);

#line 849 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0(
#line 849 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 849 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_56_95_95_91_51_93_95_48_4_p_0(
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_26_26,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_27_27,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 849 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 849 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 849 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_54_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 849 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 849 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0(
#line 849 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 849 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0(
#line 849 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 849 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_52_93_95_48_4_p_0(
#line 849 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 849 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 849 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 883 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(
#line 883 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 883 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 883 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 883 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 1110 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_109_97_121_98_101_95_119_104_101_114_101_95_100_101_116_97_105_108_115_95_50_95_95_91_49_49_93_95_48_12_f_0(
#line 1110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_14,
#line 1110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_15,
#line 1110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__RepresentationIs_16,
#line 1110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__InitialisationIs_17,
#line 1110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__GroundIs_18,
#line 1110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__AnyIs_19,
#line 1110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__CStoreIs_20,
#line 1110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__EqualityIs_21,
#line 1110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ComparisonIs_22,
#line 1110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__DirectArgIs_23,
#line 1110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__WhereTerm_25);

#line 960 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_2_f_0(
#line 960 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5);

#line 849 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_attribute__ho10_4_p_0(
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 453 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__453__1_2_p_0(
#line 453 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ExistQVars_19,
#line 453 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_288);

#line 425 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__425__1_2_p_0(
#line 425 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_129,
#line 425 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_276);

#line 421 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__421__1_1_f_0(
#line 421 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_126);

#line 405 "prog_io_type_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__405__1_3_f_0(
#line 405 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_89,
#line 405 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__GenericVarSet_217,
#line 405 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_269);

#line 376 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__376__1_2_p_0(
#line 376 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_61,
#line 376 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_258);

#line 373 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__373__1_1_f_0(
#line 373 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_58);

#line 221 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_constructor__221__1_2_p_0(
#line 221 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_46,
#line 221 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_47);

#line 1292 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_type_defn_head__1292__1_2_p_0(
#line 1292 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_101,
#line 1292 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_102);

#line 1244 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__maybe_unify_compare_2_f_0(
#line 1244 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeEqPred_4,
#line 1244 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCmpPred_5);

#line 1064 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__make_maybe_where_details_12_f_0(
#line 1064 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_14,
#line 1064 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_15,
#line 1064 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeRepresentationIs_16,
#line 1064 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeInitialisationIs_17,
#line 1064 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeGroundIs_18,
#line 1064 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeAnyIs_19,
#line 1064 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCStoreIs_20,
#line 1064 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeEqualityIs_21,
#line 1064 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeComparisonIs_22,
#line 1064 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgIs_23,
#line 1064 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeWhereEnd_24,
#line 1064 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__WhereTerm_25);

#line 1055 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_end_2_p_0(
#line 1055 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 1055 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_2);

#line 1039 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_direct_arg_functor_4_p_0(
#line 1039 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 1039 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 1039 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7,
#line 1039 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeFunctor_8);

#line 1028 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0_1(
#line 1028 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1028 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1028 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2);

#line 1023 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0(
#line 1023 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 1023 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 1023 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 1005 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_mutable_decl_term_3_p_0(
#line 1005 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_4,
#line 1005 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5,
#line 1005 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeMutableInfo_6);

#line 996 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0_1(
#line 996 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 996 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 996 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2);

#line 982 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0(
#line 982 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_4,
#line 982 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5);

#line 916 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_initialisation_is_3_f_0(
#line 916 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 916 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 916 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 907 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(
#line 907 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_3);

#line 783 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_type_decl_where_term_4_f_0(
#line 783 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_6,
#line 783 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_7,
#line 783 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_8,
#line 783 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm0_9);

#line 715 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_abstract_type_defn_7_p_0(
#line 715 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_8,
#line 715 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_9,
#line 715 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_10,
#line 715 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes0_11,
#line 715 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_12,
#line 715 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_13,
#line 715 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_14);

#line 679 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_1(
#line 679 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 679 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_2(
#line 679 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 679 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_3(
#line 679 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 663 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0(
#line 663 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_10,
#line 663 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_11,
#line 663 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_12,
#line 663 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_13,
#line 663 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeUserEqComp_14,
#line 663 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes_15,
#line 663 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_16,
#line 663 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_17,
#line 663 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_18);

#line 621 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_type_is_abstract_enum_7_p_0(
#line 621 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_8,
#line 621 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_9,
#line 621 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_10,
#line 621 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_11,
#line 621 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_12,
#line 621 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_13,
#line 621 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_14);

#line 582 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_block_type_defn_8_p_0(
#line 582 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_9,
#line 582 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_10,
#line 582 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_11,
#line 582 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_12,
#line 582 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes0_13,
#line 582 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_14,
#line 582 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_15,
#line 582 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_16);

#line 518 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__find_constructor_4_p_0(
#line 518 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 518 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__SymName_7,
#line 518 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__Arity_8,
#line 518 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Ctor_9);

#line 478 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__check_direct_arg_ctors_5_p_0(
#line 478 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 478 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_2,
#line 478 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3,
#line 478 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4,
#line 478 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_5);

#line 453 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_7(
#line 453 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 453 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 449 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_6(
#line 449 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 449 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 425 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_5(
#line 425 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 425 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 421 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_4(
#line 421 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 421 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 405 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_3(
#line 405 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 405 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 376 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_2(
#line 376 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 376 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 373 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_1(
#line 373 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 373 "prog_io_type_defn.m"
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

#line 1292 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_5(
#line 1292 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1292 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1292 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2);

#line 1283 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_1(
#line 1283 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 1283 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_3(
#line 1283 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 1283 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_2(
#line 1283 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 1283 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_4(
#line 1283 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 546 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_1(
#line 546 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 546 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_2(
#line 546 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 546 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_3(
#line 546 "prog_io_type_defn.m"
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

#line 883 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_49_44_32_52_93_95_48_3_f_0(
#line 883 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 883 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 883 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 883 "prog_io_type_defn.m"
{
#line 900 "prog_io_type_defn.m"
  {
#line 900 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 900 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 900 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LHS_9;
#line 900 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RHS_10;
#line 887 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 887 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_19_19;
#line 887 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 887 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 887 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 887 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 887 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 887 "prog_io_type_defn.m"
      {
#line 887 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 887 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 887 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 887 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 887 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 887 "prog_io_type_defn.m"
          {
#line 887 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 887 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_19_19, (MR_String) "is") == 0);
#line 887 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 887 "prog_io_type_defn.m"
              {
#line 887 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 887 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 887 "prog_io_type_defn.m"
                  {
#line 887 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 887 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 887 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 887 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 887 "prog_io_type_defn.m"
                      {
#line 887 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 887 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 887 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 887 "prog_io_type_defn.m"
                      }
#line 887 "prog_io_type_defn.m"
                  }
#line 887 "prog_io_type_defn.m"
              }
#line 887 "prog_io_type_defn.m"
          }
#line 887 "prog_io_type_defn.m"
      }
#line 900 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 897 "prog_io_type_defn.m"
      {
#line 888 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 888 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 888 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 888 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 888 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
          {
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 1)));
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 2)));
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 888 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
              {
#line 888 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
                  {
#line 888 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__Name_5, parse_tree__prog_io_type_defn__V_51_51) == 0);
#line 888 "prog_io_type_defn.m"
                  }
#line 888 "prog_io_type_defn.m"
              }
#line 888 "prog_io_type_defn.m"
          }
#line 897 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 889 "prog_io_type_defn.m"
          {
#line 889 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__RHSResult_13;

#line 980 "prog_io_type_defn.m"
            {
#line 980 "prog_io_type_defn.m"
              parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_type_defn__RHS_10, parse_tree__prog_io_type_defn__V_53_53, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_type_defn__RHSResult_13);
            }
#line 893 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
#line 895 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = (MR_Word) parse_tree__prog_io_type_defn__RHSResult_13;
#line 893 "prog_io_type_defn.m"
            else
#line 891 "prog_io_type_defn.m"
              {
#line 891 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RHSResult_13, (MR_Integer) 0)));
#line 891 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 892 "prog_io_type_defn.m"
                {
#line 892 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 892 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ParsedRHS_14));
#line 892 "prog_io_type_defn.m"
                }
#line 892 "prog_io_type_defn.m"
                {
#line 892 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 892 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 892 "prog_io_type_defn.m"
                }
#line 891 "prog_io_type_defn.m"
              }
#line 889 "prog_io_type_defn.m"
          }
#line 897 "prog_io_type_defn.m"
        else
#line 898 "prog_io_type_defn.m"
          {
#line 898 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[39]);
#line 898 "prog_io_type_defn.m"
          }
#line 897 "prog_io_type_defn.m"
      }
#line 900 "prog_io_type_defn.m"
    else
#line 901 "prog_io_type_defn.m"
      {
#line 901 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 901 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 901 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 901 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 901 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 903 "prog_io_type_defn.m"
        {
#line 903 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 903 "prog_io_type_defn.m"
        {
#line 903 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[155])));
#line 903 "prog_io_type_defn.m"
        }
#line 903 "prog_io_type_defn.m"
        {
#line 903 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 903 "prog_io_type_defn.m"
        }
#line 902 "prog_io_type_defn.m"
        {
#line 902 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 902 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 902 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 902 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 902 "prog_io_type_defn.m"
        }
#line 904 "prog_io_type_defn.m"
        {
#line 904 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 904 "prog_io_type_defn.m"
        }
#line 904 "prog_io_type_defn.m"
        {
#line 904 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 904 "prog_io_type_defn.m"
        }
#line 901 "prog_io_type_defn.m"
      }
#line 900 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 900 "prog_io_type_defn.m"
  }
#line 883 "prog_io_type_defn.m"
}

#line 883 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 883 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 883 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 883 "prog_io_type_defn.m"
{
#line 900 "prog_io_type_defn.m"
  {
#line 900 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 900 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 900 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LHS_9;
#line 900 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RHS_10;
#line 887 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 887 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_19_19;
#line 887 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 887 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 887 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 887 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 887 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 887 "prog_io_type_defn.m"
      {
#line 887 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 887 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 887 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 887 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 887 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 887 "prog_io_type_defn.m"
          {
#line 887 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 887 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_19_19, (MR_String) "is") == 0);
#line 887 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 887 "prog_io_type_defn.m"
              {
#line 887 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 887 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 887 "prog_io_type_defn.m"
                  {
#line 887 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 887 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 887 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 887 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 887 "prog_io_type_defn.m"
                      {
#line 887 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 887 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 887 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 887 "prog_io_type_defn.m"
                      }
#line 887 "prog_io_type_defn.m"
                  }
#line 887 "prog_io_type_defn.m"
              }
#line 887 "prog_io_type_defn.m"
          }
#line 887 "prog_io_type_defn.m"
      }
#line 900 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 897 "prog_io_type_defn.m"
      {
#line 888 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 888 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 888 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 888 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 888 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
          {
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 1)));
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 2)));
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 888 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
              {
#line 888 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
                  {
#line 888 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__Name_5, parse_tree__prog_io_type_defn__V_51_51) == 0);
#line 888 "prog_io_type_defn.m"
                  }
#line 888 "prog_io_type_defn.m"
              }
#line 888 "prog_io_type_defn.m"
          }
#line 897 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 889 "prog_io_type_defn.m"
          {
#line 889 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__RHSResult_13;

#line 889 "prog_io_type_defn.m"
            {
#line 889 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__RHSResult_13 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_2_f_0(parse_tree__prog_io_type_defn__RHS_10);
            }
#line 893 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
#line 895 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = (MR_Word) parse_tree__prog_io_type_defn__RHSResult_13;
#line 893 "prog_io_type_defn.m"
            else
#line 891 "prog_io_type_defn.m"
              {
#line 891 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RHSResult_13, (MR_Integer) 0)));
#line 891 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 892 "prog_io_type_defn.m"
                {
#line 892 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 892 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ParsedRHS_14));
#line 892 "prog_io_type_defn.m"
                }
#line 892 "prog_io_type_defn.m"
                {
#line 892 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 892 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 892 "prog_io_type_defn.m"
                }
#line 891 "prog_io_type_defn.m"
              }
#line 889 "prog_io_type_defn.m"
          }
#line 897 "prog_io_type_defn.m"
        else
#line 898 "prog_io_type_defn.m"
          {
#line 898 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[38]);
#line 898 "prog_io_type_defn.m"
          }
#line 897 "prog_io_type_defn.m"
      }
#line 900 "prog_io_type_defn.m"
    else
#line 901 "prog_io_type_defn.m"
      {
#line 901 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 901 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 901 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 901 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 901 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 903 "prog_io_type_defn.m"
        {
#line 903 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 903 "prog_io_type_defn.m"
        {
#line 903 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[155])));
#line 903 "prog_io_type_defn.m"
        }
#line 903 "prog_io_type_defn.m"
        {
#line 903 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 903 "prog_io_type_defn.m"
        }
#line 902 "prog_io_type_defn.m"
        {
#line 902 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 902 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 902 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 902 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 902 "prog_io_type_defn.m"
        }
#line 904 "prog_io_type_defn.m"
        {
#line 904 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 904 "prog_io_type_defn.m"
        }
#line 904 "prog_io_type_defn.m"
        {
#line 904 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 904 "prog_io_type_defn.m"
        }
#line 901 "prog_io_type_defn.m"
      }
#line 900 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 900 "prog_io_type_defn.m"
  }
#line 883 "prog_io_type_defn.m"
}

#line 883 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_57_95_95_91_51_93_95_48_3_f_0(
#line 883 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 883 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 883 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 883 "prog_io_type_defn.m"
{
#line 900 "prog_io_type_defn.m"
  {
#line 900 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 900 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 900 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LHS_9;
#line 900 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RHS_10;
#line 887 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 887 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_19_19;
#line 887 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 887 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 887 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 887 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 887 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 887 "prog_io_type_defn.m"
      {
#line 887 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 887 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 887 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 887 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 887 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 887 "prog_io_type_defn.m"
          {
#line 887 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 887 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_19_19, (MR_String) "is") == 0);
#line 887 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 887 "prog_io_type_defn.m"
              {
#line 887 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 887 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 887 "prog_io_type_defn.m"
                  {
#line 887 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 887 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 887 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 887 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 887 "prog_io_type_defn.m"
                      {
#line 887 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 887 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 887 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 887 "prog_io_type_defn.m"
                      }
#line 887 "prog_io_type_defn.m"
                  }
#line 887 "prog_io_type_defn.m"
              }
#line 887 "prog_io_type_defn.m"
          }
#line 887 "prog_io_type_defn.m"
      }
#line 900 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 897 "prog_io_type_defn.m"
      {
#line 888 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 888 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 888 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 888 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 888 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
          {
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 1)));
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 2)));
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 888 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
              {
#line 888 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
                  {
#line 888 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__Name_5, parse_tree__prog_io_type_defn__V_51_51) == 0);
#line 888 "prog_io_type_defn.m"
                  }
#line 888 "prog_io_type_defn.m"
              }
#line 888 "prog_io_type_defn.m"
          }
#line 897 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 889 "prog_io_type_defn.m"
          {
#line 889 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__RHSResult_13;

#line 889 "prog_io_type_defn.m"
            {
#line 889 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__RHSResult_13 = parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0(parse_tree__prog_io_type_defn__V_52_52, parse_tree__prog_io_type_defn__RHS_10);
            }
#line 893 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
#line 895 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = (MR_Word) parse_tree__prog_io_type_defn__RHSResult_13;
#line 893 "prog_io_type_defn.m"
            else
#line 891 "prog_io_type_defn.m"
              {
#line 891 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RHSResult_13, (MR_Integer) 0)));
#line 891 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 892 "prog_io_type_defn.m"
                {
#line 892 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 892 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ParsedRHS_14));
#line 892 "prog_io_type_defn.m"
                }
#line 892 "prog_io_type_defn.m"
                {
#line 892 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 892 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 892 "prog_io_type_defn.m"
                }
#line 891 "prog_io_type_defn.m"
              }
#line 889 "prog_io_type_defn.m"
          }
#line 897 "prog_io_type_defn.m"
        else
#line 898 "prog_io_type_defn.m"
          {
#line 898 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[37]);
#line 898 "prog_io_type_defn.m"
          }
#line 897 "prog_io_type_defn.m"
      }
#line 900 "prog_io_type_defn.m"
    else
#line 901 "prog_io_type_defn.m"
      {
#line 901 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 901 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 901 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 901 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 901 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 903 "prog_io_type_defn.m"
        {
#line 903 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 903 "prog_io_type_defn.m"
        {
#line 903 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[155])));
#line 903 "prog_io_type_defn.m"
        }
#line 903 "prog_io_type_defn.m"
        {
#line 903 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 903 "prog_io_type_defn.m"
        }
#line 902 "prog_io_type_defn.m"
        {
#line 902 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 902 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 902 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 902 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 902 "prog_io_type_defn.m"
        }
#line 904 "prog_io_type_defn.m"
        {
#line 904 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 904 "prog_io_type_defn.m"
        }
#line 904 "prog_io_type_defn.m"
        {
#line 904 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 904 "prog_io_type_defn.m"
        }
#line 901 "prog_io_type_defn.m"
      }
#line 900 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 900 "prog_io_type_defn.m"
  }
#line 883 "prog_io_type_defn.m"
}

#line 883 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(
#line 883 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 883 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 883 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 883 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 883 "prog_io_type_defn.m"
{
#line 900 "prog_io_type_defn.m"
  {
#line 900 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 900 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 900 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LHS_9;
#line 900 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RHS_10;
#line 887 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 887 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_19_19;
#line 887 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 887 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 887 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 887 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 887 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 887 "prog_io_type_defn.m"
      {
#line 887 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 887 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 887 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 887 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 887 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 887 "prog_io_type_defn.m"
          {
#line 887 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 887 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_19_19, (MR_String) "is") == 0);
#line 887 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 887 "prog_io_type_defn.m"
              {
#line 887 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 887 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 887 "prog_io_type_defn.m"
                  {
#line 887 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 887 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 887 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 887 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 887 "prog_io_type_defn.m"
                      {
#line 887 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 887 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 887 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 887 "prog_io_type_defn.m"
                      }
#line 887 "prog_io_type_defn.m"
                  }
#line 887 "prog_io_type_defn.m"
              }
#line 887 "prog_io_type_defn.m"
          }
#line 887 "prog_io_type_defn.m"
      }
#line 900 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 897 "prog_io_type_defn.m"
      {
#line 888 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 888 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 888 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 888 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 888 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
          {
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 1)));
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 2)));
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 888 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
              {
#line 888 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
                  {
#line 888 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__Name_5, parse_tree__prog_io_type_defn__V_51_51) == 0);
#line 888 "prog_io_type_defn.m"
                  }
#line 888 "prog_io_type_defn.m"
              }
#line 888 "prog_io_type_defn.m"
          }
#line 897 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 889 "prog_io_type_defn.m"
          {
#line 889 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__RHSResult_13;

#line 889 "prog_io_type_defn.m"
            {
#line 889 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__RHSResult_13 = parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0(parse_tree__prog_io_type_defn__V_52_52, parse_tree__prog_io_type_defn__V_53_53, parse_tree__prog_io_type_defn__RHS_10);
            }
#line 893 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
#line 895 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = (MR_Word) parse_tree__prog_io_type_defn__RHSResult_13;
#line 893 "prog_io_type_defn.m"
            else
#line 891 "prog_io_type_defn.m"
              {
#line 891 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RHSResult_13, (MR_Integer) 0)));
#line 891 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 892 "prog_io_type_defn.m"
                {
#line 892 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 892 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ParsedRHS_14));
#line 892 "prog_io_type_defn.m"
                }
#line 892 "prog_io_type_defn.m"
                {
#line 892 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 892 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 892 "prog_io_type_defn.m"
                }
#line 891 "prog_io_type_defn.m"
              }
#line 889 "prog_io_type_defn.m"
          }
#line 897 "prog_io_type_defn.m"
        else
#line 898 "prog_io_type_defn.m"
          {
#line 898 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[36]);
#line 898 "prog_io_type_defn.m"
          }
#line 897 "prog_io_type_defn.m"
      }
#line 900 "prog_io_type_defn.m"
    else
#line 901 "prog_io_type_defn.m"
      {
#line 901 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 901 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 901 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 901 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 901 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 903 "prog_io_type_defn.m"
        {
#line 903 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 903 "prog_io_type_defn.m"
        {
#line 903 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[155])));
#line 903 "prog_io_type_defn.m"
        }
#line 903 "prog_io_type_defn.m"
        {
#line 903 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 903 "prog_io_type_defn.m"
        }
#line 902 "prog_io_type_defn.m"
        {
#line 902 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 902 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 902 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 902 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 902 "prog_io_type_defn.m"
        }
#line 904 "prog_io_type_defn.m"
        {
#line 904 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 904 "prog_io_type_defn.m"
        }
#line 904 "prog_io_type_defn.m"
        {
#line 904 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 904 "prog_io_type_defn.m"
        }
#line 901 "prog_io_type_defn.m"
      }
#line 900 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 900 "prog_io_type_defn.m"
  }
#line 883 "prog_io_type_defn.m"
}

#line 819 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_57_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(
#line 819 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 819 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 819 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_54,
#line 819 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_98)
#line 819 "prog_io_type_defn.m"
{
#line 819 "prog_io_type_defn.m"
  {
#line 819 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 819 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_99;

#line 819 "prog_io_type_defn.m"
    {
#line 819 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__4_99 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_104_104, parse_tree__prog_io_type_defn__V_105_105, parse_tree__prog_io_type_defn__HeadVar__1_54, parse_tree__prog_io_type_defn__HeadVar__3_98);
    }
#line 819 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_99;
#line 819 "prog_io_type_defn.m"
  }
#line 819 "prog_io_type_defn.m"
}

#line 810 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_48_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(
#line 810 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 810 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_42,
#line 810 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_82)
#line 810 "prog_io_type_defn.m"
{
#line 810 "prog_io_type_defn.m"
  {
#line 810 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 810 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_83;

#line 810 "prog_io_type_defn.m"
    {
#line 810 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__4_83 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_57_95_95_91_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_104_104, parse_tree__prog_io_type_defn__HeadVar__1_42, parse_tree__prog_io_type_defn__HeadVar__3_82);
    }
#line 810 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_83;
#line 810 "prog_io_type_defn.m"
  }
#line 810 "prog_io_type_defn.m"
}

#line 807 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_48_55_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 807 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_38,
#line 807 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_77)
#line 807 "prog_io_type_defn.m"
{
#line 807 "prog_io_type_defn.m"
  {
#line 807 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 807 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_78;

#line 807 "prog_io_type_defn.m"
    {
#line 807 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__4_78 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__HeadVar__1_38, parse_tree__prog_io_type_defn__HeadVar__3_77);
    }
#line 807 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_78;
#line 807 "prog_io_type_defn.m"
  }
#line 807 "prog_io_type_defn.m"
}

#line 804 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_48_52_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 804 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_34,
#line 804 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_71)
#line 804 "prog_io_type_defn.m"
{
#line 804 "prog_io_type_defn.m"
  {
#line 804 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 804 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_72;

#line 804 "prog_io_type_defn.m"
    {
#line 804 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__4_72 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__HeadVar__1_34, parse_tree__prog_io_type_defn__HeadVar__3_71);
    }
#line 804 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_72;
#line 804 "prog_io_type_defn.m"
  }
#line 804 "prog_io_type_defn.m"
}

#line 816 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_54_95_95_49_95_95_104_111_49_51_95_95_91_52_93_95_48_3_f_0(
#line 816 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 816 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 816 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_50,
#line 816 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_93)
#line 816 "prog_io_type_defn.m"
{
#line 816 "prog_io_type_defn.m"
  {
#line 816 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 816 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_94;

#line 816 "prog_io_type_defn.m"
    {
#line 816 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__4_94 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_104_104, parse_tree__prog_io_type_defn__V_105_105, parse_tree__prog_io_type_defn__HeadVar__1_50, parse_tree__prog_io_type_defn__HeadVar__3_93);
    }
#line 816 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_94;
#line 816 "prog_io_type_defn.m"
  }
#line 816 "prog_io_type_defn.m"
}

#line 813 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_51_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(
#line 813 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 813 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 813 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_46,
#line 813 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_88)
#line 813 "prog_io_type_defn.m"
{
#line 813 "prog_io_type_defn.m"
  {
#line 813 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 813 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_89;

#line 813 "prog_io_type_defn.m"
    {
#line 813 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__4_89 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_104_104, parse_tree__prog_io_type_defn__V_105_105, parse_tree__prog_io_type_defn__HeadVar__1_46, parse_tree__prog_io_type_defn__HeadVar__3_88);
    }
#line 813 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_89;
#line 813 "prog_io_type_defn.m"
  }
#line 813 "prog_io_type_defn.m"
}

#line 798 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_55_57_56_95_95_49_95_95_104_111_49_49_95_95_91_49_44_32_52_93_95_48_3_f_0(
#line 798 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 798 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_28,
#line 798 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_62)
#line 798 "prog_io_type_defn.m"
{
#line 798 "prog_io_type_defn.m"
  {
#line 798 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 798 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_63;

#line 798 "prog_io_type_defn.m"
    {
#line 798 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__4_63 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_49_44_32_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_105_105, parse_tree__prog_io_type_defn__HeadVar__1_28, parse_tree__prog_io_type_defn__HeadVar__3_62);
    }
#line 798 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_63;
#line 798 "prog_io_type_defn.m"
  }
#line 798 "prog_io_type_defn.m"
}

#line 849 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0(
#line 849 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 849 "prog_io_type_defn.m"
{
#line 857 "prog_io_type_defn.m"
  {
#line 857 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 857 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 854 "prog_io_type_defn.m"
      {
#line 855 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 856 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[39]);
#line 854 "prog_io_type_defn.m"
      }
#line 857 "prog_io_type_defn.m"
    else
#line 858 "prog_io_type_defn.m"
      {
#line 858 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 858 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 864 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 864 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 860 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 860 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
          {
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
              {
#line 860 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 860 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
                  {
#line 860 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
                      {
#line 860 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
                          {
#line 860 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "prog_io_type_defn.m"
                          }
#line 860 "prog_io_type_defn.m"
                      }
#line 860 "prog_io_type_defn.m"
                  }
#line 860 "prog_io_type_defn.m"
              }
#line 860 "prog_io_type_defn.m"
          }
#line 864 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 862 "prog_io_type_defn.m"
          {
#line 862 "prog_io_type_defn.m"
            {
#line 862 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_55_57_56_95_95_49_95_95_104_111_49_49_95_95_91_49_44_32_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 863 "prog_io_type_defn.m"
            {
#line 863 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 863 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 863 "prog_io_type_defn.m"
            }
#line 862 "prog_io_type_defn.m"
          }
#line 864 "prog_io_type_defn.m"
        else
#line 865 "prog_io_type_defn.m"
          {
#line 865 "prog_io_type_defn.m"
            {
#line 865 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_55_57_56_95_95_49_95_95_104_111_49_49_95_95_91_49_44_32_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 866 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 865 "prog_io_type_defn.m"
          }
#line 871 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 870 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 871 "prog_io_type_defn.m"
        else
#line 871 "prog_io_type_defn.m"
          {
#line 871 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 871 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 873 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 871 "prog_io_type_defn.m"
            else
#line 876 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 871 "prog_io_type_defn.m"
          }
#line 858 "prog_io_type_defn.m"
      }
#line 857 "prog_io_type_defn.m"
  }
#line 849 "prog_io_type_defn.m"
}

#line 849 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_56_95_95_91_51_93_95_48_4_p_0(
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_26_26,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_27_27,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 849 "prog_io_type_defn.m"
{
#line 857 "prog_io_type_defn.m"
  {
#line 857 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 857 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 854 "prog_io_type_defn.m"
      {
#line 855 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 856 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[34]);
#line 854 "prog_io_type_defn.m"
      }
#line 857 "prog_io_type_defn.m"
    else
#line 858 "prog_io_type_defn.m"
      {
#line 858 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 858 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 864 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 864 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 860 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 860 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
          {
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
              {
#line 860 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 860 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
                  {
#line 860 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
                      {
#line 860 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
                          {
#line 860 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "prog_io_type_defn.m"
                          }
#line 860 "prog_io_type_defn.m"
                      }
#line 860 "prog_io_type_defn.m"
                  }
#line 860 "prog_io_type_defn.m"
              }
#line 860 "prog_io_type_defn.m"
          }
#line 864 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 862 "prog_io_type_defn.m"
          {
#line 862 "prog_io_type_defn.m"
            {
#line 862 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__parse_where_initialisation_is_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__V_27_27, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 863 "prog_io_type_defn.m"
            {
#line 863 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 863 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 863 "prog_io_type_defn.m"
            }
#line 862 "prog_io_type_defn.m"
          }
#line 864 "prog_io_type_defn.m"
        else
#line 865 "prog_io_type_defn.m"
          {
#line 865 "prog_io_type_defn.m"
            {
#line 865 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__parse_where_initialisation_is_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__V_27_27, parse_tree__prog_io_type_defn__Term_9);
            }
#line 866 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 865 "prog_io_type_defn.m"
          }
#line 871 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 870 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 871 "prog_io_type_defn.m"
        else
#line 871 "prog_io_type_defn.m"
          {
#line 871 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 871 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 873 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 871 "prog_io_type_defn.m"
            else
#line 876 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 871 "prog_io_type_defn.m"
          }
#line 858 "prog_io_type_defn.m"
      }
#line 857 "prog_io_type_defn.m"
  }
#line 849 "prog_io_type_defn.m"
}

#line 849 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 849 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 849 "prog_io_type_defn.m"
{
#line 857 "prog_io_type_defn.m"
  {
#line 857 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 857 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 854 "prog_io_type_defn.m"
      {
#line 855 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 856 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[34]);
#line 854 "prog_io_type_defn.m"
      }
#line 857 "prog_io_type_defn.m"
    else
#line 858 "prog_io_type_defn.m"
      {
#line 858 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 858 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 864 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 864 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 860 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 860 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
          {
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
              {
#line 860 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 860 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
                  {
#line 860 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
                      {
#line 860 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
                          {
#line 860 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "prog_io_type_defn.m"
                          }
#line 860 "prog_io_type_defn.m"
                      }
#line 860 "prog_io_type_defn.m"
                  }
#line 860 "prog_io_type_defn.m"
              }
#line 860 "prog_io_type_defn.m"
          }
#line 864 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 862 "prog_io_type_defn.m"
          {
#line 862 "prog_io_type_defn.m"
            {
#line 862 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_51_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 863 "prog_io_type_defn.m"
            {
#line 863 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 863 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 863 "prog_io_type_defn.m"
            }
#line 862 "prog_io_type_defn.m"
          }
#line 864 "prog_io_type_defn.m"
        else
#line 865 "prog_io_type_defn.m"
          {
#line 865 "prog_io_type_defn.m"
            {
#line 865 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_51_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 866 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 865 "prog_io_type_defn.m"
          }
#line 871 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 870 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 871 "prog_io_type_defn.m"
        else
#line 871 "prog_io_type_defn.m"
          {
#line 871 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 871 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 873 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 871 "prog_io_type_defn.m"
            else
#line 876 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 871 "prog_io_type_defn.m"
          }
#line 858 "prog_io_type_defn.m"
      }
#line 857 "prog_io_type_defn.m"
  }
#line 849 "prog_io_type_defn.m"
}

#line 849 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_54_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 849 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 849 "prog_io_type_defn.m"
{
#line 857 "prog_io_type_defn.m"
  {
#line 857 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 857 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 854 "prog_io_type_defn.m"
      {
#line 855 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 856 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[34]);
#line 854 "prog_io_type_defn.m"
      }
#line 857 "prog_io_type_defn.m"
    else
#line 858 "prog_io_type_defn.m"
      {
#line 858 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 858 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 864 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 864 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 860 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 860 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
          {
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
              {
#line 860 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 860 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
                  {
#line 860 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
                      {
#line 860 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
                          {
#line 860 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "prog_io_type_defn.m"
                          }
#line 860 "prog_io_type_defn.m"
                      }
#line 860 "prog_io_type_defn.m"
                  }
#line 860 "prog_io_type_defn.m"
              }
#line 860 "prog_io_type_defn.m"
          }
#line 864 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 862 "prog_io_type_defn.m"
          {
#line 862 "prog_io_type_defn.m"
            {
#line 862 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_54_95_95_49_95_95_104_111_49_51_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 863 "prog_io_type_defn.m"
            {
#line 863 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 863 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 863 "prog_io_type_defn.m"
            }
#line 862 "prog_io_type_defn.m"
          }
#line 864 "prog_io_type_defn.m"
        else
#line 865 "prog_io_type_defn.m"
          {
#line 865 "prog_io_type_defn.m"
            {
#line 865 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_54_95_95_49_95_95_104_111_49_51_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 866 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 865 "prog_io_type_defn.m"
          }
#line 871 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 870 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 871 "prog_io_type_defn.m"
        else
#line 871 "prog_io_type_defn.m"
          {
#line 871 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 871 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 873 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 871 "prog_io_type_defn.m"
            else
#line 876 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 871 "prog_io_type_defn.m"
          }
#line 858 "prog_io_type_defn.m"
      }
#line 857 "prog_io_type_defn.m"
  }
#line 849 "prog_io_type_defn.m"
}

#line 849 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0(
#line 849 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 849 "prog_io_type_defn.m"
{
#line 857 "prog_io_type_defn.m"
  {
#line 857 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 857 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 854 "prog_io_type_defn.m"
      {
#line 855 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 856 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[38]);
#line 854 "prog_io_type_defn.m"
      }
#line 857 "prog_io_type_defn.m"
    else
#line 858 "prog_io_type_defn.m"
      {
#line 858 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 858 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 864 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 864 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 860 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 860 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
          {
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
              {
#line 860 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 860 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
                  {
#line 860 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
                      {
#line 860 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
                          {
#line 860 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "prog_io_type_defn.m"
                          }
#line 860 "prog_io_type_defn.m"
                      }
#line 860 "prog_io_type_defn.m"
                  }
#line 860 "prog_io_type_defn.m"
              }
#line 860 "prog_io_type_defn.m"
          }
#line 864 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 862 "prog_io_type_defn.m"
          {
#line 862 "prog_io_type_defn.m"
            {
#line 862 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_48_52_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 863 "prog_io_type_defn.m"
            {
#line 863 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 863 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 863 "prog_io_type_defn.m"
            }
#line 862 "prog_io_type_defn.m"
          }
#line 864 "prog_io_type_defn.m"
        else
#line 865 "prog_io_type_defn.m"
          {
#line 865 "prog_io_type_defn.m"
            {
#line 865 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_48_52_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 866 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 865 "prog_io_type_defn.m"
          }
#line 871 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 870 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 871 "prog_io_type_defn.m"
        else
#line 871 "prog_io_type_defn.m"
          {
#line 871 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 871 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 873 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 871 "prog_io_type_defn.m"
            else
#line 876 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 871 "prog_io_type_defn.m"
          }
#line 858 "prog_io_type_defn.m"
      }
#line 857 "prog_io_type_defn.m"
  }
#line 849 "prog_io_type_defn.m"
}

#line 849 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0(
#line 849 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 849 "prog_io_type_defn.m"
{
#line 857 "prog_io_type_defn.m"
  {
#line 857 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 857 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 854 "prog_io_type_defn.m"
      {
#line 855 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 856 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[38]);
#line 854 "prog_io_type_defn.m"
      }
#line 857 "prog_io_type_defn.m"
    else
#line 858 "prog_io_type_defn.m"
      {
#line 858 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 858 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 864 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 864 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 860 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 860 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
          {
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
              {
#line 860 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 860 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
                  {
#line 860 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
                      {
#line 860 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
                          {
#line 860 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "prog_io_type_defn.m"
                          }
#line 860 "prog_io_type_defn.m"
                      }
#line 860 "prog_io_type_defn.m"
                  }
#line 860 "prog_io_type_defn.m"
              }
#line 860 "prog_io_type_defn.m"
          }
#line 864 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 862 "prog_io_type_defn.m"
          {
#line 862 "prog_io_type_defn.m"
            {
#line 862 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_48_55_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 863 "prog_io_type_defn.m"
            {
#line 863 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 863 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 863 "prog_io_type_defn.m"
            }
#line 862 "prog_io_type_defn.m"
          }
#line 864 "prog_io_type_defn.m"
        else
#line 865 "prog_io_type_defn.m"
          {
#line 865 "prog_io_type_defn.m"
            {
#line 865 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_48_55_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 866 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 865 "prog_io_type_defn.m"
          }
#line 871 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 870 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 871 "prog_io_type_defn.m"
        else
#line 871 "prog_io_type_defn.m"
          {
#line 871 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 871 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 873 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 871 "prog_io_type_defn.m"
            else
#line 876 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 871 "prog_io_type_defn.m"
          }
#line 858 "prog_io_type_defn.m"
      }
#line 857 "prog_io_type_defn.m"
  }
#line 849 "prog_io_type_defn.m"
}

#line 849 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_52_93_95_48_4_p_0(
#line 849 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 849 "prog_io_type_defn.m"
{
#line 857 "prog_io_type_defn.m"
  {
#line 857 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 857 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 854 "prog_io_type_defn.m"
      {
#line 855 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 856 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[37]);
#line 854 "prog_io_type_defn.m"
      }
#line 857 "prog_io_type_defn.m"
    else
#line 858 "prog_io_type_defn.m"
      {
#line 858 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 858 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 864 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 864 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 860 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 860 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
          {
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
              {
#line 860 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 860 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
                  {
#line 860 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
                      {
#line 860 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
                          {
#line 860 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "prog_io_type_defn.m"
                          }
#line 860 "prog_io_type_defn.m"
                      }
#line 860 "prog_io_type_defn.m"
                  }
#line 860 "prog_io_type_defn.m"
              }
#line 860 "prog_io_type_defn.m"
          }
#line 864 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 862 "prog_io_type_defn.m"
          {
#line 862 "prog_io_type_defn.m"
            {
#line 862 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_48_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 863 "prog_io_type_defn.m"
            {
#line 863 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 863 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 863 "prog_io_type_defn.m"
            }
#line 862 "prog_io_type_defn.m"
          }
#line 864 "prog_io_type_defn.m"
        else
#line 865 "prog_io_type_defn.m"
          {
#line 865 "prog_io_type_defn.m"
            {
#line 865 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_48_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 866 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 865 "prog_io_type_defn.m"
          }
#line 871 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 870 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 871 "prog_io_type_defn.m"
        else
#line 871 "prog_io_type_defn.m"
          {
#line 871 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 871 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 873 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 871 "prog_io_type_defn.m"
            else
#line 876 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 871 "prog_io_type_defn.m"
          }
#line 858 "prog_io_type_defn.m"
      }
#line 857 "prog_io_type_defn.m"
  }
#line 849 "prog_io_type_defn.m"
}

#line 849 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 849 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 849 "prog_io_type_defn.m"
{
#line 857 "prog_io_type_defn.m"
  {
#line 857 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 857 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 854 "prog_io_type_defn.m"
      {
#line 855 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 856 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[36]);
#line 854 "prog_io_type_defn.m"
      }
#line 857 "prog_io_type_defn.m"
    else
#line 858 "prog_io_type_defn.m"
      {
#line 858 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 858 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 864 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 864 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 860 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 860 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
          {
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
              {
#line 860 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 860 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
                  {
#line 860 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
                      {
#line 860 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
                          {
#line 860 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "prog_io_type_defn.m"
                          }
#line 860 "prog_io_type_defn.m"
                      }
#line 860 "prog_io_type_defn.m"
                  }
#line 860 "prog_io_type_defn.m"
              }
#line 860 "prog_io_type_defn.m"
          }
#line 864 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 862 "prog_io_type_defn.m"
          {
#line 862 "prog_io_type_defn.m"
            {
#line 862 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_57_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 863 "prog_io_type_defn.m"
            {
#line 863 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 863 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 863 "prog_io_type_defn.m"
            }
#line 862 "prog_io_type_defn.m"
          }
#line 864 "prog_io_type_defn.m"
        else
#line 865 "prog_io_type_defn.m"
          {
#line 865 "prog_io_type_defn.m"
            {
#line 865 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_57_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 866 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 865 "prog_io_type_defn.m"
          }
#line 871 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 870 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 871 "prog_io_type_defn.m"
        else
#line 871 "prog_io_type_defn.m"
          {
#line 871 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 871 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 873 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 871 "prog_io_type_defn.m"
            else
#line 876 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 871 "prog_io_type_defn.m"
          }
#line 858 "prog_io_type_defn.m"
      }
#line 857 "prog_io_type_defn.m"
  }
#line 849 "prog_io_type_defn.m"
}

#line 883 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(
#line 883 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 883 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 883 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 883 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 883 "prog_io_type_defn.m"
{
#line 900 "prog_io_type_defn.m"
  {
#line 900 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 900 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 900 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LHS_9;
#line 900 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RHS_10;
#line 887 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 887 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_19_19;
#line 887 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 887 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 887 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 887 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 887 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 887 "prog_io_type_defn.m"
      {
#line 887 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 887 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 887 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 887 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 887 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 887 "prog_io_type_defn.m"
          {
#line 887 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 887 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_19_19, (MR_String) "is") == 0);
#line 887 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 887 "prog_io_type_defn.m"
              {
#line 887 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 887 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 887 "prog_io_type_defn.m"
                  {
#line 887 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 887 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 887 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 887 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 887 "prog_io_type_defn.m"
                      {
#line 887 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 887 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 887 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 887 "prog_io_type_defn.m"
                      }
#line 887 "prog_io_type_defn.m"
                  }
#line 887 "prog_io_type_defn.m"
              }
#line 887 "prog_io_type_defn.m"
          }
#line 887 "prog_io_type_defn.m"
      }
#line 900 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 897 "prog_io_type_defn.m"
      {
#line 888 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 888 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 888 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 888 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 888 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
          {
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 1)));
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 2)));
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 888 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
              {
#line 888 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 888 "prog_io_type_defn.m"
                  {
#line 888 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 888 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__Name_5, parse_tree__prog_io_type_defn__V_51_51) == 0);
#line 888 "prog_io_type_defn.m"
                  }
#line 888 "prog_io_type_defn.m"
              }
#line 888 "prog_io_type_defn.m"
          }
#line 897 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 889 "prog_io_type_defn.m"
          {
#line 889 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__RHSResult_13;

#line 957 "prog_io_type_defn.m"
            {
#line 957 "prog_io_type_defn.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(parse_tree__prog_io_type_defn__V_52_52, parse_tree__prog_io_type_defn__V_53_53, parse_tree__prog_io_type_defn__RHS_10, &parse_tree__prog_io_type_defn__RHSResult_13);
            }
#line 893 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
#line 895 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = (MR_Word) parse_tree__prog_io_type_defn__RHSResult_13;
#line 893 "prog_io_type_defn.m"
            else
#line 891 "prog_io_type_defn.m"
              {
#line 891 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RHSResult_13, (MR_Integer) 0)));
#line 891 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 892 "prog_io_type_defn.m"
                {
#line 892 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 892 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ParsedRHS_14));
#line 892 "prog_io_type_defn.m"
                }
#line 892 "prog_io_type_defn.m"
                {
#line 892 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 892 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 892 "prog_io_type_defn.m"
                }
#line 891 "prog_io_type_defn.m"
              }
#line 889 "prog_io_type_defn.m"
          }
#line 897 "prog_io_type_defn.m"
        else
#line 898 "prog_io_type_defn.m"
          {
#line 898 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[34]);
#line 898 "prog_io_type_defn.m"
          }
#line 897 "prog_io_type_defn.m"
      }
#line 900 "prog_io_type_defn.m"
    else
#line 901 "prog_io_type_defn.m"
      {
#line 901 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 901 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 901 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 901 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 901 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 903 "prog_io_type_defn.m"
        {
#line 903 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 903 "prog_io_type_defn.m"
        {
#line 903 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[155])));
#line 903 "prog_io_type_defn.m"
        }
#line 903 "prog_io_type_defn.m"
        {
#line 903 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 903 "prog_io_type_defn.m"
        }
#line 902 "prog_io_type_defn.m"
        {
#line 902 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 902 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 902 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 902 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 902 "prog_io_type_defn.m"
        }
#line 904 "prog_io_type_defn.m"
        {
#line 904 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 904 "prog_io_type_defn.m"
        }
#line 904 "prog_io_type_defn.m"
        {
#line 904 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 904 "prog_io_type_defn.m"
        }
#line 901 "prog_io_type_defn.m"
      }
#line 900 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 900 "prog_io_type_defn.m"
  }
#line 883 "prog_io_type_defn.m"
}

#line 1110 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_109_97_121_98_101_95_119_104_101_114_101_95_100_101_116_97_105_108_115_95_50_95_95_91_49_49_93_95_48_12_f_0(
#line 1110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_14,
#line 1110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_15,
#line 1110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__RepresentationIs_16,
#line 1110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__InitialisationIs_17,
#line 1110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__GroundIs_18,
#line 1110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__AnyIs_19,
#line 1110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__CStoreIs_20,
#line 1110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__EqualityIs_21,
#line 1110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ComparisonIs_22,
#line 1110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__DirectArgIs_23,
#line 1110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__WhereTerm_25)
#line 1110 "prog_io_type_defn.m"
{
#line 1123 "prog_io_type_defn.m"
  {
#line 1123 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 1123 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeWhereDetails_26;

#line 1123 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1221 "prog_io_type_defn.m"
#line 1221 "prog_io_type_defn.m"
      switch (parse_tree__prog_io_type_defn__IsSolverType_14) {
#line 1221 "prog_io_type_defn.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1221 "prog_io_type_defn.m"
        case (MR_Integer) 0:
#line 1237 "prog_io_type_defn.m"
          {
#line 1224 "prog_io_type_defn.m"
            {
#line 1224 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__V_46_46;

#line 1224 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RepresentationIs_16)) == (MR_mktag((MR_Integer) 1)));
#line 1224 "prog_io_type_defn.m"
              if (parse_tree__prog_io_type_defn__succeeded)
#line 1224 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RepresentationIs_16, (MR_Integer) 0)));
#line 1224 "prog_io_type_defn.m"
            }
#line 1225 "prog_io_type_defn.m"
            if (!(parse_tree__prog_io_type_defn__succeeded))
#line 1225 "prog_io_type_defn.m"
              {
#line 1225 "prog_io_type_defn.m"
                {
#line 1225 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 1225 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__InitialisationIs_17)) == (MR_mktag((MR_Integer) 1)));
#line 1225 "prog_io_type_defn.m"
                  if (parse_tree__prog_io_type_defn__succeeded)
#line 1225 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__InitialisationIs_17, (MR_Integer) 0)));
#line 1225 "prog_io_type_defn.m"
                }
#line 1225 "prog_io_type_defn.m"
                if (!(parse_tree__prog_io_type_defn__succeeded))
#line 1225 "prog_io_type_defn.m"
                  {
#line 1226 "prog_io_type_defn.m"
                    {
#line 1226 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__V_48_48;

#line 1226 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__GroundIs_18)) == (MR_mktag((MR_Integer) 1)));
#line 1226 "prog_io_type_defn.m"
                      if (parse_tree__prog_io_type_defn__succeeded)
#line 1226 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__GroundIs_18, (MR_Integer) 0)));
#line 1226 "prog_io_type_defn.m"
                    }
#line 1225 "prog_io_type_defn.m"
                    if (!(parse_tree__prog_io_type_defn__succeeded))
#line 1225 "prog_io_type_defn.m"
                      {
#line 1227 "prog_io_type_defn.m"
                        {
#line 1227 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_49_49;

#line 1227 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__AnyIs_19)) == (MR_mktag((MR_Integer) 1)));
#line 1227 "prog_io_type_defn.m"
                          if (parse_tree__prog_io_type_defn__succeeded)
#line 1227 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__AnyIs_19, (MR_Integer) 0)));
#line 1227 "prog_io_type_defn.m"
                        }
#line 1225 "prog_io_type_defn.m"
                        if (!(parse_tree__prog_io_type_defn__succeeded))
#line 1228 "prog_io_type_defn.m"
                          {
#line 1228 "prog_io_type_defn.m"
                            MR_Word parse_tree__prog_io_type_defn__V_50_50;

#line 1228 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__CStoreIs_20)) == (MR_mktag((MR_Integer) 1)));
#line 1228 "prog_io_type_defn.m"
                            if (parse_tree__prog_io_type_defn__succeeded)
#line 1228 "prog_io_type_defn.m"
                              parse_tree__prog_io_type_defn__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__CStoreIs_20, (MR_Integer) 0)));
#line 1228 "prog_io_type_defn.m"
                          }
#line 1225 "prog_io_type_defn.m"
                      }
#line 1225 "prog_io_type_defn.m"
                  }
#line 1225 "prog_io_type_defn.m"
              }
#line 1237 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1232 "prog_io_type_defn.m"
              {
#line 1232 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_62_62;
#line 1232 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_63_63;
#line 1232 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_64_64;
#line 1232 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_69_69;
#line 1232 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_168;

#line 1234 "prog_io_type_defn.m"
                {
#line 1234 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_64_64 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__WhereTerm_25);
                }
#line 1234 "prog_io_type_defn.m"
                {
#line 1234 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1234 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_64_64));
#line 1234 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[151])));
#line 1234 "prog_io_type_defn.m"
                }
#line 1235 "prog_io_type_defn.m"
                {
#line 1235 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1235 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_63_63));
#line 1235 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1235 "prog_io_type_defn.m"
                }
#line 1233 "prog_io_type_defn.m"
                {
#line 1233 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1233 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_168, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1233 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_168, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1233 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_168, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_62_62));
#line 1233 "prog_io_type_defn.m"
                }
#line 1236 "prog_io_type_defn.m"
                {
#line 1236 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_168));
#line 1236 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1236 "prog_io_type_defn.m"
                }
#line 1236 "prog_io_type_defn.m"
                {
#line 1236 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1236 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_69_69));
#line 1236 "prog_io_type_defn.m"
                }
#line 1232 "prog_io_type_defn.m"
              }
#line 1237 "prog_io_type_defn.m"
            else
#line 1238 "prog_io_type_defn.m"
              {
#line 1238 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeUC_51;

#line 1238 "prog_io_type_defn.m"
                {
#line 1238 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeUC_51 = parse_tree__prog_io_type_defn__maybe_unify_compare_2_f_0(parse_tree__prog_io_type_defn__EqualityIs_21, parse_tree__prog_io_type_defn__ComparisonIs_22);
                }
#line 1239 "prog_io_type_defn.m"
                {
#line 1239 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1239 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1239 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeUC_51));
#line 1239 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__DirectArgIs_23));
#line 1239 "prog_io_type_defn.m"
                }
#line 1238 "prog_io_type_defn.m"
              }
#line 1237 "prog_io_type_defn.m"
          }
#line 1221 "prog_io_type_defn.m"
          break;
#line 1221 "prog_io_type_defn.m"
        case (MR_Integer) 1:
#line 1160 "prog_io_type_defn.m"
          {
#line 1152 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_30_30;

#line 1152 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__DirectArgIs_23)) == (MR_mktag((MR_Integer) 1)));
#line 1152 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1152 "prog_io_type_defn.m"
              {
#line 1152 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__DirectArgIs_23, (MR_Integer) 0)));
#line 1155 "prog_io_type_defn.m"
                {
#line 1155 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_85_85;
#line 1155 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_86_86;
#line 1155 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_87_87;
#line 1155 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_92_92;
#line 1155 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__Spec_156;

#line 1157 "prog_io_type_defn.m"
                  {
#line 1157 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_87_87 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__WhereTerm_25);
                  }
#line 1157 "prog_io_type_defn.m"
                  {
#line 1157 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1157 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_87_87));
#line 1157 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[152])));
#line 1157 "prog_io_type_defn.m"
                  }
#line 1158 "prog_io_type_defn.m"
                  {
#line 1158 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1158 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_86_86));
#line 1158 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1158 "prog_io_type_defn.m"
                  }
#line 1156 "prog_io_type_defn.m"
                  {
#line 1156 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__Spec_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1156 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_156, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1156 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1156 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_156, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_85_85));
#line 1156 "prog_io_type_defn.m"
                  }
#line 1159 "prog_io_type_defn.m"
                  {
#line 1159 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1159 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_92_92, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_156));
#line 1159 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1159 "prog_io_type_defn.m"
                  }
#line 1159 "prog_io_type_defn.m"
                  {
#line 1159 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1159 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_92_92));
#line 1159 "prog_io_type_defn.m"
                  }
#line 1155 "prog_io_type_defn.m"
                }
#line 1152 "prog_io_type_defn.m"
              }
#line 1152 "prog_io_type_defn.m"
            else
#line 1208 "prog_io_type_defn.m"
              {
#line 1208 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__RepnType_31;
#line 1208 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeInitialisation_32;
#line 1208 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeGroundInst_33;
#line 1208 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeAnyInst_34;
#line 1208 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeEqPred_35;
#line 1208 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeCmpPred_36;
#line 1208 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeMutableInfos_37;

#line 1161 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RepresentationIs_16)) == (MR_mktag((MR_Integer) 1)));
#line 1161 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1161 "prog_io_type_defn.m"
                  {
#line 1161 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__RepnType_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RepresentationIs_16, (MR_Integer) 0)));
#line 1162 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeInitialisation_32 = parse_tree__prog_io_type_defn__InitialisationIs_17;
#line 1163 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeGroundInst_33 = parse_tree__prog_io_type_defn__GroundIs_18;
#line 1164 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeAnyInst_34 = parse_tree__prog_io_type_defn__AnyIs_19;
#line 1165 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeEqPred_35 = parse_tree__prog_io_type_defn__EqualityIs_21;
#line 1166 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeCmpPred_36 = parse_tree__prog_io_type_defn__ComparisonIs_22;
#line 1167 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeMutableInfos_37 = parse_tree__prog_io_type_defn__CStoreIs_20;
#line 1167 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = MR_TRUE;
#line 1161 "prog_io_type_defn.m"
                  }
#line 1208 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1174 "prog_io_type_defn.m"
                  {
#line 1174 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__GroundInst_38;
#line 1174 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__AnyInst_39;
#line 1174 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__MutableInfos_40;
#line 1174 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__HowToInit_42;
#line 1174 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__SolverTypeDetails_43;
#line 1174 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_44;
#line 1174 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__MaybeUnifyCompare_45;

#line 1171 "prog_io_type_defn.m"
                    if ((parse_tree__prog_io_type_defn__MaybeGroundInst_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1173 "prog_io_type_defn.m"
                      {
#line 1173 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__GroundInst_38 = parse_tree__prog_mode__ground_inst_0_f_0();
                      }
#line 1171 "prog_io_type_defn.m"
                    else
#line 1170 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__GroundInst_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeGroundInst_33, (MR_Integer) 0)));
#line 1177 "prog_io_type_defn.m"
                    if ((parse_tree__prog_io_type_defn__MaybeAnyInst_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1179 "prog_io_type_defn.m"
                      {
#line 1179 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__AnyInst_39 = parse_tree__prog_mode__ground_inst_0_f_0();
                      }
#line 1177 "prog_io_type_defn.m"
                    else
#line 1176 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__AnyInst_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeAnyInst_34, (MR_Integer) 0)));
#line 1183 "prog_io_type_defn.m"
                    if ((parse_tree__prog_io_type_defn__MaybeMutableInfos_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1185 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MutableInfos_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1183 "prog_io_type_defn.m"
                    else
#line 1182 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MutableInfos_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeMutableInfos_37, (MR_Integer) 0)));
#line 1190 "prog_io_type_defn.m"
                    if ((parse_tree__prog_io_type_defn__MaybeInitialisation_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1192 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__HowToInit_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1190 "prog_io_type_defn.m"
                    else
#line 1188 "prog_io_type_defn.m"
                      {
#line 1188 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__InitPred_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeInitialisation_32, (MR_Integer) 0)));

#line 1189 "prog_io_type_defn.m"
                        {
#line 1189 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__HowToInit_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HowToInit_42, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__InitPred_41));
#line 1189 "prog_io_type_defn.m"
                        }
#line 1188 "prog_io_type_defn.m"
                      }
#line 1194 "prog_io_type_defn.m"
                    {
#line 1194 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__SolverTypeDetails_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1194 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails_43, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__RepnType_31));
#line 1194 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails_43, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__HowToInit_42));
#line 1194 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails_43, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__GroundInst_38));
#line 1194 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails_43, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__AnyInst_39));
#line 1194 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails_43, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__MutableInfos_40));
#line 1194 "prog_io_type_defn.m"
                    }
#line 1196 "prog_io_type_defn.m"
                    {
#line 1196 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1196 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_44, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__SolverTypeDetails_43));
#line 1196 "prog_io_type_defn.m"
                    }
#line 1198 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__MaybeEqPred_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1198 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1199 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__MaybeCmpPred_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1202 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1201 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MaybeUnifyCompare_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1202 "prog_io_type_defn.m"
                    else
#line 1203 "prog_io_type_defn.m"
                      {
#line 1203 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_94_94;

#line 1203 "prog_io_type_defn.m"
                        {
#line 1203 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1203 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_94_94, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeEqPred_35));
#line 1203 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_94_94, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeCmpPred_36));
#line 1203 "prog_io_type_defn.m"
                        }
#line 1203 "prog_io_type_defn.m"
                        {
#line 1203 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__MaybeUnifyCompare_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1203 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeUnifyCompare_45, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_94_94));
#line 1203 "prog_io_type_defn.m"
                        }
#line 1203 "prog_io_type_defn.m"
                      }
#line 1206 "prog_io_type_defn.m"
                    {
#line 1206 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1206 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_44));
#line 1206 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeUnifyCompare_45));
#line 1206 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1206 "prog_io_type_defn.m"
                    }
#line 1174 "prog_io_type_defn.m"
                  }
#line 1208 "prog_io_type_defn.m"
                else
#line 1217 "prog_io_type_defn.m"
                  {
#line 1209 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__RepresentationIs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1217 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1212 "prog_io_type_defn.m"
                      {
#line 1212 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_109_109;
#line 1212 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_110_110;
#line 1212 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_111_111;
#line 1212 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_116_116;
#line 1212 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__Spec_158;

#line 1214 "prog_io_type_defn.m"
                        {
#line 1214 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_111_111 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__WhereTerm_25);
                        }
#line 1214 "prog_io_type_defn.m"
                        {
#line 1214 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1214 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_110_110, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_111_111));
#line 1214 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[153])));
#line 1214 "prog_io_type_defn.m"
                        }
#line 1215 "prog_io_type_defn.m"
                        {
#line 1215 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1215 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_109_109, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_110_110));
#line 1215 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1215 "prog_io_type_defn.m"
                        }
#line 1213 "prog_io_type_defn.m"
                        {
#line 1213 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__Spec_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1213 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_158, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1213 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1213 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_158, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_109_109));
#line 1213 "prog_io_type_defn.m"
                        }
#line 1216 "prog_io_type_defn.m"
                        {
#line 1216 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1216 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_116_116, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_158));
#line 1216 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1216 "prog_io_type_defn.m"
                        }
#line 1216 "prog_io_type_defn.m"
                        {
#line 1216 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1216 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_116_116));
#line 1216 "prog_io_type_defn.m"
                        }
#line 1212 "prog_io_type_defn.m"
                      }
#line 1217 "prog_io_type_defn.m"
                    else
#line 1218 "prog_io_type_defn.m"
                      {
#line 1218 "prog_io_type_defn.m"
                        {
#line 1218 "prog_io_type_defn.m"
                          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_io_type_defn", (MR_String) "function \140parse_tree.prog_io_type_defn.make_maybe_where_details_2\'/12", (MR_String) "make_maybe_where_details_2: shouldn\'t have reached this point! (1)");
                        }
#line 1218 "prog_io_type_defn.m"
                      }
#line 1217 "prog_io_type_defn.m"
                  }
#line 1208 "prog_io_type_defn.m"
              }
#line 1160 "prog_io_type_defn.m"
          }
#line 1221 "prog_io_type_defn.m"
          break;
#line 1221 "prog_io_type_defn.m"
      }
#line 1123 "prog_io_type_defn.m"
    else
#line 1138 "prog_io_type_defn.m"
      {
#line 1127 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__RepresentationIs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1127 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1127 "prog_io_type_defn.m"
          {
#line 1128 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__InitialisationIs_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1127 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1127 "prog_io_type_defn.m"
              {
#line 1129 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__GroundIs_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1127 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1127 "prog_io_type_defn.m"
                  {
#line 1130 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__AnyIs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1127 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1127 "prog_io_type_defn.m"
                      {
#line 1131 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__EqualityIs_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1127 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 1127 "prog_io_type_defn.m"
                          {
#line 1132 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__ComparisonIs_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1127 "prog_io_type_defn.m"
                            if (parse_tree__prog_io_type_defn__succeeded)
#line 1127 "prog_io_type_defn.m"
                              {
#line 1133 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__CStoreIs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1127 "prog_io_type_defn.m"
                                if (parse_tree__prog_io_type_defn__succeeded)
#line 1134 "prog_io_type_defn.m"
                                  parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__DirectArgIs_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1127 "prog_io_type_defn.m"
                              }
#line 1127 "prog_io_type_defn.m"
                          }
#line 1127 "prog_io_type_defn.m"
                      }
#line 1127 "prog_io_type_defn.m"
                  }
#line 1127 "prog_io_type_defn.m"
              }
#line 1127 "prog_io_type_defn.m"
          }
#line 1138 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1136 "prog_io_type_defn.m"
          {
#line 1136 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_124_124;
#line 1136 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_125_125;

#line 1137 "prog_io_type_defn.m"
            {
#line 1137 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1137 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_125_125, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__IsSolverType_14));
#line 1137 "prog_io_type_defn.m"
            }
#line 1137 "prog_io_type_defn.m"
            {
#line 1137 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1137 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_124_124, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_125_125));
#line 1137 "prog_io_type_defn.m"
            }
#line 1137 "prog_io_type_defn.m"
            {
#line 1137 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1137 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1137 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_124_124));
#line 1137 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1137 "prog_io_type_defn.m"
            }
#line 1136 "prog_io_type_defn.m"
          }
#line 1138 "prog_io_type_defn.m"
        else
#line 1142 "prog_io_type_defn.m"
          {
#line 1142 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Spec_29;
#line 1142 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_146_146;
#line 1142 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_147_147;
#line 1142 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_148_148;
#line 1142 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_153_153;

#line 1144 "prog_io_type_defn.m"
            {
#line 1144 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_148_148 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__WhereTerm_25);
            }
#line 1144 "prog_io_type_defn.m"
            {
#line 1144 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_147_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1144 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_147_147, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_148_148));
#line 1144 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_147_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[154])));
#line 1144 "prog_io_type_defn.m"
            }
#line 1144 "prog_io_type_defn.m"
            {
#line 1144 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1144 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_146_146, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_147_147));
#line 1144 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_146_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1144 "prog_io_type_defn.m"
            }
#line 1143 "prog_io_type_defn.m"
            {
#line 1143 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Spec_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1143 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1143 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1143 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_29, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_146_146));
#line 1143 "prog_io_type_defn.m"
            }
#line 1145 "prog_io_type_defn.m"
            {
#line 1145 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_153_153, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_29));
#line 1145 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_153_153, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1145 "prog_io_type_defn.m"
            }
#line 1145 "prog_io_type_defn.m"
            {
#line 1145 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1145 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_153_153));
#line 1145 "prog_io_type_defn.m"
            }
#line 1142 "prog_io_type_defn.m"
          }
#line 1138 "prog_io_type_defn.m"
      }
#line 1123 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeWhereDetails_26;
#line 1123 "prog_io_type_defn.m"
  }
#line 1110 "prog_io_type_defn.m"
}

#line 960 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_2_f_0(
#line 960 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5)
#line 960 "prog_io_type_defn.m"
{
#line 968 "prog_io_type_defn.m"
  {
#line 968 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 968 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeInst_6;
#line 968 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Inst_7;

#line 964 "prog_io_type_defn.m"
    {
#line 964 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 1, parse_tree__prog_io_type_defn__Term_5, &parse_tree__prog_io_type_defn__Inst_7);
    }
#line 964 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 964 "prog_io_type_defn.m"
      {
#line 965 "prog_io_type_defn.m"
        {
#line 965 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__prog_io_type_defn__Inst_7);
        }
#line 965 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = !(parse_tree__prog_io_type_defn__succeeded);
#line 964 "prog_io_type_defn.m"
      }
#line 968 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 967 "prog_io_type_defn.m"
      {
#line 967 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__MaybeInst_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 967 "prog_io_type_defn.m"
        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeInst_6, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Inst_7));
#line 967 "prog_io_type_defn.m"
      }
#line 968 "prog_io_type_defn.m"
    else
#line 969 "prog_io_type_defn.m"
      {
#line 969 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_9;
#line 969 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 969 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 969 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 969 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 971 "prog_io_type_defn.m"
        {
#line 971 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_20_20 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_5);
        }
#line 971 "prog_io_type_defn.m"
        {
#line 971 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 971 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_20_20));
#line 971 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[150])));
#line 971 "prog_io_type_defn.m"
        }
#line 971 "prog_io_type_defn.m"
        {
#line 971 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 971 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_19_19));
#line 971 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 971 "prog_io_type_defn.m"
        }
#line 970 "prog_io_type_defn.m"
        {
#line 970 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 970 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 970 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 970 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_9, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_18_18));
#line 970 "prog_io_type_defn.m"
        }
#line 972 "prog_io_type_defn.m"
        {
#line 972 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 972 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_9));
#line 972 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 972 "prog_io_type_defn.m"
        }
#line 972 "prog_io_type_defn.m"
        {
#line 972 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeInst_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 972 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeInst_6, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 972 "prog_io_type_defn.m"
        }
#line 969 "prog_io_type_defn.m"
      }
#line 968 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeInst_6;
#line 968 "prog_io_type_defn.m"
  }
#line 960 "prog_io_type_defn.m"
}

#line 849 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_attribute__ho10_4_p_0(
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 849 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 849 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 849 "prog_io_type_defn.m"
{
#line 857 "prog_io_type_defn.m"
  {
#line 857 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 857 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 854 "prog_io_type_defn.m"
      {
#line 855 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 856 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[23]);
#line 854 "prog_io_type_defn.m"
      }
#line 857 "prog_io_type_defn.m"
    else
#line 858 "prog_io_type_defn.m"
      {
#line 858 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 858 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 864 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 864 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 860 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 860 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 860 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
          {
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 860 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
              {
#line 860 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 860 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
                  {
#line 860 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
                      {
#line 860 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 860 "prog_io_type_defn.m"
                          {
#line 860 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 860 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 860 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "prog_io_type_defn.m"
                          }
#line 860 "prog_io_type_defn.m"
                      }
#line 860 "prog_io_type_defn.m"
                  }
#line 860 "prog_io_type_defn.m"
              }
#line 860 "prog_io_type_defn.m"
          }
#line 864 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 862 "prog_io_type_defn.m"
          {
#line 862 "prog_io_type_defn.m"
            {
#line 862 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 863 "prog_io_type_defn.m"
            {
#line 863 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 863 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 863 "prog_io_type_defn.m"
            }
#line 862 "prog_io_type_defn.m"
          }
#line 864 "prog_io_type_defn.m"
        else
#line 865 "prog_io_type_defn.m"
          {
#line 865 "prog_io_type_defn.m"
            {
#line 865 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(parse_tree__prog_io_type_defn__Term_9);
            }
#line 866 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 865 "prog_io_type_defn.m"
          }
#line 871 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 870 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 871 "prog_io_type_defn.m"
        else
#line 871 "prog_io_type_defn.m"
          {
#line 871 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 871 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 873 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 871 "prog_io_type_defn.m"
            else
#line 876 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 871 "prog_io_type_defn.m"
          }
#line 858 "prog_io_type_defn.m"
      }
#line 857 "prog_io_type_defn.m"
  }
#line 849 "prog_io_type_defn.m"
}

#line 453 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__453__1_2_p_0(
#line 453 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ExistQVars_19,
#line 453 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_288)
#line 453 "prog_io_type_defn.m"
{
#line 453 "prog_io_type_defn.m"
  {
#line 453 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 453 "prog_io_type_defn.m"
    {
#line 453 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], parse_tree__prog_io_type_defn__ExistQVars_19, ((MR_Box) (parse_tree__prog_io_type_defn__HeadVar__2_288)));
    }
#line 453 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 453 "prog_io_type_defn.m"
  }
#line 453 "prog_io_type_defn.m"
}

#line 425 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__425__1_2_p_0(
#line 425 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_129,
#line 425 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_276)
#line 425 "prog_io_type_defn.m"
{
#line 425 "prog_io_type_defn.m"
  {
#line 425 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 425 "prog_io_type_defn.m"
    {
#line 425 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], parse_tree__prog_io_type_defn__HeadVar__1_129, ((MR_Box) (parse_tree__prog_io_type_defn__HeadVar__2_276)));
    }
#line 425 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 425 "prog_io_type_defn.m"
  }
#line 425 "prog_io_type_defn.m"
}

#line 421 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__421__1_1_f_0(
#line 421 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_126)
#line 421 "prog_io_type_defn.m"
{
#line 421 "prog_io_type_defn.m"
  {
#line 421 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 421 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__2_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_126, (MR_Integer) 1)));
#line 421 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_126, (MR_Integer) 0)));
#line 421 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_126, (MR_Integer) 2)));
#line 421 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_126, (MR_Integer) 3)));

#line 421 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__2_127;
#line 421 "prog_io_type_defn.m"
  }
#line 421 "prog_io_type_defn.m"
}

#line 405 "prog_io_type_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__405__1_3_f_0(
#line 405 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_89,
#line 405 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__GenericVarSet_217,
#line 405 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_269)
#line 405 "prog_io_type_defn.m"
{
#line 405 "prog_io_type_defn.m"
  {
#line 405 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 405 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__HeadVar__4_270;

#line 405 "prog_io_type_defn.m"
    {
#line 405 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__4_270 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__GenericVarSet_217, parse_tree__prog_io_type_defn__HeadVar__1_89, parse_tree__prog_io_type_defn__HeadVar__3_269);
    }
#line 405 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_270;
#line 405 "prog_io_type_defn.m"
  }
#line 405 "prog_io_type_defn.m"
}

#line 376 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__376__1_2_p_0(
#line 376 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_61,
#line 376 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_258)
#line 376 "prog_io_type_defn.m"
{
#line 376 "prog_io_type_defn.m"
  {
#line 376 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 376 "prog_io_type_defn.m"
    {
#line 376 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], parse_tree__prog_io_type_defn__HeadVar__1_61, ((MR_Box) (parse_tree__prog_io_type_defn__HeadVar__2_258)));
    }
#line 376 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 376 "prog_io_type_defn.m"
  }
#line 376 "prog_io_type_defn.m"
}

#line 373 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__373__1_1_f_0(
#line 373 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_58)
#line 373 "prog_io_type_defn.m"
{
#line 373 "prog_io_type_defn.m"
  {
#line 373 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 373 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__2_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_58, (MR_Integer) 1)));
#line 373 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_58, (MR_Integer) 0)));
#line 373 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_58, (MR_Integer) 2)));
#line 373 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_58, (MR_Integer) 3)));

#line 373 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__2_59;
#line 373 "prog_io_type_defn.m"
  }
#line 373 "prog_io_type_defn.m"
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

#line 1292 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_type_defn_head__1292__1_2_p_0(
#line 1292 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_101,
#line 1292 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_102)
#line 1292 "prog_io_type_defn.m"
{
#line 1292 "prog_io_type_defn.m"
  {
#line 1292 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 1292 "prog_io_type_defn.m"
    {
#line 1292 "prog_io_type_defn.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__HeadVar__1_101, parse_tree__prog_io_type_defn__HeadVar__2_102);
#line 1292 "prog_io_type_defn.m"
      return;
    }
#line 1292 "prog_io_type_defn.m"
  }
#line 1292 "prog_io_type_defn.m"
}

#line 1244 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__maybe_unify_compare_2_f_0(
#line 1244 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeEqPred_4,
#line 1244 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCmpPred_5)
#line 1244 "prog_io_type_defn.m"
{
#line 1247 "prog_io_type_defn.m"
  {
#line 1247 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__MaybeEqPred_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1247 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3;

#line 1249 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1250 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__MaybeCmpPred_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1247 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1252 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1247 "prog_io_type_defn.m"
    else
#line 1254 "prog_io_type_defn.m"
      {
#line 1254 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_6_6;

#line 1254 "prog_io_type_defn.m"
        {
#line 1254 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1254 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_6_6, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeEqPred_4));
#line 1254 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_6_6, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeCmpPred_5));
#line 1254 "prog_io_type_defn.m"
        }
#line 1254 "prog_io_type_defn.m"
        {
#line 1254 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1254 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_6_6));
#line 1254 "prog_io_type_defn.m"
        }
#line 1254 "prog_io_type_defn.m"
      }
#line 1247 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__3_3;
#line 1247 "prog_io_type_defn.m"
  }
#line 1244 "prog_io_type_defn.m"
}

#line 1064 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__make_maybe_where_details_12_f_0(
#line 1064 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_14,
#line 1064 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_15,
#line 1064 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeRepresentationIs_16,
#line 1064 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeInitialisationIs_17,
#line 1064 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeGroundIs_18,
#line 1064 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeAnyIs_19,
#line 1064 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCStoreIs_20,
#line 1064 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeEqualityIs_21,
#line 1064 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeComparisonIs_22,
#line 1064 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgIs_23,
#line 1064 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeWhereEnd_24,
#line 1064 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__WhereTerm_25)
#line 1064 "prog_io_type_defn.m"
{
#line 1095 "prog_io_type_defn.m"
  {
#line 1095 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_15)) == (MR_mktag((MR_Integer) 1)));
#line 1095 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeWhereDetails_26;
#line 1095 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_27;
#line 1095 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RepresentationIs_28;
#line 1095 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__InitialisationIs_29;
#line 1095 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__GroundIs_30;
#line 1095 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__AnyIs_31;
#line 1095 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__CStoreIs_32;
#line 1095 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__EqualityIs_33;
#line 1095 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__ComparisonIs_34;
#line 1095 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__DirectArgIs_35;
#line 1089 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__WhereEnd_36;

#line 1080 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1080 "prog_io_type_defn.m"
      {
#line 1080 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_15, (MR_Integer) 0)));
#line 1081 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeRepresentationIs_16)) == (MR_mktag((MR_Integer) 1)));
#line 1081 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1081 "prog_io_type_defn.m"
          {
#line 1081 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__RepresentationIs_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeRepresentationIs_16, (MR_Integer) 0)));
#line 1082 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeInitialisationIs_17)) == (MR_mktag((MR_Integer) 1)));
#line 1082 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1082 "prog_io_type_defn.m"
              {
#line 1082 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__InitialisationIs_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeInitialisationIs_17, (MR_Integer) 0)));
#line 1083 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeGroundIs_18)) == (MR_mktag((MR_Integer) 1)));
#line 1083 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1083 "prog_io_type_defn.m"
                  {
#line 1083 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__GroundIs_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeGroundIs_18, (MR_Integer) 0)));
#line 1084 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeAnyIs_19)) == (MR_mktag((MR_Integer) 1)));
#line 1084 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1084 "prog_io_type_defn.m"
                      {
#line 1084 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__AnyIs_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeAnyIs_19, (MR_Integer) 0)));
#line 1085 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeCStoreIs_20)) == (MR_mktag((MR_Integer) 1)));
#line 1085 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 1085 "prog_io_type_defn.m"
                          {
#line 1085 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__CStoreIs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeCStoreIs_20, (MR_Integer) 0)));
#line 1086 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeEqualityIs_21)) == (MR_mktag((MR_Integer) 1)));
#line 1086 "prog_io_type_defn.m"
                            if (parse_tree__prog_io_type_defn__succeeded)
#line 1086 "prog_io_type_defn.m"
                              {
#line 1086 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__EqualityIs_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeEqualityIs_21, (MR_Integer) 0)));
#line 1087 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeComparisonIs_22)) == (MR_mktag((MR_Integer) 1)));
#line 1087 "prog_io_type_defn.m"
                                if (parse_tree__prog_io_type_defn__succeeded)
#line 1087 "prog_io_type_defn.m"
                                  {
#line 1087 "prog_io_type_defn.m"
                                    parse_tree__prog_io_type_defn__ComparisonIs_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeComparisonIs_22, (MR_Integer) 0)));
#line 1088 "prog_io_type_defn.m"
                                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeDirectArgIs_23)) == (MR_mktag((MR_Integer) 1)));
#line 1088 "prog_io_type_defn.m"
                                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1088 "prog_io_type_defn.m"
                                      {
#line 1088 "prog_io_type_defn.m"
                                        parse_tree__prog_io_type_defn__DirectArgIs_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeDirectArgIs_23, (MR_Integer) 0)));
#line 1089 "prog_io_type_defn.m"
                                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeWhereEnd_24)) == (MR_mktag((MR_Integer) 1)));
#line 1089 "prog_io_type_defn.m"
                                        if (parse_tree__prog_io_type_defn__succeeded)
#line 1089 "prog_io_type_defn.m"
                                          parse_tree__prog_io_type_defn__WhereEnd_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereEnd_24, (MR_Integer) 0)));
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
#line 1080 "prog_io_type_defn.m"
      }
#line 1095 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1091 "prog_io_type_defn.m"
      {
#line 1091 "prog_io_type_defn.m"
        return parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_109_97_121_98_101_95_119_104_101_114_101_95_100_101_116_97_105_108_115_95_50_95_95_91_49_49_93_95_48_12_f_0(parse_tree__prog_io_type_defn__IsSolverType_14, parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_27, parse_tree__prog_io_type_defn__RepresentationIs_28, parse_tree__prog_io_type_defn__InitialisationIs_29, parse_tree__prog_io_type_defn__GroundIs_30, parse_tree__prog_io_type_defn__AnyIs_31, parse_tree__prog_io_type_defn__CStoreIs_32, parse_tree__prog_io_type_defn__EqualityIs_33, parse_tree__prog_io_type_defn__ComparisonIs_34, parse_tree__prog_io_type_defn__DirectArgIs_35, parse_tree__prog_io_type_defn__WhereTerm_25);
      }
#line 1095 "prog_io_type_defn.m"
    else
#line 1106 "prog_io_type_defn.m"
      {
#line 1106 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 1106 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeInfo_57_57 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[10];
#line 1106 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeInfo_59_59;
#line 1106 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeInfo_60_60;
#line 1106 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Specs_37;
#line 1106 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_38_38;
#line 1106 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_39_39;
#line 1106 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 1106 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 1106 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 1106 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_43_43;
#line 1106 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_44_44;
#line 1106 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_45_45;
#line 1106 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_46_46;
#line 1106 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;
#line 1106 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_48_48;
#line 1106 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_49_49;
#line 1106 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_50_50;
#line 1106 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_51_51;
#line 1106 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 1106 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_53_53;
#line 1106 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_54_54;
#line 1106 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_55_55;

#line 1097 "prog_io_type_defn.m"
        {
#line 1097 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_38_38 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_57_57, parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_15);
        }
#line 1098 "prog_io_type_defn.m"
        {
#line 1098 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[11], parse_tree__prog_io_type_defn__MaybeRepresentationIs_16);
        }
#line 6724 "parse_tree.prog_io_type_defn.c"
        parse_tree__prog_io_type_defn__TypeInfo_59_59 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[12];
#line 1099 "prog_io_type_defn.m"
        {
#line 1099 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_59_59, parse_tree__prog_io_type_defn__MaybeInitialisationIs_17);
        }
#line 6731 "parse_tree.prog_io_type_defn.c"
        parse_tree__prog_io_type_defn__TypeInfo_60_60 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[13];
#line 1100 "prog_io_type_defn.m"
        {
#line 1100 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_44_44 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_60_60, parse_tree__prog_io_type_defn__MaybeGroundIs_18);
        }
#line 1101 "prog_io_type_defn.m"
        {
#line 1101 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_46_46 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_60_60, parse_tree__prog_io_type_defn__MaybeAnyIs_19);
        }
#line 1102 "prog_io_type_defn.m"
        {
#line 1102 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_48_48 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[14], parse_tree__prog_io_type_defn__MaybeCStoreIs_20);
        }
#line 1103 "prog_io_type_defn.m"
        {
#line 1103 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_50_50 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_59_59, parse_tree__prog_io_type_defn__MaybeEqualityIs_21);
        }
#line 1104 "prog_io_type_defn.m"
        {
#line 1104 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_52_52 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_59_59, parse_tree__prog_io_type_defn__MaybeComparisonIs_22);
        }
#line 1105 "prog_io_type_defn.m"
        {
#line 1105 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_54_54 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[7], parse_tree__prog_io_type_defn__MaybeDirectArgIs_23);
        }
#line 1106 "prog_io_type_defn.m"
        {
#line 1106 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_55_55 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_57_57, parse_tree__prog_io_type_defn__MaybeWhereEnd_24);
        }
#line 1105 "prog_io_type_defn.m"
        {
#line 1105 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_53_53 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_54_54, parse_tree__prog_io_type_defn__V_55_55);
        }
#line 1104 "prog_io_type_defn.m"
        {
#line 1104 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_51_51 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_52_52, parse_tree__prog_io_type_defn__V_53_53);
        }
#line 1103 "prog_io_type_defn.m"
        {
#line 1103 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_49_49 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_50_50, parse_tree__prog_io_type_defn__V_51_51);
        }
#line 1102 "prog_io_type_defn.m"
        {
#line 1102 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_48_48, parse_tree__prog_io_type_defn__V_49_49);
        }
#line 1101 "prog_io_type_defn.m"
        {
#line 1101 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_45_45 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_46_46, parse_tree__prog_io_type_defn__V_47_47);
        }
#line 1100 "prog_io_type_defn.m"
        {
#line 1100 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_43_43 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_44_44, parse_tree__prog_io_type_defn__V_45_45);
        }
#line 1099 "prog_io_type_defn.m"
        {
#line 1099 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_42_42, parse_tree__prog_io_type_defn__V_43_43);
        }
#line 1098 "prog_io_type_defn.m"
        {
#line 1098 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_39_39 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_40_40, parse_tree__prog_io_type_defn__V_41_41);
        }
#line 1097 "prog_io_type_defn.m"
        {
#line 1097 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Specs_37 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_38_38, parse_tree__prog_io_type_defn__V_39_39);
        }
#line 1107 "prog_io_type_defn.m"
        {
#line 1107 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1107 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_37));
#line 1107 "prog_io_type_defn.m"
        }
#line 1106 "prog_io_type_defn.m"
      }
#line 1095 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeWhereDetails_26;
#line 1095 "prog_io_type_defn.m"
  }
#line 1064 "prog_io_type_defn.m"
}

#line 1055 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_end_2_p_0(
#line 1055 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 1055 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_2)
#line 1055 "prog_io_type_defn.m"
{
#line 1057 "prog_io_type_defn.m"
  {
#line 1057 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 1057 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1057 "prog_io_type_defn.m"
      {
#line 1057 "prog_io_type_defn.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1057 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[22]);
#line 1057 "prog_io_type_defn.m"
      }
#line 1057 "prog_io_type_defn.m"
    else
#line 1058 "prog_io_type_defn.m"
      {
#line 1058 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__1_1, (MR_Integer) 0)));
#line 1058 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_6;
#line 1058 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_8_8;
#line 1058 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 1058 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 1058 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_22_22;

#line 1062 "prog_io_type_defn.m"
        {
#line 1062 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_22_22 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_5);
        }
#line 1062 "prog_io_type_defn.m"
        {
#line 1062 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1062 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_21_21, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_22_22));
#line 1062 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[149])));
#line 1062 "prog_io_type_defn.m"
        }
#line 1062 "prog_io_type_defn.m"
        {
#line 1062 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1062 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_21_21));
#line 1062 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1062 "prog_io_type_defn.m"
        }
#line 1061 "prog_io_type_defn.m"
        {
#line 1061 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1061 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1061 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1061 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_6, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_20_20));
#line 1061 "prog_io_type_defn.m"
        }
#line 1058 "prog_io_type_defn.m"
        {
#line 1058 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_8_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_6));
#line 1058 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1058 "prog_io_type_defn.m"
        }
#line 1058 "prog_io_type_defn.m"
        {
#line 1058 "prog_io_type_defn.m"
          MR_Word base;
#line 1058 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1058 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__HeadVar__2_2 = base;
#line 1058 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_8_8));
#line 1058 "prog_io_type_defn.m"
        }
#line 1058 "prog_io_type_defn.m"
      }
#line 1057 "prog_io_type_defn.m"
  }
#line 1055 "prog_io_type_defn.m"
}

#line 1039 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_direct_arg_functor_4_p_0(
#line 1039 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 1039 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 1039 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7,
#line 1039 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeFunctor_8)
#line 1039 "prog_io_type_defn.m"
{
#line 1045 "prog_io_type_defn.m"
  {
#line 1045 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 1045 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Name_9;
#line 1045 "prog_io_type_defn.m"
    MR_Integer parse_tree__prog_io_type_defn__Arity_10;

#line 1043 "prog_io_type_defn.m"
    {
#line 1043 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_util__parse_name_and_arity_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__Term_7, &parse_tree__prog_io_type_defn__Name_9, &parse_tree__prog_io_type_defn__Arity_10);
    }
#line 1045 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1044 "prog_io_type_defn.m"
      {
#line 1044 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_14_14;

#line 1044 "prog_io_type_defn.m"
        {
#line 1044 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1044 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_14_14, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_9));
#line 1044 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Arity_10));
#line 1044 "prog_io_type_defn.m"
        }
#line 1044 "prog_io_type_defn.m"
        {
#line 1044 "prog_io_type_defn.m"
          MR_Word base;
#line 1044 "prog_io_type_defn.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1044 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeFunctor_8 = base;
#line 1044 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_14_14));
#line 1044 "prog_io_type_defn.m"
        }
#line 1044 "prog_io_type_defn.m"
      }
#line 1045 "prog_io_type_defn.m"
    else
#line 1046 "prog_io_type_defn.m"
      {
#line 1046 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_46_46 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1046 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__TermStr_11;
#line 1046 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Pieces_12;
#line 1046 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_13;
#line 1046 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_17_17;
#line 1046 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 1046 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 1046 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_26_26;
#line 1046 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_27_27;
#line 1046 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_36_36;
#line 1046 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_37_37;
#line 1046 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_38_38;
#line 1046 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_39_39;
#line 1046 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 1046 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_43_43;

#line 1046 "prog_io_type_defn.m"
        {
#line 1046 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__TermStr_11 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_46_46, parse_tree__prog_io_type_defn__VarSet_6, parse_tree__prog_io_type_defn__Term_7);
        }
#line 1049 "prog_io_type_defn.m"
        {
#line 1049 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_27_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1049 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(2), parse_tree__prog_io_type_defn__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TermStr_11));
#line 1049 "prog_io_type_defn.m"
        }
#line 1049 "prog_io_type_defn.m"
        {
#line 1049 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1049 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_27_27));
#line 1049 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[21])));
#line 1049 "prog_io_type_defn.m"
        }
#line 1049 "prog_io_type_defn.m"
        {
#line 1049 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1049 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_23_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[148])));
#line 1049 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_23_23, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_26_26));
#line 1049 "prog_io_type_defn.m"
        }
#line 1048 "prog_io_type_defn.m"
        {
#line 1048 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1048 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_defn_scalar_common_2[2])));
#line 1048 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_23_23));
#line 1048 "prog_io_type_defn.m"
        }
#line 1048 "prog_io_type_defn.m"
        {
#line 1048 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1048 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[147])));
#line 1048 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_20_20));
#line 1048 "prog_io_type_defn.m"
        }
#line 1047 "prog_io_type_defn.m"
        {
#line 1047 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1047 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[146])));
#line 1047 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_12, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_17_17));
#line 1047 "prog_io_type_defn.m"
        }
#line 1051 "prog_io_type_defn.m"
        {
#line 1051 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_38_38 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_46_46, parse_tree__prog_io_type_defn__Term_7);
        }
#line 1051 "prog_io_type_defn.m"
        {
#line 1051 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1051 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_12));
#line 1051 "prog_io_type_defn.m"
        }
#line 1051 "prog_io_type_defn.m"
        {
#line 1051 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1051 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 1051 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1051 "prog_io_type_defn.m"
        }
#line 1051 "prog_io_type_defn.m"
        {
#line 1051 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1051 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_38_38));
#line 1051 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_37_37, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_39_39));
#line 1051 "prog_io_type_defn.m"
        }
#line 1051 "prog_io_type_defn.m"
        {
#line 1051 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1051 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_37_37));
#line 1051 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1051 "prog_io_type_defn.m"
        }
#line 1050 "prog_io_type_defn.m"
        {
#line 1050 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1050 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1050 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1050 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_13, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_36_36));
#line 1050 "prog_io_type_defn.m"
        }
#line 1052 "prog_io_type_defn.m"
        {
#line 1052 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1052 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_13));
#line 1052 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1052 "prog_io_type_defn.m"
        }
#line 1052 "prog_io_type_defn.m"
        {
#line 1052 "prog_io_type_defn.m"
          MR_Word base;
#line 1052 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1052 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeFunctor_8 = base;
#line 1052 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_43_43));
#line 1052 "prog_io_type_defn.m"
        }
#line 1046 "prog_io_type_defn.m"
      }
#line 1045 "prog_io_type_defn.m"
  }
#line 1039 "prog_io_type_defn.m"
}

#line 1028 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0_1(
#line 1028 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1028 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1028 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2)
#line 1028 "prog_io_type_defn.m"
{
#line 1028 "prog_io_type_defn.m"
  {
#line 1028 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 1028 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv0_MaybeFunctor_8;

#line 1028 "prog_io_type_defn.m"
    {
#line 1028 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_direct_arg_functor_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1), &parse_tree__prog_io_type_defn__conv0_MaybeFunctor_8);
    }
#line 1028 "prog_io_type_defn.m"
    *parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv0_MaybeFunctor_8));
#line 1028 "prog_io_type_defn.m"
  }
#line 1028 "prog_io_type_defn.m"
}

#line 1023 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0(
#line 1023 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 1023 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 1023 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 1023 "prog_io_type_defn.m"
{
#line 1030 "prog_io_type_defn.m"
  {
#line 1030 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 1030 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgCtors_8;
#line 1030 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__FunctorsTerms_9;

#line 1027 "prog_io_type_defn.m"
    {
#line 1027 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_type_defn__Term_7, &parse_tree__prog_io_type_defn__FunctorsTerms_9);
    }
#line 1030 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1028 "prog_io_type_defn.m"
      {
#line 1028 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 1028 "prog_io_type_defn.m"
        {
#line 1028 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1028 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_12_12, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_5[1]));
#line 1028 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_12_12, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0_1));
#line 1028 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1028 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_12_12, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__ModuleName_5));
#line 1028 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_12_12, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__VarSet_6));
#line 1028 "prog_io_type_defn.m"
        }
#line 1028 "prog_io_type_defn.m"
        {
#line 1028 "prog_io_type_defn.m"
          parse_tree__prog_io_util__map_parser_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0, parse_tree__prog_io_type_defn__V_12_12, parse_tree__prog_io_type_defn__FunctorsTerms_9, &parse_tree__prog_io_type_defn__MaybeDirectArgCtors_8);
        }
#line 1028 "prog_io_type_defn.m"
      }
#line 1030 "prog_io_type_defn.m"
    else
#line 1032 "prog_io_type_defn.m"
      {
#line 1032 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_11;
#line 1032 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_26_26;
#line 1032 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_27_27;
#line 1032 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_28_28;
#line 1032 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_33_33;

#line 1034 "prog_io_type_defn.m"
        {
#line 1034 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_28_28 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 1034 "prog_io_type_defn.m"
        {
#line 1034 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1034 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_28_28));
#line 1034 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[145])));
#line 1034 "prog_io_type_defn.m"
        }
#line 1035 "prog_io_type_defn.m"
        {
#line 1035 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1035 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_27_27));
#line 1035 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1035 "prog_io_type_defn.m"
        }
#line 1033 "prog_io_type_defn.m"
        {
#line 1033 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1033 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1033 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1033 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_11, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_26_26));
#line 1033 "prog_io_type_defn.m"
        }
#line 1036 "prog_io_type_defn.m"
        {
#line 1036 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1036 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_11));
#line 1036 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1036 "prog_io_type_defn.m"
        }
#line 1036 "prog_io_type_defn.m"
        {
#line 1036 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeDirectArgCtors_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1036 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeDirectArgCtors_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_33_33));
#line 1036 "prog_io_type_defn.m"
        }
#line 1032 "prog_io_type_defn.m"
      }
#line 1030 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeDirectArgCtors_8;
#line 1030 "prog_io_type_defn.m"
  }
#line 1023 "prog_io_type_defn.m"
}

#line 1005 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_mutable_decl_term_3_p_0(
#line 1005 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_4,
#line 1005 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5,
#line 1005 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeMutableInfo_6)
#line 1005 "prog_io_type_defn.m"
{
#line 1016 "prog_io_type_defn.m"
  {
#line 1016 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1016 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeMutableInfoPrime_10;
#line 1010 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_32_32;
#line 1010 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Args_7;
#line 1010 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Context_8;
#line 1010 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__VarSet_9;
#line 1010 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_13_13;
#line 1010 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_14_14;
#line 1010 "prog_io_type_defn.m"
    MR_Integer parse_tree__prog_io_type_defn__V_15_15;

#line 1010 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1010 "prog_io_type_defn.m"
      {
#line 1010 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 0)));
#line 1010 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Args_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 1)));
#line 1010 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 2)));
#line 1010 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 1010 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1010 "prog_io_type_defn.m"
          {
#line 1010 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_13_13, (MR_Integer) 0)));
#line 1010 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_14_14, (MR_String) "mutable") == 0);
#line 1010 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1010 "prog_io_type_defn.m"
              {
#line 7397 "parse_tree.prog_io_type_defn.c"
                parse_tree__prog_io_type_defn__TypeCtorInfo_32_32 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1011 "prog_io_type_defn.m"
                {
#line 1011 "prog_io_type_defn.m"
                  mercury__varset__init_1_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_32_32, &parse_tree__prog_io_type_defn__VarSet_9);
                }
#line 1012 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_15_15 = (MR_Integer) -1;
#line 1012 "prog_io_type_defn.m"
                {
#line 1012 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_mutable__parse_mutable_decl_info_6_p_0(parse_tree__prog_io_type_defn__ModuleName_4, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__Args_7, parse_tree__prog_io_type_defn__Context_8, parse_tree__prog_io_type_defn__V_15_15, &parse_tree__prog_io_type_defn__MaybeMutableInfoPrime_10);
                }
#line 1010 "prog_io_type_defn.m"
              }
#line 1010 "prog_io_type_defn.m"
          }
#line 1010 "prog_io_type_defn.m"
      }
#line 1016 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1015 "prog_io_type_defn.m"
      *parse_tree__prog_io_type_defn__MaybeMutableInfo_6 = parse_tree__prog_io_type_defn__MaybeMutableInfoPrime_10;
#line 1016 "prog_io_type_defn.m"
    else
#line 1017 "prog_io_type_defn.m"
      {
#line 1017 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_12;
#line 1017 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 1017 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 1017 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_25_25;
#line 1017 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_30_30;

#line 1019 "prog_io_type_defn.m"
        {
#line 1019 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_25_25 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_5);
        }
#line 1019 "prog_io_type_defn.m"
        {
#line 1019 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1019 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_24_24, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 1019 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[144])));
#line 1019 "prog_io_type_defn.m"
        }
#line 1019 "prog_io_type_defn.m"
        {
#line 1019 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_23_23, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_24_24));
#line 1019 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1019 "prog_io_type_defn.m"
        }
#line 1018 "prog_io_type_defn.m"
        {
#line 1018 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1018 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1018 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1018 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_23_23));
#line 1018 "prog_io_type_defn.m"
        }
#line 1020 "prog_io_type_defn.m"
        {
#line 1020 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1020 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_12));
#line 1020 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1020 "prog_io_type_defn.m"
        }
#line 1020 "prog_io_type_defn.m"
        {
#line 1020 "prog_io_type_defn.m"
          MR_Word base;
#line 1020 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1020 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeMutableInfo_6 = base;
#line 1020 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_30_30));
#line 1020 "prog_io_type_defn.m"
        }
#line 1017 "prog_io_type_defn.m"
      }
#line 1016 "prog_io_type_defn.m"
  }
#line 1005 "prog_io_type_defn.m"
}

#line 996 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0_1(
#line 996 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 996 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 996 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2)
#line 996 "prog_io_type_defn.m"
{
#line 996 "prog_io_type_defn.m"
  {
#line 996 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 996 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv0_MaybeMutableInfo_6;

#line 996 "prog_io_type_defn.m"
    {
#line 996 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_mutable_decl_term_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1), &parse_tree__prog_io_type_defn__conv0_MaybeMutableInfo_6);
    }
#line 996 "prog_io_type_defn.m"
    *parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv0_MaybeMutableInfo_6));
#line 996 "prog_io_type_defn.m"
  }
#line 996 "prog_io_type_defn.m"
}

#line 982 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0(
#line 982 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_4,
#line 982 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5)
#line 982 "prog_io_type_defn.m"
{
#line 995 "prog_io_type_defn.m"
  {
#line 995 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 995 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeItems_6;
#line 986 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_15_15;
#line 986 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_16_16;
#line 986 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_7_7;
#line 986 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_8_8;

#line 986 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 986 "prog_io_type_defn.m"
      {
#line 986 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 0)));
#line 986 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 1)));
#line 986 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 2)));
#line 986 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_15_15)) == (MR_mktag((MR_Integer) 0)));
#line 986 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 986 "prog_io_type_defn.m"
          {
#line 986 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_15_15, (MR_Integer) 0)));
#line 986 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_16_16, (MR_String) "mutable") == 0);
#line 986 "prog_io_type_defn.m"
          }
#line 986 "prog_io_type_defn.m"
      }
#line 995 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 987 "prog_io_type_defn.m"
      {
#line 987 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeItem_9;

#line 987 "prog_io_type_defn.m"
        {
#line 987 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_mutable_decl_term_3_p_0(parse_tree__prog_io_type_defn__ModuleName_4, parse_tree__prog_io_type_defn__Term_5, &parse_tree__prog_io_type_defn__MaybeItem_9);
        }
#line 991 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeItem_9)) == (MR_mktag((MR_Integer) 0))))
#line 993 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeItems_6 = (MR_Word) parse_tree__prog_io_type_defn__MaybeItem_9;
#line 991 "prog_io_type_defn.m"
        else
#line 989 "prog_io_type_defn.m"
          {
#line 989 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Mutable_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItem_9, (MR_Integer) 0)));
#line 989 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_17_17;

#line 990 "prog_io_type_defn.m"
            {
#line 990 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 990 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Mutable_10));
#line 990 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 990 "prog_io_type_defn.m"
            }
#line 990 "prog_io_type_defn.m"
            {
#line 990 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeItems_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 990 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItems_6, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_17_17));
#line 990 "prog_io_type_defn.m"
            }
#line 989 "prog_io_type_defn.m"
          }
#line 987 "prog_io_type_defn.m"
      }
#line 995 "prog_io_type_defn.m"
    else
#line 997 "prog_io_type_defn.m"
      {
#line 997 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Terms_12;

#line 995 "prog_io_type_defn.m"
        {
#line 995 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_type_defn__Term_5, &parse_tree__prog_io_type_defn__Terms_12);
        }
#line 997 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
          {
#line 996 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_19_19;

#line 996 "prog_io_type_defn.m"
            {
#line 996 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 996 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_6[0]));
#line 996 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0_1));
#line 996 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 996 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__ModuleName_4));
#line 996 "prog_io_type_defn.m"
            }
#line 996 "prog_io_type_defn.m"
            {
#line 996 "prog_io_type_defn.m"
              parse_tree__prog_io_util__map_parser_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0, parse_tree__prog_io_type_defn__V_19_19, parse_tree__prog_io_type_defn__Terms_12, &parse_tree__prog_io_type_defn__MaybeItems_6);
            }
#line 996 "prog_io_type_defn.m"
          }
#line 997 "prog_io_type_defn.m"
        else
#line 999 "prog_io_type_defn.m"
          {
#line 999 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Spec_14;
#line 999 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_30_30;
#line 999 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_31_31;
#line 999 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_32_32;
#line 999 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_37_37;

#line 1001 "prog_io_type_defn.m"
            {
#line 1001 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_32_32 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_5);
            }
#line 1001 "prog_io_type_defn.m"
            {
#line 1001 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1001 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_32_32));
#line 1001 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[143])));
#line 1001 "prog_io_type_defn.m"
            }
#line 1001 "prog_io_type_defn.m"
            {
#line 1001 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1001 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_31_31));
#line 1001 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1001 "prog_io_type_defn.m"
            }
#line 1000 "prog_io_type_defn.m"
            {
#line 1000 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1000 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1000 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1000 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_30_30));
#line 1000 "prog_io_type_defn.m"
            }
#line 1002 "prog_io_type_defn.m"
            {
#line 1002 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1002 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_14));
#line 1002 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1002 "prog_io_type_defn.m"
            }
#line 1002 "prog_io_type_defn.m"
            {
#line 1002 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeItems_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1002 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeItems_6, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_37_37));
#line 1002 "prog_io_type_defn.m"
            }
#line 999 "prog_io_type_defn.m"
          }
#line 997 "prog_io_type_defn.m"
      }
#line 995 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeItems_6;
#line 995 "prog_io_type_defn.m"
  }
#line 982 "prog_io_type_defn.m"
}

#line 916 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_initialisation_is_3_f_0(
#line 916 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 916 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 916 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 916 "prog_io_type_defn.m"
{
#line 919 "prog_io_type_defn.m"
  {
#line 919 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 919 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 919 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result0_9;
#line 919 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result1_10;
#line 923 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;

#line 920 "prog_io_type_defn.m"
    {
#line 920 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__Result0_9 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__VarSet_6, (MR_String) "initialisation", parse_tree__prog_io_type_defn__Term_7);
    }
#line 923 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Result0_9)) == (MR_mktag((MR_Integer) 1)));
#line 923 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 923 "prog_io_type_defn.m"
      {
#line 923 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result0_9, (MR_Integer) 0)));
#line 923 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 923 "prog_io_type_defn.m"
      }
#line 927 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 925 "prog_io_type_defn.m"
      {
#line 925 "prog_io_type_defn.m"
        {
#line 925 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result1_10 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__VarSet_6, (MR_String) "initialization", parse_tree__prog_io_type_defn__Term_7);
        }
#line 925 "prog_io_type_defn.m"
      }
#line 927 "prog_io_type_defn.m"
    else
#line 928 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__Result1_10 = parse_tree__prog_io_type_defn__Result0_9;
#line 946 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Result1_10)) == (MR_mktag((MR_Integer) 0))))
#line 950 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__Result_8 = parse_tree__prog_io_type_defn__Result1_10;
#line 946 "prog_io_type_defn.m"
    else
#line 946 "prog_io_type_defn.m"
      {
#line 946 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result1_10, (MR_Integer) 0)));

#line 946 "prog_io_type_defn.m"
        if ((parse_tree__prog_io_type_defn__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 950 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = parse_tree__prog_io_type_defn__Result1_10;
#line 946 "prog_io_type_defn.m"
        else
#line 932 "prog_io_type_defn.m"
          {
#line 932 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__AutoInitSupported_12;

#line 933 "prog_io_type_defn.m"
            {
#line 933 "prog_io_type_defn.m"
              libs__globals__semipure_get_solver_auto_init_supported_1_p_0(&parse_tree__prog_io_type_defn__AutoInitSupported_12);
            }
#line 938 "prog_io_type_defn.m"
#line 938 "prog_io_type_defn.m"
            switch (parse_tree__prog_io_type_defn__AutoInitSupported_12) {
#line 938 "prog_io_type_defn.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 938 "prog_io_type_defn.m"
              case (MR_Integer) 0:
#line 939 "prog_io_type_defn.m"
                {
#line 939 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__Spec_14;
#line 939 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_33_33;
#line 939 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_34_34;
#line 939 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_35_35;
#line 939 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_40_40;

#line 943 "prog_io_type_defn.m"
                  {
#line 943 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_35_35 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
                  }
#line 943 "prog_io_type_defn.m"
                  {
#line 943 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 943 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_35_35));
#line 943 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[142])));
#line 943 "prog_io_type_defn.m"
                  }
#line 943 "prog_io_type_defn.m"
                  {
#line 943 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 943 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_34_34));
#line 943 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 943 "prog_io_type_defn.m"
                  }
#line 942 "prog_io_type_defn.m"
                  {
#line 942 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 942 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 942 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 942 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_33_33));
#line 942 "prog_io_type_defn.m"
                  }
#line 944 "prog_io_type_defn.m"
                  {
#line 944 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 944 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_14));
#line 944 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 944 "prog_io_type_defn.m"
                  }
#line 944 "prog_io_type_defn.m"
                  {
#line 944 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 944 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 944 "prog_io_type_defn.m"
                  }
#line 939 "prog_io_type_defn.m"
                }
#line 938 "prog_io_type_defn.m"
                break;
#line 938 "prog_io_type_defn.m"
              case (MR_Integer) 1:
#line 936 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__Result_8 = parse_tree__prog_io_type_defn__Result1_10;
#line 938 "prog_io_type_defn.m"
                break;
#line 938 "prog_io_type_defn.m"
            }
#line 932 "prog_io_type_defn.m"
          }
#line 946 "prog_io_type_defn.m"
      }
#line 919 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 919 "prog_io_type_defn.m"
  }
#line 916 "prog_io_type_defn.m"
}

#line 907 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(
#line 907 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_3)
#line 907 "prog_io_type_defn.m"
{
#line 909 "prog_io_type_defn.m"
  {
#line 909 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 909 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__2_2;
#line 910 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_5_5;
#line 910 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_6_6;
#line 910 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_7_7;
#line 910 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_4_4;

#line 910 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 910 "prog_io_type_defn.m"
      {
#line 910 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_3, (MR_Integer) 0)));
#line 910 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_3, (MR_Integer) 1)));
#line 910 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_3, (MR_Integer) 2)));
#line 910 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 910 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 910 "prog_io_type_defn.m"
          {
#line 910 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_5_5)) == (MR_mktag((MR_Integer) 0)));
#line 910 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 910 "prog_io_type_defn.m"
              {
#line 910 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_5_5, (MR_Integer) 0)));
#line 910 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_6_6, (MR_String) "type_is_abstract_noncanonical") == 0);
#line 910 "prog_io_type_defn.m"
              }
#line 910 "prog_io_type_defn.m"
          }
#line 910 "prog_io_type_defn.m"
      }
#line 909 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 911 "prog_io_type_defn.m"
      {
#line 911 "prog_io_type_defn.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 911 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[22]);
#line 911 "prog_io_type_defn.m"
      }
#line 909 "prog_io_type_defn.m"
    else
#line 913 "prog_io_type_defn.m"
      {
#line 913 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[23]);
#line 913 "prog_io_type_defn.m"
      }
#line 909 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__2_2;
#line 909 "prog_io_type_defn.m"
  }
#line 907 "prog_io_type_defn.m"
}

#line 783 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_type_decl_where_term_4_f_0(
#line 783 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_6,
#line 783 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_7,
#line 783 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_8,
#line 783 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm0_9)
#line 783 "prog_io_type_defn.m"
{
#line 790 "prog_io_type_defn.m"
  {
#line 790 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 790 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeWhereDetails_10;

#line 790 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 790 "prog_io_type_defn.m"
      {
#line 791 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__MaybeWhereDetails_10 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_4[1]);
#line 790 "prog_io_type_defn.m"
      }
#line 790 "prog_io_type_defn.m"
    else
#line 793 "prog_io_type_defn.m"
      {
#line 793 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm0_9, (MR_Integer) 0)));
#line 793 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_13;
#line 793 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeRepresentationIs_14;
#line 793 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeInitialisationIs_15;
#line 793 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeGroundIs_16;
#line 793 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeAnyIs_17;
#line 793 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeCStoreIs_18;
#line 793 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeEqualityIs_19;
#line 793 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeComparisonIs_20;
#line 793 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgIs_21;
#line 793 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeWhereEnd_22;
#line 793 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_25_25;
#line 793 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_27_27;
#line 793 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_31_31;
#line 793 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_33_33;
#line 793 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_37_37;
#line 793 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_41_41;
#line 793 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_45_45;
#line 793 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_49_49;
#line 793 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_53_53;

#line 796 "prog_io_type_defn.m"
        {
#line 796 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_where_attribute__ho10_4_p_0(&parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_13, parse_tree__prog_io_type_defn__MaybeTerm0_9, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_25_25);
        }
#line 798 "prog_io_type_defn.m"
        {
#line 798 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0((MR_String) "representation", parse_tree__prog_io_type_defn__VarSet_8, &parse_tree__prog_io_type_defn__MaybeRepresentationIs_14, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_25_25, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_27_27);
        }
#line 801 "prog_io_type_defn.m"
        {
#line 801 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_56_95_95_91_51_93_95_48_4_p_0(parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, &parse_tree__prog_io_type_defn__MaybeInitialisationIs_15, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_27_27, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_31_31);
        }
#line 804 "prog_io_type_defn.m"
        {
#line 804 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0((MR_String) "ground", &parse_tree__prog_io_type_defn__MaybeGroundIs_16, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_31_31, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_33_33);
        }
#line 807 "prog_io_type_defn.m"
        {
#line 807 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0((MR_String) "any", &parse_tree__prog_io_type_defn__MaybeAnyIs_17, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_33_33, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_37_37);
        }
#line 810 "prog_io_type_defn.m"
        {
#line 810 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_52_93_95_48_4_p_0((MR_String) "constraint_store", parse_tree__prog_io_type_defn__ModuleName_7, &parse_tree__prog_io_type_defn__MaybeCStoreIs_18, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_37_37, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_41_41);
        }
#line 813 "prog_io_type_defn.m"
        {
#line 813 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "equality", parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, &parse_tree__prog_io_type_defn__MaybeEqualityIs_19, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_41_41, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_45_45);
        }
#line 816 "prog_io_type_defn.m"
        {
#line 816 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_54_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "comparison", parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, &parse_tree__prog_io_type_defn__MaybeComparisonIs_20, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_45_45, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_49_49);
        }
#line 819 "prog_io_type_defn.m"
        {
#line 819 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "direct_arg", parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, &parse_tree__prog_io_type_defn__MaybeDirectArgIs_21, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_49_49, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_53_53);
        }
#line 822 "prog_io_type_defn.m"
        {
#line 822 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_where_end_2_p_0(parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_53_53, &parse_tree__prog_io_type_defn__MaybeWhereEnd_22);
        }
#line 824 "prog_io_type_defn.m"
        {
#line 824 "prog_io_type_defn.m"
          return parse_tree__prog_io_type_defn__MaybeWhereDetails_10 = parse_tree__prog_io_type_defn__make_maybe_where_details_12_f_0(parse_tree__prog_io_type_defn__IsSolverType_6, parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_13, parse_tree__prog_io_type_defn__MaybeRepresentationIs_14, parse_tree__prog_io_type_defn__MaybeInitialisationIs_15, parse_tree__prog_io_type_defn__MaybeGroundIs_16, parse_tree__prog_io_type_defn__MaybeAnyIs_17, parse_tree__prog_io_type_defn__MaybeCStoreIs_18, parse_tree__prog_io_type_defn__MaybeEqualityIs_19, parse_tree__prog_io_type_defn__MaybeComparisonIs_20, parse_tree__prog_io_type_defn__MaybeDirectArgIs_21, parse_tree__prog_io_type_defn__MaybeWhereEnd_22, parse_tree__prog_io_type_defn__Term0_11);
        }
#line 793 "prog_io_type_defn.m"
      }
#line 790 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeWhereDetails_10;
#line 790 "prog_io_type_defn.m"
  }
#line 783 "prog_io_type_defn.m"
}

#line 715 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_abstract_type_defn_7_p_0(
#line 715 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_8,
#line 715 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_9,
#line 715 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_10,
#line 715 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes0_11,
#line 715 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_12,
#line 715 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_13,
#line 715 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_14)
#line 715 "prog_io_type_defn.m"
{
#line 719 "prog_io_type_defn.m"
  {
#line 719 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 719 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_15;
#line 719 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__IsSolverType_16;
#line 719 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Attributes_17;
#line 1314 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_36;
#line 1312 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_37_37;
#line 1312 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_38_38;
#line 1312 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_35_35;

#line 720 "prog_io_type_defn.m"
    {
#line 720 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__HeadTerm_10, &parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_15);
    }
#line 1312 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Attributes0_11)) == (MR_mktag((MR_Integer) 1)));
#line 1312 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1312 "prog_io_type_defn.m"
      {
#line 1312 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Attributes0_11, (MR_Integer) 0)));
#line 1312 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Attributes0_11, (MR_Integer) 1)));
#line 1312 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_37_37, (MR_Integer) 0)));
#line 1312 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_37_37, (MR_Integer) 1)));
#line 1312 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1312 "prog_io_type_defn.m"
      }
#line 1314 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1313 "prog_io_type_defn.m"
      {
#line 1313 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Attributes_17 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_36;
#line 1313 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__IsSolverType_16 = (MR_Integer) 1;
#line 1313 "prog_io_type_defn.m"
      }
#line 1314 "prog_io_type_defn.m"
    else
#line 1315 "prog_io_type_defn.m"
      {
#line 1315 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__IsSolverType_16 = (MR_Integer) 0;
#line 1315 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Attributes_17 = parse_tree__prog_io_type_defn__Attributes0_11;
#line 1315 "prog_io_type_defn.m"
      }
#line 725 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_15)) == (MR_mktag((MR_Integer) 0))))
#line 723 "prog_io_type_defn.m"
      {
#line 723 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Specs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_15, (MR_Integer) 0)));

#line 724 "prog_io_type_defn.m"
        {
#line 724 "prog_io_type_defn.m"
          MR_Word base;
#line 724 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 724 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeItem_14 = base;
#line 724 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_18));
#line 724 "prog_io_type_defn.m"
        }
#line 723 "prog_io_type_defn.m"
      }
#line 725 "prog_io_type_defn.m"
    else
#line 726 "prog_io_type_defn.m"
      {
#line 726 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Name_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_15, (MR_Integer) 0)));
#line 726 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Params_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_15, (MR_Integer) 1)));
#line 726 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeVarSet_21;
#line 726 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeDefn_22;
#line 726 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__ItemTypeDefn_23;
#line 726 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Item_24;
#line 726 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeItem0_25;

#line 727 "prog_io_type_defn.m"
        {
#line 727 "prog_io_type_defn.m"
          mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_9, &parse_tree__prog_io_type_defn__TypeVarSet_21);
        }
#line 731 "prog_io_type_defn.m"
#line 731 "prog_io_type_defn.m"
        switch (parse_tree__prog_io_type_defn__IsSolverType_16) {
#line 731 "prog_io_type_defn.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 731 "prog_io_type_defn.m"
          case (MR_Integer) 0:
#line 729 "prog_io_type_defn.m"
            {
#line 730 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__TypeDefn_22 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_defn_scalar_common_2[19]);
#line 729 "prog_io_type_defn.m"
            }
#line 731 "prog_io_type_defn.m"
            break;
#line 731 "prog_io_type_defn.m"
          case (MR_Integer) 1:
#line 732 "prog_io_type_defn.m"
            {
#line 733 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__TypeDefn_22 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_defn_scalar_common_2[20]);
#line 732 "prog_io_type_defn.m"
            }
#line 731 "prog_io_type_defn.m"
            break;
#line 731 "prog_io_type_defn.m"
        }
#line 735 "prog_io_type_defn.m"
        {
#line 735 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__ItemTypeDefn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 735 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_23, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_19));
#line 735 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_23, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Params_20));
#line 735 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_23, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn_22));
#line 735 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_23, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeVarSet_21));
#line 735 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_23, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_12));
#line 735 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_23, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__SeqNum_13));
#line 735 "prog_io_type_defn.m"
        }
#line 737 "prog_io_type_defn.m"
        {
#line 737 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Item_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 737 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__Item_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 737 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__Item_24, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__ItemTypeDefn_23));
#line 737 "prog_io_type_defn.m"
        }
#line 738 "prog_io_type_defn.m"
        {
#line 738 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeItem0_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 738 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItem0_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Item_24));
#line 738 "prog_io_type_defn.m"
        }
#line 739 "prog_io_type_defn.m"
        {
#line 739 "prog_io_type_defn.m"
          parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_type_defn__MaybeItem0_25, parse_tree__prog_io_type_defn__Attributes_17, parse_tree__prog_io_type_defn__MaybeItem_14);
#line 739 "prog_io_type_defn.m"
          return;
        }
#line 726 "prog_io_type_defn.m"
      }
#line 719 "prog_io_type_defn.m"
  }
#line 715 "prog_io_type_defn.m"
}

#line 679 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_1(
#line 679 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 679 "prog_io_type_defn.m"
{
#line 679 "prog_io_type_defn.m"
  {
#line 679 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 679 "prog_io_type_defn.m"
    MR_builtin_longjmp((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__commit_0, 1);
#line 679 "prog_io_type_defn.m"
  }
#line 679 "prog_io_type_defn.m"
}

#line 679 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_2(
#line 679 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 679 "prog_io_type_defn.m"
{
#line 679 "prog_io_type_defn.m"
  {
#line 679 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 679 "prog_io_type_defn.m"
    {
#line 681 "prog_io_type_defn.m"
      {
#line 681 "prog_io_type_defn.m"
        (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], ((MR_Box) ((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__Var_25)), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__Params_23);
      }
#line 681 "prog_io_type_defn.m"
      (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__succeeded = !((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__succeeded);
#line 681 "prog_io_type_defn.m"
      if ((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__succeeded)
#line 681 "prog_io_type_defn.m"
        {
#line 681 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_1(parse_tree__prog_io_type_defn__env_ptr);
#line 681 "prog_io_type_defn.m"
          return;
        }
#line 679 "prog_io_type_defn.m"
    }
#line 679 "prog_io_type_defn.m"
  }
#line 679 "prog_io_type_defn.m"
}

#line 679 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_3(
#line 679 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 679 "prog_io_type_defn.m"
{
#line 679 "prog_io_type_defn.m"
  {
#line 679 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 679 "prog_io_type_defn.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__commit_0) == 0)
#line 679 "prog_io_type_defn.m"
      {
#line 679 "prog_io_type_defn.m"
        {
#line 679 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__RepnType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__SolverTypeDetails_19, (MR_Integer) 0)));
#line 679 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__SolverTypeDetails_19, (MR_Integer) 1)));
#line 679 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__SolverTypeDetails_19, (MR_Integer) 2)));
#line 679 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__SolverTypeDetails_19, (MR_Integer) 3)));
#line 679 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__SolverTypeDetails_19, (MR_Integer) 4)));

#line 680 "prog_io_type_defn.m"
          {
#line 680 "prog_io_type_defn.m"
            parse_tree__prog_type__type_contains_var_2_p_0(parse_tree__prog_io_type_defn__RepnType_24, &(parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__Var_25, parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_2, parse_tree__prog_io_type_defn__env_ptr);
          }
#line 679 "prog_io_type_defn.m"
        }
#line 679 "prog_io_type_defn.m"
        (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__succeeded = MR_FALSE;
#line 679 "prog_io_type_defn.m"
      }
#line 679 "prog_io_type_defn.m"
    else
#line 679 "prog_io_type_defn.m"
      (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__succeeded = MR_TRUE;
#line 679 "prog_io_type_defn.m"
  }
#line 679 "prog_io_type_defn.m"
}

#line 663 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0(
#line 663 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_10,
#line 663 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_11,
#line 663 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_12,
#line 663 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_13,
#line 663 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeUserEqComp_14,
#line 663 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes_15,
#line 663 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_16,
#line 663 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_17,
#line 663 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_18)
#line 663 "prog_io_type_defn.m"
{
#line 663 "prog_io_type_defn.m"
  {
#line 663 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0_s parse_tree__prog_io_type_defn__env;

#line 671 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 703 "prog_io_type_defn.m"
      {
#line 703 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 703 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 703 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_43_43;
#line 703 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_48_48;
#line 703 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_75;

#line 706 "prog_io_type_defn.m"
        {
#line 706 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_43_43 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadTerm_12);
        }
#line 706 "prog_io_type_defn.m"
        {
#line 706 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 706 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_43_43));
#line 706 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[139])));
#line 706 "prog_io_type_defn.m"
        }
#line 706 "prog_io_type_defn.m"
        {
#line 706 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 706 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 706 "prog_io_type_defn.m"
        }
#line 705 "prog_io_type_defn.m"
        {
#line 705 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 705 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 705 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 705 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_75, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 705 "prog_io_type_defn.m"
        }
#line 707 "prog_io_type_defn.m"
        {
#line 707 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_75));
#line 707 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 707 "prog_io_type_defn.m"
        }
#line 707 "prog_io_type_defn.m"
        {
#line 707 "prog_io_type_defn.m"
          MR_Word base;
#line 707 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 707 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeItem_18 = base;
#line 707 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_48_48));
#line 707 "prog_io_type_defn.m"
        }
#line 703 "prog_io_type_defn.m"
      }
#line 671 "prog_io_type_defn.m"
    else
#line 671 "prog_io_type_defn.m"
      {
#line 671 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeNameParams_20;

#line 671 "prog_io_type_defn.m"
        (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__SolverTypeDetails_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_13, (MR_Integer) 0)));
#line 672 "prog_io_type_defn.m"
        {
#line 672 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(parse_tree__prog_io_type_defn__ModuleName_10, parse_tree__prog_io_type_defn__VarSet_11, parse_tree__prog_io_type_defn__HeadTerm_12, &parse_tree__prog_io_type_defn__MaybeNameParams_20);
        }
#line 676 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeNameParams_20)) == (MR_mktag((MR_Integer) 0))))
#line 674 "prog_io_type_defn.m"
          {
#line 674 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Specs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeNameParams_20, (MR_Integer) 0)));

#line 675 "prog_io_type_defn.m"
            {
#line 675 "prog_io_type_defn.m"
              MR_Word base;
#line 675 "prog_io_type_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 675 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeItem_18 = base;
#line 675 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_21));
#line 675 "prog_io_type_defn.m"
            }
#line 674 "prog_io_type_defn.m"
          }
#line 676 "prog_io_type_defn.m"
        else
#line 677 "prog_io_type_defn.m"
          {
#line 677 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Name_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameParams_20, (MR_Integer) 0)));

#line 677 "prog_io_type_defn.m"
            (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__Params_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameParams_20, (MR_Integer) 1)));
#line 679 "prog_io_type_defn.m"
            {
#line 679 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_3(&parse_tree__prog_io_type_defn__env);
            }
#line 691 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__succeeded)
#line 683 "prog_io_type_defn.m"
              {
#line 683 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_81_81 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 683 "prog_io_type_defn.m"
                MR_String parse_tree__prog_io_type_defn__HeadTermStr_26;
#line 683 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Pieces_27;
#line 683 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_28;
#line 683 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 683 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_55_55;
#line 683 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_56_56;
#line 683 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_65_65;
#line 683 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_66_66;
#line 683 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_67_67;
#line 683 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_68_68;
#line 683 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_69_69;
#line 683 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_72_72;

#line 683 "prog_io_type_defn.m"
                {
#line 683 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__HeadTermStr_26 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_81_81, parse_tree__prog_io_type_defn__VarSet_11, parse_tree__prog_io_type_defn__HeadTerm_12);
                }
#line 686 "prog_io_type_defn.m"
                {
#line 686 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 686 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__HeadTermStr_26));
#line 686 "prog_io_type_defn.m"
                }
#line 686 "prog_io_type_defn.m"
                {
#line 686 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_56_56));
#line 686 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[21])));
#line 686 "prog_io_type_defn.m"
                }
#line 685 "prog_io_type_defn.m"
                {
#line 685 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[141])));
#line 685 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_55_55));
#line 685 "prog_io_type_defn.m"
                }
#line 684 "prog_io_type_defn.m"
                {
#line 684 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Pieces_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 684 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[140])));
#line 684 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_27, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_52_52));
#line 684 "prog_io_type_defn.m"
                }
#line 688 "prog_io_type_defn.m"
                {
#line 688 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_67_67 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_81_81, parse_tree__prog_io_type_defn__HeadTerm_12);
                }
#line 689 "prog_io_type_defn.m"
                {
#line 689 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 689 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_27));
#line 689 "prog_io_type_defn.m"
                }
#line 689 "prog_io_type_defn.m"
                {
#line 689 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_69_69));
#line 689 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 689 "prog_io_type_defn.m"
                }
#line 688 "prog_io_type_defn.m"
                {
#line 688 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 688 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_67_67));
#line 688 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_66_66, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_68_68));
#line 688 "prog_io_type_defn.m"
                }
#line 689 "prog_io_type_defn.m"
                {
#line 689 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_66_66));
#line 689 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 689 "prog_io_type_defn.m"
                }
#line 687 "prog_io_type_defn.m"
                {
#line 687 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 687 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 687 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 687 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_28, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_65_65));
#line 687 "prog_io_type_defn.m"
                }
#line 690 "prog_io_type_defn.m"
                {
#line 690 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 690 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_28));
#line 690 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 690 "prog_io_type_defn.m"
                }
#line 690 "prog_io_type_defn.m"
                {
#line 690 "prog_io_type_defn.m"
                  MR_Word base;
#line 690 "prog_io_type_defn.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 690 "prog_io_type_defn.m"
                  *parse_tree__prog_io_type_defn__MaybeItem_18 = base;
#line 690 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_72_72));
#line 690 "prog_io_type_defn.m"
                }
#line 683 "prog_io_type_defn.m"
              }
#line 691 "prog_io_type_defn.m"
            else
#line 692 "prog_io_type_defn.m"
              {
#line 692 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeVarSet_29;
#line 692 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeDefn_30;
#line 692 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ItemTypeDefn_31;
#line 692 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Item_32;
#line 692 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeItem0_33;

#line 692 "prog_io_type_defn.m"
                {
#line 692 "prog_io_type_defn.m"
                  mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_11, &parse_tree__prog_io_type_defn__TypeVarSet_29);
                }
#line 693 "prog_io_type_defn.m"
                {
#line 693 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__TypeDefn_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 693 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__TypeDefn_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 693 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__TypeDefn_30, 1) = ((MR_Box) ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__SolverTypeDetails_19));
#line 693 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__TypeDefn_30, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeUserEqComp_14));
#line 693 "prog_io_type_defn.m"
                }
#line 695 "prog_io_type_defn.m"
                {
#line 695 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__ItemTypeDefn_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 695 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_31, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_22));
#line 695 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_31, 1) = ((MR_Box) ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__Params_23));
#line 695 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_31, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn_30));
#line 695 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_31, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeVarSet_29));
#line 695 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_31, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_16));
#line 695 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_31, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__SeqNum_17));
#line 695 "prog_io_type_defn.m"
                }
#line 697 "prog_io_type_defn.m"
                {
#line 697 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Item_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__Item_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 697 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__Item_32, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__ItemTypeDefn_31));
#line 697 "prog_io_type_defn.m"
                }
#line 698 "prog_io_type_defn.m"
                {
#line 698 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeItem0_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 698 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItem0_33, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Item_32));
#line 698 "prog_io_type_defn.m"
                }
#line 699 "prog_io_type_defn.m"
                {
#line 699 "prog_io_type_defn.m"
                  parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_type_defn__MaybeItem0_33, parse_tree__prog_io_type_defn__Attributes_15, parse_tree__prog_io_type_defn__MaybeItem_18);
#line 699 "prog_io_type_defn.m"
                  return;
                }
#line 692 "prog_io_type_defn.m"
              }
#line 677 "prog_io_type_defn.m"
          }
#line 671 "prog_io_type_defn.m"
      }
#line 663 "prog_io_type_defn.m"
  }
#line 663 "prog_io_type_defn.m"
}

#line 621 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_type_is_abstract_enum_7_p_0(
#line 621 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_8,
#line 621 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_9,
#line 621 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_10,
#line 621 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_11,
#line 621 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_12,
#line 621 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_13,
#line 621 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_14)
#line 621 "prog_io_type_defn.m"
{
#line 625 "prog_io_type_defn.m"
  {
#line 625 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 625 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeNameParams_15;

#line 626 "prog_io_type_defn.m"
    {
#line 626 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__HeadTerm_10, &parse_tree__prog_io_type_defn__MaybeNameParams_15);
    }
#line 630 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeNameParams_15)) == (MR_mktag((MR_Integer) 0))))
#line 628 "prog_io_type_defn.m"
      {
#line 628 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Specs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeNameParams_15, (MR_Integer) 0)));

#line 629 "prog_io_type_defn.m"
        {
#line 629 "prog_io_type_defn.m"
          MR_Word base;
#line 629 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 629 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeItem_14 = base;
#line 629 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_16));
#line 629 "prog_io_type_defn.m"
        }
#line 628 "prog_io_type_defn.m"
      }
#line 630 "prog_io_type_defn.m"
    else
#line 631 "prog_io_type_defn.m"
      {
#line 631 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Name_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameParams_15, (MR_Integer) 0)));
#line 631 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Params_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameParams_15, (MR_Integer) 1)));
#line 654 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Args_19;
#line 633 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_30_30;
#line 633 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_31_31;
#line 633 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;

#line 633 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__BodyTerm_11)) == (MR_mktag((MR_Integer) 0)));
#line 633 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 633 "prog_io_type_defn.m"
          {
#line 633 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BodyTerm_11, (MR_Integer) 0)));
#line 633 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Args_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BodyTerm_11, (MR_Integer) 1)));
#line 633 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BodyTerm_11, (MR_Integer) 2)));
#line 633 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 633 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 633 "prog_io_type_defn.m"
              {
#line 633 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_30_30, (MR_Integer) 0)));
#line 633 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_31_31, (MR_String) "type_is_abstract_enum") == 0);
#line 633 "prog_io_type_defn.m"
              }
#line 633 "prog_io_type_defn.m"
          }
#line 654 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 647 "prog_io_type_defn.m"
          {
#line 647 "prog_io_type_defn.m"
            MR_Integer parse_tree__prog_io_type_defn__NumBits_22;
#line 637 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Arg_21;
#line 637 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_32_32;
#line 637 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_33_33;
#line 637 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_34_34;
#line 638 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_23_23;

#line 637 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Args_19)) == (MR_mktag((MR_Integer) 1)));
#line 637 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 637 "prog_io_type_defn.m"
              {
#line 637 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__Arg_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Args_19, (MR_Integer) 0)));
#line 637 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Args_19, (MR_Integer) 1)));
#line 637 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 637 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 637 "prog_io_type_defn.m"
                  {
#line 638 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Arg_21)) == (MR_mktag((MR_Integer) 0)));
#line 638 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 638 "prog_io_type_defn.m"
                      {
#line 638 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_21, (MR_Integer) 0)));
#line 638 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_21, (MR_Integer) 1)));
#line 638 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_21, (MR_Integer) 2)));
#line 638 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 637 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 637 "prog_io_type_defn.m"
                          {
#line 638 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 638 "prog_io_type_defn.m"
                            if (parse_tree__prog_io_type_defn__succeeded)
#line 638 "prog_io_type_defn.m"
                              parse_tree__prog_io_type_defn__NumBits_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_33_33, (MR_Integer) 0)));
#line 637 "prog_io_type_defn.m"
                          }
#line 638 "prog_io_type_defn.m"
                      }
#line 637 "prog_io_type_defn.m"
                  }
#line 637 "prog_io_type_defn.m"
              }
#line 647 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 640 "prog_io_type_defn.m"
              {
#line 640 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeVarSet_24;
#line 640 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeDefn_25;
#line 640 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ItemTypeDefn_26;
#line 640 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Item_27;
#line 640 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_35_35;

#line 640 "prog_io_type_defn.m"
                {
#line 640 "prog_io_type_defn.m"
                  mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_9, &parse_tree__prog_io_type_defn__TypeVarSet_24);
                }
#line 642 "prog_io_type_defn.m"
                {
#line 642 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 642 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__NumBits_22));
#line 642 "prog_io_type_defn.m"
                }
#line 641 "prog_io_type_defn.m"
                {
#line 641 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__TypeDefn_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 641 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(2), parse_tree__prog_io_type_defn__TypeDefn_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_35_35));
#line 641 "prog_io_type_defn.m"
                }
#line 643 "prog_io_type_defn.m"
                {
#line 643 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__ItemTypeDefn_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 643 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_17));
#line 643 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_26, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Params_18));
#line 643 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_26, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn_25));
#line 643 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_26, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeVarSet_24));
#line 643 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_26, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_12));
#line 643 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_26, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__SeqNum_13));
#line 643 "prog_io_type_defn.m"
                }
#line 645 "prog_io_type_defn.m"
                {
#line 645 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Item_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__Item_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 645 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__Item_27, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__ItemTypeDefn_26));
#line 645 "prog_io_type_defn.m"
                }
#line 646 "prog_io_type_defn.m"
                {
#line 646 "prog_io_type_defn.m"
                  MR_Word base;
#line 646 "prog_io_type_defn.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 646 "prog_io_type_defn.m"
                  *parse_tree__prog_io_type_defn__MaybeItem_14 = base;
#line 646 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Item_27));
#line 646 "prog_io_type_defn.m"
                }
#line 640 "prog_io_type_defn.m"
              }
#line 647 "prog_io_type_defn.m"
            else
#line 649 "prog_io_type_defn.m"
              {
#line 649 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_29;
#line 649 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_46_46;
#line 649 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_47_47;
#line 649 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_52_52;

#line 651 "prog_io_type_defn.m"
                {
#line 651 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 651 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_12));
#line 651 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[137])));
#line 651 "prog_io_type_defn.m"
                }
#line 651 "prog_io_type_defn.m"
                {
#line 651 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 651 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 651 "prog_io_type_defn.m"
                }
#line 650 "prog_io_type_defn.m"
                {
#line 650 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 650 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 650 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 650 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_29, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_46_46));
#line 650 "prog_io_type_defn.m"
                }
#line 652 "prog_io_type_defn.m"
                {
#line 652 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_29));
#line 652 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 652 "prog_io_type_defn.m"
                }
#line 652 "prog_io_type_defn.m"
                {
#line 652 "prog_io_type_defn.m"
                  MR_Word base;
#line 652 "prog_io_type_defn.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 652 "prog_io_type_defn.m"
                  *parse_tree__prog_io_type_defn__MaybeItem_14 = base;
#line 652 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_52_52));
#line 652 "prog_io_type_defn.m"
                }
#line 649 "prog_io_type_defn.m"
              }
#line 647 "prog_io_type_defn.m"
          }
#line 654 "prog_io_type_defn.m"
        else
#line 656 "prog_io_type_defn.m"
          {
#line 656 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_67_67;
#line 656 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_68_68;
#line 656 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_73_73;
#line 656 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Spec_76;

#line 658 "prog_io_type_defn.m"
            {
#line 658 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 658 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_12));
#line 658 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[138])));
#line 658 "prog_io_type_defn.m"
            }
#line 658 "prog_io_type_defn.m"
            {
#line 658 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 658 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_68_68));
#line 658 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 658 "prog_io_type_defn.m"
            }
#line 657 "prog_io_type_defn.m"
            {
#line 657 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Spec_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 657 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 657 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 657 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_76, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_67_67));
#line 657 "prog_io_type_defn.m"
            }
#line 659 "prog_io_type_defn.m"
            {
#line 659 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_76));
#line 659 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 659 "prog_io_type_defn.m"
            }
#line 659 "prog_io_type_defn.m"
            {
#line 659 "prog_io_type_defn.m"
              MR_Word base;
#line 659 "prog_io_type_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 659 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeItem_14 = base;
#line 659 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_73_73));
#line 659 "prog_io_type_defn.m"
            }
#line 656 "prog_io_type_defn.m"
          }
#line 631 "prog_io_type_defn.m"
      }
#line 625 "prog_io_type_defn.m"
  }
#line 621 "prog_io_type_defn.m"
}

#line 582 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_block_type_defn_8_p_0(
#line 582 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_9,
#line 582 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_10,
#line 582 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_11,
#line 582 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_12,
#line 582 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes0_13,
#line 582 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_14,
#line 582 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_15,
#line 582 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_16)
#line 582 "prog_io_type_defn.m"
{
#line 9253 "parse_tree.prog_io_type_defn.c"
  {
#line 9255 "parse_tree.prog_io_type_defn.c"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Attributes0_13)) == (MR_mktag((MR_Integer) 1)));
#line 9257 "parse_tree.prog_io_type_defn.c"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_60;
#line 1312 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_61_61;
#line 1312 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_62_62;
#line 1312 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_59_59;

#line 1312 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1312 "prog_io_type_defn.m"
      {
#line 1312 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Attributes0_13, (MR_Integer) 0)));
#line 1312 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Attributes0_13, (MR_Integer) 1)));
#line 1312 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_61_61, (MR_Integer) 0)));
#line 1312 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_61_61, (MR_Integer) 1)));
#line 1312 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1312 "prog_io_type_defn.m"
      }
#line 9282 "parse_tree.prog_io_type_defn.c"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 9284 "parse_tree.prog_io_type_defn.c"
      {
#line 9286 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__MaybeWhere_19;
#line 9288 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__V_28_28;

#line 596 "prog_io_type_defn.m"
        {
#line 596 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 596 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__BodyTerm_12));
#line 596 "prog_io_type_defn.m"
        }
#line 595 "prog_io_type_defn.m"
        {
#line 595 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeWhere_19 = parse_tree__prog_io_type_defn__parse_type_decl_where_term_4_f_0((MR_Integer) 1, parse_tree__prog_io_type_defn__ModuleName_9, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__V_28_28);
        }
#line 600 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeWhere_19)) == (MR_mktag((MR_Integer) 0))))
#line 598 "prog_io_type_defn.m"
          {
#line 598 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Specs_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhere_19, (MR_Integer) 0)));

#line 599 "prog_io_type_defn.m"
            {
#line 599 "prog_io_type_defn.m"
              MR_Word base;
#line 599 "prog_io_type_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 599 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeItem_16 = base;
#line 599 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_20));
#line 599 "prog_io_type_defn.m"
            }
#line 598 "prog_io_type_defn.m"
          }
#line 600 "prog_io_type_defn.m"
        else
#line 602 "prog_io_type_defn.m"
          {
#line 602 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_19, (MR_Integer) 0)));
#line 602 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__MaybeUserEqComp_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_19, (MR_Integer) 1)));
#line 602 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgCtors_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_19, (MR_Integer) 2)));

#line 612 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__MaybeDirectArgCtors_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 614 "prog_io_type_defn.m"
              {
#line 614 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0(parse_tree__prog_io_type_defn__ModuleName_9, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__HeadTerm_11, parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_21, parse_tree__prog_io_type_defn__MaybeUserEqComp_22, parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_60, parse_tree__prog_io_type_defn__Context_14, parse_tree__prog_io_type_defn__SeqNum_15, parse_tree__prog_io_type_defn__MaybeItem_16);
#line 614 "prog_io_type_defn.m"
                return;
              }
#line 612 "prog_io_type_defn.m"
            else
#line 604 "prog_io_type_defn.m"
              {
#line 604 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_26;
#line 604 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_45_45;
#line 604 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_46_46;
#line 604 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_47_47;
#line 604 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_52_52;

#line 609 "prog_io_type_defn.m"
                {
#line 609 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_47_47 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadTerm_11);
                }
#line 609 "prog_io_type_defn.m"
                {
#line 609 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 609 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 609 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[136])));
#line 609 "prog_io_type_defn.m"
                }
#line 610 "prog_io_type_defn.m"
                {
#line 610 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 610 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_46_46));
#line 610 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 610 "prog_io_type_defn.m"
                }
#line 608 "prog_io_type_defn.m"
                {
#line 608 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 608 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 608 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 608 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_26, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_45_45));
#line 608 "prog_io_type_defn.m"
                }
#line 611 "prog_io_type_defn.m"
                {
#line 611 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_26));
#line 611 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 611 "prog_io_type_defn.m"
                }
#line 611 "prog_io_type_defn.m"
                {
#line 611 "prog_io_type_defn.m"
                  MR_Word base;
#line 611 "prog_io_type_defn.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 611 "prog_io_type_defn.m"
                  *parse_tree__prog_io_type_defn__MaybeItem_16 = base;
#line 611 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_52_52));
#line 611 "prog_io_type_defn.m"
                }
#line 604 "prog_io_type_defn.m"
              }
#line 602 "prog_io_type_defn.m"
          }
#line 9423 "parse_tree.prog_io_type_defn.c"
      }
#line 9425 "parse_tree.prog_io_type_defn.c"
    else
#line 591 "prog_io_type_defn.m"
      {
#line 591 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__parse_where_type_is_abstract_enum_7_p_0(parse_tree__prog_io_type_defn__ModuleName_9, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__HeadTerm_11, parse_tree__prog_io_type_defn__BodyTerm_12, parse_tree__prog_io_type_defn__Context_14, parse_tree__prog_io_type_defn__SeqNum_15, parse_tree__prog_io_type_defn__MaybeItem_16);
#line 591 "prog_io_type_defn.m"
        return;
      }
#line 9434 "parse_tree.prog_io_type_defn.c"
  }
#line 582 "prog_io_type_defn.m"
}

#line 518 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__find_constructor_4_p_0(
#line 518 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 518 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__SymName_7,
#line 518 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__Arity_8,
#line 518 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Ctor_9)
#line 518 "prog_io_type_defn.m"
{
#line 521 "prog_io_type_defn.m"
  while (MR_TRUE)
#line 521 "prog_io_type_defn.m"
    {
#line 521 "prog_io_type_defn.m"
      /* tailcall optimized into a loop */
#line 521 "prog_io_type_defn.m"
      {
#line 521 "prog_io_type_defn.m"
        MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 521 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__H_5;
#line 521 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__T_6;
#line 522 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_14_14;
#line 522 "prog_io_type_defn.m"
        MR_Integer parse_tree__prog_io_type_defn__V_15_15;
#line 522 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_10_10;
#line 522 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_11_11;
#line 522 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn___Args_12;
#line 522 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_13_13;

#line 521 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 521 "prog_io_type_defn.m"
          {
#line 521 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__H_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__1_1, (MR_Integer) 0)));
#line 521 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__1_1, (MR_Integer) 1)));
#line 522 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__H_5, (MR_Integer) 0)));
#line 522 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__H_5, (MR_Integer) 1)));
#line 522 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__H_5, (MR_Integer) 2)));
#line 522 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn___Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__H_5, (MR_Integer) 3)));
#line 522 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__H_5, (MR_Integer) 4)));
#line 522 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__H_5, (MR_Integer) 5)));
#line 522 "prog_io_type_defn.m"
            {
#line 522 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_type_defn__SymName_7, parse_tree__prog_io_type_defn__V_14_14);
            }
#line 522 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 522 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__Arity_8 == parse_tree__prog_io_type_defn__V_15_15);
#line 524 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 523 "prog_io_type_defn.m"
              {
#line 523 "prog_io_type_defn.m"
                *parse_tree__prog_io_type_defn__Ctor_9 = parse_tree__prog_io_type_defn__H_5;
#line 523 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = MR_TRUE;
#line 523 "prog_io_type_defn.m"
              }
#line 524 "prog_io_type_defn.m"
            else
#line 525 "prog_io_type_defn.m"
              {
#line 525 "prog_io_type_defn.m"
                /* direct tailcall eliminated */
#line 525 "prog_io_type_defn.m"
                {
#line 525 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__HeadVar__1__tmp_copy_1 = parse_tree__prog_io_type_defn__T_6;

#line 525 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__HeadVar__1_1 = parse_tree__prog_io_type_defn__HeadVar__1__tmp_copy_1;
#line 525 "prog_io_type_defn.m"
                }
#line 525 "prog_io_type_defn.m"
                continue;
#line 525 "prog_io_type_defn.m"
              }
#line 521 "prog_io_type_defn.m"
          }
#line 521 "prog_io_type_defn.m"
        return parse_tree__prog_io_type_defn__succeeded;
#line 521 "prog_io_type_defn.m"
      }
#line 521 "prog_io_type_defn.m"
      break;
#line 521 "prog_io_type_defn.m"
    }
#line 518 "prog_io_type_defn.m"
}

#line 478 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__check_direct_arg_ctors_5_p_0(
#line 478 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 478 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_2,
#line 478 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3,
#line 478 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4,
#line 478 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_5)
#line 478 "prog_io_type_defn.m"
{
#line 482 "prog_io_type_defn.m"
  while (MR_TRUE)
#line 482 "prog_io_type_defn.m"
    {
#line 482 "prog_io_type_defn.m"
      /* tailcall optimized into a loop */
#line 482 "prog_io_type_defn.m"
      {
#line 482 "prog_io_type_defn.m"
        MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 482 "prog_io_type_defn.m"
        if ((parse_tree__prog_io_type_defn__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 482 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_5 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4;
#line 482 "prog_io_type_defn.m"
        else
#line 484 "prog_io_type_defn.m"
          {
#line 484 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__DirectArgCtor_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__2_2, (MR_Integer) 0)));
#line 484 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__DirectArgCtors_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__2_2, (MR_Integer) 1)));
#line 484 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__DirectArgCtor_12, (MR_Integer) 0)));
#line 484 "prog_io_type_defn.m"
            MR_Integer parse_tree__prog_io_type_defn__Arity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__DirectArgCtor_12, (MR_Integer) 1)));
#line 484 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54;
#line 507 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Ctor_18;

#line 486 "prog_io_type_defn.m"
            {
#line 486 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_type_defn__find_constructor_4_p_0(parse_tree__prog_io_type_defn__HeadVar__1_1, parse_tree__prog_io_type_defn__SymName_16, parse_tree__prog_io_type_defn__Arity_17, &parse_tree__prog_io_type_defn__Ctor_18);
            }
#line 507 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 488 "prog_io_type_defn.m"
              {
#line 488 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ExistQVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 0)));
#line 487 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn___Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 1)));
#line 487 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn___SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 2)));
#line 487 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn___Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 3)));
#line 487 "prog_io_type_defn.m"
                MR_Integer parse_tree__prog_io_type_defn___Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 4)));
#line 487 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn___Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 5)));

#line 489 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__Arity_17 == (MR_Integer) 1);
#line 489 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = !(parse_tree__prog_io_type_defn__succeeded);
#line 496 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 492 "prog_io_type_defn.m"
                  {
#line 492 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Spec_26;
#line 492 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_47_47;
#line 492 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_48_48;
#line 492 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_49_49;

#line 494 "prog_io_type_defn.m"
                    {
#line 494 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_49_49 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadVar__3_3);
                    }
#line 494 "prog_io_type_defn.m"
                    {
#line 494 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 494 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_49_49));
#line 494 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[132])));
#line 494 "prog_io_type_defn.m"
                    }
#line 494 "prog_io_type_defn.m"
                    {
#line 494 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 494 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_48_48));
#line 494 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 494 "prog_io_type_defn.m"
                    }
#line 493 "prog_io_type_defn.m"
                    {
#line 493 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 493 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 493 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 493 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_26, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 493 "prog_io_type_defn.m"
                    }
#line 495 "prog_io_type_defn.m"
                    {
#line 495 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_26));
#line 495 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4));
#line 495 "prog_io_type_defn.m"
                    }
#line 492 "prog_io_type_defn.m"
                  }
#line 496 "prog_io_type_defn.m"
                else
#line 504 "prog_io_type_defn.m"
                  {
#line 496 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_27_27;
#line 496 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_28_28;

#line 496 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__ExistQVars_19)) == (MR_mktag((MR_Integer) 1)));
#line 496 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 496 "prog_io_type_defn.m"
                      {
#line 496 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__ExistQVars_19, (MR_Integer) 0)));
#line 496 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__ExistQVars_19, (MR_Integer) 1)));
#line 500 "prog_io_type_defn.m"
                        {
#line 500 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_57_57;
#line 500 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_60_60;
#line 500 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_63_63;
#line 500 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_64_64;
#line 500 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_73_73;
#line 500 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_74_74;
#line 500 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_75_75;
#line 500 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_76_76;
#line 500 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_77_77;
#line 500 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__Pieces_108;
#line 500 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__Spec_109;

#line 499 "prog_io_type_defn.m"
                          {
#line 499 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 499 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 499 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_64_64, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__DirectArgCtor_12));
#line 499 "prog_io_type_defn.m"
                          }
#line 499 "prog_io_type_defn.m"
                          {
#line 499 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 499 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_64_64));
#line 499 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[54])));
#line 499 "prog_io_type_defn.m"
                          }
#line 498 "prog_io_type_defn.m"
                          {
#line 498 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 498 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[134])));
#line 498 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_63_63));
#line 498 "prog_io_type_defn.m"
                          }
#line 497 "prog_io_type_defn.m"
                          {
#line 497 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 497 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_defn_scalar_common_2[2])));
#line 497 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_60_60));
#line 497 "prog_io_type_defn.m"
                          }
#line 497 "prog_io_type_defn.m"
                          {
#line 497 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__Pieces_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 497 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_108, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[133])));
#line 497 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_108, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_57_57));
#line 497 "prog_io_type_defn.m"
                          }
#line 502 "prog_io_type_defn.m"
                          {
#line 502 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_75_75 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadVar__3_3);
                          }
#line 502 "prog_io_type_defn.m"
                          {
#line 502 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 502 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_108));
#line 502 "prog_io_type_defn.m"
                          }
#line 502 "prog_io_type_defn.m"
                          {
#line 502 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_77_77));
#line 502 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 502 "prog_io_type_defn.m"
                          }
#line 502 "prog_io_type_defn.m"
                          {
#line 502 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 502 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_75_75));
#line 502 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_74_74, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_76_76));
#line 502 "prog_io_type_defn.m"
                          }
#line 502 "prog_io_type_defn.m"
                          {
#line 502 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_74_74));
#line 502 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 502 "prog_io_type_defn.m"
                          }
#line 501 "prog_io_type_defn.m"
                          {
#line 501 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__Spec_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 501 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 501 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 501 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_109, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_73_73));
#line 501 "prog_io_type_defn.m"
                          }
#line 503 "prog_io_type_defn.m"
                          {
#line 503 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_109));
#line 503 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4));
#line 503 "prog_io_type_defn.m"
                          }
#line 500 "prog_io_type_defn.m"
                        }
#line 496 "prog_io_type_defn.m"
                      }
#line 496 "prog_io_type_defn.m"
                    else
#line 504 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4;
#line 504 "prog_io_type_defn.m"
                  }
#line 488 "prog_io_type_defn.m"
              }
#line 507 "prog_io_type_defn.m"
            else
#line 511 "prog_io_type_defn.m"
              {
#line 511 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_83_83;
#line 511 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_86_86;
#line 511 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_89_89;
#line 511 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_90_90;
#line 511 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_99_99;
#line 511 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_100_100;
#line 511 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_101_101;
#line 511 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_102_102;
#line 511 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_103_103;
#line 511 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Pieces_112;
#line 511 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_113;

#line 510 "prog_io_type_defn.m"
                {
#line 510 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 510 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 510 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_90_90, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__DirectArgCtor_12));
#line 510 "prog_io_type_defn.m"
                }
#line 510 "prog_io_type_defn.m"
                {
#line 510 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 510 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_89_89, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_90_90));
#line 510 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[56])));
#line 510 "prog_io_type_defn.m"
                }
#line 509 "prog_io_type_defn.m"
                {
#line 509 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 509 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_86_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[135])));
#line 509 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_86_86, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_89_89));
#line 509 "prog_io_type_defn.m"
                }
#line 508 "prog_io_type_defn.m"
                {
#line 508 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 508 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_83_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_defn_scalar_common_2[2])));
#line 508 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_83_83, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_86_86));
#line 508 "prog_io_type_defn.m"
                }
#line 508 "prog_io_type_defn.m"
                {
#line 508 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Pieces_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 508 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[133])));
#line 508 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_112, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_83_83));
#line 508 "prog_io_type_defn.m"
                }
#line 513 "prog_io_type_defn.m"
                {
#line 513 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_101_101 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadVar__3_3);
                }
#line 513 "prog_io_type_defn.m"
                {
#line 513 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 513 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_103_103, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_112));
#line 513 "prog_io_type_defn.m"
                }
#line 513 "prog_io_type_defn.m"
                {
#line 513 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_102_102, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_103_103));
#line 513 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 513 "prog_io_type_defn.m"
                }
#line 513 "prog_io_type_defn.m"
                {
#line 513 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 513 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_100_100, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_101_101));
#line 513 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_100_100, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_102_102));
#line 513 "prog_io_type_defn.m"
                }
#line 513 "prog_io_type_defn.m"
                {
#line 513 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_99_99, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_100_100));
#line 513 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 513 "prog_io_type_defn.m"
                }
#line 512 "prog_io_type_defn.m"
                {
#line 512 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 512 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 512 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 512 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_113, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_99_99));
#line 512 "prog_io_type_defn.m"
                }
#line 514 "prog_io_type_defn.m"
                {
#line 514 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 514 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_113));
#line 514 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4));
#line 514 "prog_io_type_defn.m"
                }
#line 511 "prog_io_type_defn.m"
              }
#line 516 "prog_io_type_defn.m"
            /* direct tailcall eliminated */
#line 516 "prog_io_type_defn.m"
            {
#line 516 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__HeadVar__2__tmp_copy_2 = parse_tree__prog_io_type_defn__DirectArgCtors_13;
#line 516 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0__tmp_copy_4 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54;

#line 516 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0__tmp_copy_4;
#line 516 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__HeadVar__2_2 = parse_tree__prog_io_type_defn__HeadVar__2__tmp_copy_2;
#line 516 "prog_io_type_defn.m"
            }
#line 516 "prog_io_type_defn.m"
            continue;
#line 484 "prog_io_type_defn.m"
          }
#line 482 "prog_io_type_defn.m"
      }
#line 482 "prog_io_type_defn.m"
      break;
#line 482 "prog_io_type_defn.m"
    }
#line 478 "prog_io_type_defn.m"
}

#line 453 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_7(
#line 453 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 453 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 453 "prog_io_type_defn.m"
{
#line 453 "prog_io_type_defn.m"
  {
#line 453 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 453 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;

#line 453 "prog_io_type_defn.m"
    {
#line 453 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__453__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 453 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 453 "prog_io_type_defn.m"
  }
#line 453 "prog_io_type_defn.m"
}

#line 449 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_6(
#line 449 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 449 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 449 "prog_io_type_defn.m"
{
#line 449 "prog_io_type_defn.m"
  {
#line 449 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 449 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 449 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv8_HeadVar__2_2;

#line 449 "prog_io_type_defn.m"
    {
#line 449 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv8_HeadVar__2_2 = parse_tree__prog_data__prog_constraint_get_arg_types_1_f_0(((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 449 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv8_HeadVar__2_2));
#line 449 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 449 "prog_io_type_defn.m"
  }
#line 449 "prog_io_type_defn.m"
}

#line 425 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_5(
#line 425 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 425 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 425 "prog_io_type_defn.m"
{
#line 425 "prog_io_type_defn.m"
  {
#line 425 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 425 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;

#line 425 "prog_io_type_defn.m"
    {
#line 425 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__425__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 425 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 425 "prog_io_type_defn.m"
  }
#line 425 "prog_io_type_defn.m"
}

#line 421 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_4(
#line 421 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 421 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 421 "prog_io_type_defn.m"
{
#line 421 "prog_io_type_defn.m"
  {
#line 421 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 421 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 421 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv5_HeadVar__2_127;

#line 421 "prog_io_type_defn.m"
    {
#line 421 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv5_HeadVar__2_127 = parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__421__1_1_f_0(((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 421 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv5_HeadVar__2_127));
#line 421 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 421 "prog_io_type_defn.m"
  }
#line 421 "prog_io_type_defn.m"
}

#line 405 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_3(
#line 405 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 405 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 405 "prog_io_type_defn.m"
{
#line 405 "prog_io_type_defn.m"
  {
#line 405 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 405 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 405 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__conv2_HeadVar__4_270;

#line 405 "prog_io_type_defn.m"
    {
#line 405 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv2_HeadVar__4_270 = parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__405__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 405 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv2_HeadVar__4_270));
#line 405 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 405 "prog_io_type_defn.m"
  }
#line 405 "prog_io_type_defn.m"
}

#line 376 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_2(
#line 376 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 376 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 376 "prog_io_type_defn.m"
{
#line 376 "prog_io_type_defn.m"
  {
#line 376 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 376 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;

#line 376 "prog_io_type_defn.m"
    {
#line 376 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__376__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 376 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 376 "prog_io_type_defn.m"
  }
#line 376 "prog_io_type_defn.m"
}

#line 373 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_1(
#line 373 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 373 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 373 "prog_io_type_defn.m"
{
#line 373 "prog_io_type_defn.m"
  {
#line 373 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 373 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 373 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv0_HeadVar__2_59;

#line 373 "prog_io_type_defn.m"
    {
#line 373 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv0_HeadVar__2_59 = parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__373__1_1_f_0(((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 373 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv0_HeadVar__2_59));
#line 373 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 373 "prog_io_type_defn.m"
  }
#line 373 "prog_io_type_defn.m"
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
            MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_87_87;
#line 367 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn___CtorName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 2)));
#line 367 "prog_io_type_defn.m"
            MR_Integer parse_tree__prog_io_type_defn___Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 4)));
#line 367 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn___Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 5)));
#line 392 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__NotExistQOrParamVars_30;
#line 373 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__TypeInfo_257_257;
#line 373 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__CtorArgTypes_25;
#line 373 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_27;
#line 373 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes_28;
#line 373 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_60_60;
#line 373 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_61_61;
#line 376 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn___ExistQOrParamVars_29;
#line 378 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_31_31;
#line 378 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_32_32;

#line 373 "prog_io_type_defn.m"
            {
#line 373 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__CtorArgTypes_25 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_4[3], parse_tree__prog_io_type_defn__CtorArgs_22);
            }
#line 374 "prog_io_type_defn.m"
            {
#line 374 "prog_io_type_defn.m"
              parse_tree__prog_type__type_vars_list_2_p_0(parse_tree__prog_io_type_defn__CtorArgTypes_25, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_27);
            }
#line 10325 "parse_tree.prog_io_type_defn.c"
            parse_tree__prog_io_type_defn__TypeInfo_257_257 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 375 "prog_io_type_defn.m"
            {
#line 375 "prog_io_type_defn.m"
              mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_257_257, parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_27, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes_28);
            }
#line 376 "prog_io_type_defn.m"
            {
#line 376 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_61_61 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeInfo_257_257, parse_tree__prog_io_type_defn__ExistQVars_19, parse_tree__prog_io_type_defn__HeadVar__1_1);
            }
#line 376 "prog_io_type_defn.m"
            {
#line 376 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 376 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_60_60, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[2]));
#line 376 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_2));
#line 376 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 376 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_60_60, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__V_61_61));
#line 376 "prog_io_type_defn.m"
            }
#line 376 "prog_io_type_defn.m"
            {
#line 376 "prog_io_type_defn.m"
              mercury__list__filter_4_p_0(parse_tree__prog_io_type_defn__TypeInfo_257_257, parse_tree__prog_io_type_defn__V_60_60, parse_tree__prog_io_type_defn__VarsInCtorArgTypes_28, &parse_tree__prog_io_type_defn___ExistQOrParamVars_29, &parse_tree__prog_io_type_defn__NotExistQOrParamVars_30);
            }
#line 378 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__NotExistQOrParamVars_30)) == (MR_mktag((MR_Integer) 1)));
#line 378 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 378 "prog_io_type_defn.m"
              {
#line 378 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotExistQOrParamVars_30, (MR_Integer) 0)));
#line 378 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotExistQOrParamVars_30, (MR_Integer) 1)));
#line 381 "prog_io_type_defn.m"
                {
#line 381 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_260_260 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 381 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_261_261 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 381 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__GenericVarSet_33;
#line 381 "prog_io_type_defn.m"
                  MR_String parse_tree__prog_io_type_defn__NotExistQOrParamVarsStr_34;
#line 381 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__Pieces_35;
#line 381 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__Spec_36;
#line 381 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_65_65;
#line 381 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_66_66;
#line 381 "prog_io_type_defn.m"
                  MR_String parse_tree__prog_io_type_defn__V_67_67;
#line 381 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_70_70;
#line 381 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_71_71;
#line 381 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_80_80;
#line 381 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_81_81;
#line 381 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_82_82;
#line 381 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_83_83;
#line 381 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_84_84;
#line 385 "prog_io_type_defn.m"
                  MR_Box parse_tree__prog_io_type_defn__conv1_V_67_67;

#line 381 "prog_io_type_defn.m"
                  {
#line 381 "prog_io_type_defn.m"
                    mercury__varset__coerce_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_260_260, parse_tree__prog_io_type_defn__TypeCtorInfo_261_261, parse_tree__prog_io_type_defn__VarSet_2, &parse_tree__prog_io_type_defn__GenericVarSet_33);
                  }
#line 383 "prog_io_type_defn.m"
                  {
#line 383 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__NotExistQOrParamVarsStr_34 = parse_tree__mercury_to_mercury__mercury_vars_to_string_3_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_261_261, parse_tree__prog_io_type_defn__GenericVarSet_33, (MR_Integer) 0, parse_tree__prog_io_type_defn__NotExistQOrParamVars_30);
                  }
#line 385 "prog_io_type_defn.m"
                  {
#line 385 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__conv1_V_67_67 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_io_type_defn__NotExistQOrParamVars_30, ((MR_Box) ((MR_String) "parameter")), ((MR_Box) ((MR_String) "parameters")));
                  }
#line 385 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_67_67 = ((MR_String) parse_tree__prog_io_type_defn__conv1_V_67_67);
#line 385 "prog_io_type_defn.m"
                  {
#line 385 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 385 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 385 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_66_66, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_67_67));
#line 385 "prog_io_type_defn.m"
                  }
#line 387 "prog_io_type_defn.m"
                  {
#line 387 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_71_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_71_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 387 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_71_71, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__NotExistQOrParamVarsStr_34));
#line 387 "prog_io_type_defn.m"
                  }
#line 387 "prog_io_type_defn.m"
                  {
#line 387 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_71_71));
#line 387 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[31])));
#line 387 "prog_io_type_defn.m"
                  }
#line 386 "prog_io_type_defn.m"
                  {
#line 386 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 386 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_66_66));
#line 386 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_65_65, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_70_70));
#line 386 "prog_io_type_defn.m"
                  }
#line 384 "prog_io_type_defn.m"
                  {
#line 384 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__Pieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[128])));
#line 384 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_35, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_65_65));
#line 384 "prog_io_type_defn.m"
                  }
#line 390 "prog_io_type_defn.m"
                  {
#line 390 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_82_82 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_260_260, parse_tree__prog_io_type_defn__BodyTerm_3);
                  }
#line 390 "prog_io_type_defn.m"
                  {
#line 390 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 390 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_35));
#line 390 "prog_io_type_defn.m"
                  }
#line 390 "prog_io_type_defn.m"
                  {
#line 390 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_84_84));
#line 390 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 390 "prog_io_type_defn.m"
                  }
#line 390 "prog_io_type_defn.m"
                  {
#line 390 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 390 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_81_81, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_82_82));
#line 390 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_81_81, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_83_83));
#line 390 "prog_io_type_defn.m"
                  }
#line 390 "prog_io_type_defn.m"
                  {
#line 390 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_81_81));
#line 390 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 390 "prog_io_type_defn.m"
                  }
#line 389 "prog_io_type_defn.m"
                  {
#line 389 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 389 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 389 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 389 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_36, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_80_80));
#line 389 "prog_io_type_defn.m"
                  }
#line 391 "prog_io_type_defn.m"
                  {
#line 391 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_87_87, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_36));
#line 391 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_87_87, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5));
#line 391 "prog_io_type_defn.m"
                  }
#line 381 "prog_io_type_defn.m"
                }
#line 378 "prog_io_type_defn.m"
              }
#line 378 "prog_io_type_defn.m"
            else
#line 417 "prog_io_type_defn.m"
              {
#line 417 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ExistQParamsSet_39;
#line 397 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeInfo_264_264 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 397 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ExistQVarsSet_37;
#line 397 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParamsSet_38;

#line 397 "prog_io_type_defn.m"
                {
#line 397 "prog_io_type_defn.m"
                  mercury__set__list_to_set_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_264_264, parse_tree__prog_io_type_defn__ExistQVars_19, &parse_tree__prog_io_type_defn__ExistQVarsSet_37);
                }
#line 398 "prog_io_type_defn.m"
                {
#line 398 "prog_io_type_defn.m"
                  mercury__set__list_to_set_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_264_264, parse_tree__prog_io_type_defn__HeadVar__1_1, &parse_tree__prog_io_type_defn__ParamsSet_38);
                }
#line 399 "prog_io_type_defn.m"
                {
#line 399 "prog_io_type_defn.m"
                  mercury__set__intersect_3_p_0(parse_tree__prog_io_type_defn__TypeInfo_264_264, parse_tree__prog_io_type_defn__ExistQVarsSet_37, parse_tree__prog_io_type_defn__ParamsSet_38, &parse_tree__prog_io_type_defn__ExistQParamsSet_39);
                }
#line 400 "prog_io_type_defn.m"
                {
#line 400 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__succeeded = mercury__set__is_non_empty_1_p_0(parse_tree__prog_io_type_defn__TypeInfo_264_264, parse_tree__prog_io_type_defn__ExistQParamsSet_39);
                }
#line 417 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 403 "prog_io_type_defn.m"
                  {
#line 403 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeInfo_265_265 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 403 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_266_266;
#line 403 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_268_268;
#line 403 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_272_272;
#line 403 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__ExistQParams_40;
#line 403 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__ExistQParamVarsStrs_41;
#line 403 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_88_88;
#line 403 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_90_90;
#line 403 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_93_93;
#line 403 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_94_94;
#line 403 "prog_io_type_defn.m"
                    MR_String parse_tree__prog_io_type_defn__V_95_95;
#line 403 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_99_99;
#line 403 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_100_100;
#line 403 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_101_101;
#line 403 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_102_102;
#line 403 "prog_io_type_defn.m"
                    MR_String parse_tree__prog_io_type_defn__V_103_103;
#line 403 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_117_117;
#line 403 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_118_118;
#line 403 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_119_119;
#line 403 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_120_120;
#line 403 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_121_121;
#line 403 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__GenericVarSet_217;
#line 403 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Pieces_218;
#line 403 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Spec_219;
#line 408 "prog_io_type_defn.m"
                    MR_Box parse_tree__prog_io_type_defn__conv3_V_95_95;
#line 411 "prog_io_type_defn.m"
                    MR_Box parse_tree__prog_io_type_defn__conv4_V_103_103;

#line 403 "prog_io_type_defn.m"
                    {
#line 403 "prog_io_type_defn.m"
                      mercury__set__to_sorted_list_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_265_265, parse_tree__prog_io_type_defn__ExistQParamsSet_39, &parse_tree__prog_io_type_defn__ExistQParams_40);
                    }
#line 10634 "parse_tree.prog_io_type_defn.c"
                    parse_tree__prog_io_type_defn__TypeCtorInfo_266_266 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 404 "prog_io_type_defn.m"
                    {
#line 404 "prog_io_type_defn.m"
                      mercury__varset__coerce_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_266_266, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_2, &parse_tree__prog_io_type_defn__GenericVarSet_217);
                    }
#line 10641 "parse_tree.prog_io_type_defn.c"
                    parse_tree__prog_io_type_defn__TypeCtorInfo_268_268 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 405 "prog_io_type_defn.m"
                    {
#line 405 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 405 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_88_88, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_5[0]));
#line 405 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_88_88, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_3));
#line 405 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_88_88, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 405 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_88_88, 3) = ((MR_Box) ((MR_Integer) 0));
#line 405 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_88_88, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__GenericVarSet_217));
#line 405 "prog_io_type_defn.m"
                    }
#line 405 "prog_io_type_defn.m"
                    {
#line 405 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__ExistQParamVarsStrs_41 = mercury__list__map_2_f_0(parse_tree__prog_io_type_defn__TypeInfo_265_265, parse_tree__prog_io_type_defn__TypeCtorInfo_268_268, parse_tree__prog_io_type_defn__V_88_88, parse_tree__prog_io_type_defn__ExistQParams_40);
                    }
#line 10664 "parse_tree.prog_io_type_defn.c"
                    parse_tree__prog_io_type_defn__TypeCtorInfo_272_272 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 408 "prog_io_type_defn.m"
                    {
#line 408 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__conv3_V_95_95 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_265_265, parse_tree__prog_io_type_defn__TypeCtorInfo_268_268, parse_tree__prog_io_type_defn__ExistQParams_40, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
                    }
#line 408 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_95_95 = ((MR_String) parse_tree__prog_io_type_defn__conv3_V_95_95);
#line 408 "prog_io_type_defn.m"
                    {
#line 408 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_94_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_94_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 408 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_94_94, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_95_95));
#line 408 "prog_io_type_defn.m"
                    }
#line 409 "prog_io_type_defn.m"
                    {
#line 409 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_93_93, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_94_94));
#line 409 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 409 "prog_io_type_defn.m"
                    }
#line 407 "prog_io_type_defn.m"
                    {
#line 407 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_90_90, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[129])));
#line 407 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_90_90, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_93_93));
#line 407 "prog_io_type_defn.m"
                    }
#line 410 "prog_io_type_defn.m"
                    {
#line 410 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_100_100 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(parse_tree__prog_io_type_defn__ExistQParamVarsStrs_41);
                    }
#line 411 "prog_io_type_defn.m"
                    {
#line 411 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__conv4_V_103_103 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_265_265, parse_tree__prog_io_type_defn__TypeCtorInfo_268_268, parse_tree__prog_io_type_defn__ExistQParams_40, ((MR_Box) ((MR_String) "has")), ((MR_Box) ((MR_String) "have")));
                    }
#line 411 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_103_103 = ((MR_String) parse_tree__prog_io_type_defn__conv4_V_103_103);
#line 411 "prog_io_type_defn.m"
                    {
#line 411 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_102_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_102_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 411 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_102_102, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_103_103));
#line 411 "prog_io_type_defn.m"
                    }
#line 411 "prog_io_type_defn.m"
                    {
#line 411 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_101_101, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_102_102));
#line 411 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[35])));
#line 411 "prog_io_type_defn.m"
                    }
#line 410 "prog_io_type_defn.m"
                    {
#line 410 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_99_99 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_272_272, parse_tree__prog_io_type_defn__V_100_100, parse_tree__prog_io_type_defn__V_101_101);
                    }
#line 409 "prog_io_type_defn.m"
                    {
#line 409 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Pieces_218 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_272_272, parse_tree__prog_io_type_defn__V_90_90, parse_tree__prog_io_type_defn__V_99_99);
                    }
#line 415 "prog_io_type_defn.m"
                    {
#line 415 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_119_119 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_266_266, parse_tree__prog_io_type_defn__BodyTerm_3);
                    }
#line 415 "prog_io_type_defn.m"
                    {
#line 415 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 415 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_121_121, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_218));
#line 415 "prog_io_type_defn.m"
                    }
#line 415 "prog_io_type_defn.m"
                    {
#line 415 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_120_120, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_121_121));
#line 415 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 415 "prog_io_type_defn.m"
                    }
#line 415 "prog_io_type_defn.m"
                    {
#line 415 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 415 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_118_118, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_119_119));
#line 415 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_118_118, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_120_120));
#line 415 "prog_io_type_defn.m"
                    }
#line 415 "prog_io_type_defn.m"
                    {
#line 415 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_117_117, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_118_118));
#line 415 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_117_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 415 "prog_io_type_defn.m"
                    }
#line 414 "prog_io_type_defn.m"
                    {
#line 414 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Spec_219 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 414 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_219, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 414 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_219, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 414 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_219, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_117_117));
#line 414 "prog_io_type_defn.m"
                    }
#line 416 "prog_io_type_defn.m"
                    {
#line 416 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_87_87, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_219));
#line 416 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_87_87, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5));
#line 416 "prog_io_type_defn.m"
                    }
#line 403 "prog_io_type_defn.m"
                  }
#line 417 "prog_io_type_defn.m"
                else
#line 444 "prog_io_type_defn.m"
                  {
#line 444 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__NotOccursExistQVars_44;
#line 421 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeInfo_275_275;
#line 421 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__ConstraintTVars_42;
#line 421 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_128_128;
#line 421 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_129_129;
#line 421 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__CtorArgTypes_221;
#line 421 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_222;
#line 421 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes_223;
#line 425 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn___OccursExistQVars_43;
#line 427 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_45_45;
#line 427 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_46_46;

#line 421 "prog_io_type_defn.m"
                    {
#line 421 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__CtorArgTypes_221 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_4[4], parse_tree__prog_io_type_defn__CtorArgs_22);
                    }
#line 422 "prog_io_type_defn.m"
                    {
#line 422 "prog_io_type_defn.m"
                      parse_tree__prog_type__type_vars_list_2_p_0(parse_tree__prog_io_type_defn__CtorArgTypes_221, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_222);
                    }
#line 10849 "parse_tree.prog_io_type_defn.c"
                    parse_tree__prog_io_type_defn__TypeInfo_275_275 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 423 "prog_io_type_defn.m"
                    {
#line 423 "prog_io_type_defn.m"
                      mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_275_275, parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_222, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes_223);
                    }
#line 424 "prog_io_type_defn.m"
                    {
#line 424 "prog_io_type_defn.m"
                      parse_tree__prog_type__constraint_list_get_tvars_2_p_0(parse_tree__prog_io_type_defn__Constraints_20, &parse_tree__prog_io_type_defn__ConstraintTVars_42);
                    }
#line 425 "prog_io_type_defn.m"
                    {
#line 425 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_129_129 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeInfo_275_275, parse_tree__prog_io_type_defn__VarsInCtorArgTypes_223, parse_tree__prog_io_type_defn__ConstraintTVars_42);
                    }
#line 425 "prog_io_type_defn.m"
                    {
#line 425 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_128_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 425 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_128_128, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[2]));
#line 425 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_128_128, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_5));
#line 425 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_128_128, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 425 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_128_128, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__V_129_129));
#line 425 "prog_io_type_defn.m"
                    }
#line 425 "prog_io_type_defn.m"
                    {
#line 425 "prog_io_type_defn.m"
                      mercury__list__filter_4_p_0(parse_tree__prog_io_type_defn__TypeInfo_275_275, parse_tree__prog_io_type_defn__V_128_128, parse_tree__prog_io_type_defn__ExistQVars_19, &parse_tree__prog_io_type_defn___OccursExistQVars_43, &parse_tree__prog_io_type_defn__NotOccursExistQVars_44);
                    }
#line 427 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__NotOccursExistQVars_44)) == (MR_mktag((MR_Integer) 1)));
#line 427 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 427 "prog_io_type_defn.m"
                      {
#line 427 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotOccursExistQVars_44, (MR_Integer) 0)));
#line 427 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotOccursExistQVars_44, (MR_Integer) 1)));
#line 430 "prog_io_type_defn.m"
                        {
#line 430 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_278_278 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 430 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_279_279 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 430 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__TypeInfo_280_280;
#line 430 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_281_281;
#line 430 "prog_io_type_defn.m"
                          MR_String parse_tree__prog_io_type_defn__NotOccursExistQVarsStr_47;
#line 430 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_133_133;
#line 430 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_134_134;
#line 430 "prog_io_type_defn.m"
                          MR_String parse_tree__prog_io_type_defn__V_135_135;
#line 430 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_138_138;
#line 430 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_139_139;
#line 430 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_140_140;
#line 430 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_143_143;
#line 430 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_144_144;
#line 430 "prog_io_type_defn.m"
                          MR_String parse_tree__prog_io_type_defn__V_145_145;
#line 430 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_156_156;
#line 430 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_157_157;
#line 430 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_158_158;
#line 430 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_159_159;
#line 430 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_160_160;
#line 430 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__GenericVarSet_224;
#line 430 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__Pieces_225;
#line 430 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__Spec_226;
#line 434 "prog_io_type_defn.m"
                          MR_Box parse_tree__prog_io_type_defn__conv6_V_135_135;
#line 438 "prog_io_type_defn.m"
                          MR_Box parse_tree__prog_io_type_defn__conv7_V_145_145;

#line 430 "prog_io_type_defn.m"
                          {
#line 430 "prog_io_type_defn.m"
                            mercury__varset__coerce_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_278_278, parse_tree__prog_io_type_defn__TypeCtorInfo_279_279, parse_tree__prog_io_type_defn__VarSet_2, &parse_tree__prog_io_type_defn__GenericVarSet_224);
                          }
#line 432 "prog_io_type_defn.m"
                          {
#line 432 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__NotOccursExistQVarsStr_47 = parse_tree__mercury_to_mercury__mercury_vars_to_string_3_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_279_279, parse_tree__prog_io_type_defn__GenericVarSet_224, (MR_Integer) 0, parse_tree__prog_io_type_defn__NotOccursExistQVars_44);
                          }
#line 10956 "parse_tree.prog_io_type_defn.c"
                          parse_tree__prog_io_type_defn__TypeInfo_280_280 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 10958 "parse_tree.prog_io_type_defn.c"
                          parse_tree__prog_io_type_defn__TypeCtorInfo_281_281 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 434 "prog_io_type_defn.m"
                          {
#line 434 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__conv6_V_135_135 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_280_280, parse_tree__prog_io_type_defn__TypeCtorInfo_281_281, parse_tree__prog_io_type_defn__NotOccursExistQVars_44, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
                          }
#line 434 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_135_135 = ((MR_String) parse_tree__prog_io_type_defn__conv6_V_135_135);
#line 434 "prog_io_type_defn.m"
                          {
#line 434 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_134_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_134_134, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 434 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_134_134, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_135_135));
#line 434 "prog_io_type_defn.m"
                          }
#line 436 "prog_io_type_defn.m"
                          {
#line 436 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_139_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_139_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 436 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_139_139, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__NotOccursExistQVarsStr_47));
#line 436 "prog_io_type_defn.m"
                          }
#line 438 "prog_io_type_defn.m"
                          {
#line 438 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__conv7_V_145_145 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_280_280, parse_tree__prog_io_type_defn__TypeCtorInfo_281_281, parse_tree__prog_io_type_defn__NotOccursExistQVars_44, ((MR_Box) ((MR_String) "does not occur")), ((MR_Box) ((MR_String) "do not occur")));
                          }
#line 438 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_145_145 = ((MR_String) parse_tree__prog_io_type_defn__conv7_V_145_145);
#line 438 "prog_io_type_defn.m"
                          {
#line 438 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_144_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 438 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_144_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 438 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_144_144, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_145_145));
#line 438 "prog_io_type_defn.m"
                          }
#line 439 "prog_io_type_defn.m"
                          {
#line 439 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_143_143, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_144_144));
#line 439 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[37])));
#line 439 "prog_io_type_defn.m"
                          }
#line 437 "prog_io_type_defn.m"
                          {
#line 437 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_140_140, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[130])));
#line 437 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_140_140, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_143_143));
#line 437 "prog_io_type_defn.m"
                          }
#line 436 "prog_io_type_defn.m"
                          {
#line 436 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_138_138, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_139_139));
#line 436 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_138_138, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_140_140));
#line 436 "prog_io_type_defn.m"
                          }
#line 435 "prog_io_type_defn.m"
                          {
#line 435 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_133_133, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_134_134));
#line 435 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_133_133, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_138_138));
#line 435 "prog_io_type_defn.m"
                          }
#line 433 "prog_io_type_defn.m"
                          {
#line 433 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__Pieces_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_225, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[129])));
#line 433 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_225, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_133_133));
#line 433 "prog_io_type_defn.m"
                          }
#line 442 "prog_io_type_defn.m"
                          {
#line 442 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_158_158 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_278_278, parse_tree__prog_io_type_defn__BodyTerm_3);
                          }
#line 442 "prog_io_type_defn.m"
                          {
#line 442 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 442 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_160_160, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_225));
#line 442 "prog_io_type_defn.m"
                          }
#line 442 "prog_io_type_defn.m"
                          {
#line 442 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_159_159, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_160_160));
#line 442 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_159_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 442 "prog_io_type_defn.m"
                          }
#line 442 "prog_io_type_defn.m"
                          {
#line 442 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 442 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_157_157, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_158_158));
#line 442 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_157_157, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_159_159));
#line 442 "prog_io_type_defn.m"
                          }
#line 442 "prog_io_type_defn.m"
                          {
#line 442 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_156_156, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_157_157));
#line 442 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_156_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 442 "prog_io_type_defn.m"
                          }
#line 441 "prog_io_type_defn.m"
                          {
#line 441 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__Spec_226 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 441 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_226, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 441 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_226, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 441 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_226, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_156_156));
#line 441 "prog_io_type_defn.m"
                          }
#line 443 "prog_io_type_defn.m"
                          {
#line 443 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_87_87, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_226));
#line 443 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_87_87, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5));
#line 443 "prog_io_type_defn.m"
                          }
#line 430 "prog_io_type_defn.m"
                        }
#line 427 "prog_io_type_defn.m"
                      }
#line 427 "prog_io_type_defn.m"
                    else
#line 473 "prog_io_type_defn.m"
                      {
#line 473 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__NotExistQArgTypes_51;
#line 449 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__TypeInfo_287_287;
#line 449 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__ConstraintArgTypeLists_48;
#line 449 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__ConstraintArgTypes_49;
#line 449 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_165_165;
#line 449 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_227;
#line 449 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes_228;
#line 453 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn___ExistQArgTypes_50;
#line 455 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 455 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_53_53;

#line 449 "prog_io_type_defn.m"
                        {
#line 449 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__ConstraintArgTypeLists_48 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[8], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_4[5], parse_tree__prog_io_type_defn__Constraints_20);
                        }
#line 450 "prog_io_type_defn.m"
                        {
#line 450 "prog_io_type_defn.m"
                          mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_io_type_defn__ConstraintArgTypeLists_48, &parse_tree__prog_io_type_defn__ConstraintArgTypes_49);
                        }
#line 451 "prog_io_type_defn.m"
                        {
#line 451 "prog_io_type_defn.m"
                          parse_tree__prog_type__type_vars_list_2_p_0(parse_tree__prog_io_type_defn__ConstraintArgTypes_49, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_227);
                        }
#line 11163 "parse_tree.prog_io_type_defn.c"
                        parse_tree__prog_io_type_defn__TypeInfo_287_287 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 452 "prog_io_type_defn.m"
                        {
#line 452 "prog_io_type_defn.m"
                          mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_287_287, parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_227, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes_228);
                        }
#line 453 "prog_io_type_defn.m"
                        {
#line 453 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_165_165 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 453 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_165_165, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[2]));
#line 453 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_165_165, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_7));
#line 453 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_165_165, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 453 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_165_165, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__ExistQVars_19));
#line 453 "prog_io_type_defn.m"
                        }
#line 453 "prog_io_type_defn.m"
                        {
#line 453 "prog_io_type_defn.m"
                          mercury__list__filter_4_p_0(parse_tree__prog_io_type_defn__TypeInfo_287_287, parse_tree__prog_io_type_defn__V_165_165, parse_tree__prog_io_type_defn__VarsInCtorArgTypes_228, &parse_tree__prog_io_type_defn___ExistQArgTypes_50, &parse_tree__prog_io_type_defn__NotExistQArgTypes_51);
                        }
#line 455 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__NotExistQArgTypes_51)) == (MR_mktag((MR_Integer) 1)));
#line 455 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 455 "prog_io_type_defn.m"
                          {
#line 455 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotExistQArgTypes_51, (MR_Integer) 0)));
#line 455 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotExistQArgTypes_51, (MR_Integer) 1)));
#line 457 "prog_io_type_defn.m"
                            {
#line 457 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_290_290 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 457 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_291_291 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 457 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__TypeInfo_292_292;
#line 457 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_293_293;
#line 457 "prog_io_type_defn.m"
                              MR_String parse_tree__prog_io_type_defn__NotExistQArgTypesStr_54;
#line 457 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_169_169;
#line 457 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_170_170;
#line 457 "prog_io_type_defn.m"
                              MR_String parse_tree__prog_io_type_defn__V_171_171;
#line 457 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_174_174;
#line 457 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_175_175;
#line 457 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_176_176;
#line 457 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_179_179;
#line 457 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_180_180;
#line 457 "prog_io_type_defn.m"
                              MR_String parse_tree__prog_io_type_defn__V_181_181;
#line 457 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_207_207;
#line 457 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_208_208;
#line 457 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_209_209;
#line 457 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_210_210;
#line 457 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_211_211;
#line 457 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__GenericVarSet_229;
#line 457 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__Pieces_230;
#line 457 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__Spec_231;
#line 461 "prog_io_type_defn.m"
                              MR_Box parse_tree__prog_io_type_defn__conv9_V_171_171;
#line 465 "prog_io_type_defn.m"
                              MR_Box parse_tree__prog_io_type_defn__conv10_V_181_181;

#line 457 "prog_io_type_defn.m"
                              {
#line 457 "prog_io_type_defn.m"
                                mercury__varset__coerce_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_290_290, parse_tree__prog_io_type_defn__TypeCtorInfo_291_291, parse_tree__prog_io_type_defn__VarSet_2, &parse_tree__prog_io_type_defn__GenericVarSet_229);
                              }
#line 459 "prog_io_type_defn.m"
                              {
#line 459 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__NotExistQArgTypesStr_54 = parse_tree__mercury_to_mercury__mercury_vars_to_string_3_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_291_291, parse_tree__prog_io_type_defn__GenericVarSet_229, (MR_Integer) 0, parse_tree__prog_io_type_defn__NotExistQArgTypes_51);
                              }
#line 11260 "parse_tree.prog_io_type_defn.c"
                              parse_tree__prog_io_type_defn__TypeInfo_292_292 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 11262 "parse_tree.prog_io_type_defn.c"
                              parse_tree__prog_io_type_defn__TypeCtorInfo_293_293 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 461 "prog_io_type_defn.m"
                              {
#line 461 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__conv9_V_171_171 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_292_292, parse_tree__prog_io_type_defn__TypeCtorInfo_293_293, parse_tree__prog_io_type_defn__NotExistQArgTypes_51, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
                              }
#line 461 "prog_io_type_defn.m"
                              parse_tree__prog_io_type_defn__V_171_171 = ((MR_String) parse_tree__prog_io_type_defn__conv9_V_171_171);
#line 461 "prog_io_type_defn.m"
                              {
#line 461 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_170_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_170_170, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 461 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_170_170, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_171_171));
#line 461 "prog_io_type_defn.m"
                              }
#line 463 "prog_io_type_defn.m"
                              {
#line 463 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_175_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 463 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_175_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 463 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_175_175, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__NotExistQArgTypesStr_54));
#line 463 "prog_io_type_defn.m"
                              }
#line 465 "prog_io_type_defn.m"
                              {
#line 465 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__conv10_V_181_181 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_292_292, parse_tree__prog_io_type_defn__TypeCtorInfo_293_293, parse_tree__prog_io_type_defn__NotExistQArgTypes_51, ((MR_Box) ((MR_String) "which was")), ((MR_Box) ((MR_String) "which were")));
                              }
#line 465 "prog_io_type_defn.m"
                              parse_tree__prog_io_type_defn__V_181_181 = ((MR_String) parse_tree__prog_io_type_defn__conv10_V_181_181);
#line 465 "prog_io_type_defn.m"
                              {
#line 465 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_180_180 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_180_180, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 465 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_180_180, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_181_181));
#line 465 "prog_io_type_defn.m"
                              }
#line 466 "prog_io_type_defn.m"
                              {
#line 466 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_179_179, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_180_180));
#line 466 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_179_179, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[45])));
#line 466 "prog_io_type_defn.m"
                              }
#line 464 "prog_io_type_defn.m"
                              {
#line 464 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 464 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_176_176, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[131])));
#line 464 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_176_176, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_179_179));
#line 464 "prog_io_type_defn.m"
                              }
#line 463 "prog_io_type_defn.m"
                              {
#line 463 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 463 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_174_174, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_175_175));
#line 463 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_174_174, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_176_176));
#line 463 "prog_io_type_defn.m"
                              }
#line 462 "prog_io_type_defn.m"
                              {
#line 462 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_169_169, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_170_170));
#line 462 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_169_169, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_174_174));
#line 462 "prog_io_type_defn.m"
                              }
#line 460 "prog_io_type_defn.m"
                              {
#line 460 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__Pieces_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 460 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_230, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[129])));
#line 460 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_230, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_169_169));
#line 460 "prog_io_type_defn.m"
                              }
#line 471 "prog_io_type_defn.m"
                              {
#line 471 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_209_209 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_290_290, parse_tree__prog_io_type_defn__BodyTerm_3);
                              }
#line 471 "prog_io_type_defn.m"
                              {
#line 471 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_211_211 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 471 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_211_211, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_230));
#line 471 "prog_io_type_defn.m"
                              }
#line 471 "prog_io_type_defn.m"
                              {
#line 471 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_210_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_210_210, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_211_211));
#line 471 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_210_210, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 471 "prog_io_type_defn.m"
                              }
#line 471 "prog_io_type_defn.m"
                              {
#line 471 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_208_208 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 471 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_208_208, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_209_209));
#line 471 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_208_208, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_210_210));
#line 471 "prog_io_type_defn.m"
                              }
#line 471 "prog_io_type_defn.m"
                              {
#line 471 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_207_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_207_207, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_208_208));
#line 471 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_207_207, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 471 "prog_io_type_defn.m"
                              }
#line 470 "prog_io_type_defn.m"
                              {
#line 470 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__Spec_231 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 470 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_231, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 470 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_231, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 470 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_231, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_207_207));
#line 470 "prog_io_type_defn.m"
                              }
#line 472 "prog_io_type_defn.m"
                              {
#line 472 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_87_87, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_231));
#line 472 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_87_87, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5));
#line 472 "prog_io_type_defn.m"
                              }
#line 457 "prog_io_type_defn.m"
                            }
#line 455 "prog_io_type_defn.m"
                          }
#line 455 "prog_io_type_defn.m"
                        else
#line 473 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_87_87 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5;
#line 473 "prog_io_type_defn.m"
                      }
#line 444 "prog_io_type_defn.m"
                  }
#line 417 "prog_io_type_defn.m"
              }
#line 476 "prog_io_type_defn.m"
            /* direct tailcall eliminated */
#line 476 "prog_io_type_defn.m"
            {
#line 476 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__HeadVar__4__tmp_copy_4 = parse_tree__prog_io_type_defn__Ctors_17;
#line 476 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0__tmp_copy_5 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_87_87;

#line 476 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 476 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__HeadVar__4_4 = parse_tree__prog_io_type_defn__HeadVar__4__tmp_copy_4;
#line 476 "prog_io_type_defn.m"
            }
#line 476 "prog_io_type_defn.m"
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
    MR_Word parse_tree__prog_io_type_defn__ExistentialConstraints_48;
#line 293 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_PredTypeTerm_17_53;
#line 288 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_50_50;
#line 288 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 288 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 288 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_54_54;
#line 288 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_55_55;
#line 288 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_49_49;

#line 288 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 288 "prog_io_type_defn.m"
      {
#line 288 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 288 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 288 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 288 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_50_50)) == (MR_mktag((MR_Integer) 0)));
#line 288 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 288 "prog_io_type_defn.m"
          {
#line 288 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_50_50, (MR_Integer) 0)));
#line 288 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_51_51, (MR_String) "=>") == 0);
#line 288 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 288 "prog_io_type_defn.m"
              {
#line 289 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 289 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 289 "prog_io_type_defn.m"
                  {
#line 289 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__STATE_VARIABLE_PredTypeTerm_17_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, (MR_Integer) 0)));
#line 289 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, (MR_Integer) 1)));
#line 289 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_54_54)) == (MR_mktag((MR_Integer) 1)));
#line 289 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 289 "prog_io_type_defn.m"
                      {
#line 289 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__ExistentialConstraints_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_54_54, (MR_Integer) 0)));
#line 289 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_54_54, (MR_Integer) 1)));
#line 289 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
        parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11 = parse_tree__prog_io_type_defn__STATE_VARIABLE_PredTypeTerm_17_53;
#line 291 "prog_io_type_defn.m"
        {
#line 291 "prog_io_type_defn.m"
          parse_tree__prog_io_typeclass__parse_class_constraints_4_p_0(parse_tree__prog_io_type_defn__ModuleName_6, parse_tree__prog_io_type_defn__VarSet_7, parse_tree__prog_io_type_defn__ExistentialConstraints_48, &parse_tree__prog_io_type_defn__MaybeConstraints_12);
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
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_40_40;
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
#line 12321 "parse_tree.prog_io_type_defn.c"
        parse_tree__prog_io_type_defn__TypeCtorInfo_40_40 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 261 "prog_io_type_defn.m"
        {
#line 261 "prog_io_type_defn.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_40_40, parse_tree__prog_io_type_defn__ModuleName_6, parse_tree__prog_io_type_defn__MainTerm_17, parse_tree__prog_io_type_defn__VarSet_7, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[124]), &parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19);
        }
#line 266 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19)) == (MR_mktag((MR_Integer) 0))))
#line 264 "prog_io_type_defn.m"
          {
#line 264 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Specs_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19, (MR_Integer) 0)));

#line 265 "prog_io_type_defn.m"
            {
#line 265 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeConstructor_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 265 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeConstructor_10, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_34));
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
                MR_Integer parse_tree__prog_io_type_defn__V_32_32;
#line 274 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_33_33;

#line 276 "prog_io_type_defn.m"
                {
#line 276 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_32_32 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, parse_tree__prog_io_type_defn__ConstructorArgs_23);
                }
#line 276 "prog_io_type_defn.m"
                {
#line 276 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_33_33 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_40_40, parse_tree__prog_io_type_defn__MainTerm_17);
                }
#line 275 "prog_io_type_defn.m"
                {
#line 275 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Ctor_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
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
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_24, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__V_33_33));
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
#line 12994 "parse_tree.prog_io_type_defn.c"
  {
#line 12996 "parse_tree.prog_io_type_defn.c"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Attributes0_13)) == (MR_mktag((MR_Integer) 1)));
#line 1312 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_85_85;
#line 1312 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_86_86;
#line 1312 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_84;
#line 1312 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_83_83;

#line 1312 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1312 "prog_io_type_defn.m"
      {
#line 1312 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Attributes0_13, (MR_Integer) 0)));
#line 1312 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Attributes0_13, (MR_Integer) 1)));
#line 1312 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_85_85, (MR_Integer) 0)));
#line 1312 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_85_85, (MR_Integer) 1)));
#line 1312 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_86_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1312 "prog_io_type_defn.m"
      }
#line 13023 "parse_tree.prog_io_type_defn.c"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 13025 "parse_tree.prog_io_type_defn.c"
      {
#line 13027 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__Spec_20;
#line 13029 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__V_59_59;
#line 13031 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__V_60_60;
#line 13033 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__V_61_61;
#line 13035 "parse_tree.prog_io_type_defn.c"
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
#line 13097 "parse_tree.prog_io_type_defn.c"
      }
#line 13099 "parse_tree.prog_io_type_defn.c"
    else
#line 13101 "parse_tree.prog_io_type_defn.c"
      {
#line 13103 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_21;
#line 13105 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__CtorsTerm_22;
#line 13107 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__MaybeWhereTerm_23;
#line 13109 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__MaybeCtors_24;
#line 13111 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__MaybeWhere_25;
#line 13113 "parse_tree.prog_io_type_defn.c"
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
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_37, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_26));
#line 153 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_37, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Params_27));
#line 153 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_37, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn_36));
#line 153 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_37, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeVarSet_35));
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
#line 13370 "parse_tree.prog_io_type_defn.c"
      }
#line 13372 "parse_tree.prog_io_type_defn.c"
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
#line 774 "prog_io_type_defn.m"
  {
#line 774 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_10)) == (MR_mktag((MR_Integer) 0)));
#line 774 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__BeforeWhereTermPrime_13;
#line 774 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__WhereTerm_14;
#line 768 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 768 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 768 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 768 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 768 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 768 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_15_15;

#line 768 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 768 "prog_io_type_defn.m"
      {
#line 768 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 0)));
#line 768 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 1)));
#line 768 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 2)));
#line 768 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 768 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 768 "prog_io_type_defn.m"
          {
#line 768 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 768 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) "where") == 0);
#line 768 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 768 "prog_io_type_defn.m"
              {
#line 769 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 769 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 769 "prog_io_type_defn.m"
                  {
#line 769 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__BeforeWhereTermPrime_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 769 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 769 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 769 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 769 "prog_io_type_defn.m"
                      {
#line 769 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__WhereTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 769 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 769 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 769 "prog_io_type_defn.m"
                      }
#line 769 "prog_io_type_defn.m"
                  }
#line 768 "prog_io_type_defn.m"
              }
#line 768 "prog_io_type_defn.m"
          }
#line 768 "prog_io_type_defn.m"
      }
#line 774 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 771 "prog_io_type_defn.m"
      {
#line 771 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_21_21;

#line 771 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__BeforeWhereTerm_11 = parse_tree__prog_io_type_defn__BeforeWhereTermPrime_13;
#line 773 "prog_io_type_defn.m"
        {
#line 773 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 773 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__WhereTerm_14));
#line 773 "prog_io_type_defn.m"
        }
#line 772 "prog_io_type_defn.m"
        {
#line 772 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeWhereDetails_12 = parse_tree__prog_io_type_defn__parse_type_decl_where_term_4_f_0(parse_tree__prog_io_type_defn__IsSolverType_7, parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__V_21_21);
        }
#line 771 "prog_io_type_defn.m"
      }
#line 774 "prog_io_type_defn.m"
    else
#line 775 "prog_io_type_defn.m"
      {
#line 775 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__BeforeWhereTerm_11 = parse_tree__prog_io_type_defn__Term_10;
#line 776 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeWhereDetails_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_4[1]);
#line 775 "prog_io_type_defn.m"
      }
#line 774 "prog_io_type_defn.m"
  }
#line 48 "prog_io_type_defn.m"
}

#line 1292 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_5(
#line 1292 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1292 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1292 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2)
#line 1292 "prog_io_type_defn.m"
{
#line 1292 "prog_io_type_defn.m"
  {
#line 1292 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 1292 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv1_HeadVar__2_102;

#line 1292 "prog_io_type_defn.m"
    {
#line 1292 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_type_defn_head__1292__1_2_p_0(((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1), &parse_tree__prog_io_type_defn__conv1_HeadVar__2_102);
    }
#line 1292 "prog_io_type_defn.m"
    *parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv1_HeadVar__2_102));
#line 1292 "prog_io_type_defn.m"
  }
#line 1292 "prog_io_type_defn.m"
}

#line 1283 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_1(
#line 1283 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 1283 "prog_io_type_defn.m"
{
#line 1283 "prog_io_type_defn.m"
  {
#line 1283 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 1283 "prog_io_type_defn.m"
    MR_builtin_longjmp((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__commit_0, 1);
#line 1283 "prog_io_type_defn.m"
  }
#line 1283 "prog_io_type_defn.m"
}

#line 1283 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_3(
#line 1283 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 1283 "prog_io_type_defn.m"
{
#line 1283 "prog_io_type_defn.m"
  {
#line 1283 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 1283 "prog_io_type_defn.m"
    (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__V_22_22 = ((MR_Word) (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__conv0_V_22_22);
#line 1283 "prog_io_type_defn.m"
    {
#line 1283 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_2(parse_tree__prog_io_type_defn__env_ptr);
#line 1283 "prog_io_type_defn.m"
      return;
    }
#line 1283 "prog_io_type_defn.m"
  }
#line 1283 "prog_io_type_defn.m"
}

#line 1283 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_2(
#line 1283 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 1283 "prog_io_type_defn.m"
{
#line 1283 "prog_io_type_defn.m"
  {
#line 1283 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 1283 "prog_io_type_defn.m"
    (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 1283 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded)
#line 1283 "prog_io_type_defn.m"
      {
#line 1283 "prog_io_type_defn.m"
        {
#line 1283 "prog_io_type_defn.m"
          (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__Param_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__V_30_30, (MR_Integer) 0)));
#line 1283 "prog_io_type_defn.m"
          (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__OtherParams_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__V_30_30, (MR_Integer) 1)));
#line 1283 "prog_io_type_defn.m"
        }
#line 1283 "prog_io_type_defn.m"
        {
#line 1284 "prog_io_type_defn.m"
          {
#line 1284 "prog_io_type_defn.m"
            (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded = mercury__list__member_2_p_0((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__TypeInfo_100_100, ((MR_Box) ((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__Param_23)), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__OtherParams_24);
          }
#line 1284 "prog_io_type_defn.m"
          if ((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded)
#line 1284 "prog_io_type_defn.m"
            {
#line 1284 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_1(parse_tree__prog_io_type_defn__env_ptr);
#line 1284 "prog_io_type_defn.m"
              return;
            }
#line 1283 "prog_io_type_defn.m"
        }
#line 1283 "prog_io_type_defn.m"
      }
#line 1283 "prog_io_type_defn.m"
  }
#line 1283 "prog_io_type_defn.m"
}

#line 1283 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_4(
#line 1283 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 1283 "prog_io_type_defn.m"
{
#line 1283 "prog_io_type_defn.m"
  {
#line 1283 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 1283 "prog_io_type_defn.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__commit_0) == 0)
#line 1283 "prog_io_type_defn.m"
      {
#line 13652 "parse_tree.prog_io_type_defn.c"
        (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__TypeInfo_100_100 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[0];
#line 1283 "prog_io_type_defn.m"
        {
#line 1283 "prog_io_type_defn.m"
          mercury__list__member_3_p_0((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__TypeInfo_100_100, &(parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__conv0_V_22_22, (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__Params0_21, &(parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__V_30_30, parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_3, parse_tree__prog_io_type_defn__env_ptr);
        }
#line 1283 "prog_io_type_defn.m"
        (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded = MR_FALSE;
#line 1283 "prog_io_type_defn.m"
      }
#line 1283 "prog_io_type_defn.m"
    else
#line 1283 "prog_io_type_defn.m"
      (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded = MR_TRUE;
#line 1283 "prog_io_type_defn.m"
  }
#line 1283 "prog_io_type_defn.m"
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

#line 1264 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__HeadTerm_7)) == (MR_mktag((MR_Integer) 0))))
#line 1270 "prog_io_type_defn.m"
      {
#line 1270 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_99_99 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1270 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadTerm_7, (MR_Integer) 2)));
#line 1270 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadResult_17;
#line 1270 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadTerm_7, (MR_Integer) 0)));
#line 1270 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadTerm_7, (MR_Integer) 1)));

#line 1272 "prog_io_type_defn.m"
        {
#line 1272 "prog_io_type_defn.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_99_99, parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__HeadTerm_7, parse_tree__prog_io_type_defn__VarSet_6, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[117]), &parse_tree__prog_io_type_defn__HeadResult_17);
        }
#line 1277 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__HeadResult_17)) == (MR_mktag((MR_Integer) 0))))
#line 1276 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = (MR_Word) parse_tree__prog_io_type_defn__HeadResult_17;
#line 1277 "prog_io_type_defn.m"
        else
#line 1278 "prog_io_type_defn.m"
          {
#line 1278 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Name_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadResult_17, (MR_Integer) 0)));
#line 1278 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ArgTerms_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadResult_17, (MR_Integer) 1)));

#line 1280 "prog_io_type_defn.m"
            {
#line 1280 "prog_io_type_defn.m"
              (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_99_99, parse_tree__prog_io_type_defn__ArgTerms_20, &(parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__Params0_21);
            }
#line 1295 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded)
#line 1291 "prog_io_type_defn.m"
              {
#line 1283 "prog_io_type_defn.m"
                {
#line 1283 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_4(&parse_tree__prog_io_type_defn__env);
                }
#line 1291 "prog_io_type_defn.m"
                if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded)
#line 1287 "prog_io_type_defn.m"
                  {
#line 1287 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 1287 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 1287 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_47_47;
#line 1287 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Spec_86;

#line 1289 "prog_io_type_defn.m"
                    {
#line 1289 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1289 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__HeadContext_15));
#line 1289 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[118])));
#line 1289 "prog_io_type_defn.m"
                    }
#line 1289 "prog_io_type_defn.m"
                    {
#line 1289 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1289 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 1289 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1289 "prog_io_type_defn.m"
                    }
#line 1288 "prog_io_type_defn.m"
                    {
#line 1288 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Spec_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1288 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1288 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1288 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_86, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 1288 "prog_io_type_defn.m"
                    }
#line 1290 "prog_io_type_defn.m"
                    {
#line 1290 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1290 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_86));
#line 1290 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1290 "prog_io_type_defn.m"
                    }
#line 1290 "prog_io_type_defn.m"
                    {
#line 1290 "prog_io_type_defn.m"
                      MR_Word base;
#line 1290 "prog_io_type_defn.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1290 "prog_io_type_defn.m"
                      *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = base;
#line 1290 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 1290 "prog_io_type_defn.m"
                    }
#line 1287 "prog_io_type_defn.m"
                  }
#line 1291 "prog_io_type_defn.m"
                else
#line 1292 "prog_io_type_defn.m"
                  {
#line 1292 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Params_25;

#line 1292 "prog_io_type_defn.m"
                    {
#line 1292 "prog_io_type_defn.m"
                      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_4[0], (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__Params0_21, &parse_tree__prog_io_type_defn__Params_25);
                    }
#line 1293 "prog_io_type_defn.m"
                    {
#line 1293 "prog_io_type_defn.m"
                      MR_Word base;
#line 1293 "prog_io_type_defn.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1293 "prog_io_type_defn.m"
                      *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = base;
#line 1293 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_19));
#line 1293 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Params_25));
#line 1293 "prog_io_type_defn.m"
                    }
#line 1292 "prog_io_type_defn.m"
                  }
#line 1291 "prog_io_type_defn.m"
              }
#line 1295 "prog_io_type_defn.m"
            else
#line 1296 "prog_io_type_defn.m"
              {
#line 1296 "prog_io_type_defn.m"
                MR_String parse_tree__prog_io_type_defn__HeadTermStr_26;
#line 1296 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 1296 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_53_53;
#line 1296 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_62_62;
#line 1296 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_63_63;
#line 1296 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_64_64;
#line 1296 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_65_65;
#line 1296 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_68_68;
#line 1296 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Pieces_89;
#line 1296 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_90;

#line 1296 "prog_io_type_defn.m"
                {
#line 1296 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__HeadTermStr_26 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_99_99, parse_tree__prog_io_type_defn__VarSet_6, parse_tree__prog_io_type_defn__HeadTerm_7);
                }
#line 1298 "prog_io_type_defn.m"
                {
#line 1298 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1298 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1298 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_53_53, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__HeadTermStr_26));
#line 1298 "prog_io_type_defn.m"
                }
#line 1298 "prog_io_type_defn.m"
                {
#line 1298 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1298 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_53_53));
#line 1298 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[21])));
#line 1298 "prog_io_type_defn.m"
                }
#line 1297 "prog_io_type_defn.m"
                {
#line 1297 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Pieces_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1297 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[119])));
#line 1297 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_89, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_52_52));
#line 1297 "prog_io_type_defn.m"
                }
#line 1300 "prog_io_type_defn.m"
                {
#line 1300 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1300 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_89));
#line 1300 "prog_io_type_defn.m"
                }
#line 1300 "prog_io_type_defn.m"
                {
#line 1300 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1300 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_65_65));
#line 1300 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1300 "prog_io_type_defn.m"
                }
#line 1300 "prog_io_type_defn.m"
                {
#line 1300 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1300 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__HeadContext_15));
#line 1300 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_64_64));
#line 1300 "prog_io_type_defn.m"
                }
#line 1300 "prog_io_type_defn.m"
                {
#line 1300 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1300 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_63_63));
#line 1300 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1300 "prog_io_type_defn.m"
                }
#line 1299 "prog_io_type_defn.m"
                {
#line 1299 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1299 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_90, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1299 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1299 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_90, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_62_62));
#line 1299 "prog_io_type_defn.m"
                }
#line 1301 "prog_io_type_defn.m"
                {
#line 1301 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1301 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_90));
#line 1301 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1301 "prog_io_type_defn.m"
                }
#line 1301 "prog_io_type_defn.m"
                {
#line 1301 "prog_io_type_defn.m"
                  MR_Word base;
#line 1301 "prog_io_type_defn.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1301 "prog_io_type_defn.m"
                  *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = base;
#line 1301 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_68_68));
#line 1301 "prog_io_type_defn.m"
                }
#line 1296 "prog_io_type_defn.m"
              }
#line 1278 "prog_io_type_defn.m"
          }
#line 1270 "prog_io_type_defn.m"
      }
#line 1264 "prog_io_type_defn.m"
    else
#line 1264 "prog_io_type_defn.m"
      {
#line 1264 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadTerm_7, (MR_Integer) 1)));
#line 1264 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_12;
#line 1264 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_77_77;
#line 1264 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_78_78;
#line 1264 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_83_83;
#line 1264 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadTerm_7, (MR_Integer) 0)));

#line 1267 "prog_io_type_defn.m"
        {
#line 1267 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1267 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_10));
#line 1267 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[120])));
#line 1267 "prog_io_type_defn.m"
        }
#line 1267 "prog_io_type_defn.m"
        {
#line 1267 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1267 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_78_78));
#line 1267 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1267 "prog_io_type_defn.m"
        }
#line 1266 "prog_io_type_defn.m"
        {
#line 1266 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1266 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1266 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1266 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_77_77));
#line 1266 "prog_io_type_defn.m"
        }
#line 1268 "prog_io_type_defn.m"
        {
#line 1268 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1268 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_12));
#line 1268 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1268 "prog_io_type_defn.m"
        }
#line 1268 "prog_io_type_defn.m"
        {
#line 1268 "prog_io_type_defn.m"
          MR_Word base;
#line 1268 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1268 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = base;
#line 1268 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_83_83));
#line 1268 "prog_io_type_defn.m"
        }
#line 1264 "prog_io_type_defn.m"
      }
#line 38 "prog_io_type_defn.m"
  }
#line 38 "prog_io_type_defn.m"
}

#line 546 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_1(
#line 546 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 546 "prog_io_type_defn.m"
{
#line 546 "prog_io_type_defn.m"
  {
#line 546 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 546 "prog_io_type_defn.m"
    MR_builtin_longjmp((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__commit_0, 1);
#line 546 "prog_io_type_defn.m"
  }
#line 546 "prog_io_type_defn.m"
}

#line 546 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_2(
#line 546 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 546 "prog_io_type_defn.m"
{
#line 546 "prog_io_type_defn.m"
  {
#line 546 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 546 "prog_io_type_defn.m"
    {
#line 14085 "parse_tree.prog_io_type_defn.c"
      (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TypeCtorInfo_64_78 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 547 "prog_io_type_defn.m"
      {
#line 547 "prog_io_type_defn.m"
        mercury__term__coerce_var_2_p_0((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TypeCtorInfo_63_77, (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TypeCtorInfo_64_78, (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__Var_35, &(parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TVar_36);
      }
#line 548 "prog_io_type_defn.m"
      {
#line 548 "prog_io_type_defn.m"
        (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], ((MR_Box) ((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TVar_36)), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__Params_34);
      }
#line 548 "prog_io_type_defn.m"
      (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = !((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded);
#line 548 "prog_io_type_defn.m"
      if ((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded)
#line 548 "prog_io_type_defn.m"
        {
#line 548 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_1(parse_tree__prog_io_type_defn__env_ptr);
#line 548 "prog_io_type_defn.m"
          return;
        }
#line 546 "prog_io_type_defn.m"
    }
#line 546 "prog_io_type_defn.m"
  }
#line 546 "prog_io_type_defn.m"
}

#line 546 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_3(
#line 546 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 546 "prog_io_type_defn.m"
{
#line 546 "prog_io_type_defn.m"
  {
#line 546 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 546 "prog_io_type_defn.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__commit_0) == 0)
#line 546 "prog_io_type_defn.m"
      {
#line 14131 "parse_tree.prog_io_type_defn.c"
        (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TypeCtorInfo_63_77 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 546 "prog_io_type_defn.m"
        {
#line 546 "prog_io_type_defn.m"
          mercury__term__contains_var_2_p_1((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TypeCtorInfo_63_77, (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__BodyTerm_19, &(parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__Var_35, parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_2, parse_tree__prog_io_type_defn__env_ptr);
        }
#line 546 "prog_io_type_defn.m"
        (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = MR_FALSE;
#line 546 "prog_io_type_defn.m"
      }
#line 546 "prog_io_type_defn.m"
    else
#line 546 "prog_io_type_defn.m"
      (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = MR_TRUE;
#line 546 "prog_io_type_defn.m"
  }
#line 546 "prog_io_type_defn.m"
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
#line 536 "prog_io_type_defn.m"
          {
#line 536 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__MaybeNameAndParams_31;

#line 537 "prog_io_type_defn.m"
            {
#line 537 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__HeadTerm_18, &parse_tree__prog_io_type_defn__MaybeNameAndParams_31);
            }
#line 542 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeNameAndParams_31)) == (MR_mktag((MR_Integer) 0))))
#line 540 "prog_io_type_defn.m"
              {
#line 540 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Specs_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeNameAndParams_31, (MR_Integer) 0)));

#line 541 "prog_io_type_defn.m"
                {
#line 541 "prog_io_type_defn.m"
                  MR_Word base;
#line 541 "prog_io_type_defn.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 541 "prog_io_type_defn.m"
                  *parse_tree__prog_io_type_defn__MaybeItem_14 = base;
#line 541 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_32));
#line 541 "prog_io_type_defn.m"
                }
#line 540 "prog_io_type_defn.m"
              }
#line 542 "prog_io_type_defn.m"
            else
#line 543 "prog_io_type_defn.m"
              {
#line 543 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Name_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameAndParams_31, (MR_Integer) 0)));

#line 543 "prog_io_type_defn.m"
                (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__Params_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameAndParams_31, (MR_Integer) 1)));
#line 546 "prog_io_type_defn.m"
                {
#line 546 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_3(&parse_tree__prog_io_type_defn__env);
                }
#line 557 "prog_io_type_defn.m"
                if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded)
#line 550 "prog_io_type_defn.m"
                  {
#line 550 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_66_80 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 550 "prog_io_type_defn.m"
                    MR_String parse_tree__prog_io_type_defn__BodyTermStr_37;
#line 550 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Pieces_38;
#line 550 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Spec_39;
#line 550 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_50_50;
#line 550 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_53_53;
#line 550 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_54_54;
#line 550 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_63_63;
#line 550 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_64_64;
#line 550 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_65_65;
#line 550 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_66_66;
#line 550 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_67_67;
#line 550 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_70_70;

#line 550 "prog_io_type_defn.m"
                    {
#line 550 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__BodyTermStr_37 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_66_80, parse_tree__prog_io_type_defn__VarSet_9, (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__BodyTerm_19);
                    }
#line 553 "prog_io_type_defn.m"
                    {
#line 553 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 553 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 553 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__BodyTermStr_37));
#line 553 "prog_io_type_defn.m"
                    }
#line 553 "prog_io_type_defn.m"
                    {
#line 553 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 553 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_54_54));
#line 553 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[21])));
#line 553 "prog_io_type_defn.m"
                    }
#line 552 "prog_io_type_defn.m"
                    {
#line 552 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 552 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_50_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[115])));
#line 552 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_50_50, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_53_53));
#line 552 "prog_io_type_defn.m"
                    }
#line 551 "prog_io_type_defn.m"
                    {
#line 551 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Pieces_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[114])));
#line 551 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_38, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_50_50));
#line 551 "prog_io_type_defn.m"
                    }
#line 555 "prog_io_type_defn.m"
                    {
#line 555 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_65_65 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_66_80, (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__BodyTerm_19);
                    }
#line 555 "prog_io_type_defn.m"
                    {
#line 555 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 555 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_38));
#line 555 "prog_io_type_defn.m"
                    }
#line 555 "prog_io_type_defn.m"
                    {
#line 555 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_67_67));
#line 555 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 555 "prog_io_type_defn.m"
                    }
#line 555 "prog_io_type_defn.m"
                    {
#line 555 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 555 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_65_65));
#line 555 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_64_64, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_66_66));
#line 555 "prog_io_type_defn.m"
                    }
#line 555 "prog_io_type_defn.m"
                    {
#line 555 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_64_64));
#line 555 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 555 "prog_io_type_defn.m"
                    }
#line 554 "prog_io_type_defn.m"
                    {
#line 554 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Spec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 554 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 554 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 554 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_39, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_63_63));
#line 554 "prog_io_type_defn.m"
                    }
#line 556 "prog_io_type_defn.m"
                    {
#line 556 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 556 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_39));
#line 556 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 556 "prog_io_type_defn.m"
                    }
#line 556 "prog_io_type_defn.m"
                    {
#line 556 "prog_io_type_defn.m"
                      MR_Word base;
#line 556 "prog_io_type_defn.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 556 "prog_io_type_defn.m"
                      *parse_tree__prog_io_type_defn__MaybeItem_14 = base;
#line 556 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_70_70));
#line 556 "prog_io_type_defn.m"
                    }
#line 550 "prog_io_type_defn.m"
                  }
#line 557 "prog_io_type_defn.m"
                else
#line 559 "prog_io_type_defn.m"
                  {
#line 559 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__MaybeType_41;

#line 560 "prog_io_type_defn.m"
                    {
#line 560 "prog_io_type_defn.m"
                      parse_tree__prog_io_util__parse_type_4_p_0((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__BodyTerm_19, parse_tree__prog_io_type_defn__VarSet_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_type_defn__MaybeType_41);
                    }
#line 570 "prog_io_type_defn.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeType_41)) == (MR_mktag((MR_Integer) 0))))
#line 572 "prog_io_type_defn.m"
                      *parse_tree__prog_io_type_defn__MaybeItem_14 = (MR_Word) parse_tree__prog_io_type_defn__MaybeType_41;
#line 570 "prog_io_type_defn.m"
                    else
#line 562 "prog_io_type_defn.m"
                      {
#line 562 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__Type_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeType_41, (MR_Integer) 0)));
#line 562 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__TypeVarSet_43;
#line 562 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__TypeDefn_44;
#line 562 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__ItemTypeDefn_45;
#line 562 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__Item_46;
#line 562 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__MaybeItem0_47;

#line 563 "prog_io_type_defn.m"
                        {
#line 563 "prog_io_type_defn.m"
                          mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_9, &parse_tree__prog_io_type_defn__TypeVarSet_43);
                        }
#line 564 "prog_io_type_defn.m"
                        {
#line 564 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__TypeDefn_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 564 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__TypeDefn_44, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Type_42));
#line 564 "prog_io_type_defn.m"
                        }
#line 565 "prog_io_type_defn.m"
                        {
#line 565 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__ItemTypeDefn_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 565 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_45, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_33));
#line 565 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_45, 1) = ((MR_Box) ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__Params_34));
#line 565 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_45, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn_44));
#line 565 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_45, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeVarSet_43));
#line 565 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_45, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_12));
#line 565 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_45, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__SeqNum_13));
#line 565 "prog_io_type_defn.m"
                        }
#line 567 "prog_io_type_defn.m"
                        {
#line 567 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__Item_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 567 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__Item_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 567 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__Item_46, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__ItemTypeDefn_45));
#line 567 "prog_io_type_defn.m"
                        }
#line 568 "prog_io_type_defn.m"
                        {
#line 568 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__MaybeItem0_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 568 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItem0_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Item_46));
#line 568 "prog_io_type_defn.m"
                        }
#line 569 "prog_io_type_defn.m"
                        {
#line 569 "prog_io_type_defn.m"
                          parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_type_defn__MaybeItem0_47, parse_tree__prog_io_type_defn__Attributes_11, parse_tree__prog_io_type_defn__MaybeItem_14);
#line 569 "prog_io_type_defn.m"
                          return;
                        }
#line 562 "prog_io_type_defn.m"
                      }
#line 559 "prog_io_type_defn.m"
                  }
#line 543 "prog_io_type_defn.m"
              }
#line 536 "prog_io_type_defn.m"
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
